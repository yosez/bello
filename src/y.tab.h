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
     NOINDENT = 259,
     LF = 260,
     END_FILE = 261,
     NEW = 262,
     IMPORT = 263,
     NOP = 264,
     DOT = 265,
     CLASS = 266,
     SHARED = 267,
     THIS = 268,
     AT = 269,
     INDENT = 270,
     INT_LTR = 271,
     BLN_LTR = 272,
     FLT_LTR = 273,
     STR_LTR = 274,
     OBJECT_VALUE = 275,
     NLL_LTR = 276,
     ARRAY_VALUE = 277,
     SHORTCUT_PRINTLN = 278,
     IDENTIFER = 279,
     ASSIGN = 280,
     VAR = 281,
     GLOBAL = 282,
     ADD_ASSIGN = 283,
     SUB_ASSIGN = 284,
     MUL_ASSIGN = 285,
     DIV_ASSIGN = 286,
     MOD_ASSIGN = 287,
     PRINT = 288,
     PRINTLN = 289,
     LEFT_PAREN = 290,
     RIGHT_PAREN = 291,
     LEFT_QUAD = 292,
     RIGHT_QUAD = 293,
     LEFT_BRACE = 294,
     RIGHT_BRACE = 295,
     SEMICOLON_OPTIONAL = 296,
     SEMICOLON = 297,
     COMMA = 298,
     COLON = 299,
     ADD = 300,
     SUB = 301,
     MUL = 302,
     DIV = 303,
     MOD = 304,
     EQ = 305,
     NE = 306,
     GT = 307,
     GE = 308,
     LT = 309,
     LE = 310,
     AND = 311,
     OR = 312,
     NOT = 313,
     XOR = 314,
     BIT_AND = 315,
     BIT_OR = 316,
     BIT_XOR = 317,
     BIT_NOT = 318,
     INCREMENT = 319,
     DECREMENT = 320,
     IF = 321,
     ELIF = 322,
     ELSE = 323,
     FOR = 324,
     WHILE = 325,
     DO = 326,
     CONTINUE = 327,
     BREAK = 328,
     FUNC = 329,
     RETURN = 330,
     NEW_ARRAY = 331,
     SPACE = 332,
     PACKAGE = 333,
     PLUS_SIGN = 334,
     MINUS_SIGN = 335,
     QM = 336
   };
#endif
/* Tokens.  */
#define NULL_STRING 258
#define NOINDENT 259
#define LF 260
#define END_FILE 261
#define NEW 262
#define IMPORT 263
#define NOP 264
#define DOT 265
#define CLASS 266
#define SHARED 267
#define THIS 268
#define AT 269
#define INDENT 270
#define INT_LTR 271
#define BLN_LTR 272
#define FLT_LTR 273
#define STR_LTR 274
#define OBJECT_VALUE 275
#define NLL_LTR 276
#define ARRAY_VALUE 277
#define SHORTCUT_PRINTLN 278
#define IDENTIFER 279
#define ASSIGN 280
#define VAR 281
#define GLOBAL 282
#define ADD_ASSIGN 283
#define SUB_ASSIGN 284
#define MUL_ASSIGN 285
#define DIV_ASSIGN 286
#define MOD_ASSIGN 287
#define PRINT 288
#define PRINTLN 289
#define LEFT_PAREN 290
#define RIGHT_PAREN 291
#define LEFT_QUAD 292
#define RIGHT_QUAD 293
#define LEFT_BRACE 294
#define RIGHT_BRACE 295
#define SEMICOLON_OPTIONAL 296
#define SEMICOLON 297
#define COMMA 298
#define COLON 299
#define ADD 300
#define SUB 301
#define MUL 302
#define DIV 303
#define MOD 304
#define EQ 305
#define NE 306
#define GT 307
#define GE 308
#define LT 309
#define LE 310
#define AND 311
#define OR 312
#define NOT 313
#define XOR 314
#define BIT_AND 315
#define BIT_OR 316
#define BIT_XOR 317
#define BIT_NOT 318
#define INCREMENT 319
#define DECREMENT 320
#define IF 321
#define ELIF 322
#define ELSE 323
#define FOR 324
#define WHILE 325
#define DO 326
#define CONTINUE 327
#define BREAK 328
#define FUNC 329
#define RETURN 330
#define NEW_ARRAY 331
#define SPACE 332
#define PACKAGE 333
#define PLUS_SIGN 334
#define MINUS_SIGN 335
#define QM 336




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 69 "./bello.y"
{
    int blnVl;
    int intVl;
    float fltVl;
    string *strVl;
    struct ObjStrc* objVl;

    struct VrbStrc *vrb;
    struct Exp *exp;
    struct Stmt *stmt;
    struct Fcn *fcn;
    struct PrmLstStrc *prmLst;
    struct ArgLstStrc *argLst;
    struct VrbLstStrc *vrbLst;
    struct AsnLstStrc *asnLst;
    struct ElmtLstStrc *elmtLst;
    struct PstnLstStrc *pstnLst;
    struct AcsLstStrc *evlLst;
    
    char *idtf;
    //string idtf;
}
/* Line 1529 of yacc.c.  */
#line 234 "y.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

