%{
	#include "jaguarSyntaxis.tab.h"
	#include "jaguar.h"
	#include <stdlib.h>

	int yylineno; /*numero de lineas*/
%}

%%

program 		{return PROGRAM;}
programEnd 		{return PROGRAMEND;}
main 			{return MAIN;}
struct 			{return STRUCT;}
if 				{return IF;}
else 			{return ELSE;}
return 			{return RETURN;}
true|false		{yylval.c = strdup(yytext);
				return BOOLEAN;
}

float|int|string|bool|void {yylval.c = strdup(yytext);
							return TYPE;}

read			{return READ;}
write			{return WRITE;}

"<"|">"|"<="|">="|"!="|"==" {
	yylval.c = strdup(yytext); 
	return OPERADORRELACIONAL;
}

"&&" {return AND;}
"||" {return OR;}

for {return FOR;}

"+"|"/"|"-"|"*"|"mod" {yylval.c=strdup(yytext);
	return OPERADOR;}

[0-9]+"."[0-9]+ {yylval.f = atof(yytext);
				return REAL;}

("_")*[A-Za-z]([A-Za-z]|[0-9])* {yylval.c=strdup(yytext); 
								return ID;}

[0-9]+ {yylval.i=atoi(yytext);
	return INTEGER;}

\"(\\.|\"\"|[^"\n])*\" {
	char tmp[strlen(yytext)-2];
	int i = 1;
	for(; i< strlen(yytext)-1; i++){
		tmp[i-1] = yytext[i];}
	yylval.c = strdup(tmp);
	return CADENA;}


[^ \t\n] {return yytext[0];}
[ \t]
\/\/.* 
[ \n] {yylineno++;}
%%