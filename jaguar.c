#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <math.h>
#include "jaguar.h"
#include "jaguarSyntaxis.tab.h"

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
	fprintf(stderr,"%s \n", s);
} 

void insertTable(char *name, char *type, char *scope){
  struct simbolo *sp = &tablaSimbolos[idToHash(name)%TableHash]; //obtener entrada
  int scount = TableHash;		/* cuantos lugares hemos "visto" */
	
  while(--scount >= 0) {
    if(sp->name && !strcmp(sp->name, name)) {
			yyerror("Simbolo previamente declarado/n"); 
		}
		
    if(!sp->name) {		/* Crear Entrada */
      sp->name = strdup(name);
		sp->type = strdup(type);
      sp->scope = strdup(scope);
      
      return;
    }
		
    if(++sp >= tablaSimbolos+TableHash) sp = tablaSimbolos; /* Seguir intentando */
  }
  yyerror("Se paso la capacidad de la tabla\n");
  abort(); /* tried them all, table is full */	
}


char *compareType(char *a, char *b){
	if((!strcmp(a,"int") || !strcmp(a,"string") )&& (!strcmp(b,"int") || !strcmp(b,"string"))){
			return "ent";
	}
	else 
		if((!strcmp(a,"float") || !strcmp(b,"float")) && (strcmp(a,"string") && strcmp(b,"string"))){
			return "float";
	}
	else
		if(!strcmp(a,"bool") && !strcmp(b,"bool")){
			return "bool";
	}
	return "";
}

struct simbolo * search(char* id, char* scope){
  struct simbolo *sp = &tablaSimbolos[idToHash(id)%TableHash]; //obtener entrada
  int scount = TableHash;
	printf("Voy al While\n");
  while(--scount >= 0) {
	printf("Voy al primer if\n");
    if(sp->name && !strcmp(sp->name, id)) { return sp; }
		

	printf("Pase al segundo if\n");
    if(!sp->name) {		/* Entrada Vacia */
      		yyerror("Se utilizo variable antes de declarar\n");
			abort();
    }
		
	printf("Voy a seguir intentando\n");
    if(++sp >= tablaSimbolos+TableHash) {sp = tablaSimbolos; /* Seguir intentando */}
	}

  yyerror("symbol table overflow\n");
  abort(); /* tried them all, table is full */
}

char *resultOperations(char *a, char *b, char *op){
	/*suma*/
	int operador = 0;

	if(strcmp(op,"+")) operador =1;
	if(strcmp(op,"-")) operador =2;
	if(strcmp(op,"*")) operador =3;
	if(strcmp(op,"/")) operador =4;

	switch(operador){
		case 1: 
			if((strcmp(a,"string")&& (strcmp(b,"string") || strcmp(b,"int") || strcmp(b,"float")))
				|| (strcmp(a,"real") && strcmp(b,"string")) || (strcmp(a,"int") && strcmp(b,"string"))){
				return "string";
			}else{
				if(strcmp(a,"int")&&strcmp(b,"int")){
					return "int";
				}else{
					if ( (strcmp(a,"float")&&(strcmp(b,"int") || strcmp(b,"float"))) || (strcmp(a,"int") && strcmp(b,"float")) ){
						return "float";
					}
					else{
						if(strcmp(a,"bool") && strcmp(b,"bool")){
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
			if((strcmp(a,"float") && (strcmp(b,"float") || strcmp(b,"int"))) 
				|| (strcmp(a,"int") && strcmp(b,"float"))){
				return "float";
			}
			else{
				if(strcmp(a,"int")&&strcmp(b,"int")){
					return "int";
				}
				else{
					if(strcmp(a,"bool") && strcmp(b,"bool")){
						return "bool";
					}
					else{
						return "error";
					}
				}
			}
			break;
		case 3:
			if((strcmp(a,"float") && (strcmp(b,"float") || strcmp(b,"int"))) 
				|| (strcmp(a,"int") && strcmp(b,"float"))){
				return "float";
			}
			else{
				if(strcmp(a,"int")&&strcmp(b,"int")){
					return "int";
				}
				else{
					if((strcmp(a,"string") && strcmp(b,"int") ) || (strcmp(a,"int")&&strcmp(b,"string"))){
						return "string";
					}else{
						if(strcmp(a,"bool") && strcmp(b,"bool")){
							return "bool";
						}else{
							return "error";
						}
					}
				}
			}
			break;
		case 4:
			if((strcmp(a,"float") && (strcmp(b,"float") || strcmp(b,"int"))) 
				|| (strcmp(a,"int") && (strcmp(b,"float") || strcmp(b,"int")))){
				return "float";
			}else{
				return "error";
			}
			break;
		default:
			printf("Operador no aceptado\n" );
			break;
	}
	return "";
}

int yyparse();

int main(void){
	return yyparse();
}