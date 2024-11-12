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


#line 129 "y.tab.c"

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
    INDENT = 262,                  /* INDENT  */
    INT_VALUE = 263,               /* INT_VALUE  */
    BOOLEAN_VALUE = 264,           /* BOOLEAN_VALUE  */
    FLOAT_VALUE = 265,             /* FLOAT_VALUE  */
    STRING_VALUE = 266,            /* STRING_VALUE  */
    NULL_VALUE = 267,              /* NULL_VALUE  */
    ARRAY_VALUE = 268,             /* ARRAY_VALUE  */
    IDENTIFER = 269,               /* IDENTIFER  */
    ASSIGN = 270,                  /* ASSIGN  */
    VAR = 271,                     /* VAR  */
    GLOBAL = 272,                  /* GLOBAL  */
    ADD_ASSIGN = 273,              /* ADD_ASSIGN  */
    SUB_ASSIGN = 274,              /* SUB_ASSIGN  */
    MUL_ASSIGN = 275,              /* MUL_ASSIGN  */
    DIV_ASSIGN = 276,              /* DIV_ASSIGN  */
    MOD_ASSIGN = 277,              /* MOD_ASSIGN  */
    PRINT = 278,                   /* PRINT  */
    PRINTLN = 279,                 /* PRINTLN  */
    LEFT_PAREN = 280,              /* LEFT_PAREN  */
    RIGHT_PAREN = 281,             /* RIGHT_PAREN  */
    LEFT_QUAD = 282,               /* LEFT_QUAD  */
    RIGHT_QUAD = 283,              /* RIGHT_QUAD  */
    LEFT_BRACE = 284,              /* LEFT_BRACE  */
    RIGHT_BRACE = 285,             /* RIGHT_BRACE  */
    SEMICOLON_OPTIONAL = 286,      /* SEMICOLON_OPTIONAL  */
    SEMICOLON = 287,               /* SEMICOLON  */
    COMMA = 288,                   /* COMMA  */
    COLON = 289,                   /* COLON  */
    ADD = 290,                     /* ADD  */
    SUB = 291,                     /* SUB  */
    MUL = 292,                     /* MUL  */
    DIV = 293,                     /* DIV  */
    MOD = 294,                     /* MOD  */
    EQ = 295,                      /* EQ  */
    NE = 296,                      /* NE  */
    GT = 297,                      /* GT  */
    GE = 298,                      /* GE  */
    LT = 299,                      /* LT  */
    LE = 300,                      /* LE  */
    AND = 301,                     /* AND  */
    OR = 302,                      /* OR  */
    NOT = 303,                     /* NOT  */
    BIT_AND = 304,                 /* BIT_AND  */
    BIT_OR = 305,                  /* BIT_OR  */
    BIT_XOR = 306,                 /* BIT_XOR  */
    BIT_NOT = 307,                 /* BIT_NOT  */
    INCREMENT = 308,               /* INCREMENT  */
    DECREMENT = 309,               /* DECREMENT  */
    IF = 310,                      /* IF  */
    ELSE = 311,                    /* ELSE  */
    FOR = 312,                     /* FOR  */
    WHILE = 313,                   /* WHILE  */
    DO = 314,                      /* DO  */
    CONTINUE = 315,                /* CONTINUE  */
    BREAK = 316,                   /* BREAK  */
    FUNC = 317,                    /* FUNC  */
    RETURN = 318,                  /* RETURN  */
    NEW_ARRAY = 319,               /* NEW_ARRAY  */
    MINUS_SIGN = 320,              /* MINUS_SIGN  */
    PLUS_SIGN = 321,               /* PLUS_SIGN  */
    READ_INT = 322,                /* READ_INT  */
    READ_FLOAT = 323,              /* READ_FLOAT  */
    READ = 324,                    /* READ  */
    READ_BOOL = 325,               /* READ_BOOL  */
    READ_LINE = 326                /* READ_LINE  */
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
#define INDENT 262
#define INT_VALUE 263
#define BOOLEAN_VALUE 264
#define FLOAT_VALUE 265
#define STRING_VALUE 266
#define NULL_VALUE 267
#define ARRAY_VALUE 268
#define IDENTIFER 269
#define ASSIGN 270
#define VAR 271
#define GLOBAL 272
#define ADD_ASSIGN 273
#define SUB_ASSIGN 274
#define MUL_ASSIGN 275
#define DIV_ASSIGN 276
#define MOD_ASSIGN 277
#define PRINT 278
#define PRINTLN 279
#define LEFT_PAREN 280
#define RIGHT_PAREN 281
#define LEFT_QUAD 282
#define RIGHT_QUAD 283
#define LEFT_BRACE 284
#define RIGHT_BRACE 285
#define SEMICOLON_OPTIONAL 286
#define SEMICOLON 287
#define COMMA 288
#define COLON 289
#define ADD 290
#define SUB 291
#define MUL 292
#define DIV 293
#define MOD 294
#define EQ 295
#define NE 296
#define GT 297
#define GE 298
#define LT 299
#define LE 300
#define AND 301
#define OR 302
#define NOT 303
#define BIT_AND 304
#define BIT_OR 305
#define BIT_XOR 306
#define BIT_NOT 307
#define INCREMENT 308
#define DECREMENT 309
#define IF 310
#define ELSE 311
#define FOR 312
#define WHILE 313
#define DO 314
#define CONTINUE 315
#define BREAK 316
#define FUNC 317
#define RETURN 318
#define NEW_ARRAY 319
#define MINUS_SIGN 320
#define PLUS_SIGN 321
#define READ_INT 322
#define READ_FLOAT 323
#define READ 324
#define READ_BOOL 325
#define READ_LINE 326

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 60 "bello.y"

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

#line 346 "y.tab.c"

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
  YYSYMBOL_INDENT = 7,                     /* INDENT  */
  YYSYMBOL_INT_VALUE = 8,                  /* INT_VALUE  */
  YYSYMBOL_BOOLEAN_VALUE = 9,              /* BOOLEAN_VALUE  */
  YYSYMBOL_FLOAT_VALUE = 10,               /* FLOAT_VALUE  */
  YYSYMBOL_STRING_VALUE = 11,              /* STRING_VALUE  */
  YYSYMBOL_NULL_VALUE = 12,                /* NULL_VALUE  */
  YYSYMBOL_ARRAY_VALUE = 13,               /* ARRAY_VALUE  */
  YYSYMBOL_IDENTIFER = 14,                 /* IDENTIFER  */
  YYSYMBOL_ASSIGN = 15,                    /* ASSIGN  */
  YYSYMBOL_VAR = 16,                       /* VAR  */
  YYSYMBOL_GLOBAL = 17,                    /* GLOBAL  */
  YYSYMBOL_ADD_ASSIGN = 18,                /* ADD_ASSIGN  */
  YYSYMBOL_SUB_ASSIGN = 19,                /* SUB_ASSIGN  */
  YYSYMBOL_MUL_ASSIGN = 20,                /* MUL_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 21,                /* DIV_ASSIGN  */
  YYSYMBOL_MOD_ASSIGN = 22,                /* MOD_ASSIGN  */
  YYSYMBOL_PRINT = 23,                     /* PRINT  */
  YYSYMBOL_PRINTLN = 24,                   /* PRINTLN  */
  YYSYMBOL_LEFT_PAREN = 25,                /* LEFT_PAREN  */
  YYSYMBOL_RIGHT_PAREN = 26,               /* RIGHT_PAREN  */
  YYSYMBOL_LEFT_QUAD = 27,                 /* LEFT_QUAD  */
  YYSYMBOL_RIGHT_QUAD = 28,                /* RIGHT_QUAD  */
  YYSYMBOL_LEFT_BRACE = 29,                /* LEFT_BRACE  */
  YYSYMBOL_RIGHT_BRACE = 30,               /* RIGHT_BRACE  */
  YYSYMBOL_SEMICOLON_OPTIONAL = 31,        /* SEMICOLON_OPTIONAL  */
  YYSYMBOL_SEMICOLON = 32,                 /* SEMICOLON  */
  YYSYMBOL_COMMA = 33,                     /* COMMA  */
  YYSYMBOL_COLON = 34,                     /* COLON  */
  YYSYMBOL_ADD = 35,                       /* ADD  */
  YYSYMBOL_SUB = 36,                       /* SUB  */
  YYSYMBOL_MUL = 37,                       /* MUL  */
  YYSYMBOL_DIV = 38,                       /* DIV  */
  YYSYMBOL_MOD = 39,                       /* MOD  */
  YYSYMBOL_EQ = 40,                        /* EQ  */
  YYSYMBOL_NE = 41,                        /* NE  */
  YYSYMBOL_GT = 42,                        /* GT  */
  YYSYMBOL_GE = 43,                        /* GE  */
  YYSYMBOL_LT = 44,                        /* LT  */
  YYSYMBOL_LE = 45,                        /* LE  */
  YYSYMBOL_AND = 46,                       /* AND  */
  YYSYMBOL_OR = 47,                        /* OR  */
  YYSYMBOL_NOT = 48,                       /* NOT  */
  YYSYMBOL_BIT_AND = 49,                   /* BIT_AND  */
  YYSYMBOL_BIT_OR = 50,                    /* BIT_OR  */
  YYSYMBOL_BIT_XOR = 51,                   /* BIT_XOR  */
  YYSYMBOL_BIT_NOT = 52,                   /* BIT_NOT  */
  YYSYMBOL_INCREMENT = 53,                 /* INCREMENT  */
  YYSYMBOL_DECREMENT = 54,                 /* DECREMENT  */
  YYSYMBOL_IF = 55,                        /* IF  */
  YYSYMBOL_ELSE = 56,                      /* ELSE  */
  YYSYMBOL_FOR = 57,                       /* FOR  */
  YYSYMBOL_WHILE = 58,                     /* WHILE  */
  YYSYMBOL_DO = 59,                        /* DO  */
  YYSYMBOL_CONTINUE = 60,                  /* CONTINUE  */
  YYSYMBOL_BREAK = 61,                     /* BREAK  */
  YYSYMBOL_FUNC = 62,                      /* FUNC  */
  YYSYMBOL_RETURN = 63,                    /* RETURN  */
  YYSYMBOL_NEW_ARRAY = 64,                 /* NEW_ARRAY  */
  YYSYMBOL_MINUS_SIGN = 65,                /* MINUS_SIGN  */
  YYSYMBOL_PLUS_SIGN = 66,                 /* PLUS_SIGN  */
  YYSYMBOL_READ_INT = 67,                  /* READ_INT  */
  YYSYMBOL_READ_FLOAT = 68,                /* READ_FLOAT  */
  YYSYMBOL_READ = 69,                      /* READ  */
  YYSYMBOL_READ_BOOL = 70,                 /* READ_BOOL  */
  YYSYMBOL_READ_LINE = 71,                 /* READ_LINE  */
  YYSYMBOL_YYACCEPT = 72,                  /* $accept  */
  YYSYMBOL_statement = 73,                 /* statement  */
  YYSYMBOL_74_1 = 74,                      /* @1  */
  YYSYMBOL_check_indent = 75,              /* check_indent  */
  YYSYMBOL_build_statement = 76,           /* build_statement  */
  YYSYMBOL_close_execute_statement = 77,   /* close_execute_statement  */
  YYSYMBOL_close_execute_last_statement = 78, /* close_execute_last_statement  */
  YYSYMBOL_execute_statement = 79,         /* execute_statement  */
  YYSYMBOL_single_statement = 80,          /* single_statement  */
  YYSYMBOL_single_statement_no_semicolon = 81, /* single_statement_no_semicolon  */
  YYSYMBOL_null_statement = 82,            /* null_statement  */
  YYSYMBOL_nop_statement = 83,             /* nop_statement  */
  YYSYMBOL_statement_block = 84,           /* statement_block  */
  YYSYMBOL_block_list = 85,                /* block_list  */
  YYSYMBOL_expression_statement = 86,      /* expression_statement  */
  YYSYMBOL_expression = 87,                /* expression  */
  YYSYMBOL_lvalue_operation_expression = 88, /* lvalue_operation_expression  */
  YYSYMBOL_assign_expression = 89,         /* assign_expression  */
  YYSYMBOL_self_operation_expression = 90, /* self_operation_expression  */
  YYSYMBOL_unary_expression = 91,          /* unary_expression  */
  YYSYMBOL_binary_expression = 92,         /* binary_expression  */
  YYSYMBOL_value_expression = 93,          /* value_expression  */
  YYSYMBOL_lvalue_expression = 94,         /* lvalue_expression  */
  YYSYMBOL_array_expression = 95,          /* array_expression  */
  YYSYMBOL_new_array_expression = 96,      /* new_array_expression  */
  YYSYMBOL_element_list = 97,              /* element_list  */
  YYSYMBOL_var_statement = 98,             /* var_statement  */
  YYSYMBOL_global_statement = 99,          /* global_statement  */
  YYSYMBOL_assign_list = 100,              /* assign_list  */
  YYSYMBOL_function_expression = 101,      /* function_expression  */
  YYSYMBOL_argument_list = 102,            /* argument_list  */
  YYSYMBOL_evaluate_list = 103,            /* evaluate_list  */
  YYSYMBOL_if_statement = 104,             /* if_statement  */
  YYSYMBOL_else_statement = 105,           /* else_statement  */
  YYSYMBOL_for_statement = 106,            /* for_statement  */
  YYSYMBOL_while_statement = 107,          /* while_statement  */
  YYSYMBOL_do_while_statement = 108,       /* do_while_statement  */
  YYSYMBOL_break_statement = 109,          /* break_statement  */
  YYSYMBOL_continue_statement = 110,       /* continue_statement  */
  YYSYMBOL_structure_statement = 111,      /* structure_statement  */
  YYSYMBOL_function_define_statement = 112, /* function_define_statement  */
  YYSYMBOL_parameter_list = 113,           /* parameter_list  */
  YYSYMBOL_return_statement = 114          /* return_statement  */
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
typedef yytype_uint8 yy_state_t;

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
#define YYLAST   1358

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  72
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  43
/* YYNRULES -- Number of rules.  */
#define YYNRULES  141
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  248

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   326


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
      65,    66,    67,    68,    69,    70,    71
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   153,   153,   153,   154,   155,   156,   157,   158,   162,
     172,   322,   444,   566,   607,   608,   609,   610,   611,   613,
     614,   615,   616,   618,   619,   620,   621,   631,   632,   633,
     634,   635,   636,   640,   643,   646,   647,   650,   655,   662,
     668,   669,   670,   671,   672,   673,   676,   677,   680,   681,
     682,   683,   684,   685,   689,   690,   691,   692,   695,   696,
     697,   698,   699,   702,   703,   704,   705,   706,   707,   708,
     709,   710,   711,   712,   713,   714,   715,   716,   717,   721,
     722,   723,   724,   725,   726,   727,   730,   731,   739,   743,
     749,   755,   760,   768,   771,   774,   779,   784,   789,   800,
     804,   810,   815,   823,   828,   833,   838,   843,   848,   853,
     858,   863,   868,   873,   878,   883,   888,   893,   898,   903,
     908,   913,   918,   923,   928,   946,   957,   970,   982,   988,
     994,   995,   998,   999,  1002,  1003,  1040,  1048,  1060,  1065,
    1072,  1073
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
  "END_FILE", "NOP", "INDENT", "INT_VALUE", "BOOLEAN_VALUE", "FLOAT_VALUE",
  "STRING_VALUE", "NULL_VALUE", "ARRAY_VALUE", "IDENTIFER", "ASSIGN",
  "VAR", "GLOBAL", "ADD_ASSIGN", "SUB_ASSIGN", "MUL_ASSIGN", "DIV_ASSIGN",
  "MOD_ASSIGN", "PRINT", "PRINTLN", "LEFT_PAREN", "RIGHT_PAREN",
  "LEFT_QUAD", "RIGHT_QUAD", "LEFT_BRACE", "RIGHT_BRACE",
  "SEMICOLON_OPTIONAL", "SEMICOLON", "COMMA", "COLON", "ADD", "SUB", "MUL",
  "DIV", "MOD", "EQ", "NE", "GT", "GE", "LT", "LE", "AND", "OR", "NOT",
  "BIT_AND", "BIT_OR", "BIT_XOR", "BIT_NOT", "INCREMENT", "DECREMENT",
  "IF", "ELSE", "FOR", "WHILE", "DO", "CONTINUE", "BREAK", "FUNC",
  "RETURN", "NEW_ARRAY", "MINUS_SIGN", "PLUS_SIGN", "READ_INT",
  "READ_FLOAT", "READ", "READ_BOOL", "READ_LINE", "$accept", "statement",
  "@1", "check_indent", "build_statement", "close_execute_statement",
  "close_execute_last_statement", "execute_statement", "single_statement",
  "single_statement_no_semicolon", "null_statement", "nop_statement",
  "statement_block", "block_list", "expression_statement", "expression",
  "lvalue_operation_expression", "assign_expression",
  "self_operation_expression", "unary_expression", "binary_expression",
  "value_expression", "lvalue_expression", "array_expression",
  "new_array_expression", "element_list", "var_statement",
  "global_statement", "assign_list", "function_expression",
  "argument_list", "evaluate_list", "if_statement", "else_statement",
  "for_statement", "while_statement", "do_while_statement",
  "break_statement", "continue_statement", "structure_statement",
  "function_define_statement", "parameter_list", "return_statement", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-71)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-8)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     184,   -71,    90,   -71,   -71,   -71,   440,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -19,    -7,    -7,
     957,   593,   957,   957,   957,   957,     7,     7,     2,   -71,
      23,    24,    31,    33,    45,   957,    37,    59,   -71,   -71,
    1290,   -71,   -71,   -71,   -71,   -71,   -71,    -2,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   440,   623,    50,    58,    58,    68,   -71,  1290,    22,
     -71,   -71,   -71,   -71,   -71,    65,    65,   957,   497,   957,
     957,   957,    73,  1290,   957,   -71,   957,   957,   957,   957,
     957,   957,   957,   957,   957,   957,   957,   957,   957,   957,
     957,   957,   957,   957,   957,   957,   957,   957,   654,   -71,
     -71,    72,    97,   -71,  1290,    20,   957,   102,   -71,   -71,
     957,   987,   248,   105,   -71,   -71,   -71,   -71,   -71,   -71,
     113,  1009,  1031,     0,  1053,   -71,    94,    94,   -71,   -71,
     -71,   135,   135,   135,   135,   135,   135,  1307,   112,   250,
      85,   186,  1290,  1290,  1290,  1290,  1290,  1290,   685,  1073,
     716,   -71,   -71,   957,  1290,   145,  1290,   -71,   312,   -71,
     -71,   108,   957,   -71,   -71,   -71,   -71,   -71,    21,   -71,
     -71,   139,  1093,   -71,   532,   747,  1113,   -71,  1290,   957,
     -71,   -71,   376,   143,   144,   -71,   161,   -71,   -71,   777,
     -71,   807,  1133,   149,  1153,   -71,   563,   -71,  1290,   -71,
     -71,   957,   497,   -71,   -71,    -6,   -71,  1193,   -71,   837,
     -71,   -71,   867,   -71,   897,  1173,   -71,   152,   154,   -71,
     -71,   -71,  1213,   -71,  1233,   -71,  1253,   -71,   927,   150,
     -71,   -71,   -71,   -71,   -71,  1273,   -71,   -71
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     8,    12,     1,    11,    12,     0,     2,     5,     6,
      26,    34,    79,    81,    80,    82,    83,    86,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   126,
       0,     0,   132,   130,     0,   140,     0,     0,    23,    14,
      39,    41,    46,    47,    42,    43,    40,    85,    44,    45,
      24,    25,    84,    15,    16,    17,    18,    19,    20,    22,
      21,     0,     0,    95,    93,    94,     0,    89,    91,     0,
      59,    58,    61,    62,    86,    54,    55,     0,    33,     0,
       0,     0,     0,   141,     0,     9,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    56,
      57,    87,     0,   100,   101,     0,     0,     0,    60,    88,
       0,     0,     0,     0,    32,    27,    28,    29,    30,    31,
       0,     0,     0,     0,     0,    10,    63,    64,    65,    66,
      67,    70,    71,    72,    73,    74,    75,    68,    69,    76,
      77,    78,    48,    49,    50,    51,    52,    53,     0,     0,
       0,     9,    99,     0,    96,    97,    92,   125,     0,   134,
     135,     0,     0,   128,   133,   131,   138,   137,     0,    90,
       4,     0,     0,   103,     0,     0,     0,    10,   102,     0,
      36,    37,     0,     0,     0,   136,     0,   113,   110,     0,
     107,     0,     0,     0,     0,   114,     0,    13,    98,    35,
      38,     0,    33,   139,   111,     0,   108,     0,   104,     0,
     124,   121,     0,   118,     0,     0,     3,     0,     0,   112,
     109,   105,     0,   122,     0,   119,     0,   115,     0,     0,
     127,   106,   123,   120,   116,     0,   129,   117
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -71,   -71,   -71,    27,    -4,   -71,   192,   -71,   -33,    -9,
     -71,   -71,   -71,   -71,   -70,   -20,   -71,   -71,   -71,   -71,
     -71,   -71,    -3,   -71,   -71,   -71,   -71,   -71,   187,   -71,
     -71,   -71,   -68,   -71,   -67,   -66,   -71,   -71,   -71,   -71,
     -71,   -71,   -71
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,    61,   135,   180,     8,     7,   226,    37,   123,
     124,    38,   170,   192,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    69,    50,    51,    64,    52,
     115,   111,    53,    54,    55,    56,   129,    57,    58,   171,
      59,   178,    60
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      66,    68,    70,    71,    72,    73,    62,    63,   125,   130,
     126,   127,   128,   102,   176,    83,   103,   104,   105,   106,
     107,    74,   229,    75,    76,   108,   177,    77,   112,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,   114,    99,   100,   101,   162,   195,    78,    79,
     119,   109,   110,   163,   196,   120,    80,   121,    81,    82,
     131,   132,    84,    85,   134,   116,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   159,   169,
       3,   117,   108,     4,   118,     5,   164,     6,   133,   160,
     166,   161,   194,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,   165,    99,   100,   101,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    88,    89,    90,    99,   191,   101,   172,   182,   173,
     186,   227,   125,   188,   126,   127,   128,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,   210,
     189,    99,   100,   101,   202,   204,   193,   197,   211,   208,
      86,    87,    88,    89,    90,   213,   212,   220,   239,   215,
     240,   217,   246,   207,    -7,     1,   225,    -7,   187,    -7,
      -7,    -7,    -7,    -7,    -7,    -7,    -7,     9,    -7,   232,
      -7,    -7,   234,   228,   236,     0,    65,     0,     0,    -7,
       0,    -7,     0,     0,     0,     0,     0,     0,   245,    -7,
      -7,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    -7,     0,     0,    99,    -7,    -7,    -7,    -7,
      -7,    -7,    -7,     0,    -7,    -7,    -7,    -7,    -7,    10,
       0,     0,     0,     0,    11,     0,    12,    13,    14,    15,
      16,     0,    17,     0,    18,    19,     0,     0,     0,     0,
       0,     0,     0,    20,     0,    21,     0,   168,     0,     0,
       0,     0,     0,    22,    23,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    24,     0,     0,     0,
      25,    26,    27,    28,    29,    30,    31,     0,    32,    33,
      34,    35,    36,    10,     0,     0,     0,     0,    11,     0,
      12,    13,    14,    15,    16,     0,    17,     0,    18,    19,
       0,     0,     0,     0,     0,     0,     0,    20,     0,    21,
       0,     0,   190,     0,     0,     0,     0,    22,    23,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      24,     0,     0,     0,    25,    26,    27,    28,    29,    30,
      31,     0,    32,    33,    34,    35,    36,    10,     0,     0,
       0,     0,    11,     0,    12,    13,    14,    15,    16,     0,
      17,     0,    18,    19,     0,     0,     0,     0,     0,     0,
       0,    20,     0,    21,     0,     0,   209,     0,     0,     0,
       0,    22,    23,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    24,     0,     0,     0,    25,    26,
      27,    28,    29,    30,    31,     0,    32,    33,    34,    35,
      36,    10,     0,     0,     0,     0,    11,     0,    12,    13,
      14,    15,    16,     0,    17,     0,    18,    19,     0,     0,
       0,     0,     0,     0,     0,    20,     0,    21,     0,     0,
       0,     0,     0,     0,     0,    22,    23,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    24,     0,
       0,     0,    25,    26,    27,    28,    29,    30,    31,     0,
      32,    33,    34,    35,    36,    12,    13,    14,    15,    16,
       0,    17,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    20,     0,    21,     0,     0,     0,     0,     0,
       0,     0,    22,    23,     0,     0,     0,     0,     0,     0,
      12,    13,    14,    15,    16,    24,    17,     0,     0,    25,
      26,    27,    28,     0,    30,    31,   122,    20,     0,    21,
     200,    36,     0,     0,     0,     0,   201,    22,    23,     0,
       0,    12,    13,    14,    15,    16,     0,    17,     0,     0,
      24,     0,     0,     0,    25,    26,    27,     0,    20,     0,
      21,   223,     0,     0,     0,     0,    36,   224,    22,    23,
       0,    12,    13,    14,    15,    16,     0,    17,     0,     0,
       0,    24,     0,     0,     0,    25,    26,    27,    20,     0,
      21,    67,     0,     0,     0,     0,     0,    36,    22,    23,
       0,    12,    13,    14,    15,    16,     0,    17,     0,     0,
       0,    24,     0,     0,     0,    25,    26,    27,    20,   113,
      21,     0,     0,     0,     0,     0,     0,    36,    22,    23,
       0,     0,    12,    13,    14,    15,    16,     0,    17,     0,
       0,    24,     0,     0,     0,    25,    26,    27,     0,    20,
       0,    21,     0,     0,     0,     0,     0,    36,   158,    22,
      23,     0,     0,    12,    13,    14,    15,    16,     0,    17,
       0,     0,    24,     0,     0,     0,    25,    26,    27,     0,
      20,     0,    21,     0,     0,     0,     0,     0,    36,   181,
      22,    23,     0,     0,    12,    13,    14,    15,    16,     0,
      17,     0,     0,    24,     0,     0,     0,    25,    26,    27,
       0,    20,     0,    21,     0,     0,     0,     0,     0,    36,
     185,    22,    23,     0,     0,    12,    13,    14,    15,    16,
       0,    17,     0,     0,    24,     0,     0,     0,    25,    26,
      27,     0,    20,     0,    21,     0,     0,     0,     0,     0,
      36,   203,    22,    23,     0,    12,    13,    14,    15,    16,
       0,    17,     0,     0,     0,    24,     0,     0,     0,    25,
      26,    27,    20,     0,    21,   214,     0,     0,     0,     0,
       0,    36,    22,    23,     0,    12,    13,    14,    15,    16,
       0,    17,     0,     0,     0,    24,     0,     0,     0,    25,
      26,    27,    20,     0,    21,   216,     0,     0,     0,     0,
       0,    36,    22,    23,     0,    12,    13,    14,    15,    16,
       0,    17,     0,     0,     0,    24,     0,     0,     0,    25,
      26,    27,    20,     0,    21,   231,     0,     0,     0,     0,
       0,    36,    22,    23,     0,    12,    13,    14,    15,    16,
       0,    17,     0,     0,     0,    24,     0,     0,     0,    25,
      26,    27,    20,     0,    21,   233,     0,     0,     0,     0,
       0,    36,    22,    23,     0,    12,    13,    14,    15,    16,
       0,    17,     0,     0,     0,    24,     0,     0,     0,    25,
      26,    27,    20,     0,    21,   235,     0,     0,     0,     0,
       0,    36,    22,    23,     0,    12,    13,    14,    15,    16,
       0,    17,     0,     0,     0,    24,     0,     0,     0,    25,
      26,    27,    20,     0,    21,   244,     0,     0,     0,     0,
       0,    36,    22,    23,     0,    12,    13,    14,    15,    16,
       0,    17,     0,     0,     0,    24,     0,     0,     0,    25,
      26,    27,    20,     0,    21,     0,     0,     0,     0,     0,
       0,    36,    22,    23,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    24,     0,     0,     0,    25,
      26,    27,     0,   167,     0,     0,     0,     0,     0,     0,
       0,    36,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,   174,    99,   100,   101,     0,
       0,     0,     0,     0,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,   175,    99,   100,
     101,     0,     0,     0,     0,     0,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,   179,
      99,   100,   101,     0,     0,     0,     0,     0,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,   183,    99,   100,   101,     0,     0,   184,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,   198,    99,   100,   101,     0,     0,   199,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,   205,    99,   100,   101,     0,     0,   206,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,   218,    99,   100,   101,     0,     0,   219,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,   221,    99,   100,   101,     0,     0,   222,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,   237,    99,   100,   101,     0,     0,   238,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,   230,    99,   100,   101,     0,     0,     0,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,   241,    99,   100,   101,     0,     0,     0,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,   242,    99,   100,   101,     0,     0,     0,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,   243,    99,   100,   101,     0,     0,     0,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,   247,    99,   100,   101,     0,     0,     0,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,     0,    99,   100,   101,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,     0,    99,
     100,   101,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,     0,     0,     0,    99,   100,   101
};

static const yytype_int16 yycheck[] =
{
      20,    21,    22,    23,    24,    25,    25,    14,    78,    79,
      78,    78,    78,    15,    14,    35,    18,    19,    20,    21,
      22,    14,    28,    26,    27,    27,    26,    25,    61,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    62,    49,    50,    51,    26,    26,    25,    25,
      28,    53,    54,    33,    33,    33,    25,    77,    25,    14,
      80,    81,    25,     4,    84,    15,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   122,
       0,    33,    27,     3,    26,     5,   116,     7,    25,    27,
     120,     4,   172,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    14,    49,    50,    51,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    37,    38,    39,    49,   168,    51,    32,   158,    26,
     160,   211,   212,   163,   212,   212,   212,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,   192,
      15,    49,    50,    51,   184,   185,    58,    28,    25,   189,
      35,    36,    37,    38,    39,    14,    32,    28,    26,   199,
      26,   201,    32,   187,     0,     1,   206,     3,   161,     5,
       6,     7,     8,     9,    10,    11,    12,     5,    14,   219,
      16,    17,   222,   212,   224,    -1,    19,    -1,    -1,    25,
      -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,   238,    35,
      36,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    48,    -1,    -1,    49,    52,    53,    54,    55,
      56,    57,    58,    -1,    60,    61,    62,    63,    64,     1,
      -1,    -1,    -1,    -1,     6,    -1,     8,     9,    10,    11,
      12,    -1,    14,    -1,    16,    17,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    -1,    27,    -1,    29,    -1,    -1,
      -1,    -1,    -1,    35,    36,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    48,    -1,    -1,    -1,
      52,    53,    54,    55,    56,    57,    58,    -1,    60,    61,
      62,    63,    64,     1,    -1,    -1,    -1,    -1,     6,    -1,
       8,     9,    10,    11,    12,    -1,    14,    -1,    16,    17,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    27,
      -1,    -1,    30,    -1,    -1,    -1,    -1,    35,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    -1,    -1,    -1,    52,    53,    54,    55,    56,    57,
      58,    -1,    60,    61,    62,    63,    64,     1,    -1,    -1,
      -1,    -1,     6,    -1,     8,     9,    10,    11,    12,    -1,
      14,    -1,    16,    17,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    -1,    27,    -1,    -1,    30,    -1,    -1,    -1,
      -1,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    -1,    -1,    -1,    52,    53,
      54,    55,    56,    57,    58,    -1,    60,    61,    62,    63,
      64,     1,    -1,    -1,    -1,    -1,     6,    -1,     8,     9,
      10,    11,    12,    -1,    14,    -1,    16,    17,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    35,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    -1,
      -1,    -1,    52,    53,    54,    55,    56,    57,    58,    -1,
      60,    61,    62,    63,    64,     8,     9,    10,    11,    12,
      -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    -1,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,
       8,     9,    10,    11,    12,    48,    14,    -1,    -1,    52,
      53,    54,    55,    -1,    57,    58,    59,    25,    -1,    27,
      28,    64,    -1,    -1,    -1,    -1,    34,    35,    36,    -1,
      -1,     8,     9,    10,    11,    12,    -1,    14,    -1,    -1,
      48,    -1,    -1,    -1,    52,    53,    54,    -1,    25,    -1,
      27,    28,    -1,    -1,    -1,    -1,    64,    34,    35,    36,
      -1,     8,     9,    10,    11,    12,    -1,    14,    -1,    -1,
      -1,    48,    -1,    -1,    -1,    52,    53,    54,    25,    -1,
      27,    28,    -1,    -1,    -1,    -1,    -1,    64,    35,    36,
      -1,     8,     9,    10,    11,    12,    -1,    14,    -1,    -1,
      -1,    48,    -1,    -1,    -1,    52,    53,    54,    25,    26,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    64,    35,    36,
      -1,    -1,     8,     9,    10,    11,    12,    -1,    14,    -1,
      -1,    48,    -1,    -1,    -1,    52,    53,    54,    -1,    25,
      -1,    27,    -1,    -1,    -1,    -1,    -1,    64,    34,    35,
      36,    -1,    -1,     8,     9,    10,    11,    12,    -1,    14,
      -1,    -1,    48,    -1,    -1,    -1,    52,    53,    54,    -1,
      25,    -1,    27,    -1,    -1,    -1,    -1,    -1,    64,    34,
      35,    36,    -1,    -1,     8,     9,    10,    11,    12,    -1,
      14,    -1,    -1,    48,    -1,    -1,    -1,    52,    53,    54,
      -1,    25,    -1,    27,    -1,    -1,    -1,    -1,    -1,    64,
      34,    35,    36,    -1,    -1,     8,     9,    10,    11,    12,
      -1,    14,    -1,    -1,    48,    -1,    -1,    -1,    52,    53,
      54,    -1,    25,    -1,    27,    -1,    -1,    -1,    -1,    -1,
      64,    34,    35,    36,    -1,     8,     9,    10,    11,    12,
      -1,    14,    -1,    -1,    -1,    48,    -1,    -1,    -1,    52,
      53,    54,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,
      -1,    64,    35,    36,    -1,     8,     9,    10,    11,    12,
      -1,    14,    -1,    -1,    -1,    48,    -1,    -1,    -1,    52,
      53,    54,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,
      -1,    64,    35,    36,    -1,     8,     9,    10,    11,    12,
      -1,    14,    -1,    -1,    -1,    48,    -1,    -1,    -1,    52,
      53,    54,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,
      -1,    64,    35,    36,    -1,     8,     9,    10,    11,    12,
      -1,    14,    -1,    -1,    -1,    48,    -1,    -1,    -1,    52,
      53,    54,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,
      -1,    64,    35,    36,    -1,     8,     9,    10,    11,    12,
      -1,    14,    -1,    -1,    -1,    48,    -1,    -1,    -1,    52,
      53,    54,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,
      -1,    64,    35,    36,    -1,     8,     9,    10,    11,    12,
      -1,    14,    -1,    -1,    -1,    48,    -1,    -1,    -1,    52,
      53,    54,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,
      -1,    64,    35,    36,    -1,     8,     9,    10,    11,    12,
      -1,    14,    -1,    -1,    -1,    48,    -1,    -1,    -1,    52,
      53,    54,    25,    -1,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    -1,    -1,    -1,    52,
      53,    54,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    26,    49,    50,    51,    -1,
      -1,    -1,    -1,    -1,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    26,    49,    50,
      51,    -1,    -1,    -1,    -1,    -1,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    26,
      49,    50,    51,    -1,    -1,    -1,    -1,    -1,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    28,    49,    50,    51,    -1,    -1,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    28,    49,    50,    51,    -1,    -1,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    28,    49,    50,    51,    -1,    -1,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    28,    49,    50,    51,    -1,    -1,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    28,    49,    50,    51,    -1,    -1,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    28,    49,    50,    51,    -1,    -1,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    28,    49,    50,    51,    -1,    -1,    -1,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    28,    49,    50,    51,    -1,    -1,    -1,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    28,    49,    50,    51,    -1,    -1,    -1,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    28,    49,    50,    51,    -1,    -1,    -1,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    28,    49,    50,    51,    -1,    -1,    -1,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,    50,    51,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
      50,    51,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    -1,    -1,    -1,    49,    50,    51
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,    73,     0,     3,     5,     7,    78,    77,    78,
       1,     6,     8,     9,    10,    11,    12,    14,    16,    17,
      25,    27,    35,    36,    48,    52,    53,    54,    55,    56,
      57,    58,    60,    61,    62,    63,    64,    80,    83,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      98,    99,   101,   104,   105,   106,   107,   109,   110,   112,
     114,    74,    25,    14,   100,   100,    87,    28,    87,    97,
      87,    87,    87,    87,    14,    94,    94,    25,    25,    25,
      25,    25,    14,    87,    25,     4,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    49,
      50,    51,    15,    18,    19,    20,    21,    22,    27,    53,
      54,   103,    80,    26,    87,   102,    15,    33,    26,    28,
      33,    87,    59,    81,    82,    86,   104,   106,   107,   108,
      86,    87,    87,    25,    87,    75,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    34,    87,
      27,     4,    26,    33,    87,    14,    87,    26,    29,    80,
      84,   111,    32,    26,    26,    26,    14,    26,   113,    26,
      76,    34,    87,    28,    34,    34,    87,    75,    87,    15,
      30,    80,    85,    58,    86,    26,    33,    28,    28,    34,
      28,    34,    87,    34,    87,    28,    34,    76,    87,    30,
      80,    25,    32,    14,    28,    87,    28,    87,    28,    34,
      28,    28,    34,    28,    34,    87,    79,    86,    81,    28,
      28,    28,    87,    28,    87,    28,    87,    28,    34,    26,
      26,    28,    28,    28,    28,    87,    32,    28
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    72,    74,    73,    73,    73,    73,    73,    73,    75,
      76,    77,    78,    79,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    81,    81,    81,
      81,    81,    81,    82,    83,    84,    84,    85,    85,    86,
      87,    87,    87,    87,    87,    87,    88,    88,    89,    89,
      89,    89,    89,    89,    90,    90,    90,    90,    91,    91,
      91,    91,    91,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    93,
      93,    93,    93,    93,    93,    93,    94,    94,    95,    95,
      96,    97,    97,    98,    99,   100,   100,   100,   100,   101,
     101,   102,   102,   103,   103,   103,   103,   103,   103,   103,
     103,   103,   103,   103,   103,   103,   103,   103,   103,   103,
     103,   103,   103,   103,   103,   104,   105,   106,   107,   108,
     109,   109,   110,   110,   111,   111,   112,   112,   113,   113,
     114,   114
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     8,     6,     3,     3,     0,     1,     0,
       0,     0,     0,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     1,     3,     2,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       3,     3,     3,     3,     2,     2,     2,     2,     2,     2,
       3,     2,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     3,     2,
       4,     1,     3,     2,     2,     1,     3,     3,     5,     4,
       3,     1,     3,     3,     5,     6,     7,     4,     5,     6,
       4,     5,     6,     4,     4,     6,     7,     8,     5,     6,
       7,     5,     6,     7,     5,     4,     1,     8,     4,     7,
       1,     4,     1,     4,     1,     1,     5,     4,     1,     3,
       1,     2
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
#line 153 "bello.y"
                                             {(yyval.intVl) = 0; }
#line 1847 "y.tab.c"
    break;

  case 6: /* statement: statement END_FILE close_execute_last_statement  */
#line 156 "bello.y"
                                                       { return 0; }
#line 1853 "y.tab.c"
    break;

  case 8: /* statement: error  */
#line 158 "bello.y"
            { yyerrok; }
#line 1859 "y.tab.c"
    break;

  case 9: /* check_indent: %empty  */
#line 162 "bello.y"
      { 
        if (((yyvsp[(-2) - (0)].intVl))>lstIndt+1) 
        {
           yyclearin;
           yyerrok;
        }
      }
#line 1871 "y.tab.c"
    break;

  case 10: /* build_statement: %empty  */
#line 172 "bello.y"
    {   
        int indt = (yyvsp[(-3) - (0)].intVl);
        //如果是当前句的indent == 上1句的indent + 1，则检查上1句是否有语句体，如上1句允许语句体，语句入栈

        //printf("indt: %d lstIndt: %d\n",indt, lstIndt);
        if (indt == lstIndt + 1 )
        {
            if (stmtStk.back()->alwSubStmt)
            {
                //语句入栈
                StmtStkItmStrc * sktItm = new StmtStkItmStrc;

                sktItm->indt = indt;
                sktItm->stmt = (yyvsp[(-2) - (0)].stmt);
                sktItm->alwSubStmt = chkStmtAlwSubStmt((yyvsp[(-2) - (0)].stmt));

                stmtStk.push_back(sktItm);

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
            StmtStkItmStrc * sktItm = new StmtStkItmStrc;

            sktItm->indt = indt;
            sktItm->stmt = (yyvsp[(-2) - (0)].stmt);
            sktItm->alwSubStmt = chkStmtAlwSubStmt((yyvsp[(-2) - (0)].stmt));

            stmtStk.push_back(sktItm);

        }
        else if (indt < lstIndt)
        {
            int nowIndt = indt;

            int idx;

            //折叠输入的句子以上的缩进大于该输入的句子，结果为栈中缩进最大的句子为输入的句子及其以上同等缩进的句子
            fldStmt(nowIndt);

            // while (stmtStk.back()->indt > nowIndt)
            // {
            //     // 找到当前语句未入栈时，上1个子语句的主语句在语句栈中的序号
            //     idx = stmtStk.size()-1;
            //     while (idx>0 && stmtStk.back()->indt == stmtStk.at(idx-1)->indt)
            //     {
            //         idx--;
            //     }

            //     int i = idx;

            //     StmtStrc* blk = bldStmtBlk();

            //     // 将子语句添加到语句块中
            //     while (i < stmtStk.size())
            //     {

            //         //blk->stmt.stmtBlk->stmtArr.back()->stmt.ifStmt->els = stmtStk.at(i)->stmt;

            //         stmtBlkAdd(blk, stmtStk.at(i)->stmt);
            //         i++;
            //     }

            //     //子语句出栈
            //     int nbrPop = stmtStk.size() - idx;

            //     for (i=0;i<nbrPop;i++)
            //     {
            //         stmtStk.pop_back();
            //     }

            //     //将语句体附加到上1级语句中

            //     switch(stmtStk.back()->stmt->typ)
            //     {
            //         case IF_STATEMENT:
            //         {
            //             //printf("附加if语句 #0\n");
            //             stmtStk.back()->stmt->stmt.ifStmt->stmt = blk;
            //             stmtStk.back()->stmt->stmt.ifStmt->els=NULL;
            //             break;
            //         }
            //         case WHILE_STATEMENT:
            //         {
            //             stmtStk.back()->stmt->stmt.whlStmt->stmt = blk;
            //             break;
            //         }
            //         case FOR_STATEMENT:
            //         {
            //             stmtStk.back()->stmt->stmt.forStmt->stmt = blk;
            //             break;
            //         }
            //         case FUNCTION_DEFINE_STATEMENT:
            //         {
            //             stmtStk.back()->stmt->stmt.fcnStmt->fcn->stmt = blk;
            //             break;
            //         }
            //         case ELSE_STATEMENT:
            //         {
            //             stmtStk.back()->stmt->stmt.elsStmt->stmt = blk;

            //             //如果闭合的语句是else语句，则将其添加到其上的if语句中
            //             StmtStrc* els = stmtStk.back()->stmt->stmt.elsStmt->stmt;
            //             stmtStk.pop_back();

            //             stmtStk.back()->stmt->stmt.ifStmt->els = els;

            //             break;
            //         }
            //     }

            // }

            //如果当前输入的语句是else语句，检查同级缩进的上1个语句是不是if语句

            if (((yyvsp[(-2) - (0)].stmt))->typ == ELSE_STATEMENT)
            {
                if (stmtStk.back()->stmt->typ == IF_STATEMENT)
                {
                    
                }
                else
                {
                    yyclearin;
                    yyerrok;
                }

            }

            //输入的句子入栈

            StmtStkItmStrc* itm =new StmtStkItmStrc;
            itm->indt = nowIndt;
            itm->stmt = (yyvsp[(-2) - (0)].stmt);
            itm->alwSubStmt = chkStmtAlwSubStmt((yyvsp[(-2) - (0)].stmt));

            stmtStk.push_back(itm);
        }

        lstIndt = indt;
    }
#line 2023 "y.tab.c"
    break;

  case 11: /* close_execute_statement: %empty  */
#line 322 "bello.y"
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

            //如果上1条语句为子语句，则闭合上1条顶级语句
            if (stmtStk.back()->indt > 0)
            {
                //printf("cls top lvl stmt\n");

                int nowIndt = 0;

                int idx;

                fldStmt(0);
                // while (stmtStk.back()->indt > nowIndt)
                // {
                    

                //     idx = stmtStk.size()-1;

                //     while (idx>0 && stmtStk.back()->indt == stmtStk.at(idx-1)->indt)
                //     {
                //         idx--;
                //     }

                //     int i = idx;

                //     StmtStrc* blk = bldStmtBlk();

                //     while (i < stmtStk.size())
                //     {
                //         stmtBlkAdd(blk, stmtStk.at(i)->stmt);

                //         i++;
                //     }

                //     //子语句出栈
                //     int nbrPop = stmtStk.size() - idx;

                //     for (i=0;i<nbrPop;i++)
                //     {
                //         stmtStk.pop_back();
                //     }

                //     //将语句体附加到上1级语句中

                //     switch(stmtStk.back()->stmt->typ)
                //     {
                //         case IF_STATEMENT:
                //         {
                //             //printf("附加if语句 #2\n");
                //             stmtStk.back()->stmt->stmt.ifStmt->stmt = blk;
                //             stmtStk.back()->stmt->stmt.ifStmt->els = NULL;
                //             break;
                //         }
                //         case WHILE_STATEMENT:
                //         {
                //             stmtStk.back()->stmt->stmt.whlStmt->stmt = blk;
                //             break;
                //         }
                //         case FOR_STATEMENT:
                //         {
                //             stmtStk.back()->stmt->stmt.forStmt->stmt = blk;
                //             break;
                //         }
                //         case FUNCTION_DEFINE_STATEMENT:
                //         {
                //             stmtStk.back()->stmt->stmt.fcnStmt->fcn->stmt = blk;
                //             break;
                //         }
                //         case ELSE_STATEMENT:
                //         {
                //             stmtStk.back()->stmt->stmt.elsStmt->stmt = blk;

                //             //将else语句添加到其上的if语句结构体中
                //             StmtStrc* els = stmtStk.back()->stmt->stmt.elsStmt->stmt;

                //             stmtStk.pop_back();
                //             stmtStk.back()->stmt->stmt.ifStmt->els =els;
                //         }
                //     }

                // }

                // 如果是双主句语句的情况


                //执行上一条顶级语句
                exctStmt(envr, stmtStk.back()->stmt);
                stmtStk.pop_back();

                //printf("cls stk lyr: %d\n", stmtStk.size());

                lstIndt=0;
            }

        }

    }
#line 2147 "y.tab.c"
    break;

  case 12: /* close_execute_last_statement: %empty  */
#line 444 "bello.y"
    {
        //如果是标准输入读取数据，则退出此动作
        if (prsStt==1)
        {
            break;
        }

        //如果存在上一条语句
        if (stmtStk.size()>0)
        {
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
                // while (stmtStk.back()->indt > nowIndt)
                // {
                    

                //     idx = stmtStk.size()-1;

                //     while (idx>0 && stmtStk.back()->indt == stmtStk.at(idx-1)->indt)
                //     {
                //         idx--;
                //     }

                //     int i = idx;

                //     StmtStrc* blk = bldStmtBlk();

                //     while (i < stmtStk.size())
                //     {
                //         stmtBlkAdd(blk, stmtStk.at(i)->stmt);

                //         i++;
                //     }

                //     //子语句出栈
                //     int nbrPop = stmtStk.size() - idx;

                //     for (i=0;i<nbrPop;i++)
                //     {
                //         stmtStk.pop_back();
                //     }

                //     //将语句体附加到上1级语句中

                //     switch(stmtStk.back()->stmt->typ)
                //     {
                //         case IF_STATEMENT:
                //         {
                //             stmtStk.back()->stmt->stmt.ifStmt->stmt = blk;
                //             stmtStk.back()->stmt->stmt.ifStmt->stmt = NULL;
                //             break;
                //         }
                //         case WHILE_STATEMENT:
                //         {
                //             stmtStk.back()->stmt->stmt.whlStmt->stmt = blk;
                //             break;
                //         }
                //         case FOR_STATEMENT:
                //         {
                //             stmtStk.back()->stmt->stmt.forStmt->stmt = blk;
                //             break;
                //         }
                //         case FUNCTION_DEFINE_STATEMENT:
                //         {
                //             stmtStk.back()->stmt->stmt.fcnStmt->fcn->stmt = blk;
                //             break;
                //         }
                //         case ELSE_STATEMENT:
                //         {
                //             stmtStk.back()->stmt->stmt.elsStmt->stmt = blk;

                //             //将else语句添加到其上的if语句结构体中
                //             StmtStrc* els = stmtStk.back()->stmt->stmt.elsStmt->stmt;

                //             stmtStk.pop_back();
                //             stmtStk.back()->stmt->stmt.ifStmt->els =els;
                //         }
                //     }

                // }

                // 如果是双主句语句的情况


                //执行上一条顶级语句
                exctStmt(envr, stmtStk.back()->stmt);
                stmtStk.pop_back();

                //printf("cls stk lyr: %d\n", stmtStk.size());

                lstIndt=0;
            }

        }
    }
#line 2271 "y.tab.c"
    break;

  case 13: /* execute_statement: %empty  */
#line 566 "bello.y"
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
#line 2293 "y.tab.c"
    break;

  case 14: /* single_statement: expression_statement  */
#line 607 "bello.y"
                           { (yyval.stmt)=(yyvsp[0].stmt); }
#line 2299 "y.tab.c"
    break;

  case 15: /* single_statement: if_statement  */
#line 608 "bello.y"
                   { (yyval.stmt)=(yyvsp[0].stmt); }
#line 2305 "y.tab.c"
    break;

  case 16: /* single_statement: else_statement  */
#line 609 "bello.y"
                     {(yyval.stmt)=(yyvsp[0].stmt); }
#line 2311 "y.tab.c"
    break;

  case 17: /* single_statement: for_statement  */
#line 610 "bello.y"
                    { (yyval.stmt)=(yyvsp[0].stmt); }
#line 2317 "y.tab.c"
    break;

  case 18: /* single_statement: while_statement  */
#line 611 "bello.y"
                      { (yyval.stmt)=(yyvsp[0].stmt); }
#line 2323 "y.tab.c"
    break;

  case 19: /* single_statement: break_statement  */
#line 613 "bello.y"
                      { (yyval.stmt)=(yyvsp[0].stmt); }
#line 2329 "y.tab.c"
    break;

  case 20: /* single_statement: continue_statement  */
#line 614 "bello.y"
                          { (yyval.stmt)=(yyvsp[0].stmt); }
#line 2335 "y.tab.c"
    break;

  case 21: /* single_statement: return_statement  */
#line 615 "bello.y"
                        { (yyval.stmt)=(yyvsp[0].stmt); }
#line 2341 "y.tab.c"
    break;

  case 22: /* single_statement: function_define_statement  */
#line 616 "bello.y"
                                { (yyval.stmt)=(yyvsp[0].stmt); }
#line 2347 "y.tab.c"
    break;

  case 23: /* single_statement: nop_statement  */
#line 618 "bello.y"
                    { (yyval.stmt)=(yyvsp[0].stmt); }
#line 2353 "y.tab.c"
    break;

  case 24: /* single_statement: var_statement  */
#line 619 "bello.y"
                     { (yyval.stmt) = (yyvsp[0].stmt);}
#line 2359 "y.tab.c"
    break;

  case 25: /* single_statement: global_statement  */
#line 620 "bello.y"
                        { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2365 "y.tab.c"
    break;

  case 26: /* single_statement: error  */
#line 622 "bello.y"
    { 
        (yyval.stmt)=bldNllStmt(); 
        yyclearin; 
        yyerrok; 
    }
#line 2375 "y.tab.c"
    break;

  case 33: /* null_statement: %empty  */
#line 640 "bello.y"
      { (yyval.stmt)=bldNllStmt(); }
#line 2381 "y.tab.c"
    break;

  case 34: /* nop_statement: NOP  */
#line 643 "bello.y"
          { (yyval.stmt)=bldNllStmt(); }
#line 2387 "y.tab.c"
    break;

  case 35: /* statement_block: LEFT_BRACE block_list RIGHT_BRACE  */
#line 646 "bello.y"
                                        { (yyval.stmt)=(yyvsp[-1].stmt); }
#line 2393 "y.tab.c"
    break;

  case 36: /* statement_block: LEFT_BRACE RIGHT_BRACE  */
#line 647 "bello.y"
                             { (yyval.stmt)=bldNllStmt(); }
#line 2399 "y.tab.c"
    break;

  case 37: /* block_list: single_statement  */
#line 651 "bello.y"
    { 
        (yyval.stmt)=bldStmtBlk(); 
        stmtBlkAdd((yyval.stmt), (yyvsp[0].stmt)); 
    }
#line 2408 "y.tab.c"
    break;

  case 38: /* block_list: block_list single_statement  */
#line 656 "bello.y"
    {
        (yyval.stmt) = stmtBlkAdd((yyvsp[-1].stmt) ,(yyvsp[0].stmt));
    }
#line 2416 "y.tab.c"
    break;

  case 39: /* expression_statement: expression  */
#line 663 "bello.y"
    { 
        (yyval.stmt)=bldExpStmt((yyvsp[0].exp)); 
    }
#line 2424 "y.tab.c"
    break;

  case 42: /* expression: unary_expression  */
#line 670 "bello.y"
                       { (yyval.exp)=(yyvsp[0].exp); }
#line 2430 "y.tab.c"
    break;

  case 43: /* expression: binary_expression  */
#line 671 "bello.y"
                        { (yyval.exp)=(yyvsp[0].exp); }
#line 2436 "y.tab.c"
    break;

  case 44: /* expression: array_expression  */
#line 672 "bello.y"
                       { (yyval.exp)=(yyvsp[0].exp); }
#line 2442 "y.tab.c"
    break;

  case 45: /* expression: new_array_expression  */
#line 673 "bello.y"
                           { (yyval.exp) = (yyvsp[0].exp); }
#line 2448 "y.tab.c"
    break;

  case 48: /* assign_expression: lvalue_expression ASSIGN expression  */
#line 680 "bello.y"
                                          { (yyval.exp)=bldAsgnExp((yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2454 "y.tab.c"
    break;

  case 49: /* assign_expression: lvalue_expression ADD_ASSIGN expression  */
#line 681 "bello.y"
                                              { (yyval.exp)=bldAsgnExp((yyvsp[-2].exp), bldBnrExp(ADD, (yyvsp[-2].exp), (yyvsp[0].exp))); }
#line 2460 "y.tab.c"
    break;

  case 50: /* assign_expression: lvalue_expression SUB_ASSIGN expression  */
#line 682 "bello.y"
                                              { (yyval.exp)=bldAsgnExp((yyvsp[-2].exp), bldBnrExp(SUB, (yyvsp[-2].exp), (yyvsp[0].exp))); }
#line 2466 "y.tab.c"
    break;

  case 51: /* assign_expression: lvalue_expression MUL_ASSIGN expression  */
#line 683 "bello.y"
                                              { (yyval.exp)=bldAsgnExp((yyvsp[-2].exp), bldBnrExp(MUL, (yyvsp[-2].exp), (yyvsp[0].exp))); }
#line 2472 "y.tab.c"
    break;

  case 52: /* assign_expression: lvalue_expression DIV_ASSIGN expression  */
#line 684 "bello.y"
                                              { (yyval.exp)=bldAsgnExp((yyvsp[-2].exp), bldBnrExp(DIV, (yyvsp[-2].exp), (yyvsp[0].exp))); }
#line 2478 "y.tab.c"
    break;

  case 53: /* assign_expression: lvalue_expression MOD_ASSIGN expression  */
#line 685 "bello.y"
                                              { (yyval.exp)=bldAsgnExp((yyvsp[-2].exp), bldBnrExp(MOD, (yyvsp[-2].exp), (yyvsp[0].exp))); }
#line 2484 "y.tab.c"
    break;

  case 54: /* self_operation_expression: INCREMENT lvalue_expression  */
#line 689 "bello.y"
                                  { (yyval.exp)=bldUnrExp(PREFIX_INCREMENT, (yyvsp[0].exp)); }
#line 2490 "y.tab.c"
    break;

  case 55: /* self_operation_expression: DECREMENT lvalue_expression  */
#line 690 "bello.y"
                                  { (yyval.exp)=bldUnrExp(PREFIX_DECREMENT, (yyvsp[0].exp)); }
#line 2496 "y.tab.c"
    break;

  case 56: /* self_operation_expression: lvalue_expression INCREMENT  */
#line 691 "bello.y"
                                  { (yyval.exp)=bldUnrExp(SUFFIX_INCREMENT, (yyvsp[-1].exp)); }
#line 2502 "y.tab.c"
    break;

  case 57: /* self_operation_expression: lvalue_expression DECREMENT  */
#line 692 "bello.y"
                                  { (yyval.exp)=bldUnrExp(SUFFIX_DECREMENT, (yyvsp[-1].exp)); }
#line 2508 "y.tab.c"
    break;

  case 58: /* unary_expression: SUB expression  */
#line 695 "bello.y"
                                      { (yyval.exp) = bldUnrExp(SUB, (yyvsp[0].exp)); }
#line 2514 "y.tab.c"
    break;

  case 59: /* unary_expression: ADD expression  */
#line 696 "bello.y"
                                     { (yyval.exp) = bldUnrExp(ADD, (yyvsp[0].exp)); }
#line 2520 "y.tab.c"
    break;

  case 60: /* unary_expression: LEFT_PAREN expression RIGHT_PAREN  */
#line 697 "bello.y"
                                        { (yyval.exp)=(yyvsp[-1].exp); }
#line 2526 "y.tab.c"
    break;

  case 61: /* unary_expression: NOT expression  */
#line 698 "bello.y"
                     { (yyval.exp)=bldUnrExp(NOT, (yyvsp[0].exp)); }
#line 2532 "y.tab.c"
    break;

  case 62: /* unary_expression: BIT_NOT expression  */
#line 699 "bello.y"
                         { (yyval.exp)=bldUnrExp(BIT_NOT, (yyvsp[0].exp)); }
#line 2538 "y.tab.c"
    break;

  case 63: /* binary_expression: expression ADD expression  */
#line 702 "bello.y"
                                { (yyval.exp)=bldBnrExp(ADD, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2544 "y.tab.c"
    break;

  case 64: /* binary_expression: expression SUB expression  */
#line 703 "bello.y"
                                { (yyval.exp)=bldBnrExp(SUB, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2550 "y.tab.c"
    break;

  case 65: /* binary_expression: expression MUL expression  */
#line 704 "bello.y"
                                { (yyval.exp)=bldBnrExp(MUL, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2556 "y.tab.c"
    break;

  case 66: /* binary_expression: expression DIV expression  */
#line 705 "bello.y"
                                { (yyval.exp)=bldBnrExp(DIV, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2562 "y.tab.c"
    break;

  case 67: /* binary_expression: expression MOD expression  */
#line 706 "bello.y"
                                { (yyval.exp)=bldBnrExp(MOD, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2568 "y.tab.c"
    break;

  case 68: /* binary_expression: expression AND expression  */
#line 707 "bello.y"
                                { (yyval.exp)=bldBnrExp(AND, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2574 "y.tab.c"
    break;

  case 69: /* binary_expression: expression OR expression  */
#line 708 "bello.y"
                               { (yyval.exp)=bldBnrExp(OR, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2580 "y.tab.c"
    break;

  case 70: /* binary_expression: expression EQ expression  */
#line 709 "bello.y"
                               { (yyval.exp)=bldBnrExp(EQ, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2586 "y.tab.c"
    break;

  case 71: /* binary_expression: expression NE expression  */
#line 710 "bello.y"
                               { (yyval.exp)=bldBnrExp(NE, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2592 "y.tab.c"
    break;

  case 72: /* binary_expression: expression GT expression  */
#line 711 "bello.y"
                               { (yyval.exp)=bldBnrExp(GT, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2598 "y.tab.c"
    break;

  case 73: /* binary_expression: expression GE expression  */
#line 712 "bello.y"
                               { (yyval.exp)=bldBnrExp(GE, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2604 "y.tab.c"
    break;

  case 74: /* binary_expression: expression LT expression  */
#line 713 "bello.y"
                               { (yyval.exp)=bldBnrExp(LT, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2610 "y.tab.c"
    break;

  case 75: /* binary_expression: expression LE expression  */
#line 714 "bello.y"
                               { (yyval.exp)=bldBnrExp(LE, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2616 "y.tab.c"
    break;

  case 76: /* binary_expression: expression BIT_AND expression  */
#line 715 "bello.y"
                                    { (yyval.exp)=bldBnrExp(BIT_AND, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2622 "y.tab.c"
    break;

  case 77: /* binary_expression: expression BIT_OR expression  */
#line 716 "bello.y"
                                   { (yyval.exp)=bldBnrExp(BIT_OR, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2628 "y.tab.c"
    break;

  case 78: /* binary_expression: expression BIT_XOR expression  */
#line 717 "bello.y"
                                    { (yyval.exp)=bldBnrExp(BIT_XOR, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2634 "y.tab.c"
    break;

  case 79: /* value_expression: INT_VALUE  */
#line 721 "bello.y"
                { (yyval.exp)=bldCnstIntExp((yyvsp[0].intVl)); /*printf("Get data: %d\n",$1);*/ }
#line 2640 "y.tab.c"
    break;

  case 80: /* value_expression: FLOAT_VALUE  */
#line 722 "bello.y"
                  { (yyval.exp)=bldCnstFltExp((yyvsp[0].fltVl)); }
#line 2646 "y.tab.c"
    break;

  case 81: /* value_expression: BOOLEAN_VALUE  */
#line 723 "bello.y"
                    { (yyval.exp)=bldCnstBlnExp((yyvsp[0].blnVl)); }
#line 2652 "y.tab.c"
    break;

  case 82: /* value_expression: STRING_VALUE  */
#line 724 "bello.y"
                   { (yyval.exp)=bldCnstStrExp((yyvsp[0].strVl)); }
#line 2658 "y.tab.c"
    break;

  case 83: /* value_expression: NULL_VALUE  */
#line 725 "bello.y"
                 { (yyval.exp)=bldCnstNllExp(); }
#line 2664 "y.tab.c"
    break;

  case 86: /* lvalue_expression: IDENTIFER  */
#line 730 "bello.y"
                { (yyval.exp)= bldLvlExp(bldVrbExp((yyvsp[0].idtf))); }
#line 2670 "y.tab.c"
    break;

  case 87: /* lvalue_expression: lvalue_expression evaluate_list  */
#line 732 "bello.y"
    { 
        (yyval.exp)=(yyvsp[-1].exp); 
        bldLvlExpAdd((yyvsp[-1].exp), (yyvsp[0].evlLst)); 
    }
#line 2679 "y.tab.c"
    break;

  case 88: /* array_expression: LEFT_QUAD element_list RIGHT_QUAD  */
#line 740 "bello.y"
    {
        (yyval.exp)= bldArrExp((yyvsp[-1].elmtLst));
    }
#line 2687 "y.tab.c"
    break;

  case 89: /* array_expression: LEFT_QUAD RIGHT_QUAD  */
#line 744 "bello.y"
    {
        (yyval.exp)= bldArrExp(bldElmtLst());
    }
#line 2695 "y.tab.c"
    break;

  case 90: /* new_array_expression: NEW_ARRAY LEFT_PAREN expression RIGHT_PAREN  */
#line 750 "bello.y"
    {
        (yyval.exp) = bldNewArrExp((yyvsp[-1].exp));
    }
#line 2703 "y.tab.c"
    break;

  case 91: /* element_list: expression  */
#line 756 "bello.y"
    { 
        (yyval.elmtLst)= bldElmtLst(); 
        elmtLstAdd((yyval.elmtLst), (yyvsp[0].exp)); 
    }
#line 2712 "y.tab.c"
    break;

  case 92: /* element_list: element_list COMMA expression  */
#line 761 "bello.y"
    {  
        (yyval.elmtLst)=(yyvsp[-2].elmtLst);  
        elmtLstAdd((yyval.elmtLst), (yyvsp[0].exp)); 
    }
#line 2721 "y.tab.c"
    break;

  case 93: /* var_statement: VAR assign_list  */
#line 768 "bello.y"
                      { (yyval.stmt)=bldVarStmt((yyvsp[0].asgnLst)); }
#line 2727 "y.tab.c"
    break;

  case 94: /* global_statement: GLOBAL assign_list  */
#line 771 "bello.y"
                         { (yyval.stmt)=bldGlbStmt((yyvsp[0].asgnLst)); }
#line 2733 "y.tab.c"
    break;

  case 95: /* assign_list: IDENTIFER  */
#line 775 "bello.y"
    {
        (yyval.asgnLst)= bldAsgnLst();
        asgnLstAdd((yyval.asgnLst), bldVrbExp((yyvsp[0].idtf)), bldNllExp());
    }
#line 2742 "y.tab.c"
    break;

  case 96: /* assign_list: IDENTIFER ASSIGN expression  */
#line 780 "bello.y"
    {
        (yyval.asgnLst)= bldAsgnLst();
        asgnLstAdd((yyval.asgnLst), bldVrbExp((yyvsp[-2].idtf)), (yyvsp[0].exp));
    }
#line 2751 "y.tab.c"
    break;

  case 97: /* assign_list: assign_list COMMA IDENTIFER  */
#line 785 "bello.y"
    {
        (yyval.asgnLst)=(yyvsp[-2].asgnLst);
        asgnLstAdd((yyval.asgnLst), bldVrbExp((yyvsp[0].idtf)), bldNllExp());
    }
#line 2760 "y.tab.c"
    break;

  case 98: /* assign_list: assign_list COMMA IDENTIFER ASSIGN expression  */
#line 790 "bello.y"
    {
        (yyval.asgnLst)=(yyvsp[-4].asgnLst);
        asgnLstAdd((yyval.asgnLst), bldVrbExp((yyvsp[-2].idtf)), (yyvsp[0].exp));
    }
#line 2769 "y.tab.c"
    break;

  case 99: /* function_expression: IDENTIFER LEFT_PAREN argument_list RIGHT_PAREN  */
#line 801 "bello.y"
    {
        (yyval.exp)=bldFcnExp((yyvsp[-3].idtf), (yyvsp[-1].argLst));
    }
#line 2777 "y.tab.c"
    break;

  case 100: /* function_expression: IDENTIFER LEFT_PAREN RIGHT_PAREN  */
#line 805 "bello.y"
    {
        (yyval.exp)=bldFcnExp((yyvsp[-2].idtf), bldArgLst());
    }
#line 2785 "y.tab.c"
    break;

  case 101: /* argument_list: expression  */
#line 811 "bello.y"
    {
        (yyval.argLst)=bldArgLst();
        argLstAdd((yyval.argLst), (yyvsp[0].exp));
    }
#line 2794 "y.tab.c"
    break;

  case 102: /* argument_list: argument_list COMMA expression  */
#line 816 "bello.y"
    {
        (yyval.argLst)=(yyvsp[-2].argLst);
        argLstAdd((yyval.argLst), (yyvsp[0].exp));
    }
#line 2803 "y.tab.c"
    break;

  case 103: /* evaluate_list: LEFT_QUAD expression RIGHT_QUAD  */
#line 824 "bello.y"
    {
        (yyval.evlLst) = bldAcsLst();
        acsLstIdxAdd((yyval.evlLst), (yyvsp[-1].exp));
    }
#line 2812 "y.tab.c"
    break;

  case 104: /* evaluate_list: LEFT_QUAD expression COLON expression RIGHT_QUAD  */
#line 829 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-3].exp), (yyvsp[-1].exp), bldCnstIntExp(1));
    }
#line 2821 "y.tab.c"
    break;

  case 105: /* evaluate_list: LEFT_QUAD expression COLON expression COLON RIGHT_QUAD  */
#line 834 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-4].exp), (yyvsp[-2].exp), bldCnstIntExp(1));
    }
#line 2830 "y.tab.c"
    break;

  case 106: /* evaluate_list: LEFT_QUAD expression COLON expression COLON expression RIGHT_QUAD  */
#line 839 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-5].exp), (yyvsp[-3].exp), (yyvsp[-1].exp));
    }
#line 2839 "y.tab.c"
    break;

  case 107: /* evaluate_list: LEFT_QUAD expression COLON RIGHT_QUAD  */
#line 844 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-2].exp), bldCnstIntExp(-1), bldCnstIntExp(1));
    }
#line 2848 "y.tab.c"
    break;

  case 108: /* evaluate_list: LEFT_QUAD expression COLON COLON RIGHT_QUAD  */
#line 849 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-3].exp), bldCnstIntExp(-1), bldCnstIntExp(1));
    }
#line 2857 "y.tab.c"
    break;

  case 109: /* evaluate_list: LEFT_QUAD expression COLON COLON expression RIGHT_QUAD  */
#line 854 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-4].exp), bldCnstIntExp(-1), (yyvsp[-1].exp));
    }
#line 2866 "y.tab.c"
    break;

  case 110: /* evaluate_list: LEFT_QUAD COLON expression RIGHT_QUAD  */
#line 859 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), (yyvsp[-1].exp), bldCnstIntExp(1));
    }
#line 2875 "y.tab.c"
    break;

  case 111: /* evaluate_list: LEFT_QUAD COLON expression COLON RIGHT_QUAD  */
#line 864 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), (yyvsp[-2].exp), bldCnstIntExp(1));
    }
#line 2884 "y.tab.c"
    break;

  case 112: /* evaluate_list: LEFT_QUAD COLON expression COLON expression RIGHT_QUAD  */
#line 869 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), (yyvsp[-3].exp), (yyvsp[-1].exp));
    }
#line 2893 "y.tab.c"
    break;

  case 113: /* evaluate_list: LEFT_QUAD COLON COLON RIGHT_QUAD  */
#line 874 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), bldCnstIntExp(-1), bldCnstIntExp(1));
    }
#line 2902 "y.tab.c"
    break;

  case 114: /* evaluate_list: evaluate_list LEFT_QUAD expression RIGHT_QUAD  */
#line 879 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-3].evlLst);
        acsLstIdxAdd((yyval.evlLst),(yyvsp[-1].exp));
    }
#line 2911 "y.tab.c"
    break;

  case 115: /* evaluate_list: evaluate_list LEFT_QUAD expression COLON expression RIGHT_QUAD  */
#line 884 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-5].evlLst);
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-3].exp), (yyvsp[-1].exp), bldCnstIntExp(1));
    }
#line 2920 "y.tab.c"
    break;

  case 116: /* evaluate_list: evaluate_list LEFT_QUAD expression COLON expression COLON RIGHT_QUAD  */
#line 889 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-6].evlLst);
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-4].exp), (yyvsp[-2].exp), bldCnstIntExp(1));
    }
#line 2929 "y.tab.c"
    break;

  case 117: /* evaluate_list: evaluate_list LEFT_QUAD expression COLON expression COLON expression RIGHT_QUAD  */
#line 894 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-7].evlLst);
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-5].exp), (yyvsp[-3].exp), (yyvsp[-1].exp));
    }
#line 2938 "y.tab.c"
    break;

  case 118: /* evaluate_list: evaluate_list LEFT_QUAD expression COLON RIGHT_QUAD  */
#line 899 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-4].evlLst);
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-2].exp), bldCnstIntExp(-1), bldCnstIntExp(1));
    }
#line 2947 "y.tab.c"
    break;

  case 119: /* evaluate_list: evaluate_list LEFT_QUAD expression COLON COLON RIGHT_QUAD  */
#line 904 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-5].evlLst);
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-3].exp), bldCnstIntExp(-1), bldCnstIntExp(1));
    }
#line 2956 "y.tab.c"
    break;

  case 120: /* evaluate_list: evaluate_list LEFT_QUAD expression COLON COLON expression RIGHT_QUAD  */
#line 909 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-6].evlLst);
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-4].exp), bldCnstIntExp(-1), (yyvsp[-1].exp));
    }
#line 2965 "y.tab.c"
    break;

  case 121: /* evaluate_list: evaluate_list LEFT_QUAD COLON expression RIGHT_QUAD  */
#line 914 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-4].evlLst);
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), (yyvsp[-1].exp), bldCnstIntExp(1));
    }
#line 2974 "y.tab.c"
    break;

  case 122: /* evaluate_list: evaluate_list LEFT_QUAD COLON expression COLON RIGHT_QUAD  */
#line 919 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-5].evlLst);
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), (yyvsp[-2].exp), bldCnstIntExp(1));
    }
#line 2983 "y.tab.c"
    break;

  case 123: /* evaluate_list: evaluate_list LEFT_QUAD COLON expression COLON expression RIGHT_QUAD  */
#line 924 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-6].evlLst);
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), (yyvsp[-3].exp), (yyvsp[-1].exp));
    }
#line 2992 "y.tab.c"
    break;

  case 124: /* evaluate_list: evaluate_list LEFT_QUAD COLON COLON RIGHT_QUAD  */
#line 929 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-4].evlLst);
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), bldCnstIntExp(-1), bldCnstIntExp(1));
    }
#line 3001 "y.tab.c"
    break;

  case 125: /* if_statement: IF LEFT_PAREN expression RIGHT_PAREN  */
#line 947 "bello.y"
    {
        (yyval.stmt)=bldIfStmt((yyvsp[-1].exp));
        //printf("bld if stmt\n");
    }
#line 3010 "y.tab.c"
    break;

  case 126: /* else_statement: ELSE  */
#line 958 "bello.y"
    {
        (yyval.stmt) = bldElsStmt();
    }
#line 3018 "y.tab.c"
    break;

  case 127: /* for_statement: FOR LEFT_PAREN single_statement_no_semicolon SEMICOLON expression_statement SEMICOLON single_statement_no_semicolon RIGHT_PAREN  */
#line 971 "bello.y"
    {
        (yyval.stmt)= bldForStmt((yyvsp[-5].stmt), (yyvsp[-3].stmt), (yyvsp[-1].stmt));  
    }
#line 3026 "y.tab.c"
    break;

  case 128: /* while_statement: WHILE LEFT_PAREN expression_statement RIGHT_PAREN  */
#line 983 "bello.y"
    {
        (yyval.stmt)= bldWhlStmt((yyvsp[-1].stmt));
    }
#line 3034 "y.tab.c"
    break;

  case 129: /* do_while_statement: DO structure_statement WHILE LEFT_PAREN expression_statement RIGHT_PAREN SEMICOLON  */
#line 989 "bello.y"
    {
        (yyval.stmt)= bldDoWhlStmt((yyvsp[-2].stmt), (yyvsp[-5].stmt));
    }
#line 3042 "y.tab.c"
    break;

  case 130: /* break_statement: BREAK  */
#line 994 "bello.y"
            { (yyval.stmt)= bldBrkStmt(bldCnstIntExp(1)); }
#line 3048 "y.tab.c"
    break;

  case 131: /* break_statement: BREAK LEFT_PAREN expression RIGHT_PAREN  */
#line 995 "bello.y"
                                              { (yyval.stmt)= bldBrkStmt((yyvsp[-1].exp)); }
#line 3054 "y.tab.c"
    break;

  case 132: /* continue_statement: CONTINUE  */
#line 998 "bello.y"
               { (yyval.stmt)= bldCntnStmt(bldCnstIntExp(1)); }
#line 3060 "y.tab.c"
    break;

  case 133: /* continue_statement: CONTINUE LEFT_PAREN expression RIGHT_PAREN  */
#line 999 "bello.y"
                                                 { (yyval.stmt)= bldCntnStmt((yyvsp[-1].exp)); }
#line 3066 "y.tab.c"
    break;

  case 136: /* function_define_statement: FUNC IDENTIFER LEFT_PAREN parameter_list RIGHT_PAREN  */
#line 1041 "bello.y"
    {
        struct FcnStrc* fcn;

        fcn=bldFcn((yyvsp[-3].idtf), (yyvsp[-1].prmLst));

        (yyval.stmt) = bldFcnStmt(fcn);
    }
#line 3078 "y.tab.c"
    break;

  case 137: /* function_define_statement: FUNC IDENTIFER LEFT_PAREN RIGHT_PAREN  */
#line 1049 "bello.y"
    {
        struct FcnStrc *fcn;

        fcn=bldFcn((yyvsp[-2].idtf), bldPrmLst());

        (yyval.stmt) = bldFcnStmt(fcn);
    }
#line 3090 "y.tab.c"
    break;

  case 138: /* parameter_list: IDENTIFER  */
#line 1061 "bello.y"
    {
        (yyval.prmLst) = bldPrmLst();
        prmLstAdd((yyval.prmLst), bldVrbExp((yyvsp[0].idtf)));
    }
#line 3099 "y.tab.c"
    break;

  case 139: /* parameter_list: parameter_list COMMA IDENTIFER  */
#line 1066 "bello.y"
    { 
        (yyval.prmLst)=(yyvsp[-2].prmLst);  
        prmLstAdd((yyval.prmLst), bldVrbExp((yyvsp[0].idtf)));
    }
#line 3108 "y.tab.c"
    break;

  case 140: /* return_statement: RETURN  */
#line 1072 "bello.y"
             { (yyval.stmt)=bldRtnStmt(NULL); }
#line 3114 "y.tab.c"
    break;

  case 141: /* return_statement: RETURN expression  */
#line 1073 "bello.y"
                        { (yyval.stmt)=bldRtnStmt((yyvsp[0].exp)); }
#line 3120 "y.tab.c"
    break;


#line 3124 "y.tab.c"

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

#line 1076 "bello.y"



void fldStmt(int indt=0)
{
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
                stmtStk.back()->stmt->stmt.ifStmt->stmt = blk;
                stmtStk.back()->stmt->stmt.ifStmt->els = NULL;
                break;
            }
            case WHILE_STATEMENT:
            {
                stmtStk.back()->stmt->stmt.whlStmt->stmt = blk;
                break;
            }
            case FOR_STATEMENT:
            {
                stmtStk.back()->stmt->stmt.forStmt->stmt = blk;
                break;
            }
            case FUNCTION_DEFINE_STATEMENT:
            {
                stmtStk.back()->stmt->stmt.fcnStmt->fcn->stmt = blk;
                break;
            }
            case ELSE_STATEMENT:
            {
                stmtStk.back()->stmt->stmt.elsStmt->stmt = blk;

                //将else语句添加到其上的if语句结构体中
                StmtStrc* els = stmtStk.back()->stmt->stmt.elsStmt->stmt;

                stmtStk.pop_back();
                stmtStk.back()->stmt->stmt.ifStmt->els =els;
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


