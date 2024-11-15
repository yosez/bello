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
    INDENT = 263,                  /* INDENT  */
    INT_VALUE = 264,               /* INT_VALUE  */
    BOOLEAN_VALUE = 265,           /* BOOLEAN_VALUE  */
    FLOAT_VALUE = 266,             /* FLOAT_VALUE  */
    STRING_VALUE = 267,            /* STRING_VALUE  */
    NULL_VALUE = 268,              /* NULL_VALUE  */
    ARRAY_VALUE = 269,             /* ARRAY_VALUE  */
    IDENTIFER = 270,               /* IDENTIFER  */
    ASSIGN = 271,                  /* ASSIGN  */
    VAR = 272,                     /* VAR  */
    GLOBAL = 273,                  /* GLOBAL  */
    ADD_ASSIGN = 274,              /* ADD_ASSIGN  */
    SUB_ASSIGN = 275,              /* SUB_ASSIGN  */
    MUL_ASSIGN = 276,              /* MUL_ASSIGN  */
    DIV_ASSIGN = 277,              /* DIV_ASSIGN  */
    MOD_ASSIGN = 278,              /* MOD_ASSIGN  */
    PRINT = 279,                   /* PRINT  */
    PRINTLN = 280,                 /* PRINTLN  */
    LEFT_PAREN = 281,              /* LEFT_PAREN  */
    RIGHT_PAREN = 282,             /* RIGHT_PAREN  */
    LEFT_QUAD = 283,               /* LEFT_QUAD  */
    RIGHT_QUAD = 284,              /* RIGHT_QUAD  */
    LEFT_BRACE = 285,              /* LEFT_BRACE  */
    RIGHT_BRACE = 286,             /* RIGHT_BRACE  */
    SEMICOLON_OPTIONAL = 287,      /* SEMICOLON_OPTIONAL  */
    SEMICOLON = 288,               /* SEMICOLON  */
    COMMA = 289,                   /* COMMA  */
    COLON = 290,                   /* COLON  */
    ADD = 291,                     /* ADD  */
    SUB = 292,                     /* SUB  */
    MUL = 293,                     /* MUL  */
    DIV = 294,                     /* DIV  */
    MOD = 295,                     /* MOD  */
    EQ = 296,                      /* EQ  */
    NE = 297,                      /* NE  */
    GT = 298,                      /* GT  */
    GE = 299,                      /* GE  */
    LT = 300,                      /* LT  */
    LE = 301,                      /* LE  */
    AND = 302,                     /* AND  */
    OR = 303,                      /* OR  */
    NOT = 304,                     /* NOT  */
    BIT_AND = 305,                 /* BIT_AND  */
    BIT_OR = 306,                  /* BIT_OR  */
    BIT_XOR = 307,                 /* BIT_XOR  */
    BIT_NOT = 308,                 /* BIT_NOT  */
    INCREMENT = 309,               /* INCREMENT  */
    DECREMENT = 310,               /* DECREMENT  */
    IF = 311,                      /* IF  */
    ELSE = 312,                    /* ELSE  */
    FOR = 313,                     /* FOR  */
    WHILE = 314,                   /* WHILE  */
    DO = 315,                      /* DO  */
    CONTINUE = 316,                /* CONTINUE  */
    BREAK = 317,                   /* BREAK  */
    FUNC = 318,                    /* FUNC  */
    RETURN = 319,                  /* RETURN  */
    NEW_ARRAY = 320,               /* NEW_ARRAY  */
    MINUS_SIGN = 321,              /* MINUS_SIGN  */
    PLUS_SIGN = 322,               /* PLUS_SIGN  */
    READ_INT = 323,                /* READ_INT  */
    READ_FLOAT = 324,              /* READ_FLOAT  */
    READ = 325,                    /* READ  */
    READ_BOOL = 326,               /* READ_BOOL  */
    READ_LINE = 327                /* READ_LINE  */
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
#define INDENT 263
#define INT_VALUE 264
#define BOOLEAN_VALUE 265
#define FLOAT_VALUE 266
#define STRING_VALUE 267
#define NULL_VALUE 268
#define ARRAY_VALUE 269
#define IDENTIFER 270
#define ASSIGN 271
#define VAR 272
#define GLOBAL 273
#define ADD_ASSIGN 274
#define SUB_ASSIGN 275
#define MUL_ASSIGN 276
#define DIV_ASSIGN 277
#define MOD_ASSIGN 278
#define PRINT 279
#define PRINTLN 280
#define LEFT_PAREN 281
#define RIGHT_PAREN 282
#define LEFT_QUAD 283
#define RIGHT_QUAD 284
#define LEFT_BRACE 285
#define RIGHT_BRACE 286
#define SEMICOLON_OPTIONAL 287
#define SEMICOLON 288
#define COMMA 289
#define COLON 290
#define ADD 291
#define SUB 292
#define MUL 293
#define DIV 294
#define MOD 295
#define EQ 296
#define NE 297
#define GT 298
#define GE 299
#define LT 300
#define LE 301
#define AND 302
#define OR 303
#define NOT 304
#define BIT_AND 305
#define BIT_OR 306
#define BIT_XOR 307
#define BIT_NOT 308
#define INCREMENT 309
#define DECREMENT 310
#define IF 311
#define ELSE 312
#define FOR 313
#define WHILE 314
#define DO 315
#define CONTINUE 316
#define BREAK 317
#define FUNC 318
#define RETURN 319
#define NEW_ARRAY 320
#define MINUS_SIGN 321
#define PLUS_SIGN 322
#define READ_INT 323
#define READ_FLOAT 324
#define READ 325
#define READ_BOOL 326
#define READ_LINE 327

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 61 "bello.y"

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

#line 233 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
