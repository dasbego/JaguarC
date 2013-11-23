/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

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




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 13 "jaguarSyntaxis.y"
{
	int i;
	float f;
	char *c;
	char car;
	int b;
	struct simbolo *sim;
}
/* Line 1529 of yacc.c.  */
#line 102 "jaguarSyntaxis.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

