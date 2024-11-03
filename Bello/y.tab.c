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


#line 127 "y.tab.c"

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
    LF = 258,                      /* LF  */
    NOP = 259,                     /* NOP  */
    INDENT = 260,                  /* INDENT  */
    INT_VALUE = 261,               /* INT_VALUE  */
    BOOLEAN_VALUE = 262,           /* BOOLEAN_VALUE  */
    FLOAT_VALUE = 263,             /* FLOAT_VALUE  */
    STRING_VALUE = 264,            /* STRING_VALUE  */
    NULL_VALUE = 265,              /* NULL_VALUE  */
    ARRAY_VALUE = 266,             /* ARRAY_VALUE  */
    IDENTIFER = 267,               /* IDENTIFER  */
    ASSIGN = 268,                  /* ASSIGN  */
    VAR = 269,                     /* VAR  */
    GLOBAL = 270,                  /* GLOBAL  */
    ADD_ASSIGN = 271,              /* ADD_ASSIGN  */
    SUB_ASSIGN = 272,              /* SUB_ASSIGN  */
    MUL_ASSIGN = 273,              /* MUL_ASSIGN  */
    DIV_ASSIGN = 274,              /* DIV_ASSIGN  */
    MOD_ASSIGN = 275,              /* MOD_ASSIGN  */
    PRINT = 276,                   /* PRINT  */
    PRINTLN = 277,                 /* PRINTLN  */
    LEFT_PAREN = 278,              /* LEFT_PAREN  */
    RIGHT_PAREN = 279,             /* RIGHT_PAREN  */
    LEFT_QUAD = 280,               /* LEFT_QUAD  */
    RIGHT_QUAD = 281,              /* RIGHT_QUAD  */
    LEFT_BRACE = 282,              /* LEFT_BRACE  */
    RIGHT_BRACE = 283,             /* RIGHT_BRACE  */
    SEMICOLON_OPTIONAL = 284,      /* SEMICOLON_OPTIONAL  */
    SEMICOLON = 285,               /* SEMICOLON  */
    COMMA = 286,                   /* COMMA  */
    COLON = 287,                   /* COLON  */
    ADD = 288,                     /* ADD  */
    SUB = 289,                     /* SUB  */
    MUL = 290,                     /* MUL  */
    DIV = 291,                     /* DIV  */
    MOD = 292,                     /* MOD  */
    EQ = 293,                      /* EQ  */
    NE = 294,                      /* NE  */
    GT = 295,                      /* GT  */
    GE = 296,                      /* GE  */
    LT = 297,                      /* LT  */
    LE = 298,                      /* LE  */
    AND = 299,                     /* AND  */
    OR = 300,                      /* OR  */
    NOT = 301,                     /* NOT  */
    BIT_AND = 302,                 /* BIT_AND  */
    BIT_OR = 303,                  /* BIT_OR  */
    BIT_XOR = 304,                 /* BIT_XOR  */
    BIT_NOT = 305,                 /* BIT_NOT  */
    INCREMENT = 306,               /* INCREMENT  */
    DECREMENT = 307,               /* DECREMENT  */
    IF = 308,                      /* IF  */
    ELSE = 309,                    /* ELSE  */
    FOR = 310,                     /* FOR  */
    WHILE = 311,                   /* WHILE  */
    DO = 312,                      /* DO  */
    CONTINUE = 313,                /* CONTINUE  */
    BREAK = 314,                   /* BREAK  */
    FUNC = 315,                    /* FUNC  */
    RETURN = 316,                  /* RETURN  */
    NEW_ARRAY = 317,               /* NEW_ARRAY  */
    MINUS_SIGN = 318,              /* MINUS_SIGN  */
    PLUS_SIGN = 319,               /* PLUS_SIGN  */
    READ_INT = 320,                /* READ_INT  */
    READ_FLOAT = 321,              /* READ_FLOAT  */
    READ = 322,                    /* READ  */
    READ_BOOL = 323,               /* READ_BOOL  */
    READ_LINE = 324                /* READ_LINE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define LF 258
#define NOP 259
#define INDENT 260
#define INT_VALUE 261
#define BOOLEAN_VALUE 262
#define FLOAT_VALUE 263
#define STRING_VALUE 264
#define NULL_VALUE 265
#define ARRAY_VALUE 266
#define IDENTIFER 267
#define ASSIGN 268
#define VAR 269
#define GLOBAL 270
#define ADD_ASSIGN 271
#define SUB_ASSIGN 272
#define MUL_ASSIGN 273
#define DIV_ASSIGN 274
#define MOD_ASSIGN 275
#define PRINT 276
#define PRINTLN 277
#define LEFT_PAREN 278
#define RIGHT_PAREN 279
#define LEFT_QUAD 280
#define RIGHT_QUAD 281
#define LEFT_BRACE 282
#define RIGHT_BRACE 283
#define SEMICOLON_OPTIONAL 284
#define SEMICOLON 285
#define COMMA 286
#define COLON 287
#define ADD 288
#define SUB 289
#define MUL 290
#define DIV 291
#define MOD 292
#define EQ 293
#define NE 294
#define GT 295
#define GE 296
#define LT 297
#define LE 298
#define AND 299
#define OR 300
#define NOT 301
#define BIT_AND 302
#define BIT_OR 303
#define BIT_XOR 304
#define BIT_NOT 305
#define INCREMENT 306
#define DECREMENT 307
#define IF 308
#define ELSE 309
#define FOR 310
#define WHILE 311
#define DO 312
#define CONTINUE 313
#define BREAK 314
#define FUNC 315
#define RETURN 316
#define NEW_ARRAY 317
#define MINUS_SIGN 318
#define PLUS_SIGN 319
#define READ_INT 320
#define READ_FLOAT 321
#define READ 322
#define READ_BOOL 323
#define READ_LINE 324

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

#line 340 "y.tab.c"

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
  YYSYMBOL_LF = 3,                         /* LF  */
  YYSYMBOL_NOP = 4,                        /* NOP  */
  YYSYMBOL_INDENT = 5,                     /* INDENT  */
  YYSYMBOL_INT_VALUE = 6,                  /* INT_VALUE  */
  YYSYMBOL_BOOLEAN_VALUE = 7,              /* BOOLEAN_VALUE  */
  YYSYMBOL_FLOAT_VALUE = 8,                /* FLOAT_VALUE  */
  YYSYMBOL_STRING_VALUE = 9,               /* STRING_VALUE  */
  YYSYMBOL_NULL_VALUE = 10,                /* NULL_VALUE  */
  YYSYMBOL_ARRAY_VALUE = 11,               /* ARRAY_VALUE  */
  YYSYMBOL_IDENTIFER = 12,                 /* IDENTIFER  */
  YYSYMBOL_ASSIGN = 13,                    /* ASSIGN  */
  YYSYMBOL_VAR = 14,                       /* VAR  */
  YYSYMBOL_GLOBAL = 15,                    /* GLOBAL  */
  YYSYMBOL_ADD_ASSIGN = 16,                /* ADD_ASSIGN  */
  YYSYMBOL_SUB_ASSIGN = 17,                /* SUB_ASSIGN  */
  YYSYMBOL_MUL_ASSIGN = 18,                /* MUL_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 19,                /* DIV_ASSIGN  */
  YYSYMBOL_MOD_ASSIGN = 20,                /* MOD_ASSIGN  */
  YYSYMBOL_PRINT = 21,                     /* PRINT  */
  YYSYMBOL_PRINTLN = 22,                   /* PRINTLN  */
  YYSYMBOL_LEFT_PAREN = 23,                /* LEFT_PAREN  */
  YYSYMBOL_RIGHT_PAREN = 24,               /* RIGHT_PAREN  */
  YYSYMBOL_LEFT_QUAD = 25,                 /* LEFT_QUAD  */
  YYSYMBOL_RIGHT_QUAD = 26,                /* RIGHT_QUAD  */
  YYSYMBOL_LEFT_BRACE = 27,                /* LEFT_BRACE  */
  YYSYMBOL_RIGHT_BRACE = 28,               /* RIGHT_BRACE  */
  YYSYMBOL_SEMICOLON_OPTIONAL = 29,        /* SEMICOLON_OPTIONAL  */
  YYSYMBOL_SEMICOLON = 30,                 /* SEMICOLON  */
  YYSYMBOL_COMMA = 31,                     /* COMMA  */
  YYSYMBOL_COLON = 32,                     /* COLON  */
  YYSYMBOL_ADD = 33,                       /* ADD  */
  YYSYMBOL_SUB = 34,                       /* SUB  */
  YYSYMBOL_MUL = 35,                       /* MUL  */
  YYSYMBOL_DIV = 36,                       /* DIV  */
  YYSYMBOL_MOD = 37,                       /* MOD  */
  YYSYMBOL_EQ = 38,                        /* EQ  */
  YYSYMBOL_NE = 39,                        /* NE  */
  YYSYMBOL_GT = 40,                        /* GT  */
  YYSYMBOL_GE = 41,                        /* GE  */
  YYSYMBOL_LT = 42,                        /* LT  */
  YYSYMBOL_LE = 43,                        /* LE  */
  YYSYMBOL_AND = 44,                       /* AND  */
  YYSYMBOL_OR = 45,                        /* OR  */
  YYSYMBOL_NOT = 46,                       /* NOT  */
  YYSYMBOL_BIT_AND = 47,                   /* BIT_AND  */
  YYSYMBOL_BIT_OR = 48,                    /* BIT_OR  */
  YYSYMBOL_BIT_XOR = 49,                   /* BIT_XOR  */
  YYSYMBOL_BIT_NOT = 50,                   /* BIT_NOT  */
  YYSYMBOL_INCREMENT = 51,                 /* INCREMENT  */
  YYSYMBOL_DECREMENT = 52,                 /* DECREMENT  */
  YYSYMBOL_IF = 53,                        /* IF  */
  YYSYMBOL_ELSE = 54,                      /* ELSE  */
  YYSYMBOL_FOR = 55,                       /* FOR  */
  YYSYMBOL_WHILE = 56,                     /* WHILE  */
  YYSYMBOL_DO = 57,                        /* DO  */
  YYSYMBOL_CONTINUE = 58,                  /* CONTINUE  */
  YYSYMBOL_BREAK = 59,                     /* BREAK  */
  YYSYMBOL_FUNC = 60,                      /* FUNC  */
  YYSYMBOL_RETURN = 61,                    /* RETURN  */
  YYSYMBOL_NEW_ARRAY = 62,                 /* NEW_ARRAY  */
  YYSYMBOL_MINUS_SIGN = 63,                /* MINUS_SIGN  */
  YYSYMBOL_PLUS_SIGN = 64,                 /* PLUS_SIGN  */
  YYSYMBOL_READ_INT = 65,                  /* READ_INT  */
  YYSYMBOL_READ_FLOAT = 66,                /* READ_FLOAT  */
  YYSYMBOL_READ = 67,                      /* READ  */
  YYSYMBOL_READ_BOOL = 68,                 /* READ_BOOL  */
  YYSYMBOL_READ_LINE = 69,                 /* READ_LINE  */
  YYSYMBOL_YYACCEPT = 70,                  /* $accept  */
  YYSYMBOL_statement = 71,                 /* statement  */
  YYSYMBOL_72_1 = 72,                      /* @1  */
  YYSYMBOL_check_indent = 73,              /* check_indent  */
  YYSYMBOL_build_statement = 74,           /* build_statement  */
  YYSYMBOL_close_execute_statement = 75,   /* close_execute_statement  */
  YYSYMBOL_close_execute_last_statement = 76, /* close_execute_last_statement  */
  YYSYMBOL_execute_statement = 77,         /* execute_statement  */
  YYSYMBOL_single_statement = 78,          /* single_statement  */
  YYSYMBOL_single_statement_no_semicolon = 79, /* single_statement_no_semicolon  */
  YYSYMBOL_null_statement = 80,            /* null_statement  */
  YYSYMBOL_nop_statement = 81,             /* nop_statement  */
  YYSYMBOL_statement_block = 82,           /* statement_block  */
  YYSYMBOL_block_list = 83,                /* block_list  */
  YYSYMBOL_expression_statement = 84,      /* expression_statement  */
  YYSYMBOL_expression = 85,                /* expression  */
  YYSYMBOL_lvalue_operation_expression = 86, /* lvalue_operation_expression  */
  YYSYMBOL_assign_expression = 87,         /* assign_expression  */
  YYSYMBOL_self_operation_expression = 88, /* self_operation_expression  */
  YYSYMBOL_unary_expression = 89,          /* unary_expression  */
  YYSYMBOL_binary_expression = 90,         /* binary_expression  */
  YYSYMBOL_value_expression = 91,          /* value_expression  */
  YYSYMBOL_lvalue_expression = 92,         /* lvalue_expression  */
  YYSYMBOL_array_expression = 93,          /* array_expression  */
  YYSYMBOL_new_array_expression = 94,      /* new_array_expression  */
  YYSYMBOL_element_list = 95,              /* element_list  */
  YYSYMBOL_var_statement = 96,             /* var_statement  */
  YYSYMBOL_global_statement = 97,          /* global_statement  */
  YYSYMBOL_assign_list = 98,               /* assign_list  */
  YYSYMBOL_function_expression = 99,       /* function_expression  */
  YYSYMBOL_argument_list = 100,            /* argument_list  */
  YYSYMBOL_evaluate_list = 101,            /* evaluate_list  */
  YYSYMBOL_if_statement = 102,             /* if_statement  */
  YYSYMBOL_else_statement = 103,           /* else_statement  */
  YYSYMBOL_for_statement = 104,            /* for_statement  */
  YYSYMBOL_while_statement = 105,          /* while_statement  */
  YYSYMBOL_do_while_statement = 106,       /* do_while_statement  */
  YYSYMBOL_break_statement = 107,          /* break_statement  */
  YYSYMBOL_continue_statement = 108,       /* continue_statement  */
  YYSYMBOL_structure_statement = 109,      /* structure_statement  */
  YYSYMBOL_function_define_statement = 110, /* function_define_statement  */
  YYSYMBOL_parameter_list = 111,           /* parameter_list  */
  YYSYMBOL_return_statement = 112          /* return_statement  */
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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1369

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  70
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  43
/* YYNRULES -- Number of rules.  */
#define YYNRULES  140
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  247

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   324


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
      65,    66,    67,    68,    69
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   149,   149,   149,   150,   151,   152,   153,   156,   166,
     312,   431,   551,   592,   593,   594,   595,   596,   598,   599,
     600,   601,   603,   604,   605,   606,   616,   617,   618,   619,
     620,   621,   625,   628,   631,   632,   635,   640,   647,   653,
     654,   655,   656,   657,   658,   661,   662,   665,   666,   667,
     668,   669,   670,   674,   675,   676,   677,   680,   681,   682,
     683,   684,   687,   688,   689,   690,   691,   692,   693,   694,
     695,   696,   697,   698,   699,   700,   701,   702,   706,   707,
     708,   709,   710,   711,   712,   715,   716,   724,   728,   734,
     740,   745,   753,   756,   759,   764,   769,   774,   785,   789,
     795,   800,   808,   813,   818,   823,   828,   833,   838,   843,
     848,   853,   858,   863,   868,   873,   878,   883,   888,   893,
     898,   903,   908,   913,   931,   942,   955,   967,   973,   979,
     980,   983,   984,   987,   988,  1025,  1033,  1045,  1050,  1057,
    1058
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
  "\"end of file\"", "error", "\"invalid token\"", "LF", "NOP", "INDENT",
  "INT_VALUE", "BOOLEAN_VALUE", "FLOAT_VALUE", "STRING_VALUE",
  "NULL_VALUE", "ARRAY_VALUE", "IDENTIFER", "ASSIGN", "VAR", "GLOBAL",
  "ADD_ASSIGN", "SUB_ASSIGN", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN",
  "PRINT", "PRINTLN", "LEFT_PAREN", "RIGHT_PAREN", "LEFT_QUAD",
  "RIGHT_QUAD", "LEFT_BRACE", "RIGHT_BRACE", "SEMICOLON_OPTIONAL",
  "SEMICOLON", "COMMA", "COLON", "ADD", "SUB", "MUL", "DIV", "MOD", "EQ",
  "NE", "GT", "GE", "LT", "LE", "AND", "OR", "NOT", "BIT_AND", "BIT_OR",
  "BIT_XOR", "BIT_NOT", "INCREMENT", "DECREMENT", "IF", "ELSE", "FOR",
  "WHILE", "DO", "CONTINUE", "BREAK", "FUNC", "RETURN", "NEW_ARRAY",
  "MINUS_SIGN", "PLUS_SIGN", "READ_INT", "READ_FLOAT", "READ", "READ_BOOL",
  "READ_LINE", "$accept", "statement", "@1", "check_indent",
  "build_statement", "close_execute_statement",
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

#define YYPACT_NINF (-70)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-12)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     205,   -70,    90,   -70,   -70,   -70,   453,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -17,    -5,    -5,   970,
     606,   970,   970,   970,   970,     9,     9,     4,   -70,    25,
      26,    33,    35,    47,   970,    39,    60,   -70,   -70,  1303,
     -70,   -70,   -70,   -70,   -70,   -70,     0,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     453,   636,    52,    61,    61,    70,   -70,  1303,    24,   -70,
     -70,   -70,   -70,   -70,    66,    66,   970,   510,   970,   970,
     970,    78,  1303,   970,   -70,   970,   970,   970,   970,   970,
     970,   970,   970,   970,   970,   970,   970,   970,   970,   970,
     970,   970,   970,   970,   970,   970,   970,   667,   -70,   -70,
      91,   128,   -70,  1303,    22,   970,   120,   -70,   -70,   970,
    1000,   267,   103,   -70,   -70,   -70,   -70,   -70,   -70,   113,
    1022,  1044,     2,  1066,   -70,    62,    62,   -70,   -70,   -70,
     137,   137,   137,   137,   137,   137,  1320,   114,   207,    87,
     154,  1303,  1303,  1303,  1303,  1303,  1303,   698,  1086,   729,
     -70,   -70,   970,  1303,   126,  1303,   -70,   329,   -70,   -70,
     104,   970,   -70,   -70,   -70,   -70,   -70,    23,   -70,   -70,
     140,  1106,   -70,   545,   760,  1126,   -70,  1303,   970,   -70,
     -70,   391,   144,   138,   -70,   163,   -70,   -70,   790,   -70,
     820,  1146,   150,  1166,   -70,   576,   -70,  1303,   -70,   -70,
     970,   510,   -70,   -70,    -4,   -70,  1206,   -70,   850,   -70,
     -70,   880,   -70,   910,  1186,   -70,   153,   156,   -70,   -70,
     -70,  1226,   -70,  1246,   -70,  1266,   -70,   940,   148,   -70,
     -70,   -70,   -70,   -70,  1286,   -70,   -70
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     6,    11,     7,     1,    10,     0,     2,     5,    25,
      33,    78,    80,    79,    81,    82,    85,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   125,     0,
       0,   131,   129,     0,   139,     0,     0,    22,    13,    38,
      40,    45,    46,    41,    42,    39,    84,    43,    44,    23,
      24,    83,    14,    15,    16,    17,    18,    19,    21,    20,
       0,     0,    94,    92,    93,     0,    88,    90,     0,    58,
      57,    60,    61,    85,    53,    54,     0,    32,     0,     0,
       0,     0,   140,     0,     8,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    55,    56,
      86,     0,    99,   100,     0,     0,     0,    59,    87,     0,
       0,     0,     0,    31,    26,    27,    28,    29,    30,     0,
       0,     0,     0,     0,     9,    62,    63,    64,    65,    66,
      69,    70,    71,    72,    73,    74,    67,    68,    75,    76,
      77,    47,    48,    49,    50,    51,    52,     0,     0,     0,
       8,    98,     0,    95,    96,    91,   124,     0,   133,   134,
       0,     0,   127,   132,   130,   137,   136,     0,    89,     4,
       0,     0,   102,     0,     0,     0,     9,   101,     0,    35,
      36,     0,     0,     0,   135,     0,   112,   109,     0,   106,
       0,     0,     0,     0,   113,     0,    12,    97,    34,    37,
       0,    32,   138,   110,     0,   107,     0,   103,     0,   123,
     120,     0,   117,     0,     0,     3,     0,     0,   111,   108,
     104,     0,   121,     0,   118,     0,   114,     0,     0,   126,
     105,   122,   119,   115,     0,   128,   116
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -70,   -70,   -70,    38,    -3,   -70,   180,   -70,   -32,   -27,
     -70,   -70,   -70,   -70,   -69,   -19,   -70,   -70,   -70,   -70,
     -70,   -70,    -2,   -70,   -70,   -70,   -70,   -70,   167,   -70,
     -70,   -70,   -67,   -70,   -66,   -65,   -70,   -70,   -70,   -70,
     -70,   -70,   -70
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,    60,   134,   179,     8,     3,   225,    36,   122,
     123,    37,   169,   191,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    68,    49,    50,    63,    51,
     114,   110,    52,    53,    54,    55,   128,    56,    57,   170,
      58,   177,    59
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      65,    67,    69,    70,    71,    72,    61,    62,   124,   129,
     125,   126,   127,   101,   175,    82,   102,   103,   104,   105,
     106,    73,   228,    74,    75,   107,   176,    76,   111,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,   113,    98,    99,   100,   161,   194,    77,    78,
     118,   108,   109,   162,   195,   119,    79,   120,    80,    81,
     130,   131,    83,    84,   133,   115,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   158,   168,
       4,   107,   116,     5,   117,     6,   163,    87,    88,    89,
     165,   132,   193,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,   159,    98,    99,   100,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,   160,   164,   171,    98,   190,   100,   172,   181,   188,
     185,   226,   124,   187,   125,   126,   127,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,   209,
     192,    98,    99,   100,   201,   203,   196,   210,   211,   207,
      85,    86,    87,    88,    89,   212,   219,   238,   245,   214,
     239,   216,     7,   206,   227,    64,   224,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,   186,   231,
       0,    98,   233,     0,   235,   -11,     1,     0,   -11,   -11,
     -11,   -11,   -11,   -11,   -11,   -11,     0,   -11,   244,   -11,
     -11,     0,     0,     0,     0,     0,     0,     0,   -11,     0,
     -11,     0,     0,     0,     0,     0,     0,     0,   -11,   -11,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,   -11,     0,     0,     0,   -11,   -11,   -11,   -11,   -11,
     -11,   -11,     0,   -11,   -11,   -11,   -11,   -11,     9,     0,
       0,    10,     0,    11,    12,    13,    14,    15,     0,    16,
       0,    17,    18,     0,     0,     0,     0,     0,     0,     0,
      19,     0,    20,     0,   167,     0,     0,     0,     0,     0,
      21,    22,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    23,     0,     0,     0,    24,    25,    26,
      27,    28,    29,    30,     0,    31,    32,    33,    34,    35,
       9,     0,     0,    10,     0,    11,    12,    13,    14,    15,
       0,    16,     0,    17,    18,     0,     0,     0,     0,     0,
       0,     0,    19,     0,    20,     0,     0,   189,     0,     0,
       0,     0,    21,    22,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    23,     0,     0,     0,    24,
      25,    26,    27,    28,    29,    30,     0,    31,    32,    33,
      34,    35,     9,     0,     0,    10,     0,    11,    12,    13,
      14,    15,     0,    16,     0,    17,    18,     0,     0,     0,
       0,     0,     0,     0,    19,     0,    20,     0,     0,   208,
       0,     0,     0,     0,    21,    22,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    23,     0,     0,
       0,    24,    25,    26,    27,    28,    29,    30,     0,    31,
      32,    33,    34,    35,     9,     0,     0,    10,     0,    11,
      12,    13,    14,    15,     0,    16,     0,    17,    18,     0,
       0,     0,     0,     0,     0,     0,    19,     0,    20,     0,
       0,     0,     0,     0,     0,     0,    21,    22,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    23,
       0,     0,     0,    24,    25,    26,    27,    28,    29,    30,
       0,    31,    32,    33,    34,    35,    11,    12,    13,    14,
      15,     0,    16,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    19,     0,    20,     0,     0,     0,     0,
       0,     0,     0,    21,    22,     0,     0,     0,     0,     0,
       0,    11,    12,    13,    14,    15,    23,    16,     0,     0,
      24,    25,    26,    27,     0,    29,    30,   121,    19,     0,
      20,   199,    35,     0,     0,     0,     0,   200,    21,    22,
       0,     0,    11,    12,    13,    14,    15,     0,    16,     0,
       0,    23,     0,     0,     0,    24,    25,    26,     0,    19,
       0,    20,   222,     0,     0,     0,     0,    35,   223,    21,
      22,     0,    11,    12,    13,    14,    15,     0,    16,     0,
       0,     0,    23,     0,     0,     0,    24,    25,    26,    19,
       0,    20,    66,     0,     0,     0,     0,     0,    35,    21,
      22,     0,    11,    12,    13,    14,    15,     0,    16,     0,
       0,     0,    23,     0,     0,     0,    24,    25,    26,    19,
     112,    20,     0,     0,     0,     0,     0,     0,    35,    21,
      22,     0,     0,    11,    12,    13,    14,    15,     0,    16,
       0,     0,    23,     0,     0,     0,    24,    25,    26,     0,
      19,     0,    20,     0,     0,     0,     0,     0,    35,   157,
      21,    22,     0,     0,    11,    12,    13,    14,    15,     0,
      16,     0,     0,    23,     0,     0,     0,    24,    25,    26,
       0,    19,     0,    20,     0,     0,     0,     0,     0,    35,
     180,    21,    22,     0,     0,    11,    12,    13,    14,    15,
       0,    16,     0,     0,    23,     0,     0,     0,    24,    25,
      26,     0,    19,     0,    20,     0,     0,     0,     0,     0,
      35,   184,    21,    22,     0,     0,    11,    12,    13,    14,
      15,     0,    16,     0,     0,    23,     0,     0,     0,    24,
      25,    26,     0,    19,     0,    20,     0,     0,     0,     0,
       0,    35,   202,    21,    22,     0,    11,    12,    13,    14,
      15,     0,    16,     0,     0,     0,    23,     0,     0,     0,
      24,    25,    26,    19,     0,    20,   213,     0,     0,     0,
       0,     0,    35,    21,    22,     0,    11,    12,    13,    14,
      15,     0,    16,     0,     0,     0,    23,     0,     0,     0,
      24,    25,    26,    19,     0,    20,   215,     0,     0,     0,
       0,     0,    35,    21,    22,     0,    11,    12,    13,    14,
      15,     0,    16,     0,     0,     0,    23,     0,     0,     0,
      24,    25,    26,    19,     0,    20,   230,     0,     0,     0,
       0,     0,    35,    21,    22,     0,    11,    12,    13,    14,
      15,     0,    16,     0,     0,     0,    23,     0,     0,     0,
      24,    25,    26,    19,     0,    20,   232,     0,     0,     0,
       0,     0,    35,    21,    22,     0,    11,    12,    13,    14,
      15,     0,    16,     0,     0,     0,    23,     0,     0,     0,
      24,    25,    26,    19,     0,    20,   234,     0,     0,     0,
       0,     0,    35,    21,    22,     0,    11,    12,    13,    14,
      15,     0,    16,     0,     0,     0,    23,     0,     0,     0,
      24,    25,    26,    19,     0,    20,   243,     0,     0,     0,
       0,     0,    35,    21,    22,     0,    11,    12,    13,    14,
      15,     0,    16,     0,     0,     0,    23,     0,     0,     0,
      24,    25,    26,    19,     0,    20,     0,     0,     0,     0,
       0,     0,    35,    21,    22,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    23,     0,     0,     0,
      24,    25,    26,     0,   166,     0,     0,     0,     0,     0,
       0,     0,    35,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,   173,    98,    99,   100,
       0,     0,     0,     0,     0,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,   174,    98,
      99,   100,     0,     0,     0,     0,     0,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
     178,    98,    99,   100,     0,     0,     0,     0,     0,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,   182,    98,    99,   100,     0,     0,   183,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,   197,    98,    99,   100,     0,     0,   198,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,   204,    98,    99,   100,     0,     0,   205,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,   217,    98,    99,   100,     0,     0,   218,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,   220,    98,    99,   100,     0,     0,   221,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,   236,    98,    99,   100,     0,     0,   237,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,   229,    98,    99,   100,     0,     0,     0,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,   240,    98,    99,   100,     0,     0,     0,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,   241,    98,    99,   100,     0,     0,     0,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,   242,    98,    99,   100,     0,     0,     0,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,   246,    98,    99,   100,     0,     0,     0,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,     0,    98,    99,   100,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,     0,
      98,    99,   100,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,     0,     0,     0,    98,    99,   100
};

static const yytype_int16 yycheck[] =
{
      19,    20,    21,    22,    23,    24,    23,    12,    77,    78,
      77,    77,    77,    13,    12,    34,    16,    17,    18,    19,
      20,    12,    26,    25,    26,    25,    24,    23,    60,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    61,    47,    48,    49,    24,    24,    23,    23,
      26,    51,    52,    31,    31,    31,    23,    76,    23,    12,
      79,    80,    23,     3,    83,    13,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   121,
       0,    25,    31,     3,    24,     5,   115,    35,    36,    37,
     119,    23,   171,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    25,    47,    48,    49,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,     3,    12,    30,    47,   167,    49,    24,   157,    13,
     159,   210,   211,   162,   211,   211,   211,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,   191,
      56,    47,    48,    49,   183,   184,    26,    23,    30,   188,
      33,    34,    35,    36,    37,    12,    26,    24,    30,   198,
      24,   200,     2,   186,   211,    18,   205,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,   160,   218,
      -1,    47,   221,    -1,   223,     0,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    12,   237,    14,
      15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    46,    -1,    -1,    -1,    50,    51,    52,    53,    54,
      55,    56,    -1,    58,    59,    60,    61,    62,     1,    -1,
      -1,     4,    -1,     6,     7,     8,     9,    10,    -1,    12,
      -1,    14,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    -1,    25,    -1,    27,    -1,    -1,    -1,    -1,    -1,
      33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    46,    -1,    -1,    -1,    50,    51,    52,
      53,    54,    55,    56,    -1,    58,    59,    60,    61,    62,
       1,    -1,    -1,     4,    -1,     6,     7,     8,     9,    10,
      -1,    12,    -1,    14,    15,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    -1,    25,    -1,    -1,    28,    -1,    -1,
      -1,    -1,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,    -1,    50,
      51,    52,    53,    54,    55,    56,    -1,    58,    59,    60,
      61,    62,     1,    -1,    -1,     4,    -1,     6,     7,     8,
       9,    10,    -1,    12,    -1,    14,    15,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    -1,    25,    -1,    -1,    28,
      -1,    -1,    -1,    -1,    33,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,
      -1,    50,    51,    52,    53,    54,    55,    56,    -1,    58,
      59,    60,    61,    62,     1,    -1,    -1,     4,    -1,     6,
       7,     8,     9,    10,    -1,    12,    -1,    14,    15,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,
      -1,    -1,    -1,    50,    51,    52,    53,    54,    55,    56,
      -1,    58,    59,    60,    61,    62,     6,     7,     8,     9,
      10,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    34,    -1,    -1,    -1,    -1,    -1,
      -1,     6,     7,     8,     9,    10,    46,    12,    -1,    -1,
      50,    51,    52,    53,    -1,    55,    56,    57,    23,    -1,
      25,    26,    62,    -1,    -1,    -1,    -1,    32,    33,    34,
      -1,    -1,     6,     7,     8,     9,    10,    -1,    12,    -1,
      -1,    46,    -1,    -1,    -1,    50,    51,    52,    -1,    23,
      -1,    25,    26,    -1,    -1,    -1,    -1,    62,    32,    33,
      34,    -1,     6,     7,     8,     9,    10,    -1,    12,    -1,
      -1,    -1,    46,    -1,    -1,    -1,    50,    51,    52,    23,
      -1,    25,    26,    -1,    -1,    -1,    -1,    -1,    62,    33,
      34,    -1,     6,     7,     8,     9,    10,    -1,    12,    -1,
      -1,    -1,    46,    -1,    -1,    -1,    50,    51,    52,    23,
      24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    62,    33,
      34,    -1,    -1,     6,     7,     8,     9,    10,    -1,    12,
      -1,    -1,    46,    -1,    -1,    -1,    50,    51,    52,    -1,
      23,    -1,    25,    -1,    -1,    -1,    -1,    -1,    62,    32,
      33,    34,    -1,    -1,     6,     7,     8,     9,    10,    -1,
      12,    -1,    -1,    46,    -1,    -1,    -1,    50,    51,    52,
      -1,    23,    -1,    25,    -1,    -1,    -1,    -1,    -1,    62,
      32,    33,    34,    -1,    -1,     6,     7,     8,     9,    10,
      -1,    12,    -1,    -1,    46,    -1,    -1,    -1,    50,    51,
      52,    -1,    23,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      62,    32,    33,    34,    -1,    -1,     6,     7,     8,     9,
      10,    -1,    12,    -1,    -1,    46,    -1,    -1,    -1,    50,
      51,    52,    -1,    23,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    62,    32,    33,    34,    -1,     6,     7,     8,     9,
      10,    -1,    12,    -1,    -1,    -1,    46,    -1,    -1,    -1,
      50,    51,    52,    23,    -1,    25,    26,    -1,    -1,    -1,
      -1,    -1,    62,    33,    34,    -1,     6,     7,     8,     9,
      10,    -1,    12,    -1,    -1,    -1,    46,    -1,    -1,    -1,
      50,    51,    52,    23,    -1,    25,    26,    -1,    -1,    -1,
      -1,    -1,    62,    33,    34,    -1,     6,     7,     8,     9,
      10,    -1,    12,    -1,    -1,    -1,    46,    -1,    -1,    -1,
      50,    51,    52,    23,    -1,    25,    26,    -1,    -1,    -1,
      -1,    -1,    62,    33,    34,    -1,     6,     7,     8,     9,
      10,    -1,    12,    -1,    -1,    -1,    46,    -1,    -1,    -1,
      50,    51,    52,    23,    -1,    25,    26,    -1,    -1,    -1,
      -1,    -1,    62,    33,    34,    -1,     6,     7,     8,     9,
      10,    -1,    12,    -1,    -1,    -1,    46,    -1,    -1,    -1,
      50,    51,    52,    23,    -1,    25,    26,    -1,    -1,    -1,
      -1,    -1,    62,    33,    34,    -1,     6,     7,     8,     9,
      10,    -1,    12,    -1,    -1,    -1,    46,    -1,    -1,    -1,
      50,    51,    52,    23,    -1,    25,    26,    -1,    -1,    -1,
      -1,    -1,    62,    33,    34,    -1,     6,     7,     8,     9,
      10,    -1,    12,    -1,    -1,    -1,    46,    -1,    -1,    -1,
      50,    51,    52,    23,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    33,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,    -1,
      50,    51,    52,    -1,    24,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    24,    47,    48,    49,
      -1,    -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    24,    47,
      48,    49,    -1,    -1,    -1,    -1,    -1,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      24,    47,    48,    49,    -1,    -1,    -1,    -1,    -1,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    26,    47,    48,    49,    -1,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    26,    47,    48,    49,    -1,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    26,    47,    48,    49,    -1,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    26,    47,    48,    49,    -1,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    26,    47,    48,    49,    -1,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    26,    47,    48,    49,    -1,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    26,    47,    48,    49,    -1,    -1,    -1,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    26,    47,    48,    49,    -1,    -1,    -1,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    26,    47,    48,    49,    -1,    -1,    -1,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    26,    47,    48,    49,    -1,    -1,    -1,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    26,    47,    48,    49,    -1,    -1,    -1,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    -1,    47,    48,    49,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    -1,
      47,    48,    49,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    -1,    -1,    -1,    47,    48,    49
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,    71,    76,     0,     3,     5,    76,    75,     1,
       4,     6,     7,     8,     9,    10,    12,    14,    15,    23,
      25,    33,    34,    46,    50,    51,    52,    53,    54,    55,
      56,    58,    59,    60,    61,    62,    78,    81,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    96,
      97,    99,   102,   103,   104,   105,   107,   108,   110,   112,
      72,    23,    12,    98,    98,    85,    26,    85,    95,    85,
      85,    85,    85,    12,    92,    92,    23,    23,    23,    23,
      23,    12,    85,    23,     3,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    47,    48,
      49,    13,    16,    17,    18,    19,    20,    25,    51,    52,
     101,    78,    24,    85,   100,    13,    31,    24,    26,    31,
      85,    57,    79,    80,    84,   102,   104,   105,   106,    84,
      85,    85,    23,    85,    73,    85,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    32,    85,    25,
       3,    24,    31,    85,    12,    85,    24,    27,    78,    82,
     109,    30,    24,    24,    24,    12,    24,   111,    24,    74,
      32,    85,    26,    32,    32,    85,    73,    85,    13,    28,
      78,    83,    56,    84,    24,    31,    26,    26,    32,    26,
      32,    85,    32,    85,    26,    32,    74,    85,    28,    78,
      23,    30,    12,    26,    85,    26,    85,    26,    32,    26,
      26,    32,    26,    32,    85,    77,    84,    79,    26,    26,
      26,    85,    26,    85,    26,    85,    26,    32,    24,    24,
      26,    26,    26,    26,    85,    30,    26
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    70,    72,    71,    71,    71,    71,    71,    73,    74,
      75,    76,    77,    78,    78,    78,    78,    78,    78,    78,
      78,    78,    78,    78,    78,    78,    79,    79,    79,    79,
      79,    79,    80,    81,    82,    82,    83,    83,    84,    85,
      85,    85,    85,    85,    85,    86,    86,    87,    87,    87,
      87,    87,    87,    88,    88,    88,    88,    89,    89,    89,
      89,    89,    90,    90,    90,    90,    90,    90,    90,    90,
      90,    90,    90,    90,    90,    90,    90,    90,    91,    91,
      91,    91,    91,    91,    91,    92,    92,    93,    93,    94,
      95,    95,    96,    97,    98,    98,    98,    98,    99,    99,
     100,   100,   101,   101,   101,   101,   101,   101,   101,   101,
     101,   101,   101,   101,   101,   101,   101,   101,   101,   101,
     101,   101,   101,   101,   102,   103,   104,   105,   106,   107,
     107,   108,   108,   109,   109,   110,   110,   111,   111,   112,
     112
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     8,     6,     3,     1,     1,     0,     0,
       0,     0,     0,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     1,     3,     2,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     3,
       3,     3,     3,     2,     2,     2,     2,     2,     2,     3,
       2,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     3,     2,     4,
       1,     3,     2,     2,     1,     3,     3,     5,     4,     3,
       1,     3,     3,     5,     6,     7,     4,     5,     6,     4,
       5,     6,     4,     4,     6,     7,     8,     5,     6,     7,
       5,     6,     7,     5,     4,     1,     8,     4,     7,     1,
       4,     1,     4,     1,     1,     5,     4,     1,     3,     1,
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
#line 149 "bello.y"
                                             {(yyval.intVl) = 0; }
#line 1841 "y.tab.c"
    break;

  case 6: /* statement: error  */
#line 152 "bello.y"
            { yyerrok; }
#line 1847 "y.tab.c"
    break;

  case 8: /* check_indent: %empty  */
#line 156 "bello.y"
      { 
        if (((yyvsp[(-2) - (0)].intVl))>lstIndt+1) 
        {
           yyclearin;
           yyerrok;
        }
      }
#line 1859 "y.tab.c"
    break;

  case 9: /* build_statement: %empty  */
#line 166 "bello.y"
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
            while (stmtStk.back()->indt > nowIndt)
            {
                // 找到当前语句未入栈时，上1个子语句的主语句在语句栈中的序号
                idx = stmtStk.size()-1;
                while (idx>0 && stmtStk.back()->indt == stmtStk.at(idx-1)->indt)
                {
                    idx--;
                }

                int i = idx;

                StmtStrc* blk = bldStmtBlk();

                // 将子语句添加到语句块中
                while (i < stmtStk.size())
                {

                    //blk->stmt.stmtBlk->stmtArr.back()->stmt.ifStmt->els = stmtStk.at(i)->stmt;

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

                        //如果闭合的语句是else语句，则将其添加到其上的if语句中
                        StmtStrc* els = stmtStk.back()->stmt->stmt.elsStmt->stmt;
                        stmtStk.pop_back();

                        stmtStk.back()->stmt->stmt.ifStmt->els = els;

                        break;
                    }
                }

            }

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
#line 2007 "y.tab.c"
    break;

  case 10: /* close_execute_statement: %empty  */
#line 312 "bello.y"
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

                while (stmtStk.back()->indt > nowIndt)
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

                // 如果是双主句语句的情况


                //执行上一条顶级语句
                exctStmt(envr, stmtStk.back()->stmt);
                stmtStk.pop_back();

                //printf("cls stk lyr: %d\n", stmtStk.size());

                lstIndt=0;
            }

        }

    }
#line 2128 "y.tab.c"
    break;

  case 11: /* close_execute_last_statement: %empty  */
#line 431 "bello.y"
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

                while (stmtStk.back()->indt > nowIndt)
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

                // 如果是双主句语句的情况


                //执行上一条顶级语句
                exctStmt(envr, stmtStk.back()->stmt);
                stmtStk.pop_back();

                //printf("cls stk lyr: %d\n", stmtStk.size());

                lstIndt=0;
            }

        }
    }
#line 2250 "y.tab.c"
    break;

  case 12: /* execute_statement: %empty  */
#line 551 "bello.y"
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
#line 2272 "y.tab.c"
    break;

  case 13: /* single_statement: expression_statement  */
#line 592 "bello.y"
                           { (yyval.stmt)=(yyvsp[0].stmt); }
#line 2278 "y.tab.c"
    break;

  case 14: /* single_statement: if_statement  */
#line 593 "bello.y"
                   { (yyval.stmt)=(yyvsp[0].stmt); }
#line 2284 "y.tab.c"
    break;

  case 15: /* single_statement: else_statement  */
#line 594 "bello.y"
                     {(yyval.stmt)=(yyvsp[0].stmt); }
#line 2290 "y.tab.c"
    break;

  case 16: /* single_statement: for_statement  */
#line 595 "bello.y"
                    { (yyval.stmt)=(yyvsp[0].stmt); }
#line 2296 "y.tab.c"
    break;

  case 17: /* single_statement: while_statement  */
#line 596 "bello.y"
                      { (yyval.stmt)=(yyvsp[0].stmt); }
#line 2302 "y.tab.c"
    break;

  case 18: /* single_statement: break_statement  */
#line 598 "bello.y"
                      { (yyval.stmt)=(yyvsp[0].stmt); }
#line 2308 "y.tab.c"
    break;

  case 19: /* single_statement: continue_statement  */
#line 599 "bello.y"
                          { (yyval.stmt)=(yyvsp[0].stmt); }
#line 2314 "y.tab.c"
    break;

  case 20: /* single_statement: return_statement  */
#line 600 "bello.y"
                        { (yyval.stmt)=(yyvsp[0].stmt); }
#line 2320 "y.tab.c"
    break;

  case 21: /* single_statement: function_define_statement  */
#line 601 "bello.y"
                                { (yyval.stmt)=(yyvsp[0].stmt); }
#line 2326 "y.tab.c"
    break;

  case 22: /* single_statement: nop_statement  */
#line 603 "bello.y"
                    { (yyval.stmt)=(yyvsp[0].stmt); }
#line 2332 "y.tab.c"
    break;

  case 23: /* single_statement: var_statement  */
#line 604 "bello.y"
                     { (yyval.stmt) = (yyvsp[0].stmt);}
#line 2338 "y.tab.c"
    break;

  case 24: /* single_statement: global_statement  */
#line 605 "bello.y"
                        { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2344 "y.tab.c"
    break;

  case 25: /* single_statement: error  */
#line 607 "bello.y"
    { 
        (yyval.stmt)=bldNllStmt(); 
        yyclearin; 
        yyerrok; 
    }
#line 2354 "y.tab.c"
    break;

  case 32: /* null_statement: %empty  */
#line 625 "bello.y"
      { (yyval.stmt)=bldNllStmt(); }
#line 2360 "y.tab.c"
    break;

  case 33: /* nop_statement: NOP  */
#line 628 "bello.y"
          { (yyval.stmt)=bldNllStmt(); }
#line 2366 "y.tab.c"
    break;

  case 34: /* statement_block: LEFT_BRACE block_list RIGHT_BRACE  */
#line 631 "bello.y"
                                        { (yyval.stmt)=(yyvsp[-1].stmt); }
#line 2372 "y.tab.c"
    break;

  case 35: /* statement_block: LEFT_BRACE RIGHT_BRACE  */
#line 632 "bello.y"
                             { (yyval.stmt)=bldNllStmt(); }
#line 2378 "y.tab.c"
    break;

  case 36: /* block_list: single_statement  */
#line 636 "bello.y"
    { 
        (yyval.stmt)=bldStmtBlk(); 
        stmtBlkAdd((yyval.stmt), (yyvsp[0].stmt)); 
    }
#line 2387 "y.tab.c"
    break;

  case 37: /* block_list: block_list single_statement  */
#line 641 "bello.y"
    {
        (yyval.stmt) = stmtBlkAdd((yyvsp[-1].stmt) ,(yyvsp[0].stmt));
    }
#line 2395 "y.tab.c"
    break;

  case 38: /* expression_statement: expression  */
#line 648 "bello.y"
    { 
        (yyval.stmt)=bldExpStmt((yyvsp[0].exp)); 
    }
#line 2403 "y.tab.c"
    break;

  case 41: /* expression: unary_expression  */
#line 655 "bello.y"
                       { (yyval.exp)=(yyvsp[0].exp); }
#line 2409 "y.tab.c"
    break;

  case 42: /* expression: binary_expression  */
#line 656 "bello.y"
                        { (yyval.exp)=(yyvsp[0].exp); }
#line 2415 "y.tab.c"
    break;

  case 43: /* expression: array_expression  */
#line 657 "bello.y"
                       { (yyval.exp)=(yyvsp[0].exp); }
#line 2421 "y.tab.c"
    break;

  case 44: /* expression: new_array_expression  */
#line 658 "bello.y"
                           { (yyval.exp) = (yyvsp[0].exp); }
#line 2427 "y.tab.c"
    break;

  case 47: /* assign_expression: lvalue_expression ASSIGN expression  */
#line 665 "bello.y"
                                          { (yyval.exp)=bldAsgnExp((yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2433 "y.tab.c"
    break;

  case 48: /* assign_expression: lvalue_expression ADD_ASSIGN expression  */
#line 666 "bello.y"
                                              { (yyval.exp)=bldAsgnExp((yyvsp[-2].exp), bldBnrExp(ADD, (yyvsp[-2].exp), (yyvsp[0].exp))); }
#line 2439 "y.tab.c"
    break;

  case 49: /* assign_expression: lvalue_expression SUB_ASSIGN expression  */
#line 667 "bello.y"
                                              { (yyval.exp)=bldAsgnExp((yyvsp[-2].exp), bldBnrExp(SUB, (yyvsp[-2].exp), (yyvsp[0].exp))); }
#line 2445 "y.tab.c"
    break;

  case 50: /* assign_expression: lvalue_expression MUL_ASSIGN expression  */
#line 668 "bello.y"
                                              { (yyval.exp)=bldAsgnExp((yyvsp[-2].exp), bldBnrExp(MUL, (yyvsp[-2].exp), (yyvsp[0].exp))); }
#line 2451 "y.tab.c"
    break;

  case 51: /* assign_expression: lvalue_expression DIV_ASSIGN expression  */
#line 669 "bello.y"
                                              { (yyval.exp)=bldAsgnExp((yyvsp[-2].exp), bldBnrExp(DIV, (yyvsp[-2].exp), (yyvsp[0].exp))); }
#line 2457 "y.tab.c"
    break;

  case 52: /* assign_expression: lvalue_expression MOD_ASSIGN expression  */
#line 670 "bello.y"
                                              { (yyval.exp)=bldAsgnExp((yyvsp[-2].exp), bldBnrExp(MOD, (yyvsp[-2].exp), (yyvsp[0].exp))); }
#line 2463 "y.tab.c"
    break;

  case 53: /* self_operation_expression: INCREMENT lvalue_expression  */
#line 674 "bello.y"
                                  { (yyval.exp)=bldUnrExp(PREFIX_INCREMENT, (yyvsp[0].exp)); }
#line 2469 "y.tab.c"
    break;

  case 54: /* self_operation_expression: DECREMENT lvalue_expression  */
#line 675 "bello.y"
                                  { (yyval.exp)=bldUnrExp(PREFIX_DECREMENT, (yyvsp[0].exp)); }
#line 2475 "y.tab.c"
    break;

  case 55: /* self_operation_expression: lvalue_expression INCREMENT  */
#line 676 "bello.y"
                                  { (yyval.exp)=bldUnrExp(SUFFIX_INCREMENT, (yyvsp[-1].exp)); }
#line 2481 "y.tab.c"
    break;

  case 56: /* self_operation_expression: lvalue_expression DECREMENT  */
#line 677 "bello.y"
                                  { (yyval.exp)=bldUnrExp(SUFFIX_DECREMENT, (yyvsp[-1].exp)); }
#line 2487 "y.tab.c"
    break;

  case 57: /* unary_expression: SUB expression  */
#line 680 "bello.y"
                                      { (yyval.exp) = bldUnrExp(SUB, (yyvsp[0].exp)); }
#line 2493 "y.tab.c"
    break;

  case 58: /* unary_expression: ADD expression  */
#line 681 "bello.y"
                                     { (yyval.exp) = bldUnrExp(ADD, (yyvsp[0].exp)); }
#line 2499 "y.tab.c"
    break;

  case 59: /* unary_expression: LEFT_PAREN expression RIGHT_PAREN  */
#line 682 "bello.y"
                                        { (yyval.exp)=(yyvsp[-1].exp); }
#line 2505 "y.tab.c"
    break;

  case 60: /* unary_expression: NOT expression  */
#line 683 "bello.y"
                     { (yyval.exp)=bldUnrExp(NOT, (yyvsp[0].exp)); }
#line 2511 "y.tab.c"
    break;

  case 61: /* unary_expression: BIT_NOT expression  */
#line 684 "bello.y"
                         { (yyval.exp)=bldUnrExp(BIT_NOT, (yyvsp[0].exp)); }
#line 2517 "y.tab.c"
    break;

  case 62: /* binary_expression: expression ADD expression  */
#line 687 "bello.y"
                                { (yyval.exp)=bldBnrExp(ADD, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2523 "y.tab.c"
    break;

  case 63: /* binary_expression: expression SUB expression  */
#line 688 "bello.y"
                                { (yyval.exp)=bldBnrExp(SUB, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2529 "y.tab.c"
    break;

  case 64: /* binary_expression: expression MUL expression  */
#line 689 "bello.y"
                                { (yyval.exp)=bldBnrExp(MUL, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2535 "y.tab.c"
    break;

  case 65: /* binary_expression: expression DIV expression  */
#line 690 "bello.y"
                                { (yyval.exp)=bldBnrExp(DIV, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2541 "y.tab.c"
    break;

  case 66: /* binary_expression: expression MOD expression  */
#line 691 "bello.y"
                                { (yyval.exp)=bldBnrExp(MOD, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2547 "y.tab.c"
    break;

  case 67: /* binary_expression: expression AND expression  */
#line 692 "bello.y"
                                { (yyval.exp)=bldBnrExp(AND, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2553 "y.tab.c"
    break;

  case 68: /* binary_expression: expression OR expression  */
#line 693 "bello.y"
                               { (yyval.exp)=bldBnrExp(OR, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2559 "y.tab.c"
    break;

  case 69: /* binary_expression: expression EQ expression  */
#line 694 "bello.y"
                               { (yyval.exp)=bldBnrExp(EQ, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2565 "y.tab.c"
    break;

  case 70: /* binary_expression: expression NE expression  */
#line 695 "bello.y"
                               { (yyval.exp)=bldBnrExp(NE, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2571 "y.tab.c"
    break;

  case 71: /* binary_expression: expression GT expression  */
#line 696 "bello.y"
                               { (yyval.exp)=bldBnrExp(GT, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2577 "y.tab.c"
    break;

  case 72: /* binary_expression: expression GE expression  */
#line 697 "bello.y"
                               { (yyval.exp)=bldBnrExp(GE, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2583 "y.tab.c"
    break;

  case 73: /* binary_expression: expression LT expression  */
#line 698 "bello.y"
                               { (yyval.exp)=bldBnrExp(LT, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2589 "y.tab.c"
    break;

  case 74: /* binary_expression: expression LE expression  */
#line 699 "bello.y"
                               { (yyval.exp)=bldBnrExp(LE, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2595 "y.tab.c"
    break;

  case 75: /* binary_expression: expression BIT_AND expression  */
#line 700 "bello.y"
                                    { (yyval.exp)=bldBnrExp(BIT_AND, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2601 "y.tab.c"
    break;

  case 76: /* binary_expression: expression BIT_OR expression  */
#line 701 "bello.y"
                                   { (yyval.exp)=bldBnrExp(BIT_OR, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2607 "y.tab.c"
    break;

  case 77: /* binary_expression: expression BIT_XOR expression  */
#line 702 "bello.y"
                                    { (yyval.exp)=bldBnrExp(BIT_XOR, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2613 "y.tab.c"
    break;

  case 78: /* value_expression: INT_VALUE  */
#line 706 "bello.y"
                { (yyval.exp)=bldCnstIntExp((yyvsp[0].intVl)); /*printf("Get data: %d\n",$1);*/ }
#line 2619 "y.tab.c"
    break;

  case 79: /* value_expression: FLOAT_VALUE  */
#line 707 "bello.y"
                  { (yyval.exp)=bldCnstFltExp((yyvsp[0].fltVl)); }
#line 2625 "y.tab.c"
    break;

  case 80: /* value_expression: BOOLEAN_VALUE  */
#line 708 "bello.y"
                    { (yyval.exp)=bldCnstBlnExp((yyvsp[0].blnVl)); }
#line 2631 "y.tab.c"
    break;

  case 81: /* value_expression: STRING_VALUE  */
#line 709 "bello.y"
                   { (yyval.exp)=bldCnstStrExp((yyvsp[0].strVl)); }
#line 2637 "y.tab.c"
    break;

  case 82: /* value_expression: NULL_VALUE  */
#line 710 "bello.y"
                 { (yyval.exp)=bldCnstNllExp(); }
#line 2643 "y.tab.c"
    break;

  case 85: /* lvalue_expression: IDENTIFER  */
#line 715 "bello.y"
                { (yyval.exp)= bldLvlExp(bldVrbExp((yyvsp[0].idtf))); }
#line 2649 "y.tab.c"
    break;

  case 86: /* lvalue_expression: lvalue_expression evaluate_list  */
#line 717 "bello.y"
    { 
        (yyval.exp)=(yyvsp[-1].exp); 
        bldLvlExpAdd((yyvsp[-1].exp), (yyvsp[0].evlLst)); 
    }
#line 2658 "y.tab.c"
    break;

  case 87: /* array_expression: LEFT_QUAD element_list RIGHT_QUAD  */
#line 725 "bello.y"
    {
        (yyval.exp)= bldArrExp((yyvsp[-1].elmtLst));
    }
#line 2666 "y.tab.c"
    break;

  case 88: /* array_expression: LEFT_QUAD RIGHT_QUAD  */
#line 729 "bello.y"
    {
        (yyval.exp)= bldArrExp(bldElmtLst());
    }
#line 2674 "y.tab.c"
    break;

  case 89: /* new_array_expression: NEW_ARRAY LEFT_PAREN expression RIGHT_PAREN  */
#line 735 "bello.y"
    {
        (yyval.exp) = bldNewArrExp((yyvsp[-1].exp));
    }
#line 2682 "y.tab.c"
    break;

  case 90: /* element_list: expression  */
#line 741 "bello.y"
    { 
        (yyval.elmtLst)= bldElmtLst(); 
        elmtLstAdd((yyval.elmtLst), (yyvsp[0].exp)); 
    }
#line 2691 "y.tab.c"
    break;

  case 91: /* element_list: element_list COMMA expression  */
#line 746 "bello.y"
    {  
        (yyval.elmtLst)=(yyvsp[-2].elmtLst);  
        elmtLstAdd((yyval.elmtLst), (yyvsp[0].exp)); 
    }
#line 2700 "y.tab.c"
    break;

  case 92: /* var_statement: VAR assign_list  */
#line 753 "bello.y"
                      { (yyval.stmt)=bldVarStmt((yyvsp[0].asgnLst)); }
#line 2706 "y.tab.c"
    break;

  case 93: /* global_statement: GLOBAL assign_list  */
#line 756 "bello.y"
                         { (yyval.stmt)=bldGlbStmt((yyvsp[0].asgnLst)); }
#line 2712 "y.tab.c"
    break;

  case 94: /* assign_list: IDENTIFER  */
#line 760 "bello.y"
    {
        (yyval.asgnLst)= bldAsgnLst();
        asgnLstAdd((yyval.asgnLst), bldVrbExp((yyvsp[0].idtf)), bldNllExp());
    }
#line 2721 "y.tab.c"
    break;

  case 95: /* assign_list: IDENTIFER ASSIGN expression  */
#line 765 "bello.y"
    {
        (yyval.asgnLst)= bldAsgnLst();
        asgnLstAdd((yyval.asgnLst), bldVrbExp((yyvsp[-2].idtf)), (yyvsp[0].exp));
    }
#line 2730 "y.tab.c"
    break;

  case 96: /* assign_list: assign_list COMMA IDENTIFER  */
#line 770 "bello.y"
    {
        (yyval.asgnLst)=(yyvsp[-2].asgnLst);
        asgnLstAdd((yyval.asgnLst), bldVrbExp((yyvsp[0].idtf)), bldNllExp());
    }
#line 2739 "y.tab.c"
    break;

  case 97: /* assign_list: assign_list COMMA IDENTIFER ASSIGN expression  */
#line 775 "bello.y"
    {
        (yyval.asgnLst)=(yyvsp[-4].asgnLst);
        asgnLstAdd((yyval.asgnLst), bldVrbExp((yyvsp[-2].idtf)), (yyvsp[0].exp));
    }
#line 2748 "y.tab.c"
    break;

  case 98: /* function_expression: IDENTIFER LEFT_PAREN argument_list RIGHT_PAREN  */
#line 786 "bello.y"
    {
        (yyval.exp)=bldFcnExp((yyvsp[-3].idtf), (yyvsp[-1].argLst));
    }
#line 2756 "y.tab.c"
    break;

  case 99: /* function_expression: IDENTIFER LEFT_PAREN RIGHT_PAREN  */
#line 790 "bello.y"
    {
        (yyval.exp)=bldFcnExp((yyvsp[-2].idtf), bldArgLst());
    }
#line 2764 "y.tab.c"
    break;

  case 100: /* argument_list: expression  */
#line 796 "bello.y"
    {
        (yyval.argLst)=bldArgLst();
        argLstAdd((yyval.argLst), (yyvsp[0].exp));
    }
#line 2773 "y.tab.c"
    break;

  case 101: /* argument_list: argument_list COMMA expression  */
#line 801 "bello.y"
    {
        (yyval.argLst)=(yyvsp[-2].argLst);
        argLstAdd((yyval.argLst), (yyvsp[0].exp));
    }
#line 2782 "y.tab.c"
    break;

  case 102: /* evaluate_list: LEFT_QUAD expression RIGHT_QUAD  */
#line 809 "bello.y"
    {
        (yyval.evlLst) = bldAcsLst();
        acsLstIdxAdd((yyval.evlLst), (yyvsp[-1].exp));
    }
#line 2791 "y.tab.c"
    break;

  case 103: /* evaluate_list: LEFT_QUAD expression COLON expression RIGHT_QUAD  */
#line 814 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-3].exp), (yyvsp[-1].exp), bldCnstIntExp(1));
    }
#line 2800 "y.tab.c"
    break;

  case 104: /* evaluate_list: LEFT_QUAD expression COLON expression COLON RIGHT_QUAD  */
#line 819 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-4].exp), (yyvsp[-2].exp), bldCnstIntExp(1));
    }
#line 2809 "y.tab.c"
    break;

  case 105: /* evaluate_list: LEFT_QUAD expression COLON expression COLON expression RIGHT_QUAD  */
#line 824 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-5].exp), (yyvsp[-3].exp), (yyvsp[-1].exp));
    }
#line 2818 "y.tab.c"
    break;

  case 106: /* evaluate_list: LEFT_QUAD expression COLON RIGHT_QUAD  */
#line 829 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-2].exp), bldCnstIntExp(-1), bldCnstIntExp(1));
    }
#line 2827 "y.tab.c"
    break;

  case 107: /* evaluate_list: LEFT_QUAD expression COLON COLON RIGHT_QUAD  */
#line 834 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-3].exp), bldCnstIntExp(-1), bldCnstIntExp(1));
    }
#line 2836 "y.tab.c"
    break;

  case 108: /* evaluate_list: LEFT_QUAD expression COLON COLON expression RIGHT_QUAD  */
#line 839 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-4].exp), bldCnstIntExp(-1), (yyvsp[-1].exp));
    }
#line 2845 "y.tab.c"
    break;

  case 109: /* evaluate_list: LEFT_QUAD COLON expression RIGHT_QUAD  */
#line 844 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), (yyvsp[-1].exp), bldCnstIntExp(1));
    }
#line 2854 "y.tab.c"
    break;

  case 110: /* evaluate_list: LEFT_QUAD COLON expression COLON RIGHT_QUAD  */
#line 849 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), (yyvsp[-2].exp), bldCnstIntExp(1));
    }
#line 2863 "y.tab.c"
    break;

  case 111: /* evaluate_list: LEFT_QUAD COLON expression COLON expression RIGHT_QUAD  */
#line 854 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), (yyvsp[-3].exp), (yyvsp[-1].exp));
    }
#line 2872 "y.tab.c"
    break;

  case 112: /* evaluate_list: LEFT_QUAD COLON COLON RIGHT_QUAD  */
#line 859 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), bldCnstIntExp(-1), bldCnstIntExp(1));
    }
#line 2881 "y.tab.c"
    break;

  case 113: /* evaluate_list: evaluate_list LEFT_QUAD expression RIGHT_QUAD  */
#line 864 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-3].evlLst);
        acsLstIdxAdd((yyval.evlLst),(yyvsp[-1].exp));
    }
#line 2890 "y.tab.c"
    break;

  case 114: /* evaluate_list: evaluate_list LEFT_QUAD expression COLON expression RIGHT_QUAD  */
#line 869 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-5].evlLst);
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-3].exp), (yyvsp[-1].exp), bldCnstIntExp(1));
    }
#line 2899 "y.tab.c"
    break;

  case 115: /* evaluate_list: evaluate_list LEFT_QUAD expression COLON expression COLON RIGHT_QUAD  */
#line 874 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-6].evlLst);
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-4].exp), (yyvsp[-2].exp), bldCnstIntExp(1));
    }
#line 2908 "y.tab.c"
    break;

  case 116: /* evaluate_list: evaluate_list LEFT_QUAD expression COLON expression COLON expression RIGHT_QUAD  */
#line 879 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-7].evlLst);
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-5].exp), (yyvsp[-3].exp), (yyvsp[-1].exp));
    }
#line 2917 "y.tab.c"
    break;

  case 117: /* evaluate_list: evaluate_list LEFT_QUAD expression COLON RIGHT_QUAD  */
#line 884 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-4].evlLst);
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-2].exp), bldCnstIntExp(-1), bldCnstIntExp(1));
    }
#line 2926 "y.tab.c"
    break;

  case 118: /* evaluate_list: evaluate_list LEFT_QUAD expression COLON COLON RIGHT_QUAD  */
#line 889 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-5].evlLst);
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-3].exp), bldCnstIntExp(-1), bldCnstIntExp(1));
    }
#line 2935 "y.tab.c"
    break;

  case 119: /* evaluate_list: evaluate_list LEFT_QUAD expression COLON COLON expression RIGHT_QUAD  */
#line 894 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-6].evlLst);
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-4].exp), bldCnstIntExp(-1), (yyvsp[-1].exp));
    }
#line 2944 "y.tab.c"
    break;

  case 120: /* evaluate_list: evaluate_list LEFT_QUAD COLON expression RIGHT_QUAD  */
#line 899 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-4].evlLst);
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), (yyvsp[-1].exp), bldCnstIntExp(1));
    }
#line 2953 "y.tab.c"
    break;

  case 121: /* evaluate_list: evaluate_list LEFT_QUAD COLON expression COLON RIGHT_QUAD  */
#line 904 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-5].evlLst);
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), (yyvsp[-2].exp), bldCnstIntExp(1));
    }
#line 2962 "y.tab.c"
    break;

  case 122: /* evaluate_list: evaluate_list LEFT_QUAD COLON expression COLON expression RIGHT_QUAD  */
#line 909 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-6].evlLst);
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), (yyvsp[-3].exp), (yyvsp[-1].exp));
    }
#line 2971 "y.tab.c"
    break;

  case 123: /* evaluate_list: evaluate_list LEFT_QUAD COLON COLON RIGHT_QUAD  */
#line 914 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-4].evlLst);
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), bldCnstIntExp(-1), bldCnstIntExp(1));
    }
#line 2980 "y.tab.c"
    break;

  case 124: /* if_statement: IF LEFT_PAREN expression RIGHT_PAREN  */
#line 932 "bello.y"
    {
        (yyval.stmt)=bldIfStmt((yyvsp[-1].exp));
        //printf("bld if stmt\n");
    }
#line 2989 "y.tab.c"
    break;

  case 125: /* else_statement: ELSE  */
#line 943 "bello.y"
    {
        (yyval.stmt) = bldElsStmt();
    }
#line 2997 "y.tab.c"
    break;

  case 126: /* for_statement: FOR LEFT_PAREN single_statement_no_semicolon SEMICOLON expression_statement SEMICOLON single_statement_no_semicolon RIGHT_PAREN  */
#line 956 "bello.y"
    {
        (yyval.stmt)= bldForStmt((yyvsp[-5].stmt), (yyvsp[-3].stmt), (yyvsp[-1].stmt));  
    }
#line 3005 "y.tab.c"
    break;

  case 127: /* while_statement: WHILE LEFT_PAREN expression_statement RIGHT_PAREN  */
#line 968 "bello.y"
    {
        (yyval.stmt)= bldWhlStmt((yyvsp[-1].stmt));
    }
#line 3013 "y.tab.c"
    break;

  case 128: /* do_while_statement: DO structure_statement WHILE LEFT_PAREN expression_statement RIGHT_PAREN SEMICOLON  */
#line 974 "bello.y"
    {
        (yyval.stmt)= bldDoWhlStmt((yyvsp[-2].stmt), (yyvsp[-5].stmt));
    }
#line 3021 "y.tab.c"
    break;

  case 129: /* break_statement: BREAK  */
#line 979 "bello.y"
            { (yyval.stmt)= bldBrkStmt(bldCnstIntExp(1)); }
#line 3027 "y.tab.c"
    break;

  case 130: /* break_statement: BREAK LEFT_PAREN expression RIGHT_PAREN  */
#line 980 "bello.y"
                                              { (yyval.stmt)= bldBrkStmt((yyvsp[-1].exp)); }
#line 3033 "y.tab.c"
    break;

  case 131: /* continue_statement: CONTINUE  */
#line 983 "bello.y"
               { (yyval.stmt)= bldCntnStmt(bldCnstIntExp(1)); }
#line 3039 "y.tab.c"
    break;

  case 132: /* continue_statement: CONTINUE LEFT_PAREN expression RIGHT_PAREN  */
#line 984 "bello.y"
                                                 { (yyval.stmt)= bldCntnStmt((yyvsp[-1].exp)); }
#line 3045 "y.tab.c"
    break;

  case 135: /* function_define_statement: FUNC IDENTIFER LEFT_PAREN parameter_list RIGHT_PAREN  */
#line 1026 "bello.y"
    {
        struct FcnStrc* fcn;

        fcn=bldFcn((yyvsp[-3].idtf), (yyvsp[-1].prmLst));

        (yyval.stmt) = bldFcnStmt(fcn);
    }
#line 3057 "y.tab.c"
    break;

  case 136: /* function_define_statement: FUNC IDENTIFER LEFT_PAREN RIGHT_PAREN  */
#line 1034 "bello.y"
    {
        struct FcnStrc *fcn;

        fcn=bldFcn((yyvsp[-2].idtf), bldPrmLst());

        (yyval.stmt) = bldFcnStmt(fcn);
    }
#line 3069 "y.tab.c"
    break;

  case 137: /* parameter_list: IDENTIFER  */
#line 1046 "bello.y"
    {
        (yyval.prmLst) = bldPrmLst();
        prmLstAdd((yyval.prmLst), bldVrbExp((yyvsp[0].idtf)));
    }
#line 3078 "y.tab.c"
    break;

  case 138: /* parameter_list: parameter_list COMMA IDENTIFER  */
#line 1051 "bello.y"
    { 
        (yyval.prmLst)=(yyvsp[-2].prmLst);  
        prmLstAdd((yyval.prmLst), bldVrbExp((yyvsp[0].idtf)));
    }
#line 3087 "y.tab.c"
    break;

  case 139: /* return_statement: RETURN  */
#line 1057 "bello.y"
             { (yyval.stmt)=bldRtnStmt(NULL); }
#line 3093 "y.tab.c"
    break;

  case 140: /* return_statement: RETURN expression  */
#line 1058 "bello.y"
                        { (yyval.stmt)=bldRtnStmt((yyvsp[0].exp)); }
#line 3099 "y.tab.c"
    break;


#line 3103 "y.tab.c"

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

#line 1061 "bello.y"




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


