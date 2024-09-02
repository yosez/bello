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
    LF = 258,                      /* LF  */
    NOP = 259,                     /* NOP  */
    INDENT = 260,                  /* INDENT  */
    INT_VALUE = 261,               /* INT_VALUE  */
    BOOLEAN_VALUE = 262,           /* BOOLEAN_VALUE  */
    FLOAT_VALUE = 263,             /* FLOAT_VALUE  */
    STRING_VALUE = 264,            /* STRING_VALUE  */
    NULL_VALUE = 265,              /* NULL_VALUE  */
    ARRAY_VALUE = 266,             /* ARRAY_VALUE  */
    IDENTIFER = 267,               /* IDENTIFER  */
    ASSIGN = 268,                  /* ASSIGN  */
    VAR = 269,                     /* VAR  */
    GLOBAL = 270,                  /* GLOBAL  */
    ADD_ASSIGN = 271,              /* ADD_ASSIGN  */
    SUB_ASSIGN = 272,              /* SUB_ASSIGN  */
    MUL_ASSIGN = 273,              /* MUL_ASSIGN  */
    DIV_ASSIGN = 274,              /* DIV_ASSIGN  */
    MOD_ASSIGN = 275,              /* MOD_ASSIGN  */
    PRINT = 276,                   /* PRINT  */
    PRINTLN = 277,                 /* PRINTLN  */
    LEFT_PAREN = 278,              /* LEFT_PAREN  */
    RIGHT_PAREN = 279,             /* RIGHT_PAREN  */
    LEFT_QUAD = 280,               /* LEFT_QUAD  */
    RIGHT_QUAD = 281,              /* RIGHT_QUAD  */
    LEFT_BRACE = 282,              /* LEFT_BRACE  */
    RIGHT_BRACE = 283,             /* RIGHT_BRACE  */
    SEMICOLON_OPTIONAL = 284,      /* SEMICOLON_OPTIONAL  */
    SEMICOLON = 285,               /* SEMICOLON  */
    COMMA = 286,                   /* COMMA  */
    COLON = 287,                   /* COLON  */
    ADD = 288,                     /* ADD  */
    SUB = 289,                     /* SUB  */
    MUL = 290,                     /* MUL  */
    DIV = 291,                     /* DIV  */
    MOD = 292,                     /* MOD  */
    EQ = 293,                      /* EQ  */
    NE = 294,                      /* NE  */
    GT = 295,                      /* GT  */
    GE = 296,                      /* GE  */
    LT = 297,                      /* LT  */
    LE = 298,                      /* LE  */
    AND = 299,                     /* AND  */
    OR = 300,                      /* OR  */
    NOT = 301,                     /* NOT  */
    BIT_AND = 302,                 /* BIT_AND  */
    BIT_OR = 303,                  /* BIT_OR  */
    BIT_XOR = 304,                 /* BIT_XOR  */
    BIT_NOT = 305,                 /* BIT_NOT  */
    INCREMENT = 306,               /* INCREMENT  */
    DECREMENT = 307,               /* DECREMENT  */
    IF = 308,                      /* IF  */
    ELSE = 309,                    /* ELSE  */
    FOR = 310,                     /* FOR  */
    WHILE = 311,                   /* WHILE  */
    DO = 312,                      /* DO  */
    CONTINUE = 313,                /* CONTINUE  */
    BREAK = 314,                   /* BREAK  */
    FUNC = 315,                    /* FUNC  */
    RETURN = 316,                  /* RETURN  */
    READ_INT = 317,                /* READ_INT  */
    READ_FLOAT = 318,              /* READ_FLOAT  */
    READ = 319,                    /* READ  */
    READ_BOOL = 320,               /* READ_BOOL  */
    READ_LINE = 321,               /* READ_LINE  */
    NEW_ARRAY = 322,               /* NEW_ARRAY  */
    MINUS_SIGN = 323,              /* MINUS_SIGN  */
    PLUS_SIGN = 324                /* PLUS_SIGN  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define LF 258
#define NOP 259
#define INDENT 260
#define INT_VALUE 261
#define BOOLEAN_VALUE 262
#define FLOAT_VALUE 263
#define STRING_VALUE 264
#define NULL_VALUE 265
#define ARRAY_VALUE 266
#define IDENTIFER 267
#define ASSIGN 268
#define VAR 269
#define GLOBAL 270
#define ADD_ASSIGN 271
#define SUB_ASSIGN 272
#define MUL_ASSIGN 273
#define DIV_ASSIGN 274
#define MOD_ASSIGN 275
#define PRINT 276
#define PRINTLN 277
#define LEFT_PAREN 278
#define RIGHT_PAREN 279
#define LEFT_QUAD 280
#define RIGHT_QUAD 281
#define LEFT_BRACE 282
#define RIGHT_BRACE 283
#define SEMICOLON_OPTIONAL 284
#define SEMICOLON 285
#define COMMA 286
#define COLON 287
#define ADD 288
#define SUB 289
#define MUL 290
#define DIV 291
#define MOD 292
#define EQ 293
#define NE 294
#define GT 295
#define GE 296
#define LT 297
#define LE 298
#define AND 299
#define OR 300
#define NOT 301
#define BIT_AND 302
#define BIT_OR 303
#define BIT_XOR 304
#define BIT_NOT 305
#define INCREMENT 306
#define DECREMENT 307
#define IF 308
#define ELSE 309
#define FOR 310
#define WHILE 311
#define DO 312
#define CONTINUE 313
#define BREAK 314
#define FUNC 315
#define RETURN 316
#define READ_INT 317
#define READ_FLOAT 318
#define READ 319
#define READ_BOOL 320
#define READ_LINE 321
#define NEW_ARRAY 322
#define MINUS_SIGN 323
#define PLUS_SIGN 324

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 55 "bello.y"

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

#line 227 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
