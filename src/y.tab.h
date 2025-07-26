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
    INT_LTR = 268,                 /* INT_LTR  */
    BLN_LTR = 269,                 /* BLN_LTR  */
    FLT_LTR = 270,                 /* FLT_LTR  */
    STR_LTR = 271,                 /* STR_LTR  */
    OBJECT_VALUE = 272,            /* OBJECT_VALUE  */
    NLL_LTR = 273,                 /* NLL_LTR  */
    ARRAY_VALUE = 274,             /* ARRAY_VALUE  */
    SHORTCUT_PRINTLN = 275,        /* SHORTCUT_PRINTLN  */
    IDENTIFER = 276,               /* IDENTIFER  */
    ASSIGN = 277,                  /* ASSIGN  */
    VAR = 278,                     /* VAR  */
    GLOBAL = 279,                  /* GLOBAL  */
    ADD_ASSIGN = 280,              /* ADD_ASSIGN  */
    SUB_ASSIGN = 281,              /* SUB_ASSIGN  */
    MUL_ASSIGN = 282,              /* MUL_ASSIGN  */
    DIV_ASSIGN = 283,              /* DIV_ASSIGN  */
    MOD_ASSIGN = 284,              /* MOD_ASSIGN  */
    PRINT = 285,                   /* PRINT  */
    PRINTLN = 286,                 /* PRINTLN  */
    LEFT_PAREN = 287,              /* LEFT_PAREN  */
    RIGHT_PAREN = 288,             /* RIGHT_PAREN  */
    LEFT_QUAD = 289,               /* LEFT_QUAD  */
    RIGHT_QUAD = 290,              /* RIGHT_QUAD  */
    LEFT_BRACE = 291,              /* LEFT_BRACE  */
    RIGHT_BRACE = 292,             /* RIGHT_BRACE  */
    SEMICOLON_OPTIONAL = 293,      /* SEMICOLON_OPTIONAL  */
    SEMICOLON = 294,               /* SEMICOLON  */
    COMMA = 295,                   /* COMMA  */
    COLON = 296,                   /* COLON  */
    ADD = 297,                     /* ADD  */
    SUB = 298,                     /* SUB  */
    MUL = 299,                     /* MUL  */
    DIV = 300,                     /* DIV  */
    MOD = 301,                     /* MOD  */
    EQ = 302,                      /* EQ  */
    NE = 303,                      /* NE  */
    GT = 304,                      /* GT  */
    GE = 305,                      /* GE  */
    LT = 306,                      /* LT  */
    LE = 307,                      /* LE  */
    AND = 308,                     /* AND  */
    OR = 309,                      /* OR  */
    NOT = 310,                     /* NOT  */
    XOR = 311,                     /* XOR  */
    BIT_AND = 312,                 /* BIT_AND  */
    BIT_OR = 313,                  /* BIT_OR  */
    BIT_XOR = 314,                 /* BIT_XOR  */
    BIT_NOT = 315,                 /* BIT_NOT  */
    INCREMENT = 316,               /* INCREMENT  */
    DECREMENT = 317,               /* DECREMENT  */
    IF = 318,                      /* IF  */
    ELSEIF = 319,                  /* ELSEIF  */
    ELSE = 320,                    /* ELSE  */
    FOR = 321,                     /* FOR  */
    WHILE = 322,                   /* WHILE  */
    DO = 323,                      /* DO  */
    CONTINUE = 324,                /* CONTINUE  */
    BREAK = 325,                   /* BREAK  */
    FUNC = 326,                    /* FUNC  */
    RETURN = 327,                  /* RETURN  */
    NEW_ARRAY = 328,               /* NEW_ARRAY  */
    MINUS_SIGN = 329,              /* MINUS_SIGN  */
    PLUS_SIGN = 330,               /* PLUS_SIGN  */
    QM = 331                       /* QM  */
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
#define INT_LTR 268
#define BLN_LTR 269
#define FLT_LTR 270
#define STR_LTR 271
#define OBJECT_VALUE 272
#define NLL_LTR 273
#define ARRAY_VALUE 274
#define SHORTCUT_PRINTLN 275
#define IDENTIFER 276
#define ASSIGN 277
#define VAR 278
#define GLOBAL 279
#define ADD_ASSIGN 280
#define SUB_ASSIGN 281
#define MUL_ASSIGN 282
#define DIV_ASSIGN 283
#define MOD_ASSIGN 284
#define PRINT 285
#define PRINTLN 286
#define LEFT_PAREN 287
#define RIGHT_PAREN 288
#define LEFT_QUAD 289
#define RIGHT_QUAD 290
#define LEFT_BRACE 291
#define RIGHT_BRACE 292
#define SEMICOLON_OPTIONAL 293
#define SEMICOLON 294
#define COMMA 295
#define COLON 296
#define ADD 297
#define SUB 298
#define MUL 299
#define DIV 300
#define MOD 301
#define EQ 302
#define NE 303
#define GT 304
#define GE 305
#define LT 306
#define LE 307
#define AND 308
#define OR 309
#define NOT 310
#define XOR 311
#define BIT_AND 312
#define BIT_OR 313
#define BIT_XOR 314
#define BIT_NOT 315
#define INCREMENT 316
#define DECREMENT 317
#define IF 318
#define ELSEIF 319
#define ELSE 320
#define FOR 321
#define WHILE 322
#define DO 323
#define CONTINUE 324
#define BREAK 325
#define FUNC 326
#define RETURN 327
#define NEW_ARRAY 328
#define MINUS_SIGN 329
#define PLUS_SIGN 330
#define QM 331

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 64 "bello.y"

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

#line 242 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
