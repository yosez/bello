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
     AT = 268,
     INDENT = 269,
     INT_LTR = 270,
     BLN_LTR = 271,
     FLT_LTR = 272,
     STR_LTR = 273,
     OBJECT_VALUE = 274,
     NLL_LTR = 275,
     ARRAY_VALUE = 276,
     SHORTCUT_PRINTLN = 277,
     IDENTIFER = 278,
     ASSIGN = 279,
     VAR = 280,
     GLOBAL = 281,
     ADD_ASSIGN = 282,
     SUB_ASSIGN = 283,
     MUL_ASSIGN = 284,
     DIV_ASSIGN = 285,
     MOD_ASSIGN = 286,
     PRINT = 287,
     PRINTLN = 288,
     LEFT_PAREN = 289,
     RIGHT_PAREN = 290,
     LEFT_QUAD = 291,
     RIGHT_QUAD = 292,
     LEFT_BRACE = 293,
     RIGHT_BRACE = 294,
     SEMICOLON_OPTIONAL = 295,
     SEMICOLON = 296,
     COMMA = 297,
     COLON = 298,
     ADD = 299,
     SUB = 300,
     MUL = 301,
     DIV = 302,
     MOD = 303,
     EQ = 304,
     NE = 305,
     GT = 306,
     GE = 307,
     LT = 308,
     LE = 309,
     AND = 310,
     OR = 311,
     NOT = 312,
     XOR = 313,
     BIT_AND = 314,
     BIT_OR = 315,
     BIT_XOR = 316,
     BIT_NOT = 317,
     INCREMENT = 318,
     DECREMENT = 319,
     IF = 320,
     ELSEIF = 321,
     ELSE = 322,
     FOR = 323,
     WHILE = 324,
     DO = 325,
     CONTINUE = 326,
     BREAK = 327,
     FUNC = 328,
     RETURN = 329,
     NEW_ARRAY = 330,
     SPACE = 331,
     PACKAGE = 332,
     PLUS_SIGN = 333,
     MINUS_SIGN = 334,
     QM = 335
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
#define AT 268
#define INDENT 269
#define INT_LTR 270
#define BLN_LTR 271
#define FLT_LTR 272
#define STR_LTR 273
#define OBJECT_VALUE 274
#define NLL_LTR 275
#define ARRAY_VALUE 276
#define SHORTCUT_PRINTLN 277
#define IDENTIFER 278
#define ASSIGN 279
#define VAR 280
#define GLOBAL 281
#define ADD_ASSIGN 282
#define SUB_ASSIGN 283
#define MUL_ASSIGN 284
#define DIV_ASSIGN 285
#define MOD_ASSIGN 286
#define PRINT 287
#define PRINTLN 288
#define LEFT_PAREN 289
#define RIGHT_PAREN 290
#define LEFT_QUAD 291
#define RIGHT_QUAD 292
#define LEFT_BRACE 293
#define RIGHT_BRACE 294
#define SEMICOLON_OPTIONAL 295
#define SEMICOLON 296
#define COMMA 297
#define COLON 298
#define ADD 299
#define SUB 300
#define MUL 301
#define DIV 302
#define MOD 303
#define EQ 304
#define NE 305
#define GT 306
#define GE 307
#define LT 308
#define LE 309
#define AND 310
#define OR 311
#define NOT 312
#define XOR 313
#define BIT_AND 314
#define BIT_OR 315
#define BIT_XOR 316
#define BIT_NOT 317
#define INCREMENT 318
#define DECREMENT 319
#define IF 320
#define ELSEIF 321
#define ELSE 322
#define FOR 323
#define WHILE 324
#define DO 325
#define CONTINUE 326
#define BREAK 327
#define FUNC 328
#define RETURN 329
#define NEW_ARRAY 330
#define SPACE 331
#define PACKAGE 332
#define PLUS_SIGN 333
#define MINUS_SIGN 334
#define QM 335




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 65 "./bello.y"
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
    struct AsnLstStrc *asnLst;
    struct ElmtLstStrc *elmtLst;
    struct PstnLstStrc *pstnLst;
    struct AcsLstStrc *evlLst;
    
    char *idtf;
    //string idtf;
}
/* Line 1529 of yacc.c.  */
#line 232 "y.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

