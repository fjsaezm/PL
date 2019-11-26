/* A Bison parser, made by GNU Bison 3.4.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2019 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    PRINCIPAL = 258,
    INI_BLOQUE = 259,
    FIN_BLOQUE = 260,
    INI_VAR = 261,
    FIN_VAR = 262,
    INI_EXPR = 263,
    FIN_EXPR = 264,
    INI_TAM = 265,
    FIN_TAM = 266,
    PTCOMA = 267,
    COMA = 268,
    TIPO_BASICO = 269,
    CADENA = 270,
    CONSTANTE = 271,
    CTE_ENTERA = 272,
    SI = 273,
    SI_NO = 274,
    RETORNO = 275,
    ENTRADA = 276,
    SALIDA = 277,
    HACER = 278,
    HASTA = 279,
    PUNTO = 280,
    OR = 281,
    AND = 282,
    XOR = 283,
    IGUAL = 284,
    OPREL = 285,
    SUMARESTA = 286,
    OPMUL = 287,
    NOT = 288
  };
#endif
/* Tokens.  */
#define PRINCIPAL 258
#define INI_BLOQUE 259
#define FIN_BLOQUE 260
#define INI_VAR 261
#define FIN_VAR 262
#define INI_EXPR 263
#define FIN_EXPR 264
#define INI_TAM 265
#define FIN_TAM 266
#define PTCOMA 267
#define COMA 268
#define TIPO_BASICO 269
#define CADENA 270
#define CONSTANTE 271
#define CTE_ENTERA 272
#define SI 273
#define SI_NO 274
#define RETORNO 275
#define ENTRADA 276
#define SALIDA 277
#define HACER 278
#define HASTA 279
#define PUNTO 280
#define OR 281
#define AND 282
#define XOR 283
#define IGUAL 284
#define OPREL 285
#define SUMARESTA 286
#define OPMUL 287
#define NOT 288

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
