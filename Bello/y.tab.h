/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    NULL_STRING = 258,             /* NULL_STRING  */
    LF = 259,                      /* LF  */
    END_FILE = 260,                /* END_FILE  */
    NOP = 261,                     /* NOP  */
    CLASS = 262,                   /* CLASS  */
    SHARED = 263,                  /* SHARED  */
    THIS = 264,                    /* THIS  */
    INDENT = 265,                  /* INDENT  */
    INT_VALUE = 266,               /* INT_VALUE  */
    BOOLEAN_VALUE = 267,           /* BOOLEAN_VALUE  */
    FLOAT_VALUE = 268,             /* FLOAT_VALUE  */
    STRING_VALUE = 269,            /* STRING_VALUE  */
    NULL_VALUE = 270,              /* NULL_VALUE  */
    ARRAY_VALUE = 271,             /* ARRAY_VALUE  */
    IDENTIFER = 272,               /* IDENTIFER  */
    ASSIGN = 273,                  /* ASSIGN  */
    VAR = 274,                     /* VAR  */
    GLOBAL = 275,                  /* GLOBAL  */
    ADD_ASSIGN = 276,              /* ADD_ASSIGN  */
    SUB_ASSIGN = 277,              /* SUB_ASSIGN  */
    MUL_ASSIGN = 278,              /* MUL_ASSIGN  */
    DIV_ASSIGN = 279,              /* DIV_ASSIGN  */
    MOD_ASSIGN = 280,              /* MOD_ASSIGN  */
    PRINT = 281,                   /* PRINT  */
    PRINTLN = 282,                 /* PRINTLN  */
    LEFT_PAREN = 283,              /* LEFT_PAREN  */
    RIGHT_PAREN = 284,             /* RIGHT_PAREN  */
    LEFT_QUAD = 285,               /* LEFT_QUAD  */
    RIGHT_QUAD = 286,              /* RIGHT_QUAD  */
    LEFT_BRACE = 287,              /* LEFT_BRACE  */
    RIGHT_BRACE = 288,             /* RIGHT_BRACE  */
    SEMICOLON_OPTIONAL = 289,      /* SEMICOLON_OPTIONAL  */
    SEMICOLON = 290,               /* SEMICOLON  */
    COMMA = 291,                   /* COMMA  */
    COLON = 292,                   /* COLON  */
    ADD = 293,                     /* ADD  */
    SUB = 294,                     /* SUB  */
    MUL = 295,                     /* MUL  */
    DIV = 296,                     /* DIV  */
    MOD = 297,                     /* MOD  */
    EQ = 298,                      /* EQ  */
    NE = 299,                      /* NE  */
    GT = 300,                      /* GT  */
    GE = 301,                      /* GE  */
    LT = 302,                      /* LT  */
    LE = 303,                      /* LE  */
    AND = 304,                     /* AND  */
    OR = 305,                      /* OR  */
    NOT = 306,                     /* NOT  */
    BIT_AND = 307,                 /* BIT_AND  */
    BIT_OR = 308,                  /* BIT_OR  */
    BIT_XOR = 309,                 /* BIT_XOR  */
    BIT_NOT = 310,                 /* BIT_NOT  */
    INCREMENT = 311,               /* INCREMENT  */
    DECREMENT = 312,               /* DECREMENT  */
    IF = 313,                      /* IF  */
    ELSE = 314,                    /* ELSE  */
    FOR = 315,                     /* FOR  */
    WHILE = 316,                   /* WHILE  */
    DO = 317,                      /* DO  */
    CONTINUE = 318,                /* CONTINUE  */
    BREAK = 319,                   /* BREAK  */
    FUNC = 320,                    /* FUNC  */
    RETURN = 321,                  /* RETURN  */
    NEW_ARRAY = 322,               /* NEW_ARRAY  */
    MINUS_SIGN = 323,              /* MINUS_SIGN  */
    PLUS_SIGN = 324,               /* PLUS_SIGN  */
    READ_INT = 325,                /* READ_INT  */
    READ_FLOAT = 326,              /* READ_FLOAT  */
    READ = 327,                    /* READ  */
    READ_BOOL = 328,               /* READ_BOOL  */
    READ_LINE = 329                /* READ_LINE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define NULL_STRING 258
#define LF 259
#define END_FILE 260
#define NOP 261
#define CLASS 262
#define SHARED 263
#define THIS 264
#define INDENT 265
#define INT_VALUE 266
#define BOOLEAN_VALUE 267
#define FLOAT_VALUE 268
#define STRING_VALUE 269
#define NULL_VALUE 270
#define ARRAY_VALUE 271
#define IDENTIFER 272
#define ASSIGN 273
#define VAR 274
#define GLOBAL 275
#define ADD_ASSIGN 276
#define SUB_ASSIGN 277
#define MUL_ASSIGN 278
#define DIV_ASSIGN 279
#define MOD_ASSIGN 280
#define PRINT 281
#define PRINTLN 282
#define LEFT_PAREN 283
#define RIGHT_PAREN 284
#define LEFT_QUAD 285
#define RIGHT_QUAD 286
#define LEFT_BRACE 287
#define RIGHT_BRACE 288
#define SEMICOLON_OPTIONAL 289
#define SEMICOLON 290
#define COMMA 291
#define COLON 292
#define ADD 293
#define SUB 294
#define MUL 295
#define DIV 296
#define MOD 297
#define EQ 298
#define NE 299
#define GT 300
#define GE 301
#define LT 302
#define LE 303
#define AND 304
#define OR 305
#define NOT 306
#define BIT_AND 307
#define BIT_OR 308
#define BIT_XOR 309
#define BIT_NOT 310
#define INCREMENT 311
#define DECREMENT 312
#define IF 313
#define ELSE 314
#define FOR 315
#define WHILE 316
#define DO 317
#define CONTINUE 318
#define BREAK 319
#define FUNC 320
#define RETURN 321
#define NEW_ARRAY 322
#define MINUS_SIGN 323
#define PLUS_SIGN 324
#define READ_INT 325
#define READ_FLOAT 326
#define READ 327
#define READ_BOOL 328
#define READ_LINE 329

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 64 "bello.y"

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
    struct AcsLstStrc *evlLst;

    char *idtf;
    //string idtf;

#line 237 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
