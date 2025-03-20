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

    //#pragma once
    #include <stdio.h>
    #include <string.h>
    #include <stdlib.h>
    #include <stdbool.h>
    #include <stack>
    //#include "dftn.h"
    #ifndef DFTN_H
    #define DFTN_H
    #endif
    #include "vrb.h"
    #include "cnst.h"
    #ifndef EXP_H
    #define EXP_H
    #endif
    #ifndef STMT_H
    #define STMT_H
    #endif
    #include "arr.h"
    #include "exp.h"
    #include "stmt.h"
    #include "fcn.h"
    #include "cls.h"
    #include "envr.h"
    #include "err.h"
    #ifndef LEX_YY_C
    #define LEX_YY_C
    #endif
    #include "ntv.h"


    extern char* yytext;

    extern int yylex();

    void yyerror(const char *s,...)
    {
        printf("Syntax error.\n");
        
    }

    //#define YYERROR_VERBOSE 1

    extern int lstIndt;

    extern struct StmtStkItemStrc;

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

#line 138 "y.tab.c"

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
    READ_INT = 329,                /* READ_INT  */
    READ_FLOAT = 330,              /* READ_FLOAT  */
    READ = 331,                    /* READ  */
    READ_BOOL = 332,               /* READ_BOOL  */
    READ_LINE = 333                /* READ_LINE  */
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
#define READ_INT 329
#define READ_FLOAT 330
#define READ 331
#define READ_BOOL 332
#define READ_LINE 333

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

#line 370 "y.tab.c"

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
  YYSYMBOL_INT_VALUE = 13,                 /* INT_VALUE  */
  YYSYMBOL_BOOLEAN_VALUE = 14,             /* BOOLEAN_VALUE  */
  YYSYMBOL_FLOAT_VALUE = 15,               /* FLOAT_VALUE  */
  YYSYMBOL_STRING_VALUE = 16,              /* STRING_VALUE  */
  YYSYMBOL_OBJECT_VALUE = 17,              /* OBJECT_VALUE  */
  YYSYMBOL_NULL_VALUE = 18,                /* NULL_VALUE  */
  YYSYMBOL_ARRAY_VALUE = 19,               /* ARRAY_VALUE  */
  YYSYMBOL_IDENTIFER = 20,                 /* IDENTIFER  */
  YYSYMBOL_ASSIGN = 21,                    /* ASSIGN  */
  YYSYMBOL_VAR = 22,                       /* VAR  */
  YYSYMBOL_GLOBAL = 23,                    /* GLOBAL  */
  YYSYMBOL_ADD_ASSIGN = 24,                /* ADD_ASSIGN  */
  YYSYMBOL_SUB_ASSIGN = 25,                /* SUB_ASSIGN  */
  YYSYMBOL_MUL_ASSIGN = 26,                /* MUL_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 27,                /* DIV_ASSIGN  */
  YYSYMBOL_MOD_ASSIGN = 28,                /* MOD_ASSIGN  */
  YYSYMBOL_PRINT = 29,                     /* PRINT  */
  YYSYMBOL_PRINTLN = 30,                   /* PRINTLN  */
  YYSYMBOL_LEFT_PAREN = 31,                /* LEFT_PAREN  */
  YYSYMBOL_RIGHT_PAREN = 32,               /* RIGHT_PAREN  */
  YYSYMBOL_LEFT_QUAD = 33,                 /* LEFT_QUAD  */
  YYSYMBOL_RIGHT_QUAD = 34,                /* RIGHT_QUAD  */
  YYSYMBOL_LEFT_BRACE = 35,                /* LEFT_BRACE  */
  YYSYMBOL_RIGHT_BRACE = 36,               /* RIGHT_BRACE  */
  YYSYMBOL_SEMICOLON_OPTIONAL = 37,        /* SEMICOLON_OPTIONAL  */
  YYSYMBOL_SEMICOLON = 38,                 /* SEMICOLON  */
  YYSYMBOL_COMMA = 39,                     /* COMMA  */
  YYSYMBOL_COLON = 40,                     /* COLON  */
  YYSYMBOL_ADD = 41,                       /* ADD  */
  YYSYMBOL_SUB = 42,                       /* SUB  */
  YYSYMBOL_MUL = 43,                       /* MUL  */
  YYSYMBOL_DIV = 44,                       /* DIV  */
  YYSYMBOL_MOD = 45,                       /* MOD  */
  YYSYMBOL_EQ = 46,                        /* EQ  */
  YYSYMBOL_NE = 47,                        /* NE  */
  YYSYMBOL_GT = 48,                        /* GT  */
  YYSYMBOL_GE = 49,                        /* GE  */
  YYSYMBOL_LT = 50,                        /* LT  */
  YYSYMBOL_LE = 51,                        /* LE  */
  YYSYMBOL_AND = 52,                       /* AND  */
  YYSYMBOL_OR = 53,                        /* OR  */
  YYSYMBOL_NOT = 54,                       /* NOT  */
  YYSYMBOL_BIT_AND = 55,                   /* BIT_AND  */
  YYSYMBOL_BIT_OR = 56,                    /* BIT_OR  */
  YYSYMBOL_BIT_XOR = 57,                   /* BIT_XOR  */
  YYSYMBOL_BIT_NOT = 58,                   /* BIT_NOT  */
  YYSYMBOL_INCREMENT = 59,                 /* INCREMENT  */
  YYSYMBOL_DECREMENT = 60,                 /* DECREMENT  */
  YYSYMBOL_IF = 61,                        /* IF  */
  YYSYMBOL_ELSEIF = 62,                    /* ELSEIF  */
  YYSYMBOL_ELSE = 63,                      /* ELSE  */
  YYSYMBOL_FOR = 64,                       /* FOR  */
  YYSYMBOL_WHILE = 65,                     /* WHILE  */
  YYSYMBOL_DO = 66,                        /* DO  */
  YYSYMBOL_CONTINUE = 67,                  /* CONTINUE  */
  YYSYMBOL_BREAK = 68,                     /* BREAK  */
  YYSYMBOL_FUNC = 69,                      /* FUNC  */
  YYSYMBOL_RETURN = 70,                    /* RETURN  */
  YYSYMBOL_NEW_ARRAY = 71,                 /* NEW_ARRAY  */
  YYSYMBOL_MINUS_SIGN = 72,                /* MINUS_SIGN  */
  YYSYMBOL_PLUS_SIGN = 73,                 /* PLUS_SIGN  */
  YYSYMBOL_READ_INT = 74,                  /* READ_INT  */
  YYSYMBOL_READ_FLOAT = 75,                /* READ_FLOAT  */
  YYSYMBOL_READ = 76,                      /* READ  */
  YYSYMBOL_READ_BOOL = 77,                 /* READ_BOOL  */
  YYSYMBOL_READ_LINE = 78,                 /* READ_LINE  */
  YYSYMBOL_YYACCEPT = 79,                  /* $accept  */
  YYSYMBOL_statement = 80,                 /* statement  */
  YYSYMBOL_81_1 = 81,                      /* @1  */
  YYSYMBOL_check_indent = 82,              /* check_indent  */
  YYSYMBOL_build_statement_stack = 83,     /* build_statement_stack  */
  YYSYMBOL_close_execute_statement = 84,   /* close_execute_statement  */
  YYSYMBOL_close_execute_last_statement = 85, /* close_execute_last_statement  */
  YYSYMBOL_execute_single_statement = 86,  /* execute_single_statement  */
  YYSYMBOL_single_statement = 87,          /* single_statement  */
  YYSYMBOL_single_statement_no_semicolon = 88, /* single_statement_no_semicolon  */
  YYSYMBOL_null_statement = 89,            /* null_statement  */
  YYSYMBOL_nop_statement = 90,             /* nop_statement  */
  YYSYMBOL_statement_block = 91,           /* statement_block  */
  YYSYMBOL_block_list = 92,                /* block_list  */
  YYSYMBOL_expression_statement = 93,      /* expression_statement  */
  YYSYMBOL_expression = 94,                /* expression  */
  YYSYMBOL_lvalue_operation_expression = 95, /* lvalue_operation_expression  */
  YYSYMBOL_assign_expression = 96,         /* assign_expression  */
  YYSYMBOL_self_operation_expression = 97, /* self_operation_expression  */
  YYSYMBOL_unary_expression = 98,          /* unary_expression  */
  YYSYMBOL_binary_expression = 99,         /* binary_expression  */
  YYSYMBOL_value_expression = 100,         /* value_expression  */
  YYSYMBOL_lvalue_expression = 101,        /* lvalue_expression  */
  YYSYMBOL_array_expression = 102,         /* array_expression  */
  YYSYMBOL_new_array_expression = 103,     /* new_array_expression  */
  YYSYMBOL_element_list = 104,             /* element_list  */
  YYSYMBOL_var_statement = 105,            /* var_statement  */
  YYSYMBOL_global_statement = 106,         /* global_statement  */
  YYSYMBOL_assign_list = 107,              /* assign_list  */
  YYSYMBOL_function_expression = 108,      /* function_expression  */
  YYSYMBOL_argument_list = 109,            /* argument_list  */
  YYSYMBOL_parameter_list = 110,           /* parameter_list  */
  YYSYMBOL_evaluate_list = 111,            /* evaluate_list  */
  YYSYMBOL_if_statement = 112,             /* if_statement  */
  YYSYMBOL_else_statement = 113,           /* else_statement  */
  YYSYMBOL_elseif_statement = 114,         /* elseif_statement  */
  YYSYMBOL_for_statement = 115,            /* for_statement  */
  YYSYMBOL_while_statement = 116,          /* while_statement  */
  YYSYMBOL_do_while_statement = 117,       /* do_while_statement  */
  YYSYMBOL_break_statement = 118,          /* break_statement  */
  YYSYMBOL_continue_statement = 119,       /* continue_statement  */
  YYSYMBOL_structure_statement = 120,      /* structure_statement  */
  YYSYMBOL_function_statement = 121,       /* function_statement  */
  YYSYMBOL_class_statement = 122,          /* class_statement  */
  YYSYMBOL_return_statement = 123          /* return_statement  */
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
#define YYLAST   1524

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  79
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  45
/* YYNRULES -- Number of rules.  */
#define YYNRULES  156
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  280

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   333


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
      75,    76,    77,    78
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   168,   168,   168,   170,   172,   174,   175,   176,   180,
     190,   232,   277,   324,   342,   343,   344,   345,   346,   347,
     349,   350,   351,   352,   354,   355,   356,   357,   358,   368,
     369,   370,   371,   372,   373,   377,   380,   383,   384,   387,
     392,   399,   405,   406,   407,   408,   409,   410,   413,   414,
     417,   418,   419,   420,   421,   422,   426,   427,   428,   429,
     432,   433,   434,   435,   436,   439,   440,   441,   442,   443,
     444,   445,   446,   447,   448,   449,   450,   451,   452,   453,
     454,   458,   459,   460,   461,   462,   463,   464,   465,   468,
     469,   484,   489,   553,   557,   563,   569,   574,   582,   594,
     609,   612,   617,   622,   627,   638,   642,   648,   653,   658,
     663,   670,   675,   680,   685,   694,   699,   704,   709,   714,
     719,   724,   729,   734,   739,   744,   749,   754,   759,   764,
     769,   774,   779,   784,   789,   794,   799,   817,   828,   834,
     846,   858,   862,   868,   874,   875,   878,   879,   882,   883,
     920,   928,   936,   953,   963,   977,   978
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
  "INT_VALUE", "BOOLEAN_VALUE", "FLOAT_VALUE", "STRING_VALUE",
  "OBJECT_VALUE", "NULL_VALUE", "ARRAY_VALUE", "IDENTIFER", "ASSIGN",
  "VAR", "GLOBAL", "ADD_ASSIGN", "SUB_ASSIGN", "MUL_ASSIGN", "DIV_ASSIGN",
  "MOD_ASSIGN", "PRINT", "PRINTLN", "LEFT_PAREN", "RIGHT_PAREN",
  "LEFT_QUAD", "RIGHT_QUAD", "LEFT_BRACE", "RIGHT_BRACE",
  "SEMICOLON_OPTIONAL", "SEMICOLON", "COMMA", "COLON", "ADD", "SUB", "MUL",
  "DIV", "MOD", "EQ", "NE", "GT", "GE", "LT", "LE", "AND", "OR", "NOT",
  "BIT_AND", "BIT_OR", "BIT_XOR", "BIT_NOT", "INCREMENT", "DECREMENT",
  "IF", "ELSEIF", "ELSE", "FOR", "WHILE", "DO", "CONTINUE", "BREAK",
  "FUNC", "RETURN", "NEW_ARRAY", "MINUS_SIGN", "PLUS_SIGN", "READ_INT",
  "READ_FLOAT", "READ", "READ_BOOL", "READ_LINE", "$accept", "statement",
  "@1", "check_indent", "build_statement_stack", "close_execute_statement",
  "close_execute_last_statement", "execute_single_statement",
  "single_statement", "single_statement_no_semicolon", "null_statement",
  "nop_statement", "statement_block", "block_list", "expression_statement",
  "expression", "lvalue_operation_expression", "assign_expression",
  "self_operation_expression", "unary_expression", "binary_expression",
  "value_expression", "lvalue_expression", "array_expression",
  "new_array_expression", "element_list", "var_statement",
  "global_statement", "assign_list", "function_expression",
  "argument_list", "parameter_list", "evaluate_list", "if_statement",
  "else_statement", "elseif_statement", "for_statement", "while_statement",
  "do_while_statement", "break_statement", "continue_statement",
  "structure_statement", "function_statement", "class_statement",
  "return_statement", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-84)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-8)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     238,   -84,    17,   -84,   -84,   -84,   522,   -84,   -84,   -84,
     -84,    11,   -84,    13,    -9,   -84,   -84,   -84,   -84,   -84,
       3,    16,    16,  1021,   645,  1021,  1021,  1021,  1021,    31,
      31,    39,    40,   -84,    68,    74,    75,    80,    35,  1021,
      99,    57,   -84,   -84,  1450,   -84,   -84,   -84,   -84,   -84,
     -84,    -1,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   522,   -84,   -84,
      16,   117,   676,   118,   103,   103,    72,   -84,  1450,    92,
     -84,   -84,   -84,   -84,   -84,     4,     4,  1021,  1021,   134,
    1021,  1021,  1021,   107,  1450,  1021,   -84,  1021,  1021,  1021,
    1021,  1021,  1021,  1021,  1021,  1021,  1021,  1021,  1021,  1021,
    1021,  1021,  1021,   123,  1021,  1021,  1021,  1021,  1021,  1021,
     708,   -84,   -84,   111,   141,   103,   115,    67,   -84,  1450,
      -4,  1021,   131,   -84,   -84,  1021,  1083,  1105,   309,   125,
     -84,   -84,   -84,   -84,   -84,   -84,  1127,  1149,  1171,    -2,
    1193,   -84,    58,    58,   -84,   -84,   -84,    91,    91,    91,
      91,    91,    91,    -3,  1467,   311,   172,   240,     3,   -84,
    1450,  1450,  1450,  1450,  1450,  1450,   740,  1213,   772,   -84,
      30,  1021,   -84,  1052,  1450,   143,  1450,   -84,   -84,   380,
     -84,   -84,   101,  1021,   -84,   -84,   -84,   147,   -84,    24,
     -84,   -84,   136,  1233,   -84,   582,   804,  1253,   -84,   -84,
      34,  1450,    69,  1450,  1021,   -84,   -84,   451,   140,   135,
    1021,   -84,   152,   -84,   -84,   835,   -84,   866,  1273,   144,
    1293,   -84,   614,   -84,   -84,  1021,  1450,   -84,   -84,  1021,
     134,  1450,   153,   -84,  1333,   -84,  1353,   -84,   897,   -84,
     -84,   928,   -84,   959,  1313,   -84,  1450,   145,   148,  1021,
     -84,   -84,   -84,  1373,   -84,  1393,   -84,  1413,   -84,   990,
     146,   -84,  1450,   -84,   -84,   -84,   -84,  1433,   -84,   -84
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     8,    12,     1,    11,    12,     0,     2,     5,     6,
      28,     0,    36,     0,     0,    81,    83,    82,    84,    85,
      89,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   138,     0,   142,   146,   144,     0,   155,
       0,     0,    24,    14,    41,    43,    48,    49,    44,    45,
      42,    87,    46,    47,    25,    26,    86,    15,    16,    17,
      18,    19,    20,    21,    23,    27,    22,     0,    88,   154,
       0,     0,     0,   101,    98,   100,     0,    94,    96,     0,
      61,    60,    63,    64,    89,    56,    57,     0,     0,    35,
       0,     0,     0,     0,   156,     0,     9,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    58,    59,    91,     0,    99,     0,    89,   106,   107,
       0,     0,     0,    62,    93,     0,     0,     0,     0,     0,
      34,    29,    30,    31,    32,    33,     0,     0,     0,     0,
       0,    10,    65,    66,    67,    68,    69,    72,    73,    74,
      75,    76,    77,    70,    71,    78,    79,    80,    90,    92,
      50,    51,    52,    53,    54,    55,     0,     0,     0,     9,
       0,     0,   105,     0,   102,   103,    97,   137,   139,     0,
     148,   149,     0,     0,   141,   147,   145,   111,   151,     0,
      95,     4,     0,     0,   115,     0,     0,     0,    10,   153,
       0,   108,    89,   109,     0,    38,    39,     0,     0,     0,
       0,   150,     0,   125,   122,     0,   119,     0,     0,     0,
       0,   126,     0,    13,   152,     0,   104,    37,    40,     0,
      35,   112,   113,   123,     0,   120,     0,   116,     0,   136,
     133,     0,   130,     0,     0,     3,   110,     0,     0,     0,
     124,   121,   117,     0,   134,     0,   131,     0,   127,     0,
       0,   140,   114,   118,   135,   132,   128,     0,   143,   129
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -84,   -84,   -84,     0,   -27,   -84,   180,   -84,   -48,   -54,
     -84,   -84,   -84,   -84,   -83,   -23,   -84,   -84,   -84,   -84,
     -84,   -84,   -15,   -84,   -84,   -84,   -84,   -84,   -13,    76,
     -84,     7,   -84,   -81,   -84,   -84,   -79,   -78,   -84,   -84,
     -84,   -84,   -84,   -84,   -84
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,    67,   151,   201,     8,     7,   255,    41,   139,
     140,    42,   191,   217,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    79,    54,    55,    74,    56,
     130,   199,   123,    57,    58,    59,    60,    61,   145,    62,
      63,   192,    64,    65,    66
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      76,    78,    80,    81,    82,    83,   141,   113,   142,    75,
     143,   144,   113,    70,    85,    86,    94,     3,   197,   124,
     114,     4,     5,   115,   116,   117,   118,   119,   182,     6,
     198,    68,   120,    69,    72,   183,    73,   120,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   129,
     197,    84,   110,   111,   112,    93,   221,   125,   121,   122,
      71,    96,   209,   222,   136,   137,   234,   146,   147,   148,
      87,    88,   150,   222,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     190,   170,   171,   172,   173,   174,   175,   177,    72,    89,
      72,    99,   100,   101,   133,    90,    91,   181,   184,   235,
     219,    92,   186,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   134,   110,   111,   112,
      95,   135,    97,    98,    99,   100,   101,   126,   149,   131,
      11,   216,   132,   168,   178,   179,   180,    15,    16,    17,
      18,   185,    19,   203,    20,   207,   257,   141,   211,   142,
     213,   143,   144,   193,   214,    23,   218,    24,   220,   238,
     223,   239,   242,   240,   259,    25,    26,   270,   249,   208,
     271,   233,   228,   230,   278,     9,   258,   210,    27,   169,
       0,   236,    28,    29,    30,    31,     0,   241,    34,    35,
     138,     0,   244,     0,   246,    40,     0,     0,     0,   254,
       0,     0,   256,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,     0,   263,     0,   110,   265,   112,
     267,     0,     0,     0,     0,     0,   272,     0,    -7,     1,
       0,     0,    -7,    -7,    -7,    -7,   277,    -7,    -7,     0,
      -7,    -7,    -7,    -7,    -7,     0,    -7,     0,    -7,     0,
      -7,    -7,     0,     0,     0,     0,     0,     0,     0,    -7,
       0,    -7,     0,     0,     0,     0,     0,     0,     0,    -7,
      -7,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,    -7,     0,     0,   110,    -7,    -7,    -7,    -7,
      -7,    -7,    -7,    -7,     0,    -7,    -7,    -7,    -7,    -7,
      10,     0,     0,     0,     0,    11,    12,     0,    13,    14,
       0,     0,    15,    16,    17,    18,     0,    19,     0,    20,
       0,    21,    22,     0,     0,     0,     0,     0,     0,     0,
      23,     0,    24,     0,   189,     0,     0,     0,     0,     0,
      25,    26,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,    27,     0,     0,     0,    28,    29,    30,
      31,    32,    33,    34,    35,     0,    36,    37,    38,    39,
      40,    10,     0,     0,     0,     0,    11,    12,     0,    13,
      14,     0,     0,    15,    16,    17,    18,     0,    19,     0,
      20,     0,    21,    22,     0,     0,     0,     0,     0,     0,
       0,    23,     0,    24,     0,     0,   215,     0,     0,     0,
       0,    25,    26,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    27,     0,     0,     0,    28,    29,
      30,    31,    32,    33,    34,    35,     0,    36,    37,    38,
      39,    40,    10,     0,     0,     0,     0,    11,    12,     0,
      13,    14,     0,     0,    15,    16,    17,    18,     0,    19,
       0,    20,     0,    21,    22,     0,     0,     0,     0,     0,
       0,     0,    23,     0,    24,     0,     0,   237,     0,     0,
       0,     0,    25,    26,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    27,     0,     0,     0,    28,
      29,    30,    31,    32,    33,    34,    35,     0,    36,    37,
      38,    39,    40,    10,     0,     0,     0,     0,    11,    12,
       0,    13,    14,     0,     0,    15,    16,    17,    18,     0,
      19,     0,    20,     0,    21,    22,     0,     0,     0,     0,
       0,     0,     0,    23,     0,    24,     0,     0,     0,     0,
       0,     0,     0,    25,    26,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    27,     0,     0,     0,
      28,    29,    30,    31,    32,    33,    34,    35,    11,    36,
      37,    38,    39,    40,     0,    15,    16,    17,    18,     0,
      19,     0,    20,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    23,     0,    24,   226,     0,     0,     0,
      11,     0,   227,    25,    26,     0,     0,    15,    16,    17,
      18,     0,    19,     0,    20,     0,    27,     0,     0,     0,
      28,    29,    30,     0,     0,    23,     0,    24,   252,     0,
       0,    11,     0,    40,   253,    25,    26,     0,    15,    16,
      17,    18,     0,    19,     0,    20,     0,     0,    27,     0,
       0,     0,    28,    29,    30,     0,    23,     0,    24,    77,
       0,     0,    11,     0,     0,    40,    25,    26,     0,    15,
      16,    17,    18,     0,    19,     0,   127,     0,     0,    27,
       0,     0,     0,    28,    29,    30,     0,    23,   128,    24,
       0,     0,     0,     0,    11,     0,    40,    25,    26,     0,
       0,    15,    16,    17,    18,     0,    19,     0,    20,     0,
      27,     0,     0,     0,    28,    29,    30,     0,     0,    23,
       0,    24,     0,     0,     0,     0,    11,    40,   176,    25,
      26,     0,     0,    15,    16,    17,    18,     0,    19,     0,
      20,     0,    27,     0,     0,     0,    28,    29,    30,     0,
       0,    23,     0,    24,     0,     0,     0,     0,    11,    40,
     202,    25,    26,     0,     0,    15,    16,    17,    18,     0,
      19,     0,    20,     0,    27,     0,     0,     0,    28,    29,
      30,     0,     0,    23,     0,    24,     0,     0,     0,     0,
      11,    40,   206,    25,    26,     0,     0,    15,    16,    17,
      18,     0,    19,     0,    20,     0,    27,     0,     0,     0,
      28,    29,    30,     0,     0,    23,     0,    24,     0,     0,
       0,    11,     0,    40,   229,    25,    26,     0,    15,    16,
      17,    18,     0,    19,     0,    20,     0,     0,    27,     0,
       0,     0,    28,    29,    30,     0,    23,     0,    24,   243,
       0,     0,    11,     0,     0,    40,    25,    26,     0,    15,
      16,    17,    18,     0,    19,     0,    20,     0,     0,    27,
       0,     0,     0,    28,    29,    30,     0,    23,     0,    24,
     245,     0,     0,    11,     0,     0,    40,    25,    26,     0,
      15,    16,    17,    18,     0,    19,     0,    20,     0,     0,
      27,     0,     0,     0,    28,    29,    30,     0,    23,     0,
      24,   262,     0,     0,    11,     0,     0,    40,    25,    26,
       0,    15,    16,    17,    18,     0,    19,     0,    20,     0,
       0,    27,     0,     0,     0,    28,    29,    30,     0,    23,
       0,    24,   264,     0,     0,    11,     0,     0,    40,    25,
      26,     0,    15,    16,    17,    18,     0,    19,     0,    20,
       0,     0,    27,     0,     0,     0,    28,    29,    30,     0,
      23,     0,    24,   266,     0,     0,    11,     0,     0,    40,
      25,    26,     0,    15,    16,    17,    18,     0,    19,     0,
      20,     0,     0,    27,     0,     0,     0,    28,    29,    30,
       0,    23,     0,    24,   276,     0,     0,    11,     0,     0,
      40,    25,    26,     0,    15,    16,    17,    18,     0,    19,
       0,    20,     0,     0,    27,     0,     0,     0,    28,    29,
      30,     0,    23,     0,    24,     0,     0,     0,    11,     0,
       0,    40,    25,    26,     0,    15,    16,    17,    18,     0,
      19,     0,   212,     0,     0,    27,     0,     0,     0,    28,
      29,    30,     0,    23,     0,    24,     0,     0,     0,     0,
       0,     0,    40,    25,    26,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    27,     0,     0,     0,
      28,    29,    30,     0,     0,   187,     0,     0,     0,     0,
       0,     0,     0,    40,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   188,   110,   111,
     112,     0,     0,     0,     0,     0,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   194,
     110,   111,   112,     0,     0,     0,     0,     0,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   195,   110,   111,   112,     0,     0,     0,     0,     0,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   196,   110,   111,   112,     0,     0,     0,
       0,     0,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   200,   110,   111,   112,     0,
       0,     0,     0,     0,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   204,   110,   111,
     112,     0,     0,   205,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   224,   110,   111,
     112,     0,     0,   225,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   231,   110,   111,
     112,     0,     0,   232,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   247,   110,   111,
     112,     0,     0,   248,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   250,   110,   111,
     112,     0,     0,   251,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   268,   110,   111,
     112,     0,     0,   269,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   260,   110,   111,
     112,     0,     0,     0,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   261,   110,   111,
     112,     0,     0,     0,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   273,   110,   111,
     112,     0,     0,     0,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   274,   110,   111,
     112,     0,     0,     0,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   275,   110,   111,
     112,     0,     0,     0,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   279,   110,   111,
     112,     0,     0,     0,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,     0,   110,   111,
     112,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,     0,   110,   111,   112,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
       0,     0,   110,   111,   112
};

static const yytype_int16 yycheck[] =
{
      23,    24,    25,    26,    27,    28,    89,     8,    89,    22,
      89,    89,     8,    22,    29,    30,    39,     0,    20,    67,
      21,     4,     5,    24,    25,    26,    27,    28,    32,    12,
      32,    20,    33,    20,    31,    39,    20,    33,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    72,
      20,    20,    55,    56,    57,    20,    32,    70,    59,    60,
      69,     4,    32,    39,    87,    88,    32,    90,    91,    92,
      31,    31,    95,    39,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     138,   114,   115,   116,   117,   118,   119,   120,    31,    31,
      31,    43,    44,    45,    32,    31,    31,    40,   131,    40,
     193,    31,   135,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    34,    55,    56,    57,
      31,    39,    41,    42,    43,    44,    45,    20,    31,    21,
       6,   189,    39,    20,    33,     4,    31,    13,    14,    15,
      16,    20,    18,   176,    20,   178,   239,   240,   181,   240,
     183,   240,   240,    38,    21,    31,    65,    33,    21,   217,
      34,    31,    20,    38,    21,    41,    42,    32,    34,   179,
      32,   208,   205,   206,    38,     5,   240,   180,    54,   113,
      -1,   214,    58,    59,    60,    61,    -1,   220,    64,    65,
      66,    -1,   225,    -1,   227,    71,    -1,    -1,    -1,   232,
      -1,    -1,   235,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    -1,   248,    -1,    55,   251,    57,
     253,    -1,    -1,    -1,    -1,    -1,   259,    -1,     0,     1,
      -1,    -1,     4,     5,     6,     7,   269,     9,    10,    -1,
      12,    13,    14,    15,    16,    -1,    18,    -1,    20,    -1,
      22,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,
      42,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    54,    -1,    -1,    55,    58,    59,    60,    61,
      62,    63,    64,    65,    -1,    67,    68,    69,    70,    71,
       1,    -1,    -1,    -1,    -1,     6,     7,    -1,     9,    10,
      -1,    -1,    13,    14,    15,    16,    -1,    18,    -1,    20,
      -1,    22,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    33,    -1,    35,    -1,    -1,    -1,    -1,    -1,
      41,    42,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    54,    -1,    -1,    -1,    58,    59,    60,
      61,    62,    63,    64,    65,    -1,    67,    68,    69,    70,
      71,     1,    -1,    -1,    -1,    -1,     6,     7,    -1,     9,
      10,    -1,    -1,    13,    14,    15,    16,    -1,    18,    -1,
      20,    -1,    22,    23,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    33,    -1,    -1,    36,    -1,    -1,    -1,
      -1,    41,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,    58,    59,
      60,    61,    62,    63,    64,    65,    -1,    67,    68,    69,
      70,    71,     1,    -1,    -1,    -1,    -1,     6,     7,    -1,
       9,    10,    -1,    -1,    13,    14,    15,    16,    -1,    18,
      -1,    20,    -1,    22,    23,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    -1,    33,    -1,    -1,    36,    -1,    -1,
      -1,    -1,    41,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,    58,
      59,    60,    61,    62,    63,    64,    65,    -1,    67,    68,
      69,    70,    71,     1,    -1,    -1,    -1,    -1,     6,     7,
      -1,     9,    10,    -1,    -1,    13,    14,    15,    16,    -1,
      18,    -1,    20,    -1,    22,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    33,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    41,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,
      58,    59,    60,    61,    62,    63,    64,    65,     6,    67,
      68,    69,    70,    71,    -1,    13,    14,    15,    16,    -1,
      18,    -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    33,    34,    -1,    -1,    -1,
       6,    -1,    40,    41,    42,    -1,    -1,    13,    14,    15,
      16,    -1,    18,    -1,    20,    -1,    54,    -1,    -1,    -1,
      58,    59,    60,    -1,    -1,    31,    -1,    33,    34,    -1,
      -1,     6,    -1,    71,    40,    41,    42,    -1,    13,    14,
      15,    16,    -1,    18,    -1,    20,    -1,    -1,    54,    -1,
      -1,    -1,    58,    59,    60,    -1,    31,    -1,    33,    34,
      -1,    -1,     6,    -1,    -1,    71,    41,    42,    -1,    13,
      14,    15,    16,    -1,    18,    -1,    20,    -1,    -1,    54,
      -1,    -1,    -1,    58,    59,    60,    -1,    31,    32,    33,
      -1,    -1,    -1,    -1,     6,    -1,    71,    41,    42,    -1,
      -1,    13,    14,    15,    16,    -1,    18,    -1,    20,    -1,
      54,    -1,    -1,    -1,    58,    59,    60,    -1,    -1,    31,
      -1,    33,    -1,    -1,    -1,    -1,     6,    71,    40,    41,
      42,    -1,    -1,    13,    14,    15,    16,    -1,    18,    -1,
      20,    -1,    54,    -1,    -1,    -1,    58,    59,    60,    -1,
      -1,    31,    -1,    33,    -1,    -1,    -1,    -1,     6,    71,
      40,    41,    42,    -1,    -1,    13,    14,    15,    16,    -1,
      18,    -1,    20,    -1,    54,    -1,    -1,    -1,    58,    59,
      60,    -1,    -1,    31,    -1,    33,    -1,    -1,    -1,    -1,
       6,    71,    40,    41,    42,    -1,    -1,    13,    14,    15,
      16,    -1,    18,    -1,    20,    -1,    54,    -1,    -1,    -1,
      58,    59,    60,    -1,    -1,    31,    -1,    33,    -1,    -1,
      -1,     6,    -1,    71,    40,    41,    42,    -1,    13,    14,
      15,    16,    -1,    18,    -1,    20,    -1,    -1,    54,    -1,
      -1,    -1,    58,    59,    60,    -1,    31,    -1,    33,    34,
      -1,    -1,     6,    -1,    -1,    71,    41,    42,    -1,    13,
      14,    15,    16,    -1,    18,    -1,    20,    -1,    -1,    54,
      -1,    -1,    -1,    58,    59,    60,    -1,    31,    -1,    33,
      34,    -1,    -1,     6,    -1,    -1,    71,    41,    42,    -1,
      13,    14,    15,    16,    -1,    18,    -1,    20,    -1,    -1,
      54,    -1,    -1,    -1,    58,    59,    60,    -1,    31,    -1,
      33,    34,    -1,    -1,     6,    -1,    -1,    71,    41,    42,
      -1,    13,    14,    15,    16,    -1,    18,    -1,    20,    -1,
      -1,    54,    -1,    -1,    -1,    58,    59,    60,    -1,    31,
      -1,    33,    34,    -1,    -1,     6,    -1,    -1,    71,    41,
      42,    -1,    13,    14,    15,    16,    -1,    18,    -1,    20,
      -1,    -1,    54,    -1,    -1,    -1,    58,    59,    60,    -1,
      31,    -1,    33,    34,    -1,    -1,     6,    -1,    -1,    71,
      41,    42,    -1,    13,    14,    15,    16,    -1,    18,    -1,
      20,    -1,    -1,    54,    -1,    -1,    -1,    58,    59,    60,
      -1,    31,    -1,    33,    34,    -1,    -1,     6,    -1,    -1,
      71,    41,    42,    -1,    13,    14,    15,    16,    -1,    18,
      -1,    20,    -1,    -1,    54,    -1,    -1,    -1,    58,    59,
      60,    -1,    31,    -1,    33,    -1,    -1,    -1,     6,    -1,
      -1,    71,    41,    42,    -1,    13,    14,    15,    16,    -1,
      18,    -1,    20,    -1,    -1,    54,    -1,    -1,    -1,    58,
      59,    60,    -1,    31,    -1,    33,    -1,    -1,    -1,    -1,
      -1,    -1,    71,    41,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,
      58,    59,    60,    -1,    -1,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    71,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    32,    55,    56,
      57,    -1,    -1,    -1,    -1,    -1,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    32,
      55,    56,    57,    -1,    -1,    -1,    -1,    -1,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    32,    55,    56,    57,    -1,    -1,    -1,    -1,    -1,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    32,    55,    56,    57,    -1,    -1,    -1,
      -1,    -1,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    32,    55,    56,    57,    -1,
      -1,    -1,    -1,    -1,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    34,    55,    56,
      57,    -1,    -1,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    34,    55,    56,
      57,    -1,    -1,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    34,    55,    56,
      57,    -1,    -1,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    34,    55,    56,
      57,    -1,    -1,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    34,    55,    56,
      57,    -1,    -1,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    34,    55,    56,
      57,    -1,    -1,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    34,    55,    56,
      57,    -1,    -1,    -1,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    34,    55,    56,
      57,    -1,    -1,    -1,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    34,    55,    56,
      57,    -1,    -1,    -1,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    34,    55,    56,
      57,    -1,    -1,    -1,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    34,    55,    56,
      57,    -1,    -1,    -1,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    34,    55,    56,
      57,    -1,    -1,    -1,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    -1,    55,    56,
      57,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    -1,    55,    56,    57,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      -1,    -1,    55,    56,    57
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,    80,     0,     4,     5,    12,    85,    84,    85,
       1,     6,     7,     9,    10,    13,    14,    15,    16,    18,
      20,    22,    23,    31,    33,    41,    42,    54,    58,    59,
      60,    61,    62,    63,    64,    65,    67,    68,    69,    70,
      71,    87,    90,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   105,   106,   108,   112,   113,   114,
     115,   116,   118,   119,   121,   122,   123,    81,    20,    20,
      22,    69,    31,    20,   107,   107,    94,    34,    94,   104,
      94,    94,    94,    94,    20,   101,   101,    31,    31,    31,
      31,    31,    31,    20,    94,    31,     4,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      55,    56,    57,     8,    21,    24,    25,    26,    27,    28,
      33,    59,    60,   111,    87,   107,    20,    20,    32,    94,
     109,    21,    39,    32,    34,    39,    94,    94,    66,    88,
      89,    93,   112,   115,   116,   117,    94,    94,    94,    31,
      94,    82,    94,    94,    94,    94,    94,    94,    94,    94,
      94,    94,    94,    94,    94,    94,    94,    94,    20,   108,
      94,    94,    94,    94,    94,    94,    40,    94,    33,     4,
      31,    40,    32,    39,    94,    20,    94,    32,    32,    35,
      87,    91,   120,    38,    32,    32,    32,    20,    32,   110,
      32,    83,    40,    94,    34,    40,    40,    94,    82,    32,
     110,    94,    20,    94,    21,    36,    87,    92,    65,    93,
      21,    32,    39,    34,    34,    40,    34,    40,    94,    40,
      94,    34,    40,    83,    32,    40,    94,    36,    87,    31,
      38,    94,    20,    34,    94,    34,    94,    34,    40,    34,
      34,    40,    34,    40,    94,    86,    94,    93,    88,    21,
      34,    34,    34,    94,    34,    94,    34,    94,    34,    40,
      32,    32,    94,    34,    34,    34,    34,    94,    38,    34
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    79,    81,    80,    80,    80,    80,    80,    80,    82,
      83,    84,    85,    86,    87,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    88,
      88,    88,    88,    88,    88,    89,    90,    91,    91,    92,
      92,    93,    94,    94,    94,    94,    94,    94,    95,    95,
      96,    96,    96,    96,    96,    96,    97,    97,    97,    97,
      98,    98,    98,    98,    98,    99,    99,    99,    99,    99,
      99,    99,    99,    99,    99,    99,    99,    99,    99,    99,
      99,   100,   100,   100,   100,   100,   100,   100,   100,   101,
     101,   101,   101,   102,   102,   103,   104,   104,   105,   105,
     106,   107,   107,   107,   107,   108,   108,   109,   109,   109,
     109,   110,   110,   110,   110,   111,   111,   111,   111,   111,
     111,   111,   111,   111,   111,   111,   111,   111,   111,   111,
     111,   111,   111,   111,   111,   111,   111,   112,   113,   114,
     115,   116,   116,   117,   118,   118,   119,   119,   120,   120,
     121,   121,   121,   121,   122,   123,   123
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     8,     6,     3,     3,     0,     1,     0,
       0,     0,     0,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     1,     3,     2,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     3,     3,     3,     3,     2,     2,     2,     2,
       2,     2,     3,     2,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       3,     2,     3,     3,     2,     4,     1,     3,     2,     3,
       2,     1,     3,     3,     5,     4,     3,     1,     3,     3,
       5,     1,     3,     3,     5,     3,     5,     6,     7,     4,
       5,     6,     4,     5,     6,     4,     4,     6,     7,     8,
       5,     6,     7,     5,     6,     7,     5,     4,     1,     4,
       8,     4,     1,     7,     1,     4,     1,     4,     1,     1,
       5,     4,     6,     5,     2,     1,     2
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
#line 168 "bello.y"
                                           {(yyval.intVl) = 0; }
#line 1929 "y.tab.c"
    break;

  case 6: /* statement: statement END_FILE close_execute_last_statement  */
#line 174 "bello.y"
                                                       { return 0; }
#line 1935 "y.tab.c"
    break;

  case 8: /* statement: error  */
#line 176 "bello.y"
            { yyerrok; }
#line 1941 "y.tab.c"
    break;

  case 9: /* check_indent: %empty  */
#line 180 "bello.y"
      { 
        if (((yyvsp[(-2) - (0)].intVl))>lstIndt+1) 
        {
           yyclearin;
           yyerrok;
        }
      }
#line 1953 "y.tab.c"
    break;

  case 10: /* build_statement_stack: %empty  */
#line 190 "bello.y"
    {   
        int indt = (yyvsp[(-3) - (0)].intVl);

        //如果是当前句的indent == 上1句的indent + 1，则检查上1句是否有语句体，如上1句允许语句体，语句入栈
        if (indt == lstIndt + 1 )
        {
            if (stmtStk.back()->alwSubStmt)
            {
                //语句入栈
                pshStmt(indt, (yyvsp[(-2) - (0)].stmt));
            }
            else
            {
                yyerrok;
            }
        }
        else if (indt == lstIndt)
        {
            //语句入栈
            pshStmt(indt, (yyvsp[(-2) - (0)].stmt));

        }
        else if (indt < lstIndt)
        {
            int nowIndt = indt;

            int idx;

            //折叠输入的句子以上的缩进大于该输入的句子，结果为栈中缩进最大的句子为输入的句子及其以上同等缩进的句子
            fldStmt(nowIndt);

            //输入的句子入栈
            pshStmt(indt, (yyvsp[(-2) - (0)].stmt));
            
        }

        lstIndt = indt;
    }
#line 1996 "y.tab.c"
    break;

  case 11: /* close_execute_statement: %empty  */
#line 232 "bello.y"
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

                //如果不允许执行上一条顶级语句
                exctStmt(envr, stmtStk.back()->stmt);
                stmtStk.pop_back();

            }

        }

    }
#line 2042 "y.tab.c"
    break;

  case 12: /* close_execute_last_statement: %empty  */
#line 277 "bello.y"
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
#line 2091 "y.tab.c"
    break;

  case 13: /* execute_single_statement: %empty  */
#line 324 "bello.y"
    { 
        //printf("alw sub stmt: %d\n", stmtStk.back()->alwSubStmt);

        //只在无缩进且不允许第2主句的情况下执行语句
        if ((yyvsp[(-4) - (0)].intVl) != 0 || stmtStk.back()->alwSubStmt == 1)
        {
            break;
        }
        else
        {
            exctStmt(envr, stmtStk.back()->stmt);
            stmtStk.pop_back();
        }
  
    }
#line 2111 "y.tab.c"
    break;

  case 14: /* single_statement: expression_statement  */
#line 342 "bello.y"
                           { (yyval.stmt)=(yyvsp[0].stmt); }
#line 2117 "y.tab.c"
    break;

  case 15: /* single_statement: if_statement  */
#line 343 "bello.y"
                   { (yyval.stmt)=(yyvsp[0].stmt); }
#line 2123 "y.tab.c"
    break;

  case 16: /* single_statement: else_statement  */
#line 344 "bello.y"
                     { (yyval.stmt)=(yyvsp[0].stmt); }
#line 2129 "y.tab.c"
    break;

  case 17: /* single_statement: elseif_statement  */
#line 345 "bello.y"
                       { (yyval.stmt)=(yyvsp[0].stmt); }
#line 2135 "y.tab.c"
    break;

  case 18: /* single_statement: for_statement  */
#line 346 "bello.y"
                    { (yyval.stmt)=(yyvsp[0].stmt); }
#line 2141 "y.tab.c"
    break;

  case 19: /* single_statement: while_statement  */
#line 347 "bello.y"
                      { (yyval.stmt)=(yyvsp[0].stmt); }
#line 2147 "y.tab.c"
    break;

  case 20: /* single_statement: break_statement  */
#line 349 "bello.y"
                      { (yyval.stmt)=(yyvsp[0].stmt); }
#line 2153 "y.tab.c"
    break;

  case 21: /* single_statement: continue_statement  */
#line 350 "bello.y"
                          { (yyval.stmt)=(yyvsp[0].stmt); }
#line 2159 "y.tab.c"
    break;

  case 22: /* single_statement: return_statement  */
#line 351 "bello.y"
                        { (yyval.stmt)=(yyvsp[0].stmt); }
#line 2165 "y.tab.c"
    break;

  case 23: /* single_statement: function_statement  */
#line 352 "bello.y"
                         { (yyval.stmt)=(yyvsp[0].stmt); }
#line 2171 "y.tab.c"
    break;

  case 24: /* single_statement: nop_statement  */
#line 354 "bello.y"
                    { (yyval.stmt)=(yyvsp[0].stmt); }
#line 2177 "y.tab.c"
    break;

  case 25: /* single_statement: var_statement  */
#line 355 "bello.y"
                     { (yyval.stmt) = (yyvsp[0].stmt);}
#line 2183 "y.tab.c"
    break;

  case 26: /* single_statement: global_statement  */
#line 356 "bello.y"
                        { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2189 "y.tab.c"
    break;

  case 27: /* single_statement: class_statement  */
#line 357 "bello.y"
                      { (yyval.stmt)= (yyvsp[0].stmt); }
#line 2195 "y.tab.c"
    break;

  case 28: /* single_statement: error  */
#line 359 "bello.y"
    { 
        (yyval.stmt)=bldNllStmt(); 
        yyclearin; 
        yyerrok; 
    }
#line 2205 "y.tab.c"
    break;

  case 35: /* null_statement: %empty  */
#line 377 "bello.y"
      { (yyval.stmt)=bldNllStmt(); }
#line 2211 "y.tab.c"
    break;

  case 36: /* nop_statement: NOP  */
#line 380 "bello.y"
          { (yyval.stmt)=bldNllStmt(); }
#line 2217 "y.tab.c"
    break;

  case 37: /* statement_block: LEFT_BRACE block_list RIGHT_BRACE  */
#line 383 "bello.y"
                                        { (yyval.stmt)=(yyvsp[-1].stmt); }
#line 2223 "y.tab.c"
    break;

  case 38: /* statement_block: LEFT_BRACE RIGHT_BRACE  */
#line 384 "bello.y"
                             { (yyval.stmt)=bldNllStmt(); }
#line 2229 "y.tab.c"
    break;

  case 39: /* block_list: single_statement  */
#line 388 "bello.y"
    { 
        (yyval.stmt)=bldStmtBlk(); 
        stmtBlkAdd((yyval.stmt), (yyvsp[0].stmt)); 
    }
#line 2238 "y.tab.c"
    break;

  case 40: /* block_list: block_list single_statement  */
#line 393 "bello.y"
    {
        (yyval.stmt) = stmtBlkAdd((yyvsp[-1].stmt) ,(yyvsp[0].stmt));
    }
#line 2246 "y.tab.c"
    break;

  case 41: /* expression_statement: expression  */
#line 400 "bello.y"
    { 
        (yyval.stmt)=bldExpStmt((yyvsp[0].exp)); 
    }
#line 2254 "y.tab.c"
    break;

  case 44: /* expression: unary_expression  */
#line 407 "bello.y"
                       { (yyval.exp)=(yyvsp[0].exp); }
#line 2260 "y.tab.c"
    break;

  case 45: /* expression: binary_expression  */
#line 408 "bello.y"
                        { (yyval.exp)=(yyvsp[0].exp); }
#line 2266 "y.tab.c"
    break;

  case 46: /* expression: array_expression  */
#line 409 "bello.y"
                       { (yyval.exp)=(yyvsp[0].exp); }
#line 2272 "y.tab.c"
    break;

  case 47: /* expression: new_array_expression  */
#line 410 "bello.y"
                           { (yyval.exp) = (yyvsp[0].exp); }
#line 2278 "y.tab.c"
    break;

  case 50: /* assign_expression: lvalue_expression ASSIGN expression  */
#line 417 "bello.y"
                                          { (yyval.exp)=bldAsgnExp((yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2284 "y.tab.c"
    break;

  case 51: /* assign_expression: lvalue_expression ADD_ASSIGN expression  */
#line 418 "bello.y"
                                              { (yyval.exp)=bldAsgnExp((yyvsp[-2].exp), bldBnrExp(ADD, (yyvsp[-2].exp), (yyvsp[0].exp))); }
#line 2290 "y.tab.c"
    break;

  case 52: /* assign_expression: lvalue_expression SUB_ASSIGN expression  */
#line 419 "bello.y"
                                              { (yyval.exp)=bldAsgnExp((yyvsp[-2].exp), bldBnrExp(SUB, (yyvsp[-2].exp), (yyvsp[0].exp))); }
#line 2296 "y.tab.c"
    break;

  case 53: /* assign_expression: lvalue_expression MUL_ASSIGN expression  */
#line 420 "bello.y"
                                              { (yyval.exp)=bldAsgnExp((yyvsp[-2].exp), bldBnrExp(MUL, (yyvsp[-2].exp), (yyvsp[0].exp))); }
#line 2302 "y.tab.c"
    break;

  case 54: /* assign_expression: lvalue_expression DIV_ASSIGN expression  */
#line 421 "bello.y"
                                              { (yyval.exp)=bldAsgnExp((yyvsp[-2].exp), bldBnrExp(DIV, (yyvsp[-2].exp), (yyvsp[0].exp))); }
#line 2308 "y.tab.c"
    break;

  case 55: /* assign_expression: lvalue_expression MOD_ASSIGN expression  */
#line 422 "bello.y"
                                              { (yyval.exp)=bldAsgnExp((yyvsp[-2].exp), bldBnrExp(MOD, (yyvsp[-2].exp), (yyvsp[0].exp))); }
#line 2314 "y.tab.c"
    break;

  case 56: /* self_operation_expression: INCREMENT lvalue_expression  */
#line 426 "bello.y"
                                  { (yyval.exp)=bldUnrExp(PREFIX_INCREMENT, (yyvsp[0].exp)); }
#line 2320 "y.tab.c"
    break;

  case 57: /* self_operation_expression: DECREMENT lvalue_expression  */
#line 427 "bello.y"
                                  { (yyval.exp)=bldUnrExp(PREFIX_DECREMENT, (yyvsp[0].exp)); }
#line 2326 "y.tab.c"
    break;

  case 58: /* self_operation_expression: lvalue_expression INCREMENT  */
#line 428 "bello.y"
                                  { (yyval.exp)=bldUnrExp(SUFFIX_INCREMENT, (yyvsp[-1].exp)); }
#line 2332 "y.tab.c"
    break;

  case 59: /* self_operation_expression: lvalue_expression DECREMENT  */
#line 429 "bello.y"
                                  { (yyval.exp)=bldUnrExp(SUFFIX_DECREMENT, (yyvsp[-1].exp)); }
#line 2338 "y.tab.c"
    break;

  case 60: /* unary_expression: SUB expression  */
#line 432 "bello.y"
                                      { (yyval.exp) = bldUnrExp(SUB, (yyvsp[0].exp)); }
#line 2344 "y.tab.c"
    break;

  case 61: /* unary_expression: ADD expression  */
#line 433 "bello.y"
                                     { (yyval.exp) = bldUnrExp(ADD, (yyvsp[0].exp)); }
#line 2350 "y.tab.c"
    break;

  case 62: /* unary_expression: LEFT_PAREN expression RIGHT_PAREN  */
#line 434 "bello.y"
                                        { (yyval.exp)=(yyvsp[-1].exp); }
#line 2356 "y.tab.c"
    break;

  case 63: /* unary_expression: NOT expression  */
#line 435 "bello.y"
                     { (yyval.exp)=bldUnrExp(NOT, (yyvsp[0].exp)); }
#line 2362 "y.tab.c"
    break;

  case 64: /* unary_expression: BIT_NOT expression  */
#line 436 "bello.y"
                         { (yyval.exp)=bldUnrExp(BIT_NOT, (yyvsp[0].exp)); }
#line 2368 "y.tab.c"
    break;

  case 65: /* binary_expression: expression ADD expression  */
#line 439 "bello.y"
                                { (yyval.exp)=bldBnrExp(ADD, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2374 "y.tab.c"
    break;

  case 66: /* binary_expression: expression SUB expression  */
#line 440 "bello.y"
                                { (yyval.exp)=bldBnrExp(SUB, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2380 "y.tab.c"
    break;

  case 67: /* binary_expression: expression MUL expression  */
#line 441 "bello.y"
                                { (yyval.exp)=bldBnrExp(MUL, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2386 "y.tab.c"
    break;

  case 68: /* binary_expression: expression DIV expression  */
#line 442 "bello.y"
                                { (yyval.exp)=bldBnrExp(DIV, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2392 "y.tab.c"
    break;

  case 69: /* binary_expression: expression MOD expression  */
#line 443 "bello.y"
                                { (yyval.exp)=bldBnrExp(MOD, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2398 "y.tab.c"
    break;

  case 70: /* binary_expression: expression AND expression  */
#line 444 "bello.y"
                                { (yyval.exp)=bldBnrExp(AND, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2404 "y.tab.c"
    break;

  case 71: /* binary_expression: expression OR expression  */
#line 445 "bello.y"
                               { (yyval.exp)=bldBnrExp(OR, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2410 "y.tab.c"
    break;

  case 72: /* binary_expression: expression EQ expression  */
#line 446 "bello.y"
                               { (yyval.exp)=bldBnrExp(EQ, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2416 "y.tab.c"
    break;

  case 73: /* binary_expression: expression NE expression  */
#line 447 "bello.y"
                               { (yyval.exp)=bldBnrExp(NE, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2422 "y.tab.c"
    break;

  case 74: /* binary_expression: expression GT expression  */
#line 448 "bello.y"
                               { (yyval.exp)=bldBnrExp(GT, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2428 "y.tab.c"
    break;

  case 75: /* binary_expression: expression GE expression  */
#line 449 "bello.y"
                               { (yyval.exp)=bldBnrExp(GE, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2434 "y.tab.c"
    break;

  case 76: /* binary_expression: expression LT expression  */
#line 450 "bello.y"
                               { (yyval.exp)=bldBnrExp(LT, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2440 "y.tab.c"
    break;

  case 77: /* binary_expression: expression LE expression  */
#line 451 "bello.y"
                               { (yyval.exp)=bldBnrExp(LE, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2446 "y.tab.c"
    break;

  case 78: /* binary_expression: expression BIT_AND expression  */
#line 452 "bello.y"
                                    { (yyval.exp)=bldBnrExp(BIT_AND, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2452 "y.tab.c"
    break;

  case 79: /* binary_expression: expression BIT_OR expression  */
#line 453 "bello.y"
                                   { (yyval.exp)=bldBnrExp(BIT_OR, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2458 "y.tab.c"
    break;

  case 80: /* binary_expression: expression BIT_XOR expression  */
#line 454 "bello.y"
                                    { (yyval.exp)=bldBnrExp(BIT_XOR, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2464 "y.tab.c"
    break;

  case 81: /* value_expression: INT_VALUE  */
#line 458 "bello.y"
                { (yyval.exp)=bldCnstIntExp((yyvsp[0].intVl)); /*printf("Get data: %d\n",$1);*/ }
#line 2470 "y.tab.c"
    break;

  case 82: /* value_expression: FLOAT_VALUE  */
#line 459 "bello.y"
                  { (yyval.exp)=bldCnstFltExp((yyvsp[0].fltVl)); }
#line 2476 "y.tab.c"
    break;

  case 83: /* value_expression: BOOLEAN_VALUE  */
#line 460 "bello.y"
                    { (yyval.exp)=bldCnstBlnExp((yyvsp[0].blnVl)); }
#line 2482 "y.tab.c"
    break;

  case 84: /* value_expression: STRING_VALUE  */
#line 461 "bello.y"
                   { (yyval.exp)=bldCnstStrExp((yyvsp[0].strVl)); }
#line 2488 "y.tab.c"
    break;

  case 85: /* value_expression: NULL_VALUE  */
#line 462 "bello.y"
                 { (yyval.exp)=bldCnstNllExp(); }
#line 2494 "y.tab.c"
    break;

  case 88: /* value_expression: NEW IDENTIFER  */
#line 465 "bello.y"
                    { (yyval.exp)= bldNewExp((yyvsp[0].idtf)); }
#line 2500 "y.tab.c"
    break;

  case 89: /* lvalue_expression: IDENTIFER  */
#line 468 "bello.y"
                { (yyval.exp)= bldLvlExp(bldVrbExp((yyvsp[0].idtf))); }
#line 2506 "y.tab.c"
    break;

  case 90: /* lvalue_expression: lvalue_expression DOT IDENTIFER  */
#line 470 "bello.y"
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
#line 2525 "y.tab.c"
    break;

  case 91: /* lvalue_expression: lvalue_expression evaluate_list  */
#line 485 "bello.y"
    { 
        (yyval.exp)=(yyvsp[-1].exp); 
        bldLvlExpAdd((yyvsp[-1].exp), (yyvsp[0].evlLst)); 
    }
#line 2534 "y.tab.c"
    break;

  case 92: /* lvalue_expression: lvalue_expression DOT function_expression  */
#line 490 "bello.y"
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
#line 2559 "y.tab.c"
    break;

  case 93: /* array_expression: LEFT_QUAD element_list RIGHT_QUAD  */
#line 554 "bello.y"
    {
        (yyval.exp)= bldArrExp((yyvsp[-1].elmtLst));
    }
#line 2567 "y.tab.c"
    break;

  case 94: /* array_expression: LEFT_QUAD RIGHT_QUAD  */
#line 558 "bello.y"
    {
        (yyval.exp)= bldArrExp(bldElmtLst());
    }
#line 2575 "y.tab.c"
    break;

  case 95: /* new_array_expression: NEW_ARRAY LEFT_PAREN expression RIGHT_PAREN  */
#line 564 "bello.y"
    {
        (yyval.exp) = bldNewArrExp((yyvsp[-1].exp));
    }
#line 2583 "y.tab.c"
    break;

  case 96: /* element_list: expression  */
#line 570 "bello.y"
    { 
        (yyval.elmtLst)= bldElmtLst(); 
        elmtLstAdd((yyval.elmtLst), (yyvsp[0].exp)); 
    }
#line 2592 "y.tab.c"
    break;

  case 97: /* element_list: element_list COMMA expression  */
#line 575 "bello.y"
    {  
        (yyval.elmtLst)=(yyvsp[-2].elmtLst);  
        elmtLstAdd((yyval.elmtLst), (yyvsp[0].exp)); 
    }
#line 2601 "y.tab.c"
    break;

  case 98: /* var_statement: VAR assign_list  */
#line 583 "bello.y"
    { 
        //建立变量
        if (blnDfnCls==false)
        {
            (yyval.stmt)=bldVarStmt((yyvsp[0].asgnLst)); 
        }
        else
        {
            (yyval.stmt)=bldVarStmt(CLASS_VAR_STATEMENT, (yyvsp[0].asgnLst));
        }
    }
#line 2617 "y.tab.c"
    break;

  case 99: /* var_statement: SHARED VAR assign_list  */
#line 595 "bello.y"
    {
        //需要是类定义状态
        if (blnDfnCls==1)
        {
            (yyval.stmt) = bldVarStmt(CLASS_SHARED_VAR_STATEMENT, (yyvsp[0].asgnLst)); 
        } 
        else
        {
            yyclearin;   
            yyerrok;
        }
    }
#line 2634 "y.tab.c"
    break;

  case 100: /* global_statement: GLOBAL assign_list  */
#line 609 "bello.y"
                         { (yyval.stmt)=bldGlbStmt((yyvsp[0].asgnLst)); }
#line 2640 "y.tab.c"
    break;

  case 101: /* assign_list: IDENTIFER  */
#line 613 "bello.y"
    {
        (yyval.asgnLst)= bldAsgnLst();
        asgnLstAdd((yyval.asgnLst), bldVrbExp((yyvsp[0].idtf)), bldNllExp());
    }
#line 2649 "y.tab.c"
    break;

  case 102: /* assign_list: IDENTIFER ASSIGN expression  */
#line 618 "bello.y"
    {
        (yyval.asgnLst)= bldAsgnLst();
        asgnLstAdd((yyval.asgnLst), bldVrbExp((yyvsp[-2].idtf)), (yyvsp[0].exp));
    }
#line 2658 "y.tab.c"
    break;

  case 103: /* assign_list: assign_list COMMA IDENTIFER  */
#line 623 "bello.y"
    {
        (yyval.asgnLst)=(yyvsp[-2].asgnLst);
        asgnLstAdd((yyval.asgnLst), bldVrbExp((yyvsp[0].idtf)), bldNllExp());
    }
#line 2667 "y.tab.c"
    break;

  case 104: /* assign_list: assign_list COMMA IDENTIFER ASSIGN expression  */
#line 628 "bello.y"
    {
        (yyval.asgnLst)=(yyvsp[-4].asgnLst);
        asgnLstAdd((yyval.asgnLst), bldVrbExp((yyvsp[-2].idtf)), (yyvsp[0].exp));
    }
#line 2676 "y.tab.c"
    break;

  case 105: /* function_expression: IDENTIFER LEFT_PAREN argument_list RIGHT_PAREN  */
#line 639 "bello.y"
    {
        (yyval.exp)=bldFcnExp((yyvsp[-3].idtf), (yyvsp[-1].argLst));
    }
#line 2684 "y.tab.c"
    break;

  case 106: /* function_expression: IDENTIFER LEFT_PAREN RIGHT_PAREN  */
#line 643 "bello.y"
    {
        (yyval.exp)=bldFcnExp((yyvsp[-2].idtf), bldArgLst());
    }
#line 2692 "y.tab.c"
    break;

  case 107: /* argument_list: expression  */
#line 649 "bello.y"
    {
        (yyval.argLst)=bldArgLst();
        argLstAdd((yyval.argLst), (yyvsp[0].exp));
    }
#line 2701 "y.tab.c"
    break;

  case 108: /* argument_list: IDENTIFER COLON expression  */
#line 654 "bello.y"
    {
        (yyval.argLst) = bldArgLst();
        argLstAdd((yyval.argLst), bldVrbExp((yyvsp[-2].idtf)), (yyvsp[0].exp));
    }
#line 2710 "y.tab.c"
    break;

  case 109: /* argument_list: argument_list COMMA expression  */
#line 659 "bello.y"
    {
        (yyval.argLst) = (yyvsp[-2].argLst);
        argLstAdd((yyval.argLst), (yyvsp[0].exp));
    }
#line 2719 "y.tab.c"
    break;

  case 110: /* argument_list: argument_list COMMA IDENTIFER COLON expression  */
#line 664 "bello.y"
    {
        (yyval.argLst) = (yyvsp[-4].argLst);
        argLstAdd((yyval.argLst), bldVrbExp((yyvsp[-2].idtf)), (yyvsp[0].exp));
    }
#line 2728 "y.tab.c"
    break;

  case 111: /* parameter_list: IDENTIFER  */
#line 671 "bello.y"
    {
        (yyval.prmLst) = bldPrmLst();
        prmLstAdd((yyval.prmLst), bldVrbExp((yyvsp[0].idtf)));
    }
#line 2737 "y.tab.c"
    break;

  case 112: /* parameter_list: IDENTIFER ASSIGN expression  */
#line 676 "bello.y"
    {
        (yyval.prmLst) = bldPrmLst();
        prmLstAdd((yyval.prmLst), bldVrbExp((yyvsp[-2].idtf)), (yyvsp[0].exp));
    }
#line 2746 "y.tab.c"
    break;

  case 113: /* parameter_list: parameter_list COMMA IDENTIFER  */
#line 681 "bello.y"
    { 
        (yyval.prmLst) = (yyvsp[-2].prmLst);  
        prmLstAdd((yyval.prmLst), bldVrbExp((yyvsp[0].idtf)));
    }
#line 2755 "y.tab.c"
    break;

  case 114: /* parameter_list: parameter_list COMMA IDENTIFER ASSIGN expression  */
#line 686 "bello.y"
    {
        (yyval.prmLst) = (yyvsp[-4].prmLst);
        prmLstAdd((yyval.prmLst), bldVrbExp((yyvsp[-2].idtf)), (yyvsp[0].exp));
    }
#line 2764 "y.tab.c"
    break;

  case 115: /* evaluate_list: LEFT_QUAD expression RIGHT_QUAD  */
#line 695 "bello.y"
    {
        (yyval.evlLst) = bldAcsLst();
        acsLstIdxAdd((yyval.evlLst), (yyvsp[-1].exp));
    }
#line 2773 "y.tab.c"
    break;

  case 116: /* evaluate_list: LEFT_QUAD expression COLON expression RIGHT_QUAD  */
#line 700 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-3].exp), (yyvsp[-1].exp), bldCnstIntExp(1));
    }
#line 2782 "y.tab.c"
    break;

  case 117: /* evaluate_list: LEFT_QUAD expression COLON expression COLON RIGHT_QUAD  */
#line 705 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-4].exp), (yyvsp[-2].exp), bldCnstIntExp(1));
    }
#line 2791 "y.tab.c"
    break;

  case 118: /* evaluate_list: LEFT_QUAD expression COLON expression COLON expression RIGHT_QUAD  */
#line 710 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-5].exp), (yyvsp[-3].exp), (yyvsp[-1].exp));
    }
#line 2800 "y.tab.c"
    break;

  case 119: /* evaluate_list: LEFT_QUAD expression COLON RIGHT_QUAD  */
#line 715 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-2].exp), bldCnstIntExp(-1), bldCnstIntExp(1));
    }
#line 2809 "y.tab.c"
    break;

  case 120: /* evaluate_list: LEFT_QUAD expression COLON COLON RIGHT_QUAD  */
#line 720 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-3].exp), bldCnstIntExp(-1), bldCnstIntExp(1));
    }
#line 2818 "y.tab.c"
    break;

  case 121: /* evaluate_list: LEFT_QUAD expression COLON COLON expression RIGHT_QUAD  */
#line 725 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-4].exp), bldCnstIntExp(-1), (yyvsp[-1].exp));
    }
#line 2827 "y.tab.c"
    break;

  case 122: /* evaluate_list: LEFT_QUAD COLON expression RIGHT_QUAD  */
#line 730 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), (yyvsp[-1].exp), bldCnstIntExp(1));
    }
#line 2836 "y.tab.c"
    break;

  case 123: /* evaluate_list: LEFT_QUAD COLON expression COLON RIGHT_QUAD  */
#line 735 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), (yyvsp[-2].exp), bldCnstIntExp(1));
    }
#line 2845 "y.tab.c"
    break;

  case 124: /* evaluate_list: LEFT_QUAD COLON expression COLON expression RIGHT_QUAD  */
#line 740 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), (yyvsp[-3].exp), (yyvsp[-1].exp));
    }
#line 2854 "y.tab.c"
    break;

  case 125: /* evaluate_list: LEFT_QUAD COLON COLON RIGHT_QUAD  */
#line 745 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), bldCnstIntExp(-1), bldCnstIntExp(1));
    }
#line 2863 "y.tab.c"
    break;

  case 126: /* evaluate_list: evaluate_list LEFT_QUAD expression RIGHT_QUAD  */
#line 750 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-3].evlLst);
        acsLstIdxAdd((yyval.evlLst),(yyvsp[-1].exp));
    }
#line 2872 "y.tab.c"
    break;

  case 127: /* evaluate_list: evaluate_list LEFT_QUAD expression COLON expression RIGHT_QUAD  */
#line 755 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-5].evlLst);
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-3].exp), (yyvsp[-1].exp), bldCnstIntExp(1));
    }
#line 2881 "y.tab.c"
    break;

  case 128: /* evaluate_list: evaluate_list LEFT_QUAD expression COLON expression COLON RIGHT_QUAD  */
#line 760 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-6].evlLst);
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-4].exp), (yyvsp[-2].exp), bldCnstIntExp(1));
    }
#line 2890 "y.tab.c"
    break;

  case 129: /* evaluate_list: evaluate_list LEFT_QUAD expression COLON expression COLON expression RIGHT_QUAD  */
#line 765 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-7].evlLst);
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-5].exp), (yyvsp[-3].exp), (yyvsp[-1].exp));
    }
#line 2899 "y.tab.c"
    break;

  case 130: /* evaluate_list: evaluate_list LEFT_QUAD expression COLON RIGHT_QUAD  */
#line 770 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-4].evlLst);
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-2].exp), bldCnstIntExp(-1), bldCnstIntExp(1));
    }
#line 2908 "y.tab.c"
    break;

  case 131: /* evaluate_list: evaluate_list LEFT_QUAD expression COLON COLON RIGHT_QUAD  */
#line 775 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-5].evlLst);
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-3].exp), bldCnstIntExp(-1), bldCnstIntExp(1));
    }
#line 2917 "y.tab.c"
    break;

  case 132: /* evaluate_list: evaluate_list LEFT_QUAD expression COLON COLON expression RIGHT_QUAD  */
#line 780 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-6].evlLst);
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-4].exp), bldCnstIntExp(-1), (yyvsp[-1].exp));
    }
#line 2926 "y.tab.c"
    break;

  case 133: /* evaluate_list: evaluate_list LEFT_QUAD COLON expression RIGHT_QUAD  */
#line 785 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-4].evlLst);
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), (yyvsp[-1].exp), bldCnstIntExp(1));
    }
#line 2935 "y.tab.c"
    break;

  case 134: /* evaluate_list: evaluate_list LEFT_QUAD COLON expression COLON RIGHT_QUAD  */
#line 790 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-5].evlLst);
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), (yyvsp[-2].exp), bldCnstIntExp(1));
    }
#line 2944 "y.tab.c"
    break;

  case 135: /* evaluate_list: evaluate_list LEFT_QUAD COLON expression COLON expression RIGHT_QUAD  */
#line 795 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-6].evlLst);
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), (yyvsp[-3].exp), (yyvsp[-1].exp));
    }
#line 2953 "y.tab.c"
    break;

  case 136: /* evaluate_list: evaluate_list LEFT_QUAD COLON COLON RIGHT_QUAD  */
#line 800 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-4].evlLst);
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), bldCnstIntExp(-1), bldCnstIntExp(1));
    }
#line 2962 "y.tab.c"
    break;

  case 137: /* if_statement: IF LEFT_PAREN expression RIGHT_PAREN  */
#line 818 "bello.y"
    {
        (yyval.stmt)=bldIfStmt((yyvsp[-1].exp));
        //printf("bld if stmt\n");
    }
#line 2971 "y.tab.c"
    break;

  case 138: /* else_statement: ELSE  */
#line 829 "bello.y"
    {
        (yyval.stmt) = bldElsStmt();
    }
#line 2979 "y.tab.c"
    break;

  case 139: /* elseif_statement: ELSEIF LEFT_PAREN expression RIGHT_PAREN  */
#line 835 "bello.y"
    {
        (yyval.stmt) = bldIfStmt((yyvsp[-1].exp));
    }
#line 2987 "y.tab.c"
    break;

  case 140: /* for_statement: FOR LEFT_PAREN single_statement_no_semicolon SEMICOLON expression_statement SEMICOLON single_statement_no_semicolon RIGHT_PAREN  */
#line 847 "bello.y"
    {
        (yyval.stmt)= bldForStmt((yyvsp[-5].stmt), (yyvsp[-3].stmt), (yyvsp[-1].stmt));  
    }
#line 2995 "y.tab.c"
    break;

  case 141: /* while_statement: WHILE LEFT_PAREN expression RIGHT_PAREN  */
#line 859 "bello.y"
    {
        (yyval.stmt) = bldWhlStmt((yyvsp[-1].exp));
    }
#line 3003 "y.tab.c"
    break;

  case 142: /* while_statement: WHILE  */
#line 863 "bello.y"
    {
        (yyval.stmt) = bldWhlStmt();
    }
#line 3011 "y.tab.c"
    break;

  case 143: /* do_while_statement: DO structure_statement WHILE LEFT_PAREN expression_statement RIGHT_PAREN SEMICOLON  */
#line 869 "bello.y"
    {
        (yyval.stmt)= bldDoWhlStmt((yyvsp[-2].stmt), (yyvsp[-5].stmt));
    }
#line 3019 "y.tab.c"
    break;

  case 144: /* break_statement: BREAK  */
#line 874 "bello.y"
            { (yyval.stmt)= bldBrkStmt(bldCnstIntExp(1)); }
#line 3025 "y.tab.c"
    break;

  case 145: /* break_statement: BREAK LEFT_PAREN expression RIGHT_PAREN  */
#line 875 "bello.y"
                                              { (yyval.stmt)= bldBrkStmt((yyvsp[-1].exp)); }
#line 3031 "y.tab.c"
    break;

  case 146: /* continue_statement: CONTINUE  */
#line 878 "bello.y"
               { (yyval.stmt)= bldCntnStmt(bldCnstIntExp(1)); }
#line 3037 "y.tab.c"
    break;

  case 147: /* continue_statement: CONTINUE LEFT_PAREN expression RIGHT_PAREN  */
#line 879 "bello.y"
                                                 { (yyval.stmt)= bldCntnStmt((yyvsp[-1].exp)); }
#line 3043 "y.tab.c"
    break;

  case 150: /* function_statement: FUNC IDENTIFER LEFT_PAREN parameter_list RIGHT_PAREN  */
#line 921 "bello.y"
    {
        struct FcnStrc* fcn;

        fcn=bldFcn((yyvsp[-3].idtf), (yyvsp[-1].prmLst));

        (yyval.stmt) = bldFcnStmt(fcn);
    }
#line 3055 "y.tab.c"
    break;

  case 151: /* function_statement: FUNC IDENTIFER LEFT_PAREN RIGHT_PAREN  */
#line 929 "bello.y"
    {
        struct FcnStrc *fcn;

        fcn=bldFcn((yyvsp[-2].idtf), bldPrmLst());

        (yyval.stmt) = bldFcnStmt(fcn);
    }
#line 3067 "y.tab.c"
    break;

  case 152: /* function_statement: SHARED FUNC IDENTIFER LEFT_PAREN parameter_list RIGHT_PAREN  */
#line 937 "bello.y"
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
#line 3088 "y.tab.c"
    break;

  case 153: /* function_statement: SHARED FUNC IDENTIFER LEFT_PAREN RIGHT_PAREN  */
#line 954 "bello.y"
    {
        struct FcnStrc *fcn;

        fcn=bldFcn((yyvsp[-2].idtf), bldPrmLst());

        (yyval.stmt) = bldFcnStmt(fcn);
    }
#line 3100 "y.tab.c"
    break;

  case 154: /* class_statement: CLASS IDENTIFER  */
#line 964 "bello.y"
    {
        struct ClsStrc* cls;

        cls = bldCls((yyvsp[0].idtf));

        (yyval.stmt) = bldClsStmt(cls);

        //blnDfnCls = 1;
    }
#line 3114 "y.tab.c"
    break;

  case 155: /* return_statement: RETURN  */
#line 977 "bello.y"
             { (yyval.stmt)=bldRtnStmt(NULL); }
#line 3120 "y.tab.c"
    break;

  case 156: /* return_statement: RETURN expression  */
#line 978 "bello.y"
                        { (yyval.stmt)=bldRtnStmt((yyvsp[0].exp)); }
#line 3126 "y.tab.c"
    break;


#line 3130 "y.tab.c"

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

#line 981 "bello.y"



void fldStmt(int indt=0)
{
    if (stmtStk.size()==0)
    {
        return;
    }

    int idx;

    while (stmtStk.back()->indt > indt)
    {
        

        idx = stmtStk.size()-1;

        while (idx>0 && stmtStk.back()->indt == stmtStk.at(idx-1)->indt)
        {
            idx--;
        }

        int i = idx;

        StmtStrc* blk = bldStmtBlk();

        while (i < stmtStk.size())
        {
            stmtBlkAdd(blk, stmtStk.at(i)->stmt);

            i++;
        }

        //子语句出栈
        int nbrPop = stmtStk.size() - idx;

        for (i=0;i<nbrPop;i++)
        {
            stmtStk.pop_back();
        }

        //将语句体附加到上1级语句中
        switch(stmtStk.back()->stmt->typ)
        {
            case IF_STATEMENT:
            {
                auto ifStmt = static_cast<IfStmtStrc*>(stmtStk.back()->stmt);
                ifStmt->stmt = blk;
                ifStmt->els = nullptr;
                ifStmt->elif = nullptr;
                break;
            }
            case WHILE_STATEMENT:
            {
                auto whlStmt = static_cast<WhlStmtStrc*>(stmtStk.back()->stmt);
                whlStmt->stmt = blk;
                break;
            }
            case FOR_STATEMENT:
            {
                auto forStmt = static_cast<ForStmtStrc*>(stmtStk.back()->stmt);
                forStmt->stmt = blk;
                break;
            }
            case FUNCTION_STATEMENT:
            {
                auto fcnStmt = static_cast<FcnStmtStrc*>(stmtStk.back()->stmt);
                fcnStmt->fcn->stmt = blk;
                break;
            }
            case ELSE_STATEMENT:
            {
                auto elsStmt = static_cast<ElsStmtStrc*>(stmtStk.back()->stmt);
                elsStmt->stmt = blk;

                stmtStk.pop_back();

                auto ifStmtLst = static_cast<IfStmtStrc*>(stmtStk.back()->stmt);

                ifStmtLst->els = elsStmt->stmt;

                stmtStk.back()->blnScndStmt=1;

                break;
            }
            case ELSEIF_STATEMENT:
            {
                auto ifStmt = static_cast<IfStmtStrc*>(stmtStk.back()->stmt);
                ifStmt->stmt = blk;

                stmtStk.pop_back();

                auto ifStmtLst = static_cast<IfStmtStrc*>(stmtStk.back()->stmt);

                ifStmtLst->elif = blk;

                stmtStk.back()->blnScndStmt=1;
                
                break;
            }
            case CLASS_STATEMENT:
            {
                
                //此处未完成
                //根据类中的语句填充类

                auto clsStmt = static_cast<ClsStmtStrc*>(stmtStk.back()->stmt);

                int lnt = static_cast<StmtBlkStrc*>(blk)->stmtArr.size();

                clsStmt->cls->dfn = blk;

                break;
            }
        }

    }

}

//当前读入的语句入栈
void pshStmt(int indt, StmtStrc* stmt)
{
    StmtStkItmStrc * itm =new StmtStkItmStrc;

    itm->indt = indt;
    itm->stmt = stmt;
    itm->alwSubStmt = chkStmtAlwSubStmt(stmt);

    stmtStk.push_back(itm);
}

//打印语句栈中的语句信息的函数
void prtStmtStk()
{
    for (int i=0;i<stmtStk.size();i++)
    {
        StmtStkItmStrc* stmt =stmtStk.at(i);

        for (int j=0;j<stmt->indt;j++)
        {
            printf("\t");
        } 

        switch (stmt->stmt->typ)
        {
            case EXPRESSION_STATEMENT:
            {
                printf("expStmt\n");
                break;
            }
            case IF_STATEMENT:
            {
                printf("ifStmt\n");
                break;
            }
            case IF_ELSE_STATEMENT:
            {
                printf("ifElsStmt\n");
                break;
            }
            case ELSE_STATEMENT:
            {
                printf("elsStmt\n");                
            }
            case FOR_STATEMENT:
            {
                printf("forStmt\n");
                break;
            }
            case WHILE_STATEMENT:
            {
                printf("whlStmt\n");
                break;
            }
            case DO_WHILE_STATEMENT:
            {
                printf("doWhlStmt\n");
                break;
            }
            case STATEMENT_BLOCK:
            {
                printf("stmtBlk\n");
                break;
            }
            case BREAK_STATEMENT:
            {
                printf("brkStmt\n");
                break;
            }
            case CONTINUE_STATEMENT:
            {
                printf("cntnStmt\n");
                break;
            }
            case VAR_STATEMENT:
            {
                printf("varStmt\n");
                break;
            }
            case FUNCTION_STATEMENT:
            {
                printf("fcnStmt\n");
                break;
            }
            case CLASS_STATEMENT:
            {
                printf("clsStmt\n");
                break;
            }
            case GLOBAL_STATEMENT:
            {
                printf("glbStmt\n");
                break;
            }
            case RETURN_STATEMENT:
            {
                printf("rtnStmt\n");
                break;
            }
        }
    }
}


int main(int argc, char * argv[])
{

    //创建全局环境

    initGlbEnvr(envr);

    //可以提供代码文件供读取

    FILE *f;

    extern FILE* yyin;

    prsStt=1;

    if (argc==2)
    {
        prsStt = 2;
        f= fopen(argv[1],"r");
        yyin= f;
    }

    yyparse();
}


