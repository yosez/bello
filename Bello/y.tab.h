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
    NOP = 260,                     /* NOP  */
    INDENT = 261,                  /* INDENT  */
    INT_VALUE = 262,               /* INT_VALUE  */
    BOOLEAN_VALUE = 263,           /* BOOLEAN_VALUE  */
    FLOAT_VALUE = 264,             /* FLOAT_VALUE  */
    STRING_VALUE = 265,            /* STRING_VALUE  */
    NULL_VALUE = 266,              /* NULL_VALUE  */
    ARRAY_VALUE = 267,             /* ARRAY_VALUE  */
    IDENTIFER = 268,               /* IDENTIFER  */
    ASSIGN = 269,                  /* ASSIGN  */
    VAR = 270,                     /* VAR  */
    GLOBAL = 271,                  /* GLOBAL  */
    ADD_ASSIGN = 272,              /* ADD_ASSIGN  */
    SUB_ASSIGN = 273,              /* SUB_ASSIGN  */
    MUL_ASSIGN = 274,              /* MUL_ASSIGN  */
    DIV_ASSIGN = 275,              /* DIV_ASSIGN  */
    MOD_ASSIGN = 276,              /* MOD_ASSIGN  */
    PRINT = 277,                   /* PRINT  */
    PRINTLN = 278,                 /* PRINTLN  */
    LEFT_PAREN = 279,              /* LEFT_PAREN  */
    RIGHT_PAREN = 280,             /* RIGHT_PAREN  */
    LEFT_QUAD = 281,               /* LEFT_QUAD  */
    RIGHT_QUAD = 282,              /* RIGHT_QUAD  */
    LEFT_BRACE = 283,              /* LEFT_BRACE  */
    RIGHT_BRACE = 284,             /* RIGHT_BRACE  */
    SEMICOLON_OPTIONAL = 285,      /* SEMICOLON_OPTIONAL  */
    SEMICOLON = 286,               /* SEMICOLON  */
    COMMA = 287,                   /* COMMA  */
    COLON = 288,                   /* COLON  */
    ADD = 289,                     /* ADD  */
    SUB = 290,                     /* SUB  */
    MUL = 291,                     /* MUL  */
    DIV = 292,                     /* DIV  */
    MOD = 293,                     /* MOD  */
    EQ = 294,                      /* EQ  */
    NE = 295,                      /* NE  */
    GT = 296,                      /* GT  */
    GE = 297,                      /* GE  */
    LT = 298,                      /* LT  */
    LE = 299,                      /* LE  */
    AND = 300,                     /* AND  */
    OR = 301,                      /* OR  */
    NOT = 302,                     /* NOT  */
    BIT_AND = 303,                 /* BIT_AND  */
    BIT_OR = 304,                  /* BIT_OR  */
    BIT_XOR = 305,                 /* BIT_XOR  */
    BIT_NOT = 306,                 /* BIT_NOT  */
    INCREMENT = 307,               /* INCREMENT  */
    DECREMENT = 308,               /* DECREMENT  */
    IF = 309,                      /* IF  */
    ELSE = 310,                    /* ELSE  */
    FOR = 311,                     /* FOR  */
    WHILE = 312,                   /* WHILE  */
    DO = 313,                      /* DO  */
    CONTINUE = 314,                /* CONTINUE  */
    BREAK = 315,                   /* BREAK  */
    FUNC = 316,                    /* FUNC  */
    RETURN = 317,                  /* RETURN  */
    NEW_ARRAY = 318,               /* NEW_ARRAY  */
    MINUS_SIGN = 319,              /* MINUS_SIGN  */
    PLUS_SIGN = 320,               /* PLUS_SIGN  */
    READ_INT = 321,                /* READ_INT  */
    READ_FLOAT = 322,              /* READ_FLOAT  */
    READ = 323,                    /* READ  */
    READ_BOOL = 324,               /* READ_BOOL  */
    READ_LINE = 325                /* READ_LINE  */
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
#define NOP 260
#define INDENT 261
#define INT_VALUE 262
#define BOOLEAN_VALUE 263
#define FLOAT_VALUE 264
#define STRING_VALUE 265
#define NULL_VALUE 266
#define ARRAY_VALUE 267
#define IDENTIFER 268
#define ASSIGN 269
#define VAR 270
#define GLOBAL 271
#define ADD_ASSIGN 272
#define SUB_ASSIGN 273
#define MUL_ASSIGN 274
#define DIV_ASSIGN 275
#define MOD_ASSIGN 276
#define PRINT 277
#define PRINTLN 278
#define LEFT_PAREN 279
#define RIGHT_PAREN 280
#define LEFT_QUAD 281
#define RIGHT_QUAD 282
#define LEFT_BRACE 283
#define RIGHT_BRACE 284
#define SEMICOLON_OPTIONAL 285
#define SEMICOLON 286
#define COMMA 287
#define COLON 288
#define ADD 289
#define SUB 290
#define MUL 291
#define DIV 292
#define MOD 293
#define EQ 294
#define NE 295
#define GT 296
#define GE 297
#define LT 298
#define LE 299
#define AND 300
#define OR 301
#define NOT 302
#define BIT_AND 303
#define BIT_OR 304
#define BIT_XOR 305
#define BIT_NOT 306
#define INCREMENT 307
#define DECREMENT 308
#define IF 309
#define ELSE 310
#define FOR 311
#define WHILE 312
#define DO 313
#define CONTINUE 314
#define BREAK 315
#define FUNC 316
#define RETURN 317
#define NEW_ARRAY 318
#define MINUS_SIGN 319
#define PLUS_SIGN 320
#define READ_INT 321
#define READ_FLOAT 322
#define READ 323
#define READ_BOOL 324
#define READ_LINE 325

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

#line 229 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
