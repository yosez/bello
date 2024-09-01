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
    INDENT = 259,                  /* INDENT  */
    INT_VALUE = 260,               /* INT_VALUE  */
    BOOLEAN_VALUE = 261,           /* BOOLEAN_VALUE  */
    FLOAT_VALUE = 262,             /* FLOAT_VALUE  */
    STRING_VALUE = 263,            /* STRING_VALUE  */
    NULL_VALUE = 264,              /* NULL_VALUE  */
    ARRAY_VALUE = 265,             /* ARRAY_VALUE  */
    IDENTIFER = 266,               /* IDENTIFER  */
    ASSIGN = 267,                  /* ASSIGN  */
    VAR = 268,                     /* VAR  */
    GLOBAL = 269,                  /* GLOBAL  */
    ADD_ASSIGN = 270,              /* ADD_ASSIGN  */
    SUB_ASSIGN = 271,              /* SUB_ASSIGN  */
    MUL_ASSIGN = 272,              /* MUL_ASSIGN  */
    DIV_ASSIGN = 273,              /* DIV_ASSIGN  */
    MOD_ASSIGN = 274,              /* MOD_ASSIGN  */
    PRINT = 275,                   /* PRINT  */
    PRINTLN = 276,                 /* PRINTLN  */
    LEFT_PAREN = 277,              /* LEFT_PAREN  */
    RIGHT_PAREN = 278,             /* RIGHT_PAREN  */
    LEFT_QUAD = 279,               /* LEFT_QUAD  */
    RIGHT_QUAD = 280,              /* RIGHT_QUAD  */
    LEFT_BRACE = 281,              /* LEFT_BRACE  */
    RIGHT_BRACE = 282,             /* RIGHT_BRACE  */
    SEMICOLON_OPTIONAL = 283,      /* SEMICOLON_OPTIONAL  */
    SEMICOLON = 284,               /* SEMICOLON  */
    COMMA = 285,                   /* COMMA  */
    COLON = 286,                   /* COLON  */
    ADD = 287,                     /* ADD  */
    SUB = 288,                     /* SUB  */
    MUL = 289,                     /* MUL  */
    DIV = 290,                     /* DIV  */
    MOD = 291,                     /* MOD  */
    EQ = 292,                      /* EQ  */
    NE = 293,                      /* NE  */
    GT = 294,                      /* GT  */
    GE = 295,                      /* GE  */
    LT = 296,                      /* LT  */
    LE = 297,                      /* LE  */
    AND = 298,                     /* AND  */
    OR = 299,                      /* OR  */
    NOT = 300,                     /* NOT  */
    BIT_AND = 301,                 /* BIT_AND  */
    BIT_OR = 302,                  /* BIT_OR  */
    BIT_XOR = 303,                 /* BIT_XOR  */
    BIT_NOT = 304,                 /* BIT_NOT  */
    INCREMENT = 305,               /* INCREMENT  */
    DECREMENT = 306,               /* DECREMENT  */
    IF = 307,                      /* IF  */
    ELSE = 308,                    /* ELSE  */
    FOR = 309,                     /* FOR  */
    WHILE = 310,                   /* WHILE  */
    DO = 311,                      /* DO  */
    CONTINUE = 312,                /* CONTINUE  */
    BREAK = 313,                   /* BREAK  */
    FUNC = 314,                    /* FUNC  */
    RETURN = 315,                  /* RETURN  */
    READ_INT = 316,                /* READ_INT  */
    READ_FLOAT = 317,              /* READ_FLOAT  */
    READ = 318,                    /* READ  */
    READ_BOOL = 319,               /* READ_BOOL  */
    READ_LINE = 320,               /* READ_LINE  */
    NEW_ARRAY = 321,               /* NEW_ARRAY  */
    MINUS_SIGN = 322,              /* MINUS_SIGN  */
    PLUS_SIGN = 323                /* PLUS_SIGN  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define LF 258
#define INDENT 259
#define INT_VALUE 260
#define BOOLEAN_VALUE 261
#define FLOAT_VALUE 262
#define STRING_VALUE 263
#define NULL_VALUE 264
#define ARRAY_VALUE 265
#define IDENTIFER 266
#define ASSIGN 267
#define VAR 268
#define GLOBAL 269
#define ADD_ASSIGN 270
#define SUB_ASSIGN 271
#define MUL_ASSIGN 272
#define DIV_ASSIGN 273
#define MOD_ASSIGN 274
#define PRINT 275
#define PRINTLN 276
#define LEFT_PAREN 277
#define RIGHT_PAREN 278
#define LEFT_QUAD 279
#define RIGHT_QUAD 280
#define LEFT_BRACE 281
#define RIGHT_BRACE 282
#define SEMICOLON_OPTIONAL 283
#define SEMICOLON 284
#define COMMA 285
#define COLON 286
#define ADD 287
#define SUB 288
#define MUL 289
#define DIV 290
#define MOD 291
#define EQ 292
#define NE 293
#define GT 294
#define GE 295
#define LT 296
#define LE 297
#define AND 298
#define OR 299
#define NOT 300
#define BIT_AND 301
#define BIT_OR 302
#define BIT_XOR 303
#define BIT_NOT 304
#define INCREMENT 305
#define DECREMENT 306
#define IF 307
#define ELSE 308
#define FOR 309
#define WHILE 310
#define DO 311
#define CONTINUE 312
#define BREAK 313
#define FUNC 314
#define RETURN 315
#define READ_INT 316
#define READ_FLOAT 317
#define READ 318
#define READ_BOOL 319
#define READ_LINE 320
#define NEW_ARRAY 321
#define MINUS_SIGN 322
#define PLUS_SIGN 323

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

#line 225 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
