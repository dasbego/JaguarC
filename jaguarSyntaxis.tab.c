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
     TYPE = 272,
     MAIN = 273,
     INTEGER = 274,
     REAL = 275,
     BOOLEAN = 276
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
#define TYPE 272
#define MAIN 273
#define INTEGER 274
#define REAL 275
#define BOOLEAN 276




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
#line 158 "jaguarSyntaxis.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 171 "jaguarSyntaxis.tab.c"

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
#define YYLAST   218

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  37
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  82
/* YYNRULES -- Number of states.  */
#define YYNSTATES  182

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   276

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      28,    29,    25,    23,    36,    24,    33,    26,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    27,    32,
       2,    22,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    34,     2,    35,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    30,     2,    31,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20,    21
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     8,    14,    22,    25,    26,    29,    30,
      37,    41,    42,    44,    48,    55,    58,    59,    62,    63,
      70,    73,    74,    78,    79,    82,    85,    91,    95,    97,
     100,   101,   110,   113,   114,   117,   118,   122,   123,   125,
     126,   129,   133,   136,   138,   140,   142,   145,   148,   150,
     152,   157,   161,   163,   165,   169,   174,   178,   183,   186,
     187,   191,   192,   196,   200,   204,   208,   210,   212,   214,
     216,   218,   220,   232,   243,   252,   253,   258,   262,   264,
     266,   270,   276
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      38,     0,    -1,     3,    14,    27,    39,    -1,    41,    47,
      40,    55,     4,    -1,    18,    28,    58,    29,    30,    60,
      31,    -1,    43,    42,    -1,    -1,    43,    42,    -1,    -1,
       5,    14,    30,    44,    31,    32,    -1,    53,    32,    45,
      -1,    -1,    44,    -1,    14,    33,    14,    -1,    14,    33,
      14,    34,    19,    35,    -1,    49,    48,    -1,    -1,    49,
      48,    -1,    -1,    17,    14,    28,    50,    29,    32,    -1,
      53,    51,    -1,    -1,    36,    53,    51,    -1,    -1,    53,
      54,    -1,    17,    14,    -1,    17,    14,    34,    19,    35,
      -1,    36,    53,    54,    -1,    32,    -1,    56,    57,    -1,
      -1,    17,    14,    28,    58,    29,    30,    60,    31,    -1,
      56,    57,    -1,    -1,    53,    59,    -1,    -1,    36,    53,
      59,    -1,    -1,    61,    -1,    -1,    62,    61,    -1,     8,
      65,    32,    -1,    64,    32,    -1,    52,    -1,    72,    -1,
      73,    -1,    66,    32,    -1,    67,    32,    -1,    14,    -1,
      46,    -1,    14,    34,    19,    35,    -1,    63,    22,    65,
      -1,    66,    -1,    70,    -1,    28,    65,    29,    -1,    14,
      28,    68,    29,    -1,    12,    28,    29,    -1,    13,    28,
      71,    29,    -1,    14,    69,    -1,    -1,    36,    14,    69,
      -1,    -1,    70,    23,    70,    -1,    70,    24,    70,    -1,
      70,    25,    70,    -1,    70,    26,    70,    -1,    71,    -1,
      63,    -1,    19,    -1,    20,    -1,    16,    -1,    21,    -1,
       9,    28,    64,    32,    76,    32,    64,    29,    30,    60,
      31,    -1,     9,    28,    32,    76,    32,    64,    29,    30,
      60,    31,    -1,     6,    28,    76,    29,    30,    60,    31,
      74,    -1,    -1,     7,    30,    60,    31,    -1,    65,    15,
      65,    -1,    21,    -1,    14,    -1,    28,    75,    29,    -1,
      28,    75,    29,    10,    76,    -1,    28,    75,    29,    11,
      76,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    46,    46,    49,    62,    68,    71,    76,    79,    83,
      94,   102,   103,   106,   127,   159,   164,   167,   172,   177,
     189,   197,   200,   211,   214,   220,   228,   239,   244,   247,
     250,   253,   264,   267,   271,   276,   279,   284,   287,   290,
     291,   292,   295,   296,   297,   298,   299,   300,   303,   313,
     316,   344,   354,   357,   360,   365,   398,   399,   402,   421,
     424,   443,   446,   456,   464,   472,   480,   483,   488,   489,
     490,   491,   494,   498,   503,   508,   509,   511,   514,   515,
     524,   525,   526
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PROGRAM", "PROGRAMEND", "STRUCT", "IF",
  "ELSE", "RETURN", "FOR", "AND", "OR", "READ", "WRITE", "ID",
  "OPERADORRELACIONAL", "CADENA", "TYPE", "MAIN", "INTEGER", "REAL",
  "BOOLEAN", "'='", "'+'", "'-'", "'*'", "'/'", "':'", "'('", "')'", "'{'",
  "'}'", "';'", "'.'", "'['", "']'", "','", "$accept", "s", "program",
  "principal", "declaracionEst", "lista_estructuras", "estructura",
  "varstruct", "sigvarStruct", "attrstruct", "firmasFunciones", "sigFirma",
  "firma", "argumentos_declaracion_firma", "lista_argumentos_firma",
  "declaracionv", "variable", "lista_variables", "declaracionf", "funcion",
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
     275,   276,    61,    43,    45,    42,    47,    58,    40,    41,
     123,   125,    59,    46,    91,    93,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    37,    38,    39,    40,    41,    41,    42,    42,    43,
      44,    45,    45,    46,    46,    47,    47,    48,    48,    49,
      50,    50,    51,    51,    52,    53,    53,    54,    54,    55,
      55,    56,    57,    57,    58,    58,    59,    59,    60,    61,
      61,    61,    62,    62,    62,    62,    62,    62,    63,    63,
      63,    64,    65,    65,    65,    66,    67,    67,    68,    68,
      69,    69,    70,    70,    70,    70,    70,    70,    71,    71,
      71,    71,    72,    72,    73,    74,    74,    75,    75,    75,
      76,    76,    76
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     5,     7,     2,     0,     2,     0,     6,
       3,     0,     1,     3,     6,     2,     0,     2,     0,     6,
       2,     0,     3,     0,     2,     2,     5,     3,     1,     2,
       0,     8,     2,     0,     2,     0,     3,     0,     1,     0,
       2,     3,     2,     1,     1,     1,     2,     2,     1,     1,
       4,     3,     1,     1,     3,     4,     3,     4,     2,     0,
       3,     0,     3,     3,     3,     3,     1,     1,     1,     1,
       1,     1,    11,    10,     8,     0,     4,     3,     1,     1,
       3,     5,     5
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     6,     0,     2,    16,     8,
       0,     0,     0,    18,     5,     8,     0,     0,     0,    30,
      15,    18,     7,     0,     0,     0,    21,    35,     0,     0,
      33,    17,    25,     0,    11,     0,    23,    37,     0,     0,
       3,    33,    29,     0,     9,    12,    10,     0,     0,    20,
       0,    34,     0,    35,    32,     0,    19,    23,    37,    39,
       0,    26,    22,    36,     0,     0,     0,     0,     0,    48,
      49,    43,     0,     0,    38,    39,     0,     0,     0,     0,
      44,    45,     0,     0,    70,    68,    69,    71,     0,    67,
       0,    52,    53,    66,     0,     0,     0,    59,     0,     0,
      28,     0,    24,     4,    40,     0,    42,    46,    47,    39,
       0,     0,     0,    41,     0,     0,     0,     0,    48,     0,
       0,    56,     0,    61,     0,    13,     0,     0,    51,     0,
      48,    71,     0,     0,     0,    54,    62,    63,    64,    65,
       0,     0,    57,     0,    58,    55,     0,    50,    27,    31,
       0,    80,    39,     0,     0,    61,     0,    77,     0,     0,
       0,     0,     0,    60,    14,    81,    82,    75,     0,     0,
       0,    74,    39,     0,    39,     0,    39,     0,    73,     0,
      76,    72
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     7,    19,     8,    14,    15,    24,    46,    70,
      12,    20,    21,    35,    49,    71,    72,   102,    29,    41,
      42,    38,    51,    73,    74,    75,    76,    77,    90,    78,
      79,   124,   144,    92,    93,    80,    81,   171,   133,   111
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -106
static const yytype_int16 yypact[] =
{
      17,     8,    34,    10,  -106,    36,    25,  -106,    26,    36,
      14,    32,    37,    26,  -106,    36,    39,    29,    31,    50,
    -106,    26,  -106,    47,    38,    41,    39,    39,    61,    80,
      50,  -106,    56,    65,    39,    63,    57,    66,    70,    79,
    -106,    50,  -106,    89,  -106,  -106,  -106,    86,    39,  -106,
      39,  -106,    90,    39,  -106,    84,  -106,    57,    66,    92,
      93,  -106,  -106,  -106,    95,    60,    96,    97,    98,   -18,
    -106,  -106,   -23,    99,  -106,    92,   105,   100,   101,   102,
    -106,  -106,    91,   103,  -106,  -106,  -106,  -106,    60,  -106,
     104,  -106,    87,  -106,    -8,   106,    11,   114,   115,   118,
    -106,    39,  -106,  -106,  -106,    60,  -106,  -106,  -106,    92,
      75,   109,   110,  -106,    44,    44,    44,    44,   -26,   103,
     108,  -106,   112,   107,   113,   111,   116,   -23,  -106,   117,
      49,   120,   129,   121,   122,  -106,     3,     3,  -106,  -106,
     123,   103,  -106,   132,  -106,  -106,   128,  -106,  -106,  -106,
      60,     7,    92,   139,   124,   107,   119,  -106,   103,   103,
     126,   130,   139,  -106,  -106,  -106,  -106,   151,   131,   133,
     134,  -106,    92,   135,    92,   136,    92,   137,  -106,   138,
    -106,  -106
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -106,  -106,  -106,  -106,  -106,   145,   158,   140,  -106,  -106,
    -106,   149,   163,  -106,   125,  -106,   -15,    45,  -106,   147,
     142,   127,   141,  -104,   143,  -106,   -65,   -91,   -84,   -63,
    -106,  -106,    18,     0,    81,  -106,  -106,  -106,  -106,  -105
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -80
static const yytype_int16 yytable[] =
{
      89,    25,    91,   120,   112,   129,   118,    98,    99,   100,
      97,    36,    37,   101,   140,    98,    99,   158,   159,    25,
       1,   128,     3,    89,   119,    91,   132,    84,   116,   117,
      85,    86,    87,    57,     4,    58,   154,     5,    37,    10,
      89,     6,    91,    11,    16,    89,    17,    91,   160,    89,
      89,    89,    89,   165,   166,    18,    23,    26,   118,    27,
      84,    32,   161,    85,    86,    87,   157,    28,   175,    33,
     177,   169,   179,    34,    69,    39,    84,    97,   -79,    85,
      86,    87,    98,    99,    40,    89,   127,    91,    88,   130,
      43,    84,    47,    48,    85,    86,   131,    44,    64,    52,
      65,    66,    50,    88,    67,    68,    69,    53,    55,    23,
     114,   115,   116,   117,   136,   137,   138,   139,    56,    61,
      59,   109,    82,    83,    94,    95,    96,   105,   123,   125,
     103,   110,   106,   107,   108,   121,   113,   126,   134,   135,
     141,   142,   145,   143,   150,   146,   155,   156,   149,   -78,
     151,   147,   152,   118,   164,   153,   162,   167,   170,   168,
      22,   172,   173,     9,   174,   176,    30,   178,   180,   181,
      31,    13,   148,   163,    45,     0,     0,   122,     0,     0,
      60,     0,    62,    54,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    63,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   104
};

static const yytype_int16 yycheck[] =
{
      65,    16,    65,    94,    88,   109,    14,    33,    34,    32,
      28,    26,    27,    36,   119,    33,    34,    10,    11,    34,
       3,   105,    14,    88,    32,    88,   110,    16,    25,    26,
      19,    20,    21,    48,     0,    50,   141,    27,    53,    14,
     105,     5,   105,    17,    30,   110,    14,   110,   152,   114,
     115,   116,   117,   158,   159,    18,    17,    28,    14,    28,
      16,    14,   153,    19,    20,    21,   150,    17,   172,    31,
     174,   162,   176,    32,    14,    14,    16,    28,    29,    19,
      20,    21,    33,    34,     4,   150,   101,   150,    28,    14,
      34,    16,    29,    36,    19,    20,    21,    32,     6,    29,
       8,     9,    36,    28,    12,    13,    14,    28,    19,    17,
      23,    24,    25,    26,   114,   115,   116,   117,    32,    35,
      30,    30,    29,    28,    28,    28,    28,    22,    14,    14,
      31,    28,    32,    32,    32,    29,    32,    19,    29,    29,
      32,    29,    29,    36,    15,    34,    14,    19,    31,    29,
      29,    35,    30,    14,    35,    32,    32,    31,     7,    29,
      15,    30,    29,     5,    30,    30,    19,    31,    31,    31,
      21,     8,   127,   155,    34,    -1,    -1,    96,    -1,    -1,
      53,    -1,    57,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    38,    14,     0,    27,     5,    39,    41,    43,
      14,    17,    47,    49,    42,    43,    30,    14,    18,    40,
      48,    49,    42,    17,    44,    53,    28,    28,    17,    55,
      56,    48,    14,    31,    32,    50,    53,    53,    58,    14,
       4,    56,    57,    34,    32,    44,    45,    29,    36,    51,
      36,    59,    29,    28,    57,    19,    32,    53,    53,    30,
      58,    35,    51,    59,     6,     8,     9,    12,    13,    14,
      46,    52,    53,    60,    61,    62,    63,    64,    66,    67,
      72,    73,    29,    28,    16,    19,    20,    21,    28,    63,
      65,    66,    70,    71,    28,    28,    28,    28,    33,    34,
      32,    36,    54,    31,    61,    22,    32,    32,    32,    30,
      28,    76,    65,    32,    23,    24,    25,    26,    14,    32,
      64,    29,    71,    14,    68,    14,    19,    53,    65,    60,
      14,    21,    65,    75,    29,    29,    70,    70,    70,    70,
      76,    32,    29,    36,    69,    29,    34,    35,    54,    31,
      15,    29,    30,    32,    76,    14,    19,    65,    10,    11,
      60,    64,    32,    69,    35,    76,    76,    31,    29,    64,
       7,    74,    30,    29,    30,    60,    30,    60,    31,    60,
      31,    31
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
				sprintf(contStruct, "Struct{}");				
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
				(yyval.c) = checkStruct2->type;	
			}
		}
	;}
    break;

  case 14:
#line 127 "jaguarSyntaxis.y"
    {
		struct simbolo *checkStruct = search((yyvsp[(1) - (6)].c));
		struct simbolo *checkStruct2 = search((yyvsp[(3) - (6)].c));
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
				if((yyvsp[(5) - (6)].i)>=yuyu || (yyvsp[(5) - (6)].i)<0){
					char error[100];
					sprintf(error,"Indice fuera del arreglo. Tamaño de '%s' es de %d",checkStruct2->name, (yyvsp[(5) - (6)].i));
					strcpy(Errors[counter], error);
					ErrorLineNumb[counter++] = yylineno;
				}
				(yyval.c) = idtype;	
			}
		}
	;}
    break;

  case 15:
#line 159 "jaguarSyntaxis.y"
    {
	struct simbolo *st = (yyvsp[(1) - (2)].sim);
	actualizaScopes(st->scope);
	(yyval.c)="";
;}
    break;

  case 16:
#line 164 "jaguarSyntaxis.y"
    {(yyval.c)="";;}
    break;

  case 17:
#line 167 "jaguarSyntaxis.y"
    {
	struct simbolo *st = (yyvsp[(1) - (2)].sim);
	actualizaScopes(st->scope);
	(yyval.c)="";
;}
    break;

  case 18:
#line 172 "jaguarSyntaxis.y"
    {
	(yyval.c)="";
;}
    break;

  case 19:
#line 177 "jaguarSyntaxis.y"
    {
		struct simbolo *st = malloc(sizeof(struct simbolo));
		char type[300];
		st->name = (yyvsp[(2) - (6)].c);
		st->scope = (yyvsp[(2) - (6)].c);
		sprintf(type, "(%s)->%s",(yyvsp[(4) - (6)].c),(yyvsp[(1) - (6)].c));
		st->type = type;
		insertTable(st->name, st->type, st->scope);
		(yyval.sim)=st;
;}
    break;

  case 20:
#line 189 "jaguarSyntaxis.y"
    {
			 	struct simbolo *st = (yyvsp[(1) - (2)].sim);
				char *tmp;
				tmp = st->type;
				strcat(tmp, (yyvsp[(2) - (2)].c));
				//printf("%s\n",tmp);
				(yyval.c) = tmp;
			;}
    break;

  case 21:
#line 197 "jaguarSyntaxis.y"
    {(yyval.c) = "";;}
    break;

  case 22:
#line 200 "jaguarSyntaxis.y"
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

  case 23:
#line 211 "jaguarSyntaxis.y"
    {(yyval.c) = "";;}
    break;

  case 24:
#line 214 "jaguarSyntaxis.y"
    {
		struct simbolo *st = (yyvsp[(1) - (2)].sim);
		insertTable(st->name, st->type, st->scope);
;}
    break;

  case 25:
#line 220 "jaguarSyntaxis.y"
    {
			struct simbolo *st = malloc(sizeof(struct simbolo));
			char *type = (yyvsp[(1) - (2)].c);
			st->name = (yyvsp[(2) - (2)].c);
			st->type = type;
			st->scope = "";
			(yyval.sim) = st;
		;}
    break;

  case 26:
#line 228 "jaguarSyntaxis.y"
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

  case 27:
#line 239 "jaguarSyntaxis.y"
    {	
					struct simbolo *st = (yyvsp[(2) - (3)].sim);
					insertTable(st->name, st->type, st->scope);
					(yyval.c)="";
				;}
    break;

  case 28:
#line 244 "jaguarSyntaxis.y"
    {(yyval.c)="";;}
    break;

  case 29:
#line 247 "jaguarSyntaxis.y"
    {
				(yyval.c) = "";
			;}
    break;

  case 30:
#line 250 "jaguarSyntaxis.y"
    {(yyval.c) = "";;}
    break;

  case 31:
#line 253 "jaguarSyntaxis.y"
    {
	struct simbolo *abus = search((yyvsp[(2) - (8)].c));	
	if(!strcmp(abus->name,"-1")){
		strcpy(Errors[counter], "No se ha firmado la funcion.");
		ErrorLineNumb[counter++] = yylineno;
	}
	actualizaScopes((yyvsp[(2) - (8)].c));
	(yyval.sim)=abus;
;}
    break;

  case 32:
#line 264 "jaguarSyntaxis.y"
    {
					(yyval.c) = "";
				;}
    break;

  case 33:
#line 267 "jaguarSyntaxis.y"
    {(yyval.c) = "";;}
    break;

  case 34:
#line 271 "jaguarSyntaxis.y"
    {
			 	struct simbolo *st = (yyvsp[(1) - (2)].sim);
			 	insertTable(st->name, st->type, st->scope);	
				(yyval.c) = "";
			;}
    break;

  case 35:
#line 276 "jaguarSyntaxis.y"
    {(yyval.c) = "";;}
    break;

  case 36:
#line 279 "jaguarSyntaxis.y"
    {
					struct simbolo *st = (yyvsp[(2) - (3)].sim);
			 		insertTable(st->name, st->type, st->scope);	
					(yyval.c) = "";
				;}
    break;

  case 37:
#line 284 "jaguarSyntaxis.y"
    {(yyval.c) = "";;}
    break;

  case 48:
#line 303 "jaguarSyntaxis.y"
    {
	struct simbolo *st = search((yyvsp[(1) - (1)].c));
	if( (!strcmp(st->name, "-1")) ){
		strcpy(Errors[counter], "Variable no declarada previamente");
		ErrorLineNumb[counter++] = yylineno;
		(yyval.c)="";
	}else{
		(yyval.c)=st->type;
	}
;}
    break;

  case 49:
#line 313 "jaguarSyntaxis.y"
    {
	(yyval.c)=(yyvsp[(1) - (1)].c);
;}
    break;

  case 50:
#line 316 "jaguarSyntaxis.y"
    {
	struct simbolo *st = search((yyvsp[(1) - (4)].c));
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
			if((yyvsp[(3) - (4)].i)>=yuyu || (yyvsp[(3) - (4)].i)<0){
				char fail[100];
				sprintf(fail,"Indice fuera del arreglo. Tamaño de '%s' es de %d",st->name, (yyvsp[(3) - (4)].i));
				printf("chile");
				strcpy(Errors[counter], fail);
				ErrorLineNumb[counter++] = yylineno;
			}
		}
	}
	(yyval.c)=idtype;
;}
    break;

  case 51:
#line 344 "jaguarSyntaxis.y"
    {
	if(strcmp((yyvsp[(1) - (3)].c),(yyvsp[(3) - (3)].c))){
		if(strcmp((yyvsp[(1) - (3)].c),"")){
			strcpy(Errors[counter], "Tipos no compatibles para la asignacion");
			ErrorLineNumb[counter++] = yylineno;
		}
	}
;}
    break;

  case 52:
#line 354 "jaguarSyntaxis.y"
    {
			(yyval.c) = (yyvsp[(1) - (1)].c);
		;}
    break;

  case 53:
#line 357 "jaguarSyntaxis.y"
    {
			(yyval.c) = (yyvsp[(1) - (1)].c);
		;}
    break;

  case 54:
#line 360 "jaguarSyntaxis.y"
    {
			(yyval.c) = (yyvsp[(2) - (3)].c);
		;}
    break;

  case 55:
#line 365 "jaguarSyntaxis.y"
    {		
				
				
				struct simbolo *checkStruct = search((yyvsp[(1) - (4)].c));				
				char *typeFunc;
				char typee[100];
				sprintf(typee, "%s", checkStruct->type);

    			typeFunc = strtok(checkStruct->type, "-" );
				
				printf("Se compara: %s y %s", (yyvsp[(3) - (4)].c), typeFunc);
				if( (strcmp((yyvsp[(3) - (4)].c), typeFunc)!=0 ) )
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
						(yyval.c) = regtype;
					}
					else{				
						strcpy(Errors[counter], "Funcion desconocida/no declarada");
						ErrorLineNumb[counter++] = yylineno;
					}
				}
			;}
    break;

  case 58:
#line 402 "jaguarSyntaxis.y"
    {
					struct simbolo *st = search((yyvsp[(1) - (2)].c));
					char temp[70];
					char b[100];					
					strcpy(temp,"(");
					strcat(temp, st->type);	
					strcat(temp, (yyvsp[(2) - (2)].c));		
					strcat(temp, ")");					
					sprintf(b,"%s",temp);

					printf("Me llego: %s \n", (yyvsp[(2) - (2)].c));
					if(strcmp(temp,"" )!=0){
						printf("\n Regreso::: %s \n", temp);
						(yyval.c) = temp;

					}else{
						(yyval.c)="";
					}
				;}
    break;

  case 59:
#line 421 "jaguarSyntaxis.y"
    {(yyval.c) = "";;}
    break;

  case 60:
#line 424 "jaguarSyntaxis.y"
    {
			char buff[350];			
			char b[100];
			char a[100];	
			char result[100];	
			//sprintf(buff,"%s", $2);
			struct simbolo *st = search((yyvsp[(2) - (3)].c));
			strcpy(buff,"X");
			strcat(buff, st->type);				
			sprintf(a,"%s", (yyvsp[(3) - (3)].c));
			sprintf(b,"%s",buff);

			printf("El a %s \n", a);
			printf("El b %s \n", b);
			strcat(b, a);

			printf("Resulatado:  %s \n", b);
			(yyval.c)=b;
		;}
    break;

  case 61:
#line 443 "jaguarSyntaxis.y"
    {(yyval.c)="";;}
    break;

  case 62:
#line 446 "jaguarSyntaxis.y"
    {
						//printf("%s\n",resultOperations($1,$3,"+"));
						if(strcmp (resultOperations((yyvsp[(1) - (3)].c),(yyvsp[(3) - (3)].c),"+"), "error") == 0)
						{
							strcpy(Errors[counter], "Operacion no permitida entre los Tipos");
							ErrorLineNumb[counter++] = yylineno;
						}

						(yyval.c) = resultOperations((yyvsp[(1) - (3)].c),(yyvsp[(3) - (3)].c),"+");
					;}
    break;

  case 63:
#line 456 "jaguarSyntaxis.y"
    {
						if(strcmp (resultOperations((yyvsp[(1) - (3)].c),(yyvsp[(3) - (3)].c),"-"), "error") == 0)
						{
							strcpy(Errors[counter], "Operacion no permitida entre los Tipos");
							ErrorLineNumb[counter++] = yylineno;
						}
						(yyval.c) = resultOperations((yyvsp[(1) - (3)].c),(yyvsp[(3) - (3)].c),"-");
					;}
    break;

  case 64:
#line 464 "jaguarSyntaxis.y"
    {
						if(strcmp (resultOperations((yyvsp[(1) - (3)].c),(yyvsp[(3) - (3)].c),"*"), "error") == 0)
						{
							strcpy(Errors[counter], "Operacion no permitida entre los Tipos");
							ErrorLineNumb[counter++] = yylineno;
						}
						(yyval.c) = resultOperations((yyvsp[(1) - (3)].c),(yyvsp[(3) - (3)].c),"*");
					;}
    break;

  case 65:
#line 472 "jaguarSyntaxis.y"
    {
						if(strcmp (resultOperations((yyvsp[(1) - (3)].c),(yyvsp[(3) - (3)].c),"/"), "error") == 0)
						{
							strcpy(Errors[counter], "Operacion no permitida entre los Tipos");
							ErrorLineNumb[counter++] = yylineno;
						}
						(yyval.c) = resultOperations((yyvsp[(1) - (3)].c),(yyvsp[(3) - (3)].c),"/");
					;}
    break;

  case 66:
#line 480 "jaguarSyntaxis.y"
    {
						(yyval.c) = (yyvsp[(1) - (1)].c);
					;}
    break;

  case 67:
#line 483 "jaguarSyntaxis.y"
    {
						(yyval.c)=(yyvsp[(1) - (1)].c);
					;}
    break;

  case 68:
#line 488 "jaguarSyntaxis.y"
    {(yyval.c)="int";;}
    break;

  case 69:
#line 489 "jaguarSyntaxis.y"
    {(yyval.c)="float";;}
    break;

  case 70:
#line 490 "jaguarSyntaxis.y"
    {(yyval.c)="string";;}
    break;

  case 71:
#line 491 "jaguarSyntaxis.y"
    {(yyval.c)="bool";;}
    break;

  case 72:
#line 494 "jaguarSyntaxis.y"
    {
			(yyval.c) = "";

;}
    break;

  case 73:
#line 498 "jaguarSyntaxis.y"
    {
			(yyval.c) = "";
;}
    break;

  case 74:
#line 503 "jaguarSyntaxis.y"
    {
		(yyval.c) = "";
;}
    break;

  case 75:
#line 508 "jaguarSyntaxis.y"
    {(yyval.c) = "";;}
    break;

  case 76:
#line 509 "jaguarSyntaxis.y"
    {(yyval.c) = "";;}
    break;

  case 77:
#line 511 "jaguarSyntaxis.y"
    {

	;}
    break;

  case 79:
#line 515 "jaguarSyntaxis.y"
    {
		struct simbolo *sp = search((yyvsp[(1) - (1)].c));
		if(strcmp(sp->type,"bool")!=0){
			strcpy(Errors[counter], "ID usado para condicion no es tipo bool");
			ErrorLineNumb[counter++] = yylineno;
		}
	;}
    break;


/* Line 1267 of yacc.c.  */
#line 2175 "jaguarSyntaxis.tab.c"
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


#line 530 "jaguarSyntaxis.y"
 
