/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "bello.y"

    #pragma once

    #ifndef Y_TAB_C
    #define Y_TAB_C
    #include <stdio.h>
    #include <string.h>
    #include <stdlib.h>
    #include <stdbool.h>
    #include <stack>
    #include "dftn.h"
    #include "vrb.h"
    #include "val.h"
    #include "exp.h"
    #include "stmt.h"
    #include "arr.h"
    #include "stmt.h"
    #include "fcn.h"
    #include "cls.h"
    #include "envr.h"
    #include "err.h"
    #include "ntv.h"
    #include "lex.yy.c"



    extern char* yytext;

    extern int yylex();

    void yyerror(const char *s,...)
    {
        printf("Syntax error.\n");
        
    }

    //#define YYERROR_VERBOSE 1

    extern int lstIndt;

    //extern struct StmtStkItemStrc;

    extern std::vector<StmtStkItmStrc*> stmtStk;

    extern int chkStmtAlwSubStmt(struct StmtStrc* stmt);

    extern int chkStmtAlwScndStmt(struct StmtStrc* stmt);


    //prsStt为1 从标准输入读取 prsStt为2 从源文件读取
    int prsStt;

    void fldStmt(int indt);
    void pshStmt(int indt, StmtStrc* stmt);
    void prtStmtStk();

    //类定义语句的标志，0为不是类定义的状态，1为类定义的状态
    int blnDfnCls=0;

    struct StmtStrc* lstStmt;

#line 133 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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

#line 361 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_NULL_STRING = 3,                /* NULL_STRING  */
  YYSYMBOL_LF = 4,                         /* LF  */
  YYSYMBOL_END_FILE = 5,                   /* END_FILE  */
  YYSYMBOL_NEW = 6,                        /* NEW  */
  YYSYMBOL_NOP = 7,                        /* NOP  */
  YYSYMBOL_DOT = 8,                        /* DOT  */
  YYSYMBOL_CLASS = 9,                      /* CLASS  */
  YYSYMBOL_SHARED = 10,                    /* SHARED  */
  YYSYMBOL_THIS = 11,                      /* THIS  */
  YYSYMBOL_INDENT = 12,                    /* INDENT  */
  YYSYMBOL_INT_LTR = 13,                   /* INT_LTR  */
  YYSYMBOL_BLN_LTR = 14,                   /* BLN_LTR  */
  YYSYMBOL_FLT_LTR = 15,                   /* FLT_LTR  */
  YYSYMBOL_STR_LTR = 16,                   /* STR_LTR  */
  YYSYMBOL_OBJECT_VALUE = 17,              /* OBJECT_VALUE  */
  YYSYMBOL_NLL_LTR = 18,                   /* NLL_LTR  */
  YYSYMBOL_ARRAY_VALUE = 19,               /* ARRAY_VALUE  */
  YYSYMBOL_SHORTCUT_PRINTLN = 20,          /* SHORTCUT_PRINTLN  */
  YYSYMBOL_IDENTIFER = 21,                 /* IDENTIFER  */
  YYSYMBOL_ASSIGN = 22,                    /* ASSIGN  */
  YYSYMBOL_VAR = 23,                       /* VAR  */
  YYSYMBOL_GLOBAL = 24,                    /* GLOBAL  */
  YYSYMBOL_ADD_ASSIGN = 25,                /* ADD_ASSIGN  */
  YYSYMBOL_SUB_ASSIGN = 26,                /* SUB_ASSIGN  */
  YYSYMBOL_MUL_ASSIGN = 27,                /* MUL_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 28,                /* DIV_ASSIGN  */
  YYSYMBOL_MOD_ASSIGN = 29,                /* MOD_ASSIGN  */
  YYSYMBOL_PRINT = 30,                     /* PRINT  */
  YYSYMBOL_PRINTLN = 31,                   /* PRINTLN  */
  YYSYMBOL_LEFT_PAREN = 32,                /* LEFT_PAREN  */
  YYSYMBOL_RIGHT_PAREN = 33,               /* RIGHT_PAREN  */
  YYSYMBOL_LEFT_QUAD = 34,                 /* LEFT_QUAD  */
  YYSYMBOL_RIGHT_QUAD = 35,                /* RIGHT_QUAD  */
  YYSYMBOL_LEFT_BRACE = 36,                /* LEFT_BRACE  */
  YYSYMBOL_RIGHT_BRACE = 37,               /* RIGHT_BRACE  */
  YYSYMBOL_SEMICOLON_OPTIONAL = 38,        /* SEMICOLON_OPTIONAL  */
  YYSYMBOL_SEMICOLON = 39,                 /* SEMICOLON  */
  YYSYMBOL_COMMA = 40,                     /* COMMA  */
  YYSYMBOL_COLON = 41,                     /* COLON  */
  YYSYMBOL_ADD = 42,                       /* ADD  */
  YYSYMBOL_SUB = 43,                       /* SUB  */
  YYSYMBOL_MUL = 44,                       /* MUL  */
  YYSYMBOL_DIV = 45,                       /* DIV  */
  YYSYMBOL_MOD = 46,                       /* MOD  */
  YYSYMBOL_EQ = 47,                        /* EQ  */
  YYSYMBOL_NE = 48,                        /* NE  */
  YYSYMBOL_GT = 49,                        /* GT  */
  YYSYMBOL_GE = 50,                        /* GE  */
  YYSYMBOL_LT = 51,                        /* LT  */
  YYSYMBOL_LE = 52,                        /* LE  */
  YYSYMBOL_AND = 53,                       /* AND  */
  YYSYMBOL_OR = 54,                        /* OR  */
  YYSYMBOL_NOT = 55,                       /* NOT  */
  YYSYMBOL_XOR = 56,                       /* XOR  */
  YYSYMBOL_BIT_AND = 57,                   /* BIT_AND  */
  YYSYMBOL_BIT_OR = 58,                    /* BIT_OR  */
  YYSYMBOL_BIT_XOR = 59,                   /* BIT_XOR  */
  YYSYMBOL_BIT_NOT = 60,                   /* BIT_NOT  */
  YYSYMBOL_INCREMENT = 61,                 /* INCREMENT  */
  YYSYMBOL_DECREMENT = 62,                 /* DECREMENT  */
  YYSYMBOL_IF = 63,                        /* IF  */
  YYSYMBOL_ELSEIF = 64,                    /* ELSEIF  */
  YYSYMBOL_ELSE = 65,                      /* ELSE  */
  YYSYMBOL_FOR = 66,                       /* FOR  */
  YYSYMBOL_WHILE = 67,                     /* WHILE  */
  YYSYMBOL_DO = 68,                        /* DO  */
  YYSYMBOL_CONTINUE = 69,                  /* CONTINUE  */
  YYSYMBOL_BREAK = 70,                     /* BREAK  */
  YYSYMBOL_FUNC = 71,                      /* FUNC  */
  YYSYMBOL_RETURN = 72,                    /* RETURN  */
  YYSYMBOL_NEW_ARRAY = 73,                 /* NEW_ARRAY  */
  YYSYMBOL_MINUS_SIGN = 74,                /* MINUS_SIGN  */
  YYSYMBOL_PLUS_SIGN = 75,                 /* PLUS_SIGN  */
  YYSYMBOL_QM = 76,                        /* QM  */
  YYSYMBOL_YYACCEPT = 77,                  /* $accept  */
  YYSYMBOL_statement = 78,                 /* statement  */
  YYSYMBOL_79_1 = 79,                      /* @1  */
  YYSYMBOL_check_indent = 80,              /* check_indent  */
  YYSYMBOL_build_statement_stack = 81,     /* build_statement_stack  */
  YYSYMBOL_close_execute_statement = 82,   /* close_execute_statement  */
  YYSYMBOL_close_execute_last_statement = 83, /* close_execute_last_statement  */
  YYSYMBOL_execute_single_statement = 84,  /* execute_single_statement  */
  YYSYMBOL_single_statement = 85,          /* single_statement  */
  YYSYMBOL_single_statement_no_semicolon = 86, /* single_statement_no_semicolon  */
  YYSYMBOL_null_statement = 87,            /* null_statement  */
  YYSYMBOL_nop_statement = 88,             /* nop_statement  */
  YYSYMBOL_statement_block = 89,           /* statement_block  */
  YYSYMBOL_block_list = 90,                /* block_list  */
  YYSYMBOL_expression_statement = 91,      /* expression_statement  */
  YYSYMBOL_expression = 92,                /* expression  */
  YYSYMBOL_lvalue_operation_expression = 93, /* lvalue_operation_expression  */
  YYSYMBOL_assign_expression = 94,         /* assign_expression  */
  YYSYMBOL_self_operation_expression = 95, /* self_operation_expression  */
  YYSYMBOL_unary_expression = 96,          /* unary_expression  */
  YYSYMBOL_binary_expression = 97,         /* binary_expression  */
  YYSYMBOL_shortcut_expression = 98,       /* shortcut_expression  */
  YYSYMBOL_value_expression = 99,          /* value_expression  */
  YYSYMBOL_lvalue_expression = 100,        /* lvalue_expression  */
  YYSYMBOL_array_expression = 101,         /* array_expression  */
  YYSYMBOL_new_array_expression = 102,     /* new_array_expression  */
  YYSYMBOL_element_list = 103,             /* element_list  */
  YYSYMBOL_var_statement = 104,            /* var_statement  */
  YYSYMBOL_global_statement = 105,         /* global_statement  */
  YYSYMBOL_assign_list = 106,              /* assign_list  */
  YYSYMBOL_function_expression = 107,      /* function_expression  */
  YYSYMBOL_argument_list = 108,            /* argument_list  */
  YYSYMBOL_parameter_list = 109,           /* parameter_list  */
  YYSYMBOL_evaluate_list = 110,            /* evaluate_list  */
  YYSYMBOL_if_statement = 111,             /* if_statement  */
  YYSYMBOL_else_statement = 112,           /* else_statement  */
  YYSYMBOL_elseif_statement = 113,         /* elseif_statement  */
  YYSYMBOL_for_statement = 114,            /* for_statement  */
  YYSYMBOL_while_statement = 115,          /* while_statement  */
  YYSYMBOL_do_while_statement = 116,       /* do_while_statement  */
  YYSYMBOL_break_statement = 117,          /* break_statement  */
  YYSYMBOL_continue_statement = 118,       /* continue_statement  */
  YYSYMBOL_structure_statement = 119,      /* structure_statement  */
  YYSYMBOL_function_statement = 120,       /* function_statement  */
  YYSYMBOL_class_statement = 121,          /* class_statement  */
  YYSYMBOL_return_statement = 122          /* return_statement  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1831

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  77
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  46
/* YYNRULES -- Number of rules.  */
#define YYNRULES  160
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  283

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   331


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   166,   166,   166,   168,   170,   172,   173,   174,   178,
     188,   234,   283,   330,   348,   349,   350,   351,   352,   353,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   373,
     374,   375,   376,   377,   378,   382,   385,   388,   389,   392,
     397,   404,   410,   411,   412,   413,   414,   415,   416,   419,
     420,   423,   424,   425,   426,   427,   428,   432,   433,   434,
     435,   438,   439,   440,   441,   442,   445,   446,   447,   448,
     449,   450,   451,   452,   453,   454,   455,   456,   457,   458,
     459,   460,   461,   462,   465,   471,   472,   473,   474,   475,
     476,   477,   478,   481,   482,   497,   502,   566,   570,   576,
     582,   587,   595,   607,   622,   625,   630,   635,   640,   651,
     655,   661,   666,   671,   676,   683,   688,   693,   698,   707,
     712,   717,   722,   727,   732,   737,   742,   747,   752,   757,
     762,   767,   772,   777,   782,   787,   792,   797,   802,   807,
     812,   830,   846,   852,   868,   880,   888,   894,   900,   901,
     904,   905,   908,   909,   946,   954,   962,   979,   989,  1003,
    1004
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "NULL_STRING", "LF",
  "END_FILE", "NEW", "NOP", "DOT", "CLASS", "SHARED", "THIS", "INDENT",
  "INT_LTR", "BLN_LTR", "FLT_LTR", "STR_LTR", "OBJECT_VALUE", "NLL_LTR",
  "ARRAY_VALUE", "SHORTCUT_PRINTLN", "IDENTIFER", "ASSIGN", "VAR",
  "GLOBAL", "ADD_ASSIGN", "SUB_ASSIGN", "MUL_ASSIGN", "DIV_ASSIGN",
  "MOD_ASSIGN", "PRINT", "PRINTLN", "LEFT_PAREN", "RIGHT_PAREN",
  "LEFT_QUAD", "RIGHT_QUAD", "LEFT_BRACE", "RIGHT_BRACE",
  "SEMICOLON_OPTIONAL", "SEMICOLON", "COMMA", "COLON", "ADD", "SUB", "MUL",
  "DIV", "MOD", "EQ", "NE", "GT", "GE", "LT", "LE", "AND", "OR", "NOT",
  "XOR", "BIT_AND", "BIT_OR", "BIT_XOR", "BIT_NOT", "INCREMENT",
  "DECREMENT", "IF", "ELSEIF", "ELSE", "FOR", "WHILE", "DO", "CONTINUE",
  "BREAK", "FUNC", "RETURN", "NEW_ARRAY", "MINUS_SIGN", "PLUS_SIGN", "QM",
  "$accept", "statement", "@1", "check_indent", "build_statement_stack",
  "close_execute_statement", "close_execute_last_statement",
  "execute_single_statement", "single_statement",
  "single_statement_no_semicolon", "null_statement", "nop_statement",
  "statement_block", "block_list", "expression_statement", "expression",
  "lvalue_operation_expression", "assign_expression",
  "self_operation_expression", "unary_expression", "binary_expression",
  "shortcut_expression", "value_expression", "lvalue_expression",
  "array_expression", "new_array_expression", "element_list",
  "var_statement", "global_statement", "assign_list",
  "function_expression", "argument_list", "parameter_list",
  "evaluate_list", "if_statement", "else_statement", "elseif_statement",
  "for_statement", "while_statement", "do_while_statement",
  "break_statement", "continue_statement", "structure_statement",
  "function_statement", "class_statement", "return_statement", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-92)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-8)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     244,   -92,   146,   -92,   -92,   -92,   536,   -92,   -92,   -92,
     -92,    -2,   -92,    13,    -8,   -92,   -92,   -92,   -92,   -92,
    1114,     4,    40,    40,  1114,   726,  1114,  1114,  1114,  1114,
      47,    47,  1114,  1114,   -92,    39,  1114,    44,    82,    58,
    1114,    83,   112,   -92,   -92,    -4,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,     3,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   536,
     -92,   -92,    40,    97,    -4,    79,   758,    98,   100,   100,
      80,   -92,    27,     1,     1,     1,     1,   -92,    25,    25,
      -4,    -4,   598,    -4,  1114,  1114,   115,    -4,  1114,   -92,
    1114,  1114,  1114,  1114,  1114,  1114,  1114,  1114,  1114,  1114,
    1114,  1114,  1114,  1114,  1114,  1114,  1114,  1114,   128,  1114,
    1114,  1114,  1114,  1114,  1114,   791,   -92,   -92,   123,   155,
     100,   131,  1114,   -14,   -92,    -4,   -16,  1114,   143,   -92,
     -92,   317,   130,   -92,   -92,   -92,   -92,   -92,   -92,  1178,
    1213,     2,  1248,   -92,    99,    99,     1,     1,     1,    65,
      65,    65,    65,    65,    65,  1737,  1716,    -4,   319,  1755,
     246,  1695,     4,   -92,    -4,    -4,    -4,    -4,    -4,    -4,
     824,  1284,   857,   -92,    37,    -4,  1114,   -92,  1146,    -4,
     145,   390,   -92,   -92,   103,  1114,   -92,   -92,   149,   -92,
      33,   -92,   -92,  1114,   137,  1320,   -92,   661,   890,  1356,
     -92,   -92,   102,    -4,    28,    -4,  1114,   -92,   -92,   463,
     141,   135,  1114,   -92,   156,    -4,   -92,   -92,   922,   -92,
     954,  1392,   144,  1428,   -92,   694,   -92,   -92,  1114,    -4,
     -92,   -92,  1114,   598,    -4,   158,   -92,  1499,   -92,  1534,
     -92,   986,   -92,   -92,  1018,   -92,  1050,  1464,   -92,    -4,
     148,   151,  1114,   -92,   -92,   -92,  1569,   -92,  1604,   -92,
    1639,   -92,  1082,   139,   -92,    -4,   -92,   -92,   -92,   -92,
    1674,   -92,   -92
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     8,    12,     1,    11,    12,     0,     2,     5,     6,
      28,     0,    36,     0,     0,    85,    87,    86,    88,    89,
       0,    93,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   142,     0,   146,   150,   148,     0,
     159,     0,     0,    24,    14,    41,    43,    49,    50,    44,
      45,    48,    42,    91,    46,    47,    25,    26,    90,    15,
      16,    17,    18,    19,    20,    21,    23,    27,    22,     0,
      92,   158,     0,     0,   100,    84,     0,   105,   102,   104,
       0,    98,     0,    62,    61,    64,    65,    93,    57,    58,
     141,   143,    35,   145,     0,     0,     0,   160,     0,     9,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    59,    60,    95,     0,
     103,     0,     0,    93,   110,   111,     0,     0,     0,    63,
      97,     0,     0,    34,    29,    30,    31,    32,    33,     0,
       0,     0,     0,    10,    66,    67,    68,    69,    70,    74,
      75,    76,    77,    78,    79,    71,    72,    73,    80,    81,
      82,     0,    94,    96,    51,    52,    53,    54,    55,    56,
       0,     0,     0,     9,     0,   101,     0,   109,     0,   106,
     107,     0,   152,   153,     0,     0,   151,   149,   115,   155,
       0,    99,     4,     0,     0,     0,   119,     0,     0,     0,
      10,   157,     0,   112,    93,   113,     0,    38,    39,     0,
       0,     0,     0,   154,     0,    83,   129,   126,     0,   123,
       0,     0,     0,     0,   130,     0,    13,   156,     0,   108,
      37,    40,     0,    35,   116,   117,   127,     0,   124,     0,
     120,     0,   140,   137,     0,   134,     0,     0,     3,   114,
       0,     0,     0,   128,   125,   121,     0,   138,     0,   135,
       0,   131,     0,     0,   144,   118,   122,   139,   136,   132,
       0,   147,   133
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -92,   -92,   -92,    -1,   -25,   -92,   181,   -92,   -43,   -54,
     -92,   -92,   -92,   -92,   -89,   -20,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,    -9,   -92,   -92,   165,   -92,   -92,   -21,
      73,   -92,     8,   -92,   -91,   -92,   -92,   -82,   -78,   -92,
     -92,   -92,   -92,   -92,   -92,   -92
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,    69,   153,   202,     8,     7,   258,    42,   142,
     143,    43,   193,   219,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    75,    56,    57,    78,
      58,   136,   200,   128,    59,    60,    61,    62,    63,   148,
      64,    65,   194,    66,    67,    68
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      74,   145,    79,   144,    80,    74,    83,    84,    85,    86,
     146,   118,    90,    91,   147,    72,    93,   187,    76,    70,
      97,    88,    89,   198,   188,   119,   129,   186,   120,   121,
     122,   123,   124,   118,    71,   199,    76,   125,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   130,   113,   114,   115,   116,   135,   113,   198,   125,
      76,    77,   140,    73,   126,   127,   223,   132,    87,   238,
     211,    92,   117,   224,   149,   150,    94,   117,   152,    96,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   192,   174,
     175,   176,   177,   178,   179,   181,   221,   100,   101,   102,
     103,   104,   185,   139,    95,    98,    99,   189,   131,   132,
     137,   113,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   237,   113,   114,   115,   116,
     138,   117,   224,   102,   103,   104,     3,   151,   218,   172,
       4,     5,   145,   260,   144,   113,   117,   182,     6,   183,
     205,   146,   209,   184,   190,   147,   213,   216,   215,   195,
     220,   222,   226,   242,   243,   117,   241,   245,   281,   252,
     262,   273,   210,   225,   274,   236,     9,   231,   233,   261,
      82,   173,   212,     0,     0,     0,   239,     0,     0,     0,
       0,     0,   244,     0,     0,     0,     0,     0,   247,     0,
     249,     0,     0,     0,     0,   257,     0,     0,   259,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   266,     0,     0,   268,     0,   270,     0,     0,     0,
       0,     0,   275,     0,    -7,     1,     0,     0,    -7,    -7,
      -7,    -7,   280,    -7,    -7,     0,    -7,    -7,    -7,    -7,
      -7,     0,    -7,     0,    -7,    -7,     0,    -7,    -7,     0,
       0,     0,     0,     0,     0,     0,    -7,     0,    -7,     0,
       0,     0,     0,     0,     0,     0,    -7,    -7,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,    -7,
       0,     0,   113,   114,    -7,    -7,    -7,    -7,    -7,    -7,
      -7,    -7,     0,    -7,    -7,    -7,    -7,    -7,    10,     0,
       0,     0,   117,    11,    12,     0,    13,    14,     0,     0,
      15,    16,    17,    18,     0,    19,     0,    20,    21,     0,
      22,    23,     0,     0,     0,     0,     0,     0,     0,    24,
       0,    25,     0,   191,     0,     0,     0,     0,     0,    26,
      27,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,    28,     0,     0,   113,     0,    29,    30,    31,
      32,    33,    34,    35,    36,     0,    37,    38,    39,    40,
      41,    10,     0,     0,     0,   117,    11,    12,     0,    13,
      14,     0,     0,    15,    16,    17,    18,     0,    19,     0,
      20,    21,     0,    22,    23,     0,     0,     0,     0,     0,
       0,     0,    24,     0,    25,     0,     0,   217,     0,     0,
       0,     0,    26,    27,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    28,     0,     0,     0,     0,
      29,    30,    31,    32,    33,    34,    35,    36,     0,    37,
      38,    39,    40,    41,    10,     0,     0,     0,     0,    11,
      12,     0,    13,    14,     0,     0,    15,    16,    17,    18,
       0,    19,     0,    20,    21,     0,    22,    23,     0,     0,
       0,     0,     0,     0,     0,    24,     0,    25,     0,     0,
     240,     0,     0,     0,     0,    26,    27,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    28,     0,
       0,     0,     0,    29,    30,    31,    32,    33,    34,    35,
      36,     0,    37,    38,    39,    40,    41,    10,     0,     0,
       0,     0,    11,    12,     0,    13,    14,     0,     0,    15,
      16,    17,    18,     0,    19,     0,    20,    21,     0,    22,
      23,     0,     0,     0,     0,     0,     0,     0,    24,     0,
      25,     0,     0,     0,     0,     0,     0,     0,    26,    27,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    28,     0,     0,     0,     0,    29,    30,    31,    32,
      33,    34,    35,    36,    11,    37,    38,    39,    40,    41,
       0,    15,    16,    17,    18,     0,    19,     0,    20,    21,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      24,     0,    25,     0,     0,     0,     0,     0,     0,     0,
      26,    27,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    28,     0,     0,     0,     0,    29,    30,
      31,    32,     0,     0,    35,    36,   141,    11,     0,     0,
       0,    41,     0,     0,    15,    16,    17,    18,     0,    19,
       0,    20,    21,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    24,     0,    25,   229,     0,     0,     0,
      11,     0,   230,    26,    27,     0,     0,    15,    16,    17,
      18,     0,    19,     0,    20,    21,    28,     0,     0,     0,
       0,    29,    30,    31,     0,     0,    24,     0,    25,   255,
       0,     0,    11,     0,    41,   256,    26,    27,     0,    15,
      16,    17,    18,     0,    19,     0,    20,    21,     0,    28,
       0,     0,     0,     0,    29,    30,    31,     0,    24,     0,
      25,    81,     0,     0,    11,     0,     0,    41,    26,    27,
       0,    15,    16,    17,    18,     0,    19,     0,    20,   133,
       0,    28,     0,     0,     0,     0,    29,    30,    31,     0,
      24,   134,    25,     0,     0,     0,     0,    11,     0,    41,
      26,    27,     0,     0,    15,    16,    17,    18,     0,    19,
       0,    20,    21,    28,     0,     0,     0,     0,    29,    30,
      31,     0,     0,    24,     0,    25,     0,     0,     0,     0,
      11,    41,   180,    26,    27,     0,     0,    15,    16,    17,
      18,     0,    19,     0,    20,    21,    28,     0,     0,     0,
       0,    29,    30,    31,     0,     0,    24,     0,    25,     0,
       0,     0,     0,    11,    41,   204,    26,    27,     0,     0,
      15,    16,    17,    18,     0,    19,     0,    20,    21,    28,
       0,     0,     0,     0,    29,    30,    31,     0,     0,    24,
       0,    25,     0,     0,     0,     0,    11,    41,   208,    26,
      27,     0,     0,    15,    16,    17,    18,     0,    19,     0,
      20,    21,    28,     0,     0,     0,     0,    29,    30,    31,
       0,     0,    24,     0,    25,     0,     0,     0,    11,     0,
      41,   232,    26,    27,     0,    15,    16,    17,    18,     0,
      19,     0,    20,    21,     0,    28,     0,     0,     0,     0,
      29,    30,    31,     0,    24,     0,    25,   246,     0,     0,
      11,     0,     0,    41,    26,    27,     0,    15,    16,    17,
      18,     0,    19,     0,    20,    21,     0,    28,     0,     0,
       0,     0,    29,    30,    31,     0,    24,     0,    25,   248,
       0,     0,    11,     0,     0,    41,    26,    27,     0,    15,
      16,    17,    18,     0,    19,     0,    20,    21,     0,    28,
       0,     0,     0,     0,    29,    30,    31,     0,    24,     0,
      25,   265,     0,     0,    11,     0,     0,    41,    26,    27,
       0,    15,    16,    17,    18,     0,    19,     0,    20,    21,
       0,    28,     0,     0,     0,     0,    29,    30,    31,     0,
      24,     0,    25,   267,     0,     0,    11,     0,     0,    41,
      26,    27,     0,    15,    16,    17,    18,     0,    19,     0,
      20,    21,     0,    28,     0,     0,     0,     0,    29,    30,
      31,     0,    24,     0,    25,   269,     0,     0,    11,     0,
       0,    41,    26,    27,     0,    15,    16,    17,    18,     0,
      19,     0,    20,    21,     0,    28,     0,     0,     0,     0,
      29,    30,    31,     0,    24,     0,    25,   279,     0,     0,
      11,     0,     0,    41,    26,    27,     0,    15,    16,    17,
      18,     0,    19,     0,    20,    21,     0,    28,     0,     0,
       0,     0,    29,    30,    31,     0,    24,     0,    25,     0,
       0,     0,    11,     0,     0,    41,    26,    27,     0,    15,
      16,    17,    18,     0,    19,     0,    20,   214,     0,    28,
       0,     0,     0,     0,    29,    30,    31,     0,    24,     0,
      25,     0,     0,     0,     0,     0,     0,    41,    26,    27,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    28,     0,     0,     0,     0,    29,    30,    31,     0,
       0,   196,     0,     0,     0,     0,     0,     0,     0,    41,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,     0,   113,   114,   115,   116,     0,     0,
       0,     0,     0,     0,     0,     0,   197,     0,     0,     0,
       0,     0,     0,     0,   117,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,     0,   113,
     114,   115,   116,     0,     0,     0,     0,     0,     0,     0,
       0,   201,     0,     0,     0,     0,     0,     0,     0,   117,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,     0,   113,   114,   115,   116,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   206,
       0,     0,     0,     0,   117,   207,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,     0,
     113,   114,   115,   116,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   227,     0,     0,     0,     0,
     117,   228,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,     0,   113,   114,   115,   116,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   234,     0,     0,     0,     0,   117,   235,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,     0,   113,   114,   115,   116,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   250,     0,     0,
       0,     0,   117,   251,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,     0,   113,   114,
     115,   116,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   253,     0,     0,     0,     0,   117,   254,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,     0,   113,   114,   115,   116,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   271,
       0,     0,     0,     0,   117,   272,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,     0,
     113,   114,   115,   116,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   263,     0,     0,     0,     0,     0,
     117,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,     0,   113,   114,   115,   116,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   264,
       0,     0,     0,     0,     0,   117,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,     0,
     113,   114,   115,   116,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   276,     0,     0,     0,     0,     0,
     117,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,     0,   113,   114,   115,   116,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   277,
       0,     0,     0,     0,     0,   117,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,     0,
     113,   114,   115,   116,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   278,     0,     0,     0,     0,     0,
     117,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,     0,   113,   114,   115,   116,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   282,
       0,     0,     0,     0,     0,   117,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,     0,
     113,   114,   115,   116,     0,     0,   203,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     117,   113,   114,   115,   116,     0,     0,     0,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
       0,   117,   113,   114,   115,   116,     0,     0,     0,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
       0,     0,   117,   113,   114,   115,   116,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,     0,     0,
       0,   113,   114,   117,   116,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   117
};

static const yytype_int16 yycheck[] =
{
      20,    92,    23,    92,    24,    25,    26,    27,    28,    29,
      92,     8,    32,    33,    92,    23,    36,    33,    32,    21,
      40,    30,    31,    21,    40,    22,    69,    41,    25,    26,
      27,    28,    29,     8,    21,    33,    32,    34,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    72,    56,    57,    58,    59,    76,    56,    21,    34,
      32,    21,    35,    71,    61,    62,    33,    40,    21,    41,
      33,    32,    76,    40,    94,    95,    32,    76,    98,    21,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   141,   119,
     120,   121,   122,   123,   124,   125,   195,    42,    43,    44,
      45,    46,   132,    33,    32,    32,     4,   137,    21,    40,
      22,    56,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    33,    56,    57,    58,    59,
      40,    76,    40,    44,    45,    46,     0,    32,   191,    21,
       4,     5,   243,   242,   243,    56,    76,    34,    12,     4,
     180,   243,   182,    32,    21,   243,   186,    22,   188,    39,
      67,    22,    35,    32,    39,    76,   219,    21,    39,    35,
      22,    33,   183,   203,    33,   210,     5,   207,   208,   243,
      25,   118,   184,    -1,    -1,    -1,   216,    -1,    -1,    -1,
      -1,    -1,   222,    -1,    -1,    -1,    -1,    -1,   228,    -1,
     230,    -1,    -1,    -1,    -1,   235,    -1,    -1,   238,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   251,    -1,    -1,   254,    -1,   256,    -1,    -1,    -1,
      -1,    -1,   262,    -1,     0,     1,    -1,    -1,     4,     5,
       6,     7,   272,     9,    10,    -1,    12,    13,    14,    15,
      16,    -1,    18,    -1,    20,    21,    -1,    23,    24,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    55,
      -1,    -1,    56,    57,    60,    61,    62,    63,    64,    65,
      66,    67,    -1,    69,    70,    71,    72,    73,     1,    -1,
      -1,    -1,    76,     6,     7,    -1,     9,    10,    -1,    -1,
      13,    14,    15,    16,    -1,    18,    -1,    20,    21,    -1,
      23,    24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      -1,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    42,
      43,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    55,    -1,    -1,    56,    -1,    60,    61,    62,
      63,    64,    65,    66,    67,    -1,    69,    70,    71,    72,
      73,     1,    -1,    -1,    -1,    76,     6,     7,    -1,     9,
      10,    -1,    -1,    13,    14,    15,    16,    -1,    18,    -1,
      20,    21,    -1,    23,    24,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    -1,    34,    -1,    -1,    37,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,    -1,    -1,
      60,    61,    62,    63,    64,    65,    66,    67,    -1,    69,
      70,    71,    72,    73,     1,    -1,    -1,    -1,    -1,     6,
       7,    -1,     9,    10,    -1,    -1,    13,    14,    15,    16,
      -1,    18,    -1,    20,    21,    -1,    23,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    -1,    34,    -1,    -1,
      37,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,
      -1,    -1,    -1,    60,    61,    62,    63,    64,    65,    66,
      67,    -1,    69,    70,    71,    72,    73,     1,    -1,    -1,
      -1,    -1,     6,     7,    -1,     9,    10,    -1,    -1,    13,
      14,    15,    16,    -1,    18,    -1,    20,    21,    -1,    23,
      24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    -1,    -1,    -1,    -1,    60,    61,    62,    63,
      64,    65,    66,    67,     6,    69,    70,    71,    72,    73,
      -1,    13,    14,    15,    16,    -1,    18,    -1,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    -1,    -1,    -1,    -1,    60,    61,
      62,    63,    -1,    -1,    66,    67,    68,     6,    -1,    -1,
      -1,    73,    -1,    -1,    13,    14,    15,    16,    -1,    18,
      -1,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    -1,    34,    35,    -1,    -1,    -1,
       6,    -1,    41,    42,    43,    -1,    -1,    13,    14,    15,
      16,    -1,    18,    -1,    20,    21,    55,    -1,    -1,    -1,
      -1,    60,    61,    62,    -1,    -1,    32,    -1,    34,    35,
      -1,    -1,     6,    -1,    73,    41,    42,    43,    -1,    13,
      14,    15,    16,    -1,    18,    -1,    20,    21,    -1,    55,
      -1,    -1,    -1,    -1,    60,    61,    62,    -1,    32,    -1,
      34,    35,    -1,    -1,     6,    -1,    -1,    73,    42,    43,
      -1,    13,    14,    15,    16,    -1,    18,    -1,    20,    21,
      -1,    55,    -1,    -1,    -1,    -1,    60,    61,    62,    -1,
      32,    33,    34,    -1,    -1,    -1,    -1,     6,    -1,    73,
      42,    43,    -1,    -1,    13,    14,    15,    16,    -1,    18,
      -1,    20,    21,    55,    -1,    -1,    -1,    -1,    60,    61,
      62,    -1,    -1,    32,    -1,    34,    -1,    -1,    -1,    -1,
       6,    73,    41,    42,    43,    -1,    -1,    13,    14,    15,
      16,    -1,    18,    -1,    20,    21,    55,    -1,    -1,    -1,
      -1,    60,    61,    62,    -1,    -1,    32,    -1,    34,    -1,
      -1,    -1,    -1,     6,    73,    41,    42,    43,    -1,    -1,
      13,    14,    15,    16,    -1,    18,    -1,    20,    21,    55,
      -1,    -1,    -1,    -1,    60,    61,    62,    -1,    -1,    32,
      -1,    34,    -1,    -1,    -1,    -1,     6,    73,    41,    42,
      43,    -1,    -1,    13,    14,    15,    16,    -1,    18,    -1,
      20,    21,    55,    -1,    -1,    -1,    -1,    60,    61,    62,
      -1,    -1,    32,    -1,    34,    -1,    -1,    -1,     6,    -1,
      73,    41,    42,    43,    -1,    13,    14,    15,    16,    -1,
      18,    -1,    20,    21,    -1,    55,    -1,    -1,    -1,    -1,
      60,    61,    62,    -1,    32,    -1,    34,    35,    -1,    -1,
       6,    -1,    -1,    73,    42,    43,    -1,    13,    14,    15,
      16,    -1,    18,    -1,    20,    21,    -1,    55,    -1,    -1,
      -1,    -1,    60,    61,    62,    -1,    32,    -1,    34,    35,
      -1,    -1,     6,    -1,    -1,    73,    42,    43,    -1,    13,
      14,    15,    16,    -1,    18,    -1,    20,    21,    -1,    55,
      -1,    -1,    -1,    -1,    60,    61,    62,    -1,    32,    -1,
      34,    35,    -1,    -1,     6,    -1,    -1,    73,    42,    43,
      -1,    13,    14,    15,    16,    -1,    18,    -1,    20,    21,
      -1,    55,    -1,    -1,    -1,    -1,    60,    61,    62,    -1,
      32,    -1,    34,    35,    -1,    -1,     6,    -1,    -1,    73,
      42,    43,    -1,    13,    14,    15,    16,    -1,    18,    -1,
      20,    21,    -1,    55,    -1,    -1,    -1,    -1,    60,    61,
      62,    -1,    32,    -1,    34,    35,    -1,    -1,     6,    -1,
      -1,    73,    42,    43,    -1,    13,    14,    15,    16,    -1,
      18,    -1,    20,    21,    -1,    55,    -1,    -1,    -1,    -1,
      60,    61,    62,    -1,    32,    -1,    34,    35,    -1,    -1,
       6,    -1,    -1,    73,    42,    43,    -1,    13,    14,    15,
      16,    -1,    18,    -1,    20,    21,    -1,    55,    -1,    -1,
      -1,    -1,    60,    61,    62,    -1,    32,    -1,    34,    -1,
      -1,    -1,     6,    -1,    -1,    73,    42,    43,    -1,    13,
      14,    15,    16,    -1,    18,    -1,    20,    21,    -1,    55,
      -1,    -1,    -1,    -1,    60,    61,    62,    -1,    32,    -1,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    73,    42,    43,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    -1,    -1,    -1,    -1,    60,    61,    62,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    -1,    56,    57,    58,    59,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    76,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    -1,    56,
      57,    58,    59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    -1,    56,    57,    58,    59,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,
      -1,    -1,    -1,    -1,    76,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    -1,
      56,    57,    58,    59,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    35,    -1,    -1,    -1,    -1,
      76,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    -1,    56,    57,    58,    59,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    35,    -1,    -1,    -1,    -1,    76,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    -1,    56,    57,    58,    59,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,    -1,
      -1,    -1,    76,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    -1,    56,    57,
      58,    59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    35,    -1,    -1,    -1,    -1,    76,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    -1,    56,    57,    58,    59,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,
      -1,    -1,    -1,    -1,    76,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    -1,
      56,    57,    58,    59,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    35,    -1,    -1,    -1,    -1,    -1,
      76,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    -1,    56,    57,    58,    59,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,
      -1,    -1,    -1,    -1,    -1,    76,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    -1,
      56,    57,    58,    59,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    35,    -1,    -1,    -1,    -1,    -1,
      76,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    -1,    56,    57,    58,    59,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,
      -1,    -1,    -1,    -1,    -1,    76,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    -1,
      56,    57,    58,    59,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    35,    -1,    -1,    -1,    -1,    -1,
      76,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    -1,    56,    57,    58,    59,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,
      -1,    -1,    -1,    -1,    -1,    76,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    -1,
      56,    57,    58,    59,    -1,    -1,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      76,    56,    57,    58,    59,    -1,    -1,    -1,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      -1,    76,    56,    57,    58,    59,    -1,    -1,    -1,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      -1,    -1,    76,    56,    57,    58,    59,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    -1,    -1,
      -1,    56,    57,    76,    59,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    76
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,    78,     0,     4,     5,    12,    83,    82,    83,
       1,     6,     7,     9,    10,    13,    14,    15,    16,    18,
      20,    21,    23,    24,    32,    34,    42,    43,    55,    60,
      61,    62,    63,    64,    65,    66,    67,    69,    70,    71,
      72,    73,    85,    88,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   104,   105,   107,   111,
     112,   113,   114,   115,   117,   118,   120,   121,   122,    79,
      21,    21,    23,    71,    92,   103,    32,    21,   106,   106,
      92,    35,   103,    92,    92,    92,    92,    21,   100,   100,
      92,    92,    32,    92,    32,    32,    21,    92,    32,     4,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    56,    57,    58,    59,    76,     8,    22,
      25,    26,    27,    28,    29,    34,    61,    62,   110,    85,
     106,    21,    40,    21,    33,    92,   108,    22,    40,    33,
      35,    68,    86,    87,    91,   111,   114,   115,   116,    92,
      92,    32,    92,    80,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    21,   107,    92,    92,    92,    92,    92,    92,
      41,    92,    34,     4,    32,    92,    41,    33,    40,    92,
      21,    36,    85,    89,   119,    39,    33,    33,    21,    33,
     109,    33,    81,    41,    41,    92,    35,    41,    41,    92,
      80,    33,   109,    92,    21,    92,    22,    37,    85,    90,
      67,    91,    22,    33,    40,    92,    35,    35,    41,    35,
      41,    92,    41,    92,    35,    41,    81,    33,    41,    92,
      37,    85,    32,    39,    92,    21,    35,    92,    35,    92,
      35,    41,    35,    35,    41,    35,    41,    92,    84,    92,
      91,    86,    22,    35,    35,    35,    92,    35,    92,    35,
      92,    35,    41,    33,    33,    92,    35,    35,    35,    35,
      92,    39,    35
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    77,    79,    78,    78,    78,    78,    78,    78,    80,
      81,    82,    83,    84,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    86,
      86,    86,    86,    86,    86,    87,    88,    89,    89,    90,
      90,    91,    92,    92,    92,    92,    92,    92,    92,    93,
      93,    94,    94,    94,    94,    94,    94,    95,    95,    95,
      95,    96,    96,    96,    96,    96,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    98,    99,    99,    99,    99,    99,
      99,    99,    99,   100,   100,   100,   100,   101,   101,   102,
     103,   103,   104,   104,   105,   106,   106,   106,   106,   107,
     107,   108,   108,   108,   108,   109,   109,   109,   109,   110,
     110,   110,   110,   110,   110,   110,   110,   110,   110,   110,
     110,   110,   110,   110,   110,   110,   110,   110,   110,   110,
     110,   111,   112,   113,   114,   115,   115,   116,   117,   117,
     118,   118,   119,   119,   120,   120,   120,   120,   121,   122,
     122
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     8,     6,     3,     3,     0,     1,     0,
       0,     0,     0,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     1,     3,     2,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     3,     3,     3,     3,     2,     2,     2,
       2,     2,     2,     3,     2,     2,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     5,     2,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     3,     2,     3,     3,     2,     4,
       1,     3,     2,     3,     2,     1,     3,     3,     5,     4,
       3,     1,     3,     3,     5,     1,     3,     3,     5,     3,
       5,     6,     7,     4,     5,     6,     4,     5,     6,     4,
       4,     6,     7,     8,     5,     6,     7,     5,     6,     7,
       5,     2,     1,     2,     8,     2,     1,     7,     1,     4,
       1,     4,     1,     1,     5,     4,     6,     5,     2,     1,
       2
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* @1: %empty  */
#line 166 "bello.y"
                                           {(yyval.intVl) = 0; }
#line 1987 "y.tab.c"
    break;

  case 6: /* statement: statement END_FILE close_execute_last_statement  */
#line 172 "bello.y"
                                                       { return 0; }
#line 1993 "y.tab.c"
    break;

  case 8: /* statement: error  */
#line 174 "bello.y"
            { yyerrok; }
#line 1999 "y.tab.c"
    break;

  case 9: /* check_indent: %empty  */
#line 178 "bello.y"
      { 
        if (((yyvsp[(-2) - (0)].intVl))>lstIndt+1) 
        {
           yyclearin;
           yyerrok;
        }
      }
#line 2011 "y.tab.c"
    break;

  case 10: /* build_statement_stack: %empty  */
#line 188 "bello.y"
    {   
        int indt = (yyvsp[(-3) - (0)].intVl);

        StmtStrc* stmt=(yyvsp[(-2) - (0)].stmt);

        stmt->indt= indt;

        //如果是当前句的indent == 上1句的indent + 1，则检查上1句是否有语句体，如上1句允许语句体，语句入栈
        if (indt == lstIndt + 1 )
        {
            if (stmtStk.back()->alwSubStmt)
            {
                //语句入栈
                pshStmt(indt, stmt);
            }
            else
            {
                yyerrok;
            }
        }
        else if (indt == lstIndt)
        {
            //语句入栈
            pshStmt(indt, stmt);

        }
        else if (indt < lstIndt)
        {
            int nowIndt = indt;

            int idx;

            //折叠输入的句子以上的缩进大于该输入的句子，结果为栈中缩进最大的句子为输入的句子及其以上同等缩进的句子
            fldStmt(nowIndt);

            //输入的句子入栈
            pshStmt(indt, stmt);
            
        }

        lstIndt = indt;
    }
#line 2058 "y.tab.c"
    break;

  case 11: /* close_execute_statement: %empty  */
#line 234 "bello.y"
    { 
        //如果是从源代码输入，则不执行此动作
        if (prsStt==2)
        {
            break;
        }

        //如果存在上一条语句
        if (stmtStk.size()>0)
        {

            if (stmtStk.back()->indt == 0 && stmtStk.back()->alwSubStmt)
            {
                yyclearin;
                yyerrok;
                
            }

            //如果上1条语句为顶级语句且不允许子语句，则无动作
            if (stmtStk.back()->indt == 0 && stmtStk.back()->alwSubStmt==0)
            {
                
            }

            printf("执行语句 %d\n", stmtStk.size());

            //如果上1条语句为子语句，则闭合上1条顶级语句
            if (stmtStk.back()->indt > 0)
            {
                fldStmt(0);
            }

            for (int i=0;i<stmtStk.size();i++)
            {
                exctStmt(envr, stmtStk.at(i)->stmt);

                lstStmt = stmtStk.at(i)->stmt;
                //stmtStk.pop_back();
            }

            stmtStk.clear();

        }

    }
#line 2108 "y.tab.c"
    break;

  case 12: /* close_execute_last_statement: %empty  */
#line 283 "bello.y"
    {
        //如果是命令行读取数据，则退出此动作
        if (prsStt==1)
        {
            break;
        }

        //如果存在上一条语句
        if (stmtStk.size()>0)
        {
            //需要闭合上1条顶级语句的子语句，并执行该顶级语句

            //如果存在上1条语句，该语句允许子语句
            if (stmtStk.back()->indt == 0 && stmtStk.back()->alwSubStmt)
            {
                yyclearin;
                yyerrok;
                
            }
            // //如果上1条语句为顶级语句且不允许子语句，则执行上一条语句
            // if (stmtStk.back()->indt == 0 && stmtStk.back()->alwSubStmt==0)
            // {
            //     //执行上一条顶级语句
            //     exctStmt(envr, stmtStk.back()->stmt);
            //     stmtStk.pop_back();
            // }

            //如果上1条语句为子语句，则闭合上1条顶级语句，并执行该顶级语句
            if (stmtStk.back()->indt > 0)
            {

                fldStmt(0);

                // 如果是双主句语句的情况


                //执行上一条顶级语句
                exctStmt(envr, stmtStk.back()->stmt);
                stmtStk.pop_back();

            }

        }
    }
#line 2157 "y.tab.c"
    break;

  case 13: /* execute_single_statement: %empty  */
#line 330 "bello.y"
    { 
        //printf("alw sub stmt: %d\n", stmtStk.back()->alwSubStmt);

        //只在无缩进且不允许第2主句的情况下执行语句
        if ((yyvsp[(-4) - (0)].intVl) != 0 || stmtStk.back()->alwSubStmt == 1 || chkStmtAlwScndStmt(stmtStk.back()->stmt) )
        {
            break;
        }
        else
        {
            exctStmt(envr, stmtStk.back()->stmt);
            stmtStk.pop_back();
        }
  
    }
#line 2177 "y.tab.c"
    break;

  case 14: /* single_statement: expression_statement  */
#line 348 "bello.y"
                           { (yyval.stmt)=(yyvsp[0].stmt); }
#line 2183 "y.tab.c"
    break;

  case 15: /* single_statement: if_statement  */
#line 349 "bello.y"
                   { (yyval.stmt)=(yyvsp[0].stmt); }
#line 2189 "y.tab.c"
    break;

  case 16: /* single_statement: else_statement  */
#line 350 "bello.y"
                     { (yyval.stmt)=(yyvsp[0].stmt); }
#line 2195 "y.tab.c"
    break;

  case 17: /* single_statement: elseif_statement  */
#line 351 "bello.y"
                       { (yyval.stmt)=(yyvsp[0].stmt); }
#line 2201 "y.tab.c"
    break;

  case 18: /* single_statement: for_statement  */
#line 352 "bello.y"
                    { (yyval.stmt)=(yyvsp[0].stmt); }
#line 2207 "y.tab.c"
    break;

  case 19: /* single_statement: while_statement  */
#line 353 "bello.y"
                      { (yyval.stmt)=(yyvsp[0].stmt); }
#line 2213 "y.tab.c"
    break;

  case 20: /* single_statement: break_statement  */
#line 355 "bello.y"
                      { (yyval.stmt)=(yyvsp[0].stmt); }
#line 2219 "y.tab.c"
    break;

  case 21: /* single_statement: continue_statement  */
#line 356 "bello.y"
                          { (yyval.stmt)=(yyvsp[0].stmt); }
#line 2225 "y.tab.c"
    break;

  case 22: /* single_statement: return_statement  */
#line 357 "bello.y"
                        { (yyval.stmt)=(yyvsp[0].stmt); }
#line 2231 "y.tab.c"
    break;

  case 23: /* single_statement: function_statement  */
#line 358 "bello.y"
                         { (yyval.stmt)=(yyvsp[0].stmt); }
#line 2237 "y.tab.c"
    break;

  case 24: /* single_statement: nop_statement  */
#line 359 "bello.y"
                    { (yyval.stmt)=(yyvsp[0].stmt); }
#line 2243 "y.tab.c"
    break;

  case 25: /* single_statement: var_statement  */
#line 360 "bello.y"
                     { (yyval.stmt) = (yyvsp[0].stmt);}
#line 2249 "y.tab.c"
    break;

  case 26: /* single_statement: global_statement  */
#line 361 "bello.y"
                        { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2255 "y.tab.c"
    break;

  case 27: /* single_statement: class_statement  */
#line 362 "bello.y"
                      { (yyval.stmt)= (yyvsp[0].stmt); }
#line 2261 "y.tab.c"
    break;

  case 28: /* single_statement: error  */
#line 364 "bello.y"
    { 
        (yyval.stmt)=bldNllStmt(); 
        yyclearin; 
        yyerrok; 
    }
#line 2271 "y.tab.c"
    break;

  case 35: /* null_statement: %empty  */
#line 382 "bello.y"
      { (yyval.stmt)=bldNllStmt(); }
#line 2277 "y.tab.c"
    break;

  case 36: /* nop_statement: NOP  */
#line 385 "bello.y"
          { (yyval.stmt)=bldNllStmt(); }
#line 2283 "y.tab.c"
    break;

  case 37: /* statement_block: LEFT_BRACE block_list RIGHT_BRACE  */
#line 388 "bello.y"
                                        { (yyval.stmt)=(yyvsp[-1].stmt); }
#line 2289 "y.tab.c"
    break;

  case 38: /* statement_block: LEFT_BRACE RIGHT_BRACE  */
#line 389 "bello.y"
                             { (yyval.stmt)=bldNllStmt(); }
#line 2295 "y.tab.c"
    break;

  case 39: /* block_list: single_statement  */
#line 393 "bello.y"
    { 
        (yyval.stmt)=bldStmtBlk(); 
        stmtBlkAdd((yyval.stmt), (yyvsp[0].stmt)); 
    }
#line 2304 "y.tab.c"
    break;

  case 40: /* block_list: block_list single_statement  */
#line 398 "bello.y"
    {
        (yyval.stmt) = stmtBlkAdd((yyvsp[-1].stmt) ,(yyvsp[0].stmt));
    }
#line 2312 "y.tab.c"
    break;

  case 41: /* expression_statement: expression  */
#line 405 "bello.y"
    { 
        (yyval.stmt)=bldExpStmt((yyvsp[0].exp)); 
    }
#line 2320 "y.tab.c"
    break;

  case 42: /* expression: value_expression  */
#line 410 "bello.y"
                       { (yyval.exp) = (yyvsp[0].exp); }
#line 2326 "y.tab.c"
    break;

  case 44: /* expression: unary_expression  */
#line 412 "bello.y"
                       { (yyval.exp) = (yyvsp[0].exp); }
#line 2332 "y.tab.c"
    break;

  case 45: /* expression: binary_expression  */
#line 413 "bello.y"
                        { (yyval.exp) = (yyvsp[0].exp); }
#line 2338 "y.tab.c"
    break;

  case 46: /* expression: array_expression  */
#line 414 "bello.y"
                       { (yyval.exp) = (yyvsp[0].exp); }
#line 2344 "y.tab.c"
    break;

  case 47: /* expression: new_array_expression  */
#line 415 "bello.y"
                           { (yyval.exp) = (yyvsp[0].exp); }
#line 2350 "y.tab.c"
    break;

  case 48: /* expression: shortcut_expression  */
#line 416 "bello.y"
                          { (yyval.exp) = (yyvsp[0].exp); }
#line 2356 "y.tab.c"
    break;

  case 51: /* assign_expression: lvalue_expression ASSIGN expression  */
#line 423 "bello.y"
                                          { (yyval.exp)=bldAsnExp((yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2362 "y.tab.c"
    break;

  case 52: /* assign_expression: lvalue_expression ADD_ASSIGN expression  */
#line 424 "bello.y"
                                              { (yyval.exp)=bldAsnExp((yyvsp[-2].exp), bldBnrExp(OprEnm::Add, (yyvsp[-2].exp), (yyvsp[0].exp))); }
#line 2368 "y.tab.c"
    break;

  case 53: /* assign_expression: lvalue_expression SUB_ASSIGN expression  */
#line 425 "bello.y"
                                              { (yyval.exp)=bldAsnExp((yyvsp[-2].exp), bldBnrExp(OprEnm::Sub, (yyvsp[-2].exp), (yyvsp[0].exp))); }
#line 2374 "y.tab.c"
    break;

  case 54: /* assign_expression: lvalue_expression MUL_ASSIGN expression  */
#line 426 "bello.y"
                                              { (yyval.exp)=bldAsnExp((yyvsp[-2].exp), bldBnrExp(OprEnm::Mul, (yyvsp[-2].exp), (yyvsp[0].exp))); }
#line 2380 "y.tab.c"
    break;

  case 55: /* assign_expression: lvalue_expression DIV_ASSIGN expression  */
#line 427 "bello.y"
                                              { (yyval.exp)=bldAsnExp((yyvsp[-2].exp), bldBnrExp(OprEnm::Div, (yyvsp[-2].exp), (yyvsp[0].exp))); }
#line 2386 "y.tab.c"
    break;

  case 56: /* assign_expression: lvalue_expression MOD_ASSIGN expression  */
#line 428 "bello.y"
                                              { (yyval.exp)=bldAsnExp((yyvsp[-2].exp), bldBnrExp(OprEnm::Asn, (yyvsp[-2].exp), (yyvsp[0].exp))); }
#line 2392 "y.tab.c"
    break;

  case 57: /* self_operation_expression: INCREMENT lvalue_expression  */
#line 432 "bello.y"
                                  { (yyval.exp)=bldUnrExp(OprEnm::PfxInc, (yyvsp[0].exp)); }
#line 2398 "y.tab.c"
    break;

  case 58: /* self_operation_expression: DECREMENT lvalue_expression  */
#line 433 "bello.y"
                                  { (yyval.exp)=bldUnrExp(OprEnm::PfxDec, (yyvsp[0].exp)); }
#line 2404 "y.tab.c"
    break;

  case 59: /* self_operation_expression: lvalue_expression INCREMENT  */
#line 434 "bello.y"
                                  { (yyval.exp)=bldUnrExp(OprEnm::SfxInc, (yyvsp[-1].exp)); }
#line 2410 "y.tab.c"
    break;

  case 60: /* self_operation_expression: lvalue_expression DECREMENT  */
#line 435 "bello.y"
                                  { (yyval.exp)=bldUnrExp(OprEnm::SfxDec, (yyvsp[-1].exp)); }
#line 2416 "y.tab.c"
    break;

  case 61: /* unary_expression: SUB expression  */
#line 438 "bello.y"
                                      { (yyval.exp) = bldUnrExp(OprEnm::Ngtv, (yyvsp[0].exp)); }
#line 2422 "y.tab.c"
    break;

  case 62: /* unary_expression: ADD expression  */
#line 439 "bello.y"
                                     { (yyval.exp) = bldUnrExp(OprEnm::Pstv, (yyvsp[0].exp)); }
#line 2428 "y.tab.c"
    break;

  case 63: /* unary_expression: LEFT_PAREN expression RIGHT_PAREN  */
#line 440 "bello.y"
                                        { (yyval.exp)=(yyvsp[-1].exp); }
#line 2434 "y.tab.c"
    break;

  case 64: /* unary_expression: NOT expression  */
#line 441 "bello.y"
                     { printf("bld not exp\n"); (yyval.exp)=bldUnrExp(OprEnm::Not, (yyvsp[0].exp)); }
#line 2440 "y.tab.c"
    break;

  case 65: /* unary_expression: BIT_NOT expression  */
#line 442 "bello.y"
                         { (yyval.exp)=bldUnrExp(OprEnm::BNot, (yyvsp[0].exp)); }
#line 2446 "y.tab.c"
    break;

  case 66: /* binary_expression: expression ADD expression  */
#line 445 "bello.y"
                                { (yyval.exp)=bldBnrExp(OprEnm::Add, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2452 "y.tab.c"
    break;

  case 67: /* binary_expression: expression SUB expression  */
#line 446 "bello.y"
                                { (yyval.exp)=bldBnrExp(OprEnm::Sub, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2458 "y.tab.c"
    break;

  case 68: /* binary_expression: expression MUL expression  */
#line 447 "bello.y"
                                { (yyval.exp)=bldBnrExp(OprEnm::Mul, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2464 "y.tab.c"
    break;

  case 69: /* binary_expression: expression DIV expression  */
#line 448 "bello.y"
                                { (yyval.exp)=bldBnrExp(OprEnm::Div, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2470 "y.tab.c"
    break;

  case 70: /* binary_expression: expression MOD expression  */
#line 449 "bello.y"
                                { (yyval.exp)=bldBnrExp(OprEnm::Mod, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2476 "y.tab.c"
    break;

  case 71: /* binary_expression: expression AND expression  */
#line 450 "bello.y"
                                { (yyval.exp)=bldBnrExp(OprEnm::And, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2482 "y.tab.c"
    break;

  case 72: /* binary_expression: expression OR expression  */
#line 451 "bello.y"
                               { (yyval.exp)=bldBnrExp(OprEnm::Or, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2488 "y.tab.c"
    break;

  case 73: /* binary_expression: expression XOR expression  */
#line 452 "bello.y"
                                { (yyval.exp)=bldBnrExp(OprEnm::Xor, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2494 "y.tab.c"
    break;

  case 74: /* binary_expression: expression EQ expression  */
#line 453 "bello.y"
                               { (yyval.exp)=bldBnrExp(OprEnm::Eq, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2500 "y.tab.c"
    break;

  case 75: /* binary_expression: expression NE expression  */
#line 454 "bello.y"
                               { (yyval.exp)=bldBnrExp(OprEnm::Ne, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2506 "y.tab.c"
    break;

  case 76: /* binary_expression: expression GT expression  */
#line 455 "bello.y"
                               { (yyval.exp)=bldBnrExp(OprEnm::Gt, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2512 "y.tab.c"
    break;

  case 77: /* binary_expression: expression GE expression  */
#line 456 "bello.y"
                               { (yyval.exp)=bldBnrExp(OprEnm::Ge, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2518 "y.tab.c"
    break;

  case 78: /* binary_expression: expression LT expression  */
#line 457 "bello.y"
                               { (yyval.exp)=bldBnrExp(OprEnm::Lt, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2524 "y.tab.c"
    break;

  case 79: /* binary_expression: expression LE expression  */
#line 458 "bello.y"
                               { (yyval.exp)=bldBnrExp(OprEnm::Le, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2530 "y.tab.c"
    break;

  case 80: /* binary_expression: expression BIT_AND expression  */
#line 459 "bello.y"
                                    { (yyval.exp)=bldBnrExp(OprEnm::BAnd, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2536 "y.tab.c"
    break;

  case 81: /* binary_expression: expression BIT_OR expression  */
#line 460 "bello.y"
                                   { (yyval.exp)=bldBnrExp(OprEnm::BOr, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2542 "y.tab.c"
    break;

  case 82: /* binary_expression: expression BIT_XOR expression  */
#line 461 "bello.y"
                                    { (yyval.exp)=bldBnrExp(OprEnm::BXor, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2548 "y.tab.c"
    break;

  case 83: /* binary_expression: expression QM expression COLON expression  */
#line 462 "bello.y"
                                                { (yyval.exp) = bldTnrExp(OprEnm::Tnr, (yyvsp[-4].exp), (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2554 "y.tab.c"
    break;

  case 84: /* shortcut_expression: SHORTCUT_PRINTLN element_list  */
#line 466 "bello.y"
    {
        
    }
#line 2562 "y.tab.c"
    break;

  case 85: /* value_expression: INT_LTR  */
#line 471 "bello.y"
              { (yyval.exp)=bldIntValExp((yyvsp[0].intVl)); }
#line 2568 "y.tab.c"
    break;

  case 86: /* value_expression: FLT_LTR  */
#line 472 "bello.y"
              { (yyval.exp)=bldFltValExp((yyvsp[0].fltVl)); }
#line 2574 "y.tab.c"
    break;

  case 87: /* value_expression: BLN_LTR  */
#line 473 "bello.y"
              { (yyval.exp)=bldBlnValExp((yyvsp[0].blnVl)); }
#line 2580 "y.tab.c"
    break;

  case 88: /* value_expression: STR_LTR  */
#line 474 "bello.y"
              { (yyval.exp)=bldStrValExp((yyvsp[0].strVl)); }
#line 2586 "y.tab.c"
    break;

  case 89: /* value_expression: NLL_LTR  */
#line 475 "bello.y"
              { (yyval.exp)=bldNllValExp(); }
#line 2592 "y.tab.c"
    break;

  case 92: /* value_expression: NEW IDENTIFER  */
#line 478 "bello.y"
                    { (yyval.exp)= bldNewExp((yyvsp[0].idtf)); }
#line 2598 "y.tab.c"
    break;

  case 93: /* lvalue_expression: IDENTIFER  */
#line 481 "bello.y"
                { (yyval.exp)= bldLvlExp(bldVrbExp((yyvsp[0].idtf))); }
#line 2604 "y.tab.c"
    break;

  case 94: /* lvalue_expression: lvalue_expression DOT IDENTIFER  */
#line 483 "bello.y"
    {
        LvlExpStrc* lvl = static_cast<LvlExpStrc*>((yyvsp[-2].exp));
        (yyval.exp) = lvl;

        //寻找LvlExpStrc链最末尾的结构体
        while (lvl->hasAtb==1)
        {
            lvl= static_cast<LvlExpStrc*>(lvl->atb);
        }

        lvl->hasAtb=1;
        lvl->atb=static_cast<LvlExpStrc*>(bldLvlExp(bldVrbExp((yyvsp[0].idtf))));

    }
#line 2623 "y.tab.c"
    break;

  case 95: /* lvalue_expression: lvalue_expression evaluate_list  */
#line 498 "bello.y"
    { 
        (yyval.exp)=(yyvsp[-1].exp); 
        bldLvlExpAdd((yyvsp[-1].exp), (yyvsp[0].evlLst)); 
    }
#line 2632 "y.tab.c"
    break;

  case 96: /* lvalue_expression: lvalue_expression DOT function_expression  */
#line 503 "bello.y"
    {

        printf("bld obj ivk exp\n");

        LvlExpStrc* lvl = static_cast<LvlExpStrc*>((yyvsp[-2].exp));

        (yyval.exp) = (yyvsp[-2].exp);

        //左值表达式设置调用对象方法的标志
        lvl->blnIvk = 1;

        while (lvl->hasAtb==1)
        {
            lvl = static_cast<LvlExpStrc*>(lvl->atb);
        }

        lvl->hasFcn=1;
        lvl->fcn=static_cast<FcnExpStrc*>((yyvsp[0].exp));

    }
#line 2657 "y.tab.c"
    break;

  case 97: /* array_expression: LEFT_QUAD element_list RIGHT_QUAD  */
#line 567 "bello.y"
    {
        (yyval.exp)= bldArrExp((yyvsp[-1].elmtLst));
    }
#line 2665 "y.tab.c"
    break;

  case 98: /* array_expression: LEFT_QUAD RIGHT_QUAD  */
#line 571 "bello.y"
    {
        (yyval.exp)= bldArrExp(bldElmtLst());
    }
#line 2673 "y.tab.c"
    break;

  case 99: /* new_array_expression: NEW_ARRAY LEFT_PAREN expression RIGHT_PAREN  */
#line 577 "bello.y"
    {
        (yyval.exp) = bldNewArrExp((yyvsp[-1].exp));
    }
#line 2681 "y.tab.c"
    break;

  case 100: /* element_list: expression  */
#line 583 "bello.y"
    { 
        (yyval.elmtLst)= bldElmtLst(); 
        elmtLstAdd((yyval.elmtLst), (yyvsp[0].exp)); 
    }
#line 2690 "y.tab.c"
    break;

  case 101: /* element_list: element_list COMMA expression  */
#line 588 "bello.y"
    {  
        (yyval.elmtLst)=(yyvsp[-2].elmtLst);  
        elmtLstAdd((yyval.elmtLst), (yyvsp[0].exp)); 
    }
#line 2699 "y.tab.c"
    break;

  case 102: /* var_statement: VAR assign_list  */
#line 596 "bello.y"
    { 
        //建立变量
        if (blnDfnCls==false)
        {
            (yyval.stmt)=bldVarStmt((yyvsp[0].asgnLst)); 
        }
        else
        {
            //$$=bldVarStmt(StmtEnm::ClsVar, $2);
        }
    }
#line 2715 "y.tab.c"
    break;

  case 103: /* var_statement: SHARED VAR assign_list  */
#line 608 "bello.y"
    {
        //需要是类定义状态
        if (blnDfnCls==1)
        {
            //$$ = bldVarStmt(StmtEnm::ClsShrVar, $3);
        } 
        else
        {
            yyclearin;   
            yyerrok;
        }
    }
#line 2732 "y.tab.c"
    break;

  case 104: /* global_statement: GLOBAL assign_list  */
#line 622 "bello.y"
                         { (yyval.stmt)=bldGlbStmt((yyvsp[0].asgnLst)); }
#line 2738 "y.tab.c"
    break;

  case 105: /* assign_list: IDENTIFER  */
#line 626 "bello.y"
    {
        (yyval.asgnLst)= bldAsgnLst();
        asgnLstAdd((yyval.asgnLst), bldVrbExp((yyvsp[0].idtf)), bldNllExp());
    }
#line 2747 "y.tab.c"
    break;

  case 106: /* assign_list: IDENTIFER ASSIGN expression  */
#line 631 "bello.y"
    {
        (yyval.asgnLst)= bldAsgnLst();
        asgnLstAdd((yyval.asgnLst), bldVrbExp((yyvsp[-2].idtf)), (yyvsp[0].exp));
    }
#line 2756 "y.tab.c"
    break;

  case 107: /* assign_list: assign_list COMMA IDENTIFER  */
#line 636 "bello.y"
    {
        (yyval.asgnLst)=(yyvsp[-2].asgnLst);
        asgnLstAdd((yyval.asgnLst), bldVrbExp((yyvsp[0].idtf)), bldNllExp());
    }
#line 2765 "y.tab.c"
    break;

  case 108: /* assign_list: assign_list COMMA IDENTIFER ASSIGN expression  */
#line 641 "bello.y"
    {
        (yyval.asgnLst)=(yyvsp[-4].asgnLst);
        asgnLstAdd((yyval.asgnLst), bldVrbExp((yyvsp[-2].idtf)), (yyvsp[0].exp));
    }
#line 2774 "y.tab.c"
    break;

  case 109: /* function_expression: IDENTIFER LEFT_PAREN argument_list RIGHT_PAREN  */
#line 652 "bello.y"
    {
        (yyval.exp)=bldFcnExp((yyvsp[-3].idtf), (yyvsp[-1].argLst));
    }
#line 2782 "y.tab.c"
    break;

  case 110: /* function_expression: IDENTIFER LEFT_PAREN RIGHT_PAREN  */
#line 656 "bello.y"
    {
        (yyval.exp)=bldFcnExp((yyvsp[-2].idtf), bldArgLst());
    }
#line 2790 "y.tab.c"
    break;

  case 111: /* argument_list: expression  */
#line 662 "bello.y"
    {
        (yyval.argLst)=bldArgLst();
        argLstAdd((yyval.argLst), (yyvsp[0].exp));
    }
#line 2799 "y.tab.c"
    break;

  case 112: /* argument_list: IDENTIFER COLON expression  */
#line 667 "bello.y"
    {
        (yyval.argLst) = bldArgLst();
        argLstAdd((yyval.argLst), bldVrbExp((yyvsp[-2].idtf)), (yyvsp[0].exp));
    }
#line 2808 "y.tab.c"
    break;

  case 113: /* argument_list: argument_list COMMA expression  */
#line 672 "bello.y"
    {
        (yyval.argLst) = (yyvsp[-2].argLst);
        argLstAdd((yyval.argLst), (yyvsp[0].exp));
    }
#line 2817 "y.tab.c"
    break;

  case 114: /* argument_list: argument_list COMMA IDENTIFER COLON expression  */
#line 677 "bello.y"
    {
        (yyval.argLst) = (yyvsp[-4].argLst);
        argLstAdd((yyval.argLst), bldVrbExp((yyvsp[-2].idtf)), (yyvsp[0].exp));
    }
#line 2826 "y.tab.c"
    break;

  case 115: /* parameter_list: IDENTIFER  */
#line 684 "bello.y"
    {
        (yyval.prmLst) = bldPrmLst();
        prmLstAdd((yyval.prmLst), bldVrbExp((yyvsp[0].idtf)));
    }
#line 2835 "y.tab.c"
    break;

  case 116: /* parameter_list: IDENTIFER ASSIGN expression  */
#line 689 "bello.y"
    {
        (yyval.prmLst) = bldPrmLst();
        prmLstAdd((yyval.prmLst), bldVrbExp((yyvsp[-2].idtf)), (yyvsp[0].exp));
    }
#line 2844 "y.tab.c"
    break;

  case 117: /* parameter_list: parameter_list COMMA IDENTIFER  */
#line 694 "bello.y"
    { 
        (yyval.prmLst) = (yyvsp[-2].prmLst);  
        prmLstAdd((yyval.prmLst), bldVrbExp((yyvsp[0].idtf)));
    }
#line 2853 "y.tab.c"
    break;

  case 118: /* parameter_list: parameter_list COMMA IDENTIFER ASSIGN expression  */
#line 699 "bello.y"
    {
        (yyval.prmLst) = (yyvsp[-4].prmLst);
        prmLstAdd((yyval.prmLst), bldVrbExp((yyvsp[-2].idtf)), (yyvsp[0].exp));
    }
#line 2862 "y.tab.c"
    break;

  case 119: /* evaluate_list: LEFT_QUAD expression RIGHT_QUAD  */
#line 708 "bello.y"
    {
        (yyval.evlLst) = bldAcsLst();
        acsLstIdxAdd((yyval.evlLst), (yyvsp[-1].exp));
    }
#line 2871 "y.tab.c"
    break;

  case 120: /* evaluate_list: LEFT_QUAD expression COLON expression RIGHT_QUAD  */
#line 713 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-3].exp), (yyvsp[-1].exp), bldIntValExp(1));
    }
#line 2880 "y.tab.c"
    break;

  case 121: /* evaluate_list: LEFT_QUAD expression COLON expression COLON RIGHT_QUAD  */
#line 718 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-4].exp), (yyvsp[-2].exp), bldIntValExp(1));
    }
#line 2889 "y.tab.c"
    break;

  case 122: /* evaluate_list: LEFT_QUAD expression COLON expression COLON expression RIGHT_QUAD  */
#line 723 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-5].exp), (yyvsp[-3].exp), (yyvsp[-1].exp));
    }
#line 2898 "y.tab.c"
    break;

  case 123: /* evaluate_list: LEFT_QUAD expression COLON RIGHT_QUAD  */
#line 728 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-2].exp), bldIntValExp(-1), bldIntValExp(1));
    }
#line 2907 "y.tab.c"
    break;

  case 124: /* evaluate_list: LEFT_QUAD expression COLON COLON RIGHT_QUAD  */
#line 733 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-3].exp), bldIntValExp(-1), bldIntValExp(1));
    }
#line 2916 "y.tab.c"
    break;

  case 125: /* evaluate_list: LEFT_QUAD expression COLON COLON expression RIGHT_QUAD  */
#line 738 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-4].exp), bldIntValExp(-1), (yyvsp[-1].exp));
    }
#line 2925 "y.tab.c"
    break;

  case 126: /* evaluate_list: LEFT_QUAD COLON expression RIGHT_QUAD  */
#line 743 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), bldIntValExp(0), (yyvsp[-1].exp), bldIntValExp(1));
    }
#line 2934 "y.tab.c"
    break;

  case 127: /* evaluate_list: LEFT_QUAD COLON expression COLON RIGHT_QUAD  */
#line 748 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), bldIntValExp(0), (yyvsp[-2].exp), bldIntValExp(1));
    }
#line 2943 "y.tab.c"
    break;

  case 128: /* evaluate_list: LEFT_QUAD COLON expression COLON expression RIGHT_QUAD  */
#line 753 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), bldIntValExp(0), (yyvsp[-3].exp), (yyvsp[-1].exp));
    }
#line 2952 "y.tab.c"
    break;

  case 129: /* evaluate_list: LEFT_QUAD COLON COLON RIGHT_QUAD  */
#line 758 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), bldIntValExp(0), bldIntValExp(-1), bldIntValExp(1));
    }
#line 2961 "y.tab.c"
    break;

  case 130: /* evaluate_list: evaluate_list LEFT_QUAD expression RIGHT_QUAD  */
#line 763 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-3].evlLst);
        acsLstIdxAdd((yyval.evlLst),(yyvsp[-1].exp));
    }
#line 2970 "y.tab.c"
    break;

  case 131: /* evaluate_list: evaluate_list LEFT_QUAD expression COLON expression RIGHT_QUAD  */
#line 768 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-5].evlLst);
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-3].exp), (yyvsp[-1].exp), bldIntValExp(1));
    }
#line 2979 "y.tab.c"
    break;

  case 132: /* evaluate_list: evaluate_list LEFT_QUAD expression COLON expression COLON RIGHT_QUAD  */
#line 773 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-6].evlLst);
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-4].exp), (yyvsp[-2].exp), bldIntValExp(1));
    }
#line 2988 "y.tab.c"
    break;

  case 133: /* evaluate_list: evaluate_list LEFT_QUAD expression COLON expression COLON expression RIGHT_QUAD  */
#line 778 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-7].evlLst);
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-5].exp), (yyvsp[-3].exp), (yyvsp[-1].exp));
    }
#line 2997 "y.tab.c"
    break;

  case 134: /* evaluate_list: evaluate_list LEFT_QUAD expression COLON RIGHT_QUAD  */
#line 783 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-4].evlLst);
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-2].exp), bldIntValExp(-1), bldIntValExp(1));
    }
#line 3006 "y.tab.c"
    break;

  case 135: /* evaluate_list: evaluate_list LEFT_QUAD expression COLON COLON RIGHT_QUAD  */
#line 788 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-5].evlLst);
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-3].exp), bldIntValExp(-1), bldIntValExp(1));
    }
#line 3015 "y.tab.c"
    break;

  case 136: /* evaluate_list: evaluate_list LEFT_QUAD expression COLON COLON expression RIGHT_QUAD  */
#line 793 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-6].evlLst);
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-4].exp), bldIntValExp(-1), (yyvsp[-1].exp));
    }
#line 3024 "y.tab.c"
    break;

  case 137: /* evaluate_list: evaluate_list LEFT_QUAD COLON expression RIGHT_QUAD  */
#line 798 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-4].evlLst);
        acsLstSlcAdd((yyval.evlLst), bldIntValExp(0), (yyvsp[-1].exp), bldIntValExp(1));
    }
#line 3033 "y.tab.c"
    break;

  case 138: /* evaluate_list: evaluate_list LEFT_QUAD COLON expression COLON RIGHT_QUAD  */
#line 803 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-5].evlLst);
        acsLstSlcAdd((yyval.evlLst), bldIntValExp(0), (yyvsp[-2].exp), bldIntValExp(1));
    }
#line 3042 "y.tab.c"
    break;

  case 139: /* evaluate_list: evaluate_list LEFT_QUAD COLON expression COLON expression RIGHT_QUAD  */
#line 808 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-6].evlLst);
        acsLstSlcAdd((yyval.evlLst), bldIntValExp(0), (yyvsp[-3].exp), (yyvsp[-1].exp));
    }
#line 3051 "y.tab.c"
    break;

  case 140: /* evaluate_list: evaluate_list LEFT_QUAD COLON COLON RIGHT_QUAD  */
#line 813 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-4].evlLst);
        acsLstSlcAdd((yyval.evlLst), bldIntValExp(0), bldIntValExp(-1), bldIntValExp(1));
    }
#line 3060 "y.tab.c"
    break;

  case 141: /* if_statement: IF expression  */
#line 831 "bello.y"
    {
        (yyval.stmt)=bldIfStmt((yyvsp[0].exp));
        //printf("bld if stmt\n");
    }
#line 3069 "y.tab.c"
    break;

  case 142: /* else_statement: ELSE  */
#line 847 "bello.y"
    {
        (yyval.stmt) = bldElsStmt();
    }
#line 3077 "y.tab.c"
    break;

  case 143: /* elseif_statement: ELSEIF expression  */
#line 853 "bello.y"
    {
        (yyval.stmt) = bldElifStmt((yyvsp[0].exp));
    }
#line 3085 "y.tab.c"
    break;

  case 144: /* for_statement: FOR LEFT_PAREN single_statement_no_semicolon SEMICOLON expression_statement SEMICOLON single_statement_no_semicolon RIGHT_PAREN  */
#line 869 "bello.y"
    {
        (yyval.stmt)= bldForStmt((yyvsp[-5].stmt), (yyvsp[-3].stmt), (yyvsp[-1].stmt));  
    }
#line 3093 "y.tab.c"
    break;

  case 145: /* while_statement: WHILE expression  */
#line 881 "bello.y"
    {
        (yyval.stmt) = bldWhlStmt((yyvsp[0].exp));
    }
#line 3101 "y.tab.c"
    break;

  case 146: /* while_statement: WHILE  */
#line 889 "bello.y"
    {
        (yyval.stmt) = bldWhlStmt();
    }
#line 3109 "y.tab.c"
    break;

  case 147: /* do_while_statement: DO structure_statement WHILE LEFT_PAREN expression_statement RIGHT_PAREN SEMICOLON  */
#line 895 "bello.y"
    {
        (yyval.stmt)= bldDoWhlStmt((yyvsp[-2].stmt), (yyvsp[-5].stmt));
    }
#line 3117 "y.tab.c"
    break;

  case 148: /* break_statement: BREAK  */
#line 900 "bello.y"
            { (yyval.stmt)= bldBrkStmt(bldIntValExp(1)); }
#line 3123 "y.tab.c"
    break;

  case 149: /* break_statement: BREAK LEFT_PAREN expression RIGHT_PAREN  */
#line 901 "bello.y"
                                              { (yyval.stmt)= bldBrkStmt((yyvsp[-1].exp)); }
#line 3129 "y.tab.c"
    break;

  case 150: /* continue_statement: CONTINUE  */
#line 904 "bello.y"
               { (yyval.stmt)= bldCntnStmt(bldIntValExp(1)); }
#line 3135 "y.tab.c"
    break;

  case 151: /* continue_statement: CONTINUE LEFT_PAREN expression RIGHT_PAREN  */
#line 905 "bello.y"
                                                 { (yyval.stmt)= bldCntnStmt((yyvsp[-1].exp)); }
#line 3141 "y.tab.c"
    break;

  case 154: /* function_statement: FUNC IDENTIFER LEFT_PAREN parameter_list RIGHT_PAREN  */
#line 947 "bello.y"
    {
        struct FcnStrc* fcn;

        fcn=bldFcn((yyvsp[-3].idtf), (yyvsp[-1].prmLst));

        (yyval.stmt) = bldFcnStmt(fcn);
    }
#line 3153 "y.tab.c"
    break;

  case 155: /* function_statement: FUNC IDENTIFER LEFT_PAREN RIGHT_PAREN  */
#line 955 "bello.y"
    {
        struct FcnStrc *fcn;

        fcn=bldFcn((yyvsp[-2].idtf), bldPrmLst());

        (yyval.stmt) = bldFcnStmt(fcn);
    }
#line 3165 "y.tab.c"
    break;

  case 156: /* function_statement: SHARED FUNC IDENTIFER LEFT_PAREN parameter_list RIGHT_PAREN  */
#line 963 "bello.y"
    {
        if (blnDfnCls==false)
        {
            yyclearin;
            yyerrok;

            break;
        }

        struct FcnStrc* fcn;

        fcn=bldFcn((yyvsp[-3].idtf), (yyvsp[-1].prmLst));

        (yyval.stmt) = bldFcnStmt(fcn);
        
    }
#line 3186 "y.tab.c"
    break;

  case 157: /* function_statement: SHARED FUNC IDENTIFER LEFT_PAREN RIGHT_PAREN  */
#line 980 "bello.y"
    {
        struct FcnStrc *fcn;

        fcn=bldFcn((yyvsp[-2].idtf), bldPrmLst());

        (yyval.stmt) = bldFcnStmt(fcn);
    }
#line 3198 "y.tab.c"
    break;

  case 158: /* class_statement: CLASS IDENTIFER  */
#line 990 "bello.y"
    {
        struct ClsStrc* cls;

        cls = bldCls((yyvsp[0].idtf));

        (yyval.stmt) = bldClsStmt(cls);

        //blnDfnCls = 1;
    }
#line 3212 "y.tab.c"
    break;

  case 159: /* return_statement: RETURN  */
#line 1003 "bello.y"
             { (yyval.stmt)=bldRtnStmt(NULL); }
#line 3218 "y.tab.c"
    break;

  case 160: /* return_statement: RETURN expression  */
#line 1004 "bello.y"
                        { (yyval.stmt)=bldRtnStmt((yyvsp[0].exp)); }
#line 3224 "y.tab.c"
    break;


#line 3228 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 1007 "bello.y"


#endif



