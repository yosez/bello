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
    INDENT = 262,                  /* INDENT  */
    INT_VALUE = 263,               /* INT_VALUE  */
    BOOLEAN_VALUE = 264,           /* BOOLEAN_VALUE  */
    FLOAT_VALUE = 265,             /* FLOAT_VALUE  */
    STRING_VALUE = 266,            /* STRING_VALUE  */
    NULL_VALUE = 267,              /* NULL_VALUE  */
    ARRAY_VALUE = 268,             /* ARRAY_VALUE  */
    IDENTIFER = 269,               /* IDENTIFER  */
    ASSIGN = 270,                  /* ASSIGN  */
    VAR = 271,                     /* VAR  */
    GLOBAL = 272,                  /* GLOBAL  */
    ADD_ASSIGN = 273,              /* ADD_ASSIGN  */
    SUB_ASSIGN = 274,              /* SUB_ASSIGN  */
    MUL_ASSIGN = 275,              /* MUL_ASSIGN  */
    DIV_ASSIGN = 276,              /* DIV_ASSIGN  */
    MOD_ASSIGN = 277,              /* MOD_ASSIGN  */
    PRINT = 278,                   /* PRINT  */
    PRINTLN = 279,                 /* PRINTLN  */
    LEFT_PAREN = 280,              /* LEFT_PAREN  */
    RIGHT_PAREN = 281,             /* RIGHT_PAREN  */
    LEFT_QUAD = 282,               /* LEFT_QUAD  */
    RIGHT_QUAD = 283,              /* RIGHT_QUAD  */
    LEFT_BRACE = 284,              /* LEFT_BRACE  */
    RIGHT_BRACE = 285,             /* RIGHT_BRACE  */
    SEMICOLON_OPTIONAL = 286,      /* SEMICOLON_OPTIONAL  */
    SEMICOLON = 287,               /* SEMICOLON  */
    COMMA = 288,                   /* COMMA  */
    COLON = 289,                   /* COLON  */
    ADD = 290,                     /* ADD  */
    SUB = 291,                     /* SUB  */
    MUL = 292,                     /* MUL  */
    DIV = 293,                     /* DIV  */
    MOD = 294,                     /* MOD  */
    EQ = 295,                      /* EQ  */
    NE = 296,                      /* NE  */
    GT = 297,                      /* GT  */
    GE = 298,                      /* GE  */
    LT = 299,                      /* LT  */
    LE = 300,                      /* LE  */
    AND = 301,                     /* AND  */
    OR = 302,                      /* OR  */
    NOT = 303,                     /* NOT  */
    BIT_AND = 304,                 /* BIT_AND  */
    BIT_OR = 305,                  /* BIT_OR  */
    BIT_XOR = 306,                 /* BIT_XOR  */
    BIT_NOT = 307,                 /* BIT_NOT  */
    INCREMENT = 308,               /* INCREMENT  */
    DECREMENT = 309,               /* DECREMENT  */
    IF = 310,                      /* IF  */
    ELSE = 311,                    /* ELSE  */
    FOR = 312,                     /* FOR  */
    WHILE = 313,                   /* WHILE  */
    DO = 314,                      /* DO  */
    CONTINUE = 315,                /* CONTINUE  */
    BREAK = 316,                   /* BREAK  */
    FUNC = 317,                    /* FUNC  */
    RETURN = 318,                  /* RETURN  */
    NEW_ARRAY = 319,               /* NEW_ARRAY  */
    MINUS_SIGN = 320,              /* MINUS_SIGN  */
    PLUS_SIGN = 321,               /* PLUS_SIGN  */
    READ_INT = 322,                /* READ_INT  */
    READ_FLOAT = 323,              /* READ_FLOAT  */
    READ = 324,                    /* READ  */
    READ_BOOL = 325,               /* READ_BOOL  */
    READ_LINE = 326                /* READ_LINE  */
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
#define INDENT 262
#define INT_VALUE 263
#define BOOLEAN_VALUE 264
#define FLOAT_VALUE 265
#define STRING_VALUE 266
#define NULL_VALUE 267
#define ARRAY_VALUE 268
#define IDENTIFER 269
#define ASSIGN 270
#define VAR 271
#define GLOBAL 272
#define ADD_ASSIGN 273
#define SUB_ASSIGN 274
#define MUL_ASSIGN 275
#define DIV_ASSIGN 276
#define MOD_ASSIGN 277
#define PRINT 278
#define PRINTLN 279
#define LEFT_PAREN 280
#define RIGHT_PAREN 281
#define LEFT_QUAD 282
#define RIGHT_QUAD 283
#define LEFT_BRACE 284
#define RIGHT_BRACE 285
#define SEMICOLON_OPTIONAL 286
#define SEMICOLON 287
#define COMMA 288
#define COLON 289
#define ADD 290
#define SUB 291
#define MUL 292
#define DIV 293
#define MOD 294
#define EQ 295
#define NE 296
#define GT 297
#define GE 298
#define LT 299
#define LE 300
#define AND 301
#define OR 302
#define NOT 303
#define BIT_AND 304
#define BIT_OR 305
#define BIT_XOR 306
#define BIT_NOT 307
#define INCREMENT 308
#define DECREMENT 309
#define IF 310
#define ELSE 311
#define FOR 312
#define WHILE 313
#define DO 314
#define CONTINUE 315
#define BREAK 316
#define FUNC 317
#define RETURN 318
#define NEW_ARRAY 319
#define MINUS_SIGN 320
#define PLUS_SIGN 321
#define READ_INT 322
#define READ_FLOAT 323
#define READ 324
#define READ_BOOL 325
#define READ_LINE 326

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 58 "bello.y"

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

#line 231 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
