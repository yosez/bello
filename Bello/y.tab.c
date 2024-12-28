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

    //prsStt为1 从标准输入读取 prsStt为2 从源文件读取
    int prsStt;

    void fldStmt(int indt);
    void pshStmt(int indt, StmtStrc* stmt);
    void prtStmtStk();

    //类定义语句的标志，0为不是类定义的状态，1为类定义的状态
    int blnDfnCls=0;


#line 135 "y.tab.c"

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
    NOP = 261,                     /* NOP  */
    CLASS = 262,                   /* CLASS  */
    SHARED = 263,                  /* SHARED  */
    THIS = 264,                    /* THIS  */
    INDENT = 265,                  /* INDENT  */
    INT_VALUE = 266,               /* INT_VALUE  */
    BOOLEAN_VALUE = 267,           /* BOOLEAN_VALUE  */
    FLOAT_VALUE = 268,             /* FLOAT_VALUE  */
    STRING_VALUE = 269,            /* STRING_VALUE  */
    NULL_VALUE = 270,              /* NULL_VALUE  */
    ARRAY_VALUE = 271,             /* ARRAY_VALUE  */
    IDENTIFER = 272,               /* IDENTIFER  */
    ASSIGN = 273,                  /* ASSIGN  */
    VAR = 274,                     /* VAR  */
    GLOBAL = 275,                  /* GLOBAL  */
    ADD_ASSIGN = 276,              /* ADD_ASSIGN  */
    SUB_ASSIGN = 277,              /* SUB_ASSIGN  */
    MUL_ASSIGN = 278,              /* MUL_ASSIGN  */
    DIV_ASSIGN = 279,              /* DIV_ASSIGN  */
    MOD_ASSIGN = 280,              /* MOD_ASSIGN  */
    PRINT = 281,                   /* PRINT  */
    PRINTLN = 282,                 /* PRINTLN  */
    LEFT_PAREN = 283,              /* LEFT_PAREN  */
    RIGHT_PAREN = 284,             /* RIGHT_PAREN  */
    LEFT_QUAD = 285,               /* LEFT_QUAD  */
    RIGHT_QUAD = 286,              /* RIGHT_QUAD  */
    LEFT_BRACE = 287,              /* LEFT_BRACE  */
    RIGHT_BRACE = 288,             /* RIGHT_BRACE  */
    SEMICOLON_OPTIONAL = 289,      /* SEMICOLON_OPTIONAL  */
    SEMICOLON = 290,               /* SEMICOLON  */
    COMMA = 291,                   /* COMMA  */
    COLON = 292,                   /* COLON  */
    ADD = 293,                     /* ADD  */
    SUB = 294,                     /* SUB  */
    MUL = 295,                     /* MUL  */
    DIV = 296,                     /* DIV  */
    MOD = 297,                     /* MOD  */
    EQ = 298,                      /* EQ  */
    NE = 299,                      /* NE  */
    GT = 300,                      /* GT  */
    GE = 301,                      /* GE  */
    LT = 302,                      /* LT  */
    LE = 303,                      /* LE  */
    AND = 304,                     /* AND  */
    OR = 305,                      /* OR  */
    NOT = 306,                     /* NOT  */
    BIT_AND = 307,                 /* BIT_AND  */
    BIT_OR = 308,                  /* BIT_OR  */
    BIT_XOR = 309,                 /* BIT_XOR  */
    BIT_NOT = 310,                 /* BIT_NOT  */
    INCREMENT = 311,               /* INCREMENT  */
    DECREMENT = 312,               /* DECREMENT  */
    IF = 313,                      /* IF  */
    ELSE = 314,                    /* ELSE  */
    FOR = 315,                     /* FOR  */
    WHILE = 316,                   /* WHILE  */
    DO = 317,                      /* DO  */
    CONTINUE = 318,                /* CONTINUE  */
    BREAK = 319,                   /* BREAK  */
    FUNC = 320,                    /* FUNC  */
    RETURN = 321,                  /* RETURN  */
    NEW_ARRAY = 322,               /* NEW_ARRAY  */
    MINUS_SIGN = 323,              /* MINUS_SIGN  */
    PLUS_SIGN = 324,               /* PLUS_SIGN  */
    READ_INT = 325,                /* READ_INT  */
    READ_FLOAT = 326,              /* READ_FLOAT  */
    READ = 327,                    /* READ  */
    READ_BOOL = 328,               /* READ_BOOL  */
    READ_LINE = 329                /* READ_LINE  */
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
#define CLASS 262
#define SHARED 263
#define THIS 264
#define INDENT 265
#define INT_VALUE 266
#define BOOLEAN_VALUE 267
#define FLOAT_VALUE 268
#define STRING_VALUE 269
#define NULL_VALUE 270
#define ARRAY_VALUE 271
#define IDENTIFER 272
#define ASSIGN 273
#define VAR 274
#define GLOBAL 275
#define ADD_ASSIGN 276
#define SUB_ASSIGN 277
#define MUL_ASSIGN 278
#define DIV_ASSIGN 279
#define MOD_ASSIGN 280
#define PRINT 281
#define PRINTLN 282
#define LEFT_PAREN 283
#define RIGHT_PAREN 284
#define LEFT_QUAD 285
#define RIGHT_QUAD 286
#define LEFT_BRACE 287
#define RIGHT_BRACE 288
#define SEMICOLON_OPTIONAL 289
#define SEMICOLON 290
#define COMMA 291
#define COLON 292
#define ADD 293
#define SUB 294
#define MUL 295
#define DIV 296
#define MOD 297
#define EQ 298
#define NE 299
#define GT 300
#define GE 301
#define LT 302
#define LE 303
#define AND 304
#define OR 305
#define NOT 306
#define BIT_AND 307
#define BIT_OR 308
#define BIT_XOR 309
#define BIT_NOT 310
#define INCREMENT 311
#define DECREMENT 312
#define IF 313
#define ELSE 314
#define FOR 315
#define WHILE 316
#define DO 317
#define CONTINUE 318
#define BREAK 319
#define FUNC 320
#define RETURN 321
#define NEW_ARRAY 322
#define MINUS_SIGN 323
#define PLUS_SIGN 324
#define READ_INT 325
#define READ_FLOAT 326
#define READ 327
#define READ_BOOL 328
#define READ_LINE 329

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

#line 358 "y.tab.c"

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
  YYSYMBOL_NOP = 6,                        /* NOP  */
  YYSYMBOL_CLASS = 7,                      /* CLASS  */
  YYSYMBOL_SHARED = 8,                     /* SHARED  */
  YYSYMBOL_THIS = 9,                       /* THIS  */
  YYSYMBOL_INDENT = 10,                    /* INDENT  */
  YYSYMBOL_INT_VALUE = 11,                 /* INT_VALUE  */
  YYSYMBOL_BOOLEAN_VALUE = 12,             /* BOOLEAN_VALUE  */
  YYSYMBOL_FLOAT_VALUE = 13,               /* FLOAT_VALUE  */
  YYSYMBOL_STRING_VALUE = 14,              /* STRING_VALUE  */
  YYSYMBOL_NULL_VALUE = 15,                /* NULL_VALUE  */
  YYSYMBOL_ARRAY_VALUE = 16,               /* ARRAY_VALUE  */
  YYSYMBOL_IDENTIFER = 17,                 /* IDENTIFER  */
  YYSYMBOL_ASSIGN = 18,                    /* ASSIGN  */
  YYSYMBOL_VAR = 19,                       /* VAR  */
  YYSYMBOL_GLOBAL = 20,                    /* GLOBAL  */
  YYSYMBOL_ADD_ASSIGN = 21,                /* ADD_ASSIGN  */
  YYSYMBOL_SUB_ASSIGN = 22,                /* SUB_ASSIGN  */
  YYSYMBOL_MUL_ASSIGN = 23,                /* MUL_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 24,                /* DIV_ASSIGN  */
  YYSYMBOL_MOD_ASSIGN = 25,                /* MOD_ASSIGN  */
  YYSYMBOL_PRINT = 26,                     /* PRINT  */
  YYSYMBOL_PRINTLN = 27,                   /* PRINTLN  */
  YYSYMBOL_LEFT_PAREN = 28,                /* LEFT_PAREN  */
  YYSYMBOL_RIGHT_PAREN = 29,               /* RIGHT_PAREN  */
  YYSYMBOL_LEFT_QUAD = 30,                 /* LEFT_QUAD  */
  YYSYMBOL_RIGHT_QUAD = 31,                /* RIGHT_QUAD  */
  YYSYMBOL_LEFT_BRACE = 32,                /* LEFT_BRACE  */
  YYSYMBOL_RIGHT_BRACE = 33,               /* RIGHT_BRACE  */
  YYSYMBOL_SEMICOLON_OPTIONAL = 34,        /* SEMICOLON_OPTIONAL  */
  YYSYMBOL_SEMICOLON = 35,                 /* SEMICOLON  */
  YYSYMBOL_COMMA = 36,                     /* COMMA  */
  YYSYMBOL_COLON = 37,                     /* COLON  */
  YYSYMBOL_ADD = 38,                       /* ADD  */
  YYSYMBOL_SUB = 39,                       /* SUB  */
  YYSYMBOL_MUL = 40,                       /* MUL  */
  YYSYMBOL_DIV = 41,                       /* DIV  */
  YYSYMBOL_MOD = 42,                       /* MOD  */
  YYSYMBOL_EQ = 43,                        /* EQ  */
  YYSYMBOL_NE = 44,                        /* NE  */
  YYSYMBOL_GT = 45,                        /* GT  */
  YYSYMBOL_GE = 46,                        /* GE  */
  YYSYMBOL_LT = 47,                        /* LT  */
  YYSYMBOL_LE = 48,                        /* LE  */
  YYSYMBOL_AND = 49,                       /* AND  */
  YYSYMBOL_OR = 50,                        /* OR  */
  YYSYMBOL_NOT = 51,                       /* NOT  */
  YYSYMBOL_BIT_AND = 52,                   /* BIT_AND  */
  YYSYMBOL_BIT_OR = 53,                    /* BIT_OR  */
  YYSYMBOL_BIT_XOR = 54,                   /* BIT_XOR  */
  YYSYMBOL_BIT_NOT = 55,                   /* BIT_NOT  */
  YYSYMBOL_INCREMENT = 56,                 /* INCREMENT  */
  YYSYMBOL_DECREMENT = 57,                 /* DECREMENT  */
  YYSYMBOL_IF = 58,                        /* IF  */
  YYSYMBOL_ELSE = 59,                      /* ELSE  */
  YYSYMBOL_FOR = 60,                       /* FOR  */
  YYSYMBOL_WHILE = 61,                     /* WHILE  */
  YYSYMBOL_DO = 62,                        /* DO  */
  YYSYMBOL_CONTINUE = 63,                  /* CONTINUE  */
  YYSYMBOL_BREAK = 64,                     /* BREAK  */
  YYSYMBOL_FUNC = 65,                      /* FUNC  */
  YYSYMBOL_RETURN = 66,                    /* RETURN  */
  YYSYMBOL_NEW_ARRAY = 67,                 /* NEW_ARRAY  */
  YYSYMBOL_MINUS_SIGN = 68,                /* MINUS_SIGN  */
  YYSYMBOL_PLUS_SIGN = 69,                 /* PLUS_SIGN  */
  YYSYMBOL_READ_INT = 70,                  /* READ_INT  */
  YYSYMBOL_READ_FLOAT = 71,                /* READ_FLOAT  */
  YYSYMBOL_READ = 72,                      /* READ  */
  YYSYMBOL_READ_BOOL = 73,                 /* READ_BOOL  */
  YYSYMBOL_READ_LINE = 74,                 /* READ_LINE  */
  YYSYMBOL_YYACCEPT = 75,                  /* $accept  */
  YYSYMBOL_statement = 76,                 /* statement  */
  YYSYMBOL_77_1 = 77,                      /* @1  */
  YYSYMBOL_check_indent = 78,              /* check_indent  */
  YYSYMBOL_build_statement = 79,           /* build_statement  */
  YYSYMBOL_close_execute_statement = 80,   /* close_execute_statement  */
  YYSYMBOL_close_execute_last_statement = 81, /* close_execute_last_statement  */
  YYSYMBOL_execute_statement = 82,         /* execute_statement  */
  YYSYMBOL_single_statement = 83,          /* single_statement  */
  YYSYMBOL_single_statement_no_semicolon = 84, /* single_statement_no_semicolon  */
  YYSYMBOL_null_statement = 85,            /* null_statement  */
  YYSYMBOL_nop_statement = 86,             /* nop_statement  */
  YYSYMBOL_statement_block = 87,           /* statement_block  */
  YYSYMBOL_block_list = 88,                /* block_list  */
  YYSYMBOL_expression_statement = 89,      /* expression_statement  */
  YYSYMBOL_expression = 90,                /* expression  */
  YYSYMBOL_lvalue_operation_expression = 91, /* lvalue_operation_expression  */
  YYSYMBOL_assign_expression = 92,         /* assign_expression  */
  YYSYMBOL_self_operation_expression = 93, /* self_operation_expression  */
  YYSYMBOL_unary_expression = 94,          /* unary_expression  */
  YYSYMBOL_binary_expression = 95,         /* binary_expression  */
  YYSYMBOL_value_expression = 96,          /* value_expression  */
  YYSYMBOL_lvalue_expression = 97,         /* lvalue_expression  */
  YYSYMBOL_array_expression = 98,          /* array_expression  */
  YYSYMBOL_new_array_expression = 99,      /* new_array_expression  */
  YYSYMBOL_element_list = 100,             /* element_list  */
  YYSYMBOL_var_statement = 101,            /* var_statement  */
  YYSYMBOL_global_statement = 102,         /* global_statement  */
  YYSYMBOL_assign_list = 103,              /* assign_list  */
  YYSYMBOL_function_expression = 104,      /* function_expression  */
  YYSYMBOL_argument_list = 105,            /* argument_list  */
  YYSYMBOL_evaluate_list = 106,            /* evaluate_list  */
  YYSYMBOL_if_statement = 107,             /* if_statement  */
  YYSYMBOL_else_statement = 108,           /* else_statement  */
  YYSYMBOL_for_statement = 109,            /* for_statement  */
  YYSYMBOL_while_statement = 110,          /* while_statement  */
  YYSYMBOL_do_while_statement = 111,       /* do_while_statement  */
  YYSYMBOL_break_statement = 112,          /* break_statement  */
  YYSYMBOL_continue_statement = 113,       /* continue_statement  */
  YYSYMBOL_structure_statement = 114,      /* structure_statement  */
  YYSYMBOL_FUNCTION_STATEMENT = 115,       /* FUNCTION_STATEMENT  */
  YYSYMBOL_CLASS_STATEMENT = 116,          /* CLASS_STATEMENT  */
  YYSYMBOL_parameter_list = 117,           /* parameter_list  */
  YYSYMBOL_return_statement = 118          /* return_statement  */
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
#define YYLAST   1423

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  75
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  44
/* YYNRULES -- Number of rules.  */
#define YYNRULES  147
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  260

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   329


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
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   160,   160,   160,   161,   162,   163,   164,   165,   169,
     179,   241,   297,   351,   371,   372,   373,   374,   375,   377,
     378,   379,   380,   382,   383,   384,   385,   386,   396,   397,
     398,   399,   400,   401,   405,   408,   411,   412,   415,   420,
     427,   433,   434,   435,   436,   437,   438,   441,   442,   445,
     446,   447,   448,   449,   450,   454,   455,   456,   457,   460,
     461,   462,   463,   464,   467,   468,   469,   470,   471,   472,
     473,   474,   475,   476,   477,   478,   479,   480,   481,   482,
     486,   487,   488,   489,   490,   491,   492,   495,   496,   504,
     508,   514,   520,   525,   533,   545,   560,   563,   568,   573,
     578,   589,   593,   599,   604,   612,   617,   622,   627,   632,
     637,   642,   647,   652,   657,   662,   667,   672,   677,   682,
     687,   692,   697,   702,   707,   712,   717,   735,   746,   759,
     771,   775,   781,   787,   788,   791,   792,   795,   796,   833,
     841,   849,   866,   876,   889,   894,   901,   902
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
  "END_FILE", "NOP", "CLASS", "SHARED", "THIS", "INDENT", "INT_VALUE",
  "BOOLEAN_VALUE", "FLOAT_VALUE", "STRING_VALUE", "NULL_VALUE",
  "ARRAY_VALUE", "IDENTIFER", "ASSIGN", "VAR", "GLOBAL", "ADD_ASSIGN",
  "SUB_ASSIGN", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "PRINT",
  "PRINTLN", "LEFT_PAREN", "RIGHT_PAREN", "LEFT_QUAD", "RIGHT_QUAD",
  "LEFT_BRACE", "RIGHT_BRACE", "SEMICOLON_OPTIONAL", "SEMICOLON", "COMMA",
  "COLON", "ADD", "SUB", "MUL", "DIV", "MOD", "EQ", "NE", "GT", "GE", "LT",
  "LE", "AND", "OR", "NOT", "BIT_AND", "BIT_OR", "BIT_XOR", "BIT_NOT",
  "INCREMENT", "DECREMENT", "IF", "ELSE", "FOR", "WHILE", "DO", "CONTINUE",
  "BREAK", "FUNC", "RETURN", "NEW_ARRAY", "MINUS_SIGN", "PLUS_SIGN",
  "READ_INT", "READ_FLOAT", "READ", "READ_BOOL", "READ_LINE", "$accept",
  "statement", "@1", "check_indent", "build_statement",
  "close_execute_statement", "close_execute_last_statement",
  "execute_statement", "single_statement", "single_statement_no_semicolon",
  "null_statement", "nop_statement", "statement_block", "block_list",
  "expression_statement", "expression", "lvalue_operation_expression",
  "assign_expression", "self_operation_expression", "unary_expression",
  "binary_expression", "value_expression", "lvalue_expression",
  "array_expression", "new_array_expression", "element_list",
  "var_statement", "global_statement", "assign_list",
  "function_expression", "argument_list", "evaluate_list", "if_statement",
  "else_statement", "for_statement", "while_statement",
  "do_while_statement", "break_statement", "continue_statement",
  "structure_statement", "FUNCTION_STATEMENT", "CLASS_STATEMENT",
  "parameter_list", "return_statement", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-77)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-8)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     191,   -77,    94,   -77,   -77,   -77,   459,   -77,   -77,   -77,
     -77,   -77,    -3,   -13,   -77,   -77,   -77,   -77,   -77,     1,
      14,    14,   941,   577,   941,   941,   941,   941,    33,    33,
      34,   -77,    41,    67,    68,    70,    83,   941,    73,    13,
     -77,   -77,  1318,   -77,   -77,   -77,   -77,   -77,   -77,     0,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   459,   -77,    14,    86,   607,    95,
      76,    76,   971,   -77,  1318,    23,   -77,   -77,   -77,   -77,
     -77,    89,    89,   941,   103,   941,   941,   941,    96,  1318,
     941,   -77,   941,   941,   941,   941,   941,   941,   941,   941,
     941,   941,   941,   941,   941,   941,   941,   941,   941,   941,
     941,   941,   941,   941,   638,   -77,   -77,    97,   121,    76,
      98,   -77,  1318,   -16,   941,   111,   -77,   -77,   941,   993,
     258,    99,   -77,   -77,   -77,   -77,   -77,   -77,  1015,  1037,
    1059,   -10,  1081,   -77,    81,    81,   -77,   -77,   -77,    69,
      69,    69,    69,    69,    69,  1352,  1335,   260,  1369,   193,
    1318,  1318,  1318,  1318,  1318,  1318,   669,    -5,   700,   -77,
      -1,   -77,   941,  1318,   112,  1318,   -77,   325,   -77,   -77,
      71,   941,   -77,   -77,   -77,   -77,   -77,    22,   -77,   -77,
     104,  1101,   -77,   516,   731,  1121,   -77,   -77,    24,  1318,
     941,   -77,   -77,   392,   101,   102,   -77,   119,   -77,   -77,
     761,   -77,   791,  1141,   107,  1161,   -77,   547,   -77,   -77,
    1318,   -77,   -77,   941,   103,   -77,   -77,  1201,   -77,  1221,
     -77,   821,   -77,   -77,   851,   -77,   881,  1181,   -77,   110,
     114,   -77,   -77,   -77,  1241,   -77,  1261,   -77,  1281,   -77,
     911,   118,   -77,   -77,   -77,   -77,   -77,  1301,   -77,   -77
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     8,    12,     1,    11,    12,     0,     2,     5,     6,
      27,    35,     0,     0,    80,    82,    81,    83,    84,    87,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   128,     0,   131,   135,   133,     0,   146,     0,     0,
      23,    14,    40,    42,    47,    48,    43,    44,    41,    86,
      45,    46,    24,    25,    85,    15,    16,    17,    18,    19,
      20,    22,    26,    21,     0,   143,     0,     0,     0,    97,
      94,    96,     0,    90,    92,     0,    60,    59,    62,    63,
      87,    55,    56,     0,    34,     0,     0,     0,     0,   147,
       0,     9,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    57,    58,    88,     0,    95,
       0,   102,   103,     0,     0,     0,    61,    89,     0,     0,
       0,     0,    33,    28,    29,    30,    31,    32,     0,     0,
       0,     0,     0,    10,    64,    65,    66,    67,    68,    71,
      72,    73,    74,    75,    76,    69,    70,    77,    78,    79,
      49,    50,    51,    52,    53,    54,     0,     0,     0,     9,
       0,   101,     0,    98,    99,    93,   127,     0,   137,   138,
       0,     0,   130,   136,   134,   144,   140,     0,    91,     4,
       0,     0,   105,     0,     0,     0,    10,   142,     0,   104,
       0,    37,    38,     0,     0,     0,   139,     0,   115,   112,
       0,   109,     0,     0,     0,     0,   116,     0,    13,   141,
     100,    36,    39,     0,    34,   145,   113,     0,   110,     0,
     106,     0,   126,   123,     0,   120,     0,     0,     3,     0,
       0,   114,   111,   107,     0,   124,     0,   121,     0,   117,
       0,     0,   129,   108,   125,   122,   118,     0,   132,   119
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -77,   -77,   -77,   -24,   -41,   -77,   151,   -77,   -37,   -67,
     -77,   -77,   -77,   -77,   -76,   -22,   -77,   -77,   -77,   -77,
     -77,   -77,    38,   -77,   -77,   -77,   -77,   -77,   -11,   -77,
     -77,   -77,   -75,   -77,   -73,   -72,   -77,   -77,   -77,   -77,
     -77,   -77,    -8,   -77
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,    64,   143,   189,     8,     7,   238,    39,   131,
     132,    40,   179,   203,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    75,    52,    53,    70,    54,
     123,   117,    55,    56,    57,    58,   137,    59,    60,   180,
      61,    62,   187,    63
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      72,    74,    76,    77,    78,    79,    66,   185,   133,   134,
      71,   135,   136,   171,    65,    89,   185,    91,   108,   186,
     172,   109,   110,   111,   112,   113,   192,   118,   197,    68,
     114,    69,   193,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   122,   105,   106,   107,
      80,   206,    67,   219,   127,   119,   115,   116,   207,   128,
     207,   129,    83,   138,   139,   140,    81,    82,   142,    84,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   167,   178,     3,    85,    86,     4,    87,     5,
      88,    90,   173,   120,     6,   205,   175,    92,    93,    94,
      95,    96,   125,   124,    14,    15,    16,    17,    18,   114,
      19,    94,    95,    96,   141,   169,   170,   168,   174,   223,
     200,    22,   204,    23,   181,   208,   225,   224,   232,   251,
     202,    24,    25,   252,   191,   196,   195,   239,   133,   134,
     199,   135,   136,   258,    26,   218,     9,   240,    27,    28,
      29,    30,   198,    32,    33,   130,   222,     0,     0,     0,
      38,   213,   215,     0,     0,     0,     0,     0,   220,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   227,     0,
     229,    -7,     1,     0,    -7,   237,    -7,    -7,    -7,    -7,
       0,    -7,    -7,    -7,    -7,    -7,    -7,     0,    -7,   244,
      -7,    -7,   246,     0,   248,     0,     0,     0,     0,    -7,
       0,    -7,     0,     0,     0,     0,     0,     0,   257,    -7,
      -7,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,    -7,     0,     0,   105,    -7,    -7,    -7,    -7,
      -7,    -7,    -7,     0,    -7,    -7,    -7,    -7,    -7,    10,
       0,     0,     0,     0,    11,    12,    13,     0,     0,    14,
      15,    16,    17,    18,     0,    19,     0,    20,    21,     0,
       0,     0,     0,     0,     0,     0,    22,     0,    23,     0,
     177,     0,     0,     0,     0,     0,    24,    25,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,    26,
       0,     0,     0,    27,    28,    29,    30,    31,    32,    33,
       0,    34,    35,    36,    37,    38,    10,     0,     0,     0,
       0,    11,    12,    13,     0,     0,    14,    15,    16,    17,
      18,     0,    19,     0,    20,    21,     0,     0,     0,     0,
       0,     0,     0,    22,     0,    23,     0,     0,   201,     0,
       0,     0,     0,    24,    25,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    26,     0,     0,     0,
      27,    28,    29,    30,    31,    32,    33,     0,    34,    35,
      36,    37,    38,    10,     0,     0,     0,     0,    11,    12,
      13,     0,     0,    14,    15,    16,    17,    18,     0,    19,
       0,    20,    21,     0,     0,     0,     0,     0,     0,     0,
      22,     0,    23,     0,     0,   221,     0,     0,     0,     0,
      24,    25,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    26,     0,     0,     0,    27,    28,    29,
      30,    31,    32,    33,     0,    34,    35,    36,    37,    38,
      10,     0,     0,     0,     0,    11,    12,    13,     0,     0,
      14,    15,    16,    17,    18,     0,    19,     0,    20,    21,
       0,     0,     0,     0,     0,     0,     0,    22,     0,    23,
       0,     0,     0,     0,     0,     0,     0,    24,    25,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      26,     0,     0,     0,    27,    28,    29,    30,    31,    32,
      33,     0,    34,    35,    36,    37,    38,    14,    15,    16,
      17,    18,     0,    19,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    22,     0,    23,   211,     0,     0,
       0,     0,     0,   212,    24,    25,     0,     0,    14,    15,
      16,    17,    18,     0,    19,     0,     0,    26,     0,     0,
       0,    27,    28,    29,     0,    22,     0,    23,   235,     0,
       0,     0,     0,    38,   236,    24,    25,     0,    14,    15,
      16,    17,    18,     0,    19,     0,     0,     0,    26,     0,
       0,     0,    27,    28,    29,    22,     0,    23,    73,     0,
       0,     0,     0,     0,    38,    24,    25,     0,    14,    15,
      16,    17,    18,     0,    19,     0,     0,     0,    26,     0,
       0,     0,    27,    28,    29,    22,   121,    23,     0,     0,
       0,     0,     0,     0,    38,    24,    25,     0,     0,    14,
      15,    16,    17,    18,     0,    19,     0,     0,    26,     0,
       0,     0,    27,    28,    29,     0,    22,     0,    23,     0,
       0,     0,     0,     0,    38,   166,    24,    25,     0,     0,
      14,    15,    16,    17,    18,     0,    19,     0,     0,    26,
       0,     0,     0,    27,    28,    29,     0,    22,     0,    23,
       0,     0,     0,     0,     0,    38,   190,    24,    25,     0,
       0,    14,    15,    16,    17,    18,     0,    19,     0,     0,
      26,     0,     0,     0,    27,    28,    29,     0,    22,     0,
      23,     0,     0,     0,     0,     0,    38,   194,    24,    25,
       0,     0,    14,    15,    16,    17,    18,     0,    19,     0,
       0,    26,     0,     0,     0,    27,    28,    29,     0,    22,
       0,    23,     0,     0,     0,     0,     0,    38,   214,    24,
      25,     0,    14,    15,    16,    17,    18,     0,    19,     0,
       0,     0,    26,     0,     0,     0,    27,    28,    29,    22,
       0,    23,   226,     0,     0,     0,     0,     0,    38,    24,
      25,     0,    14,    15,    16,    17,    18,     0,    19,     0,
       0,     0,    26,     0,     0,     0,    27,    28,    29,    22,
       0,    23,   228,     0,     0,     0,     0,     0,    38,    24,
      25,     0,    14,    15,    16,    17,    18,     0,    19,     0,
       0,     0,    26,     0,     0,     0,    27,    28,    29,    22,
       0,    23,   243,     0,     0,     0,     0,     0,    38,    24,
      25,     0,    14,    15,    16,    17,    18,     0,    19,     0,
       0,     0,    26,     0,     0,     0,    27,    28,    29,    22,
       0,    23,   245,     0,     0,     0,     0,     0,    38,    24,
      25,     0,    14,    15,    16,    17,    18,     0,    19,     0,
       0,     0,    26,     0,     0,     0,    27,    28,    29,    22,
       0,    23,   247,     0,     0,     0,     0,     0,    38,    24,
      25,     0,    14,    15,    16,    17,    18,     0,    19,     0,
       0,     0,    26,     0,     0,     0,    27,    28,    29,    22,
       0,    23,   256,     0,     0,     0,     0,     0,    38,    24,
      25,     0,    14,    15,    16,    17,    18,     0,    19,     0,
       0,     0,    26,     0,     0,     0,    27,    28,    29,    22,
       0,    23,     0,     0,     0,     0,     0,     0,    38,    24,
      25,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    26,     0,     0,     0,    27,    28,    29,     0,
     126,     0,     0,     0,     0,     0,     0,     0,    38,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   176,   105,   106,   107,     0,     0,     0,     0,
       0,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   182,   105,   106,   107,     0,     0,
       0,     0,     0,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   183,   105,   106,   107,
       0,     0,     0,     0,     0,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   184,   105,
     106,   107,     0,     0,     0,     0,     0,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     188,   105,   106,   107,     0,     0,     0,     0,     0,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   209,   105,   106,   107,     0,     0,   210,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   216,   105,   106,   107,     0,     0,   217,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   230,   105,   106,   107,     0,     0,   231,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   233,   105,   106,   107,     0,     0,   234,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   249,   105,   106,   107,     0,     0,   250,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   241,   105,   106,   107,     0,     0,     0,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   242,   105,   106,   107,     0,     0,     0,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   253,   105,   106,   107,     0,     0,     0,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   254,   105,   106,   107,     0,     0,     0,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   255,   105,   106,   107,     0,     0,     0,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   259,   105,   106,   107,     0,     0,     0,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,     0,   105,   106,   107,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,     0,
     105,   106,   107,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,     0,     0,   105,   106,   107,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,     0,     0,     0,   105,   106,   107,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,     0,     0,
       0,   105,     0,   107
};

static const yytype_int16 yycheck[] =
{
      22,    23,    24,    25,    26,    27,    19,    17,    84,    84,
      21,    84,    84,    29,    17,    37,    17,     4,    18,    29,
      36,    21,    22,    23,    24,    25,    31,    64,    29,    28,
      30,    17,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    68,    52,    53,    54,
      17,    29,    65,    29,    31,    66,    56,    57,    36,    36,
      36,    83,    28,    85,    86,    87,    28,    29,    90,    28,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   130,     0,    28,    28,     3,    28,     5,
      17,    28,   124,    17,    10,   181,   128,    38,    39,    40,
      41,    42,    36,    18,    11,    12,    13,    14,    15,    30,
      17,    40,    41,    42,    28,     4,    28,    30,    17,    28,
      18,    28,    61,    30,    35,    31,    17,    35,    31,    29,
     177,    38,    39,    29,   166,   169,   168,   223,   224,   224,
     172,   224,   224,    35,    51,   196,     5,   224,    55,    56,
      57,    58,   170,    60,    61,    62,   203,    -1,    -1,    -1,
      67,   193,   194,    -1,    -1,    -1,    -1,    -1,   200,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   210,    -1,
     212,     0,     1,    -1,     3,   217,     5,     6,     7,     8,
      -1,    10,    11,    12,    13,    14,    15,    -1,    17,   231,
      19,    20,   234,    -1,   236,    -1,    -1,    -1,    -1,    28,
      -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,   250,    38,
      39,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    51,    -1,    -1,    52,    55,    56,    57,    58,
      59,    60,    61,    -1,    63,    64,    65,    66,    67,     1,
      -1,    -1,    -1,    -1,     6,     7,     8,    -1,    -1,    11,
      12,    13,    14,    15,    -1,    17,    -1,    19,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    30,    -1,
      32,    -1,    -1,    -1,    -1,    -1,    38,    39,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    51,
      -1,    -1,    -1,    55,    56,    57,    58,    59,    60,    61,
      -1,    63,    64,    65,    66,    67,     1,    -1,    -1,    -1,
      -1,     6,     7,     8,    -1,    -1,    11,    12,    13,    14,
      15,    -1,    17,    -1,    19,    20,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    28,    -1,    30,    -1,    -1,    33,    -1,
      -1,    -1,    -1,    38,    39,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    51,    -1,    -1,    -1,
      55,    56,    57,    58,    59,    60,    61,    -1,    63,    64,
      65,    66,    67,     1,    -1,    -1,    -1,    -1,     6,     7,
       8,    -1,    -1,    11,    12,    13,    14,    15,    -1,    17,
      -1,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    30,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    51,    -1,    -1,    -1,    55,    56,    57,
      58,    59,    60,    61,    -1,    63,    64,    65,    66,    67,
       1,    -1,    -1,    -1,    -1,     6,     7,     8,    -1,    -1,
      11,    12,    13,    14,    15,    -1,    17,    -1,    19,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    39,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      51,    -1,    -1,    -1,    55,    56,    57,    58,    59,    60,
      61,    -1,    63,    64,    65,    66,    67,    11,    12,    13,
      14,    15,    -1,    17,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    30,    31,    -1,    -1,
      -1,    -1,    -1,    37,    38,    39,    -1,    -1,    11,    12,
      13,    14,    15,    -1,    17,    -1,    -1,    51,    -1,    -1,
      -1,    55,    56,    57,    -1,    28,    -1,    30,    31,    -1,
      -1,    -1,    -1,    67,    37,    38,    39,    -1,    11,    12,
      13,    14,    15,    -1,    17,    -1,    -1,    -1,    51,    -1,
      -1,    -1,    55,    56,    57,    28,    -1,    30,    31,    -1,
      -1,    -1,    -1,    -1,    67,    38,    39,    -1,    11,    12,
      13,    14,    15,    -1,    17,    -1,    -1,    -1,    51,    -1,
      -1,    -1,    55,    56,    57,    28,    29,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    67,    38,    39,    -1,    -1,    11,
      12,    13,    14,    15,    -1,    17,    -1,    -1,    51,    -1,
      -1,    -1,    55,    56,    57,    -1,    28,    -1,    30,    -1,
      -1,    -1,    -1,    -1,    67,    37,    38,    39,    -1,    -1,
      11,    12,    13,    14,    15,    -1,    17,    -1,    -1,    51,
      -1,    -1,    -1,    55,    56,    57,    -1,    28,    -1,    30,
      -1,    -1,    -1,    -1,    -1,    67,    37,    38,    39,    -1,
      -1,    11,    12,    13,    14,    15,    -1,    17,    -1,    -1,
      51,    -1,    -1,    -1,    55,    56,    57,    -1,    28,    -1,
      30,    -1,    -1,    -1,    -1,    -1,    67,    37,    38,    39,
      -1,    -1,    11,    12,    13,    14,    15,    -1,    17,    -1,
      -1,    51,    -1,    -1,    -1,    55,    56,    57,    -1,    28,
      -1,    30,    -1,    -1,    -1,    -1,    -1,    67,    37,    38,
      39,    -1,    11,    12,    13,    14,    15,    -1,    17,    -1,
      -1,    -1,    51,    -1,    -1,    -1,    55,    56,    57,    28,
      -1,    30,    31,    -1,    -1,    -1,    -1,    -1,    67,    38,
      39,    -1,    11,    12,    13,    14,    15,    -1,    17,    -1,
      -1,    -1,    51,    -1,    -1,    -1,    55,    56,    57,    28,
      -1,    30,    31,    -1,    -1,    -1,    -1,    -1,    67,    38,
      39,    -1,    11,    12,    13,    14,    15,    -1,    17,    -1,
      -1,    -1,    51,    -1,    -1,    -1,    55,    56,    57,    28,
      -1,    30,    31,    -1,    -1,    -1,    -1,    -1,    67,    38,
      39,    -1,    11,    12,    13,    14,    15,    -1,    17,    -1,
      -1,    -1,    51,    -1,    -1,    -1,    55,    56,    57,    28,
      -1,    30,    31,    -1,    -1,    -1,    -1,    -1,    67,    38,
      39,    -1,    11,    12,    13,    14,    15,    -1,    17,    -1,
      -1,    -1,    51,    -1,    -1,    -1,    55,    56,    57,    28,
      -1,    30,    31,    -1,    -1,    -1,    -1,    -1,    67,    38,
      39,    -1,    11,    12,    13,    14,    15,    -1,    17,    -1,
      -1,    -1,    51,    -1,    -1,    -1,    55,    56,    57,    28,
      -1,    30,    31,    -1,    -1,    -1,    -1,    -1,    67,    38,
      39,    -1,    11,    12,    13,    14,    15,    -1,    17,    -1,
      -1,    -1,    51,    -1,    -1,    -1,    55,    56,    57,    28,
      -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    67,    38,
      39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    51,    -1,    -1,    -1,    55,    56,    57,    -1,
      29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    29,    52,    53,    54,    -1,    -1,    -1,    -1,
      -1,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    29,    52,    53,    54,    -1,    -1,
      -1,    -1,    -1,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    29,    52,    53,    54,
      -1,    -1,    -1,    -1,    -1,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    29,    52,
      53,    54,    -1,    -1,    -1,    -1,    -1,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      29,    52,    53,    54,    -1,    -1,    -1,    -1,    -1,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    31,    52,    53,    54,    -1,    -1,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    31,    52,    53,    54,    -1,    -1,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    31,    52,    53,    54,    -1,    -1,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    31,    52,    53,    54,    -1,    -1,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    31,    52,    53,    54,    -1,    -1,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    31,    52,    53,    54,    -1,    -1,    -1,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    31,    52,    53,    54,    -1,    -1,    -1,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    31,    52,    53,    54,    -1,    -1,    -1,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    31,    52,    53,    54,    -1,    -1,    -1,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    31,    52,    53,    54,    -1,    -1,    -1,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    31,    52,    53,    54,    -1,    -1,    -1,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    -1,    52,    53,    54,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    -1,
      52,    53,    54,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    -1,    -1,    52,    53,    54,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    -1,    -1,    -1,    52,    53,    54,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    -1,    -1,
      -1,    52,    -1,    54
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,    76,     0,     3,     5,    10,    81,    80,    81,
       1,     6,     7,     8,    11,    12,    13,    14,    15,    17,
      19,    20,    28,    30,    38,    39,    51,    55,    56,    57,
      58,    59,    60,    61,    63,    64,    65,    66,    67,    83,
      86,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   101,   102,   104,   107,   108,   109,   110,   112,
     113,   115,   116,   118,    77,    17,    19,    65,    28,    17,
     103,   103,    90,    31,    90,   100,    90,    90,    90,    90,
      17,    97,    97,    28,    28,    28,    28,    28,    17,    90,
      28,     4,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    52,    53,    54,    18,    21,
      22,    23,    24,    25,    30,    56,    57,   106,    83,   103,
      17,    29,    90,   105,    18,    36,    29,    31,    36,    90,
      62,    84,    85,    89,   107,   109,   110,   111,    90,    90,
      90,    28,    90,    78,    90,    90,    90,    90,    90,    90,
      90,    90,    90,    90,    90,    90,    90,    90,    90,    90,
      90,    90,    90,    90,    90,    90,    37,    90,    30,     4,
      28,    29,    36,    90,    17,    90,    29,    32,    83,    87,
     114,    35,    29,    29,    29,    17,    29,   117,    29,    79,
      37,    90,    31,    37,    37,    90,    78,    29,   117,    90,
      18,    33,    83,    88,    61,    89,    29,    36,    31,    31,
      37,    31,    37,    90,    37,    90,    31,    37,    79,    29,
      90,    33,    83,    28,    35,    17,    31,    90,    31,    90,
      31,    37,    31,    31,    37,    31,    37,    90,    82,    89,
      84,    31,    31,    31,    90,    31,    90,    31,    90,    31,
      37,    29,    29,    31,    31,    31,    31,    90,    35,    31
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    75,    77,    76,    76,    76,    76,    76,    76,    78,
      79,    80,    81,    82,    83,    83,    83,    83,    83,    83,
      83,    83,    83,    83,    83,    83,    83,    83,    84,    84,
      84,    84,    84,    84,    85,    86,    87,    87,    88,    88,
      89,    90,    90,    90,    90,    90,    90,    91,    91,    92,
      92,    92,    92,    92,    92,    93,    93,    93,    93,    94,
      94,    94,    94,    94,    95,    95,    95,    95,    95,    95,
      95,    95,    95,    95,    95,    95,    95,    95,    95,    95,
      96,    96,    96,    96,    96,    96,    96,    97,    97,    98,
      98,    99,   100,   100,   101,   101,   102,   103,   103,   103,
     103,   104,   104,   105,   105,   106,   106,   106,   106,   106,
     106,   106,   106,   106,   106,   106,   106,   106,   106,   106,
     106,   106,   106,   106,   106,   106,   106,   107,   108,   109,
     110,   110,   111,   112,   112,   113,   113,   114,   114,   115,
     115,   115,   115,   116,   117,   117,   118,   118
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     8,     6,     3,     3,     0,     1,     0,
       0,     0,     0,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     1,     3,     2,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       3,     3,     3,     3,     3,     2,     2,     2,     2,     2,
       2,     3,     2,     2,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     3,
       2,     4,     1,     3,     2,     3,     2,     1,     3,     3,
       5,     4,     3,     1,     3,     3,     5,     6,     7,     4,
       5,     6,     4,     5,     6,     4,     4,     6,     7,     8,
       5,     6,     7,     5,     6,     7,     5,     4,     1,     8,
       4,     1,     7,     1,     4,     1,     4,     1,     1,     5,
       4,     6,     5,     2,     1,     3,     1,     2
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
#line 160 "bello.y"
                                             {(yyval.intVl) = 0; }
#line 1881 "y.tab.c"
    break;

  case 6: /* statement: statement END_FILE close_execute_last_statement  */
#line 163 "bello.y"
                                                       { return 0; }
#line 1887 "y.tab.c"
    break;

  case 8: /* statement: error  */
#line 165 "bello.y"
            { yyerrok; }
#line 1893 "y.tab.c"
    break;

  case 9: /* check_indent: %empty  */
#line 169 "bello.y"
      { 
        if (((yyvsp[(-2) - (0)].intVl))>lstIndt+1) 
        {
           yyclearin;
           yyerrok;
        }
      }
#line 1905 "y.tab.c"
    break;

  case 10: /* build_statement: %empty  */
#line 179 "bello.y"
    {   
        int indt = (yyvsp[(-3) - (0)].intVl);
        //如果是当前句的indent == 上1句的indent + 1，则检查上1句是否有语句体，如上1句允许语句体，语句入栈

        //printf("indt: %d lstIndt: %d\n",indt, lstIndt);
        if (indt == lstIndt + 1 )
        {
            if (stmtStk.back()->alwSubStmt)
            {
                //语句入栈
                pshStmt(indt, (yyvsp[(-2) - (0)].stmt));

                //printf("--->>>stmt in stk: %d\n", stmtStk.size());
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

            // //如果当前输入的语句是else语句，检查同级缩进的上1个语句是不是if语句

            // if (($<stmt>-2)->typ == ELSE_STATEMENT)
            // {
            //     if (stmtStk.back()->stmt->typ == IF_STATEMENT)
            //     {
                    
            //     }
            //     else
            //     {
            //         yyclearin;
            //         yyerrok;
            //     }

            // }

            //输入的句子入栈
            pshStmt(indt, (yyvsp[(-2) - (0)].stmt));
            
        }

        lstIndt = indt;
    }
#line 1968 "y.tab.c"
    break;

  case 11: /* close_execute_statement: %empty  */
#line 241 "bello.y"
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

            prtStmtStk();

            //如果上1条语句为子语句，则闭合上1条顶级语句
            if (stmtStk.back()->indt > 0)
            {
                //printf("cls top lvl stmt\n");

                int nowIndt = 0;

                int idx;

                fldStmt(0);

                // 如果是双主句语句的情况


                //执行上一条顶级语句
                exctStmt(envr, stmtStk.back()->stmt);
                stmtStk.pop_back();

                //printf("cls stk lyr: %d\n", stmtStk.size());

                lstIndt=0;
            }

        }

    }
#line 2025 "y.tab.c"
    break;

  case 12: /* close_execute_last_statement: %empty  */
#line 297 "bello.y"
    {
        //如果是标准输入读取数据，则退出此动作
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
                //printf("cls top lvl stmt\n");

                int nowIndt = 0;

                int idx;

                fldStmt(0);
                // 如果是双主句语句的情况


                //执行上一条顶级语句
                exctStmt(envr, stmtStk.back()->stmt);
                stmtStk.pop_back();

                //printf("cls stk lyr: %d\n", stmtStk.size());

                lstIndt=0;
            }

        }
    }
#line 2081 "y.tab.c"
    break;

  case 13: /* execute_statement: %empty  */
#line 351 "bello.y"
    { 
        //printf("alw sub stmt: %d\n", stmtStk.back()->alwSubStmt);

        //只在无缩进的情况下执行语句
        if ((yyvsp[(-4) - (0)].intVl) != 0 || stmtStk.back()->alwSubStmt == 1)
        {
            //YYABORT;
        }
        else
        {
            exctStmt(envr, stmtStk.back()->stmt);
            stmtStk.pop_back();

            //printf("exct stmt\n");
        }
  
    }
#line 2103 "y.tab.c"
    break;

  case 14: /* single_statement: expression_statement  */
#line 371 "bello.y"
                           { (yyval.stmt)=(yyvsp[0].stmt); }
#line 2109 "y.tab.c"
    break;

  case 15: /* single_statement: if_statement  */
#line 372 "bello.y"
                   { (yyval.stmt)=(yyvsp[0].stmt); }
#line 2115 "y.tab.c"
    break;

  case 16: /* single_statement: else_statement  */
#line 373 "bello.y"
                     {(yyval.stmt)=(yyvsp[0].stmt); }
#line 2121 "y.tab.c"
    break;

  case 17: /* single_statement: for_statement  */
#line 374 "bello.y"
                    { (yyval.stmt)=(yyvsp[0].stmt); }
#line 2127 "y.tab.c"
    break;

  case 18: /* single_statement: while_statement  */
#line 375 "bello.y"
                      { (yyval.stmt)=(yyvsp[0].stmt); }
#line 2133 "y.tab.c"
    break;

  case 19: /* single_statement: break_statement  */
#line 377 "bello.y"
                      { (yyval.stmt)=(yyvsp[0].stmt); }
#line 2139 "y.tab.c"
    break;

  case 20: /* single_statement: continue_statement  */
#line 378 "bello.y"
                          { (yyval.stmt)=(yyvsp[0].stmt); }
#line 2145 "y.tab.c"
    break;

  case 21: /* single_statement: return_statement  */
#line 379 "bello.y"
                        { (yyval.stmt)=(yyvsp[0].stmt); }
#line 2151 "y.tab.c"
    break;

  case 22: /* single_statement: FUNCTION_STATEMENT  */
#line 380 "bello.y"
                         { (yyval.stmt)=(yyvsp[0].stmt); }
#line 2157 "y.tab.c"
    break;

  case 23: /* single_statement: nop_statement  */
#line 382 "bello.y"
                    { (yyval.stmt)=(yyvsp[0].stmt); }
#line 2163 "y.tab.c"
    break;

  case 24: /* single_statement: var_statement  */
#line 383 "bello.y"
                     { (yyval.stmt) = (yyvsp[0].stmt);}
#line 2169 "y.tab.c"
    break;

  case 25: /* single_statement: global_statement  */
#line 384 "bello.y"
                        { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2175 "y.tab.c"
    break;

  case 26: /* single_statement: CLASS_STATEMENT  */
#line 385 "bello.y"
                      { (yyval.stmt)= (yyvsp[0].stmt); }
#line 2181 "y.tab.c"
    break;

  case 27: /* single_statement: error  */
#line 387 "bello.y"
    { 
        (yyval.stmt)=bldNllStmt(); 
        yyclearin; 
        yyerrok; 
    }
#line 2191 "y.tab.c"
    break;

  case 34: /* null_statement: %empty  */
#line 405 "bello.y"
      { (yyval.stmt)=bldNllStmt(); }
#line 2197 "y.tab.c"
    break;

  case 35: /* nop_statement: NOP  */
#line 408 "bello.y"
          { (yyval.stmt)=bldNllStmt(); }
#line 2203 "y.tab.c"
    break;

  case 36: /* statement_block: LEFT_BRACE block_list RIGHT_BRACE  */
#line 411 "bello.y"
                                        { (yyval.stmt)=(yyvsp[-1].stmt); }
#line 2209 "y.tab.c"
    break;

  case 37: /* statement_block: LEFT_BRACE RIGHT_BRACE  */
#line 412 "bello.y"
                             { (yyval.stmt)=bldNllStmt(); }
#line 2215 "y.tab.c"
    break;

  case 38: /* block_list: single_statement  */
#line 416 "bello.y"
    { 
        (yyval.stmt)=bldStmtBlk(); 
        stmtBlkAdd((yyval.stmt), (yyvsp[0].stmt)); 
    }
#line 2224 "y.tab.c"
    break;

  case 39: /* block_list: block_list single_statement  */
#line 421 "bello.y"
    {
        (yyval.stmt) = stmtBlkAdd((yyvsp[-1].stmt) ,(yyvsp[0].stmt));
    }
#line 2232 "y.tab.c"
    break;

  case 40: /* expression_statement: expression  */
#line 428 "bello.y"
    { 
        (yyval.stmt)=bldExpStmt((yyvsp[0].exp)); 
    }
#line 2240 "y.tab.c"
    break;

  case 43: /* expression: unary_expression  */
#line 435 "bello.y"
                       { (yyval.exp)=(yyvsp[0].exp); }
#line 2246 "y.tab.c"
    break;

  case 44: /* expression: binary_expression  */
#line 436 "bello.y"
                        { (yyval.exp)=(yyvsp[0].exp); }
#line 2252 "y.tab.c"
    break;

  case 45: /* expression: array_expression  */
#line 437 "bello.y"
                       { (yyval.exp)=(yyvsp[0].exp); }
#line 2258 "y.tab.c"
    break;

  case 46: /* expression: new_array_expression  */
#line 438 "bello.y"
                           { (yyval.exp) = (yyvsp[0].exp); }
#line 2264 "y.tab.c"
    break;

  case 49: /* assign_expression: lvalue_expression ASSIGN expression  */
#line 445 "bello.y"
                                          { (yyval.exp)=bldAsgnExp((yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2270 "y.tab.c"
    break;

  case 50: /* assign_expression: lvalue_expression ADD_ASSIGN expression  */
#line 446 "bello.y"
                                              { (yyval.exp)=bldAsgnExp((yyvsp[-2].exp), bldBnrExp(ADD, (yyvsp[-2].exp), (yyvsp[0].exp))); }
#line 2276 "y.tab.c"
    break;

  case 51: /* assign_expression: lvalue_expression SUB_ASSIGN expression  */
#line 447 "bello.y"
                                              { (yyval.exp)=bldAsgnExp((yyvsp[-2].exp), bldBnrExp(SUB, (yyvsp[-2].exp), (yyvsp[0].exp))); }
#line 2282 "y.tab.c"
    break;

  case 52: /* assign_expression: lvalue_expression MUL_ASSIGN expression  */
#line 448 "bello.y"
                                              { (yyval.exp)=bldAsgnExp((yyvsp[-2].exp), bldBnrExp(MUL, (yyvsp[-2].exp), (yyvsp[0].exp))); }
#line 2288 "y.tab.c"
    break;

  case 53: /* assign_expression: lvalue_expression DIV_ASSIGN expression  */
#line 449 "bello.y"
                                              { (yyval.exp)=bldAsgnExp((yyvsp[-2].exp), bldBnrExp(DIV, (yyvsp[-2].exp), (yyvsp[0].exp))); }
#line 2294 "y.tab.c"
    break;

  case 54: /* assign_expression: lvalue_expression MOD_ASSIGN expression  */
#line 450 "bello.y"
                                              { (yyval.exp)=bldAsgnExp((yyvsp[-2].exp), bldBnrExp(MOD, (yyvsp[-2].exp), (yyvsp[0].exp))); }
#line 2300 "y.tab.c"
    break;

  case 55: /* self_operation_expression: INCREMENT lvalue_expression  */
#line 454 "bello.y"
                                  { (yyval.exp)=bldUnrExp(PREFIX_INCREMENT, (yyvsp[0].exp)); }
#line 2306 "y.tab.c"
    break;

  case 56: /* self_operation_expression: DECREMENT lvalue_expression  */
#line 455 "bello.y"
                                  { (yyval.exp)=bldUnrExp(PREFIX_DECREMENT, (yyvsp[0].exp)); }
#line 2312 "y.tab.c"
    break;

  case 57: /* self_operation_expression: lvalue_expression INCREMENT  */
#line 456 "bello.y"
                                  { (yyval.exp)=bldUnrExp(SUFFIX_INCREMENT, (yyvsp[-1].exp)); }
#line 2318 "y.tab.c"
    break;

  case 58: /* self_operation_expression: lvalue_expression DECREMENT  */
#line 457 "bello.y"
                                  { (yyval.exp)=bldUnrExp(SUFFIX_DECREMENT, (yyvsp[-1].exp)); }
#line 2324 "y.tab.c"
    break;

  case 59: /* unary_expression: SUB expression  */
#line 460 "bello.y"
                                      { (yyval.exp) = bldUnrExp(SUB, (yyvsp[0].exp)); }
#line 2330 "y.tab.c"
    break;

  case 60: /* unary_expression: ADD expression  */
#line 461 "bello.y"
                                     { (yyval.exp) = bldUnrExp(ADD, (yyvsp[0].exp)); }
#line 2336 "y.tab.c"
    break;

  case 61: /* unary_expression: LEFT_PAREN expression RIGHT_PAREN  */
#line 462 "bello.y"
                                        { (yyval.exp)=(yyvsp[-1].exp); }
#line 2342 "y.tab.c"
    break;

  case 62: /* unary_expression: NOT expression  */
#line 463 "bello.y"
                     { (yyval.exp)=bldUnrExp(NOT, (yyvsp[0].exp)); }
#line 2348 "y.tab.c"
    break;

  case 63: /* unary_expression: BIT_NOT expression  */
#line 464 "bello.y"
                         { (yyval.exp)=bldUnrExp(BIT_NOT, (yyvsp[0].exp)); }
#line 2354 "y.tab.c"
    break;

  case 64: /* binary_expression: expression ADD expression  */
#line 467 "bello.y"
                                { (yyval.exp)=bldBnrExp(ADD, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2360 "y.tab.c"
    break;

  case 65: /* binary_expression: expression SUB expression  */
#line 468 "bello.y"
                                { (yyval.exp)=bldBnrExp(SUB, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2366 "y.tab.c"
    break;

  case 66: /* binary_expression: expression MUL expression  */
#line 469 "bello.y"
                                { (yyval.exp)=bldBnrExp(MUL, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2372 "y.tab.c"
    break;

  case 67: /* binary_expression: expression DIV expression  */
#line 470 "bello.y"
                                { (yyval.exp)=bldBnrExp(DIV, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2378 "y.tab.c"
    break;

  case 68: /* binary_expression: expression MOD expression  */
#line 471 "bello.y"
                                { (yyval.exp)=bldBnrExp(MOD, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2384 "y.tab.c"
    break;

  case 69: /* binary_expression: expression AND expression  */
#line 472 "bello.y"
                                { (yyval.exp)=bldBnrExp(AND, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2390 "y.tab.c"
    break;

  case 70: /* binary_expression: expression OR expression  */
#line 473 "bello.y"
                               { (yyval.exp)=bldBnrExp(OR, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2396 "y.tab.c"
    break;

  case 71: /* binary_expression: expression EQ expression  */
#line 474 "bello.y"
                               { (yyval.exp)=bldBnrExp(EQ, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2402 "y.tab.c"
    break;

  case 72: /* binary_expression: expression NE expression  */
#line 475 "bello.y"
                               { (yyval.exp)=bldBnrExp(NE, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2408 "y.tab.c"
    break;

  case 73: /* binary_expression: expression GT expression  */
#line 476 "bello.y"
                               { (yyval.exp)=bldBnrExp(GT, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2414 "y.tab.c"
    break;

  case 74: /* binary_expression: expression GE expression  */
#line 477 "bello.y"
                               { (yyval.exp)=bldBnrExp(GE, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2420 "y.tab.c"
    break;

  case 75: /* binary_expression: expression LT expression  */
#line 478 "bello.y"
                               { (yyval.exp)=bldBnrExp(LT, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2426 "y.tab.c"
    break;

  case 76: /* binary_expression: expression LE expression  */
#line 479 "bello.y"
                               { (yyval.exp)=bldBnrExp(LE, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2432 "y.tab.c"
    break;

  case 77: /* binary_expression: expression BIT_AND expression  */
#line 480 "bello.y"
                                    { (yyval.exp)=bldBnrExp(BIT_AND, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2438 "y.tab.c"
    break;

  case 78: /* binary_expression: expression BIT_OR expression  */
#line 481 "bello.y"
                                   { (yyval.exp)=bldBnrExp(BIT_OR, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2444 "y.tab.c"
    break;

  case 79: /* binary_expression: expression BIT_XOR expression  */
#line 482 "bello.y"
                                    { (yyval.exp)=bldBnrExp(BIT_XOR, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2450 "y.tab.c"
    break;

  case 80: /* value_expression: INT_VALUE  */
#line 486 "bello.y"
                { (yyval.exp)=bldCnstIntExp((yyvsp[0].intVl)); /*printf("Get data: %d\n",$1);*/ }
#line 2456 "y.tab.c"
    break;

  case 81: /* value_expression: FLOAT_VALUE  */
#line 487 "bello.y"
                  { (yyval.exp)=bldCnstFltExp((yyvsp[0].fltVl)); }
#line 2462 "y.tab.c"
    break;

  case 82: /* value_expression: BOOLEAN_VALUE  */
#line 488 "bello.y"
                    { (yyval.exp)=bldCnstBlnExp((yyvsp[0].blnVl)); }
#line 2468 "y.tab.c"
    break;

  case 83: /* value_expression: STRING_VALUE  */
#line 489 "bello.y"
                   { (yyval.exp)=bldCnstStrExp((yyvsp[0].strVl)); }
#line 2474 "y.tab.c"
    break;

  case 84: /* value_expression: NULL_VALUE  */
#line 490 "bello.y"
                 { (yyval.exp)=bldCnstNllExp(); }
#line 2480 "y.tab.c"
    break;

  case 87: /* lvalue_expression: IDENTIFER  */
#line 495 "bello.y"
                { (yyval.exp)= bldLvlExp(bldVrbExp((yyvsp[0].idtf))); }
#line 2486 "y.tab.c"
    break;

  case 88: /* lvalue_expression: lvalue_expression evaluate_list  */
#line 497 "bello.y"
    { 
        (yyval.exp)=(yyvsp[-1].exp); 
        bldLvlExpAdd((yyvsp[-1].exp), (yyvsp[0].evlLst)); 
    }
#line 2495 "y.tab.c"
    break;

  case 89: /* array_expression: LEFT_QUAD element_list RIGHT_QUAD  */
#line 505 "bello.y"
    {
        (yyval.exp)= bldArrExp((yyvsp[-1].elmtLst));
    }
#line 2503 "y.tab.c"
    break;

  case 90: /* array_expression: LEFT_QUAD RIGHT_QUAD  */
#line 509 "bello.y"
    {
        (yyval.exp)= bldArrExp(bldElmtLst());
    }
#line 2511 "y.tab.c"
    break;

  case 91: /* new_array_expression: NEW_ARRAY LEFT_PAREN expression RIGHT_PAREN  */
#line 515 "bello.y"
    {
        (yyval.exp) = bldNewArrExp((yyvsp[-1].exp));
    }
#line 2519 "y.tab.c"
    break;

  case 92: /* element_list: expression  */
#line 521 "bello.y"
    { 
        (yyval.elmtLst)= bldElmtLst(); 
        elmtLstAdd((yyval.elmtLst), (yyvsp[0].exp)); 
    }
#line 2528 "y.tab.c"
    break;

  case 93: /* element_list: element_list COMMA expression  */
#line 526 "bello.y"
    {  
        (yyval.elmtLst)=(yyvsp[-2].elmtLst);  
        elmtLstAdd((yyval.elmtLst), (yyvsp[0].exp)); 
    }
#line 2537 "y.tab.c"
    break;

  case 94: /* var_statement: VAR assign_list  */
#line 534 "bello.y"
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
#line 2553 "y.tab.c"
    break;

  case 95: /* var_statement: SHARED VAR assign_list  */
#line 546 "bello.y"
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
#line 2570 "y.tab.c"
    break;

  case 96: /* global_statement: GLOBAL assign_list  */
#line 560 "bello.y"
                         { (yyval.stmt)=bldGlbStmt((yyvsp[0].asgnLst)); }
#line 2576 "y.tab.c"
    break;

  case 97: /* assign_list: IDENTIFER  */
#line 564 "bello.y"
    {
        (yyval.asgnLst)= bldAsgnLst();
        asgnLstAdd((yyval.asgnLst), bldVrbExp((yyvsp[0].idtf)), bldNllExp());
    }
#line 2585 "y.tab.c"
    break;

  case 98: /* assign_list: IDENTIFER ASSIGN expression  */
#line 569 "bello.y"
    {
        (yyval.asgnLst)= bldAsgnLst();
        asgnLstAdd((yyval.asgnLst), bldVrbExp((yyvsp[-2].idtf)), (yyvsp[0].exp));
    }
#line 2594 "y.tab.c"
    break;

  case 99: /* assign_list: assign_list COMMA IDENTIFER  */
#line 574 "bello.y"
    {
        (yyval.asgnLst)=(yyvsp[-2].asgnLst);
        asgnLstAdd((yyval.asgnLst), bldVrbExp((yyvsp[0].idtf)), bldNllExp());
    }
#line 2603 "y.tab.c"
    break;

  case 100: /* assign_list: assign_list COMMA IDENTIFER ASSIGN expression  */
#line 579 "bello.y"
    {
        (yyval.asgnLst)=(yyvsp[-4].asgnLst);
        asgnLstAdd((yyval.asgnLst), bldVrbExp((yyvsp[-2].idtf)), (yyvsp[0].exp));
    }
#line 2612 "y.tab.c"
    break;

  case 101: /* function_expression: IDENTIFER LEFT_PAREN argument_list RIGHT_PAREN  */
#line 590 "bello.y"
    {
        (yyval.exp)=bldFcnExp((yyvsp[-3].idtf), (yyvsp[-1].argLst));
    }
#line 2620 "y.tab.c"
    break;

  case 102: /* function_expression: IDENTIFER LEFT_PAREN RIGHT_PAREN  */
#line 594 "bello.y"
    {
        (yyval.exp)=bldFcnExp((yyvsp[-2].idtf), bldArgLst());
    }
#line 2628 "y.tab.c"
    break;

  case 103: /* argument_list: expression  */
#line 600 "bello.y"
    {
        (yyval.argLst)=bldArgLst();
        argLstAdd((yyval.argLst), (yyvsp[0].exp));
    }
#line 2637 "y.tab.c"
    break;

  case 104: /* argument_list: argument_list COMMA expression  */
#line 605 "bello.y"
    {
        (yyval.argLst)=(yyvsp[-2].argLst);
        argLstAdd((yyval.argLst), (yyvsp[0].exp));
    }
#line 2646 "y.tab.c"
    break;

  case 105: /* evaluate_list: LEFT_QUAD expression RIGHT_QUAD  */
#line 613 "bello.y"
    {
        (yyval.evlLst) = bldAcsLst();
        acsLstIdxAdd((yyval.evlLst), (yyvsp[-1].exp));
    }
#line 2655 "y.tab.c"
    break;

  case 106: /* evaluate_list: LEFT_QUAD expression COLON expression RIGHT_QUAD  */
#line 618 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-3].exp), (yyvsp[-1].exp), bldCnstIntExp(1));
    }
#line 2664 "y.tab.c"
    break;

  case 107: /* evaluate_list: LEFT_QUAD expression COLON expression COLON RIGHT_QUAD  */
#line 623 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-4].exp), (yyvsp[-2].exp), bldCnstIntExp(1));
    }
#line 2673 "y.tab.c"
    break;

  case 108: /* evaluate_list: LEFT_QUAD expression COLON expression COLON expression RIGHT_QUAD  */
#line 628 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-5].exp), (yyvsp[-3].exp), (yyvsp[-1].exp));
    }
#line 2682 "y.tab.c"
    break;

  case 109: /* evaluate_list: LEFT_QUAD expression COLON RIGHT_QUAD  */
#line 633 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-2].exp), bldCnstIntExp(-1), bldCnstIntExp(1));
    }
#line 2691 "y.tab.c"
    break;

  case 110: /* evaluate_list: LEFT_QUAD expression COLON COLON RIGHT_QUAD  */
#line 638 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-3].exp), bldCnstIntExp(-1), bldCnstIntExp(1));
    }
#line 2700 "y.tab.c"
    break;

  case 111: /* evaluate_list: LEFT_QUAD expression COLON COLON expression RIGHT_QUAD  */
#line 643 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-4].exp), bldCnstIntExp(-1), (yyvsp[-1].exp));
    }
#line 2709 "y.tab.c"
    break;

  case 112: /* evaluate_list: LEFT_QUAD COLON expression RIGHT_QUAD  */
#line 648 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), (yyvsp[-1].exp), bldCnstIntExp(1));
    }
#line 2718 "y.tab.c"
    break;

  case 113: /* evaluate_list: LEFT_QUAD COLON expression COLON RIGHT_QUAD  */
#line 653 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), (yyvsp[-2].exp), bldCnstIntExp(1));
    }
#line 2727 "y.tab.c"
    break;

  case 114: /* evaluate_list: LEFT_QUAD COLON expression COLON expression RIGHT_QUAD  */
#line 658 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), (yyvsp[-3].exp), (yyvsp[-1].exp));
    }
#line 2736 "y.tab.c"
    break;

  case 115: /* evaluate_list: LEFT_QUAD COLON COLON RIGHT_QUAD  */
#line 663 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), bldCnstIntExp(-1), bldCnstIntExp(1));
    }
#line 2745 "y.tab.c"
    break;

  case 116: /* evaluate_list: evaluate_list LEFT_QUAD expression RIGHT_QUAD  */
#line 668 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-3].evlLst);
        acsLstIdxAdd((yyval.evlLst),(yyvsp[-1].exp));
    }
#line 2754 "y.tab.c"
    break;

  case 117: /* evaluate_list: evaluate_list LEFT_QUAD expression COLON expression RIGHT_QUAD  */
#line 673 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-5].evlLst);
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-3].exp), (yyvsp[-1].exp), bldCnstIntExp(1));
    }
#line 2763 "y.tab.c"
    break;

  case 118: /* evaluate_list: evaluate_list LEFT_QUAD expression COLON expression COLON RIGHT_QUAD  */
#line 678 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-6].evlLst);
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-4].exp), (yyvsp[-2].exp), bldCnstIntExp(1));
    }
#line 2772 "y.tab.c"
    break;

  case 119: /* evaluate_list: evaluate_list LEFT_QUAD expression COLON expression COLON expression RIGHT_QUAD  */
#line 683 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-7].evlLst);
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-5].exp), (yyvsp[-3].exp), (yyvsp[-1].exp));
    }
#line 2781 "y.tab.c"
    break;

  case 120: /* evaluate_list: evaluate_list LEFT_QUAD expression COLON RIGHT_QUAD  */
#line 688 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-4].evlLst);
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-2].exp), bldCnstIntExp(-1), bldCnstIntExp(1));
    }
#line 2790 "y.tab.c"
    break;

  case 121: /* evaluate_list: evaluate_list LEFT_QUAD expression COLON COLON RIGHT_QUAD  */
#line 693 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-5].evlLst);
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-3].exp), bldCnstIntExp(-1), bldCnstIntExp(1));
    }
#line 2799 "y.tab.c"
    break;

  case 122: /* evaluate_list: evaluate_list LEFT_QUAD expression COLON COLON expression RIGHT_QUAD  */
#line 698 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-6].evlLst);
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-4].exp), bldCnstIntExp(-1), (yyvsp[-1].exp));
    }
#line 2808 "y.tab.c"
    break;

  case 123: /* evaluate_list: evaluate_list LEFT_QUAD COLON expression RIGHT_QUAD  */
#line 703 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-4].evlLst);
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), (yyvsp[-1].exp), bldCnstIntExp(1));
    }
#line 2817 "y.tab.c"
    break;

  case 124: /* evaluate_list: evaluate_list LEFT_QUAD COLON expression COLON RIGHT_QUAD  */
#line 708 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-5].evlLst);
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), (yyvsp[-2].exp), bldCnstIntExp(1));
    }
#line 2826 "y.tab.c"
    break;

  case 125: /* evaluate_list: evaluate_list LEFT_QUAD COLON expression COLON expression RIGHT_QUAD  */
#line 713 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-6].evlLst);
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), (yyvsp[-3].exp), (yyvsp[-1].exp));
    }
#line 2835 "y.tab.c"
    break;

  case 126: /* evaluate_list: evaluate_list LEFT_QUAD COLON COLON RIGHT_QUAD  */
#line 718 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-4].evlLst);
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), bldCnstIntExp(-1), bldCnstIntExp(1));
    }
#line 2844 "y.tab.c"
    break;

  case 127: /* if_statement: IF LEFT_PAREN expression RIGHT_PAREN  */
#line 736 "bello.y"
    {
        (yyval.stmt)=bldIfStmt((yyvsp[-1].exp));
        //printf("bld if stmt\n");
    }
#line 2853 "y.tab.c"
    break;

  case 128: /* else_statement: ELSE  */
#line 747 "bello.y"
    {
        (yyval.stmt) = bldElsStmt();
    }
#line 2861 "y.tab.c"
    break;

  case 129: /* for_statement: FOR LEFT_PAREN single_statement_no_semicolon SEMICOLON expression_statement SEMICOLON single_statement_no_semicolon RIGHT_PAREN  */
#line 760 "bello.y"
    {
        (yyval.stmt)= bldForStmt((yyvsp[-5].stmt), (yyvsp[-3].stmt), (yyvsp[-1].stmt));  
    }
#line 2869 "y.tab.c"
    break;

  case 130: /* while_statement: WHILE LEFT_PAREN expression RIGHT_PAREN  */
#line 772 "bello.y"
    {
        (yyval.stmt) = bldWhlStmt((yyvsp[-1].exp));
    }
#line 2877 "y.tab.c"
    break;

  case 131: /* while_statement: WHILE  */
#line 776 "bello.y"
    {
        (yyval.stmt) = bldWhlStmt();
    }
#line 2885 "y.tab.c"
    break;

  case 132: /* do_while_statement: DO structure_statement WHILE LEFT_PAREN expression_statement RIGHT_PAREN SEMICOLON  */
#line 782 "bello.y"
    {
        (yyval.stmt)= bldDoWhlStmt((yyvsp[-2].stmt), (yyvsp[-5].stmt));
    }
#line 2893 "y.tab.c"
    break;

  case 133: /* break_statement: BREAK  */
#line 787 "bello.y"
            { (yyval.stmt)= bldBrkStmt(bldCnstIntExp(1)); }
#line 2899 "y.tab.c"
    break;

  case 134: /* break_statement: BREAK LEFT_PAREN expression RIGHT_PAREN  */
#line 788 "bello.y"
                                              { (yyval.stmt)= bldBrkStmt((yyvsp[-1].exp)); }
#line 2905 "y.tab.c"
    break;

  case 135: /* continue_statement: CONTINUE  */
#line 791 "bello.y"
               { (yyval.stmt)= bldCntnStmt(bldCnstIntExp(1)); }
#line 2911 "y.tab.c"
    break;

  case 136: /* continue_statement: CONTINUE LEFT_PAREN expression RIGHT_PAREN  */
#line 792 "bello.y"
                                                 { (yyval.stmt)= bldCntnStmt((yyvsp[-1].exp)); }
#line 2917 "y.tab.c"
    break;

  case 139: /* FUNCTION_STATEMENT: FUNC IDENTIFER LEFT_PAREN parameter_list RIGHT_PAREN  */
#line 834 "bello.y"
    {
        struct FcnStrc* fcn;

        fcn=bldFcn((yyvsp[-3].idtf), (yyvsp[-1].prmLst));

        (yyval.stmt) = bldFcnStmt(fcn);
    }
#line 2929 "y.tab.c"
    break;

  case 140: /* FUNCTION_STATEMENT: FUNC IDENTIFER LEFT_PAREN RIGHT_PAREN  */
#line 842 "bello.y"
    {
        struct FcnStrc *fcn;

        fcn=bldFcn((yyvsp[-2].idtf), bldPrmLst());

        (yyval.stmt) = bldFcnStmt(fcn);
    }
#line 2941 "y.tab.c"
    break;

  case 141: /* FUNCTION_STATEMENT: SHARED FUNC IDENTIFER LEFT_PAREN parameter_list RIGHT_PAREN  */
#line 850 "bello.y"
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
#line 2962 "y.tab.c"
    break;

  case 142: /* FUNCTION_STATEMENT: SHARED FUNC IDENTIFER LEFT_PAREN RIGHT_PAREN  */
#line 867 "bello.y"
    {
        struct FcnStrc *fcn;

        fcn=bldFcn((yyvsp[-2].idtf), bldPrmLst());

        (yyval.stmt) = bldFcnStmt(fcn);
    }
#line 2974 "y.tab.c"
    break;

  case 143: /* CLASS_STATEMENT: CLASS IDENTIFER  */
#line 877 "bello.y"
    {
        struct ClsStrc* cls;

        cls = bldCls((yyvsp[0].idtf));

        (yyval.stmt) = bldClsStmt(cls);

        //blnDfnCls = 1;
    }
#line 2988 "y.tab.c"
    break;

  case 144: /* parameter_list: IDENTIFER  */
#line 890 "bello.y"
    {
        (yyval.prmLst) = bldPrmLst();
        prmLstAdd((yyval.prmLst), bldVrbExp((yyvsp[0].idtf)));
    }
#line 2997 "y.tab.c"
    break;

  case 145: /* parameter_list: parameter_list COMMA IDENTIFER  */
#line 895 "bello.y"
    { 
        (yyval.prmLst)=(yyvsp[-2].prmLst);  
        prmLstAdd((yyval.prmLst), bldVrbExp((yyvsp[0].idtf)));
    }
#line 3006 "y.tab.c"
    break;

  case 146: /* return_statement: RETURN  */
#line 901 "bello.y"
             { (yyval.stmt)=bldRtnStmt(NULL); }
#line 3012 "y.tab.c"
    break;

  case 147: /* return_statement: RETURN expression  */
#line 902 "bello.y"
                        { (yyval.stmt)=bldRtnStmt((yyvsp[0].exp)); }
#line 3018 "y.tab.c"
    break;


#line 3022 "y.tab.c"

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

#line 905 "bello.y"



void fldStmt(int indt=0)
{
    int idx;

    while (stmtStk.back()->indt > indt)
    {
        
        //printf("fld stmt\n");

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
                ifStmt->els = NULL;
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
                auto fcnStmt = static_cast<ForStmtStrc*>(stmtStk.back()->stmt);
                fcnStmt->stmt = blk;
                break;
            }
            case ELSE_STATEMENT:
            {
                auto elsStmt = static_cast<ElsStmtStrc*>(stmtStk.back()->stmt);
                elsStmt->stmt = blk;

                //将else语句添加到其上的if语句结构体中
                //StmtStrc* els = stmtStk.back()->stmt->stmt.elsStmt->stmt;

                stmtStk.pop_back();

                auto ifStmtLst = static_cast<IfStmtStrc*>(stmtStk.back()->stmt);

                ifStmtLst->els = elsStmt->stmt;
            }
            case CLASS_STATEMENT:
            {
                
                //此处未完成
                //根据类中的语句填充类

                auto clsStmt = static_cast<ClsStmtStrc*>(stmtStk.back()->stmt);

                int lnt = static_cast<StmtBlkStrc*>(blk)->stmtArr.size();

                clsStmt->cls->dfn = blk;

                //printf("blk arr sz: %d\n", blk->stmt.stmtBlk->stmtArr.size());
                
                //cls->dfn = blk;
                /* for (int i=0;i<lnt;i++)
                {
                    StmtStrc *stmt = blk->stmt.stmtBlk->stmtArr.at(i);  

                    if (stmt->typ == VAR_STATEMENT)
                    {
                        AsgnLstStrc* asgn = stmt->stmt.varStmt->asgnLst;

                        for (int j=0;j<asgn->asgnArr.size();j++)
                        {
                            ExpStrc* asgnExp = asgn->asgnArr.at(j);

                            //赋值应只允许静态值
                            VrbStrc* vrb = bldVrb(asgnExp->exp.asgnExp->lvl->exp.lvlExp->vrb->exp.vrbExp->nm);

                            cls->vrb.push_back(vrb);
                        }
                        
                    
                    }

                    if (stmt->typ == FUNCTION_STATEMENT)
                    {
                        FcnStrc* fcn = stmt->stmt.fcnStmt->fcn;
                        cls->fcn.push_back(fcn);
                    }
                } */

                break;
            }
        }


        /* //如果当前输入的语句是else语句，检查同级缩进的上1个语句是不是if语句 */
        /* if (($<stmt>-2)->typ == ELSE_STATEMENT)
        {
            if (stmtStk.back()->stmt->typ == IF_STATEMENT)
            {
                
            }
            else
            {
                yyclearin;
                yyerrok;
            }

        } */

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
                printf("varStmt2\n");
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
        }
    }
}


int main(int argc, char * argv[])
{

    //创建全局环境

    //struct EnvrStrc* glbEnvr = new EnvrStrc;

    //envr.push_back(glbEnvr);

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


