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
    ADD_ASSIGN = 267,              /* ADD_ASSIGN  */
    SUB_ASSIGN = 268,              /* SUB_ASSIGN  */
    MUL_ASSIGN = 269,              /* MUL_ASSIGN  */
    DIV_ASSIGN = 270,              /* DIV_ASSIGN  */
    MOD_ASSIGN = 271,              /* MOD_ASSIGN  */
    PRINT = 272,                   /* PRINT  */
    PRINTLN = 273,                 /* PRINTLN  */
    LEFT_PAREN = 274,              /* LEFT_PAREN  */
    RIGHT_PAREN = 275,             /* RIGHT_PAREN  */
    LEFT_QUAD = 276,               /* LEFT_QUAD  */
    RIGHT_QUAD = 277,              /* RIGHT_QUAD  */
    LEFT_BRACE = 278,              /* LEFT_BRACE  */
    RIGHT_BRACE = 279,             /* RIGHT_BRACE  */
    SEMICOLON = 280,               /* SEMICOLON  */
    COMMA = 281,                   /* COMMA  */
    COLON = 282,                   /* COLON  */
    ADD = 283,                     /* ADD  */
    SUB = 284,                     /* SUB  */
    MUL = 285,                     /* MUL  */
    DIV = 286,                     /* DIV  */
    MOD = 287,                     /* MOD  */
    EQ = 288,                      /* EQ  */
    NE = 289,                      /* NE  */
    GT = 290,                      /* GT  */
    GE = 291,                      /* GE  */
    LT = 292,                      /* LT  */
    LE = 293,                      /* LE  */
    AND = 294,                     /* AND  */
    OR = 295,                      /* OR  */
    NOT = 296,                     /* NOT  */
    BIT_AND = 297,                 /* BIT_AND  */
    BIT_OR = 298,                  /* BIT_OR  */
    BIT_XOR = 299,                 /* BIT_XOR  */
    BIT_NOT = 300,                 /* BIT_NOT  */
    INCREMENT = 301,               /* INCREMENT  */
    DECREMENT = 302,               /* DECREMENT  */
    IF = 303,                      /* IF  */
    ELSE = 304,                    /* ELSE  */
    FOR = 305,                     /* FOR  */
    WHILE = 306,                   /* WHILE  */
    DO = 307,                      /* DO  */
    CONTINUE = 308,                /* CONTINUE  */
    BREAK = 309,                   /* BREAK  */
    FUNC = 310,                    /* FUNC  */
    RETURN = 311,                  /* RETURN  */
    READ_INT = 312,                /* READ_INT  */
    READ_FLOAT = 313,              /* READ_FLOAT  */
    READ = 314,                    /* READ  */
    READ_BOOL = 315,               /* READ_BOOL  */
    READ_LINE = 316,               /* READ_LINE  */
    NEW_ARRAY = 317,               /* NEW_ARRAY  */
    MINUS_SIGN = 318,              /* MINUS_SIGN  */
    PLUS_SIGN = 319                /* PLUS_SIGN  */
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
#define ADD_ASSIGN 267
#define SUB_ASSIGN 268
#define MUL_ASSIGN 269
#define DIV_ASSIGN 270
#define MOD_ASSIGN 271
#define PRINT 272
#define PRINTLN 273
#define LEFT_PAREN 274
#define RIGHT_PAREN 275
#define LEFT_QUAD 276
#define RIGHT_QUAD 277
#define LEFT_BRACE 278
#define RIGHT_BRACE 279
#define SEMICOLON 280
#define COMMA 281
#define COLON 282
#define ADD 283
#define SUB 284
#define MUL 285
#define DIV 286
#define MOD 287
#define EQ 288
#define NE 289
#define GT 290
#define GE 291
#define LT 292
#define LE 293
#define AND 294
#define OR 295
#define NOT 296
#define BIT_AND 297
#define BIT_OR 298
#define BIT_XOR 299
#define BIT_NOT 300
#define INCREMENT 301
#define DECREMENT 302
#define IF 303
#define ELSE 304
#define FOR 305
#define WHILE 306
#define DO 307
#define CONTINUE 308
#define BREAK 309
#define FUNC 310
#define RETURN 311
#define READ_INT 312
#define READ_FLOAT 313
#define READ 314
#define READ_BOOL 315
#define READ_LINE 316
#define NEW_ARRAY 317
#define MINUS_SIGN 318
#define PLUS_SIGN 319

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

#line 217 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
