Jaguar:	jaguarSyntaxis.y jaguarLex.l jaguar.c jaguar.h
	bison -d jaguarSyntaxis.y;
	flex -o jaguarLex.lex.c jaguarLex.l
	gcc -o $@ jaguarSyntaxis.tab.c jaguarLex.lex.c jaguar.c -ly -ll -lm