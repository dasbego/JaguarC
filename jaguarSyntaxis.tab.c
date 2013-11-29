/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     PROGRAM = 258,
     PROGRAMEND = 259,
     STRUCT = 260,
     IF = 261,
     ELSE = 262,
     RETURN = 263,
     FOR = 264,
     AND = 265,
     OR = 266,
     READ = 267,
     WRITE = 268,
     ID = 269,
     OPERADORRELACIONAL = 270,
     CADENA = 271,
     OPERADOR = 272,
     TYPE = 273,
     MAIN = 274,
     INTEGER = 275,
     REAL = 276,
     BOOLEAN = 277
   };
#endif
/* Tokens.  */
#define PROGRAM 258
#define PROGRAMEND 259
#define STRUCT 260
#define IF 261
#define ELSE 262
#define RETURN 263
#define FOR 264
#define AND 265
#define OR 266
#define READ 267
#define WRITE 268
#define ID 269
#define OPERADORRELACIONAL 270
#define CADENA 271
#define OPERADOR 272
#define TYPE 273
#define MAIN 274
#define INTEGER 275
#define REAL 276
#define BOOLEAN 277




/* Copy the first part of user declarations.  */
#line 1 "jaguarSyntaxis.y"


#include "jaguar.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int yylex();



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 12 "jaguarSyntaxis.y"
{
	int i;
	float f;
	char *c;
	char car;
	int b;
	struct simbolo *sim;
}
/* Line 193 of yacc.c.  */
#line 160 "jaguarSyntaxis.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 173 "jaguarSyntaxis.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   233

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  39
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  79
/* YYNRULES -- Number of states.  */
#define YYNSTATES  183

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   278

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      29,    30,    26,    24,    38,    25,    35,    27,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    28,    33,
       2,    23,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    36,     2,    37,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    31,     2,    32,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    34
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     8,    14,    22,    25,    26,    29,    30,
      37,    41,    42,    44,    48,    55,    58,    61,    62,    69,
      72,    73,    77,    78,    81,    84,    90,    94,    96,    99,
     100,   109,   112,   113,   116,   117,   121,   122,   124,   125,
     128,   132,   134,   136,   138,   140,   143,   146,   148,   150,
     154,   157,   160,   165,   170,   174,   179,   182,   183,   187,
     188,   192,   196,   200,   204,   206,   208,   210,   212,   214,
     216,   218,   230,   241,   250,   251,   256,   260,   264,   270
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      40,     0,    -1,     3,    14,    28,    41,    -1,    43,    49,
      42,    57,     4,    -1,    19,    29,    60,    30,    31,    62,
      32,    -1,    45,    44,    -1,    -1,    45,    44,    -1,    -1,
       5,    14,    31,    46,    32,    33,    -1,    55,    33,    47,
      -1,    -1,    46,    -1,    14,    34,    14,    -1,    14,    35,
      14,    36,    20,    37,    -1,    51,    50,    -1,    51,    50,
      -1,    -1,    18,    14,    29,    52,    30,    33,    -1,    55,
      53,    -1,    -1,    38,    55,    53,    -1,    -1,    55,    56,
      -1,    18,    14,    -1,    18,    14,    36,    20,    37,    -1,
      38,    55,    56,    -1,    33,    -1,    58,    59,    -1,    -1,
      18,    14,    29,    60,    30,    31,    62,    32,    -1,    58,
      59,    -1,    -1,    55,    61,    -1,    -1,    38,    55,    61,
      -1,    -1,    63,    -1,    -1,    64,    63,    -1,     8,    67,
      33,    -1,    66,    -1,    54,    -1,    74,    -1,    75,    -1,
      68,    33,    -1,    69,    33,    -1,    14,    -1,    48,    -1,
      65,    23,    67,    -1,    68,    33,    -1,    72,    33,    -1,
      29,    67,    30,    33,    -1,    14,    29,    70,    30,    -1,
      12,    29,    30,    -1,    13,    29,    73,    30,    -1,    14,
      71,    -1,    -1,    38,    14,    71,    -1,    -1,    72,    24,
      72,    -1,    72,    25,    72,    -1,    72,    26,    72,    -1,
      72,    27,    72,    -1,    73,    -1,    14,    -1,    48,    -1,
      20,    -1,    21,    -1,    16,    -1,    22,    -1,     9,    29,
      66,    33,    78,    33,    66,    30,    31,    62,    32,    -1,
       9,    29,    33,    78,    33,    66,    30,    31,    62,    32,
      -1,     6,    29,    78,    30,    31,    62,    32,    76,    -1,
      -1,     7,    31,    62,    32,    -1,    67,    15,    67,    -1,
      29,    77,    30,    -1,    29,    77,    30,    10,    78,    -1,
      29,    77,    30,    11,    78,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    46,    46,    49,    62,    68,    71,    76,    79,    83,
      94,   102,   103,   106,   116,   130,   137,   143,   148,   161,
     169,   172,   183,   186,   192,   200,   211,   216,   219,   229,
     232,   244,   247,   251,   260,   263,   277,   280,   283,   284,
     285,   288,   289,   290,   291,   292,   293,   296,   297,   299,
     324,   327,   330,   335,   349,   350,   353,   362,   365,   366,
     369,   379,   387,   395,   403,   406,   418,   421,   422,   423,
     424,   428,   432,   437,   442,   443,   445,   450,   451,   452
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PROGRAM", "PROGRAMEND", "STRUCT", "IF",
  "ELSE", "RETURN", "FOR", "AND", "OR", "READ", "WRITE", "ID",
  "OPERADORRELACIONAL", "CADENA", "OPERADOR", "TYPE", "MAIN", "INTEGER",
  "REAL", "BOOLEAN", "'='", "'+'", "'-'", "'*'", "'/'", "':'", "'('",
  "')'", "'{'", "'}'", "';'", "\".\"", "'.'", "'['", "']'", "','",
  "$accept", "s", "program", "principal", "declaracionEst",
  "lista_estructuras", "estructura", "varstruct", "sigvarStruct",
  "attrstruct", "firmasFunciones", "sigFirma", "firma",
  "argumentos_declaracion_firma", "lista_argumentos_firma", "declaracionv",
  "variable", "lista_variables", "declaracionf", "funcion",
  "lista_funciones", "argumentos_declaracion", "lista_argumentos",
  "cuerpo", "lista_sentencias", "sentencia", "varID", "asignacion",
  "expresion", "llamada_a_funcion", "llamada_funcion_definida",
  "argumentos_llamada", "lista_ids", "expresion_aritmetica", "valor",
  "iteracion", "estatuto_decision", "sino", "condicion",
  "lista_condiciones", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,    61,    43,    45,    42,    47,    58,    40,
      41,   123,   125,    59,   278,    46,    91,    93,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    39,    40,    41,    42,    43,    43,    44,    44,    45,
      46,    47,    47,    48,    48,    49,    50,    50,    51,    52,
      52,    53,    53,    54,    55,    55,    56,    56,    57,    57,
      58,    59,    59,    60,    60,    61,    61,    62,    63,    63,
      63,    64,    64,    64,    64,    64,    64,    65,    65,    66,
      67,    67,    67,    68,    69,    69,    70,    70,    71,    71,
      72,    72,    72,    72,    72,    72,    72,    73,    73,    73,
      73,    74,    74,    75,    76,    76,    77,    78,    78,    78
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     5,     7,     2,     0,     2,     0,     6,
       3,     0,     1,     3,     6,     2,     2,     0,     6,     2,
       0,     3,     0,     2,     2,     5,     3,     1,     2,     0,
       8,     2,     0,     2,     0,     3,     0,     1,     0,     2,
       3,     1,     1,     1,     1,     2,     2,     1,     1,     3,
       2,     2,     4,     4,     3,     4,     2,     0,     3,     0,
       3,     3,     3,     3,     1,     1,     1,     1,     1,     1,
       1,    11,    10,     8,     0,     4,     3,     3,     5,     5
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     6,     0,     2,     0,     8,
       0,     0,     0,    17,     5,     8,     0,     0,     0,    29,
      15,    17,     7,     0,     0,     0,    20,    34,     0,     0,
      32,    16,    24,     0,    11,     0,    22,    36,     0,     0,
       3,    32,    28,     0,     9,    12,    10,     0,     0,    19,
       0,    33,     0,    34,    31,     0,    18,    22,    36,    38,
       0,    25,    21,    35,     0,     0,     0,     0,     0,    47,
      48,    42,     0,     0,    37,    38,     0,    41,     0,     0,
      43,    44,     0,     0,    65,    69,    67,    68,    70,     0,
      66,     0,     0,     0,    64,     0,     0,     0,    57,     0,
       0,    27,     0,    23,     4,    39,     0,    45,    46,    38,
       0,     0,     0,    40,    50,     0,     0,     0,     0,    51,
      47,     0,     0,    54,     0,    59,     0,    13,     0,     0,
      49,     0,     0,     0,     0,     0,    65,    60,    61,    62,
      63,     0,     0,    55,     0,    56,    53,     0,    26,    30,
       0,    77,    38,    52,     0,     0,    59,     0,    76,     0,
       0,     0,     0,     0,    58,    14,    78,    79,    74,     0,
       0,     0,    73,    38,     0,    38,     0,    38,     0,    72,
       0,    75,    71
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     7,    19,     8,    14,    15,    24,    46,    70,
      12,    20,    21,    35,    49,    71,    72,   103,    29,    41,
      42,    38,    51,    73,    74,    75,    76,    77,    91,    78,
      79,   126,   145,    93,    94,    80,    81,   172,   133,   111
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -115
static const yytype_int16 yypact[] =
{
      26,     9,    36,    10,  -115,    37,    43,  -115,    33,    37,
      28,    54,    31,    33,  -115,    37,    59,    64,    65,    77,
    -115,    33,  -115,    82,    66,    68,    59,    59,    83,    95,
      77,  -115,    69,    70,    59,    72,    71,    73,    74,    78,
    -115,    77,  -115,    80,  -115,  -115,  -115,    75,    59,  -115,
      59,  -115,    79,    59,  -115,    76,  -115,    71,    73,    67,
      84,  -115,  -115,  -115,    86,    42,    87,    88,    89,    32,
    -115,  -115,   -21,    90,  -115,    67,    96,  -115,    91,    92,
    -115,  -115,    81,    94,    32,  -115,  -115,  -115,  -115,    42,
    -115,    93,    97,   -11,  -115,    -9,    98,    62,   106,   107,
     113,  -115,    59,  -115,  -115,  -115,    42,  -115,  -115,    67,
      42,    99,   101,  -115,  -115,    19,    19,    19,    19,  -115,
     -15,    94,   100,  -115,   102,   103,   104,  -115,   108,   -21,
    -115,   105,   120,   109,   111,   110,   -15,   -18,   -18,  -115,
    -115,   112,    94,  -115,   122,  -115,  -115,   118,  -115,  -115,
      42,    20,    67,  -115,   126,   114,   103,   115,  -115,    94,
      94,   116,   119,   126,  -115,  -115,  -115,  -115,   139,   123,
     121,   124,  -115,    67,   125,    67,   127,    67,   128,  -115,
     129,  -115,  -115
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -115,  -115,  -115,  -115,  -115,   135,   148,   130,  -115,   -63,
    -115,    85,   149,  -115,   117,  -115,   -16,    29,  -115,   143,
     131,   132,   133,  -103,   134,  -115,  -115,   -94,   -85,   -62,
    -115,  -115,     7,   -26,   136,  -115,  -115,  -115,  -115,  -114
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      25,   122,    90,    92,   112,   120,   131,   141,   117,   118,
      36,    37,   101,   115,   116,   117,   118,   102,    25,    99,
     100,   130,   119,     3,   121,   132,    90,    92,   155,     1,
     159,   160,    57,   136,    58,    85,     4,    37,     5,    86,
      87,    88,     6,    90,    92,   166,   167,    90,    92,   161,
      18,    11,    90,    90,    90,    90,    84,    10,    85,    16,
     162,    98,    86,    87,    88,   158,    99,   100,    17,   170,
     176,    89,   178,    64,   180,    65,    66,    23,    85,    67,
      68,    69,    86,    87,    88,    23,   129,    90,    92,   137,
     138,   139,   140,    26,    27,    28,    32,    39,    33,    40,
      55,    34,    47,    44,    52,    43,    31,    53,    56,    48,
      59,    50,   109,    61,    82,    83,    95,    96,    97,   106,
     125,   127,   104,   110,   107,   108,   113,   128,   123,   134,
     114,   135,   143,   142,   146,   150,   156,   149,   157,   151,
     120,   144,   152,   153,   147,   154,   171,   163,   168,   169,
      22,   174,   165,     9,   173,   175,   177,    13,   148,   179,
     181,   182,    30,   164,    45,     0,     0,     0,     0,     0,
       0,     0,    54,     0,    62,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    60,     0,     0,     0,     0,
       0,    63,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   105,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   124
};

static const yytype_int16 yycheck[] =
{
      16,    95,    65,    65,    89,    14,   109,   121,    26,    27,
      26,    27,    33,    24,    25,    26,    27,    38,    34,    34,
      35,   106,    33,    14,    33,   110,    89,    89,   142,     3,
      10,    11,    48,    14,    50,    16,     0,    53,    28,    20,
      21,    22,     5,   106,   106,   159,   160,   110,   110,   152,
      19,    18,   115,   116,   117,   118,    14,    14,    16,    31,
     154,    29,    20,    21,    22,   150,    34,    35,    14,   163,
     173,    29,   175,     6,   177,     8,     9,    18,    16,    12,
      13,    14,    20,    21,    22,    18,   102,   150,   150,   115,
     116,   117,   118,    29,    29,    18,    14,    14,    32,     4,
      20,    33,    30,    33,    30,    36,    21,    29,    33,    38,
      31,    38,    31,    37,    30,    29,    29,    29,    29,    23,
      14,    14,    32,    29,    33,    33,    33,    14,    30,    30,
      33,    30,    30,    33,    30,    15,    14,    32,    20,    30,
      14,    38,    31,    33,    36,    33,     7,    33,    32,    30,
      15,    30,    37,     5,    31,    31,    31,     8,   129,    32,
      32,    32,    19,   156,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    41,    -1,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,
      -1,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    97
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    40,    14,     0,    28,     5,    41,    43,    45,
      14,    18,    49,    51,    44,    45,    31,    14,    19,    42,
      50,    51,    44,    18,    46,    55,    29,    29,    18,    57,
      58,    50,    14,    32,    33,    52,    55,    55,    60,    14,
       4,    58,    59,    36,    33,    46,    47,    30,    38,    53,
      38,    61,    30,    29,    59,    20,    33,    55,    55,    31,
      60,    37,    53,    61,     6,     8,     9,    12,    13,    14,
      48,    54,    55,    62,    63,    64,    65,    66,    68,    69,
      74,    75,    30,    29,    14,    16,    20,    21,    22,    29,
      48,    67,    68,    72,    73,    29,    29,    29,    29,    34,
      35,    33,    38,    56,    32,    63,    23,    33,    33,    31,
      29,    78,    67,    33,    33,    24,    25,    26,    27,    33,
      14,    33,    66,    30,    73,    14,    70,    14,    14,    55,
      67,    62,    67,    77,    30,    30,    14,    72,    72,    72,
      72,    78,    33,    30,    38,    71,    30,    36,    56,    32,
      15,    30,    31,    33,    33,    78,    14,    20,    67,    10,
      11,    62,    66,    33,    71,    37,    78,    78,    32,    30,
      66,     7,    76,    31,    30,    31,    62,    31,    62,    32,
      62,    32,    32
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 3:
#line 49 "jaguarSyntaxis.y"
    {
	int cc = 0;
	printSimbTable();
	printf("\n- - - - - - Errores encontrados: %d - - - - - -\n ", counter);
	while(cc < counter)
	{
		printf( "\n*Linea[%d]  : %s", ErrorLineNumb[cc], Errors[cc]);
		cc++;
	}
	printf("\n ");
;}
    break;

  case 4:
#line 62 "jaguarSyntaxis.y"
    {
	actualizaScopes("main");
	(yyval.c)="";
;}
    break;

  case 5:
#line 68 "jaguarSyntaxis.y"
    {
	(yyval.c)="";
;}
    break;

  case 6:
#line 71 "jaguarSyntaxis.y"
    {
	(yyval.c)="";
;}
    break;

  case 7:
#line 76 "jaguarSyntaxis.y"
    {
	(yyval.c)="";
;}
    break;

  case 8:
#line 79 "jaguarSyntaxis.y"
    {
	(yyval.c)="";
;}
    break;

  case 9:
#line 83 "jaguarSyntaxis.y"
    {
				/*cuando se declara un struct*/
				char sc[30];
				char contStruct[300];
				sprintf(contStruct, "Struct(%s)", (yyvsp[(4) - (6)].c));				
				sprintf(sc,"%s",(yyvsp[(2) - (6)].c));
				insertTable((yyvsp[(2) - (6)].c),strdup(contStruct),sc);
				actualizaScopes((yyvsp[(2) - (6)].c));
			;}
    break;

  case 10:
#line 94 "jaguarSyntaxis.y"
    {
				struct simbolo *st = (yyvsp[(1) - (3)].sim);
				st->scope = "";
				insertTable(st->name, st->type, st->scope);
				(yyval.c)=(yyvsp[(3) - (3)].c);
		;}
    break;

  case 11:
#line 102 "jaguarSyntaxis.y"
    {(yyval.c)="";;}
    break;

  case 12:
#line 103 "jaguarSyntaxis.y"
    { (yyval.c)=(yyvsp[(1) - (1)].c);;}
    break;

  case 13:
#line 106 "jaguarSyntaxis.y"
    {
		struct simbolo *checkStruct = search((yyvsp[(1) - (3)].c));
		struct simbolo *checkStruct2 = search((yyvsp[(3) - (3)].c));
		if( (strcmp(checkStruct->name, "-1")) && (strcmp(checkStruct2->name, "-1")) )
			(yyval.c) = (yyvsp[(3) - (3)].c);
		else{				
			strcpy(Errors[counter], "variable o atributo desconocido.");
			ErrorLineNumb[counter++] = yylineno;
		}
	;}
    break;

  case 14:
#line 116 "jaguarSyntaxis.y"
    {
			//buscar si $1 existe y despues si $3 existe entonces $$ = $3
		struct simbolo *checkStruct = search((yyvsp[(1) - (6)].c));
		struct simbolo *checkStruct2 = search((yyvsp[(3) - (6)].c));
		if( (strcmp(checkStruct->name, "-1")) && (strcmp(checkStruct2->name, "-1")) )
			(yyval.c) = (yyvsp[(3) - (6)].c);
		else{
			
			strcpy(Errors[counter], "variable o atributo desconocido.");
			ErrorLineNumb[counter++] = yylineno;
		}
	;}
    break;

  case 15:
#line 130 "jaguarSyntaxis.y"
    {
	struct simbolo *st = (yyvsp[(1) - (2)].sim);
	actualizaScopes(st->scope);
	(yyval.c)="";
;}
    break;

  case 16:
#line 137 "jaguarSyntaxis.y"
    {
	struct simbolo *st = (yyvsp[(1) - (2)].sim);
	//insertTable(st->name, st->type, st->scope);
	actualizaScopes(st->scope);
	(yyval.c)="";
;}
    break;

  case 17:
#line 143 "jaguarSyntaxis.y"
    {
	(yyval.c)="";
;}
    break;

  case 18:
#line 148 "jaguarSyntaxis.y"
    {
		struct simbolo *st = malloc(sizeof(struct simbolo));
		char type[300];
		st->name = (yyvsp[(2) - (6)].c);
		st->scope = (yyvsp[(2) - (6)].c);
		sprintf(type, "(%s)->%s",(yyvsp[(4) - (6)].c),(yyvsp[(1) - (6)].c));
		st->type = type;
		insertTable(st->name, st->type, st->scope);
		//printf("PITOCHU %s\n", st->type);
		(yyval.sim)=st;
;}
    break;

  case 19:
#line 161 "jaguarSyntaxis.y"
    {
			 	struct simbolo *st = (yyvsp[(1) - (2)].sim);
				char *tmp;
				tmp = st->type;
				strcat(tmp, (yyvsp[(2) - (2)].c));
				//printf("%s\n",tmp);
				(yyval.c) = tmp;
			;}
    break;

  case 20:
#line 169 "jaguarSyntaxis.y"
    {(yyval.c) = "";;}
    break;

  case 21:
#line 172 "jaguarSyntaxis.y"
    {
					char temp[50];
					char b[100];
					struct simbolo *st = (yyvsp[(2) - (3)].sim);			
					strcpy(temp,"X");
					strcat(temp,st->type);	
					strcat(temp, (yyvsp[(3) - (3)].c));				
					sprintf(b,"%s",temp);
					//printf("Regreso %s\n",b);
					(yyval.c) = b;
				;}
    break;

  case 22:
#line 183 "jaguarSyntaxis.y"
    {(yyval.c) = "";;}
    break;

  case 23:
#line 186 "jaguarSyntaxis.y"
    {
		struct simbolo *st = (yyvsp[(1) - (2)].sim);
		insertTable(st->name, st->type, st->scope);
;}
    break;

  case 24:
#line 192 "jaguarSyntaxis.y"
    {
			struct simbolo *st = malloc(sizeof(struct simbolo));
			char *type = (yyvsp[(1) - (2)].c);
			st->name = (yyvsp[(2) - (2)].c);
			st->type = type;
			st->scope = "";
			(yyval.sim) = st;
		;}
    break;

  case 25:
#line 200 "jaguarSyntaxis.y"
    {
			struct simbolo *st = malloc(sizeof(struct simbolo));
			char type[30];
			sprintf(type,"array(0..%d,%s)",(yyvsp[(4) - (5)].i), (yyvsp[(1) - (5)].c));
			st->name = (yyvsp[(2) - (5)].c);
			st->type = type;
			st->scope = "";
			(yyval.sim) = st;
		;}
    break;

  case 26:
#line 211 "jaguarSyntaxis.y"
    {	
					struct simbolo *st = (yyvsp[(2) - (3)].sim);
					insertTable(st->name, st->type, st->scope);
					(yyval.c)="";
				;}
    break;

  case 27:
#line 216 "jaguarSyntaxis.y"
    {(yyval.c)="";;}
    break;

  case 28:
#line 219 "jaguarSyntaxis.y"
    {
				if(strcmp((yyvsp[(2) - (2)].c),""))
				{
					struct simbolo *st = (yyvsp[(1) - (2)].sim);
					//printf("%s", st->name);
					//insertTable(st->name, st->type, st->scope);
					//actualizaScopes(st->name);
				}
				(yyval.c) = "";
			;}
    break;

  case 29:
#line 229 "jaguarSyntaxis.y"
    {(yyval.c) = "";;}
    break;

  case 30:
#line 232 "jaguarSyntaxis.y"
    {
	struct simbolo *st = malloc(sizeof(struct simbolo));
	char buff[300];
	sprintf(buff, "(%s)->%s", (yyvsp[(4) - (8)].c), (yyvsp[(1) - (8)].c));
	st->name = (yyvsp[(2) - (8)].c);
	st->type = buff;	
	st->scope = (yyvsp[(2) - (8)].c);
	actualizaScopes((yyvsp[(2) - (8)].c));
	(yyval.sim) = st;
;}
    break;

  case 31:
#line 244 "jaguarSyntaxis.y"
    {
					(yyval.c) = "";
				;}
    break;

  case 32:
#line 247 "jaguarSyntaxis.y"
    {(yyval.c) = "";;}
    break;

  case 33:
#line 251 "jaguarSyntaxis.y"
    {
				char *tmp;
			 	struct simbolo *st = (yyvsp[(1) - (2)].sim);
			 	insertTable(st->name, st->type, st->scope);	
				tmp = st->type;
				strcat(tmp, (yyvsp[(2) - (2)].c));
				//printf("Regreso %s\n",tmp);
				(yyval.c) = tmp;
			;}
    break;

  case 34:
#line 260 "jaguarSyntaxis.y"
    {(yyval.c) = "";;}
    break;

  case 35:
#line 263 "jaguarSyntaxis.y"
    {
					char *temp;
					char a[50];
					char b[100];
					struct simbolo *st = (yyvsp[(2) - (3)].sim);
			 		insertTable(st->name, st->type, st->scope);					
					strcpy(temp,"X");
					strcat(temp,st->type);					
					sprintf(a,"%s", (yyvsp[(3) - (3)].c));
					strcat(temp, (yyvsp[(3) - (3)].c));				
					sprintf(b,"%s",temp);
					//printf("Regreso %s\n",b);
					(yyval.c) = b;
				;}
    break;

  case 36:
#line 277 "jaguarSyntaxis.y"
    {(yyval.c) = "";;}
    break;

  case 47:
#line 296 "jaguarSyntaxis.y"
    {(yyval.c)=(yyvsp[(1) - (1)].c);;}
    break;

  case 48:
#line 297 "jaguarSyntaxis.y"
    {(yyval.c)=(yyvsp[(1) - (1)].c);;}
    break;

  case 49:
#line 299 "jaguarSyntaxis.y"
    {
		/*buscar si existe id en este scope*/
	struct simbolo *st = search((yyvsp[(1) - (3)].c));
	//printf("%s\n",$3);
	if(st){
		if( (!strcmp(st->name, "-1")) ){
			strcpy(Errors[counter], "Variable no declarada previamente");
			ErrorLineNumb[counter++] = yylineno;
		}else{
			if(strcmp(st->type,(yyvsp[(3) - (3)].c))){
				//yyerror("Tipos no compatibles para la asignacion");
				strcpy(Errors[counter], "Tipos no compatibles para la asignacion");
				ErrorLineNumb[counter++] = yylineno;
			}
		}
		

	}else{
		//yyerror("variable desconocida: %s", $1);		
		strcpy(Errors[counter], "variable desconocida");
		ErrorLineNumb[counter++] = yylineno;
	}
;}
    break;

  case 50:
#line 324 "jaguarSyntaxis.y"
    {
			(yyval.c) = (yyvsp[(1) - (2)].c);
		;}
    break;

  case 51:
#line 327 "jaguarSyntaxis.y"
    {
			(yyval.c) = (yyvsp[(1) - (2)].c);
		;}
    break;

  case 52:
#line 330 "jaguarSyntaxis.y"
    {
			(yyval.c) = (yyvsp[(2) - (4)].c);
		;}
    break;

  case 53:
#line 335 "jaguarSyntaxis.y"
    {			
				struct simbolo *checkStruct = search((yyvsp[(1) - (4)].c));
				if((strcmp(checkStruct->name, "-1")))
				{
					(yyval.c) = checkStruct->type;
				}

				else{				
					strcpy(Errors[counter], "Funcion desconocida/no declarada");
					ErrorLineNumb[counter++] = yylineno;
				}
			;}
    break;

  case 56:
#line 353 "jaguarSyntaxis.y"
    {
					if(strcmp((yyvsp[(2) - (2)].c),"")){
						char buff[350];
						sprintf(buff,"%s", (yyvsp[(1) - (2)].c));
						(yyval.c) = buff;
					}else{
						(yyval.c)="";
					}
				;}
    break;

  case 57:
#line 362 "jaguarSyntaxis.y"
    {(yyval.c) = "";;}
    break;

  case 58:
#line 365 "jaguarSyntaxis.y"
    {(yyval.c)="";;}
    break;

  case 59:
#line 366 "jaguarSyntaxis.y"
    {(yyval.c)="";;}
    break;

  case 60:
#line 369 "jaguarSyntaxis.y"
    {
						printf("%s\n",resultOperations((yyvsp[(1) - (3)].c),(yyvsp[(3) - (3)].c),"+"));
						if(strcmp (resultOperations((yyvsp[(1) - (3)].c),(yyvsp[(3) - (3)].c),"+"), "error") == 0)
						{
							strcpy(Errors[counter], "Operacion no permitida entre los Tipos");
							ErrorLineNumb[counter++] = yylineno;
						}

						(yyval.c) = resultOperations((yyvsp[(1) - (3)].c),(yyvsp[(3) - (3)].c),"+");
					;}
    break;

  case 61:
#line 379 "jaguarSyntaxis.y"
    {
						if(strcmp (resultOperations((yyvsp[(1) - (3)].c),(yyvsp[(3) - (3)].c),"-"), "error") == 0)
						{
							strcpy(Errors[counter], "Operacion no permitida entre los Tipos");
							ErrorLineNumb[counter++] = yylineno;
						}
						(yyval.c) = resultOperations((yyvsp[(1) - (3)].c),(yyvsp[(3) - (3)].c),"-");
					;}
    break;

  case 62:
#line 387 "jaguarSyntaxis.y"
    {
						if(strcmp (resultOperations((yyvsp[(1) - (3)].c),(yyvsp[(3) - (3)].c),"*"), "error") == 0)
						{
							strcpy(Errors[counter], "Operacion no permitida entre los Tipos");
							ErrorLineNumb[counter++] = yylineno;
						}
						(yyval.c) = resultOperations((yyvsp[(1) - (3)].c),(yyvsp[(3) - (3)].c),"*");
					;}
    break;

  case 63:
#line 395 "jaguarSyntaxis.y"
    {
						if(strcmp (resultOperations((yyvsp[(1) - (3)].c),(yyvsp[(3) - (3)].c),"/"), "error") == 0)
						{
							strcpy(Errors[counter], "Operacion no permitida entre los Tipos");
							ErrorLineNumb[counter++] = yylineno;
						}
						(yyval.c) = resultOperations((yyvsp[(1) - (3)].c),(yyvsp[(3) - (3)].c),"/");
					;}
    break;

  case 64:
#line 403 "jaguarSyntaxis.y"
    {
						(yyval.c) = (yyvsp[(1) - (1)].c);
					;}
    break;

  case 65:
#line 406 "jaguarSyntaxis.y"
    {
						//							NOTA * Type void!!! Se puede hacer operaciones?
						struct simbolo *st;
						st = search((yyvsp[(1) - (1)].c));
						if( (!strcmp(st->name, "-1")) ){
							strcpy(Errors[counter], "No se ha encontrado el ID para la expresion aritmetica");
							ErrorLineNumb[counter++] = yylineno;
							(yyval.c) = "void";
						}else{
							(yyval.c) = st->type;
						}
					;}
    break;

  case 66:
#line 418 "jaguarSyntaxis.y"
    {(yyval.c)=(yyvsp[(1) - (1)].c);;}
    break;

  case 67:
#line 421 "jaguarSyntaxis.y"
    {(yyval.c)="int";;}
    break;

  case 68:
#line 422 "jaguarSyntaxis.y"
    {(yyval.c)="float";;}
    break;

  case 69:
#line 423 "jaguarSyntaxis.y"
    {(yyval.c)="string";;}
    break;

  case 70:
#line 424 "jaguarSyntaxis.y"
    {(yyval.c)="bool";;}
    break;

  case 71:
#line 428 "jaguarSyntaxis.y"
    {
			(yyval.c) = "";

;}
    break;

  case 72:
#line 432 "jaguarSyntaxis.y"
    {
			(yyval.c) = "";
;}
    break;

  case 73:
#line 437 "jaguarSyntaxis.y"
    {
		(yyval.c) = "";
;}
    break;

  case 74:
#line 442 "jaguarSyntaxis.y"
    {(yyval.c) = "";;}
    break;

  case 75:
#line 443 "jaguarSyntaxis.y"
    {(yyval.c) = "";;}
    break;

  case 76:
#line 445 "jaguarSyntaxis.y"
    {

	;}
    break;


/* Line 1267 of yacc.c.  */
#line 2096 "jaguarSyntaxis.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 456 "jaguarSyntaxis.y"
 
