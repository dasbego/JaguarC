%{

#include "jaguar.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char scope[50];

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

%type <sim> variable funcion
%type <c> varstruct lista_variables lista_argumentos argumentos_declaracion lista_funciones declaracionf expresion argumentos_llamada
%type <c> sigvarStruct attrstruct expresion_aritmetica lista_ids valor iteracion estatuto_decision sino llamada_a_funcion
%start s 

%%  /* Grammar rules and actions follow */

s: PROGRAM ID ':' program
;

program: estructura TYPE MAIN '(' argumentos_declaracion ')' '{' cuerpo '}' declaracionf PROGRAMEND {
	sprintf(scope,"%s", $3);
	//struct simbolo *st = $5;
}
;

estructura: /*no hay estructuras*/
			| STRUCT ID '{' varstruct '}' {
				/*cuando se declara un struct*/
				sprintf(scope, "%s", $2);
				char contStruct[300];
				sprintf(contStruct, "Register(%s)", $4);
				insertTable($2,strdup(contStruct),scope);
			}
;

varstruct: variable ';' sigvarStruct {
			if(strcmp($3,strdup(""))){
				struct simbolo *st = $1;
				insertTable(st->name, st->type, st->scope);
				$$="";
			}
		}
;

sigvarStruct: /*ya no hay variables*/ {$$="";}
			| varstruct { $$=$1}
;

attrstruct: ID '.' ID {
					//buscar si $1 existe y despues si $3 existe entonces $$ = $3
				if(search($1,$1) && search($3, $1))
					$$ = $3;
				else{
					yyerror("variable o atributo desconocido.");
					abort();
				}
			}
			| ID '.' ID '[' INTEGER ']'{
					//buscar si $1 existe y despues si $3 existe entonces $$ = $3
				if(search($1, $1) && search($3, $1))
					$$ = $3;
				else{
					yyerror("variable o atributo desconocido.");
					abort();
				}
			}
;

declaracionv: variable lista_variables {
	if(strcmp($2,"")){
		struct simbolo *st = $1;
		insertTable(st->name, st->type, st->scope);
	}
}
;

variable: TYPE ID {
			struct simbolo *st = malloc(sizeof(struct simbolo));
			char *type = $1;
			st->name = $2;
			st->type = type;
			st->scope = scope;
			$$ = st;
		}
		| TYPE ID '[' INTEGER ']'	{
			struct simbolo *st = malloc(sizeof(struct simbolo));
			char *type;
			sprintf(type,"array(0..%d)",$4);
			st->name = $2;
			st->type = type;
			st->scope = scope;
			$$ = st;
		}
;

lista_variables: ',' variable lista_variables {	
					struct simbolo *st = $2;
					if(strcmp($3,"")){
						insertTable(st->name, st->type, st->scope);
						$$="";
					}
				}
				| ';' {$$="";}
;

declaracionf: funcion lista_funciones {
				if(strcmp($2,""))
				{
					struct simbolo *st = $1;
					insertTable(st->name, st->type, st->scope);
				}
				$$ = "";
			}
			| /*no hay funciones*/ {$$ = "";}
;

funcion: TYPE ID '(' argumentos_declaracion ')' '{' cuerpo '}' {
	sprintf(scope,"%s", $2);
	struct simbolo *st = malloc(sizeof(struct simbolo));
	char buff[300];
	sprintf(buff, "(%s)->%s", $4, $1);
	st->name = $2;
	st->type = buff;	
	st->scope = scope;
	$$ = st;
}
;

lista_funciones: funcion lista_funciones {
					if(strcmp($2,""))
					{
						struct simbolo *st = $1;
						insertTable(st->name, st->type, st->scope);
					}
					$$ = "";
				}
				| /*vacio*/ {$$ = "";}
;

//Cuando se crea la funcion
argumentos_declaracion: variable lista_argumentos{
			 	struct simbolo *st = $1;
			 	insertTable(st->name, st->type, scope);

			 	char buff[350];
				if(strcmp($2,"")){
					sprintf(buff,"%s",st->type);
				}else{
					sprintf(buff,"%sX%s", st->type, $2);
				}
				$$ = buff;
			}
					|/*vacio*/ {$$ = "";}
;

lista_argumentos: ',' variable lista_argumentos {
					struct simbolo *st = $2;
			 		insertTable(st->name, st->type, scope);

					char buff[350];
					if(strcmp($3,"")){
						sprintf(buff,"%s",st->type);
					}else{
						sprintf(buff,"%sX%s", st->type, $3);
					}
					$$ = buff;
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
	if(search($1,scope)){
		/*actualiza le pasas id de variable y valor*/
		//actualiza($1, $3);
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

				struct  simbolo *tmp = search($1, scope);
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
						st = search($1,scope);
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