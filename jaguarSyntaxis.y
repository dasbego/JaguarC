%{

#include "jaguar.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int yylex();

%}

%union{
	int i;
	float f;
	char *c;
	char car;
	int b;
	struct simbolo *sim;
} //Union espefica todos los posibles typos para lo tokens
%error-verbose

%token PROGRAM PROGRAMEND STRUCT IF ELSE RETURN FOR AND OR 
%token READ WRITE
%token <c> ID OPERADORRELACIONAL CADENA OPERADOR TYPE MAIN
%token <i> INTEGER
%token <f> REAL
%token <b> BOOLEAN

%nonassoc OR
%nonassoc AND
%nonassoc OPERADORRELACIONAL
%right '='
%left '+' '-'
%left '*' '/'

//%type <c> program
%type <sim> variable funcion firma
%type <c> varstruct lista_variables lista_argumentos argumentos_declaracion lista_funciones declaracionf expresion argumentos_llamada
%type <c> sigvarStruct attrstruct expresion_aritmetica lista_ids valor iteracion estatuto_decision sino llamada_a_funcion
%type <c> firmasFunciones lista_estructuras declaracionEst sigFirma principal argumentos_declaracion_firma
%start s 

%%  /* Grammar rules and actions follow */

s: PROGRAM ID ':' program
;

program: declaracionEst firmasFunciones principal declaracionf PROGRAMEND {
	printSimbTable();
}
;

principal: MAIN '(' argumentos_declaracion ')' '{' cuerpo '}' {
	$$="";
}
;

declaracionEst: estructura lista_estructuras{
	$$="";
}
| /*no hay estructuras*/ {
	$$="";
}
;

lista_estructuras: estructura lista_estructuras {
	$$="";
}
| /*ya no hay mas estructuras*/ {
	$$="";
}

estructura: STRUCT ID '{' varstruct '}' ';' {
				/*cuando se declara un struct*/
				char contStruct[300];
				sprintf(contStruct, "Struct(%s)", $4);
				char sc[30];
				sprintf(sc,"%s",$2);
				insertTable($2,strdup(contStruct),sc);
				actualizaScopes($2);
			}
;

varstruct: variable ';' sigvarStruct {
				struct simbolo *st = $1;
				st->scope = "";
				insertTable(st->name, st->type, st->scope);
				$$=$3;
		}
;

sigvarStruct: /*ya no hay variables*/ {$$="";}
			| varstruct { $$=$1;}
;

attrstruct: ID "." ID {
			//buscar si $1 existe y despues si $3 existe entonces $$ = $3
		if(search($1) && search($3))
			$$ = $3;
		else{
			yyerror("variable o atributo desconocido.");
			abort();
		}
	}
	| ID '.' ID '[' INTEGER ']'{
			//buscar si $1 existe y despues si $3 existe entonces $$ = $3
		if(search($1) && search($3))
			$$ = $3;
		else{
			yyerror("variable o atributo desconocido.");
			abort();
		}
	}
;

firmasFunciones: firma sigFirma {
	struct simbolo *st = $1;
	insertTable(st->name, st->type, st->scope);
	actualizaScopes(st->scope);
	//actualizaScopes("main");
	$$="";
}
;

sigFirma: firma sigFirma {
	struct simbolo *st = $1;
	insertTable(st->name, st->type, st->scope);
	actualizaScopes(st->scope);
	$$="";
}
| /*ya no hay firmas*/ {
	$$="";
}
;

firma: TYPE ID '(' argumentos_declaracion_firma ')' ';'{
		//printf("voy a crear el malloc");
		struct simbolo *st = malloc(sizeof(struct simbolo));
		char type[300];
		st->name = $2;
		st->scope = $2;
		printf("%s\n", st->scope);
		sprintf(type, "(%s)->%s",$4,$1);
		st->type = type;
		$$=st;
}
;

argumentos_declaracion_firma: variable lista_argumentos{
			 	struct simbolo *st = $1;
				char *tmp;
				tmp = st->type;
				strcat(tmp, $2);
				$$ = tmp;
			}
			|/*vacio*/ {$$ = "";}
;

declaracionv: variable lista_variables {
		struct simbolo *st = $1;
		printf("%s", st->scope);
		insertTable(st->name, st->type, st->scope);
}
;

variable: TYPE ID {
			struct simbolo *st = malloc(sizeof(struct simbolo));
			char *type = $1;
			st->name = $2;
			st->type = type;
			st->scope = "";
			$$ = st;
		}
		| TYPE ID '[' INTEGER ']'	{
			struct simbolo *st = malloc(sizeof(struct simbolo));
			char *type;
			sprintf(type,"array(0..%d,%s)",$4, $1);
			st->name = $2;
			st->type = type;
			st->scope = "";
			$$ = st;
		}
;

lista_variables: ',' variable lista_variables {	
					struct simbolo *st = $2;
					insertTable(st->name, st->type, st->scope);
					$$="";
				}
				| ';' {$$="";}
;

declaracionf: funcion lista_funciones {
				if(strcmp($2,""))
				{
					struct simbolo *st = $1;
					printf("%s", st->name);
					//insertTable(st->name, st->type, st->scope);
					//actualizaScopes(st->name);
				}
				$$ = "";
			}
			| /*no hay funciones*/ {$$ = "";}
;

funcion: TYPE ID '(' argumentos_declaracion ')' '{' cuerpo '}' {
	struct simbolo *st = malloc(sizeof(struct simbolo));
	char buff[300];
	sprintf(buff, "(%s)->%s", $4, $1);
	st->name = $2;
	st->type = buff;	
	st->scope = $2;
	//struct simbolo *sp = &tablaSimbolos[idToHash($2)%TableHash];
    //tablaSimbolos[idToHash($2)%TableHash].scope = $2;

	actualizaScopes($2);
	$$ = st;
}
;

lista_funciones: funcion lista_funciones {
					if(strcmp($2,""))
					{
						struct simbolo *st = $1;
						//insertTable(st->name, st->type, st->scope);
					}
					$$ = "";
				}
				| /*vacio*/ {$$ = "";}
;

//Cuando se crea la funcion
argumentos_declaracion: variable lista_argumentos{
				//char buff[350];
			 	struct simbolo *st = $1;
			 	insertTable(st->name, st->type, st->scope);
				//sprintf(buff,"%s%s",st->type,$2);
				char *tmp;
				tmp = st->type;
				strcat(tmp, $2);
				$$ = tmp;
			}
					|/*vacio*/ {$$ = "";}
;

lista_argumentos: ',' variable lista_argumentos {
					struct simbolo *st = $2;
			 		insertTable(st->name, st->type, st->scope);
					char *temp;
					strcpy(temp,"X");
					strcat(temp,st->type);
					char a[50];
					sprintf(a,"%s", $3);
					strcat(temp, $3);
					char b[100];
					sprintf(b,"%s",temp);
					$$ = b;
				}
				| /*vacio*/ {$$ = "";}
;

cuerpo: lista_sentencias
;

lista_sentencias: /*vacio*/
				| sentencia lista_sentencias
				| RETURN expresion ';'
;

sentencia: asignacion ';' 
			| declaracionv
			| iteracion
			| estatuto_decision
			| llamada_a_funcion ';'
			| llamada_funcion_definida ';'
			| attrstruct ';'
;

asignacion: ID '=' expresion {
		/*buscar si existe id en este scope*/
	struct simbolo *st = search($1);
	if(st){
		//printf("A comparar: %s,%s",st->type, $3);
		if(strcmp(st->type,$3)){
			yyerror("Tipos no compatibles para la asignacion");
			abort();
		}

	}else{
		yyerror("variable desconocida: %s", $1);
		abort();
	}
}
;

expresion: llamada_a_funcion {
			$$ = $1;
		}
		| expresion_aritmetica{
			$$ = $1;
		}
		| '(' expresion ')' {
			$$ = $2;
		}
;

llamada_a_funcion: ID '(' argumentos_llamada ')' {
				//char buff[300];
				//sprintf(buff,"(%s)",$3);

				struct  simbolo *tmp = search($1);
				if(tmp)
				{
					$$ = tmp->type;
				}

				// if(search($1,scope)){ //existe la id de funcion
				// 	struct simbolo *st = search($1,scope);
				// 	//if(strcmp(st->type, buff)){ //
				// 	if(!strcmp(st->type, "")){ 
				// 		$$ = st->type;
				// 	}
				else{
					yyerror("funcion desconocida: ");
					abort();
				}
			}
;

llamada_funcion_definida: READ '(' ')'
				| WRITE '(' valor ')'
;

argumentos_llamada: ID lista_ids {
					if(strcmp($2,"")){
						char buff[350];
						sprintf(buff,"%s", $1);
						$$ = buff;
					}else{
						$$="";
					}
				}
				| /*no tiene argumentos*/ {$$ = "";} 
;

lista_ids: ',' ID lista_ids {$$="";}
		| /*vacio*/ {$$="";}
;

expresion_aritmetica: expresion_aritmetica '+' expresion_aritmetica {
						$$ = resultOperations($1,$3,"+");
					}
					| expresion_aritmetica '-' expresion_aritmetica {
						$$ = resultOperations($1,$3,"-");
					}
					| expresion_aritmetica '*' expresion_aritmetica {
						$$ = resultOperations($1,$3,"*");
					}
					| expresion_aritmetica '/' expresion_aritmetica {
						$$ = resultOperations($1,$3,"/");
					}
					| valor {
						$$ = $1;
					}
					| ID {
						struct simbolo *st;
						st = search($1);
						$$ = st->type;
					}
;

valor: INTEGER {$$="int";}
	| REAL {$$="float";}
	| CADENA {$$="string";}
	| BOOLEAN {$$="bool";}
	| attrstruct {$$=$1;}
;

iteracion: FOR '(' asignacion ';' lista_condiciones ';' asignacion ')' '{' cuerpo '}' {
			$$ = "";

}
		| FOR '(' ';' lista_condiciones ';' asignacion ')' '{' cuerpo '}' {
			$$ = "";
}
;

estatuto_decision: IF '(' lista_condiciones ')' '{' cuerpo '}' sino {
		$$ = "";
}
;

sino: /*no tiene else*/ {$$ = "";}
	| ELSE '{' cuerpo '}'  {$$ = "";}

condicion: expresion OPERADORRELACIONAL expresion {

	}
;

lista_condiciones: '(' condicion ')'
				| '(' condicion ')' AND lista_condiciones 
				| '(' condicion ')' OR lista_condiciones
;


%% 