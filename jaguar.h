/* Tabla de Simbolos */
struct simbolo {		/* Nombre de la variable */
  char		*name;
  char		*type;
  char		*scope;
};
char *compareTypes(char*a,char*b);
char *resultOperations(char *a, char *b, char *op);
char *getTypeOfFunc(char text[]);
char *getTypeOfArray(char text[]);
int getRangeOfArray(char text[]);

//tamano y tabla de simbolos
#define TableHash 9990
struct simbolo tablaSimbolos[TableHash];

/*convierte el id a numero*/
static unsigned idToHash(char *sym);

/* interface al lex */
extern int yylineno; /* numero de lineas definidas en el lex */
void yyerror(char *s, ...);

/* Funciones de Tabla de Simbolos */
void	insertTable(char *name, char *type, char *scope);
struct simbolo * search(char* sym);
void 	actualizaScopes(char *scope);
void	printSimbTable();

//Variables para los errores
char Errors[100][100];
int counter;
int ErrorLineNumb[999];

extern int debug;
