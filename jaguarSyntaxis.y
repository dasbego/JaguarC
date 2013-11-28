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
%type <c> firmasFunciones lista_estructuras declaracionEst sigFirma principal
%start s 

%%  /* Grammar rules and actions follow */

s: PROGRAM ID ':' program
;

program: declaracionEst firmasFunciones declaracionf PROGRAMEND {
	//printf("Scope: %s", MAIN);
	//$$ = "";
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
				insertTable($2,strdup(contStruct));
			}
;

varstruct: variable ';' sigvarStruct {
				struct simbolo *st = $1;
				insertTable(st->name, st->type);
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

firmasFunciones: firma sigFirma principal {
	struct simbolo *st = $1;
	insertTable(st->name, st->type);
	$$="";
}
| principal
;

sigFirma: firma sigFirma {
	struct simbolo *st = $1;
	insertTable(st->name, st->type);
	$$="";
}
| /*ya no hay firmas*/ {
	$$="";
}
;

firma: TYPE ID '(' argumentos_declaracion ')' ';'{
		//printf("voy a crear el malloc");
		struct simbolo *st = malloc(sizeof(struct simbolo));
		char type[300];
		st->name = $2;
		sprintf(type, "(%s)->%s",$4,$1);
		st->type = type;
		$$=st;
}
;

declaracionv: variable lista_variables {
		struct simbolo *st = $1;
		insertTable(st->name, st->type);
}
;

variable: TYPE ID {
			struct simbolo *st = malloc(sizeof(struct simbolo));
			char *type = $1;
			st->name = $2;
			st->type = type;
			$$ = st;
		}
		| TYPE ID '[' INTEGER ']'	{
			struct simbolo *st = malloc(sizeof(struct simbolo));
			char *type;
			sprintf(type,"array(0..%d,%s)",$4, $1);
			st->name = $2;
			st->type = type;
			$$ = st;
		}
;

lista_variables: ',' variable lista_variables {	
					struct simbolo *st = $2;
					insertTable(st->name, st->type);
					$$="";
				}
				| ';' {$$="";}
;

declaracionf: funcion lista_funciones {
				if(strcmp($2,""))
				{
					struct simbolo *st = $1;
					insertTable(st->name, st->type);
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
	insertTable(st->name, st->type);
	$$ = st;
}
;

lista_funciones: funcion lista_funciones {
					if(strcmp($2,""))
					{
						struct simbolo *st = $1;
						insertTable(st->name, st->type);
					}
					$$ = "";
				}
				| /*vacio*/ {$$ = "";}
;

//Cuando se crea la funcion
argumentos_declaracion: variable lista_argumentos{
				//char buff[350];
			 	struct simbolo *st = $1;
				char *buff="";
			 	insertTable(st->name, st->type);
				//sprintf(buff,"%s%s",st->type,$2);
				buff = st->type;
				printf("regreso %s\n", buff);
				char *tmp;
				int i=0;
				while(*buff){
					tmp[i++]=*buff++;
				}
				$$ = tmp;
			}
					|/*vacio*/ {$$ = "";}
;

lista_argumentos: ',' variable lista_argumentos {
					struct simbolo *st = $2;
			 		insertTable(st->name, st->type);
					char *buff="";
					buff = st->type;
					printf("regreso %s\n", buff);
					char *temp;
					int i=0;
					while(*buff){
						temp[i++]=*buff++;
					}
					$$ = temp;
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