/* Tabla de Simbolos */
struct simbolo {		/* Nombre de la variable */
  char		*name;
  char		*type;
  char 		*scope;
};

// struct comandos {
// 	char *nombre;
//   int longitud;
// 	char **codigo;
// 	struct comandos* anidados;
// 	char *tipo;
// };


//operaciones para funciones que regresan valores
//struct comandos *oper(char *, struct comandos* , struct comandos*);
//struct comandos *compare(char *, struct comandos*, struct comandos*);
//struct comandos *niego(struct comandos*);
//struct comandos *igual(char*, struct comandos*);
//struct comandos *ifea(struct comandos*, struct comandos*, struct comandos*);
//struct comandos *junta(struct comandos*, struct comandos*);

//char *compareType(char*a,char*b, char * );
char *resultOperations(char *a, char *b, char *op);


//tamano y tabla de simbolos
#define TableHash 9990
struct simbolo tablaSimbolos[TableHash];

/*convierte el id a numero*/
static unsigned idToHash(char *sym);

// FILE *archivo;
// int numOp;
// int numDir;

/* interface al lex */
extern int yylineno; /* numero de lineas definidas en el lex */
void yyerror(char *s, ...);

/* Funciones de Tabla de Simbolos */
void	insertTable(char *name, char *type, char *scope);
struct simbolo * search(char* sym, char* scope);
void	printSimbTable();

extern int debug;
