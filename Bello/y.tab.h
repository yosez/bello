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
    NEW = 261,                     /* NEW  */
    NOP = 262,                     /* NOP  */
    DOT = 263,                     /* DOT  */
    CLASS = 264,                   /* CLASS  */
    SHARED = 265,                  /* SHARED  */
    THIS = 266,                    /* THIS  */
    INDENT = 267,                  /* INDENT  */
    INT_VALUE = 268,               /* INT_VALUE  */
    BOOLEAN_VALUE = 269,           /* BOOLEAN_VALUE  */
    FLOAT_VALUE = 270,             /* FLOAT_VALUE  */
    STRING_VALUE = 271,            /* STRING_VALUE  */
    OBJECT_VALUE = 272,            /* OBJECT_VALUE  */
    NULL_VALUE = 273,              /* NULL_VALUE  */
    ARRAY_VALUE = 274,             /* ARRAY_VALUE  */
    IDENTIFER = 275,               /* IDENTIFER  */
    ASSIGN = 276,                  /* ASSIGN  */
    VAR = 277,                     /* VAR  */
    GLOBAL = 278,                  /* GLOBAL  */
    ADD_ASSIGN = 279,              /* ADD_ASSIGN  */
    SUB_ASSIGN = 280,              /* SUB_ASSIGN  */
    MUL_ASSIGN = 281,              /* MUL_ASSIGN  */
    DIV_ASSIGN = 282,              /* DIV_ASSIGN  */
    MOD_ASSIGN = 283,              /* MOD_ASSIGN  */
    PRINT = 284,                   /* PRINT  */
    PRINTLN = 285,                 /* PRINTLN  */
    LEFT_PAREN = 286,              /* LEFT_PAREN  */
    RIGHT_PAREN = 287,             /* RIGHT_PAREN  */
    LEFT_QUAD = 288,               /* LEFT_QUAD  */
    RIGHT_QUAD = 289,              /* RIGHT_QUAD  */
    LEFT_BRACE = 290,              /* LEFT_BRACE  */
    RIGHT_BRACE = 291,             /* RIGHT_BRACE  */
    SEMICOLON_OPTIONAL = 292,      /* SEMICOLON_OPTIONAL  */
    SEMICOLON = 293,               /* SEMICOLON  */
    COMMA = 294,                   /* COMMA  */
    COLON = 295,                   /* COLON  */
    ADD = 296,                     /* ADD  */
    SUB = 297,                     /* SUB  */
    MUL = 298,                     /* MUL  */
    DIV = 299,                     /* DIV  */
    MOD = 300,                     /* MOD  */
    EQ = 301,                      /* EQ  */
    NE = 302,                      /* NE  */
    GT = 303,                      /* GT  */
    GE = 304,                      /* GE  */
    LT = 305,                      /* LT  */
    LE = 306,                      /* LE  */
    AND = 307,                     /* AND  */
    OR = 308,                      /* OR  */
    NOT = 309,                     /* NOT  */
    BIT_AND = 310,                 /* BIT_AND  */
    BIT_OR = 311,                  /* BIT_OR  */
    BIT_XOR = 312,                 /* BIT_XOR  */
    BIT_NOT = 313,                 /* BIT_NOT  */
    INCREMENT = 314,               /* INCREMENT  */
    DECREMENT = 315,               /* DECREMENT  */
    IF = 316,                      /* IF  */
    ELSEIF = 317,                  /* ELSEIF  */
    ELSE = 318,                    /* ELSE  */
    FOR = 319,                     /* FOR  */
    WHILE = 320,                   /* WHILE  */
    DO = 321,                      /* DO  */
    CONTINUE = 322,                /* CONTINUE  */
    BREAK = 323,                   /* BREAK  */
    FUNC = 324,                    /* FUNC  */
    RETURN = 325,                  /* RETURN  */
    NEW_ARRAY = 326,               /* NEW_ARRAY  */
    MINUS_SIGN = 327,              /* MINUS_SIGN  */
    PLUS_SIGN = 328,               /* PLUS_SIGN  */
    QM = 329                       /* QM  */
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
#define NEW 261
#define NOP 262
#define DOT 263
#define CLASS 264
#define SHARED 265
#define THIS 266
#define INDENT 267
#define INT_VALUE 268
#define BOOLEAN_VALUE 269
#define FLOAT_VALUE 270
#define STRING_VALUE 271
#define OBJECT_VALUE 272
#define NULL_VALUE 273
#define ARRAY_VALUE 274
#define IDENTIFER 275
#define ASSIGN 276
#define VAR 277
#define GLOBAL 278
#define ADD_ASSIGN 279
#define SUB_ASSIGN 280
#define MUL_ASSIGN 281
#define DIV_ASSIGN 282
#define MOD_ASSIGN 283
#define PRINT 284
#define PRINTLN 285
#define LEFT_PAREN 286
#define RIGHT_PAREN 287
#define LEFT_QUAD 288
#define RIGHT_QUAD 289
#define LEFT_BRACE 290
#define RIGHT_BRACE 291
#define SEMICOLON_OPTIONAL 292
#define SEMICOLON 293
#define COMMA 294
#define COLON 295
#define ADD 296
#define SUB 297
#define MUL 298
#define DIV 299
#define MOD 300
#define EQ 301
#define NE 302
#define GT 303
#define GE 304
#define LT 305
#define LE 306
#define AND 307
#define OR 308
#define NOT 309
#define BIT_AND 310
#define BIT_OR 311
#define BIT_XOR 312
#define BIT_NOT 313
#define INCREMENT 314
#define DECREMENT 315
#define IF 316
#define ELSEIF 317
#define ELSE 318
#define FOR 319
#define WHILE 320
#define DO 321
#define CONTINUE 322
#define BREAK 323
#define FUNC 324
#define RETURN 325
#define NEW_ARRAY 326
#define MINUS_SIGN 327
#define PLUS_SIGN 328
#define QM 329

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 69 "bello.y"

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
    struct AsgnLstStrc *asgnLst;
    struct ElmtLstStrc *elmtLst;
    struct PstnLstStrc *pstnLst;
    struct AcsLstStrc *evlLst;
    
    char *idtf;
    //string idtf;

#line 238 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
