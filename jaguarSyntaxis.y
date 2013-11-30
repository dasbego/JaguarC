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
%type <c> firmasFunciones lista_estructuras declaracionEst sigFirma principal argumentos_declaracion_firma varID
%type <c> lista_argumentos_firma
%start s 

%%  /* Grammar rules and actions follow */

s: PROGRAM ID ':' program
;

program: declaracionEst firmasFunciones principal declaracionf PROGRAMEND {
	int cc = 0;
	printSimbTable();
	printf("\n- - - - - - Errores encontrados: %d - - - - - -\n ", counter);
	while(cc < counter)
	{
		printf( "\n*Linea[%d]  : %s", ErrorLineNumb[cc], Errors[cc]);
		cc++;
	}
	printf("\n ");
}
;

principal: MAIN '(' argumentos_declaracion ')' '{' cuerpo '}' {
	actualizaScopes("main");
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
				char sc[30];
				char contStruct[300];
				sprintf(contStruct, "Struct{%s}", $4);				
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
		struct simbolo *checkStruct = search($1);
		struct simbolo *checkStruct2 = search($3);
		if( (strcmp(checkStruct->name, "-1")) && (strcmp(checkStruct2->name, "-1")) )
			$$ = $3;
		else{				
			strcpy(Errors[counter], "variable o atributo desconocido.");
			ErrorLineNumb[counter++] = yylineno;
		}
	}
	| ID '.' ID '[' INTEGER ']'{
			//buscar si $1 existe y despues si $3 existe entonces $$ = $3
		struct simbolo *checkStruct = search($1);
		struct simbolo *checkStruct2 = search($3);
		if( (strcmp(checkStruct->name, "-1")) && (strcmp(checkStruct2->name, "-1")) )
			$$ = $3;
		else{
			
			strcpy(Errors[counter], "variable o atributo desconocido.");
			ErrorLineNumb[counter++] = yylineno;
		}
	}
;

firmasFunciones: firma sigFirma {
	struct simbolo *st = $1;
	actualizaScopes(st->scope);
	$$="";
}
;

sigFirma: firma sigFirma {
	struct simbolo *st = $1;
	//insertTable(st->name, st->type, st->scope);
	actualizaScopes(st->scope);
	$$="";
}
| /*ya no hay firmas*/ {
	$$="";
}
;

firma: TYPE ID '(' argumentos_declaracion_firma ')' ';'{
		struct simbolo *st = malloc(sizeof(struct simbolo));
		char type[300];
		st->name = $2;
		st->scope = $2;
		sprintf(type, "(%s)->%s",$4,$1);
		st->type = type;
		insertTable(st->name, st->type, st->scope);
		//printf("PITOCHU %s\n", st->type);
		$$=st;
}
;

argumentos_declaracion_firma: variable lista_argumentos_firma{
			 	struct simbolo *st = $1;
				char *tmp;
				tmp = st->type;
				strcat(tmp, $2);
				//printf("%s\n",tmp);
				$$ = tmp;
			}
			|/*vacio*/ {$$ = "";}
;

lista_argumentos_firma: ',' variable lista_argumentos_firma {
					char temp[50];
					char b[100];
					struct simbolo *st = $2;			
					strcpy(temp,"X");
					strcat(temp,st->type);	
					strcat(temp, $3);				
					sprintf(b,"%s",temp);
					//printf("Regreso %s\n",b);
					$$ = b;
				}
				| /*vacio*/ {$$ = "";}
;

declaracionv: variable lista_variables {
		struct simbolo *st = $1;
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
			char type[30];
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
					//printf("%s", st->name);
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
	actualizaScopes($2);
	$$ = st;
}
;

lista_funciones: funcion lista_funciones {
					$$ = "";
				}
				| /*vacio*/ {$$ = "";}
;

//Cuando se crea la funcion
argumentos_declaracion: variable lista_argumentos{
				char *tmp;
			 	struct simbolo *st = $1;
			 	insertTable(st->name, st->type, st->scope);	
				tmp = st->type;
				strcat(tmp, $2);
				//printf("Regreso %s\n",tmp);
				$$ = tmp;
			}
					|/*vacio*/ {$$ = "";}
;

lista_argumentos: ',' variable lista_argumentos {
					char *temp;
					char a[50];
					char b[100];
					struct simbolo *st = $2;
			 		insertTable(st->name, st->type, st->scope);					
					strcpy(temp,"X");
					strcat(temp,st->type);					
					sprintf(a,"%s", $3);
					strcat(temp, $3);				
					sprintf(b,"%s",temp);
					//printf("Regreso %s\n",b);
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
;

varID: ID {$$=$1;}
| attrstruct {$$=$1;}

asignacion: varID '=' expresion {
		/*buscar si existe id en este scope*/
	struct simbolo *st = search($1);
	//printf("%s\n",$3);
	if(st){
		if( (!strcmp(st->name, "-1")) ){
			strcpy(Errors[counter], "Variable no declarada previamente");
			ErrorLineNumb[counter++] = yylineno;
		}else{
			if(strcmp(st->type,$3)){
				//yyerror("Tipos no compatibles para la asignacion");
				strcpy(Errors[counter], "Tipos no compatibles para la asignacion");
				ErrorLineNumb[counter++] = yylineno;
			}
		}
		

	}else{
		//yyerror("variable desconocida: %s", $1);		
		strcpy(Errors[counter], "variable desconocida");
		ErrorLineNumb[counter++] = yylineno;
	}
}
;

expresion: llamada_a_funcion {
			$$ = $1;
		}
		| expresion_aritmetica{
			$$ = $1;
		}
		| '(' expresion ')'{
			$$ = $2;
		}
;

llamada_a_funcion: ID '(' argumentos_llamada ')' {			
				struct simbolo *checkStruct = search($1);
				if((strcmp(checkStruct->name, "-1")))
				{
					$$ = checkStruct->type;
				}

				else{				
					strcpy(Errors[counter], "Funcion desconocida/no declarada");
					ErrorLineNumb[counter++] = yylineno;
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
						printf("%s\n",resultOperations($1,$3,"+"));
						if(strcmp (resultOperations($1,$3,"+"), "error") == 0)
						{
							strcpy(Errors[counter], "Operacion no permitida entre los Tipos");
							ErrorLineNumb[counter++] = yylineno;
						}

						$$ = resultOperations($1,$3,"+");
					}
					| expresion_aritmetica '-' expresion_aritmetica {
						if(strcmp (resultOperations($1,$3,"-"), "error") == 0)
						{
							strcpy(Errors[counter], "Operacion no permitida entre los Tipos");
							ErrorLineNumb[counter++] = yylineno;
						}
						$$ = resultOperations($1,$3,"-");
					}
					| expresion_aritmetica '*' expresion_aritmetica {
						if(strcmp (resultOperations($1,$3,"*"), "error") == 0)
						{
							strcpy(Errors[counter], "Operacion no permitida entre los Tipos");
							ErrorLineNumb[counter++] = yylineno;
						}
						$$ = resultOperations($1,$3,"*");
					}
					| expresion_aritmetica '/' expresion_aritmetica {
						if(strcmp (resultOperations($1,$3,"/"), "error") == 0)
						{
							strcpy(Errors[counter], "Operacion no permitida entre los Tipos");
							ErrorLineNumb[counter++] = yylineno;
						}
						$$ = resultOperations($1,$3,"/");
					}
					| valor {
						$$ = $1;
					}
					| ID {
						//							NOTA * Type void!!! Se puede hacer operaciones?
						struct simbolo *st;
						st = search($1);
						if( (!strcmp(st->name, "-1")) ){
							strcpy(Errors[counter], "No se ha encontrado el ID para la expresion aritmetica");
							ErrorLineNumb[counter++] = yylineno;
							$$ = "void";
						}else{
							$$ = st->type;
						}
					}
					| attrstruct {$$=$1;}
;

valor: INTEGER {$$="int";}
	| REAL {$$="float";}
	| CADENA {$$="string";}
	| BOOLEAN {$$="bool";}
	// | attrstruct {$$=$1;}
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
	| BOOLEAN
	| ID {
		struct simbolo *sp = search($1);
		if(strcmp(sp->type,"bool")!=0){
			strcpy(Errors[counter], "ID usado para condicion no es tipo bool");
			ErrorLineNumb[counter++] = yylineno;
		}
	} 
;

lista_condiciones: '(' condicion ')'
				| '(' condicion ')' AND lista_condiciones 
				| '(' condicion ')' OR lista_condiciones
;


%% 