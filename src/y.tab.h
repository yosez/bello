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
     IMPORT = 262,
     NOP = 263,
     DOT = 264,
     CLASS = 265,
     SHARED = 266,
     THIS = 267,
     INDENT = 268,
     INT_LTR = 269,
     BLN_LTR = 270,
     FLT_LTR = 271,
     STR_LTR = 272,
     OBJECT_VALUE = 273,
     NLL_LTR = 274,
     ARRAY_VALUE = 275,
     SHORTCUT_PRINTLN = 276,
     IDENTIFER = 277,
     ASSIGN = 278,
     VAR = 279,
     GLOBAL = 280,
     ADD_ASSIGN = 281,
     SUB_ASSIGN = 282,
     MUL_ASSIGN = 283,
     DIV_ASSIGN = 284,
     MOD_ASSIGN = 285,
     PRINT = 286,
     PRINTLN = 287,
     LEFT_PAREN = 288,
     RIGHT_PAREN = 289,
     LEFT_QUAD = 290,
     RIGHT_QUAD = 291,
     LEFT_BRACE = 292,
     RIGHT_BRACE = 293,
     SEMICOLON_OPTIONAL = 294,
     SEMICOLON = 295,
     COMMA = 296,
     COLON = 297,
     ADD = 298,
     SUB = 299,
     MUL = 300,
     DIV = 301,
     MOD = 302,
     EQ = 303,
     NE = 304,
     GT = 305,
     GE = 306,
     LT = 307,
     LE = 308,
     AND = 309,
     OR = 310,
     NOT = 311,
     XOR = 312,
     BIT_AND = 313,
     BIT_OR = 314,
     BIT_XOR = 315,
     BIT_NOT = 316,
     INCREMENT = 317,
     DECREMENT = 318,
     IF = 319,
     ELSEIF = 320,
     ELSE = 321,
     FOR = 322,
     WHILE = 323,
     DO = 324,
     CONTINUE = 325,
     BREAK = 326,
     FUNC = 327,
     RETURN = 328,
     NEW_ARRAY = 329,
     SPACE = 330,
     PACKAGE = 331,
     PLUS_SIGN = 332,
     MINUS_SIGN = 333,
     QM = 334
   };
#endif
/* Tokens.  */
#define NULL_STRING 258
#define LF 259
#define END_FILE 260
#define NEW 261
#define IMPORT 262
#define NOP 263
#define DOT 264
#define CLASS 265
#define SHARED 266
#define THIS 267
#define INDENT 268
#define INT_LTR 269
#define BLN_LTR 270
#define FLT_LTR 271
#define STR_LTR 272
#define OBJECT_VALUE 273
#define NLL_LTR 274
#define ARRAY_VALUE 275
#define SHORTCUT_PRINTLN 276
#define IDENTIFER 277
#define ASSIGN 278
#define VAR 279
#define GLOBAL 280
#define ADD_ASSIGN 281
#define SUB_ASSIGN 282
#define MUL_ASSIGN 283
#define DIV_ASSIGN 284
#define MOD_ASSIGN 285
#define PRINT 286
#define PRINTLN 287
#define LEFT_PAREN 288
#define RIGHT_PAREN 289
#define LEFT_QUAD 290
#define RIGHT_QUAD 291
#define LEFT_BRACE 292
#define RIGHT_BRACE 293
#define SEMICOLON_OPTIONAL 294
#define SEMICOLON 295
#define COMMA 296
#define COLON 297
#define ADD 298
#define SUB 299
#define MUL 300
#define DIV 301
#define MOD 302
#define EQ 303
#define NE 304
#define GT 305
#define GE 306
#define LT 307
#define LE 308
#define AND 309
#define OR 310
#define NOT 311
#define XOR 312
#define BIT_AND 313
#define BIT_OR 314
#define BIT_XOR 315
#define BIT_NOT 316
#define INCREMENT 317
#define DECREMENT 318
#define IF 319
#define ELSEIF 320
#define ELSE 321
#define FOR 322
#define WHILE 323
#define DO 324
#define CONTINUE 325
#define BREAK 326
#define FUNC 327
#define RETURN 328
#define NEW_ARRAY 329
#define SPACE 330
#define PACKAGE 331
#define PLUS_SIGN 332
#define MINUS_SIGN 333
#define QM 334




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 65 "bello.y"
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
#line 230 "y.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

