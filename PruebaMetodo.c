#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <math.h>

char *getTypeOfFunc(char text[])
{
    char *typeFunc;
    typeFunc = strtok(text, ">");
    typeFunc = strtok(NULL, ">");
	return typeFunc;
}


char *getTypeOfArray(char text[])
{
	char *typeArray;
	typeArray = strtok(text, ",");
	typeArray = strtok(NULL, ",");
	typeArray = strtok(typeArray, ")");
	
	return typeArray;
}

int main(void){
	char str1[] = "arrays[array(0..2,int)]";
	char *x = getTypeOfArray(str1);
	
	printf("%s\n", x);
}