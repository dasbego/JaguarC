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
%token <c> ID OPERADORRELACIONAL CADENA TYPE MAIN
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
				sprintf(contStruct, "Struct{}");				
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

attrstruct: ID '.' ID {
		struct simbolo *checkStruct = search($1);
		struct simbolo *checkStruct2 = search($3);
		if( !strcmp(checkStruct->name, "-1") || !strcmp(checkStruct2->name, "-1") ){
			strcpy(Errors[counter], "variable o atributo desconocido.");
			ErrorLineNumb[counter++] = yylineno;
		}else{
			//checar que el primer id sea tipo struct
			if(strcmp(checkStruct->type,"Struct{}")){
				//printf("%s",checkStruct->type);
				strcpy(Errors[counter], "Variable no es de tipo Struct");
				ErrorLineNumb[counter++] = yylineno;
			}else{
				if(strcmp(checkStruct2->scope,checkStruct->scope)){
					strcpy(Errors[counter], "Variable no es atributo de esa estructura.");
					ErrorLineNumb[counter++] = yylineno;
				}
				$$ = checkStruct2->type;	
			}
		}
	}
	|ID '.' ID '[' INTEGER ']'{
		struct simbolo *checkStruct = search($1);
		struct simbolo *checkStruct2 = search($3);
		if( !strcmp(checkStruct->name, "-1") || !strcmp(checkStruct2->name, "-1") ){
			strcpy(Errors[counter], "variable o atributo desconocido.");
			ErrorLineNumb[counter++] = yylineno;
		}else{
			//checar que el primer id sea tipo struct
			if(strcmp(checkStruct->type,"Struct{}")){
				//printf("%s",checkStruct->type);
				strcpy(Errors[counter], "Variable no es de tipo Struct");
				ErrorLineNumb[counter++] = yylineno;
			}else{//checar que id2 ete en el scope de id1
				if(strcmp(checkStruct2->scope,checkStruct->scope)){
					strcpy(Errors[counter], "Variable no es atributo de esa estructura.");
					ErrorLineNumb[counter++] = yylineno;
				}
				char idtype[10];
				sprintf(idtype,"%s",getTypeOfArray(checkStruct2->type));
				int yuyu = getRangeOfArray(checkStruct2->type);
				if($5>=yuyu || $5<0){
					char error[100];
					sprintf(error,"Indice fuera del arreglo. Tamaño de '%s' es de %d",checkStruct2->name, $5);
					strcpy(Errors[counter], error);
					ErrorLineNumb[counter++] = yylineno;
				}
				$$ = idtype;	
			}
		}
	}
;

firmasFunciones: firma sigFirma {
	struct simbolo *st = $1;
	actualizaScopes(st->scope);
	$$="";
}
| /**/ {$$="";}
;

sigFirma: firma sigFirma {
	struct simbolo *st = $1;
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
				$$ = "";
			}
			| /*no hay funciones*/ {$$ = "";}
;

funcion: TYPE ID '(' argumentos_declaracion ')' '{' cuerpo '}' {
	struct simbolo *abus = search($2);	
	if(!strcmp(abus->name,"-1")){
		strcpy(Errors[counter], "No se ha firmado la funcion.");
		ErrorLineNumb[counter++] = yylineno;
	}
	actualizaScopes($2);
	$$=abus;
}
;

lista_funciones: funcion lista_funciones {
					$$ = "";
				}
				| /*vacio*/ {$$ = "";}
;

//Cuando se crea la funcion
argumentos_declaracion: variable lista_argumentos{
			 	struct simbolo *st = $1;
			 	insertTable(st->name, st->type, st->scope);	
				$$ = "";
			}
					|/*vacio*/ {$$ = "";}
;

lista_argumentos: ',' variable lista_argumentos {
					struct simbolo *st = $2;
			 		insertTable(st->name, st->type, st->scope);	
					$$ = "";
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

varID: ID {
	struct simbolo *st = search($1);
	if( (!strcmp(st->name, "-1")) ){
		strcpy(Errors[counter], "Variable no declarada previamente");
		ErrorLineNumb[counter++] = yylineno;
		$$="";
	}else{
		$$=st->type;
	}
}
| attrstruct {
	$$=$1;
}
| ID '[' INTEGER ']' {
	struct simbolo *st = search($1);
	char idtype[10];
	sprintf(idtype,"%s",getTypeOfArray(st->type));
	if(st){
		char tmp[3];
		for(int i=0;i<3;i++){
			tmp[i] = st->type[i];
		}
		//printf("%c\n",tmp[0]);
		if(tmp[0]!='a'){
			strcpy(Errors[counter], "Variable no es de tipo arreglo");
			ErrorLineNumb[counter++] = yylineno;
		}else{
			int yuyu = getRangeOfArray(st->type);
			if($3>=yuyu || $3<0){
				char fail[100];
				sprintf(fail,"Indice fuera del arreglo. Tamaño de '%s' es de %d",st->name, $3);
				printf("chile");
				strcpy(Errors[counter], fail);
				ErrorLineNumb[counter++] = yylineno;
			}
		}
	}
	$$=idtype;
}
;

asignacion: varID '=' expresion {
	if(strcmp($1,$3)){
		if(strcmp($1,"")){
			strcpy(Errors[counter], "Tipos no compatibles para la asignacion");
			ErrorLineNumb[counter++] = yylineno;
		}
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
				char *typeFunc;
				char typee[100];
				sprintf(typee, "%s", checkStruct->type);

    			typeFunc = strtok(checkStruct->type, "-" );
				
				printf("Se compara: %s y %s", $3, typeFunc);
				if( (strcmp($3, typeFunc)!=0 ) )
				{
					strcpy(Errors[counter], "PArametros incorrectos");
					ErrorLineNumb[counter++] = yylineno;
					printf("Fueron incorrectos\n");
				}
				else{	
					if((strcmp(checkStruct->name, "-1") !=0))
					{
						char *regtype = malloc(sizeof(char));
						sprintf(regtype,"%s",getTypeOfFunc(typee));
						printf("\nSe regresa el tipo de funcion: %s \n", regtype);
						$$ = regtype;
					}
					else{				
						strcpy(Errors[counter], "Funcion desconocida/no declarada");
						ErrorLineNumb[counter++] = yylineno;
					}
				}
			}
;

llamada_funcion_definida: READ '(' ')'
				| WRITE '(' valor ')'
;

argumentos_llamada: ID lista_ids {
					struct simbolo *st = search($1);
					char temp[70];
					char b[100];					
					strcpy(temp,"(");
					strcat(temp, st->type);	
					strcat(temp, $2);		
					strcat(temp, ")");					
					sprintf(b,"%s",temp);

					printf("Me llego: %s \n", $2);
					if(strcmp(temp,"" )!=0){
						printf("\n Regreso::: %s \n", temp);
						$$ = temp;

					}else{
						$$="";
					}
				}
				| /*no tiene argumentos*/ {$$ = "";} 
;

lista_ids: ',' ID lista_ids {
			char buff[350];			
			char b[100];
			char a[100];	
			char result[100];	
			//sprintf(buff,"%s", $2);
			struct simbolo *st = search($2);
			strcpy(buff,"X");
			strcat(buff, st->type);				
			sprintf(a,"%s", $3);
			sprintf(b,"%s",buff);

			printf("El a %s \n", a);
			printf("El b %s \n", b);
			strcat(b, a);

			printf("Resulatado:  %s \n", b);
			$$=b;
		}
		| /*vacio*/ {$$="";}
;

expresion_aritmetica: expresion_aritmetica '+' expresion_aritmetica {
						//printf("%s\n",resultOperations($1,$3,"+"));
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
					| varID {
						$$=$1;
					}
;

valor: INTEGER {$$="int";}
	| REAL {$$="float";}
	| CADENA {$$="string";}
	| BOOLEAN {$$="bool";}
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