#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <math.h>
#include "jaguar.h"
#include "y.tab.h"

static unsigned idToHash(char *sym) {
  unsigned int hash = 0;
  unsigned c;
  
  while((c = *sym++)) hash = hash*9 ^ c;
  
  return hash;
}

int yywrap(){
	return -1;
}


void yyerror(char *s, ...){
	fprintf(stderr, "%d: error", yylineno);
	fprintf(stderr,"%s \n", s);
} 

void insertTable(char *name, char *type, char *scope){
  struct simbolo *sp = &tablaSimbolos[idToHash(name)%TableHash]; //obtener entrada
  int scount = TableHash;		/* cuantos lugares hemos "visto" */
	
  while(--scount >= 0) {
    if(sp->name && !strcmp(sp->name, name)) {
		  strcpy(Errors[counter], "Simbolo previamente declarado");	
		  ErrorLineNumb[counter++] = yylineno;
		}
		
    if(!sp->name) {		/* Crear Entrada */
      sp->name = strdup(name);
	  sp->type = strdup(type);
	  //sp->scope = strdup(scope);
	  if(strlen(scope)>0)
	  	sp->scope = strdup(scope);
      tablaSimbolos[idToHash(name)%TableHash] = *sp;
      
      return;
    }
		
    if(++sp >= tablaSimbolos+TableHash) sp = tablaSimbolos; /* Seguir intentando */
  }
  strcpy(Errors[counter], "Se paso la capacidad de la tabla");	
  ErrorLineNumb[counter++] = yylineno;
}

void actualizaScopes(char *scope){
  int scount = TableHash;

  while(scount >= 0) {
  			//printf("Entro %s\n", scope);
    struct simbolo *sp = &tablaSimbolos[scount-1];
  		if(sp->name){
  			if(!sp->scope)
  				tablaSimbolos[scount-1].scope = scope;
  		}
  		scount--;
	}
}

struct simbolo * search(char* id){
  struct simbolo *sp = &tablaSimbolos[idToHash(id)%TableHash]; //obtener entrada
  int scount = TableHash;

  // printf("a buscar: %s",id);
  // printf("saque: %s",sp->name);
  while(--scount >= 0) {
    if(sp->name && !strcmp(sp->name, id)) {
     return sp; 
 	}
		
    if(!sp->name) {		/* Entrada Vacia */
 			struct simbolo * tmp = malloc(sizeof (struct simbolo));
 			tmp->name = "-1";      		
      //		strcpy(Errors[counter], "Se utilizo la varible antes de declarar");
      //		ErrorLineNumb[counter++] = yylineno;
      		
      		return tmp;
			//abort();
    }
		
    if(++sp >= tablaSimbolos+TableHash) {sp = tablaSimbolos; /* Seguir intentando */}
	}

  yyerror("symbol table overflow\n");
  abort(); /* tried them all, table is full */
}

char *resultOperations(char *a, char *b, char *op){
	/*suma*/
	int operador = 0;

<<<<<<< HEAD
	if(strcmp(op,"+")) operador =1;
	if(strcmp(op,"-")) operador =2;
	if(strcmp(op,"*")) operador =3;
	if(strcmp(op,"/")) operador =4;

	printf("A comparar: %s %s %s \n",a,op,b);
=======
	if(strcmp(op,"+")==0){ operador =1; }
	if(strcmp(op,"-")==0){ operador =2; }
	if(strcmp(op,"*")==0){ operador =3; }
	if(strcmp(op,"/")==0){ operador =4; }
>>>>>>> Se arreglo las operaciones aritmeticas

	//printf("A comparar: %s %s %s ",a,op,b);
	//printf("\n operador es %d \n", operador);
	switch(operador){
		case 1: 
			if( (strcmp(a,"string")==0 && (strcmp(b,"string")==0 || strcmp(b,"int")==0 || strcmp(b,"float")==0) )
				|| (strcmp(a,"real")==0 && strcmp(b,"string")==0) || (strcmp(a,"int")==0 && strcmp(b,"string")==0)) {
				return "string";
			}else{
				if( (strcmp(a,"int") == 0)&& (strcmp(b,"int")==0)  ) {
					return "int";
				}else{
					if ( (strcmp(a,"float")==0 &&(strcmp(b,"int")==0 || strcmp(b,"float")==0)) || (strcmp(a,"int")==0 && strcmp(b,"float")==0) ){
						return "float";
					}
					else{
						if(strcmp(a,"bool")==0 && strcmp(b,"bool")==0){
							return "bool";
						}
						else {
							return "error";
						}
					}
				}
			}
			break;
		case 2:
			if((strcmp(a,"float")==0 && (strcmp(b,"float")==0 || strcmp(b,"int")==0)) 
				|| (strcmp(a,"int")==0 && strcmp(b,"float")==0)){
				return "float";
			}
			else{
				if(strcmp(a,"int")==0 && strcmp(b,"int")==0){
					return "int";
				}
				else{
					if(strcmp(a,"bool")==0 && strcmp(b,"bool")==0){
						return "bool";
					}
					else{
						return "error";
					}
				}
			}
			break;
		case 3:
			if((strcmp(a,"float")==0 && (strcmp(b,"float")==0 || strcmp(b,"int")==0)) 
				|| (strcmp(a,"int")==0 && strcmp(b,"float")==0)){
				return "float";
			}
			else{
				if(strcmp(a,"int")==0&&strcmp(b,"int")==0){
					return "int";
				}
				else{
					if((strcmp(a,"string")==0 && strcmp(b,"int")==0 ) || (strcmp(a,"int")==0 &&strcmp(b,"string")==0)){
						return "string";
					}else{
						if(strcmp(a,"bool")==0 && strcmp(b,"bool")==0){
							return "bool";
						}else{
							return "error";
						}
					}
				}
			}
			break;
		case 4:
			if((strcmp(a,"float")==0 && (strcmp(b,"float")==0 || strcmp(b,"int")==0)) 
				|| (strcmp(a,"int")==0 && (strcmp(b,"float")==0 || strcmp(b,"int")==0))){
				return "float";
			}else{
				return "error";
			}
			break;
		default:
			//printf("Operador no aceptado\n" );
			strcpy(Errors[counter], "Operador no reconocido");
			ErrorLineNumb[counter++] = yylineno;
			break;
	}
	return "";
}

char *getTypeOfFunc(char text[])
{
    char *typeFunc;
	char tmp[50];
	sprintf(tmp, "%s", text);
    typeFunc = strtok(tmp, ">");
    typeFunc = strtok(NULL, ">");
	return typeFunc;
}

char *getTypeOfArray(char text[])
{
	char *typeArray;
	char tmp[50];
	sprintf(tmp, "%s", text);
	typeArray = strtok(tmp, ",");
	typeArray = strtok(NULL, ",");
	typeArray = strtok(typeArray, ")");
	
	return typeArray;
}

void printSimbTable(){
	int indx;
	for (indx = 0;indx<TableHash; indx++) {
		if (tablaSimbolos[indx].name) {
			printf("ID: %s | Type: %s | Scope: %s\n",tablaSimbolos[indx].name,tablaSimbolos[indx].type, tablaSimbolos[indx].scope);
		}
	}	
}

int yyparse();

int main(void){
	return yyparse();
}