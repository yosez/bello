/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison interface for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     INT_VALUE = 258,
     BOOLEAN_VALUE = 259,
     FLOAT_VALUE = 260,
     STRING_VALUE = 261,
     NULL_VALUE = 262,
     ARRAY_VALUE = 263,
     IDENTIFER = 264,
     ASSIGN = 265,
     VAR = 266,
     ADD_ASSIGN = 267,
     SUB_ASSIGN = 268,
     MUL_ASSIGN = 269,
     DIV_ASSIGN = 270,
     MOD_ASSIGN = 271,
     PRINT = 272,
     PRINTLN = 273,
     LEFT_PAREN = 274,
     RIGHT_PAREN = 275,
     LEFT_QUAD = 276,
     RIGHT_QUAD = 277,
     LEFT_BRACE = 278,
     RIGHT_BRACE = 279,
     SEMICOLON = 280,
     COMMA = 281,
     COLON = 282,
     ADD = 283,
     SUB = 284,
     MUL = 285,
     DIV = 286,
     MOD = 287,
     EQ = 288,
     NE = 289,
     GT = 290,
     GE = 291,
     LT = 292,
     LE = 293,
     AND = 294,
     OR = 295,
     NOT = 296,
     BIT_AND = 297,
     BIT_OR = 298,
     BIT_XOR = 299,
     BIT_NOT = 300,
     INCREMENT = 301,
     DECREMENT = 302,
     IF = 303,
     ELSE = 304,
     FOR = 305,
     WHILE = 306,
     DO = 307,
     CONTINUE = 308,
     BREAK = 309,
     FUNC = 310,
     RETURN = 311,
     READ_INT = 312,
     READ_FLOAT = 313,
     READ = 314,
     READ_BOOL = 315,
     READ_LINE = 316,
     NEW_ARRAY = 317,
     PLUS_SIGN = 318,
     MINUS_SIGN = 319
   };
#endif
/* Tokens.  */
#define INT_VALUE 258
#define BOOLEAN_VALUE 259
#define FLOAT_VALUE 260
#define STRING_VALUE 261
#define NULL_VALUE 262
#define ARRAY_VALUE 263
#define IDENTIFER 264
#define ASSIGN 265
#define VAR 266
#define ADD_ASSIGN 267
#define SUB_ASSIGN 268
#define MUL_ASSIGN 269
#define DIV_ASSIGN 270
#define MOD_ASSIGN 271
#define PRINT 272
#define PRINTLN 273
#define LEFT_PAREN 274
#define RIGHT_PAREN 275
#define LEFT_QUAD 276
#define RIGHT_QUAD 277
#define LEFT_BRACE 278
#define RIGHT_BRACE 279
#define SEMICOLON 280
#define COMMA 281
#define COLON 282
#define ADD 283
#define SUB 284
#define MUL 285
#define DIV 286
#define MOD 287
#define EQ 288
#define NE 289
#define GT 290
#define GE 291
#define LT 292
#define LE 293
#define AND 294
#define OR 295
#define NOT 296
#define BIT_AND 297
#define BIT_OR 298
#define BIT_XOR 299
#define BIT_NOT 300
#define INCREMENT 301
#define DECREMENT 302
#define IF 303
#define ELSE 304
#define FOR 305
#define WHILE 306
#define DO 307
#define CONTINUE 308
#define BREAK 309
#define FUNC 310
#define RETURN 311
#define READ_INT 312
#define READ_FLOAT 313
#define READ 314
#define READ_BOOL 315
#define READ_LINE 316
#define NEW_ARRAY 317
#define PLUS_SIGN 318
#define MINUS_SIGN 319



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 2058 of yacc.c  */
#line 46 "bello.y"

    int blnVl;
    int intVl;
    float fltVl;
    char *strVl;

    struct VrbStrc *vrb;
    struct ExpStrc *exp;
    struct StmtStrc *stmt;
    struct FcnStrc *fcn;
    struct PrmLstStrc *prmLst;
    struct ArgLstStrc *argLst;
    struct VrbLstStrc *vrbLst;
    struct AsgnLstStrc *asgnLst;
    struct ElmtLstStrc *elmtLst;
    struct PstnLstStrc *pstnLst;
    struct EvlLstStrc *evlLst;

    char *idtf;



/* Line 2058 of yacc.c  */
#line 208 "y.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

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

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
