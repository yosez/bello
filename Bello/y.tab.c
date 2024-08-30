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
    #include "dftn.h"
    #include "vrb.h"
    #include "cnst.h"
    #ifndef EXP_H
    #define EXP_H
    #endif
    #ifndef STMT_H
    #define STMT_H
    #endif
    // #ifndef ARR_H
    // #define ARR_H
    // #endif
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


#line 115 "y.tab.c"

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
    INT_VALUE = 258,               /* INT_VALUE  */
    BOOLEAN_VALUE = 259,           /* BOOLEAN_VALUE  */
    FLOAT_VALUE = 260,             /* FLOAT_VALUE  */
    STRING_VALUE = 261,            /* STRING_VALUE  */
    NULL_VALUE = 262,              /* NULL_VALUE  */
    ARRAY_VALUE = 263,             /* ARRAY_VALUE  */
    IDENTIFER = 264,               /* IDENTIFER  */
    ASSIGN = 265,                  /* ASSIGN  */
    VAR = 266,                     /* VAR  */
    GLOBAL = 267,                  /* GLOBAL  */
    ADD_ASSIGN = 268,              /* ADD_ASSIGN  */
    SUB_ASSIGN = 269,              /* SUB_ASSIGN  */
    MUL_ASSIGN = 270,              /* MUL_ASSIGN  */
    DIV_ASSIGN = 271,              /* DIV_ASSIGN  */
    MOD_ASSIGN = 272,              /* MOD_ASSIGN  */
    PRINT = 273,                   /* PRINT  */
    PRINTLN = 274,                 /* PRINTLN  */
    LEFT_PAREN = 275,              /* LEFT_PAREN  */
    RIGHT_PAREN = 276,             /* RIGHT_PAREN  */
    LEFT_QUAD = 277,               /* LEFT_QUAD  */
    RIGHT_QUAD = 278,              /* RIGHT_QUAD  */
    LEFT_BRACE = 279,              /* LEFT_BRACE  */
    RIGHT_BRACE = 280,             /* RIGHT_BRACE  */
    SEMICOLON = 281,               /* SEMICOLON  */
    COMMA = 282,                   /* COMMA  */
    COLON = 283,                   /* COLON  */
    ADD = 284,                     /* ADD  */
    SUB = 285,                     /* SUB  */
    MUL = 286,                     /* MUL  */
    DIV = 287,                     /* DIV  */
    MOD = 288,                     /* MOD  */
    EQ = 289,                      /* EQ  */
    NE = 290,                      /* NE  */
    GT = 291,                      /* GT  */
    GE = 292,                      /* GE  */
    LT = 293,                      /* LT  */
    LE = 294,                      /* LE  */
    AND = 295,                     /* AND  */
    OR = 296,                      /* OR  */
    NOT = 297,                     /* NOT  */
    BIT_AND = 298,                 /* BIT_AND  */
    BIT_OR = 299,                  /* BIT_OR  */
    BIT_XOR = 300,                 /* BIT_XOR  */
    BIT_NOT = 301,                 /* BIT_NOT  */
    INCREMENT = 302,               /* INCREMENT  */
    DECREMENT = 303,               /* DECREMENT  */
    IF = 304,                      /* IF  */
    ELSE = 305,                    /* ELSE  */
    FOR = 306,                     /* FOR  */
    WHILE = 307,                   /* WHILE  */
    DO = 308,                      /* DO  */
    CONTINUE = 309,                /* CONTINUE  */
    BREAK = 310,                   /* BREAK  */
    FUNC = 311,                    /* FUNC  */
    RETURN = 312,                  /* RETURN  */
    READ_INT = 313,                /* READ_INT  */
    READ_FLOAT = 314,              /* READ_FLOAT  */
    READ = 315,                    /* READ  */
    READ_BOOL = 316,               /* READ_BOOL  */
    READ_LINE = 317,               /* READ_LINE  */
    NEW_ARRAY = 318,               /* NEW_ARRAY  */
    MINUS_SIGN = 319,              /* MINUS_SIGN  */
    PLUS_SIGN = 320                /* PLUS_SIGN  */
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
#define GLOBAL 267
#define ADD_ASSIGN 268
#define SUB_ASSIGN 269
#define MUL_ASSIGN 270
#define DIV_ASSIGN 271
#define MOD_ASSIGN 272
#define PRINT 273
#define PRINTLN 274
#define LEFT_PAREN 275
#define RIGHT_PAREN 276
#define LEFT_QUAD 277
#define RIGHT_QUAD 278
#define LEFT_BRACE 279
#define RIGHT_BRACE 280
#define SEMICOLON 281
#define COMMA 282
#define COLON 283
#define ADD 284
#define SUB 285
#define MUL 286
#define DIV 287
#define MOD 288
#define EQ 289
#define NE 290
#define GT 291
#define GE 292
#define LT 293
#define LE 294
#define AND 295
#define OR 296
#define NOT 297
#define BIT_AND 298
#define BIT_OR 299
#define BIT_XOR 300
#define BIT_NOT 301
#define INCREMENT 302
#define DECREMENT 303
#define IF 304
#define ELSE 305
#define FOR 306
#define WHILE 307
#define DO 308
#define CONTINUE 309
#define BREAK 310
#define FUNC 311
#define RETURN 312
#define READ_INT 313
#define READ_FLOAT 314
#define READ 315
#define READ_BOOL 316
#define READ_LINE 317
#define NEW_ARRAY 318
#define MINUS_SIGN 319
#define PLUS_SIGN 320

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

#line 320 "y.tab.c"

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
  YYSYMBOL_INT_VALUE = 3,                  /* INT_VALUE  */
  YYSYMBOL_BOOLEAN_VALUE = 4,              /* BOOLEAN_VALUE  */
  YYSYMBOL_FLOAT_VALUE = 5,                /* FLOAT_VALUE  */
  YYSYMBOL_STRING_VALUE = 6,               /* STRING_VALUE  */
  YYSYMBOL_NULL_VALUE = 7,                 /* NULL_VALUE  */
  YYSYMBOL_ARRAY_VALUE = 8,                /* ARRAY_VALUE  */
  YYSYMBOL_IDENTIFER = 9,                  /* IDENTIFER  */
  YYSYMBOL_ASSIGN = 10,                    /* ASSIGN  */
  YYSYMBOL_VAR = 11,                       /* VAR  */
  YYSYMBOL_GLOBAL = 12,                    /* GLOBAL  */
  YYSYMBOL_ADD_ASSIGN = 13,                /* ADD_ASSIGN  */
  YYSYMBOL_SUB_ASSIGN = 14,                /* SUB_ASSIGN  */
  YYSYMBOL_MUL_ASSIGN = 15,                /* MUL_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 16,                /* DIV_ASSIGN  */
  YYSYMBOL_MOD_ASSIGN = 17,                /* MOD_ASSIGN  */
  YYSYMBOL_PRINT = 18,                     /* PRINT  */
  YYSYMBOL_PRINTLN = 19,                   /* PRINTLN  */
  YYSYMBOL_LEFT_PAREN = 20,                /* LEFT_PAREN  */
  YYSYMBOL_RIGHT_PAREN = 21,               /* RIGHT_PAREN  */
  YYSYMBOL_LEFT_QUAD = 22,                 /* LEFT_QUAD  */
  YYSYMBOL_RIGHT_QUAD = 23,                /* RIGHT_QUAD  */
  YYSYMBOL_LEFT_BRACE = 24,                /* LEFT_BRACE  */
  YYSYMBOL_RIGHT_BRACE = 25,               /* RIGHT_BRACE  */
  YYSYMBOL_SEMICOLON = 26,                 /* SEMICOLON  */
  YYSYMBOL_COMMA = 27,                     /* COMMA  */
  YYSYMBOL_COLON = 28,                     /* COLON  */
  YYSYMBOL_ADD = 29,                       /* ADD  */
  YYSYMBOL_SUB = 30,                       /* SUB  */
  YYSYMBOL_MUL = 31,                       /* MUL  */
  YYSYMBOL_DIV = 32,                       /* DIV  */
  YYSYMBOL_MOD = 33,                       /* MOD  */
  YYSYMBOL_EQ = 34,                        /* EQ  */
  YYSYMBOL_NE = 35,                        /* NE  */
  YYSYMBOL_GT = 36,                        /* GT  */
  YYSYMBOL_GE = 37,                        /* GE  */
  YYSYMBOL_LT = 38,                        /* LT  */
  YYSYMBOL_LE = 39,                        /* LE  */
  YYSYMBOL_AND = 40,                       /* AND  */
  YYSYMBOL_OR = 41,                        /* OR  */
  YYSYMBOL_NOT = 42,                       /* NOT  */
  YYSYMBOL_BIT_AND = 43,                   /* BIT_AND  */
  YYSYMBOL_BIT_OR = 44,                    /* BIT_OR  */
  YYSYMBOL_BIT_XOR = 45,                   /* BIT_XOR  */
  YYSYMBOL_BIT_NOT = 46,                   /* BIT_NOT  */
  YYSYMBOL_INCREMENT = 47,                 /* INCREMENT  */
  YYSYMBOL_DECREMENT = 48,                 /* DECREMENT  */
  YYSYMBOL_IF = 49,                        /* IF  */
  YYSYMBOL_ELSE = 50,                      /* ELSE  */
  YYSYMBOL_FOR = 51,                       /* FOR  */
  YYSYMBOL_WHILE = 52,                     /* WHILE  */
  YYSYMBOL_DO = 53,                        /* DO  */
  YYSYMBOL_CONTINUE = 54,                  /* CONTINUE  */
  YYSYMBOL_BREAK = 55,                     /* BREAK  */
  YYSYMBOL_FUNC = 56,                      /* FUNC  */
  YYSYMBOL_RETURN = 57,                    /* RETURN  */
  YYSYMBOL_READ_INT = 58,                  /* READ_INT  */
  YYSYMBOL_READ_FLOAT = 59,                /* READ_FLOAT  */
  YYSYMBOL_READ = 60,                      /* READ  */
  YYSYMBOL_READ_BOOL = 61,                 /* READ_BOOL  */
  YYSYMBOL_READ_LINE = 62,                 /* READ_LINE  */
  YYSYMBOL_NEW_ARRAY = 63,                 /* NEW_ARRAY  */
  YYSYMBOL_MINUS_SIGN = 64,                /* MINUS_SIGN  */
  YYSYMBOL_PLUS_SIGN = 65,                 /* PLUS_SIGN  */
  YYSYMBOL_YYACCEPT = 66,                  /* $accept  */
  YYSYMBOL_statement = 67,                 /* statement  */
  YYSYMBOL_execute_statement = 68,         /* execute_statement  */
  YYSYMBOL_single_statement = 69,          /* single_statement  */
  YYSYMBOL_single_statement_no_semicolon = 70, /* single_statement_no_semicolon  */
  YYSYMBOL_null_statement = 71,            /* null_statement  */
  YYSYMBOL_statement_block = 72,           /* statement_block  */
  YYSYMBOL_block_list = 73,                /* block_list  */
  YYSYMBOL_expression_statement = 74,      /* expression_statement  */
  YYSYMBOL_expression = 75,                /* expression  */
  YYSYMBOL_lvalue_operation_expression = 76, /* lvalue_operation_expression  */
  YYSYMBOL_assign_expression = 77,         /* assign_expression  */
  YYSYMBOL_self_operation_expression = 78, /* self_operation_expression  */
  YYSYMBOL_unary_expression = 79,          /* unary_expression  */
  YYSYMBOL_binary_expression = 80,         /* binary_expression  */
  YYSYMBOL_value_expression = 81,          /* value_expression  */
  YYSYMBOL_lvalue_expression = 82,         /* lvalue_expression  */
  YYSYMBOL_array_expression = 83,          /* array_expression  */
  YYSYMBOL_new_array_expression = 84,      /* new_array_expression  */
  YYSYMBOL_element_list = 85,              /* element_list  */
  YYSYMBOL_var_statement = 86,             /* var_statement  */
  YYSYMBOL_global_statement = 87,          /* global_statement  */
  YYSYMBOL_assign_list = 88,               /* assign_list  */
  YYSYMBOL_function_expression = 89,       /* function_expression  */
  YYSYMBOL_argument_list = 90,             /* argument_list  */
  YYSYMBOL_evaluate_list = 91,             /* evaluate_list  */
  YYSYMBOL_if_statement = 92,              /* if_statement  */
  YYSYMBOL_for_statement = 93,             /* for_statement  */
  YYSYMBOL_while_statement = 94,           /* while_statement  */
  YYSYMBOL_do_while_statement = 95,        /* do_while_statement  */
  YYSYMBOL_break_statement = 96,           /* break_statement  */
  YYSYMBOL_continue_statement = 97,        /* continue_statement  */
  YYSYMBOL_structure_statement = 98,       /* structure_statement  */
  YYSYMBOL_function_define_statement = 99, /* function_define_statement  */
  YYSYMBOL_parameter_list = 100,           /* parameter_list  */
  YYSYMBOL_return_statement = 101          /* return_statement  */
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
#define YYLAST   1391

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  66
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  36
/* YYNRULES -- Number of rules.  */
#define YYNRULES  135
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  250

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   320


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
      65
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   134,   134,   135,   136,   137,   141,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     172,   173,   174,   175,   176,   177,   181,   184,   185,   188,
     193,   200,   206,   207,   208,   209,   210,   211,   214,   215,
     218,   219,   220,   221,   222,   223,   227,   228,   229,   230,
     233,   234,   235,   236,   237,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   259,   260,   261,   262,   263,   264,   265,   268,   269,
     277,   281,   287,   293,   298,   306,   309,   312,   317,   322,
     327,   338,   342,   348,   353,   361,   366,   371,   376,   381,
     386,   391,   396,   401,   406,   411,   416,   421,   426,   431,
     436,   441,   446,   451,   456,   461,   466,   484,   488,   494,
     500,   506,   512,   513,   516,   517,   520,   521,   524,   532,
     540,   548,   559,   564,   571,   572
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
  "\"end of file\"", "error", "\"invalid token\"", "INT_VALUE",
  "BOOLEAN_VALUE", "FLOAT_VALUE", "STRING_VALUE", "NULL_VALUE",
  "ARRAY_VALUE", "IDENTIFER", "ASSIGN", "VAR", "GLOBAL", "ADD_ASSIGN",
  "SUB_ASSIGN", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "PRINT",
  "PRINTLN", "LEFT_PAREN", "RIGHT_PAREN", "LEFT_QUAD", "RIGHT_QUAD",
  "LEFT_BRACE", "RIGHT_BRACE", "SEMICOLON", "COMMA", "COLON", "ADD", "SUB",
  "MUL", "DIV", "MOD", "EQ", "NE", "GT", "GE", "LT", "LE", "AND", "OR",
  "NOT", "BIT_AND", "BIT_OR", "BIT_XOR", "BIT_NOT", "INCREMENT",
  "DECREMENT", "IF", "ELSE", "FOR", "WHILE", "DO", "CONTINUE", "BREAK",
  "FUNC", "RETURN", "READ_INT", "READ_FLOAT", "READ", "READ_BOOL",
  "READ_LINE", "NEW_ARRAY", "MINUS_SIGN", "PLUS_SIGN", "$accept",
  "statement", "execute_statement", "single_statement",
  "single_statement_no_semicolon", "null_statement", "statement_block",
  "block_list", "expression_statement", "expression",
  "lvalue_operation_expression", "assign_expression",
  "self_operation_expression", "unary_expression", "binary_expression",
  "value_expression", "lvalue_expression", "array_expression",
  "new_array_expression", "element_list", "var_statement",
  "global_statement", "assign_list", "function_expression",
  "argument_list", "evaluate_list", "if_statement", "for_statement",
  "while_statement", "do_while_statement", "break_statement",
  "continue_statement", "structure_statement", "function_define_statement",
  "parameter_list", "return_statement", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-143)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-27)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     215,  -143,   276,  -143,  -143,  -143,  -143,  -143,  -143,  -143,
      11,    17,    17,   931,   565,   114,   931,   931,   931,   931,
      35,    35,    25,    30,    31,   337,    32,    33,    47,   931,
      37,  -143,     2,  -143,    34,  1295,  -143,  -143,  -143,  -143,
    -143,  -143,     7,  -143,  -143,    36,    38,  -143,  -143,  -143,
    -143,  -143,    39,    44,  -143,    46,   594,    48,    72,    72,
     966,  -143,  1295,    19,  -143,  -143,   398,  -143,  -143,  -143,
    -143,  -143,    41,    41,   931,   453,   931,  -143,  -143,    21,
     931,   931,    54,  1295,   931,  -143,  -143,  -143,  -143,   931,
     931,   931,   931,   931,   931,   931,   931,   931,   931,   931,
     931,   931,   931,   931,   931,   931,   931,   931,   931,   931,
     931,   626,  -143,  -143,    53,  -143,  -143,  -143,  -143,  -143,
    -143,  1295,    -2,   931,    50,  -143,  -143,   931,  -143,  -143,
     987,    75,  -143,  -143,  -143,  -143,  -143,  -143,    81,    83,
    1008,  1029,     9,  1050,    16,    16,  -143,  -143,  -143,     8,
       8,     8,     8,     8,     8,  1329,  1312,   278,  1346,   217,
    1295,  1295,  1295,  1295,  1295,  1295,   655,  1069,   687,  -143,
     931,  1295,    94,  1295,   337,   931,   337,   931,  -143,  -143,
    -143,   337,     6,  -143,    82,  1088,  -143,   504,   716,  1107,
    1295,   931,    56,    86,  -143,    87,  -143,  -143,   337,    98,
    -143,  -143,   748,  -143,   777,  1126,    90,  1145,  -143,   533,
    1295,   337,   453,    96,  -143,  -143,  -143,  -143,  1183,  -143,
    1202,  -143,   809,  -143,  -143,   838,  -143,   870,  1164,  -143,
      95,  -143,  -143,  -143,  -143,  1221,  -143,  1240,  -143,  1259,
    -143,   899,   337,  -143,  -143,  -143,  -143,  1278,  -143,  -143
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     4,     0,     1,    19,    71,    73,    72,    74,    75,
      78,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   124,   122,     0,   134,
       0,     6,     0,     6,     0,    31,    33,    38,    39,    34,
      35,    32,    77,    36,    37,     0,     0,    76,     8,     9,
      10,    11,     0,     0,    15,     0,     0,    87,    85,    86,
       0,    81,    83,     0,    28,    29,     0,    51,    50,    53,
      54,    78,    46,    47,     0,    26,     0,   126,   127,     0,
       0,     0,     0,   135,     0,     2,    16,     3,     7,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    48,    49,    79,    17,    18,    12,    13,    14,
      92,    93,     0,     0,     0,    52,    80,     0,    27,    30,
       0,     0,    25,    20,    21,    22,    23,    24,     0,     0,
       0,     0,     0,     0,    55,    56,    57,    58,    59,    62,
      63,    64,    65,    66,    67,    60,    61,    68,    69,    70,
      40,    41,    42,    43,    44,    45,     0,     0,     0,    91,
       0,    88,    89,    84,     0,     0,     0,     0,   125,   123,
     132,     0,     0,    82,     0,     0,    95,     0,     0,     0,
      94,     0,   117,     0,   120,     0,   131,   129,     0,     0,
     105,   102,     0,    99,     0,     0,     0,     0,   106,     0,
      90,     0,    26,     0,   130,   128,   133,   103,     0,   100,
       0,    96,     0,   116,   113,     0,   110,     0,     0,   118,
       0,   121,   104,   101,    97,     0,   114,     0,   111,     0,
     107,     0,     0,    98,   115,   112,   108,     0,   119,   109
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -143,  -143,    91,     0,   -85,   -67,     5,  -143,   -66,   -13,
    -143,  -143,  -143,  -143,  -143,  -143,    15,  -143,  -143,  -143,
    -143,  -143,   116,  -143,  -143,  -143,   -64,   -63,   -62,   -61,
    -143,  -143,  -142,  -143,  -143,  -143
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,    85,    77,   131,    32,    78,    66,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    63,
      45,    46,    58,    47,   122,   114,    48,    49,    50,    51,
      52,    53,    79,    54,   182,    55
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      60,    62,    31,    67,    68,    69,    70,    33,   132,   133,
     138,   134,   135,   136,   137,    65,    83,   105,   180,   169,
     106,   107,   108,   109,   110,   170,    57,   198,    86,   111,
     181,    56,   192,   199,   194,    72,    73,    89,    90,    91,
      92,    93,   126,   121,    71,    74,   127,    91,    92,    93,
      75,    76,    80,    81,   112,   113,    82,    84,   123,   172,
      88,   130,   115,   111,   116,   117,   129,   140,   141,   229,
     118,   143,   119,   139,   142,   168,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   167,   124,
     248,   175,   176,   177,   191,   200,   211,   216,   213,   193,
     171,   195,   212,   223,   173,     4,   242,     5,     6,     7,
       8,     9,   231,    10,    87,    11,    12,   230,    59,     0,
       0,     0,     0,     0,    13,     0,    14,     0,     0,    64,
     -26,     0,     0,    16,    17,   132,   133,     0,   134,   135,
     136,   137,     0,   185,     0,   189,    18,   190,     0,     0,
      19,    20,    21,    22,     0,    23,    24,    25,    26,    27,
      28,    29,     0,     0,   205,   207,     0,    30,   210,     0,
       0,   196,     0,     0,     0,     0,   197,     0,     0,   218,
       0,   220,     0,     0,     0,     0,   228,     0,   214,     0,
       0,     0,     0,   215,     0,     0,     0,     0,     0,   235,
       0,     0,   237,     0,   239,    -5,     1,     0,    -5,    -5,
      -5,    -5,    -5,     0,    -5,     0,    -5,    -5,   247,     0,
       0,     0,     0,     0,     0,    -5,     0,    -5,     0,    -5,
       0,    -5,     0,     0,    -5,    -5,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,    -5,     0,     0,
     102,    -5,    -5,    -5,    -5,     0,    -5,    -5,    -5,    -5,
      -5,    -5,    -5,     0,     0,     0,     3,     4,    -5,     5,
       6,     7,     8,     9,     0,    10,     0,    11,    12,     0,
       0,     0,     0,     0,     0,     0,    13,     0,    14,     0,
      15,     0,   -26,     0,     0,    16,    17,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,    18,     0,
       0,     0,    19,    20,    21,    22,     0,    23,    24,    25,
      26,    27,    28,    29,     0,     0,     0,     0,     4,    30,
       5,     6,     7,     8,     9,     0,    10,     0,    11,    12,
       0,     0,     0,     0,     0,     0,     0,    13,     0,    14,
       0,    15,     0,   -26,     0,     0,    16,    17,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    18,
       0,     0,     0,    19,    20,    21,    22,     0,    23,    24,
      25,    26,    27,    28,    29,     0,     0,     0,     0,     4,
      30,     5,     6,     7,     8,     9,     0,    10,     0,    11,
      12,     0,     0,     0,     0,     0,     0,     0,    13,     0,
      14,     0,     0,   128,   -26,     0,     0,    16,    17,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      18,     0,     0,     0,    19,    20,    21,    22,     0,    23,
      24,    25,    26,    27,    28,    29,     5,     6,     7,     8,
       9,    30,    10,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    13,     0,    14,     0,     0,     0,     0,
       0,     0,    16,    17,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    18,     0,     0,     0,    19,
      20,    21,    22,     0,    23,    24,    25,     5,     6,     7,
       8,     9,     0,    10,     0,     0,    30,     0,     0,     0,
       0,     0,     0,     0,    13,     0,    14,   203,     0,     0,
       0,     0,   204,    16,    17,     0,     5,     6,     7,     8,
       9,     0,    10,     0,     0,     0,    18,     0,     0,     0,
      19,    20,    21,    13,     0,    14,   226,     0,     0,     0,
       0,   227,    16,    17,     0,     0,     0,    30,     5,     6,
       7,     8,     9,     0,    10,    18,     0,     0,     0,    19,
      20,    21,     0,     0,     0,    13,     0,    14,    61,     0,
       0,     0,     0,     0,    16,    17,    30,     5,     6,     7,
       8,     9,     0,    10,     0,     0,     0,    18,     0,     0,
       0,    19,    20,    21,    13,   120,    14,     0,     0,     0,
       0,     0,     0,    16,    17,     0,     0,     0,    30,     5,
       6,     7,     8,     9,     0,    10,    18,     0,     0,     0,
      19,    20,    21,     0,     0,     0,    13,     0,    14,     0,
       0,     0,     0,     0,   166,    16,    17,    30,     5,     6,
       7,     8,     9,     0,    10,     0,     0,     0,    18,     0,
       0,     0,    19,    20,    21,    13,     0,    14,     0,     0,
       0,     0,     0,   184,    16,    17,     0,     0,     0,    30,
       5,     6,     7,     8,     9,     0,    10,    18,     0,     0,
       0,    19,    20,    21,     0,     0,     0,    13,     0,    14,
       0,     0,     0,     0,     0,   188,    16,    17,    30,     5,
       6,     7,     8,     9,     0,    10,     0,     0,     0,    18,
       0,     0,     0,    19,    20,    21,    13,     0,    14,     0,
       0,     0,     0,     0,   206,    16,    17,     0,     0,     0,
      30,     5,     6,     7,     8,     9,     0,    10,    18,     0,
       0,     0,    19,    20,    21,     0,     0,     0,    13,     0,
      14,   217,     0,     0,     0,     0,     0,    16,    17,    30,
       5,     6,     7,     8,     9,     0,    10,     0,     0,     0,
      18,     0,     0,     0,    19,    20,    21,    13,     0,    14,
     219,     0,     0,     0,     0,     0,    16,    17,     0,     0,
       0,    30,     5,     6,     7,     8,     9,     0,    10,    18,
       0,     0,     0,    19,    20,    21,     0,     0,     0,    13,
       0,    14,   234,     0,     0,     0,     0,     0,    16,    17,
      30,     5,     6,     7,     8,     9,     0,    10,     0,     0,
       0,    18,     0,     0,     0,    19,    20,    21,    13,     0,
      14,   236,     0,     0,     0,     0,     0,    16,    17,     0,
       0,     0,    30,     5,     6,     7,     8,     9,     0,    10,
      18,     0,     0,     0,    19,    20,    21,     0,     0,     0,
      13,     0,    14,   238,     0,     0,     0,     0,     0,    16,
      17,    30,     5,     6,     7,     8,     9,     0,    10,     0,
       0,     0,    18,     0,     0,     0,    19,    20,    21,    13,
       0,    14,   246,     0,     0,     0,     0,     0,    16,    17,
       0,     0,     0,    30,     5,     6,     7,     8,     9,     0,
      10,    18,     0,     0,     0,    19,    20,    21,     0,     0,
       0,    13,     0,    14,     0,     0,     0,     0,     0,     0,
      16,    17,    30,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    18,     0,     0,     0,    19,    20,    21,
       0,     0,     0,     0,     0,     0,     0,   125,     0,     0,
       0,     0,     0,     0,    30,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   174,   102,
     103,   104,     0,     0,     0,     0,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   178,
     102,   103,   104,     0,     0,     0,     0,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     179,   102,   103,   104,     0,     0,     0,     0,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   183,   102,   103,   104,     0,     0,     0,     0,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   186,   102,   103,   104,     0,   187,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   201,   102,   103,   104,     0,   202,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     208,   102,   103,   104,     0,   209,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   221,
     102,   103,   104,     0,   222,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   224,   102,
     103,   104,     0,   225,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   240,   102,   103,
     104,     0,   241,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   232,   102,   103,   104,
       0,     0,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   233,   102,   103,   104,     0,
       0,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   243,   102,   103,   104,     0,     0,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   244,   102,   103,   104,     0,     0,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   245,   102,   103,   104,     0,     0,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   249,   102,   103,   104,     0,     0,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
       0,   102,   103,   104,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,     0,   102,   103,
     104,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,     0,     0,   102,   103,   104,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,     0,
       0,     0,   102,   103,   104,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,     0,     0,     0,   102,
       0,   104
};

static const yytype_int16 yycheck[] =
{
      13,    14,     2,    16,    17,    18,    19,     2,    75,    75,
      76,    75,    75,    75,    75,    15,    29,    10,     9,    21,
      13,    14,    15,    16,    17,    27,     9,    21,    26,    22,
      21,    20,   174,    27,   176,    20,    21,    29,    30,    31,
      32,    33,    23,    56,     9,    20,    27,    31,    32,    33,
      20,    20,    20,    20,    47,    48,     9,    20,    10,     9,
      26,    74,    26,    22,    26,    26,    66,    80,    81,   211,
      26,    84,    26,    52,    20,    22,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,    27,
     242,    26,    21,    20,    10,    23,    50,     9,    21,   175,
     123,   177,    26,    23,   127,     1,    21,     3,     4,     5,
       6,     7,    26,     9,    33,    11,    12,   212,    12,    -1,
      -1,    -1,    -1,    -1,    20,    -1,    22,    -1,    -1,    25,
      26,    -1,    -1,    29,    30,   212,   212,    -1,   212,   212,
     212,   212,    -1,   166,    -1,   168,    42,   170,    -1,    -1,
      46,    47,    48,    49,    -1,    51,    52,    53,    54,    55,
      56,    57,    -1,    -1,   187,   188,    -1,    63,   191,    -1,
      -1,   181,    -1,    -1,    -1,    -1,   181,    -1,    -1,   202,
      -1,   204,    -1,    -1,    -1,    -1,   209,    -1,   198,    -1,
      -1,    -1,    -1,   198,    -1,    -1,    -1,    -1,    -1,   222,
      -1,    -1,   225,    -1,   227,     0,     1,    -1,     3,     4,
       5,     6,     7,    -1,     9,    -1,    11,    12,   241,    -1,
      -1,    -1,    -1,    -1,    -1,    20,    -1,    22,    -1,    24,
      -1,    26,    -1,    -1,    29,    30,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    42,    -1,    -1,
      43,    46,    47,    48,    49,    -1,    51,    52,    53,    54,
      55,    56,    57,    -1,    -1,    -1,     0,     1,    63,     3,
       4,     5,     6,     7,    -1,     9,    -1,    11,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    22,    -1,
      24,    -1,    26,    -1,    -1,    29,    30,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    42,    -1,
      -1,    -1,    46,    47,    48,    49,    -1,    51,    52,    53,
      54,    55,    56,    57,    -1,    -1,    -1,    -1,     1,    63,
       3,     4,     5,     6,     7,    -1,     9,    -1,    11,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    22,
      -1,    24,    -1,    26,    -1,    -1,    29,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      -1,    -1,    -1,    46,    47,    48,    49,    -1,    51,    52,
      53,    54,    55,    56,    57,    -1,    -1,    -1,    -1,     1,
      63,     3,     4,     5,     6,     7,    -1,     9,    -1,    11,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,
      22,    -1,    -1,    25,    26,    -1,    -1,    29,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    -1,    -1,    -1,    46,    47,    48,    49,    -1,    51,
      52,    53,    54,    55,    56,    57,     3,     4,     5,     6,
       7,    63,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    20,    -1,    22,    -1,    -1,    -1,    -1,
      -1,    -1,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,    46,
      47,    48,    49,    -1,    51,    52,    53,     3,     4,     5,
       6,     7,    -1,     9,    -1,    -1,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    20,    -1,    22,    23,    -1,    -1,
      -1,    -1,    28,    29,    30,    -1,     3,     4,     5,     6,
       7,    -1,     9,    -1,    -1,    -1,    42,    -1,    -1,    -1,
      46,    47,    48,    20,    -1,    22,    23,    -1,    -1,    -1,
      -1,    28,    29,    30,    -1,    -1,    -1,    63,     3,     4,
       5,     6,     7,    -1,     9,    42,    -1,    -1,    -1,    46,
      47,    48,    -1,    -1,    -1,    20,    -1,    22,    23,    -1,
      -1,    -1,    -1,    -1,    29,    30,    63,     3,     4,     5,
       6,     7,    -1,     9,    -1,    -1,    -1,    42,    -1,    -1,
      -1,    46,    47,    48,    20,    21,    22,    -1,    -1,    -1,
      -1,    -1,    -1,    29,    30,    -1,    -1,    -1,    63,     3,
       4,     5,     6,     7,    -1,     9,    42,    -1,    -1,    -1,
      46,    47,    48,    -1,    -1,    -1,    20,    -1,    22,    -1,
      -1,    -1,    -1,    -1,    28,    29,    30,    63,     3,     4,
       5,     6,     7,    -1,     9,    -1,    -1,    -1,    42,    -1,
      -1,    -1,    46,    47,    48,    20,    -1,    22,    -1,    -1,
      -1,    -1,    -1,    28,    29,    30,    -1,    -1,    -1,    63,
       3,     4,     5,     6,     7,    -1,     9,    42,    -1,    -1,
      -1,    46,    47,    48,    -1,    -1,    -1,    20,    -1,    22,
      -1,    -1,    -1,    -1,    -1,    28,    29,    30,    63,     3,
       4,     5,     6,     7,    -1,     9,    -1,    -1,    -1,    42,
      -1,    -1,    -1,    46,    47,    48,    20,    -1,    22,    -1,
      -1,    -1,    -1,    -1,    28,    29,    30,    -1,    -1,    -1,
      63,     3,     4,     5,     6,     7,    -1,     9,    42,    -1,
      -1,    -1,    46,    47,    48,    -1,    -1,    -1,    20,    -1,
      22,    23,    -1,    -1,    -1,    -1,    -1,    29,    30,    63,
       3,     4,     5,     6,     7,    -1,     9,    -1,    -1,    -1,
      42,    -1,    -1,    -1,    46,    47,    48,    20,    -1,    22,
      23,    -1,    -1,    -1,    -1,    -1,    29,    30,    -1,    -1,
      -1,    63,     3,     4,     5,     6,     7,    -1,     9,    42,
      -1,    -1,    -1,    46,    47,    48,    -1,    -1,    -1,    20,
      -1,    22,    23,    -1,    -1,    -1,    -1,    -1,    29,    30,
      63,     3,     4,     5,     6,     7,    -1,     9,    -1,    -1,
      -1,    42,    -1,    -1,    -1,    46,    47,    48,    20,    -1,
      22,    23,    -1,    -1,    -1,    -1,    -1,    29,    30,    -1,
      -1,    -1,    63,     3,     4,     5,     6,     7,    -1,     9,
      42,    -1,    -1,    -1,    46,    47,    48,    -1,    -1,    -1,
      20,    -1,    22,    23,    -1,    -1,    -1,    -1,    -1,    29,
      30,    63,     3,     4,     5,     6,     7,    -1,     9,    -1,
      -1,    -1,    42,    -1,    -1,    -1,    46,    47,    48,    20,
      -1,    22,    23,    -1,    -1,    -1,    -1,    -1,    29,    30,
      -1,    -1,    -1,    63,     3,     4,     5,     6,     7,    -1,
       9,    42,    -1,    -1,    -1,    46,    47,    48,    -1,    -1,
      -1,    20,    -1,    22,    -1,    -1,    -1,    -1,    -1,    -1,
      29,    30,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    -1,    -1,    -1,    46,    47,    48,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    21,    43,
      44,    45,    -1,    -1,    -1,    -1,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    21,
      43,    44,    45,    -1,    -1,    -1,    -1,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      21,    43,    44,    45,    -1,    -1,    -1,    -1,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    21,    43,    44,    45,    -1,    -1,    -1,    -1,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    23,    43,    44,    45,    -1,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    23,    43,    44,    45,    -1,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      23,    43,    44,    45,    -1,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    23,
      43,    44,    45,    -1,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    23,    43,
      44,    45,    -1,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    23,    43,    44,
      45,    -1,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    23,    43,    44,    45,
      -1,    -1,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    23,    43,    44,    45,    -1,
      -1,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    23,    43,    44,    45,    -1,    -1,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    23,    43,    44,    45,    -1,    -1,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    23,    43,    44,    45,    -1,    -1,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    23,    43,    44,    45,    -1,    -1,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      -1,    43,    44,    45,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    -1,    43,    44,
      45,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    -1,    -1,    43,    44,    45,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    -1,
      -1,    -1,    43,    44,    45,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    -1,    -1,    -1,    43,
      -1,    45
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,    67,     0,     1,     3,     4,     5,     6,     7,
       9,    11,    12,    20,    22,    24,    29,    30,    42,    46,
      47,    48,    49,    51,    52,    53,    54,    55,    56,    57,
      63,    69,    71,    72,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    86,    87,    89,    92,    93,
      94,    95,    96,    97,    99,   101,    20,     9,    88,    88,
      75,    23,    75,    85,    25,    69,    73,    75,    75,    75,
      75,     9,    82,    82,    20,    20,    20,    69,    72,    98,
      20,    20,     9,    75,    20,    68,    26,    68,    26,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    43,    44,    45,    10,    13,    14,    15,    16,
      17,    22,    47,    48,    91,    26,    26,    26,    26,    26,
      21,    75,    90,    10,    27,    21,    23,    27,    25,    69,
      75,    70,    71,    74,    92,    93,    94,    95,    74,    52,
      75,    75,    20,    75,    75,    75,    75,    75,    75,    75,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    75,
      75,    75,    75,    75,    75,    75,    28,    75,    22,    21,
      27,    75,     9,    75,    21,    26,    21,    20,    21,    21,
       9,    21,   100,    21,    28,    75,    23,    28,    28,    75,
      75,    10,    98,    74,    98,    74,    69,    72,    21,    27,
      23,    23,    28,    23,    28,    75,    28,    75,    23,    28,
      75,    50,    26,    21,    69,    72,     9,    23,    75,    23,
      75,    23,    28,    23,    23,    28,    23,    28,    75,    98,
      70,    26,    23,    23,    23,    75,    23,    75,    23,    75,
      23,    28,    21,    23,    23,    23,    23,    75,    98,    23
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    66,    67,    67,    67,    67,    68,    69,    69,    69,
      69,    69,    69,    69,    69,    69,    69,    69,    69,    69,
      70,    70,    70,    70,    70,    70,    71,    72,    72,    73,
      73,    74,    75,    75,    75,    75,    75,    75,    76,    76,
      77,    77,    77,    77,    77,    77,    78,    78,    78,    78,
      79,    79,    79,    79,    79,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    81,    81,    81,    81,    81,    81,    81,    82,    82,
      83,    83,    84,    85,    85,    86,    87,    88,    88,    88,
      88,    89,    89,    90,    90,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    92,    92,    93,
      94,    95,    96,    96,    97,    97,    98,    98,    99,    99,
      99,    99,   100,   100,   101,   101
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     3,     1,     0,     0,     2,     1,     1,
       1,     1,     2,     2,     2,     1,     2,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     0,     3,     2,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     3,     3,     3,     3,     2,     2,     2,     2,
       2,     2,     3,     2,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       3,     2,     4,     1,     3,     2,     2,     1,     3,     3,
       5,     4,     3,     1,     3,     3,     5,     6,     7,     4,
       5,     6,     4,     5,     6,     4,     4,     6,     7,     8,
       5,     6,     7,     5,     6,     7,     5,     5,     7,     9,
       5,     7,     1,     4,     1,     4,     1,     1,     6,     5,
       6,     5,     1,     3,     1,     2
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
  case 4: /* statement: error  */
#line 136 "bello.y"
            { yyerrok; }
#line 1809 "y.tab.c"
    break;

  case 6: /* execute_statement: %empty  */
#line 141 "bello.y"
    { 
        //printf("statement type: %d\n",$<stmt>0->typ); 
        exctStmt(envr, (yyvsp[0].stmt)); 
    }
#line 1818 "y.tab.c"
    break;

  case 7: /* single_statement: expression_statement SEMICOLON  */
#line 148 "bello.y"
                                     { (yyval.stmt)=(yyvsp[-1].stmt); }
#line 1824 "y.tab.c"
    break;

  case 8: /* single_statement: if_statement  */
#line 149 "bello.y"
                   { (yyval.stmt)=(yyvsp[0].stmt); }
#line 1830 "y.tab.c"
    break;

  case 9: /* single_statement: for_statement  */
#line 150 "bello.y"
                    { (yyval.stmt)=(yyvsp[0].stmt); }
#line 1836 "y.tab.c"
    break;

  case 10: /* single_statement: while_statement  */
#line 151 "bello.y"
                      { (yyval.stmt)=(yyvsp[0].stmt); }
#line 1842 "y.tab.c"
    break;

  case 11: /* single_statement: do_while_statement  */
#line 152 "bello.y"
                         { (yyval.stmt)=(yyvsp[0].stmt); }
#line 1848 "y.tab.c"
    break;

  case 12: /* single_statement: break_statement SEMICOLON  */
#line 153 "bello.y"
                               { (yyval.stmt)=(yyvsp[-1].stmt); }
#line 1854 "y.tab.c"
    break;

  case 13: /* single_statement: continue_statement SEMICOLON  */
#line 154 "bello.y"
                                   { (yyval.stmt)=(yyvsp[-1].stmt); }
#line 1860 "y.tab.c"
    break;

  case 14: /* single_statement: return_statement SEMICOLON  */
#line 155 "bello.y"
                                 { (yyval.stmt)=(yyvsp[-1].stmt); }
#line 1866 "y.tab.c"
    break;

  case 15: /* single_statement: function_define_statement  */
#line 156 "bello.y"
                                { (yyval.stmt)=(yyvsp[0].stmt); }
#line 1872 "y.tab.c"
    break;

  case 16: /* single_statement: null_statement SEMICOLON  */
#line 157 "bello.y"
                               { (yyval.stmt)=(yyvsp[-1].stmt); }
#line 1878 "y.tab.c"
    break;

  case 17: /* single_statement: var_statement SEMICOLON  */
#line 158 "bello.y"
                              { (yyval.stmt) = (yyvsp[-1].stmt); }
#line 1884 "y.tab.c"
    break;

  case 18: /* single_statement: global_statement SEMICOLON  */
#line 159 "bello.y"
                                 { (yyval.stmt) = (yyvsp[-1].stmt); }
#line 1890 "y.tab.c"
    break;

  case 19: /* single_statement: error  */
#line 161 "bello.y"
    { 
        //system("pause");  
        (yyval.stmt)=bldNllStmt(); 
        //printf("statement error. %d : %s\n", $$->typ, yytext); 
        yyclearin; 
        yyerrok; 
    }
#line 1902 "y.tab.c"
    break;

  case 26: /* null_statement: %empty  */
#line 181 "bello.y"
      { (yyval.stmt)=bldNllStmt(); }
#line 1908 "y.tab.c"
    break;

  case 27: /* statement_block: LEFT_BRACE block_list RIGHT_BRACE  */
#line 184 "bello.y"
                                        { (yyval.stmt)=(yyvsp[-1].stmt); }
#line 1914 "y.tab.c"
    break;

  case 28: /* statement_block: LEFT_BRACE RIGHT_BRACE  */
#line 185 "bello.y"
                             { (yyval.stmt)=bldNllStmt(); }
#line 1920 "y.tab.c"
    break;

  case 29: /* block_list: single_statement  */
#line 189 "bello.y"
    { 
        (yyval.stmt)=bldStmtBlk(); 
        stmtBlkAdd((yyval.stmt), (yyvsp[0].stmt)); 
    }
#line 1929 "y.tab.c"
    break;

  case 30: /* block_list: block_list single_statement  */
#line 194 "bello.y"
    {
        (yyval.stmt) = stmtBlkAdd((yyvsp[-1].stmt) ,(yyvsp[0].stmt));
    }
#line 1937 "y.tab.c"
    break;

  case 31: /* expression_statement: expression  */
#line 201 "bello.y"
    { 
        (yyval.stmt)=bldExpStmt((yyvsp[0].exp)); 
    }
#line 1945 "y.tab.c"
    break;

  case 34: /* expression: unary_expression  */
#line 208 "bello.y"
                       { (yyval.exp)=(yyvsp[0].exp); }
#line 1951 "y.tab.c"
    break;

  case 35: /* expression: binary_expression  */
#line 209 "bello.y"
                        { (yyval.exp)=(yyvsp[0].exp); }
#line 1957 "y.tab.c"
    break;

  case 36: /* expression: array_expression  */
#line 210 "bello.y"
                       { (yyval.exp)=(yyvsp[0].exp); }
#line 1963 "y.tab.c"
    break;

  case 37: /* expression: new_array_expression  */
#line 211 "bello.y"
                           { (yyval.exp) = (yyvsp[0].exp); }
#line 1969 "y.tab.c"
    break;

  case 40: /* assign_expression: lvalue_expression ASSIGN expression  */
#line 218 "bello.y"
                                          { (yyval.exp)=bldAsgnExp((yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 1975 "y.tab.c"
    break;

  case 41: /* assign_expression: lvalue_expression ADD_ASSIGN expression  */
#line 219 "bello.y"
                                              { (yyval.exp)=bldAsgnExp((yyvsp[-2].exp), bldBnrExp(ADD, (yyvsp[-2].exp), (yyvsp[0].exp))); }
#line 1981 "y.tab.c"
    break;

  case 42: /* assign_expression: lvalue_expression SUB_ASSIGN expression  */
#line 220 "bello.y"
                                              { (yyval.exp)=bldAsgnExp((yyvsp[-2].exp), bldBnrExp(SUB, (yyvsp[-2].exp), (yyvsp[0].exp))); }
#line 1987 "y.tab.c"
    break;

  case 43: /* assign_expression: lvalue_expression MUL_ASSIGN expression  */
#line 221 "bello.y"
                                              { (yyval.exp)=bldAsgnExp((yyvsp[-2].exp), bldBnrExp(MUL, (yyvsp[-2].exp), (yyvsp[0].exp))); }
#line 1993 "y.tab.c"
    break;

  case 44: /* assign_expression: lvalue_expression DIV_ASSIGN expression  */
#line 222 "bello.y"
                                              { (yyval.exp)=bldAsgnExp((yyvsp[-2].exp), bldBnrExp(DIV, (yyvsp[-2].exp), (yyvsp[0].exp))); }
#line 1999 "y.tab.c"
    break;

  case 45: /* assign_expression: lvalue_expression MOD_ASSIGN expression  */
#line 223 "bello.y"
                                              { (yyval.exp)=bldAsgnExp((yyvsp[-2].exp), bldBnrExp(MOD, (yyvsp[-2].exp), (yyvsp[0].exp))); }
#line 2005 "y.tab.c"
    break;

  case 46: /* self_operation_expression: INCREMENT lvalue_expression  */
#line 227 "bello.y"
                                  { (yyval.exp)=bldUnrExp(PREFIX_INCREMENT, (yyvsp[0].exp)); }
#line 2011 "y.tab.c"
    break;

  case 47: /* self_operation_expression: DECREMENT lvalue_expression  */
#line 228 "bello.y"
                                  { (yyval.exp)=bldUnrExp(PREFIX_DECREMENT, (yyvsp[0].exp)); }
#line 2017 "y.tab.c"
    break;

  case 48: /* self_operation_expression: lvalue_expression INCREMENT  */
#line 229 "bello.y"
                                  { (yyval.exp)=bldUnrExp(SUFFIX_INCREMENT, (yyvsp[-1].exp)); }
#line 2023 "y.tab.c"
    break;

  case 49: /* self_operation_expression: lvalue_expression DECREMENT  */
#line 230 "bello.y"
                                  { (yyval.exp)=bldUnrExp(SUFFIX_DECREMENT, (yyvsp[-1].exp)); }
#line 2029 "y.tab.c"
    break;

  case 50: /* unary_expression: SUB expression  */
#line 233 "bello.y"
                                      { (yyval.exp) = bldUnrExp(SUB, (yyvsp[0].exp)); }
#line 2035 "y.tab.c"
    break;

  case 51: /* unary_expression: ADD expression  */
#line 234 "bello.y"
                                     { (yyval.exp) = bldUnrExp(ADD, (yyvsp[0].exp)); }
#line 2041 "y.tab.c"
    break;

  case 52: /* unary_expression: LEFT_PAREN expression RIGHT_PAREN  */
#line 235 "bello.y"
                                        { (yyval.exp)=(yyvsp[-1].exp); }
#line 2047 "y.tab.c"
    break;

  case 53: /* unary_expression: NOT expression  */
#line 236 "bello.y"
                     { (yyval.exp)=bldUnrExp(NOT, (yyvsp[0].exp)); }
#line 2053 "y.tab.c"
    break;

  case 54: /* unary_expression: BIT_NOT expression  */
#line 237 "bello.y"
                         { (yyval.exp)=bldUnrExp(BIT_NOT, (yyvsp[0].exp)); }
#line 2059 "y.tab.c"
    break;

  case 55: /* binary_expression: expression ADD expression  */
#line 240 "bello.y"
                                { (yyval.exp)=bldBnrExp(ADD, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2065 "y.tab.c"
    break;

  case 56: /* binary_expression: expression SUB expression  */
#line 241 "bello.y"
                                { (yyval.exp)=bldBnrExp(SUB, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2071 "y.tab.c"
    break;

  case 57: /* binary_expression: expression MUL expression  */
#line 242 "bello.y"
                                { (yyval.exp)=bldBnrExp(MUL, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2077 "y.tab.c"
    break;

  case 58: /* binary_expression: expression DIV expression  */
#line 243 "bello.y"
                                { (yyval.exp)=bldBnrExp(DIV, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2083 "y.tab.c"
    break;

  case 59: /* binary_expression: expression MOD expression  */
#line 244 "bello.y"
                                { (yyval.exp)=bldBnrExp(MOD, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2089 "y.tab.c"
    break;

  case 60: /* binary_expression: expression AND expression  */
#line 245 "bello.y"
                                { (yyval.exp)=bldBnrExp(AND, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2095 "y.tab.c"
    break;

  case 61: /* binary_expression: expression OR expression  */
#line 246 "bello.y"
                               { (yyval.exp)=bldBnrExp(OR, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2101 "y.tab.c"
    break;

  case 62: /* binary_expression: expression EQ expression  */
#line 247 "bello.y"
                               { (yyval.exp)=bldBnrExp(EQ, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2107 "y.tab.c"
    break;

  case 63: /* binary_expression: expression NE expression  */
#line 248 "bello.y"
                               { (yyval.exp)=bldBnrExp(NE, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2113 "y.tab.c"
    break;

  case 64: /* binary_expression: expression GT expression  */
#line 249 "bello.y"
                               { (yyval.exp)=bldBnrExp(GT, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2119 "y.tab.c"
    break;

  case 65: /* binary_expression: expression GE expression  */
#line 250 "bello.y"
                               { (yyval.exp)=bldBnrExp(GE, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2125 "y.tab.c"
    break;

  case 66: /* binary_expression: expression LT expression  */
#line 251 "bello.y"
                               { (yyval.exp)=bldBnrExp(LT, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2131 "y.tab.c"
    break;

  case 67: /* binary_expression: expression LE expression  */
#line 252 "bello.y"
                               { (yyval.exp)=bldBnrExp(LE, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2137 "y.tab.c"
    break;

  case 68: /* binary_expression: expression BIT_AND expression  */
#line 253 "bello.y"
                                    { (yyval.exp)=bldBnrExp(BIT_AND, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2143 "y.tab.c"
    break;

  case 69: /* binary_expression: expression BIT_OR expression  */
#line 254 "bello.y"
                                   { (yyval.exp)=bldBnrExp(BIT_OR, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2149 "y.tab.c"
    break;

  case 70: /* binary_expression: expression BIT_XOR expression  */
#line 255 "bello.y"
                                    { (yyval.exp)=bldBnrExp(BIT_XOR, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2155 "y.tab.c"
    break;

  case 71: /* value_expression: INT_VALUE  */
#line 259 "bello.y"
                { (yyval.exp)=bldCnstIntExp((yyvsp[0].intVl)); /*printf("Get data: %d\n",$1);*/ }
#line 2161 "y.tab.c"
    break;

  case 72: /* value_expression: FLOAT_VALUE  */
#line 260 "bello.y"
                  { (yyval.exp)=bldCnstFltExp((yyvsp[0].fltVl)); }
#line 2167 "y.tab.c"
    break;

  case 73: /* value_expression: BOOLEAN_VALUE  */
#line 261 "bello.y"
                    { (yyval.exp)=bldCnstBlnExp((yyvsp[0].blnVl)); }
#line 2173 "y.tab.c"
    break;

  case 74: /* value_expression: STRING_VALUE  */
#line 262 "bello.y"
                   { (yyval.exp)=bldCnstStrExp((yyvsp[0].strVl)); }
#line 2179 "y.tab.c"
    break;

  case 75: /* value_expression: NULL_VALUE  */
#line 263 "bello.y"
                 { (yyval.exp)=bldCnstNllExp(); }
#line 2185 "y.tab.c"
    break;

  case 78: /* lvalue_expression: IDENTIFER  */
#line 268 "bello.y"
                { (yyval.exp)= bldLvlExp(bldVrbExp((yyvsp[0].idtf))); }
#line 2191 "y.tab.c"
    break;

  case 79: /* lvalue_expression: lvalue_expression evaluate_list  */
#line 270 "bello.y"
    { 
        (yyval.exp)=(yyvsp[-1].exp); 
        bldLvlExpAdd((yyvsp[-1].exp), (yyvsp[0].evlLst)); 
    }
#line 2200 "y.tab.c"
    break;

  case 80: /* array_expression: LEFT_QUAD element_list RIGHT_QUAD  */
#line 278 "bello.y"
    {
        (yyval.exp)= bldArrExp((yyvsp[-1].elmtLst));
    }
#line 2208 "y.tab.c"
    break;

  case 81: /* array_expression: LEFT_QUAD RIGHT_QUAD  */
#line 282 "bello.y"
    {
        (yyval.exp)= bldArrExp(bldElmtLst());
    }
#line 2216 "y.tab.c"
    break;

  case 82: /* new_array_expression: NEW_ARRAY LEFT_PAREN expression RIGHT_PAREN  */
#line 288 "bello.y"
    {
        (yyval.exp) = bldNewArrExp((yyvsp[-1].exp));
    }
#line 2224 "y.tab.c"
    break;

  case 83: /* element_list: expression  */
#line 294 "bello.y"
    { 
        (yyval.elmtLst)= bldElmtLst(); 
        elmtLstAdd((yyval.elmtLst), (yyvsp[0].exp)); 
    }
#line 2233 "y.tab.c"
    break;

  case 84: /* element_list: element_list COMMA expression  */
#line 299 "bello.y"
    {  
        (yyval.elmtLst)=(yyvsp[-2].elmtLst);  
        elmtLstAdd((yyval.elmtLst), (yyvsp[0].exp)); 
    }
#line 2242 "y.tab.c"
    break;

  case 85: /* var_statement: VAR assign_list  */
#line 306 "bello.y"
                      { (yyval.stmt)=bldVarStmt((yyvsp[0].asgnLst)); }
#line 2248 "y.tab.c"
    break;

  case 86: /* global_statement: GLOBAL assign_list  */
#line 309 "bello.y"
                         { (yyval.stmt)=bldGlbStmt((yyvsp[0].asgnLst)); }
#line 2254 "y.tab.c"
    break;

  case 87: /* assign_list: IDENTIFER  */
#line 313 "bello.y"
    {
        (yyval.asgnLst)= bldAsgnLst();
        asgnLstAdd((yyval.asgnLst), bldVrbExp((yyvsp[0].idtf)), bldNllExp());
    }
#line 2263 "y.tab.c"
    break;

  case 88: /* assign_list: IDENTIFER ASSIGN expression  */
#line 318 "bello.y"
    {
        (yyval.asgnLst)= bldAsgnLst();
        asgnLstAdd((yyval.asgnLst), bldVrbExp((yyvsp[-2].idtf)), (yyvsp[0].exp));
    }
#line 2272 "y.tab.c"
    break;

  case 89: /* assign_list: assign_list COMMA IDENTIFER  */
#line 323 "bello.y"
    {
        (yyval.asgnLst)=(yyvsp[-2].asgnLst);
        asgnLstAdd((yyval.asgnLst), bldVrbExp((yyvsp[0].idtf)), bldNllExp());
    }
#line 2281 "y.tab.c"
    break;

  case 90: /* assign_list: assign_list COMMA IDENTIFER ASSIGN expression  */
#line 328 "bello.y"
    {
        (yyval.asgnLst)=(yyvsp[-4].asgnLst);
        asgnLstAdd((yyval.asgnLst), bldVrbExp((yyvsp[-2].idtf)), (yyvsp[0].exp));
    }
#line 2290 "y.tab.c"
    break;

  case 91: /* function_expression: IDENTIFER LEFT_PAREN argument_list RIGHT_PAREN  */
#line 339 "bello.y"
    {
        (yyval.exp)=bldFcnExp((yyvsp[-3].idtf), (yyvsp[-1].argLst));
    }
#line 2298 "y.tab.c"
    break;

  case 92: /* function_expression: IDENTIFER LEFT_PAREN RIGHT_PAREN  */
#line 343 "bello.y"
    {
        (yyval.exp)=bldFcnExp((yyvsp[-2].idtf), bldArgLst());
    }
#line 2306 "y.tab.c"
    break;

  case 93: /* argument_list: expression  */
#line 349 "bello.y"
    {
        (yyval.argLst)=bldArgLst();
        argLstAdd((yyval.argLst), (yyvsp[0].exp));
    }
#line 2315 "y.tab.c"
    break;

  case 94: /* argument_list: argument_list COMMA expression  */
#line 354 "bello.y"
    {
        (yyval.argLst)=(yyvsp[-2].argLst);
        argLstAdd((yyval.argLst), (yyvsp[0].exp));
    }
#line 2324 "y.tab.c"
    break;

  case 95: /* evaluate_list: LEFT_QUAD expression RIGHT_QUAD  */
#line 362 "bello.y"
    {
        (yyval.evlLst) = bldAcsLst();
        acsLstIdxAdd((yyval.evlLst), (yyvsp[-1].exp));
    }
#line 2333 "y.tab.c"
    break;

  case 96: /* evaluate_list: LEFT_QUAD expression COLON expression RIGHT_QUAD  */
#line 367 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-3].exp), (yyvsp[-1].exp), bldCnstIntExp(1));
    }
#line 2342 "y.tab.c"
    break;

  case 97: /* evaluate_list: LEFT_QUAD expression COLON expression COLON RIGHT_QUAD  */
#line 372 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-4].exp), (yyvsp[-2].exp), bldCnstIntExp(1));
    }
#line 2351 "y.tab.c"
    break;

  case 98: /* evaluate_list: LEFT_QUAD expression COLON expression COLON expression RIGHT_QUAD  */
#line 377 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-5].exp), (yyvsp[-3].exp), (yyvsp[-1].exp));
    }
#line 2360 "y.tab.c"
    break;

  case 99: /* evaluate_list: LEFT_QUAD expression COLON RIGHT_QUAD  */
#line 382 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-2].exp), bldCnstIntExp(-1), bldCnstIntExp(1));
    }
#line 2369 "y.tab.c"
    break;

  case 100: /* evaluate_list: LEFT_QUAD expression COLON COLON RIGHT_QUAD  */
#line 387 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-3].exp), bldCnstIntExp(-1), bldCnstIntExp(1));
    }
#line 2378 "y.tab.c"
    break;

  case 101: /* evaluate_list: LEFT_QUAD expression COLON COLON expression RIGHT_QUAD  */
#line 392 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-4].exp), bldCnstIntExp(-1), (yyvsp[-1].exp));
    }
#line 2387 "y.tab.c"
    break;

  case 102: /* evaluate_list: LEFT_QUAD COLON expression RIGHT_QUAD  */
#line 397 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), (yyvsp[-1].exp), bldCnstIntExp(1));
    }
#line 2396 "y.tab.c"
    break;

  case 103: /* evaluate_list: LEFT_QUAD COLON expression COLON RIGHT_QUAD  */
#line 402 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), (yyvsp[-2].exp), bldCnstIntExp(1));
    }
#line 2405 "y.tab.c"
    break;

  case 104: /* evaluate_list: LEFT_QUAD COLON expression COLON expression RIGHT_QUAD  */
#line 407 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), (yyvsp[-3].exp), (yyvsp[-1].exp));
    }
#line 2414 "y.tab.c"
    break;

  case 105: /* evaluate_list: LEFT_QUAD COLON COLON RIGHT_QUAD  */
#line 412 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), bldCnstIntExp(-1), bldCnstIntExp(1));
    }
#line 2423 "y.tab.c"
    break;

  case 106: /* evaluate_list: evaluate_list LEFT_QUAD expression RIGHT_QUAD  */
#line 417 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-3].evlLst);
        acsLstIdxAdd((yyval.evlLst),(yyvsp[-1].exp));
    }
#line 2432 "y.tab.c"
    break;

  case 107: /* evaluate_list: evaluate_list LEFT_QUAD expression COLON expression RIGHT_QUAD  */
#line 422 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-5].evlLst);
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-3].exp), (yyvsp[-1].exp), bldCnstIntExp(1));
    }
#line 2441 "y.tab.c"
    break;

  case 108: /* evaluate_list: evaluate_list LEFT_QUAD expression COLON expression COLON RIGHT_QUAD  */
#line 427 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-6].evlLst);
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-4].exp), (yyvsp[-2].exp), bldCnstIntExp(1));
    }
#line 2450 "y.tab.c"
    break;

  case 109: /* evaluate_list: evaluate_list LEFT_QUAD expression COLON expression COLON expression RIGHT_QUAD  */
#line 432 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-7].evlLst);
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-5].exp), (yyvsp[-3].exp), (yyvsp[-1].exp));
    }
#line 2459 "y.tab.c"
    break;

  case 110: /* evaluate_list: evaluate_list LEFT_QUAD expression COLON RIGHT_QUAD  */
#line 437 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-4].evlLst);
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-2].exp), bldCnstIntExp(-1), bldCnstIntExp(1));
    }
#line 2468 "y.tab.c"
    break;

  case 111: /* evaluate_list: evaluate_list LEFT_QUAD expression COLON COLON RIGHT_QUAD  */
#line 442 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-5].evlLst);
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-3].exp), bldCnstIntExp(-1), bldCnstIntExp(1));
    }
#line 2477 "y.tab.c"
    break;

  case 112: /* evaluate_list: evaluate_list LEFT_QUAD expression COLON COLON expression RIGHT_QUAD  */
#line 447 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-6].evlLst);
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-4].exp), bldCnstIntExp(-1), (yyvsp[-1].exp));
    }
#line 2486 "y.tab.c"
    break;

  case 113: /* evaluate_list: evaluate_list LEFT_QUAD COLON expression RIGHT_QUAD  */
#line 452 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-4].evlLst);
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), (yyvsp[-1].exp), bldCnstIntExp(1));
    }
#line 2495 "y.tab.c"
    break;

  case 114: /* evaluate_list: evaluate_list LEFT_QUAD COLON expression COLON RIGHT_QUAD  */
#line 457 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-5].evlLst);
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), (yyvsp[-2].exp), bldCnstIntExp(1));
    }
#line 2504 "y.tab.c"
    break;

  case 115: /* evaluate_list: evaluate_list LEFT_QUAD COLON expression COLON expression RIGHT_QUAD  */
#line 462 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-6].evlLst);
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), (yyvsp[-3].exp), (yyvsp[-1].exp));
    }
#line 2513 "y.tab.c"
    break;

  case 116: /* evaluate_list: evaluate_list LEFT_QUAD COLON COLON RIGHT_QUAD  */
#line 467 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-4].evlLst);
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), bldCnstIntExp(-1), bldCnstIntExp(1));
    }
#line 2522 "y.tab.c"
    break;

  case 117: /* if_statement: IF LEFT_PAREN expression RIGHT_PAREN structure_statement  */
#line 485 "bello.y"
    {
        (yyval.stmt)=bldIfStmt((yyvsp[-2].exp),(yyvsp[0].stmt));
    }
#line 2530 "y.tab.c"
    break;

  case 118: /* if_statement: IF LEFT_PAREN expression RIGHT_PAREN structure_statement ELSE structure_statement  */
#line 489 "bello.y"
    {
        (yyval.stmt)=bldIfElsStmt((yyvsp[-4].exp), (yyvsp[-2].stmt), (yyvsp[0].stmt));
    }
#line 2538 "y.tab.c"
    break;

  case 119: /* for_statement: FOR LEFT_PAREN single_statement_no_semicolon SEMICOLON expression_statement SEMICOLON single_statement_no_semicolon RIGHT_PAREN structure_statement  */
#line 495 "bello.y"
    {
        (yyval.stmt)= bldForStmt((yyvsp[-6].stmt), (yyvsp[-4].stmt), (yyvsp[-2].stmt), (yyvsp[0].stmt));  
    }
#line 2546 "y.tab.c"
    break;

  case 120: /* while_statement: WHILE LEFT_PAREN expression_statement RIGHT_PAREN structure_statement  */
#line 501 "bello.y"
    {
        (yyval.stmt)= bldWhlStmt((yyvsp[-2].stmt), (yyvsp[0].stmt));
    }
#line 2554 "y.tab.c"
    break;

  case 121: /* do_while_statement: DO structure_statement WHILE LEFT_PAREN expression_statement RIGHT_PAREN SEMICOLON  */
#line 507 "bello.y"
    {
        (yyval.stmt)= bldDoWhlStmt((yyvsp[-2].stmt), (yyvsp[-5].stmt));
    }
#line 2562 "y.tab.c"
    break;

  case 122: /* break_statement: BREAK  */
#line 512 "bello.y"
            { (yyval.stmt)= bldBrkStmt(bldCnstIntExp(1)); }
#line 2568 "y.tab.c"
    break;

  case 123: /* break_statement: BREAK LEFT_PAREN expression RIGHT_PAREN  */
#line 513 "bello.y"
                                              { (yyval.stmt)= bldBrkStmt((yyvsp[-1].exp)); }
#line 2574 "y.tab.c"
    break;

  case 124: /* continue_statement: CONTINUE  */
#line 516 "bello.y"
               { (yyval.stmt)= bldCntnStmt(bldCnstIntExp(1)); }
#line 2580 "y.tab.c"
    break;

  case 125: /* continue_statement: CONTINUE LEFT_PAREN expression RIGHT_PAREN  */
#line 517 "bello.y"
                                                 { (yyval.stmt)= bldCntnStmt((yyvsp[-1].exp)); }
#line 2586 "y.tab.c"
    break;

  case 128: /* function_define_statement: FUNC IDENTIFER LEFT_PAREN parameter_list RIGHT_PAREN statement_block  */
#line 525 "bello.y"
    {
        struct FcnStrc* fcn;

        fcn=bldFcn((yyvsp[-4].idtf), (yyvsp[-2].prmLst), (yyvsp[0].stmt));

        (yyval.stmt) = bldFcnStmt(fcn);
    }
#line 2598 "y.tab.c"
    break;

  case 129: /* function_define_statement: FUNC IDENTIFER LEFT_PAREN RIGHT_PAREN statement_block  */
#line 533 "bello.y"
    {
        struct FcnStrc *fcn;

        fcn=bldFcn((yyvsp[-3].idtf), bldPrmLst(), (yyvsp[0].stmt));

        (yyval.stmt) = bldFcnStmt(fcn);
    }
#line 2610 "y.tab.c"
    break;

  case 130: /* function_define_statement: FUNC IDENTIFER LEFT_PAREN parameter_list RIGHT_PAREN single_statement  */
#line 541 "bello.y"
    {
        struct FcnStrc* fcn;

        fcn=bldFcn((yyvsp[-4].idtf), (yyvsp[-2].prmLst), (yyvsp[0].stmt));

        (yyval.stmt) = bldFcnStmt(fcn);
    }
#line 2622 "y.tab.c"
    break;

  case 131: /* function_define_statement: FUNC IDENTIFER LEFT_PAREN RIGHT_PAREN single_statement  */
#line 549 "bello.y"
    {
        struct FcnStrc *fcn;

        fcn=bldFcn((yyvsp[-3].idtf), bldPrmLst(), (yyvsp[0].stmt));

        (yyval.stmt) = bldFcnStmt(fcn);
    }
#line 2634 "y.tab.c"
    break;

  case 132: /* parameter_list: IDENTIFER  */
#line 560 "bello.y"
    {
        (yyval.prmLst) = bldPrmLst();
        prmLstAdd((yyval.prmLst), bldVrbExp((yyvsp[0].idtf)));
    }
#line 2643 "y.tab.c"
    break;

  case 133: /* parameter_list: parameter_list COMMA IDENTIFER  */
#line 565 "bello.y"
    { 
        (yyval.prmLst)=(yyvsp[-2].prmLst);  
        prmLstAdd((yyval.prmLst), bldVrbExp((yyvsp[0].idtf)));
    }
#line 2652 "y.tab.c"
    break;

  case 134: /* return_statement: RETURN  */
#line 571 "bello.y"
             { (yyval.stmt)=bldRtnStmt(NULL); }
#line 2658 "y.tab.c"
    break;

  case 135: /* return_statement: RETURN expression  */
#line 572 "bello.y"
                        { (yyval.stmt)=bldRtnStmt((yyvsp[0].exp)); }
#line 2664 "y.tab.c"
    break;


#line 2668 "y.tab.c"

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

#line 575 "bello.y"


int main(int argc, char * argv[])
{

    //创建全局环境

    //struct EnvrStrc* glbEnvr = new EnvrStrc;

    //envr.push_back(glbEnvr);

    initGlbEnvr(envr);

    //可以提供代码文件供读取

    FILE *f;

    extern FILE* yyin;

    if (argc==2)
    {
        f= fopen(argv[1],"r");
        yyin= f;
    }

    yyparse();
}


