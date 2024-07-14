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
    INT_VALUE = 258,               /* INT_VALUE  */
    BOOLEAN_VALUE = 259,           /* BOOLEAN_VALUE  */
    FLOAT_VALUE = 260,             /* FLOAT_VALUE  */
    STRING_VALUE = 261,            /* STRING_VALUE  */
    NULL_VALUE = 262,              /* NULL_VALUE  */
    ARRAY_VALUE = 263,             /* ARRAY_VALUE  */
    IDENTIFER = 264,               /* IDENTIFER  */
    ASSIGN = 265,                  /* ASSIGN  */
    VAR = 266,                     /* VAR  */
    GLOBAL = 267,                  /* GLOBAL  */
    ADD_ASSIGN = 268,              /* ADD_ASSIGN  */
    SUB_ASSIGN = 269,              /* SUB_ASSIGN  */
    MUL_ASSIGN = 270,              /* MUL_ASSIGN  */
    DIV_ASSIGN = 271,              /* DIV_ASSIGN  */
    MOD_ASSIGN = 272,              /* MOD_ASSIGN  */
    PRINT = 273,                   /* PRINT  */
    PRINTLN = 274,                 /* PRINTLN  */
    LEFT_PAREN = 275,              /* LEFT_PAREN  */
    RIGHT_PAREN = 276,             /* RIGHT_PAREN  */
    LEFT_QUAD = 277,               /* LEFT_QUAD  */
    RIGHT_QUAD = 278,              /* RIGHT_QUAD  */
    LEFT_BRACE = 279,              /* LEFT_BRACE  */
    RIGHT_BRACE = 280,             /* RIGHT_BRACE  */
    SEMICOLON = 281,               /* SEMICOLON  */
    COMMA = 282,                   /* COMMA  */
    COLON = 283,                   /* COLON  */
    ADD = 284,                     /* ADD  */
    SUB = 285,                     /* SUB  */
    MUL = 286,                     /* MUL  */
    DIV = 287,                     /* DIV  */
    MOD = 288,                     /* MOD  */
    EQ = 289,                      /* EQ  */
    NE = 290,                      /* NE  */
    GT = 291,                      /* GT  */
    GE = 292,                      /* GE  */
    LT = 293,                      /* LT  */
    LE = 294,                      /* LE  */
    AND = 295,                     /* AND  */
    OR = 296,                      /* OR  */
    NOT = 297,                     /* NOT  */
    BIT_AND = 298,                 /* BIT_AND  */
    BIT_OR = 299,                  /* BIT_OR  */
    BIT_XOR = 300,                 /* BIT_XOR  */
    BIT_NOT = 301,                 /* BIT_NOT  */
    INCREMENT = 302,               /* INCREMENT  */
    DECREMENT = 303,               /* DECREMENT  */
    IF = 304,                      /* IF  */
    ELSE = 305,                    /* ELSE  */
    FOR = 306,                     /* FOR  */
    WHILE = 307,                   /* WHILE  */
    DO = 308,                      /* DO  */
    CONTINUE = 309,                /* CONTINUE  */
    BREAK = 310,                   /* BREAK  */
    FUNC = 311,                    /* FUNC  */
    RETURN = 312,                  /* RETURN  */
    READ_INT = 313,                /* READ_INT  */
    READ_FLOAT = 314,              /* READ_FLOAT  */
    READ = 315,                    /* READ  */
    READ_BOOL = 316,               /* READ_BOOL  */
    READ_LINE = 317,               /* READ_LINE  */
    NEW_ARRAY = 318,               /* NEW_ARRAY  */
    MINUS_SIGN = 319,              /* MINUS_SIGN  */
    PLUS_SIGN = 320                /* PLUS_SIGN  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define INT_VALUE 258
#define BOOLEAN_VALUE 259
#define FLOAT_VALUE 260
#define STRING_VALUE 261
#define NULL_VALUE 262
#define ARRAY_VALUE 263
#define IDENTIFER 264
#define ASSIGN 265
#define VAR 266
#define GLOBAL 267
#define ADD_ASSIGN 268
#define SUB_ASSIGN 269
#define MUL_ASSIGN 270
#define DIV_ASSIGN 271
#define MOD_ASSIGN 272
#define PRINT 273
#define PRINTLN 274
#define LEFT_PAREN 275
#define RIGHT_PAREN 276
#define LEFT_QUAD 277
#define RIGHT_QUAD 278
#define LEFT_BRACE 279
#define RIGHT_BRACE 280
#define SEMICOLON 281
#define COMMA 282
#define COLON 283
#define ADD 284
#define SUB 285
#define MUL 286
#define DIV 287
#define MOD 288
#define EQ 289
#define NE 290
#define GT 291
#define GE 292
#define LT 293
#define LE 294
#define AND 295
#define OR 296
#define NOT 297
#define BIT_AND 298
#define BIT_OR 299
#define BIT_XOR 300
#define BIT_NOT 301
#define INCREMENT 302
#define DECREMENT 303
#define IF 304
#define ELSE 305
#define FOR 306
#define WHILE 307
#define DO 308
#define CONTINUE 309
#define BREAK 310
#define FUNC 311
#define RETURN 312
#define READ_INT 313
#define READ_FLOAT 314
#define READ 315
#define READ_BOOL 316
#define READ_LINE 317
#define NEW_ARRAY 318
#define MINUS_SIGN 319
#define PLUS_SIGN 320

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
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
    struct AcsLstStrc *evlLst;

    char *idtf;
    //string idtf;

#line 219 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
