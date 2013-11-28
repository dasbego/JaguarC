/* Tabla de Simbolos */
struct simbolo {		/* Nombre de la variable */
  char		*name;
  char		*type;
};
//char *compareType(char*a,char*b, char * );
char *resultOperations(char *a, char *b, char *op);

//tamano y tabla de simbolos
#define TableHash 9990
struct simbolo tablaSimbolos[TableHash];

/*convierte el id a numero*/
static unsigned idToHash(char *sym);

/* interface al lex */
extern int yylineno; /* numero de lineas definidas en el lex */
void yyerror(char *s, ...);

/* Funciones de Tabla de Simbolos */
void	insertTable(char *name, char *type);
struct simbolo * search(char* sym);
void	printSimbTable();

extern int debug;
