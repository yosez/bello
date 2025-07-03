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
     NULL_STRING = 258,
     LF = 259,
     END_FILE = 260,
     NEW = 261,
     NOP = 262,
     DOT = 263,
     CLASS = 264,
     SHARED = 265,
     THIS = 266,
     INDENT = 267,
     INT_VALUE = 268,
     BOOLEAN_VALUE = 269,
     FLOAT_VALUE = 270,
     STRING_VALUE = 271,
     OBJECT_VALUE = 272,
     NULL_VALUE = 273,
     ARRAY_VALUE = 274,
     SHORTCUT_PRINTLN = 275,
     IDENTIFER = 276,
     ASSIGN = 277,
     VAR = 278,
     GLOBAL = 279,
     ADD_ASSIGN = 280,
     SUB_ASSIGN = 281,
     MUL_ASSIGN = 282,
     DIV_ASSIGN = 283,
     MOD_ASSIGN = 284,
     PRINT = 285,
     PRINTLN = 286,
     LEFT_PAREN = 287,
     RIGHT_PAREN = 288,
     LEFT_QUAD = 289,
     RIGHT_QUAD = 290,
     LEFT_BRACE = 291,
     RIGHT_BRACE = 292,
     SEMICOLON_OPTIONAL = 293,
     SEMICOLON = 294,
     COMMA = 295,
     COLON = 296,
     ADD = 297,
     SUB = 298,
     MUL = 299,
     DIV = 300,
     MOD = 301,
     EQ = 302,
     NE = 303,
     GT = 304,
     GE = 305,
     LT = 306,
     LE = 307,
     AND = 308,
     OR = 309,
     NOT = 310,
     BIT_AND = 311,
     BIT_OR = 312,
     BIT_XOR = 313,
     BIT_NOT = 314,
     INCREMENT = 315,
     DECREMENT = 316,
     IF = 317,
     ELSEIF = 318,
     ELSE = 319,
     FOR = 320,
     WHILE = 321,
     DO = 322,
     CONTINUE = 323,
     BREAK = 324,
     FUNC = 325,
     RETURN = 326,
     NEW_ARRAY = 327,
     PLUS_SIGN = 328,
     MINUS_SIGN = 329,
     QM = 330
   };
#endif
/* Tokens.  */
#define NULL_STRING 258
#define LF 259
#define END_FILE 260
#define NEW 261
#define NOP 262
#define DOT 263
#define CLASS 264
#define SHARED 265
#define THIS 266
#define INDENT 267
#define INT_VALUE 268
#define BOOLEAN_VALUE 269
#define FLOAT_VALUE 270
#define STRING_VALUE 271
#define OBJECT_VALUE 272
#define NULL_VALUE 273
#define ARRAY_VALUE 274
#define SHORTCUT_PRINTLN 275
#define IDENTIFER 276
#define ASSIGN 277
#define VAR 278
#define GLOBAL 279
#define ADD_ASSIGN 280
#define SUB_ASSIGN 281
#define MUL_ASSIGN 282
#define DIV_ASSIGN 283
#define MOD_ASSIGN 284
#define PRINT 285
#define PRINTLN 286
#define LEFT_PAREN 287
#define RIGHT_PAREN 288
#define LEFT_QUAD 289
#define RIGHT_QUAD 290
#define LEFT_BRACE 291
#define RIGHT_BRACE 292
#define SEMICOLON_OPTIONAL 293
#define SEMICOLON 294
#define COMMA 295
#define COLON 296
#define ADD 297
#define SUB 298
#define MUL 299
#define DIV 300
#define MOD 301
#define EQ 302
#define NE 303
#define GT 304
#define GE 305
#define LT 306
#define LE 307
#define AND 308
#define OR 309
#define NOT 310
#define BIT_AND 311
#define BIT_OR 312
#define BIT_XOR 313
#define BIT_NOT 314
#define INCREMENT 315
#define DECREMENT 316
#define IF 317
#define ELSEIF 318
#define ELSE 319
#define FOR 320
#define WHILE 321
#define DO 322
#define CONTINUE 323
#define BREAK 324
#define FUNC 325
#define RETURN 326
#define NEW_ARRAY 327
#define PLUS_SIGN 328
#define MINUS_SIGN 329
#define QM 330




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 69 "bello.y"
{
    int blnVl;
    int intVl;
    float fltVl;
    char *strVl;
    struct ObjStrc* objVl;

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
    struct AcsLstStrc *evlLst;
    
    char *idtf;
    //string idtf;
}
/* Line 1529 of yacc.c.  */
#line 222 "y.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

