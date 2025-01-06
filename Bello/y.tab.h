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
    NULL_VALUE = 272,              /* NULL_VALUE  */
    ARRAY_VALUE = 273,             /* ARRAY_VALUE  */
    IDENTIFER = 274,               /* IDENTIFER  */
    ASSIGN = 275,                  /* ASSIGN  */
    VAR = 276,                     /* VAR  */
    GLOBAL = 277,                  /* GLOBAL  */
    ADD_ASSIGN = 278,              /* ADD_ASSIGN  */
    SUB_ASSIGN = 279,              /* SUB_ASSIGN  */
    MUL_ASSIGN = 280,              /* MUL_ASSIGN  */
    DIV_ASSIGN = 281,              /* DIV_ASSIGN  */
    MOD_ASSIGN = 282,              /* MOD_ASSIGN  */
    PRINT = 283,                   /* PRINT  */
    PRINTLN = 284,                 /* PRINTLN  */
    LEFT_PAREN = 285,              /* LEFT_PAREN  */
    RIGHT_PAREN = 286,             /* RIGHT_PAREN  */
    LEFT_QUAD = 287,               /* LEFT_QUAD  */
    RIGHT_QUAD = 288,              /* RIGHT_QUAD  */
    LEFT_BRACE = 289,              /* LEFT_BRACE  */
    RIGHT_BRACE = 290,             /* RIGHT_BRACE  */
    SEMICOLON_OPTIONAL = 291,      /* SEMICOLON_OPTIONAL  */
    SEMICOLON = 292,               /* SEMICOLON  */
    COMMA = 293,                   /* COMMA  */
    COLON = 294,                   /* COLON  */
    ADD = 295,                     /* ADD  */
    SUB = 296,                     /* SUB  */
    MUL = 297,                     /* MUL  */
    DIV = 298,                     /* DIV  */
    MOD = 299,                     /* MOD  */
    EQ = 300,                      /* EQ  */
    NE = 301,                      /* NE  */
    GT = 302,                      /* GT  */
    GE = 303,                      /* GE  */
    LT = 304,                      /* LT  */
    LE = 305,                      /* LE  */
    AND = 306,                     /* AND  */
    OR = 307,                      /* OR  */
    NOT = 308,                     /* NOT  */
    BIT_AND = 309,                 /* BIT_AND  */
    BIT_OR = 310,                  /* BIT_OR  */
    BIT_XOR = 311,                 /* BIT_XOR  */
    BIT_NOT = 312,                 /* BIT_NOT  */
    INCREMENT = 313,               /* INCREMENT  */
    DECREMENT = 314,               /* DECREMENT  */
    IF = 315,                      /* IF  */
    ELSE = 316,                    /* ELSE  */
    FOR = 317,                     /* FOR  */
    WHILE = 318,                   /* WHILE  */
    DO = 319,                      /* DO  */
    CONTINUE = 320,                /* CONTINUE  */
    BREAK = 321,                   /* BREAK  */
    FUNC = 322,                    /* FUNC  */
    RETURN = 323,                  /* RETURN  */
    NEW_ARRAY = 324,               /* NEW_ARRAY  */
    MINUS_SIGN = 325,              /* MINUS_SIGN  */
    PLUS_SIGN = 326,               /* PLUS_SIGN  */
    READ_INT = 327,                /* READ_INT  */
    READ_FLOAT = 328,              /* READ_FLOAT  */
    READ = 329,                    /* READ  */
    READ_BOOL = 330,               /* READ_BOOL  */
    READ_LINE = 331                /* READ_LINE  */
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
#define NULL_VALUE 272
#define ARRAY_VALUE 273
#define IDENTIFER 274
#define ASSIGN 275
#define VAR 276
#define GLOBAL 277
#define ADD_ASSIGN 278
#define SUB_ASSIGN 279
#define MUL_ASSIGN 280
#define DIV_ASSIGN 281
#define MOD_ASSIGN 282
#define PRINT 283
#define PRINTLN 284
#define LEFT_PAREN 285
#define RIGHT_PAREN 286
#define LEFT_QUAD 287
#define RIGHT_QUAD 288
#define LEFT_BRACE 289
#define RIGHT_BRACE 290
#define SEMICOLON_OPTIONAL 291
#define SEMICOLON 292
#define COMMA 293
#define COLON 294
#define ADD 295
#define SUB 296
#define MUL 297
#define DIV 298
#define MOD 299
#define EQ 300
#define NE 301
#define GT 302
#define GE 303
#define LT 304
#define LE 305
#define AND 306
#define OR 307
#define NOT 308
#define BIT_AND 309
#define BIT_OR 310
#define BIT_XOR 311
#define BIT_NOT 312
#define INCREMENT 313
#define DECREMENT 314
#define IF 315
#define ELSE 316
#define FOR 317
#define WHILE 318
#define DO 319
#define CONTINUE 320
#define BREAK 321
#define FUNC 322
#define RETURN 323
#define NEW_ARRAY 324
#define MINUS_SIGN 325
#define PLUS_SIGN 326
#define READ_INT 327
#define READ_FLOAT 328
#define READ 329
#define READ_BOOL 330
#define READ_LINE 331

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

#line 241 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
