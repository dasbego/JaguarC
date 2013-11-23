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

char scope[50];



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
#define YYLAST   165

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  38
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  66
/* YYNRULES -- Number of states.  */
#define YYNSTATES  159

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   277

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      29,    30,    26,    24,    37,    25,    34,    27,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    28,    33,
       2,    23,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    35,     2,    36,     2,     2,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20,    21,    22
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     8,    20,    21,    27,    31,    32,    34,
      38,    45,    48,    51,    57,    61,    63,    66,    67,    76,
      79,    80,    83,    84,    88,    89,    91,    92,    95,    99,
     102,   104,   106,   108,   111,   114,   117,   121,   123,   125,
     129,   134,   138,   143,   146,   147,   151,   152,   156,   160,
     164,   168,   170,   172,   174,   176,   178,   180,   182,   194,
     205,   214,   215,   220,   224,   228,   234
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      39,     0,    -1,     3,    14,    28,    40,    -1,    41,    18,
      19,    29,    51,    30,    31,    53,    32,    48,     4,    -1,
      -1,     5,    14,    31,    42,    32,    -1,    46,    33,    43,
      -1,    -1,    42,    -1,    14,    34,    14,    -1,    14,    34,
      14,    35,    20,    36,    -1,    46,    47,    -1,    18,    14,
      -1,    18,    14,    35,    20,    36,    -1,    37,    46,    47,
      -1,    33,    -1,    49,    50,    -1,    -1,    18,    14,    29,
      51,    30,    31,    53,    32,    -1,    49,    50,    -1,    -1,
      46,    52,    -1,    -1,    37,    46,    52,    -1,    -1,    54,
      -1,    -1,    55,    54,    -1,     8,    57,    33,    -1,    56,
      33,    -1,    45,    -1,    64,    -1,    65,    -1,    58,    33,
      -1,    59,    33,    -1,    44,    33,    -1,    14,    23,    57,
      -1,    58,    -1,    62,    -1,    29,    57,    30,    -1,    14,
      29,    60,    30,    -1,    12,    29,    30,    -1,    13,    29,
      63,    30,    -1,    14,    61,    -1,    -1,    37,    14,    61,
      -1,    -1,    62,    24,    62,    -1,    62,    25,    62,    -1,
      62,    26,    62,    -1,    62,    27,    62,    -1,    63,    -1,
      14,    -1,    20,    -1,    21,    -1,    16,    -1,    22,    -1,
      44,    -1,     9,    29,    56,    33,    68,    33,    56,    30,
      31,    53,    32,    -1,     9,    29,    33,    68,    33,    56,
      30,    31,    53,    32,    -1,     6,    29,    68,    30,    31,
      53,    32,    66,    -1,    -1,     7,    31,    53,    32,    -1,
      57,    15,    57,    -1,    29,    67,    30,    -1,    29,    67,
      30,    10,    68,    -1,    29,    67,    30,    11,    68,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    43,    43,    46,    52,    53,    62,    71,    72,    75,
      84,    95,   103,   111,   122,   129,   132,   140,   143,   155,
     163,   167,   179,   182,   194,   197,   200,   201,   202,   205,
     206,   207,   208,   209,   210,   211,   214,   226,   229,   232,
     237,   260,   261,   264,   273,   276,   277,   280,   283,   286,
     289,   292,   295,   302,   303,   304,   305,   306,   309,   313,
     318,   323,   324,   326,   331,   332,   333
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
  "')'", "'{'", "'}'", "';'", "'.'", "'['", "']'", "','", "$accept", "s",
  "program", "estructura", "varstruct", "sigvarStruct", "attrstruct",
  "declaracionv", "variable", "lista_variables", "declaracionf", "funcion",
  "lista_funciones", "argumentos_declaracion", "lista_argumentos",
  "cuerpo", "lista_sentencias", "sentencia", "asignacion", "expresion",
  "llamada_a_funcion", "llamada_funcion_definida", "argumentos_llamada",
  "lista_ids", "expresion_aritmetica", "valor", "iteracion",
  "estatuto_decision", "sino", "condicion", "lista_condiciones", 0
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
      41,   123,   125,    59,    46,    91,    93,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    38,    39,    40,    41,    41,    42,    43,    43,    44,
      44,    45,    46,    46,    47,    47,    48,    48,    49,    50,
      50,    51,    51,    52,    52,    53,    54,    54,    54,    55,
      55,    55,    55,    55,    55,    55,    56,    57,    57,    57,
      58,    59,    59,    60,    60,    61,    61,    62,    62,    62,
      62,    62,    62,    63,    63,    63,    63,    63,    64,    64,
      65,    66,    66,    67,    68,    68,    68
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,    11,     0,     5,     3,     0,     1,     3,
       6,     2,     2,     5,     3,     1,     2,     0,     8,     2,
       0,     2,     0,     3,     0,     1,     0,     2,     3,     2,
       1,     1,     1,     2,     2,     2,     3,     1,     1,     3,
       4,     3,     4,     2,     0,     3,     0,     3,     3,     3,
       3,     1,     1,     1,     1,     1,     1,     1,    11,    10,
       8,     0,     4,     3,     3,     5,     5
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     4,     0,     2,     0,     0,
       0,     0,     0,     0,     0,     0,    22,    12,     5,     7,
      24,     0,     0,     8,     6,     0,    21,     0,     0,    24,
      26,    13,    23,     0,     0,     0,     0,     0,     0,     0,
      30,     0,     0,    25,    26,     0,     0,     0,    31,    32,
       0,    52,    55,    53,    54,    56,     0,    57,     0,    37,
      38,    51,     0,     0,     0,     0,    44,     0,    35,    15,
       0,    11,    17,    27,    29,    33,    34,     0,     0,     0,
      28,     0,     0,     0,     0,     0,     0,     0,    41,     0,
       0,    36,    46,     0,     9,     0,     0,     0,    20,     0,
       0,     0,    39,    52,    47,    48,    49,    50,     0,     0,
      42,     0,    43,    40,     0,    14,     0,     3,    20,    16,
       0,    64,    26,     0,     0,    46,     0,    22,    19,    63,
       0,     0,     0,     0,     0,    45,    10,     0,    65,    66,
      61,     0,     0,     0,     0,    60,    26,     0,    26,    26,
       0,    26,     0,     0,    59,     0,    18,    62,    58
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     7,     8,    14,    24,    57,    40,    41,    71,
      97,   118,   119,    21,    26,    42,    43,    44,    45,    58,
      46,    47,    93,   112,    60,    61,    48,    49,   145,   100,
      78
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -115
static const yytype_int16 yypact[] =
{
       8,    13,    23,    11,  -115,    26,    27,  -115,    29,    25,
      21,    41,    36,    52,    37,    38,    41,    39,  -115,    41,
      50,    43,    69,  -115,  -115,    41,  -115,    59,    57,    50,
      49,  -115,  -115,    62,    22,    65,    66,    67,   -13,    64,
    -115,   -15,    68,  -115,    49,    70,    71,    72,  -115,  -115,
      73,   -17,  -115,  -115,  -115,  -115,    22,  -115,    74,  -115,
      55,  -115,    -7,    76,    32,    22,    84,    85,  -115,  -115,
      41,  -115,    83,  -115,  -115,  -115,  -115,    22,    78,    79,
    -115,    56,    56,    56,    56,    87,    73,    80,  -115,    77,
      82,  -115,    86,    90,    89,   -15,   100,   111,    83,   107,
      95,    96,  -115,    77,     3,     3,  -115,  -115,    93,    73,
    -115,   114,  -115,  -115,   109,  -115,   101,  -115,    83,  -115,
      22,     9,    49,   117,    99,    86,    97,    41,  -115,  -115,
      73,    73,   102,   105,   117,  -115,  -115,   106,  -115,  -115,
     130,   108,   110,   112,   113,  -115,    49,   115,    49,    49,
     116,    49,   118,   119,  -115,   120,  -115,  -115,  -115
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -115,  -115,  -115,  -115,   122,  -115,   -30,  -115,   -10,    47,
    -115,    75,    20,    18,   124,  -114,   121,  -115,   -59,   -52,
     -32,  -115,  -115,    24,     2,    91,  -115,  -115,  -115,  -115,
     -81
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      39,    15,    59,    87,    79,   108,    20,    85,   132,    15,
      65,     1,    66,    91,    39,    29,    66,    67,    69,   130,
     131,    67,    70,     4,    59,    99,    86,     3,   124,    83,
      84,     6,   150,    59,   152,   153,    51,   155,    52,     5,
      12,     9,    53,    54,    55,    59,    89,    10,    52,   138,
     139,    56,    53,    54,    55,    33,    11,    34,    35,    13,
      95,    36,    37,    38,   133,    16,    17,    13,   129,    18,
     103,    19,    52,    27,    22,   142,    53,    54,    55,    81,
      82,    83,    84,   104,   105,   106,   107,    25,    59,    28,
      30,    50,    39,    31,    62,    63,    64,    68,    92,    94,
      72,    96,    77,    74,    75,    76,    88,    80,   101,   102,
      65,    67,   110,   109,   116,   117,    39,    20,    39,    39,
     113,    39,   120,   111,   114,   121,   123,   122,   125,   126,
     127,    85,   134,   136,   140,   141,   143,   144,   128,   146,
     147,    23,   115,   148,   149,   137,   151,    98,   154,   135,
     156,   157,   158,    32,     0,    90,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    73
};

static const yytype_int16 yycheck[] =
{
      30,    11,    34,    62,    56,    86,    16,    14,   122,    19,
      23,     3,    29,    65,    44,    25,    29,    34,    33,    10,
      11,    34,    37,     0,    56,    77,    33,    14,   109,    26,
      27,     5,   146,    65,   148,   149,    14,   151,    16,    28,
      19,    14,    20,    21,    22,    77,    14,    18,    16,   130,
     131,    29,    20,    21,    22,     6,    31,     8,     9,    18,
      70,    12,    13,    14,   123,    29,    14,    18,   120,    32,
      14,    33,    16,    30,    35,   134,    20,    21,    22,    24,
      25,    26,    27,    81,    82,    83,    84,    37,   120,    20,
      31,    29,   122,    36,    29,    29,    29,    33,    14,    14,
      32,    18,    29,    33,    33,    33,    30,    33,    30,    30,
      23,    34,    30,    33,    14,     4,   146,   127,   148,   149,
      30,   151,    15,    37,    35,    30,    33,    31,    14,    20,
      29,    14,    33,    36,    32,    30,    30,     7,   118,    31,
      30,    19,    95,    31,    31,   127,    31,    72,    32,   125,
      32,    32,    32,    29,    -1,    64,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    44
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    39,    14,     0,    28,     5,    40,    41,    14,
      18,    31,    19,    18,    42,    46,    29,    14,    32,    33,
      46,    51,    35,    42,    43,    37,    52,    30,    20,    46,
      31,    36,    52,     6,     8,     9,    12,    13,    14,    44,
      45,    46,    53,    54,    55,    56,    58,    59,    64,    65,
      29,    14,    16,    20,    21,    22,    29,    44,    57,    58,
      62,    63,    29,    29,    29,    23,    29,    34,    33,    33,
      37,    47,    32,    54,    33,    33,    33,    29,    68,    57,
      33,    24,    25,    26,    27,    14,    33,    56,    30,    14,
      63,    57,    14,    60,    14,    46,    18,    48,    49,    57,
      67,    30,    30,    14,    62,    62,    62,    62,    68,    33,
      30,    37,    61,    30,    35,    47,    14,     4,    49,    50,
      15,    30,    31,    33,    68,    14,    20,    29,    50,    57,
      10,    11,    53,    56,    33,    61,    36,    51,    68,    68,
      32,    30,    56,    30,     7,    66,    31,    30,    31,    31,
      53,    31,    53,    53,    32,    53,    32,    32,    32
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
#line 46 "jaguarSyntaxis.y"
    {
	sprintf(scope,"%s", (yyvsp[(3) - (11)].c));
	//struct simbolo *st = $5;
;}
    break;

  case 5:
#line 53 "jaguarSyntaxis.y"
    {
				/*cuando se declara un struct*/
				sprintf(scope, "%s", (yyvsp[(2) - (5)].c));
				char contStruct[300];
				sprintf(contStruct, "Register(%s)", (yyvsp[(4) - (5)].c));
				insertTable((yyvsp[(2) - (5)].c),strdup(contStruct),scope);
			;}
    break;

  case 6:
#line 62 "jaguarSyntaxis.y"
    {
			if(strcmp((yyvsp[(3) - (3)].c),strdup(""))){
				struct simbolo *st = (yyvsp[(1) - (3)].sim);
				insertTable(st->name, st->type, st->scope);
				(yyval.c)="";
			}
		;}
    break;

  case 7:
#line 71 "jaguarSyntaxis.y"
    {(yyval.c)="";;}
    break;

  case 8:
#line 72 "jaguarSyntaxis.y"
    { (yyval.c)=(yyvsp[(1) - (1)].c);}
    break;

  case 9:
#line 75 "jaguarSyntaxis.y"
    {
					//buscar si $1 existe y despues si $3 existe entonces $$ = $3
				if(search((yyvsp[(1) - (3)].c),(yyvsp[(1) - (3)].c)) && search((yyvsp[(3) - (3)].c), (yyvsp[(1) - (3)].c)))
					(yyval.c) = (yyvsp[(3) - (3)].c);
				else{
					yyerror("variable o atributo desconocido.");
					abort();
				}
			;}
    break;

  case 10:
#line 84 "jaguarSyntaxis.y"
    {
					//buscar si $1 existe y despues si $3 existe entonces $$ = $3
				if(search((yyvsp[(1) - (6)].c), (yyvsp[(1) - (6)].c)) && search((yyvsp[(3) - (6)].c), (yyvsp[(1) - (6)].c)))
					(yyval.c) = (yyvsp[(3) - (6)].c);
				else{
					yyerror("variable o atributo desconocido.");
					abort();
				}
			;}
    break;

  case 11:
#line 95 "jaguarSyntaxis.y"
    {
	if(strcmp((yyvsp[(2) - (2)].c),"")){
		struct simbolo *st = (yyvsp[(1) - (2)].sim);
		insertTable(st->name, st->type, st->scope);
	}
;}
    break;

  case 12:
#line 103 "jaguarSyntaxis.y"
    {
			struct simbolo *st = malloc(sizeof(struct simbolo));
			char *type = (yyvsp[(1) - (2)].c);
			st->name = (yyvsp[(2) - (2)].c);
			st->type = type;
			st->scope = scope;
			(yyval.sim) = st;
		;}
    break;

  case 13:
#line 111 "jaguarSyntaxis.y"
    {
			struct simbolo *st = malloc(sizeof(struct simbolo));
			char *type;
			sprintf(type,"array(0..%d)",(yyvsp[(4) - (5)].i));
			st->name = (yyvsp[(2) - (5)].c);
			st->type = type;
			st->scope = scope;
			(yyval.sim) = st;
		;}
    break;

  case 14:
#line 122 "jaguarSyntaxis.y"
    {	
					struct simbolo *st = (yyvsp[(2) - (3)].sim);
					if(strcmp((yyvsp[(3) - (3)].c),"")){
						insertTable(st->name, st->type, st->scope);
						(yyval.c)="";
					}
				;}
    break;

  case 15:
#line 129 "jaguarSyntaxis.y"
    {(yyval.c)="";;}
    break;

  case 16:
#line 132 "jaguarSyntaxis.y"
    {
				if(strcmp((yyvsp[(2) - (2)].c),""))
				{
					struct simbolo *st = (yyvsp[(1) - (2)].sim);
					insertTable(st->name, st->type, st->scope);
				}
				(yyval.c) = "";
			;}
    break;

  case 17:
#line 140 "jaguarSyntaxis.y"
    {(yyval.c) = "";;}
    break;

  case 18:
#line 143 "jaguarSyntaxis.y"
    {
	sprintf(scope,"%s", (yyvsp[(2) - (8)].c));
	struct simbolo *st = malloc(sizeof(struct simbolo));
	char buff[300];
	sprintf(buff, "(%s)->%s", (yyvsp[(4) - (8)].c), (yyvsp[(1) - (8)].c));
	st->name = (yyvsp[(2) - (8)].c);
	st->type = buff;	
	st->scope = scope;
	(yyval.sim) = st;
;}
    break;

  case 19:
#line 155 "jaguarSyntaxis.y"
    {
					if(strcmp((yyvsp[(2) - (2)].c),""))
					{
						struct simbolo *st = (yyvsp[(1) - (2)].sim);
						insertTable(st->name, st->type, st->scope);
					}
					(yyval.c) = "";
				;}
    break;

  case 20:
#line 163 "jaguarSyntaxis.y"
    {(yyval.c) = "";;}
    break;

  case 21:
#line 167 "jaguarSyntaxis.y"
    {
			 	struct simbolo *st = (yyvsp[(1) - (2)].sim);
			 	insertTable(st->name, st->type, scope);

			 	char buff[350];
				if(strcmp((yyvsp[(2) - (2)].c),"")){
					sprintf(buff,"%s",st->type);
				}else{
					sprintf(buff,"%sX%s", st->type, (yyvsp[(2) - (2)].c));
				}
				(yyval.c) = buff;
			;}
    break;

  case 22:
#line 179 "jaguarSyntaxis.y"
    {(yyval.c) = "";;}
    break;

  case 23:
#line 182 "jaguarSyntaxis.y"
    {
					struct simbolo *st = (yyvsp[(2) - (3)].sim);
			 		insertTable(st->name, st->type, scope);

					char buff[350];
					if(strcmp((yyvsp[(3) - (3)].c),"")){
						sprintf(buff,"%s",st->type);
					}else{
						sprintf(buff,"%sX%s", st->type, (yyvsp[(3) - (3)].c));
					}
					(yyval.c) = buff;
				;}
    break;

  case 24:
#line 194 "jaguarSyntaxis.y"
    {(yyval.c) = "";;}
    break;

  case 36:
#line 214 "jaguarSyntaxis.y"
    {
		/*buscar si existe id en este scope*/
	if(search((yyvsp[(1) - (3)].c),scope)){
		/*actualiza le pasas id de variable y valor*/
		//actualiza($1, $3);
	}else{
		yyerror("variable desconocida: %s", (yyvsp[(1) - (3)].c));
		abort();
	}
;}
    break;

  case 37:
#line 226 "jaguarSyntaxis.y"
    {
			(yyval.c) = (yyvsp[(1) - (1)].c);
		;}
    break;

  case 38:
#line 229 "jaguarSyntaxis.y"
    {
			(yyval.c) = (yyvsp[(1) - (1)].c);
		;}
    break;

  case 39:
#line 232 "jaguarSyntaxis.y"
    {
			(yyval.c) = (yyvsp[(2) - (3)].c);
		;}
    break;

  case 40:
#line 237 "jaguarSyntaxis.y"
    {
				//char buff[300];
				//sprintf(buff,"(%s)",$3);

				struct  simbolo *tmp = search((yyvsp[(1) - (4)].c), scope);
				if(tmp)
				{
					(yyval.c) = tmp->type;
				}

				// if(search($1,scope)){ //existe la id de funcion
				// 	struct simbolo *st = search($1,scope);
				// 	//if(strcmp(st->type, buff)){ //
				// 	if(!strcmp(st->type, "")){ 
				// 		$$ = st->type;
				// 	}
				else{
					yyerror("funcion desconocida: ");
					abort();
				}
			;}
    break;

  case 43:
#line 264 "jaguarSyntaxis.y"
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

  case 44:
#line 273 "jaguarSyntaxis.y"
    {(yyval.c) = "";;}
    break;

  case 45:
#line 276 "jaguarSyntaxis.y"
    {(yyval.c)="";;}
    break;

  case 46:
#line 277 "jaguarSyntaxis.y"
    {(yyval.c)="";;}
    break;

  case 47:
#line 280 "jaguarSyntaxis.y"
    {
						(yyval.c) = resultOperations((yyvsp[(1) - (3)].c),(yyvsp[(3) - (3)].c),"+");
					;}
    break;

  case 48:
#line 283 "jaguarSyntaxis.y"
    {
						(yyval.c) = resultOperations((yyvsp[(1) - (3)].c),(yyvsp[(3) - (3)].c),"-");
					;}
    break;

  case 49:
#line 286 "jaguarSyntaxis.y"
    {
						(yyval.c) = resultOperations((yyvsp[(1) - (3)].c),(yyvsp[(3) - (3)].c),"*");
					;}
    break;

  case 50:
#line 289 "jaguarSyntaxis.y"
    {
						(yyval.c) = resultOperations((yyvsp[(1) - (3)].c),(yyvsp[(3) - (3)].c),"/");
					;}
    break;

  case 51:
#line 292 "jaguarSyntaxis.y"
    {
						(yyval.c) = (yyvsp[(1) - (1)].c);
					;}
    break;

  case 52:
#line 295 "jaguarSyntaxis.y"
    {
						struct simbolo *st;
						st = search((yyvsp[(1) - (1)].c),scope);
						(yyval.c) = st->type;
					;}
    break;

  case 53:
#line 302 "jaguarSyntaxis.y"
    {(yyval.c)="int";;}
    break;

  case 54:
#line 303 "jaguarSyntaxis.y"
    {(yyval.c)="float";;}
    break;

  case 55:
#line 304 "jaguarSyntaxis.y"
    {(yyval.c)="string";;}
    break;

  case 56:
#line 305 "jaguarSyntaxis.y"
    {(yyval.c)="bool";;}
    break;

  case 57:
#line 306 "jaguarSyntaxis.y"
    {(yyval.c)=(yyvsp[(1) - (1)].c);;}
    break;

  case 58:
#line 309 "jaguarSyntaxis.y"
    {
			(yyval.c) = "";

;}
    break;

  case 59:
#line 313 "jaguarSyntaxis.y"
    {
			(yyval.c) = "";
;}
    break;

  case 60:
#line 318 "jaguarSyntaxis.y"
    {
		(yyval.c) = "";
;}
    break;

  case 61:
#line 323 "jaguarSyntaxis.y"
    {(yyval.c) = "";;}
    break;

  case 62:
#line 324 "jaguarSyntaxis.y"
    {(yyval.c) = "";;}
    break;

  case 63:
#line 326 "jaguarSyntaxis.y"
    {

	;}
    break;


/* Line 1267 of yacc.c.  */
#line 1900 "jaguarSyntaxis.tab.c"
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


#line 337 "jaguarSyntaxis.y"
 
