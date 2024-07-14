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
#define YYFINAL  84
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1348

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  66
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  36
/* YYNRULES -- Number of rules.  */
#define YYNRULES  135
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  252

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

#define YYPACT_NINF (-138)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-27)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     223,    29,  -138,  -138,  -138,  -138,  -138,    15,     4,     4,
     888,   522,   284,   888,   888,   888,   888,    24,    24,    18,
      23,    28,   345,    30,    38,    33,   888,    39,    60,  -138,
      35,  -138,    36,  1252,  -138,  -138,  -138,  -138,  -138,  -138,
       9,  -138,  -138,    40,    41,  -138,  -138,  -138,  -138,  -138,
      42,    45,  -138,    46,   551,    54,    47,    47,   923,  -138,
    1252,    13,  -138,  -138,  -138,   406,  -138,  -138,  -138,  -138,
    -138,    43,    43,   888,   124,   888,  -138,  -138,    25,   888,
     888,    55,  1252,   888,  -138,   223,  -138,   223,  -138,   888,
     888,   888,   888,   888,   888,   888,   888,   888,   888,   888,
     888,   888,   888,   888,   888,   888,   888,   888,   888,   888,
     888,   583,  -138,  -138,    56,  -138,  -138,  -138,  -138,  -138,
    -138,  1252,    -7,   888,    94,  -138,  -138,   888,  -138,  -138,
     944,    78,  -138,  -138,  -138,  -138,  -138,  -138,    84,    89,
     965,   986,     6,  1007,  -138,  -138,    14,    14,  -138,  -138,
    -138,    22,    22,    22,    22,    22,    22,  1286,  1269,   286,
    1303,   225,  1252,  1252,  1252,  1252,  1252,  1252,   612,  1026,
     644,  -138,   888,  1252,   101,  1252,   345,   888,   345,   888,
    -138,  -138,  -138,   345,     7,  -138,    91,  1045,  -138,   461,
     673,  1064,  1252,   888,    65,    90,  -138,    97,  -138,  -138,
     345,   110,  -138,  -138,   705,  -138,   734,  1083,    98,  1102,
    -138,   490,  1252,   345,   124,    99,  -138,  -138,  -138,  -138,
    1140,  -138,  1159,  -138,   766,  -138,  -138,   795,  -138,   827,
    1121,  -138,   102,  -138,  -138,  -138,  -138,  1178,  -138,  1197,
    -138,  1216,  -138,   856,   345,  -138,  -138,  -138,  -138,  1235,
    -138,  -138
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    19,    71,    73,    72,    74,    75,    78,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   124,   122,     0,   134,     0,     0,     6,
       0,     6,     0,    31,    33,    38,    39,    34,    35,    32,
      77,    36,    37,     0,     0,    76,     8,     9,    10,    11,
       0,     0,    15,     0,     0,    87,    85,    86,     0,    81,
      83,     0,    19,    28,    29,     0,    51,    50,    53,    54,
      78,    46,    47,     0,    26,     0,   126,   127,     0,     0,
       0,     0,   135,     0,     1,     0,    16,     0,     7,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    48,    49,    79,    17,    18,    12,    13,    14,
      92,    93,     0,     0,     0,    52,    80,     0,    27,    30,
       0,     0,    25,    20,    21,    22,    23,    24,     0,     0,
       0,     0,     0,     0,     2,     3,    55,    56,    57,    58,
      59,    62,    63,    64,    65,    66,    67,    60,    61,    68,
      69,    70,    40,    41,    42,    43,    44,    45,     0,     0,
       0,    91,     0,    88,    89,    84,     0,     0,     0,     0,
     125,   123,   132,     0,     0,    82,     0,     0,    95,     0,
       0,     0,    94,     0,   117,     0,   120,     0,   131,   129,
       0,     0,   105,   102,     0,    99,     0,     0,     0,     0,
     106,     0,    90,     0,    26,     0,   130,   128,   133,   103,
       0,   100,     0,    96,     0,   116,   113,     0,   110,     0,
       0,   118,     0,   121,   104,   101,    97,     0,   114,     0,
     111,     0,   107,     0,     0,    98,   115,   112,   108,     0,
     119,   109
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -138,   -55,    95,    37,   -94,   -72,    21,  -138,   -67,   -10,
    -138,  -138,  -138,  -138,  -138,  -138,     0,  -138,  -138,  -138,
    -138,  -138,   123,  -138,  -138,  -138,   -65,   -64,   -63,   -62,
    -138,  -138,  -137,  -138,  -138,  -138
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    28,    85,    76,   131,    30,    77,    65,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    61,
      43,    44,    56,    45,   122,   114,    46,    47,    48,    49,
      50,    51,    78,    52,   184,    53
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      58,    60,   132,    66,    67,    68,    69,   133,   138,   134,
     135,   136,   137,    55,   171,   182,    82,    71,    72,   105,
     172,    31,   106,   107,   108,   109,   110,   183,   200,    -4,
     144,   111,   145,    70,   201,    54,   126,    29,    73,   194,
     127,   196,    81,    74,   121,    91,    92,    93,    75,    64,
      79,    89,    90,    91,    92,    93,   112,   113,    80,    83,
      84,    86,    88,   130,   123,   111,   115,   116,   117,   140,
     141,   118,   119,   143,   124,   142,   231,   139,   170,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   169,   129,   174,   177,   178,    31,   250,    31,   179,
     195,   193,   197,   173,   202,   213,   214,   175,   215,   218,
     232,   225,    29,   244,    29,   233,    87,     2,     3,     4,
       5,     6,    57,     7,     0,     0,     0,     0,     0,     0,
       0,     0,   132,     0,    10,     0,    11,   133,     0,   134,
     135,   136,   137,    13,    14,     0,     0,     0,   187,     0,
     191,     0,   192,     0,     0,     0,    15,     0,     0,     0,
      16,    17,    18,    19,     0,    20,    21,    22,     0,   207,
     209,     0,     0,   212,     0,     0,     0,    27,     0,     0,
       0,     0,     0,     0,   220,     0,   222,     0,     0,     0,
       0,   230,     0,     0,   199,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   237,     0,     0,   239,     0,   241,
     198,   217,     0,    -5,     1,     0,     2,     3,     4,     5,
       6,     0,     7,   249,     8,     9,     0,   216,     0,     0,
       0,     0,     0,    10,     0,    11,     0,    12,     0,   -26,
       0,     0,    13,    14,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,    15,     0,     0,   102,    16,
      17,    18,    19,     0,    20,    21,    22,    23,    24,    25,
      26,     0,     0,     0,     0,    62,    27,     2,     3,     4,
       5,     6,     0,     7,     0,     8,     9,     0,     0,     0,
       0,     0,     0,     0,    10,     0,    11,     0,     0,    63,
     -26,     0,     0,    13,    14,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,    15,     0,     0,     0,
      16,    17,    18,    19,     0,    20,    21,    22,    23,    24,
      25,    26,     0,     0,     0,     0,    62,    27,     2,     3,
       4,     5,     6,     0,     7,     0,     8,     9,     0,     0,
       0,     0,     0,     0,     0,    10,     0,    11,     0,    12,
       0,   -26,     0,     0,    13,    14,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    15,     0,     0,
       0,    16,    17,    18,    19,     0,    20,    21,    22,    23,
      24,    25,    26,     0,     0,     0,     0,    62,    27,     2,
       3,     4,     5,     6,     0,     7,     0,     8,     9,     0,
       0,     0,     0,     0,     0,     0,    10,     0,    11,     0,
       0,   128,   -26,     0,     0,    13,    14,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    15,     0,
       0,     0,    16,    17,    18,    19,     0,    20,    21,    22,
      23,    24,    25,    26,     2,     3,     4,     5,     6,    27,
       7,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    10,     0,    11,   205,     0,     0,     0,     0,   206,
      13,    14,     0,     2,     3,     4,     5,     6,     0,     7,
       0,     0,     0,    15,     0,     0,     0,    16,    17,    18,
      10,     0,    11,   228,     0,     0,     0,     0,   229,    13,
      14,     0,     0,     0,    27,     2,     3,     4,     5,     6,
       0,     7,    15,     0,     0,     0,    16,    17,    18,     0,
       0,     0,    10,     0,    11,    59,     0,     0,     0,     0,
       0,    13,    14,    27,     2,     3,     4,     5,     6,     0,
       7,     0,     0,     0,    15,     0,     0,     0,    16,    17,
      18,    10,   120,    11,     0,     0,     0,     0,     0,     0,
      13,    14,     0,     0,     0,    27,     2,     3,     4,     5,
       6,     0,     7,    15,     0,     0,     0,    16,    17,    18,
       0,     0,     0,    10,     0,    11,     0,     0,     0,     0,
       0,   168,    13,    14,    27,     2,     3,     4,     5,     6,
       0,     7,     0,     0,     0,    15,     0,     0,     0,    16,
      17,    18,    10,     0,    11,     0,     0,     0,     0,     0,
     186,    13,    14,     0,     0,     0,    27,     2,     3,     4,
       5,     6,     0,     7,    15,     0,     0,     0,    16,    17,
      18,     0,     0,     0,    10,     0,    11,     0,     0,     0,
       0,     0,   190,    13,    14,    27,     2,     3,     4,     5,
       6,     0,     7,     0,     0,     0,    15,     0,     0,     0,
      16,    17,    18,    10,     0,    11,     0,     0,     0,     0,
       0,   208,    13,    14,     0,     0,     0,    27,     2,     3,
       4,     5,     6,     0,     7,    15,     0,     0,     0,    16,
      17,    18,     0,     0,     0,    10,     0,    11,   219,     0,
       0,     0,     0,     0,    13,    14,    27,     2,     3,     4,
       5,     6,     0,     7,     0,     0,     0,    15,     0,     0,
       0,    16,    17,    18,    10,     0,    11,   221,     0,     0,
       0,     0,     0,    13,    14,     0,     0,     0,    27,     2,
       3,     4,     5,     6,     0,     7,    15,     0,     0,     0,
      16,    17,    18,     0,     0,     0,    10,     0,    11,   236,
       0,     0,     0,     0,     0,    13,    14,    27,     2,     3,
       4,     5,     6,     0,     7,     0,     0,     0,    15,     0,
       0,     0,    16,    17,    18,    10,     0,    11,   238,     0,
       0,     0,     0,     0,    13,    14,     0,     0,     0,    27,
       2,     3,     4,     5,     6,     0,     7,    15,     0,     0,
       0,    16,    17,    18,     0,     0,     0,    10,     0,    11,
     240,     0,     0,     0,     0,     0,    13,    14,    27,     2,
       3,     4,     5,     6,     0,     7,     0,     0,     0,    15,
       0,     0,     0,    16,    17,    18,    10,     0,    11,   248,
       0,     0,     0,     0,     0,    13,    14,     0,     0,     0,
      27,     2,     3,     4,     5,     6,     0,     7,    15,     0,
       0,     0,    16,    17,    18,     0,     0,     0,    10,     0,
      11,     0,     0,     0,     0,     0,     0,    13,    14,    27,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      15,     0,     0,     0,    16,    17,    18,     0,     0,     0,
       0,     0,     0,     0,   125,     0,     0,     0,     0,     0,
       0,    27,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   176,   102,   103,   104,     0,
       0,     0,     0,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   180,   102,   103,   104,
       0,     0,     0,     0,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   181,   102,   103,
     104,     0,     0,     0,     0,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   185,   102,
     103,   104,     0,     0,     0,     0,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   188,
     102,   103,   104,     0,   189,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   203,   102,
     103,   104,     0,   204,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   210,   102,   103,
     104,     0,   211,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   223,   102,   103,   104,
       0,   224,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   226,   102,   103,   104,     0,
     227,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   242,   102,   103,   104,     0,   243,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   234,   102,   103,   104,     0,     0,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   235,   102,   103,   104,     0,     0,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   245,   102,   103,   104,     0,     0,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     246,   102,   103,   104,     0,     0,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   247,
     102,   103,   104,     0,     0,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   251,   102,
     103,   104,     0,     0,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,     0,   102,   103,
     104,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,     0,   102,   103,   104,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
       0,     0,   102,   103,   104,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,     0,     0,     0,   102,
     103,   104,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,     0,     0,     0,   102,     0,   104
};

static const yytype_int16 yycheck[] =
{
      10,    11,    74,    13,    14,    15,    16,    74,    75,    74,
      74,    74,    74,     9,    21,     9,    26,    17,    18,    10,
      27,     0,    13,    14,    15,    16,    17,    21,    21,     0,
      85,    22,    87,     9,    27,    20,    23,     0,    20,   176,
      27,   178,     9,    20,    54,    31,    32,    33,    20,    12,
      20,    29,    30,    31,    32,    33,    47,    48,    20,    20,
       0,    26,    26,    73,    10,    22,    26,    26,    26,    79,
      80,    26,    26,    83,    27,    20,   213,    52,    22,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,    65,     9,    26,    21,    85,   244,    87,    20,
     177,    10,   179,   123,    23,    50,    26,   127,    21,     9,
     214,    23,    85,    21,    87,    26,    31,     3,     4,     5,
       6,     7,     9,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   214,    -1,    20,    -1,    22,   214,    -1,   214,
     214,   214,   214,    29,    30,    -1,    -1,    -1,   168,    -1,
     170,    -1,   172,    -1,    -1,    -1,    42,    -1,    -1,    -1,
      46,    47,    48,    49,    -1,    51,    52,    53,    -1,   189,
     190,    -1,    -1,   193,    -1,    -1,    -1,    63,    -1,    -1,
      -1,    -1,    -1,    -1,   204,    -1,   206,    -1,    -1,    -1,
      -1,   211,    -1,    -1,   183,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   224,    -1,    -1,   227,    -1,   229,
     183,   200,    -1,     0,     1,    -1,     3,     4,     5,     6,
       7,    -1,     9,   243,    11,    12,    -1,   200,    -1,    -1,
      -1,    -1,    -1,    20,    -1,    22,    -1,    24,    -1,    26,
      -1,    -1,    29,    30,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    42,    -1,    -1,    43,    46,
      47,    48,    49,    -1,    51,    52,    53,    54,    55,    56,
      57,    -1,    -1,    -1,    -1,     1,    63,     3,     4,     5,
       6,     7,    -1,     9,    -1,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    20,    -1,    22,    -1,    -1,    25,
      26,    -1,    -1,    29,    30,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    42,    -1,    -1,    -1,
      46,    47,    48,    49,    -1,    51,    52,    53,    54,    55,
      56,    57,    -1,    -1,    -1,    -1,     1,    63,     3,     4,
       5,     6,     7,    -1,     9,    -1,    11,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    20,    -1,    22,    -1,    24,
      -1,    26,    -1,    -1,    29,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,
      -1,    46,    47,    48,    49,    -1,    51,    52,    53,    54,
      55,    56,    57,    -1,    -1,    -1,    -1,     1,    63,     3,
       4,     5,     6,     7,    -1,     9,    -1,    11,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    22,    -1,
      -1,    25,    26,    -1,    -1,    29,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,
      -1,    -1,    46,    47,    48,    49,    -1,    51,    52,    53,
      54,    55,    56,    57,     3,     4,     5,     6,     7,    63,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    -1,    22,    23,    -1,    -1,    -1,    -1,    28,
      29,    30,    -1,     3,     4,     5,     6,     7,    -1,     9,
      -1,    -1,    -1,    42,    -1,    -1,    -1,    46,    47,    48,
      20,    -1,    22,    23,    -1,    -1,    -1,    -1,    28,    29,
      30,    -1,    -1,    -1,    63,     3,     4,     5,     6,     7,
      -1,     9,    42,    -1,    -1,    -1,    46,    47,    48,    -1,
      -1,    -1,    20,    -1,    22,    23,    -1,    -1,    -1,    -1,
      -1,    29,    30,    63,     3,     4,     5,     6,     7,    -1,
       9,    -1,    -1,    -1,    42,    -1,    -1,    -1,    46,    47,
      48,    20,    21,    22,    -1,    -1,    -1,    -1,    -1,    -1,
      29,    30,    -1,    -1,    -1,    63,     3,     4,     5,     6,
       7,    -1,     9,    42,    -1,    -1,    -1,    46,    47,    48,
      -1,    -1,    -1,    20,    -1,    22,    -1,    -1,    -1,    -1,
      -1,    28,    29,    30,    63,     3,     4,     5,     6,     7,
      -1,     9,    -1,    -1,    -1,    42,    -1,    -1,    -1,    46,
      47,    48,    20,    -1,    22,    -1,    -1,    -1,    -1,    -1,
      28,    29,    30,    -1,    -1,    -1,    63,     3,     4,     5,
       6,     7,    -1,     9,    42,    -1,    -1,    -1,    46,    47,
      48,    -1,    -1,    -1,    20,    -1,    22,    -1,    -1,    -1,
      -1,    -1,    28,    29,    30,    63,     3,     4,     5,     6,
       7,    -1,     9,    -1,    -1,    -1,    42,    -1,    -1,    -1,
      46,    47,    48,    20,    -1,    22,    -1,    -1,    -1,    -1,
      -1,    28,    29,    30,    -1,    -1,    -1,    63,     3,     4,
       5,     6,     7,    -1,     9,    42,    -1,    -1,    -1,    46,
      47,    48,    -1,    -1,    -1,    20,    -1,    22,    23,    -1,
      -1,    -1,    -1,    -1,    29,    30,    63,     3,     4,     5,
       6,     7,    -1,     9,    -1,    -1,    -1,    42,    -1,    -1,
      -1,    46,    47,    48,    20,    -1,    22,    23,    -1,    -1,
      -1,    -1,    -1,    29,    30,    -1,    -1,    -1,    63,     3,
       4,     5,     6,     7,    -1,     9,    42,    -1,    -1,    -1,
      46,    47,    48,    -1,    -1,    -1,    20,    -1,    22,    23,
      -1,    -1,    -1,    -1,    -1,    29,    30,    63,     3,     4,
       5,     6,     7,    -1,     9,    -1,    -1,    -1,    42,    -1,
      -1,    -1,    46,    47,    48,    20,    -1,    22,    23,    -1,
      -1,    -1,    -1,    -1,    29,    30,    -1,    -1,    -1,    63,
       3,     4,     5,     6,     7,    -1,     9,    42,    -1,    -1,
      -1,    46,    47,    48,    -1,    -1,    -1,    20,    -1,    22,
      23,    -1,    -1,    -1,    -1,    -1,    29,    30,    63,     3,
       4,     5,     6,     7,    -1,     9,    -1,    -1,    -1,    42,
      -1,    -1,    -1,    46,    47,    48,    20,    -1,    22,    23,
      -1,    -1,    -1,    -1,    -1,    29,    30,    -1,    -1,    -1,
      63,     3,     4,     5,     6,     7,    -1,     9,    42,    -1,
      -1,    -1,    46,    47,    48,    -1,    -1,    -1,    20,    -1,
      22,    -1,    -1,    -1,    -1,    -1,    -1,    29,    30,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    -1,    -1,    -1,    46,    47,    48,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    21,    43,    44,    45,    -1,
      -1,    -1,    -1,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    21,    43,    44,    45,
      -1,    -1,    -1,    -1,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    21,    43,    44,
      45,    -1,    -1,    -1,    -1,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    21,    43,
      44,    45,    -1,    -1,    -1,    -1,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    23,
      43,    44,    45,    -1,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    23,    43,
      44,    45,    -1,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    23,    43,    44,
      45,    -1,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    23,    43,    44,    45,
      -1,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    23,    43,    44,    45,    -1,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    23,    43,    44,    45,    -1,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    23,    43,    44,    45,    -1,    -1,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    23,    43,    44,    45,    -1,    -1,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    23,    43,    44,    45,    -1,    -1,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      23,    43,    44,    45,    -1,    -1,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    23,
      43,    44,    45,    -1,    -1,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    23,    43,
      44,    45,    -1,    -1,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    -1,    43,    44,
      45,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    -1,    43,    44,    45,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      -1,    -1,    43,    44,    45,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    -1,    -1,    -1,    43,
      44,    45,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    -1,    -1,    -1,    43,    -1,    45
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     3,     4,     5,     6,     7,     9,    11,    12,
      20,    22,    24,    29,    30,    42,    46,    47,    48,    49,
      51,    52,    53,    54,    55,    56,    57,    63,    67,    69,
      71,    72,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    86,    87,    89,    92,    93,    94,    95,
      96,    97,    99,   101,    20,     9,    88,    88,    75,    23,
      75,    85,     1,    25,    69,    73,    75,    75,    75,    75,
       9,    82,    82,    20,    20,    20,    69,    72,    98,    20,
      20,     9,    75,    20,     0,    68,    26,    68,    26,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    43,    44,    45,    10,    13,    14,    15,    16,
      17,    22,    47,    48,    91,    26,    26,    26,    26,    26,
      21,    75,    90,    10,    27,    21,    23,    27,    25,    69,
      75,    70,    71,    74,    92,    93,    94,    95,    74,    52,
      75,    75,    20,    75,    67,    67,    75,    75,    75,    75,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    75,
      75,    75,    75,    75,    75,    75,    75,    75,    28,    75,
      22,    21,    27,    75,     9,    75,    21,    26,    21,    20,
      21,    21,     9,    21,   100,    21,    28,    75,    23,    28,
      28,    75,    75,    10,    98,    74,    98,    74,    69,    72,
      21,    27,    23,    23,    28,    23,    28,    75,    28,    75,
      23,    28,    75,    50,    26,    21,    69,    72,     9,    23,
      75,    23,    75,    23,    28,    23,    23,    28,    23,    28,
      75,    98,    70,    26,    23,    23,    23,    75,    23,    75,
      23,    75,    23,    28,    21,    23,    23,    23,    23,    75,
      98,    23
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
#line 1802 "y.tab.c"
    break;

  case 6: /* execute_statement: %empty  */
#line 141 "bello.y"
    { 
        //printf("statement type: %d\n",$<stmt>0->typ); 
        exctStmt(envr, (yyvsp[0].stmt)); 
    }
#line 1811 "y.tab.c"
    break;

  case 7: /* single_statement: expression_statement SEMICOLON  */
#line 148 "bello.y"
                                     { (yyval.stmt)=(yyvsp[-1].stmt); }
#line 1817 "y.tab.c"
    break;

  case 8: /* single_statement: if_statement  */
#line 149 "bello.y"
                   { (yyval.stmt)=(yyvsp[0].stmt); }
#line 1823 "y.tab.c"
    break;

  case 9: /* single_statement: for_statement  */
#line 150 "bello.y"
                    { (yyval.stmt)=(yyvsp[0].stmt); }
#line 1829 "y.tab.c"
    break;

  case 10: /* single_statement: while_statement  */
#line 151 "bello.y"
                      { (yyval.stmt)=(yyvsp[0].stmt); }
#line 1835 "y.tab.c"
    break;

  case 11: /* single_statement: do_while_statement  */
#line 152 "bello.y"
                         { (yyval.stmt)=(yyvsp[0].stmt); }
#line 1841 "y.tab.c"
    break;

  case 12: /* single_statement: break_statement SEMICOLON  */
#line 153 "bello.y"
                               { (yyval.stmt)=(yyvsp[-1].stmt); }
#line 1847 "y.tab.c"
    break;

  case 13: /* single_statement: continue_statement SEMICOLON  */
#line 154 "bello.y"
                                   { (yyval.stmt)=(yyvsp[-1].stmt); }
#line 1853 "y.tab.c"
    break;

  case 14: /* single_statement: return_statement SEMICOLON  */
#line 155 "bello.y"
                                 { (yyval.stmt)=(yyvsp[-1].stmt); }
#line 1859 "y.tab.c"
    break;

  case 15: /* single_statement: function_define_statement  */
#line 156 "bello.y"
                                { (yyval.stmt)=(yyvsp[0].stmt); }
#line 1865 "y.tab.c"
    break;

  case 16: /* single_statement: null_statement SEMICOLON  */
#line 157 "bello.y"
                               { (yyval.stmt)=(yyvsp[-1].stmt); }
#line 1871 "y.tab.c"
    break;

  case 17: /* single_statement: var_statement SEMICOLON  */
#line 158 "bello.y"
                              { (yyval.stmt) = (yyvsp[-1].stmt); }
#line 1877 "y.tab.c"
    break;

  case 18: /* single_statement: global_statement SEMICOLON  */
#line 159 "bello.y"
                                 { (yyval.stmt) = (yyvsp[-1].stmt); }
#line 1883 "y.tab.c"
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
#line 1895 "y.tab.c"
    break;

  case 26: /* null_statement: %empty  */
#line 181 "bello.y"
      { (yyval.stmt)=bldNllStmt(); }
#line 1901 "y.tab.c"
    break;

  case 27: /* statement_block: LEFT_BRACE block_list RIGHT_BRACE  */
#line 184 "bello.y"
                                        { (yyval.stmt)=(yyvsp[-1].stmt); }
#line 1907 "y.tab.c"
    break;

  case 28: /* statement_block: LEFT_BRACE RIGHT_BRACE  */
#line 185 "bello.y"
                             { (yyval.stmt)=bldNllStmt(); }
#line 1913 "y.tab.c"
    break;

  case 29: /* block_list: single_statement  */
#line 189 "bello.y"
    { 
        (yyval.stmt)=bldStmtBlk(); 
        stmtBlkAdd((yyval.stmt), (yyvsp[0].stmt)); 
    }
#line 1922 "y.tab.c"
    break;

  case 30: /* block_list: block_list single_statement  */
#line 194 "bello.y"
    {
        (yyval.stmt) = stmtBlkAdd((yyvsp[-1].stmt) ,(yyvsp[0].stmt));
    }
#line 1930 "y.tab.c"
    break;

  case 31: /* expression_statement: expression  */
#line 201 "bello.y"
    { 
        (yyval.stmt)=bldExpStmt((yyvsp[0].exp)); 
    }
#line 1938 "y.tab.c"
    break;

  case 34: /* expression: unary_expression  */
#line 208 "bello.y"
                       { (yyval.exp)=(yyvsp[0].exp); }
#line 1944 "y.tab.c"
    break;

  case 35: /* expression: binary_expression  */
#line 209 "bello.y"
                        { (yyval.exp)=(yyvsp[0].exp); }
#line 1950 "y.tab.c"
    break;

  case 36: /* expression: array_expression  */
#line 210 "bello.y"
                       { (yyval.exp)=(yyvsp[0].exp); }
#line 1956 "y.tab.c"
    break;

  case 37: /* expression: new_array_expression  */
#line 211 "bello.y"
                           { (yyval.exp) = (yyvsp[0].exp); }
#line 1962 "y.tab.c"
    break;

  case 40: /* assign_expression: lvalue_expression ASSIGN expression  */
#line 218 "bello.y"
                                          { (yyval.exp)=bldAsgnExp((yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 1968 "y.tab.c"
    break;

  case 41: /* assign_expression: lvalue_expression ADD_ASSIGN expression  */
#line 219 "bello.y"
                                              { (yyval.exp)=bldAsgnExp((yyvsp[-2].exp), bldBnrExp(ADD, (yyvsp[-2].exp), (yyvsp[0].exp))); }
#line 1974 "y.tab.c"
    break;

  case 42: /* assign_expression: lvalue_expression SUB_ASSIGN expression  */
#line 220 "bello.y"
                                              { (yyval.exp)=bldAsgnExp((yyvsp[-2].exp), bldBnrExp(SUB, (yyvsp[-2].exp), (yyvsp[0].exp))); }
#line 1980 "y.tab.c"
    break;

  case 43: /* assign_expression: lvalue_expression MUL_ASSIGN expression  */
#line 221 "bello.y"
                                              { (yyval.exp)=bldAsgnExp((yyvsp[-2].exp), bldBnrExp(MUL, (yyvsp[-2].exp), (yyvsp[0].exp))); }
#line 1986 "y.tab.c"
    break;

  case 44: /* assign_expression: lvalue_expression DIV_ASSIGN expression  */
#line 222 "bello.y"
                                              { (yyval.exp)=bldAsgnExp((yyvsp[-2].exp), bldBnrExp(DIV, (yyvsp[-2].exp), (yyvsp[0].exp))); }
#line 1992 "y.tab.c"
    break;

  case 45: /* assign_expression: lvalue_expression MOD_ASSIGN expression  */
#line 223 "bello.y"
                                              { (yyval.exp)=bldAsgnExp((yyvsp[-2].exp), bldBnrExp(MOD, (yyvsp[-2].exp), (yyvsp[0].exp))); }
#line 1998 "y.tab.c"
    break;

  case 46: /* self_operation_expression: INCREMENT lvalue_expression  */
#line 227 "bello.y"
                                  { (yyval.exp)=bldUnrExp(PREFIX_INCREMENT, (yyvsp[0].exp)); }
#line 2004 "y.tab.c"
    break;

  case 47: /* self_operation_expression: DECREMENT lvalue_expression  */
#line 228 "bello.y"
                                  { (yyval.exp)=bldUnrExp(PREFIX_DECREMENT, (yyvsp[0].exp)); }
#line 2010 "y.tab.c"
    break;

  case 48: /* self_operation_expression: lvalue_expression INCREMENT  */
#line 229 "bello.y"
                                  { (yyval.exp)=bldUnrExp(SUFFIX_INCREMENT, (yyvsp[-1].exp)); }
#line 2016 "y.tab.c"
    break;

  case 49: /* self_operation_expression: lvalue_expression DECREMENT  */
#line 230 "bello.y"
                                  { (yyval.exp)=bldUnrExp(SUFFIX_DECREMENT, (yyvsp[-1].exp)); }
#line 2022 "y.tab.c"
    break;

  case 50: /* unary_expression: SUB expression  */
#line 233 "bello.y"
                                      { (yyval.exp) = bldUnrExp(SUB, (yyvsp[0].exp)); }
#line 2028 "y.tab.c"
    break;

  case 51: /* unary_expression: ADD expression  */
#line 234 "bello.y"
                                     { (yyval.exp) = bldUnrExp(ADD, (yyvsp[0].exp)); }
#line 2034 "y.tab.c"
    break;

  case 52: /* unary_expression: LEFT_PAREN expression RIGHT_PAREN  */
#line 235 "bello.y"
                                        { (yyval.exp)=(yyvsp[-1].exp); }
#line 2040 "y.tab.c"
    break;

  case 53: /* unary_expression: NOT expression  */
#line 236 "bello.y"
                     { (yyval.exp)=bldUnrExp(NOT, (yyvsp[0].exp)); }
#line 2046 "y.tab.c"
    break;

  case 54: /* unary_expression: BIT_NOT expression  */
#line 237 "bello.y"
                         { (yyval.exp)=bldUnrExp(BIT_NOT, (yyvsp[0].exp)); }
#line 2052 "y.tab.c"
    break;

  case 55: /* binary_expression: expression ADD expression  */
#line 240 "bello.y"
                                { (yyval.exp)=bldBnrExp(ADD, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2058 "y.tab.c"
    break;

  case 56: /* binary_expression: expression SUB expression  */
#line 241 "bello.y"
                                { (yyval.exp)=bldBnrExp(SUB, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2064 "y.tab.c"
    break;

  case 57: /* binary_expression: expression MUL expression  */
#line 242 "bello.y"
                                { (yyval.exp)=bldBnrExp(MUL, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2070 "y.tab.c"
    break;

  case 58: /* binary_expression: expression DIV expression  */
#line 243 "bello.y"
                                { (yyval.exp)=bldBnrExp(DIV, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2076 "y.tab.c"
    break;

  case 59: /* binary_expression: expression MOD expression  */
#line 244 "bello.y"
                                { (yyval.exp)=bldBnrExp(MOD, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2082 "y.tab.c"
    break;

  case 60: /* binary_expression: expression AND expression  */
#line 245 "bello.y"
                                { (yyval.exp)=bldBnrExp(AND, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2088 "y.tab.c"
    break;

  case 61: /* binary_expression: expression OR expression  */
#line 246 "bello.y"
                               { (yyval.exp)=bldBnrExp(OR, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2094 "y.tab.c"
    break;

  case 62: /* binary_expression: expression EQ expression  */
#line 247 "bello.y"
                               { (yyval.exp)=bldBnrExp(EQ, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2100 "y.tab.c"
    break;

  case 63: /* binary_expression: expression NE expression  */
#line 248 "bello.y"
                               { (yyval.exp)=bldBnrExp(NE, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2106 "y.tab.c"
    break;

  case 64: /* binary_expression: expression GT expression  */
#line 249 "bello.y"
                               { (yyval.exp)=bldBnrExp(GT, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2112 "y.tab.c"
    break;

  case 65: /* binary_expression: expression GE expression  */
#line 250 "bello.y"
                               { (yyval.exp)=bldBnrExp(GE, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2118 "y.tab.c"
    break;

  case 66: /* binary_expression: expression LT expression  */
#line 251 "bello.y"
                               { (yyval.exp)=bldBnrExp(LT, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2124 "y.tab.c"
    break;

  case 67: /* binary_expression: expression LE expression  */
#line 252 "bello.y"
                               { (yyval.exp)=bldBnrExp(LE, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2130 "y.tab.c"
    break;

  case 68: /* binary_expression: expression BIT_AND expression  */
#line 253 "bello.y"
                                    { (yyval.exp)=bldBnrExp(BIT_AND, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2136 "y.tab.c"
    break;

  case 69: /* binary_expression: expression BIT_OR expression  */
#line 254 "bello.y"
                                   { (yyval.exp)=bldBnrExp(BIT_OR, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2142 "y.tab.c"
    break;

  case 70: /* binary_expression: expression BIT_XOR expression  */
#line 255 "bello.y"
                                    { (yyval.exp)=bldBnrExp(BIT_XOR, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2148 "y.tab.c"
    break;

  case 71: /* value_expression: INT_VALUE  */
#line 259 "bello.y"
                { (yyval.exp)=bldCnstIntExp((yyvsp[0].intVl)); /*printf("Get data: %d\n",$1);*/ }
#line 2154 "y.tab.c"
    break;

  case 72: /* value_expression: FLOAT_VALUE  */
#line 260 "bello.y"
                  { (yyval.exp)=bldCnstFltExp((yyvsp[0].fltVl)); }
#line 2160 "y.tab.c"
    break;

  case 73: /* value_expression: BOOLEAN_VALUE  */
#line 261 "bello.y"
                    { (yyval.exp)=bldCnstBlnExp((yyvsp[0].blnVl)); }
#line 2166 "y.tab.c"
    break;

  case 74: /* value_expression: STRING_VALUE  */
#line 262 "bello.y"
                   { (yyval.exp)=bldCnstStrExp((yyvsp[0].strVl)); }
#line 2172 "y.tab.c"
    break;

  case 75: /* value_expression: NULL_VALUE  */
#line 263 "bello.y"
                 { (yyval.exp)=bldCnstNllExp(); }
#line 2178 "y.tab.c"
    break;

  case 78: /* lvalue_expression: IDENTIFER  */
#line 268 "bello.y"
                { (yyval.exp)= bldLvlExp(bldVrbExp((yyvsp[0].idtf))); }
#line 2184 "y.tab.c"
    break;

  case 79: /* lvalue_expression: lvalue_expression evaluate_list  */
#line 270 "bello.y"
    { 
        (yyval.exp)=(yyvsp[-1].exp); 
        bldLvlExpAdd((yyvsp[-1].exp), (yyvsp[0].evlLst)); 
    }
#line 2193 "y.tab.c"
    break;

  case 80: /* array_expression: LEFT_QUAD element_list RIGHT_QUAD  */
#line 278 "bello.y"
    {
        (yyval.exp)= bldArrExp((yyvsp[-1].elmtLst));
    }
#line 2201 "y.tab.c"
    break;

  case 81: /* array_expression: LEFT_QUAD RIGHT_QUAD  */
#line 282 "bello.y"
    {
        (yyval.exp)= bldArrExp(bldElmtLst());
    }
#line 2209 "y.tab.c"
    break;

  case 82: /* new_array_expression: NEW_ARRAY LEFT_PAREN expression RIGHT_PAREN  */
#line 288 "bello.y"
    {
        (yyval.exp) = bldNewArrExp((yyvsp[-1].exp));
    }
#line 2217 "y.tab.c"
    break;

  case 83: /* element_list: expression  */
#line 294 "bello.y"
    { 
        (yyval.elmtLst)= bldElmtLst(); 
        elmtLstAdd((yyval.elmtLst), (yyvsp[0].exp)); 
    }
#line 2226 "y.tab.c"
    break;

  case 84: /* element_list: element_list COMMA expression  */
#line 299 "bello.y"
    {  
        (yyval.elmtLst)=(yyvsp[-2].elmtLst);  
        elmtLstAdd((yyval.elmtLst), (yyvsp[0].exp)); 
    }
#line 2235 "y.tab.c"
    break;

  case 85: /* var_statement: VAR assign_list  */
#line 306 "bello.y"
                      { (yyval.stmt)=bldVarStmt((yyvsp[0].asgnLst)); }
#line 2241 "y.tab.c"
    break;

  case 86: /* global_statement: GLOBAL assign_list  */
#line 309 "bello.y"
                         { (yyval.stmt)=bldGlbStmt((yyvsp[0].asgnLst)); }
#line 2247 "y.tab.c"
    break;

  case 87: /* assign_list: IDENTIFER  */
#line 313 "bello.y"
    {
        (yyval.asgnLst)= bldAsgnLst();
        asgnLstAdd((yyval.asgnLst), bldVrbExp((yyvsp[0].idtf)), bldNllExp());
    }
#line 2256 "y.tab.c"
    break;

  case 88: /* assign_list: IDENTIFER ASSIGN expression  */
#line 318 "bello.y"
    {
        (yyval.asgnLst)= bldAsgnLst();
        asgnLstAdd((yyval.asgnLst), bldVrbExp((yyvsp[-2].idtf)), (yyvsp[0].exp));
    }
#line 2265 "y.tab.c"
    break;

  case 89: /* assign_list: assign_list COMMA IDENTIFER  */
#line 323 "bello.y"
    {
        (yyval.asgnLst)=(yyvsp[-2].asgnLst);
        asgnLstAdd((yyval.asgnLst), bldVrbExp((yyvsp[0].idtf)), bldNllExp());
    }
#line 2274 "y.tab.c"
    break;

  case 90: /* assign_list: assign_list COMMA IDENTIFER ASSIGN expression  */
#line 328 "bello.y"
    {
        (yyval.asgnLst)=(yyvsp[-4].asgnLst);
        asgnLstAdd((yyval.asgnLst), bldVrbExp((yyvsp[-2].idtf)), (yyvsp[0].exp));
    }
#line 2283 "y.tab.c"
    break;

  case 91: /* function_expression: IDENTIFER LEFT_PAREN argument_list RIGHT_PAREN  */
#line 339 "bello.y"
    {
        (yyval.exp)=bldFcnExp((yyvsp[-3].idtf), (yyvsp[-1].argLst));
    }
#line 2291 "y.tab.c"
    break;

  case 92: /* function_expression: IDENTIFER LEFT_PAREN RIGHT_PAREN  */
#line 343 "bello.y"
    {
        (yyval.exp)=bldFcnExp((yyvsp[-2].idtf), bldArgLst());
    }
#line 2299 "y.tab.c"
    break;

  case 93: /* argument_list: expression  */
#line 349 "bello.y"
    {
        (yyval.argLst)=bldArgLst();
        argLstAdd((yyval.argLst), (yyvsp[0].exp));
    }
#line 2308 "y.tab.c"
    break;

  case 94: /* argument_list: argument_list COMMA expression  */
#line 354 "bello.y"
    {
        (yyval.argLst)=(yyvsp[-2].argLst);
        argLstAdd((yyval.argLst), (yyvsp[0].exp));
    }
#line 2317 "y.tab.c"
    break;

  case 95: /* evaluate_list: LEFT_QUAD expression RIGHT_QUAD  */
#line 362 "bello.y"
    {
        (yyval.evlLst) = bldAcsLst();
        acsLstIdxAdd((yyval.evlLst), (yyvsp[-1].exp));
    }
#line 2326 "y.tab.c"
    break;

  case 96: /* evaluate_list: LEFT_QUAD expression COLON expression RIGHT_QUAD  */
#line 367 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-3].exp), (yyvsp[-1].exp), bldCnstIntExp(1));
    }
#line 2335 "y.tab.c"
    break;

  case 97: /* evaluate_list: LEFT_QUAD expression COLON expression COLON RIGHT_QUAD  */
#line 372 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-4].exp), (yyvsp[-2].exp), bldCnstIntExp(1));
    }
#line 2344 "y.tab.c"
    break;

  case 98: /* evaluate_list: LEFT_QUAD expression COLON expression COLON expression RIGHT_QUAD  */
#line 377 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-5].exp), (yyvsp[-3].exp), (yyvsp[-1].exp));
    }
#line 2353 "y.tab.c"
    break;

  case 99: /* evaluate_list: LEFT_QUAD expression COLON RIGHT_QUAD  */
#line 382 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-2].exp), bldCnstIntExp(-1), bldCnstIntExp(1));
    }
#line 2362 "y.tab.c"
    break;

  case 100: /* evaluate_list: LEFT_QUAD expression COLON COLON RIGHT_QUAD  */
#line 387 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-3].exp), bldCnstIntExp(-1), bldCnstIntExp(1));
    }
#line 2371 "y.tab.c"
    break;

  case 101: /* evaluate_list: LEFT_QUAD expression COLON COLON expression RIGHT_QUAD  */
#line 392 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-4].exp), bldCnstIntExp(-1), (yyvsp[-1].exp));
    }
#line 2380 "y.tab.c"
    break;

  case 102: /* evaluate_list: LEFT_QUAD COLON expression RIGHT_QUAD  */
#line 397 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), (yyvsp[-1].exp), bldCnstIntExp(1));
    }
#line 2389 "y.tab.c"
    break;

  case 103: /* evaluate_list: LEFT_QUAD COLON expression COLON RIGHT_QUAD  */
#line 402 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), (yyvsp[-2].exp), bldCnstIntExp(1));
    }
#line 2398 "y.tab.c"
    break;

  case 104: /* evaluate_list: LEFT_QUAD COLON expression COLON expression RIGHT_QUAD  */
#line 407 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), (yyvsp[-3].exp), (yyvsp[-1].exp));
    }
#line 2407 "y.tab.c"
    break;

  case 105: /* evaluate_list: LEFT_QUAD COLON COLON RIGHT_QUAD  */
#line 412 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), bldCnstIntExp(-1), bldCnstIntExp(1));
    }
#line 2416 "y.tab.c"
    break;

  case 106: /* evaluate_list: evaluate_list LEFT_QUAD expression RIGHT_QUAD  */
#line 417 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-3].evlLst);
        acsLstIdxAdd((yyval.evlLst),(yyvsp[-1].exp));
    }
#line 2425 "y.tab.c"
    break;

  case 107: /* evaluate_list: evaluate_list LEFT_QUAD expression COLON expression RIGHT_QUAD  */
#line 422 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-5].evlLst);
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-3].exp), (yyvsp[-1].exp), bldCnstIntExp(1));
    }
#line 2434 "y.tab.c"
    break;

  case 108: /* evaluate_list: evaluate_list LEFT_QUAD expression COLON expression COLON RIGHT_QUAD  */
#line 427 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-6].evlLst);
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-4].exp), (yyvsp[-2].exp), bldCnstIntExp(1));
    }
#line 2443 "y.tab.c"
    break;

  case 109: /* evaluate_list: evaluate_list LEFT_QUAD expression COLON expression COLON expression RIGHT_QUAD  */
#line 432 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-7].evlLst);
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-5].exp), (yyvsp[-3].exp), (yyvsp[-1].exp));
    }
#line 2452 "y.tab.c"
    break;

  case 110: /* evaluate_list: evaluate_list LEFT_QUAD expression COLON RIGHT_QUAD  */
#line 437 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-4].evlLst);
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-2].exp), bldCnstIntExp(-1), bldCnstIntExp(1));
    }
#line 2461 "y.tab.c"
    break;

  case 111: /* evaluate_list: evaluate_list LEFT_QUAD expression COLON COLON RIGHT_QUAD  */
#line 442 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-5].evlLst);
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-3].exp), bldCnstIntExp(-1), bldCnstIntExp(1));
    }
#line 2470 "y.tab.c"
    break;

  case 112: /* evaluate_list: evaluate_list LEFT_QUAD expression COLON COLON expression RIGHT_QUAD  */
#line 447 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-6].evlLst);
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-4].exp), bldCnstIntExp(-1), (yyvsp[-1].exp));
    }
#line 2479 "y.tab.c"
    break;

  case 113: /* evaluate_list: evaluate_list LEFT_QUAD COLON expression RIGHT_QUAD  */
#line 452 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-4].evlLst);
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), (yyvsp[-1].exp), bldCnstIntExp(1));
    }
#line 2488 "y.tab.c"
    break;

  case 114: /* evaluate_list: evaluate_list LEFT_QUAD COLON expression COLON RIGHT_QUAD  */
#line 457 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-5].evlLst);
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), (yyvsp[-2].exp), bldCnstIntExp(1));
    }
#line 2497 "y.tab.c"
    break;

  case 115: /* evaluate_list: evaluate_list LEFT_QUAD COLON expression COLON expression RIGHT_QUAD  */
#line 462 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-6].evlLst);
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), (yyvsp[-3].exp), (yyvsp[-1].exp));
    }
#line 2506 "y.tab.c"
    break;

  case 116: /* evaluate_list: evaluate_list LEFT_QUAD COLON COLON RIGHT_QUAD  */
#line 467 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-4].evlLst);
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), bldCnstIntExp(-1), bldCnstIntExp(1));
    }
#line 2515 "y.tab.c"
    break;

  case 117: /* if_statement: IF LEFT_PAREN expression RIGHT_PAREN structure_statement  */
#line 485 "bello.y"
    {
        (yyval.stmt)=bldIfStmt((yyvsp[-2].exp),(yyvsp[0].stmt));
    }
#line 2523 "y.tab.c"
    break;

  case 118: /* if_statement: IF LEFT_PAREN expression RIGHT_PAREN structure_statement ELSE structure_statement  */
#line 489 "bello.y"
    {
        (yyval.stmt)=bldIfElsStmt((yyvsp[-4].exp), (yyvsp[-2].stmt), (yyvsp[0].stmt));
    }
#line 2531 "y.tab.c"
    break;

  case 119: /* for_statement: FOR LEFT_PAREN single_statement_no_semicolon SEMICOLON expression_statement SEMICOLON single_statement_no_semicolon RIGHT_PAREN structure_statement  */
#line 495 "bello.y"
    {
        (yyval.stmt)= bldForStmt((yyvsp[-6].stmt), (yyvsp[-4].stmt), (yyvsp[-2].stmt), (yyvsp[0].stmt));  
    }
#line 2539 "y.tab.c"
    break;

  case 120: /* while_statement: WHILE LEFT_PAREN expression_statement RIGHT_PAREN structure_statement  */
#line 501 "bello.y"
    {
        (yyval.stmt)= bldWhlStmt((yyvsp[-2].stmt), (yyvsp[0].stmt));
    }
#line 2547 "y.tab.c"
    break;

  case 121: /* do_while_statement: DO structure_statement WHILE LEFT_PAREN expression_statement RIGHT_PAREN SEMICOLON  */
#line 507 "bello.y"
    {
        (yyval.stmt)= bldDoWhlStmt((yyvsp[-2].stmt), (yyvsp[-5].stmt));
    }
#line 2555 "y.tab.c"
    break;

  case 122: /* break_statement: BREAK  */
#line 512 "bello.y"
            { (yyval.stmt)= bldBrkStmt(bldCnstIntExp(1)); }
#line 2561 "y.tab.c"
    break;

  case 123: /* break_statement: BREAK LEFT_PAREN expression RIGHT_PAREN  */
#line 513 "bello.y"
                                              { (yyval.stmt)= bldBrkStmt((yyvsp[-1].exp)); }
#line 2567 "y.tab.c"
    break;

  case 124: /* continue_statement: CONTINUE  */
#line 516 "bello.y"
               { (yyval.stmt)= bldCntnStmt(bldCnstIntExp(1)); }
#line 2573 "y.tab.c"
    break;

  case 125: /* continue_statement: CONTINUE LEFT_PAREN expression RIGHT_PAREN  */
#line 517 "bello.y"
                                                 { (yyval.stmt)= bldCntnStmt((yyvsp[-1].exp)); }
#line 2579 "y.tab.c"
    break;

  case 128: /* function_define_statement: FUNC IDENTIFER LEFT_PAREN parameter_list RIGHT_PAREN statement_block  */
#line 525 "bello.y"
    {
        struct FcnStrc* fcn;

        fcn=bldFcn((yyvsp[-4].idtf), (yyvsp[-2].prmLst), (yyvsp[0].stmt));

        (yyval.stmt) = bldFcnStmt(fcn);
    }
#line 2591 "y.tab.c"
    break;

  case 129: /* function_define_statement: FUNC IDENTIFER LEFT_PAREN RIGHT_PAREN statement_block  */
#line 533 "bello.y"
    {
        struct FcnStrc *fcn;

        fcn=bldFcn((yyvsp[-3].idtf), bldPrmLst(), (yyvsp[0].stmt));

        (yyval.stmt) = bldFcnStmt(fcn);
    }
#line 2603 "y.tab.c"
    break;

  case 130: /* function_define_statement: FUNC IDENTIFER LEFT_PAREN parameter_list RIGHT_PAREN single_statement  */
#line 541 "bello.y"
    {
        struct FcnStrc* fcn;

        fcn=bldFcn((yyvsp[-4].idtf), (yyvsp[-2].prmLst), (yyvsp[0].stmt));

        (yyval.stmt) = bldFcnStmt(fcn);
    }
#line 2615 "y.tab.c"
    break;

  case 131: /* function_define_statement: FUNC IDENTIFER LEFT_PAREN RIGHT_PAREN single_statement  */
#line 549 "bello.y"
    {
        struct FcnStrc *fcn;

        fcn=bldFcn((yyvsp[-3].idtf), bldPrmLst(), (yyvsp[0].stmt));

        (yyval.stmt) = bldFcnStmt(fcn);
    }
#line 2627 "y.tab.c"
    break;

  case 132: /* parameter_list: IDENTIFER  */
#line 560 "bello.y"
    {
        (yyval.prmLst) = bldPrmLst();
        prmLstAdd((yyval.prmLst), bldVrbExp((yyvsp[0].idtf)));
    }
#line 2636 "y.tab.c"
    break;

  case 133: /* parameter_list: parameter_list COMMA IDENTIFER  */
#line 565 "bello.y"
    { 
        (yyval.prmLst)=(yyvsp[-2].prmLst);  
        prmLstAdd((yyval.prmLst), bldVrbExp((yyvsp[0].idtf)));
    }
#line 2645 "y.tab.c"
    break;

  case 134: /* return_statement: RETURN  */
#line 571 "bello.y"
             { (yyval.stmt)=bldRtnStmt(NULL); }
#line 2651 "y.tab.c"
    break;

  case 135: /* return_statement: RETURN expression  */
#line 572 "bello.y"
                        { (yyval.stmt)=bldRtnStmt((yyvsp[0].exp)); }
#line 2657 "y.tab.c"
    break;


#line 2661 "y.tab.c"

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


