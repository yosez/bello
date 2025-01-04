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
    DOT = 262,                     /* DOT  */
    CLASS = 263,                   /* CLASS  */
    SHARED = 264,                  /* SHARED  */
    THIS = 265,                    /* THIS  */
    INDENT = 266,                  /* INDENT  */
    INT_VALUE = 267,               /* INT_VALUE  */
    BOOLEAN_VALUE = 268,           /* BOOLEAN_VALUE  */
    FLOAT_VALUE = 269,             /* FLOAT_VALUE  */
    STRING_VALUE = 270,            /* STRING_VALUE  */
    NULL_VALUE = 271,              /* NULL_VALUE  */
    ARRAY_VALUE = 272,             /* ARRAY_VALUE  */
    IDENTIFER = 273,               /* IDENTIFER  */
    ASSIGN = 274,                  /* ASSIGN  */
    VAR = 275,                     /* VAR  */
    GLOBAL = 276,                  /* GLOBAL  */
    ADD_ASSIGN = 277,              /* ADD_ASSIGN  */
    SUB_ASSIGN = 278,              /* SUB_ASSIGN  */
    MUL_ASSIGN = 279,              /* MUL_ASSIGN  */
    DIV_ASSIGN = 280,              /* DIV_ASSIGN  */
    MOD_ASSIGN = 281,              /* MOD_ASSIGN  */
    PRINT = 282,                   /* PRINT  */
    PRINTLN = 283,                 /* PRINTLN  */
    LEFT_PAREN = 284,              /* LEFT_PAREN  */
    RIGHT_PAREN = 285,             /* RIGHT_PAREN  */
    LEFT_QUAD = 286,               /* LEFT_QUAD  */
    RIGHT_QUAD = 287,              /* RIGHT_QUAD  */
    LEFT_BRACE = 288,              /* LEFT_BRACE  */
    RIGHT_BRACE = 289,             /* RIGHT_BRACE  */
    SEMICOLON_OPTIONAL = 290,      /* SEMICOLON_OPTIONAL  */
    SEMICOLON = 291,               /* SEMICOLON  */
    COMMA = 292,                   /* COMMA  */
    COLON = 293,                   /* COLON  */
    ADD = 294,                     /* ADD  */
    SUB = 295,                     /* SUB  */
    MUL = 296,                     /* MUL  */
    DIV = 297,                     /* DIV  */
    MOD = 298,                     /* MOD  */
    EQ = 299,                      /* EQ  */
    NE = 300,                      /* NE  */
    GT = 301,                      /* GT  */
    GE = 302,                      /* GE  */
    LT = 303,                      /* LT  */
    LE = 304,                      /* LE  */
    AND = 305,                     /* AND  */
    OR = 306,                      /* OR  */
    NOT = 307,                     /* NOT  */
    BIT_AND = 308,                 /* BIT_AND  */
    BIT_OR = 309,                  /* BIT_OR  */
    BIT_XOR = 310,                 /* BIT_XOR  */
    BIT_NOT = 311,                 /* BIT_NOT  */
    INCREMENT = 312,               /* INCREMENT  */
    DECREMENT = 313,               /* DECREMENT  */
    IF = 314,                      /* IF  */
    ELSE = 315,                    /* ELSE  */
    FOR = 316,                     /* FOR  */
    WHILE = 317,                   /* WHILE  */
    DO = 318,                      /* DO  */
    CONTINUE = 319,                /* CONTINUE  */
    BREAK = 320,                   /* BREAK  */
    FUNC = 321,                    /* FUNC  */
    RETURN = 322,                  /* RETURN  */
    NEW_ARRAY = 323,               /* NEW_ARRAY  */
    MINUS_SIGN = 324,              /* MINUS_SIGN  */
    PLUS_SIGN = 325,               /* PLUS_SIGN  */
    READ_INT = 326,                /* READ_INT  */
    READ_FLOAT = 327,              /* READ_FLOAT  */
    READ = 328,                    /* READ  */
    READ_BOOL = 329,               /* READ_BOOL  */
    READ_LINE = 330                /* READ_LINE  */
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
#define DOT 262
#define CLASS 263
#define SHARED 264
#define THIS 265
#define INDENT 266
#define INT_VALUE 267
#define BOOLEAN_VALUE 268
#define FLOAT_VALUE 269
#define STRING_VALUE 270
#define NULL_VALUE 271
#define ARRAY_VALUE 272
#define IDENTIFER 273
#define ASSIGN 274
#define VAR 275
#define GLOBAL 276
#define ADD_ASSIGN 277
#define SUB_ASSIGN 278
#define MUL_ASSIGN 279
#define DIV_ASSIGN 280
#define MOD_ASSIGN 281
#define PRINT 282
#define PRINTLN 283
#define LEFT_PAREN 284
#define RIGHT_PAREN 285
#define LEFT_QUAD 286
#define RIGHT_QUAD 287
#define LEFT_BRACE 288
#define RIGHT_BRACE 289
#define SEMICOLON_OPTIONAL 290
#define SEMICOLON 291
#define COMMA 292
#define COLON 293
#define ADD 294
#define SUB 295
#define MUL 296
#define DIV 297
#define MOD 298
#define EQ 299
#define NE 300
#define GT 301
#define GE 302
#define LT 303
#define LE 304
#define AND 305
#define OR 306
#define NOT 307
#define BIT_AND 308
#define BIT_OR 309
#define BIT_XOR 310
#define BIT_NOT 311
#define INCREMENT 312
#define DECREMENT 313
#define IF 314
#define ELSE 315
#define FOR 316
#define WHILE 317
#define DO 318
#define CONTINUE 319
#define BREAK 320
#define FUNC 321
#define RETURN 322
#define NEW_ARRAY 323
#define MINUS_SIGN 324
#define PLUS_SIGN 325
#define READ_INT 326
#define READ_FLOAT 327
#define READ 328
#define READ_BOOL 329
#define READ_LINE 330

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 66 "bello.y"

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

#line 239 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
