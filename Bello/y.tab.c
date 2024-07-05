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
    ADD_ASSIGN = 267,              /* ADD_ASSIGN  */
    SUB_ASSIGN = 268,              /* SUB_ASSIGN  */
    MUL_ASSIGN = 269,              /* MUL_ASSIGN  */
    DIV_ASSIGN = 270,              /* DIV_ASSIGN  */
    MOD_ASSIGN = 271,              /* MOD_ASSIGN  */
    PRINT = 272,                   /* PRINT  */
    PRINTLN = 273,                 /* PRINTLN  */
    LEFT_PAREN = 274,              /* LEFT_PAREN  */
    RIGHT_PAREN = 275,             /* RIGHT_PAREN  */
    LEFT_QUAD = 276,               /* LEFT_QUAD  */
    RIGHT_QUAD = 277,              /* RIGHT_QUAD  */
    LEFT_BRACE = 278,              /* LEFT_BRACE  */
    RIGHT_BRACE = 279,             /* RIGHT_BRACE  */
    SEMICOLON = 280,               /* SEMICOLON  */
    COMMA = 281,                   /* COMMA  */
    COLON = 282,                   /* COLON  */
    ADD = 283,                     /* ADD  */
    SUB = 284,                     /* SUB  */
    MUL = 285,                     /* MUL  */
    DIV = 286,                     /* DIV  */
    MOD = 287,                     /* MOD  */
    EQ = 288,                      /* EQ  */
    NE = 289,                      /* NE  */
    GT = 290,                      /* GT  */
    GE = 291,                      /* GE  */
    LT = 292,                      /* LT  */
    LE = 293,                      /* LE  */
    AND = 294,                     /* AND  */
    OR = 295,                      /* OR  */
    NOT = 296,                     /* NOT  */
    BIT_AND = 297,                 /* BIT_AND  */
    BIT_OR = 298,                  /* BIT_OR  */
    BIT_XOR = 299,                 /* BIT_XOR  */
    BIT_NOT = 300,                 /* BIT_NOT  */
    INCREMENT = 301,               /* INCREMENT  */
    DECREMENT = 302,               /* DECREMENT  */
    IF = 303,                      /* IF  */
    ELSE = 304,                    /* ELSE  */
    FOR = 305,                     /* FOR  */
    WHILE = 306,                   /* WHILE  */
    DO = 307,                      /* DO  */
    CONTINUE = 308,                /* CONTINUE  */
    BREAK = 309,                   /* BREAK  */
    FUNC = 310,                    /* FUNC  */
    RETURN = 311,                  /* RETURN  */
    READ_INT = 312,                /* READ_INT  */
    READ_FLOAT = 313,              /* READ_FLOAT  */
    READ = 314,                    /* READ  */
    READ_BOOL = 315,               /* READ_BOOL  */
    READ_LINE = 316,               /* READ_LINE  */
    NEW_ARRAY = 317,               /* NEW_ARRAY  */
    MINUS_SIGN = 318,              /* MINUS_SIGN  */
    PLUS_SIGN = 319                /* PLUS_SIGN  */
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
#define ADD_ASSIGN 267
#define SUB_ASSIGN 268
#define MUL_ASSIGN 269
#define DIV_ASSIGN 270
#define MOD_ASSIGN 271
#define PRINT 272
#define PRINTLN 273
#define LEFT_PAREN 274
#define RIGHT_PAREN 275
#define LEFT_QUAD 276
#define RIGHT_QUAD 277
#define LEFT_BRACE 278
#define RIGHT_BRACE 279
#define SEMICOLON 280
#define COMMA 281
#define COLON 282
#define ADD 283
#define SUB 284
#define MUL 285
#define DIV 286
#define MOD 287
#define EQ 288
#define NE 289
#define GT 290
#define GE 291
#define LT 292
#define LE 293
#define AND 294
#define OR 295
#define NOT 296
#define BIT_AND 297
#define BIT_OR 298
#define BIT_XOR 299
#define BIT_NOT 300
#define INCREMENT 301
#define DECREMENT 302
#define IF 303
#define ELSE 304
#define FOR 305
#define WHILE 306
#define DO 307
#define CONTINUE 308
#define BREAK 309
#define FUNC 310
#define RETURN 311
#define READ_INT 312
#define READ_FLOAT 313
#define READ 314
#define READ_BOOL 315
#define READ_LINE 316
#define NEW_ARRAY 317
#define MINUS_SIGN 318
#define PLUS_SIGN 319

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

#line 318 "y.tab.c"

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
  YYSYMBOL_ADD_ASSIGN = 12,                /* ADD_ASSIGN  */
  YYSYMBOL_SUB_ASSIGN = 13,                /* SUB_ASSIGN  */
  YYSYMBOL_MUL_ASSIGN = 14,                /* MUL_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 15,                /* DIV_ASSIGN  */
  YYSYMBOL_MOD_ASSIGN = 16,                /* MOD_ASSIGN  */
  YYSYMBOL_PRINT = 17,                     /* PRINT  */
  YYSYMBOL_PRINTLN = 18,                   /* PRINTLN  */
  YYSYMBOL_LEFT_PAREN = 19,                /* LEFT_PAREN  */
  YYSYMBOL_RIGHT_PAREN = 20,               /* RIGHT_PAREN  */
  YYSYMBOL_LEFT_QUAD = 21,                 /* LEFT_QUAD  */
  YYSYMBOL_RIGHT_QUAD = 22,                /* RIGHT_QUAD  */
  YYSYMBOL_LEFT_BRACE = 23,                /* LEFT_BRACE  */
  YYSYMBOL_RIGHT_BRACE = 24,               /* RIGHT_BRACE  */
  YYSYMBOL_SEMICOLON = 25,                 /* SEMICOLON  */
  YYSYMBOL_COMMA = 26,                     /* COMMA  */
  YYSYMBOL_COLON = 27,                     /* COLON  */
  YYSYMBOL_ADD = 28,                       /* ADD  */
  YYSYMBOL_SUB = 29,                       /* SUB  */
  YYSYMBOL_MUL = 30,                       /* MUL  */
  YYSYMBOL_DIV = 31,                       /* DIV  */
  YYSYMBOL_MOD = 32,                       /* MOD  */
  YYSYMBOL_EQ = 33,                        /* EQ  */
  YYSYMBOL_NE = 34,                        /* NE  */
  YYSYMBOL_GT = 35,                        /* GT  */
  YYSYMBOL_GE = 36,                        /* GE  */
  YYSYMBOL_LT = 37,                        /* LT  */
  YYSYMBOL_LE = 38,                        /* LE  */
  YYSYMBOL_AND = 39,                       /* AND  */
  YYSYMBOL_OR = 40,                        /* OR  */
  YYSYMBOL_NOT = 41,                       /* NOT  */
  YYSYMBOL_BIT_AND = 42,                   /* BIT_AND  */
  YYSYMBOL_BIT_OR = 43,                    /* BIT_OR  */
  YYSYMBOL_BIT_XOR = 44,                   /* BIT_XOR  */
  YYSYMBOL_BIT_NOT = 45,                   /* BIT_NOT  */
  YYSYMBOL_INCREMENT = 46,                 /* INCREMENT  */
  YYSYMBOL_DECREMENT = 47,                 /* DECREMENT  */
  YYSYMBOL_IF = 48,                        /* IF  */
  YYSYMBOL_ELSE = 49,                      /* ELSE  */
  YYSYMBOL_FOR = 50,                       /* FOR  */
  YYSYMBOL_WHILE = 51,                     /* WHILE  */
  YYSYMBOL_DO = 52,                        /* DO  */
  YYSYMBOL_CONTINUE = 53,                  /* CONTINUE  */
  YYSYMBOL_BREAK = 54,                     /* BREAK  */
  YYSYMBOL_FUNC = 55,                      /* FUNC  */
  YYSYMBOL_RETURN = 56,                    /* RETURN  */
  YYSYMBOL_READ_INT = 57,                  /* READ_INT  */
  YYSYMBOL_READ_FLOAT = 58,                /* READ_FLOAT  */
  YYSYMBOL_READ = 59,                      /* READ  */
  YYSYMBOL_READ_BOOL = 60,                 /* READ_BOOL  */
  YYSYMBOL_READ_LINE = 61,                 /* READ_LINE  */
  YYSYMBOL_NEW_ARRAY = 62,                 /* NEW_ARRAY  */
  YYSYMBOL_MINUS_SIGN = 63,                /* MINUS_SIGN  */
  YYSYMBOL_PLUS_SIGN = 64,                 /* PLUS_SIGN  */
  YYSYMBOL_YYACCEPT = 65,                  /* $accept  */
  YYSYMBOL_statement = 66,                 /* statement  */
  YYSYMBOL_execute_statement = 67,         /* execute_statement  */
  YYSYMBOL_single_statement = 68,          /* single_statement  */
  YYSYMBOL_single_statement_no_semicolon = 69, /* single_statement_no_semicolon  */
  YYSYMBOL_null_statement = 70,            /* null_statement  */
  YYSYMBOL_statement_block = 71,           /* statement_block  */
  YYSYMBOL_block_list = 72,                /* block_list  */
  YYSYMBOL_expression_statement = 73,      /* expression_statement  */
  YYSYMBOL_expression = 74,                /* expression  */
  YYSYMBOL_lvalue_operation_expression = 75, /* lvalue_operation_expression  */
  YYSYMBOL_assign_expression = 76,         /* assign_expression  */
  YYSYMBOL_self_operation_expression = 77, /* self_operation_expression  */
  YYSYMBOL_unary_expression = 78,          /* unary_expression  */
  YYSYMBOL_binary_expression = 79,         /* binary_expression  */
  YYSYMBOL_value_expression = 80,          /* value_expression  */
  YYSYMBOL_lvalue_expression = 81,         /* lvalue_expression  */
  YYSYMBOL_array_expression = 82,          /* array_expression  */
  YYSYMBOL_new_array_expression = 83,      /* new_array_expression  */
  YYSYMBOL_element_list = 84,              /* element_list  */
  YYSYMBOL_var_statement = 85,             /* var_statement  */
  YYSYMBOL_assign_list = 86,               /* assign_list  */
  YYSYMBOL_function_expression = 87,       /* function_expression  */
  YYSYMBOL_argument_list = 88,             /* argument_list  */
  YYSYMBOL_evaluate_list = 89,             /* evaluate_list  */
  YYSYMBOL_if_statement = 90,              /* if_statement  */
  YYSYMBOL_for_statement = 91,             /* for_statement  */
  YYSYMBOL_while_statement = 92,           /* while_statement  */
  YYSYMBOL_do_while_statement = 93,        /* do_while_statement  */
  YYSYMBOL_break_statement = 94,           /* break_statement  */
  YYSYMBOL_continue_statement = 95,        /* continue_statement  */
  YYSYMBOL_structure_statement = 96,       /* structure_statement  */
  YYSYMBOL_function_define_statement = 97, /* function_define_statement  */
  YYSYMBOL_parameter_list = 98,            /* parameter_list  */
  YYSYMBOL_return_statement = 99           /* return_statement  */
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
#define YYFINAL  81
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1334

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  65
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  35
/* YYNRULES -- Number of rules.  */
#define YYNRULES  133
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  248

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   319


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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   134,   134,   135,   136,   137,   141,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   171,
     172,   173,   174,   175,   176,   180,   183,   184,   187,   192,
     199,   205,   206,   207,   208,   209,   210,   213,   214,   217,
     218,   219,   220,   221,   222,   226,   227,   228,   229,   232,
     233,   234,   235,   236,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     258,   259,   260,   261,   262,   263,   264,   267,   268,   276,
     280,   286,   292,   297,   305,   309,   314,   319,   324,   335,
     339,   345,   350,   358,   363,   368,   373,   378,   383,   388,
     393,   398,   403,   408,   413,   418,   423,   428,   433,   438,
     443,   448,   453,   458,   463,   481,   485,   491,   497,   503,
     509,   510,   513,   514,   517,   518,   521,   529,   537,   545,
     556,   561,   568,   569
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
  "ARRAY_VALUE", "IDENTIFER", "ASSIGN", "VAR", "ADD_ASSIGN", "SUB_ASSIGN",
  "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "PRINT", "PRINTLN",
  "LEFT_PAREN", "RIGHT_PAREN", "LEFT_QUAD", "RIGHT_QUAD", "LEFT_BRACE",
  "RIGHT_BRACE", "SEMICOLON", "COMMA", "COLON", "ADD", "SUB", "MUL", "DIV",
  "MOD", "EQ", "NE", "GT", "GE", "LT", "LE", "AND", "OR", "NOT", "BIT_AND",
  "BIT_OR", "BIT_XOR", "BIT_NOT", "INCREMENT", "DECREMENT", "IF", "ELSE",
  "FOR", "WHILE", "DO", "CONTINUE", "BREAK", "FUNC", "RETURN", "READ_INT",
  "READ_FLOAT", "READ", "READ_BOOL", "READ_LINE", "NEW_ARRAY",
  "MINUS_SIGN", "PLUS_SIGN", "$accept", "statement", "execute_statement",
  "single_statement", "single_statement_no_semicolon", "null_statement",
  "statement_block", "block_list", "expression_statement", "expression",
  "lvalue_operation_expression", "assign_expression",
  "self_operation_expression", "unary_expression", "binary_expression",
  "value_expression", "lvalue_expression", "array_expression",
  "new_array_expression", "element_list", "var_statement", "assign_list",
  "function_expression", "argument_list", "evaluate_list", "if_statement",
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

#define YYPACT_NINF (-140)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-26)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     220,    37,  -140,  -140,  -140,  -140,  -140,    -5,    33,   875,
     564,   280,   875,   875,   875,   875,    41,    41,    34,    35,
      36,   340,    39,    40,    47,   875,    43,    57,  -140,    44,
    -140,    48,  1239,  -140,  -140,  -140,  -140,  -140,  -140,     5,
    -140,  -140,    49,  -140,  -140,  -140,  -140,  -140,    50,    51,
    -140,    77,   124,    53,    46,   910,  -140,  1239,    10,  -140,
    -140,  -140,   400,  -140,  -140,  -140,  -140,  -140,    45,    45,
     875,   454,   875,  -140,  -140,    13,   875,   875,    84,  1239,
     875,  -140,   220,  -140,   220,  -140,   875,   875,   875,   875,
     875,   875,   875,   875,   875,   875,   875,   875,   875,   875,
     875,   875,   875,   875,   875,   875,   875,   875,   575,  -140,
    -140,    86,  -140,  -140,  -140,  -140,  -140,  1239,     3,   875,
      56,  -140,  -140,   875,  -140,  -140,   931,    80,  -140,  -140,
    -140,  -140,  -140,  -140,    88,    93,   952,   973,     4,   994,
    -140,  -140,     9,     9,  -140,  -140,  -140,    16,    16,    16,
      16,    16,    16,  1273,  1256,   282,  1290,   222,  1239,  1239,
    1239,  1239,  1239,  1239,   624,  1013,   635,  -140,   875,  1239,
     103,  1239,   340,   875,   340,   875,  -140,  -140,  -140,   340,
       8,  -140,    94,  1032,  -140,   504,   684,  1051,  1239,   875,
      11,    90,  -140,    97,  -140,  -140,   340,   109,  -140,  -140,
     695,  -140,   744,  1070,    99,  1089,  -140,   515,  1239,   340,
     454,    98,  -140,  -140,  -140,  -140,  1127,  -140,  1146,  -140,
     755,  -140,  -140,   804,  -140,   815,  1108,  -140,   104,  -140,
    -140,  -140,  -140,  1165,  -140,  1184,  -140,  1203,  -140,   864,
     340,  -140,  -140,  -140,  -140,  1222,  -140,  -140
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    18,    70,    72,    71,    73,    74,    77,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   122,   120,     0,   132,     0,     0,     6,     0,
       6,     0,    30,    32,    37,    38,    33,    34,    31,    76,
      35,    36,     0,    75,     8,     9,    10,    11,     0,     0,
      15,     0,     0,    85,    84,     0,    80,    82,     0,    18,
      27,    28,     0,    50,    49,    52,    53,    77,    45,    46,
       0,    25,     0,   124,   125,     0,     0,     0,     0,   133,
       0,     1,     0,    16,     0,     7,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    47,
      48,    78,    17,    12,    13,    14,    90,    91,     0,     0,
       0,    51,    79,     0,    26,    29,     0,     0,    24,    19,
      20,    21,    22,    23,     0,     0,     0,     0,     0,     0,
       2,     3,    54,    55,    56,    57,    58,    61,    62,    63,
      64,    65,    66,    59,    60,    67,    68,    69,    39,    40,
      41,    42,    43,    44,     0,     0,     0,    89,     0,    86,
      87,    83,     0,     0,     0,     0,   123,   121,   130,     0,
       0,    81,     0,     0,    93,     0,     0,     0,    92,     0,
     115,     0,   118,     0,   129,   127,     0,     0,   103,   100,
       0,    97,     0,     0,     0,     0,   104,     0,    88,     0,
      25,     0,   128,   126,   131,   101,     0,    98,     0,    94,
       0,   114,   111,     0,   108,     0,     0,   116,     0,   119,
     102,    99,    95,     0,   112,     0,   109,     0,   105,     0,
       0,    96,   113,   110,   106,     0,   117,   107
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -140,   -57,    89,    38,   -85,   -69,    22,  -140,   -64,    -9,
    -140,  -140,  -140,  -140,  -140,  -140,    14,  -140,  -140,  -140,
    -140,  -140,  -140,  -140,  -140,   -62,   -61,   -60,   -59,  -140,
    -140,  -139,  -140,  -140,  -140
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    27,    82,    73,   127,    29,    74,    62,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    58,
      42,    54,    43,   118,   111,    44,    45,    46,    47,    48,
      49,    75,    50,   180,    51
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      55,    57,   128,    63,    64,    65,    66,   129,   134,   130,
     131,   132,   133,   178,    52,   102,    79,   103,   104,   105,
     106,   107,    30,   167,   179,   140,   108,   141,   196,   168,
      68,    69,   122,   190,   197,   192,   123,    -4,    28,    88,
      89,    90,    53,   117,    86,    87,    88,    89,    90,    61,
      67,   109,   110,    70,    71,    72,    78,    81,    76,    77,
     209,   126,    80,   119,   135,   170,   108,   136,   137,    83,
     227,   139,   120,    85,   112,   113,   114,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   165,
     125,   246,   115,   138,    30,   173,    30,   166,   174,   191,
     169,   193,   175,   189,   171,   210,   198,   211,   214,    84,
      28,   221,    28,   229,   240,   228,     0,     2,     3,     4,
       5,     6,     0,     7,     0,     0,     0,     0,     0,     0,
       0,   128,     0,     9,   116,    10,   129,     0,   130,   131,
     132,   133,    12,    13,     0,   183,     0,   187,     0,   188,
       0,     0,     0,     0,     0,    14,     0,     0,     0,    15,
      16,    17,     0,     0,     0,     0,   203,   205,     0,     0,
     208,     0,     0,     0,     0,     0,    26,     0,     0,     0,
       0,   216,     0,   218,     0,     0,     0,     0,   226,     0,
       0,   195,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   233,     0,     0,   235,     0,   237,   194,   213,     0,
      -5,     1,     0,     2,     3,     4,     5,     6,     0,     7,
     245,     8,     0,     0,   212,     0,     0,     0,     0,     9,
       0,    10,     0,    11,     0,   -25,     0,     0,    12,    13,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    14,     0,     0,    99,    15,    16,    17,    18,     0,
      19,    20,    21,    22,    23,    24,    25,     0,     0,     0,
       0,    59,    26,     2,     3,     4,     5,     6,     0,     7,
       0,     8,     0,     0,     0,     0,     0,     0,     0,     9,
       0,    10,     0,     0,    60,   -25,     0,     0,    12,    13,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    14,     0,     0,     0,    15,    16,    17,    18,     0,
      19,    20,    21,    22,    23,    24,    25,     0,     0,     0,
       0,    59,    26,     2,     3,     4,     5,     6,     0,     7,
       0,     8,     0,     0,     0,     0,     0,     0,     0,     9,
       0,    10,     0,    11,     0,   -25,     0,     0,    12,    13,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    14,     0,     0,     0,    15,    16,    17,    18,     0,
      19,    20,    21,    22,    23,    24,    25,     0,     0,     0,
       0,    59,    26,     2,     3,     4,     5,     6,     0,     7,
       0,     8,     0,     0,     0,     0,     0,     0,     0,     9,
       0,    10,     0,     0,   124,   -25,     0,     0,    12,    13,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    14,     0,     0,     0,    15,    16,    17,    18,     0,
      19,    20,    21,    22,    23,    24,    25,     2,     3,     4,
       5,     6,    26,     7,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     9,     0,    10,     0,     0,     0,     0,
       0,     0,    12,    13,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    14,     0,     0,     0,    15,
      16,    17,    18,     0,    19,    20,    21,     2,     3,     4,
       5,     6,     0,     7,     0,     0,    26,     0,     2,     3,
       4,     5,     6,     9,     7,    10,   201,     0,     0,     0,
       0,   202,    12,    13,     9,     0,    10,   224,     0,     0,
       0,     0,   225,    12,    13,    14,     0,     0,     0,    15,
      16,    17,     0,     0,     0,     0,    14,     0,     0,     0,
      15,    16,    17,     0,     0,     0,    26,     2,     3,     4,
       5,     6,     0,     7,     0,     0,     0,    26,     2,     3,
       4,     5,     6,     9,     7,    10,    56,     0,     0,     0,
       0,     0,    12,    13,     9,     0,    10,     0,     0,     0,
       0,     0,   164,    12,    13,    14,     0,     0,     0,    15,
      16,    17,     0,     0,     0,     0,    14,     0,     0,     0,
      15,    16,    17,     0,     0,     0,    26,     2,     3,     4,
       5,     6,     0,     7,     0,     0,     0,    26,     2,     3,
       4,     5,     6,     9,     7,    10,     0,     0,     0,     0,
       0,   182,    12,    13,     9,     0,    10,     0,     0,     0,
       0,     0,   186,    12,    13,    14,     0,     0,     0,    15,
      16,    17,     0,     0,     0,     0,    14,     0,     0,     0,
      15,    16,    17,     0,     0,     0,    26,     2,     3,     4,
       5,     6,     0,     7,     0,     0,     0,    26,     2,     3,
       4,     5,     6,     9,     7,    10,     0,     0,     0,     0,
       0,   204,    12,    13,     9,     0,    10,   215,     0,     0,
       0,     0,     0,    12,    13,    14,     0,     0,     0,    15,
      16,    17,     0,     0,     0,     0,    14,     0,     0,     0,
      15,    16,    17,     0,     0,     0,    26,     2,     3,     4,
       5,     6,     0,     7,     0,     0,     0,    26,     2,     3,
       4,     5,     6,     9,     7,    10,   217,     0,     0,     0,
       0,     0,    12,    13,     9,     0,    10,   232,     0,     0,
       0,     0,     0,    12,    13,    14,     0,     0,     0,    15,
      16,    17,     0,     0,     0,     0,    14,     0,     0,     0,
      15,    16,    17,     0,     0,     0,    26,     2,     3,     4,
       5,     6,     0,     7,     0,     0,     0,    26,     2,     3,
       4,     5,     6,     9,     7,    10,   234,     0,     0,     0,
       0,     0,    12,    13,     9,     0,    10,   236,     0,     0,
       0,     0,     0,    12,    13,    14,     0,     0,     0,    15,
      16,    17,     0,     0,     0,     0,    14,     0,     0,     0,
      15,    16,    17,     0,     0,     0,    26,     2,     3,     4,
       5,     6,     0,     7,     0,     0,     0,    26,     2,     3,
       4,     5,     6,     9,     7,    10,   244,     0,     0,     0,
       0,     0,    12,    13,     9,     0,    10,     0,     0,     0,
       0,     0,     0,    12,    13,    14,     0,     0,     0,    15,
      16,    17,     0,     0,     0,     0,    14,     0,     0,     0,
      15,    16,    17,     0,     0,     0,    26,     0,     0,     0,
     121,     0,     0,     0,     0,     0,     0,    26,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,   172,    99,   100,   101,     0,     0,     0,     0,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,   176,    99,   100,   101,     0,     0,     0,     0,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,   177,    99,   100,   101,     0,     0,     0,
       0,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,   181,    99,   100,   101,     0,     0,
       0,     0,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,   184,    99,   100,   101,     0,
     185,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,   199,    99,   100,   101,     0,   200,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,   206,    99,   100,   101,     0,   207,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,   219,    99,   100,   101,     0,   220,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,   222,    99,   100,   101,     0,   223,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
     238,    99,   100,   101,     0,   239,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,   230,
      99,   100,   101,     0,     0,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,   231,    99,
     100,   101,     0,     0,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,   241,    99,   100,
     101,     0,     0,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,   242,    99,   100,   101,
       0,     0,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,   243,    99,   100,   101,     0,
       0,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,   247,    99,   100,   101,     0,     0,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,     0,    99,   100,   101,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
       0,    99,   100,   101,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,     0,     0,    99,   100,
     101,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,     0,     0,     0,    99,   100,   101,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,     0,
       0,     0,    99,     0,   101
};

static const yytype_int16 yycheck[] =
{
       9,    10,    71,    12,    13,    14,    15,    71,    72,    71,
      71,    71,    71,     9,    19,    10,    25,    12,    13,    14,
      15,    16,     0,    20,    20,    82,    21,    84,    20,    26,
      16,    17,    22,   172,    26,   174,    26,     0,     0,    30,
      31,    32,     9,    52,    28,    29,    30,    31,    32,    11,
       9,    46,    47,    19,    19,    19,     9,     0,    19,    19,
      49,    70,    19,    10,    51,     9,    21,    76,    77,    25,
     209,    80,    26,    25,    25,    25,    25,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
      62,   240,    25,    19,    82,    25,    84,    21,    20,   173,
     119,   175,    19,    10,   123,    25,    22,    20,     9,    30,
      82,    22,    84,    25,    20,   210,    -1,     3,     4,     5,
       6,     7,    -1,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   210,    -1,    19,    20,    21,   210,    -1,   210,   210,
     210,   210,    28,    29,    -1,   164,    -1,   166,    -1,   168,
      -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,    45,
      46,    47,    -1,    -1,    -1,    -1,   185,   186,    -1,    -1,
     189,    -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,
      -1,   200,    -1,   202,    -1,    -1,    -1,    -1,   207,    -1,
      -1,   179,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   220,    -1,    -1,   223,    -1,   225,   179,   196,    -1,
       0,     1,    -1,     3,     4,     5,     6,     7,    -1,     9,
     239,    11,    -1,    -1,   196,    -1,    -1,    -1,    -1,    19,
      -1,    21,    -1,    23,    -1,    25,    -1,    -1,    28,    29,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    41,    -1,    -1,    42,    45,    46,    47,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    -1,    -1,    -1,
      -1,     1,    62,     3,     4,     5,     6,     7,    -1,     9,
      -1,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,
      -1,    21,    -1,    -1,    24,    25,    -1,    -1,    28,    29,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    41,    -1,    -1,    -1,    45,    46,    47,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    -1,    -1,    -1,
      -1,     1,    62,     3,     4,     5,     6,     7,    -1,     9,
      -1,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,
      -1,    21,    -1,    23,    -1,    25,    -1,    -1,    28,    29,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    41,    -1,    -1,    -1,    45,    46,    47,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    -1,    -1,    -1,
      -1,     1,    62,     3,     4,     5,     6,     7,    -1,     9,
      -1,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,
      -1,    21,    -1,    -1,    24,    25,    -1,    -1,    28,    29,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    41,    -1,    -1,    -1,    45,    46,    47,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,     3,     4,     5,
       6,     7,    62,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    19,    -1,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,    45,
      46,    47,    48,    -1,    50,    51,    52,     3,     4,     5,
       6,     7,    -1,     9,    -1,    -1,    62,    -1,     3,     4,
       5,     6,     7,    19,     9,    21,    22,    -1,    -1,    -1,
      -1,    27,    28,    29,    19,    -1,    21,    22,    -1,    -1,
      -1,    -1,    27,    28,    29,    41,    -1,    -1,    -1,    45,
      46,    47,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,
      45,    46,    47,    -1,    -1,    -1,    62,     3,     4,     5,
       6,     7,    -1,     9,    -1,    -1,    -1,    62,     3,     4,
       5,     6,     7,    19,     9,    21,    22,    -1,    -1,    -1,
      -1,    -1,    28,    29,    19,    -1,    21,    -1,    -1,    -1,
      -1,    -1,    27,    28,    29,    41,    -1,    -1,    -1,    45,
      46,    47,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,
      45,    46,    47,    -1,    -1,    -1,    62,     3,     4,     5,
       6,     7,    -1,     9,    -1,    -1,    -1,    62,     3,     4,
       5,     6,     7,    19,     9,    21,    -1,    -1,    -1,    -1,
      -1,    27,    28,    29,    19,    -1,    21,    -1,    -1,    -1,
      -1,    -1,    27,    28,    29,    41,    -1,    -1,    -1,    45,
      46,    47,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,
      45,    46,    47,    -1,    -1,    -1,    62,     3,     4,     5,
       6,     7,    -1,     9,    -1,    -1,    -1,    62,     3,     4,
       5,     6,     7,    19,     9,    21,    -1,    -1,    -1,    -1,
      -1,    27,    28,    29,    19,    -1,    21,    22,    -1,    -1,
      -1,    -1,    -1,    28,    29,    41,    -1,    -1,    -1,    45,
      46,    47,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,
      45,    46,    47,    -1,    -1,    -1,    62,     3,     4,     5,
       6,     7,    -1,     9,    -1,    -1,    -1,    62,     3,     4,
       5,     6,     7,    19,     9,    21,    22,    -1,    -1,    -1,
      -1,    -1,    28,    29,    19,    -1,    21,    22,    -1,    -1,
      -1,    -1,    -1,    28,    29,    41,    -1,    -1,    -1,    45,
      46,    47,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,
      45,    46,    47,    -1,    -1,    -1,    62,     3,     4,     5,
       6,     7,    -1,     9,    -1,    -1,    -1,    62,     3,     4,
       5,     6,     7,    19,     9,    21,    22,    -1,    -1,    -1,
      -1,    -1,    28,    29,    19,    -1,    21,    22,    -1,    -1,
      -1,    -1,    -1,    28,    29,    41,    -1,    -1,    -1,    45,
      46,    47,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,
      45,    46,    47,    -1,    -1,    -1,    62,     3,     4,     5,
       6,     7,    -1,     9,    -1,    -1,    -1,    62,     3,     4,
       5,     6,     7,    19,     9,    21,    22,    -1,    -1,    -1,
      -1,    -1,    28,    29,    19,    -1,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    28,    29,    41,    -1,    -1,    -1,    45,
      46,    47,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,
      45,    46,    47,    -1,    -1,    -1,    62,    -1,    -1,    -1,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    62,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    20,    42,    43,    44,    -1,    -1,    -1,    -1,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    20,    42,    43,    44,    -1,    -1,    -1,    -1,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    20,    42,    43,    44,    -1,    -1,    -1,
      -1,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    20,    42,    43,    44,    -1,    -1,
      -1,    -1,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    22,    42,    43,    44,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    22,    42,    43,    44,    -1,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    22,    42,    43,    44,    -1,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    22,    42,    43,    44,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    22,    42,    43,    44,    -1,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      22,    42,    43,    44,    -1,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    22,
      42,    43,    44,    -1,    -1,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    22,    42,
      43,    44,    -1,    -1,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    22,    42,    43,
      44,    -1,    -1,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    22,    42,    43,    44,
      -1,    -1,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    22,    42,    43,    44,    -1,
      -1,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    22,    42,    43,    44,    -1,    -1,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    -1,    42,    43,    44,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      -1,    42,    43,    44,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    -1,    -1,    42,    43,
      44,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    -1,    -1,    -1,    42,    43,    44,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    -1,
      -1,    -1,    42,    -1,    44
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     3,     4,     5,     6,     7,     9,    11,    19,
      21,    23,    28,    29,    41,    45,    46,    47,    48,    50,
      51,    52,    53,    54,    55,    56,    62,    66,    68,    70,
      71,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    85,    87,    90,    91,    92,    93,    94,    95,
      97,    99,    19,     9,    86,    74,    22,    74,    84,     1,
      24,    68,    72,    74,    74,    74,    74,     9,    81,    81,
      19,    19,    19,    68,    71,    96,    19,    19,     9,    74,
      19,     0,    67,    25,    67,    25,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    42,
      43,    44,    10,    12,    13,    14,    15,    16,    21,    46,
      47,    89,    25,    25,    25,    25,    20,    74,    88,    10,
      26,    20,    22,    26,    24,    68,    74,    69,    70,    73,
      90,    91,    92,    93,    73,    51,    74,    74,    19,    74,
      66,    66,    74,    74,    74,    74,    74,    74,    74,    74,
      74,    74,    74,    74,    74,    74,    74,    74,    74,    74,
      74,    74,    74,    74,    27,    74,    21,    20,    26,    74,
       9,    74,    20,    25,    20,    19,    20,    20,     9,    20,
      98,    20,    27,    74,    22,    27,    27,    74,    74,    10,
      96,    73,    96,    73,    68,    71,    20,    26,    22,    22,
      27,    22,    27,    74,    27,    74,    22,    27,    74,    49,
      25,    20,    68,    71,     9,    22,    74,    22,    74,    22,
      27,    22,    22,    27,    22,    27,    74,    96,    69,    25,
      22,    22,    22,    74,    22,    74,    22,    74,    22,    27,
      20,    22,    22,    22,    22,    74,    96,    22
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    65,    66,    66,    66,    66,    67,    68,    68,    68,
      68,    68,    68,    68,    68,    68,    68,    68,    68,    69,
      69,    69,    69,    69,    69,    70,    71,    71,    72,    72,
      73,    74,    74,    74,    74,    74,    74,    75,    75,    76,
      76,    76,    76,    76,    76,    77,    77,    77,    77,    78,
      78,    78,    78,    78,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    79,
      80,    80,    80,    80,    80,    80,    80,    81,    81,    82,
      82,    83,    84,    84,    85,    86,    86,    86,    86,    87,
      87,    88,    88,    89,    89,    89,    89,    89,    89,    89,
      89,    89,    89,    89,    89,    89,    89,    89,    89,    89,
      89,    89,    89,    89,    89,    90,    90,    91,    92,    93,
      94,    94,    95,    95,    96,    96,    97,    97,    97,    97,
      98,    98,    99,    99
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     3,     1,     0,     0,     2,     1,     1,
       1,     1,     2,     2,     2,     1,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     0,     3,     2,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       3,     3,     3,     3,     3,     2,     2,     2,     2,     2,
       2,     3,     2,     2,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     3,
       2,     4,     1,     3,     2,     1,     3,     3,     5,     4,
       3,     1,     3,     3,     5,     6,     7,     4,     5,     6,
       4,     5,     6,     4,     4,     6,     7,     8,     5,     6,
       7,     5,     6,     7,     5,     5,     7,     9,     5,     7,
       1,     4,     1,     4,     1,     1,     6,     5,     6,     5,
       1,     3,     1,     2
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
#line 1790 "y.tab.c"
    break;

  case 6: /* execute_statement: %empty  */
#line 141 "bello.y"
    { 
        //printf("statement type: %d\n",$<stmt>0->typ); 
        exctStmt(glbEnvr, glbEnvr, (yyvsp[0].stmt)); 
    }
#line 1799 "y.tab.c"
    break;

  case 7: /* single_statement: expression_statement SEMICOLON  */
#line 148 "bello.y"
                                     { (yyval.stmt)=(yyvsp[-1].stmt); }
#line 1805 "y.tab.c"
    break;

  case 8: /* single_statement: if_statement  */
#line 149 "bello.y"
                   { (yyval.stmt)=(yyvsp[0].stmt); }
#line 1811 "y.tab.c"
    break;

  case 9: /* single_statement: for_statement  */
#line 150 "bello.y"
                    { (yyval.stmt)=(yyvsp[0].stmt); }
#line 1817 "y.tab.c"
    break;

  case 10: /* single_statement: while_statement  */
#line 151 "bello.y"
                      { (yyval.stmt)=(yyvsp[0].stmt); }
#line 1823 "y.tab.c"
    break;

  case 11: /* single_statement: do_while_statement  */
#line 152 "bello.y"
                         { (yyval.stmt)=(yyvsp[0].stmt); }
#line 1829 "y.tab.c"
    break;

  case 12: /* single_statement: break_statement SEMICOLON  */
#line 153 "bello.y"
                               { (yyval.stmt)=(yyvsp[-1].stmt); }
#line 1835 "y.tab.c"
    break;

  case 13: /* single_statement: continue_statement SEMICOLON  */
#line 154 "bello.y"
                                   { (yyval.stmt)=(yyvsp[-1].stmt); }
#line 1841 "y.tab.c"
    break;

  case 14: /* single_statement: return_statement SEMICOLON  */
#line 155 "bello.y"
                                 { (yyval.stmt)=(yyvsp[-1].stmt); }
#line 1847 "y.tab.c"
    break;

  case 15: /* single_statement: function_define_statement  */
#line 156 "bello.y"
                                { (yyval.stmt)=(yyvsp[0].stmt); }
#line 1853 "y.tab.c"
    break;

  case 16: /* single_statement: null_statement SEMICOLON  */
#line 157 "bello.y"
                               { (yyval.stmt)=(yyvsp[-1].stmt); }
#line 1859 "y.tab.c"
    break;

  case 17: /* single_statement: var_statement SEMICOLON  */
#line 158 "bello.y"
                              { (yyval.stmt) = (yyvsp[-1].stmt); }
#line 1865 "y.tab.c"
    break;

  case 18: /* single_statement: error  */
#line 160 "bello.y"
    { 
        //system("pause");  
        (yyval.stmt)=bldNllStmt(); 
        //printf("statement error. %d : %s\n", $$->typ, yytext); 
        yyclearin; 
        yyerrok; 
    }
#line 1877 "y.tab.c"
    break;

  case 25: /* null_statement: %empty  */
#line 180 "bello.y"
      { (yyval.stmt)=bldNllStmt(); }
#line 1883 "y.tab.c"
    break;

  case 26: /* statement_block: LEFT_BRACE block_list RIGHT_BRACE  */
#line 183 "bello.y"
                                        { (yyval.stmt)=(yyvsp[-1].stmt); }
#line 1889 "y.tab.c"
    break;

  case 27: /* statement_block: LEFT_BRACE RIGHT_BRACE  */
#line 184 "bello.y"
                             { (yyval.stmt)=bldNllStmt(); }
#line 1895 "y.tab.c"
    break;

  case 28: /* block_list: single_statement  */
#line 188 "bello.y"
    { 
        (yyval.stmt)=bldStmtBlk(); 
        stmtBlkAdd((yyval.stmt), (yyvsp[0].stmt)); 
    }
#line 1904 "y.tab.c"
    break;

  case 29: /* block_list: block_list single_statement  */
#line 193 "bello.y"
    {
        (yyval.stmt) = stmtBlkAdd((yyvsp[-1].stmt) ,(yyvsp[0].stmt));
    }
#line 1912 "y.tab.c"
    break;

  case 30: /* expression_statement: expression  */
#line 200 "bello.y"
    { 
        (yyval.stmt)=bldExpStmt((yyvsp[0].exp)); 
    }
#line 1920 "y.tab.c"
    break;

  case 33: /* expression: unary_expression  */
#line 207 "bello.y"
                       { (yyval.exp)=(yyvsp[0].exp); }
#line 1926 "y.tab.c"
    break;

  case 34: /* expression: binary_expression  */
#line 208 "bello.y"
                        { (yyval.exp)=(yyvsp[0].exp); }
#line 1932 "y.tab.c"
    break;

  case 35: /* expression: array_expression  */
#line 209 "bello.y"
                       { (yyval.exp)=(yyvsp[0].exp); }
#line 1938 "y.tab.c"
    break;

  case 36: /* expression: new_array_expression  */
#line 210 "bello.y"
                           { (yyval.exp) = (yyvsp[0].exp); }
#line 1944 "y.tab.c"
    break;

  case 39: /* assign_expression: lvalue_expression ASSIGN expression  */
#line 217 "bello.y"
                                          { (yyval.exp)=bldAsgnExp((yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 1950 "y.tab.c"
    break;

  case 40: /* assign_expression: lvalue_expression ADD_ASSIGN expression  */
#line 218 "bello.y"
                                              { (yyval.exp)=bldAsgnExp((yyvsp[-2].exp), bldBnrExp(ADD, (yyvsp[-2].exp), (yyvsp[0].exp))); }
#line 1956 "y.tab.c"
    break;

  case 41: /* assign_expression: lvalue_expression SUB_ASSIGN expression  */
#line 219 "bello.y"
                                              { (yyval.exp)=bldAsgnExp((yyvsp[-2].exp), bldBnrExp(SUB, (yyvsp[-2].exp), (yyvsp[0].exp))); }
#line 1962 "y.tab.c"
    break;

  case 42: /* assign_expression: lvalue_expression MUL_ASSIGN expression  */
#line 220 "bello.y"
                                              { (yyval.exp)=bldAsgnExp((yyvsp[-2].exp), bldBnrExp(MUL, (yyvsp[-2].exp), (yyvsp[0].exp))); }
#line 1968 "y.tab.c"
    break;

  case 43: /* assign_expression: lvalue_expression DIV_ASSIGN expression  */
#line 221 "bello.y"
                                              { (yyval.exp)=bldAsgnExp((yyvsp[-2].exp), bldBnrExp(DIV, (yyvsp[-2].exp), (yyvsp[0].exp))); }
#line 1974 "y.tab.c"
    break;

  case 44: /* assign_expression: lvalue_expression MOD_ASSIGN expression  */
#line 222 "bello.y"
                                              { (yyval.exp)=bldAsgnExp((yyvsp[-2].exp), bldBnrExp(MOD, (yyvsp[-2].exp), (yyvsp[0].exp))); }
#line 1980 "y.tab.c"
    break;

  case 45: /* self_operation_expression: INCREMENT lvalue_expression  */
#line 226 "bello.y"
                                  { (yyval.exp)=bldUnrExp(PREFIX_INCREMENT, (yyvsp[0].exp)); }
#line 1986 "y.tab.c"
    break;

  case 46: /* self_operation_expression: DECREMENT lvalue_expression  */
#line 227 "bello.y"
                                  { (yyval.exp)=bldUnrExp(PREFIX_DECREMENT, (yyvsp[0].exp)); }
#line 1992 "y.tab.c"
    break;

  case 47: /* self_operation_expression: lvalue_expression INCREMENT  */
#line 228 "bello.y"
                                  { (yyval.exp)=bldUnrExp(SUFFIX_INCREMENT, (yyvsp[-1].exp)); }
#line 1998 "y.tab.c"
    break;

  case 48: /* self_operation_expression: lvalue_expression DECREMENT  */
#line 229 "bello.y"
                                  { (yyval.exp)=bldUnrExp(SUFFIX_DECREMENT, (yyvsp[-1].exp)); }
#line 2004 "y.tab.c"
    break;

  case 49: /* unary_expression: SUB expression  */
#line 232 "bello.y"
                                      { (yyval.exp) = bldUnrExp(SUB, (yyvsp[0].exp)); }
#line 2010 "y.tab.c"
    break;

  case 50: /* unary_expression: ADD expression  */
#line 233 "bello.y"
                                     { (yyval.exp) = bldUnrExp(ADD, (yyvsp[0].exp)); }
#line 2016 "y.tab.c"
    break;

  case 51: /* unary_expression: LEFT_PAREN expression RIGHT_PAREN  */
#line 234 "bello.y"
                                        { (yyval.exp)=(yyvsp[-1].exp); }
#line 2022 "y.tab.c"
    break;

  case 52: /* unary_expression: NOT expression  */
#line 235 "bello.y"
                     { (yyval.exp)=bldUnrExp(NOT, (yyvsp[0].exp)); }
#line 2028 "y.tab.c"
    break;

  case 53: /* unary_expression: BIT_NOT expression  */
#line 236 "bello.y"
                         { (yyval.exp)=bldUnrExp(BIT_NOT, (yyvsp[0].exp)); }
#line 2034 "y.tab.c"
    break;

  case 54: /* binary_expression: expression ADD expression  */
#line 239 "bello.y"
                                { (yyval.exp)=bldBnrExp(ADD, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2040 "y.tab.c"
    break;

  case 55: /* binary_expression: expression SUB expression  */
#line 240 "bello.y"
                                { (yyval.exp)=bldBnrExp(SUB, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2046 "y.tab.c"
    break;

  case 56: /* binary_expression: expression MUL expression  */
#line 241 "bello.y"
                                { (yyval.exp)=bldBnrExp(MUL, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2052 "y.tab.c"
    break;

  case 57: /* binary_expression: expression DIV expression  */
#line 242 "bello.y"
                                { (yyval.exp)=bldBnrExp(DIV, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2058 "y.tab.c"
    break;

  case 58: /* binary_expression: expression MOD expression  */
#line 243 "bello.y"
                                { (yyval.exp)=bldBnrExp(MOD, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2064 "y.tab.c"
    break;

  case 59: /* binary_expression: expression AND expression  */
#line 244 "bello.y"
                                { (yyval.exp)=bldBnrExp(AND, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2070 "y.tab.c"
    break;

  case 60: /* binary_expression: expression OR expression  */
#line 245 "bello.y"
                               { (yyval.exp)=bldBnrExp(OR, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2076 "y.tab.c"
    break;

  case 61: /* binary_expression: expression EQ expression  */
#line 246 "bello.y"
                               { (yyval.exp)=bldBnrExp(EQ, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2082 "y.tab.c"
    break;

  case 62: /* binary_expression: expression NE expression  */
#line 247 "bello.y"
                               { (yyval.exp)=bldBnrExp(NE, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2088 "y.tab.c"
    break;

  case 63: /* binary_expression: expression GT expression  */
#line 248 "bello.y"
                               { (yyval.exp)=bldBnrExp(GT, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2094 "y.tab.c"
    break;

  case 64: /* binary_expression: expression GE expression  */
#line 249 "bello.y"
                               { (yyval.exp)=bldBnrExp(GE, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2100 "y.tab.c"
    break;

  case 65: /* binary_expression: expression LT expression  */
#line 250 "bello.y"
                               { (yyval.exp)=bldBnrExp(LT, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2106 "y.tab.c"
    break;

  case 66: /* binary_expression: expression LE expression  */
#line 251 "bello.y"
                               { (yyval.exp)=bldBnrExp(LE, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2112 "y.tab.c"
    break;

  case 67: /* binary_expression: expression BIT_AND expression  */
#line 252 "bello.y"
                                    { (yyval.exp)=bldBnrExp(BIT_AND, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2118 "y.tab.c"
    break;

  case 68: /* binary_expression: expression BIT_OR expression  */
#line 253 "bello.y"
                                   { (yyval.exp)=bldBnrExp(BIT_OR, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2124 "y.tab.c"
    break;

  case 69: /* binary_expression: expression BIT_XOR expression  */
#line 254 "bello.y"
                                    { (yyval.exp)=bldBnrExp(BIT_XOR, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2130 "y.tab.c"
    break;

  case 70: /* value_expression: INT_VALUE  */
#line 258 "bello.y"
                { (yyval.exp)=bldCnstIntExp((yyvsp[0].intVl)); /*printf("Get data: %d\n",$1);*/ }
#line 2136 "y.tab.c"
    break;

  case 71: /* value_expression: FLOAT_VALUE  */
#line 259 "bello.y"
                  { (yyval.exp)=bldCnstFltExp((yyvsp[0].fltVl)); }
#line 2142 "y.tab.c"
    break;

  case 72: /* value_expression: BOOLEAN_VALUE  */
#line 260 "bello.y"
                    { (yyval.exp)=bldCnstBlnExp((yyvsp[0].blnVl)); }
#line 2148 "y.tab.c"
    break;

  case 73: /* value_expression: STRING_VALUE  */
#line 261 "bello.y"
                   { (yyval.exp)=bldCnstStrExp((yyvsp[0].strVl)); }
#line 2154 "y.tab.c"
    break;

  case 74: /* value_expression: NULL_VALUE  */
#line 262 "bello.y"
                 { (yyval.exp)=bldCnstNllExp(); }
#line 2160 "y.tab.c"
    break;

  case 77: /* lvalue_expression: IDENTIFER  */
#line 267 "bello.y"
                { (yyval.exp)= bldLvlExp(bldVrbExp((yyvsp[0].idtf))); }
#line 2166 "y.tab.c"
    break;

  case 78: /* lvalue_expression: lvalue_expression evaluate_list  */
#line 269 "bello.y"
    { 
        (yyval.exp)=(yyvsp[-1].exp); 
        bldLvlExpAdd((yyvsp[-1].exp), (yyvsp[0].evlLst)); 
    }
#line 2175 "y.tab.c"
    break;

  case 79: /* array_expression: LEFT_QUAD element_list RIGHT_QUAD  */
#line 277 "bello.y"
    {
        (yyval.exp)= bldArrExp((yyvsp[-1].elmtLst));
    }
#line 2183 "y.tab.c"
    break;

  case 80: /* array_expression: LEFT_QUAD RIGHT_QUAD  */
#line 281 "bello.y"
    {
        (yyval.exp)= bldArrExp(bldElmtLst());
    }
#line 2191 "y.tab.c"
    break;

  case 81: /* new_array_expression: NEW_ARRAY LEFT_PAREN expression RIGHT_PAREN  */
#line 287 "bello.y"
    {
        (yyval.exp) = bldNewArrExp((yyvsp[-1].exp));
    }
#line 2199 "y.tab.c"
    break;

  case 82: /* element_list: expression  */
#line 293 "bello.y"
    { 
        (yyval.elmtLst)= bldElmtLst(); 
        elmtLstAdd((yyval.elmtLst), (yyvsp[0].exp)); 
    }
#line 2208 "y.tab.c"
    break;

  case 83: /* element_list: element_list COMMA expression  */
#line 298 "bello.y"
    {  
        (yyval.elmtLst)=(yyvsp[-2].elmtLst);  
        elmtLstAdd((yyval.elmtLst), (yyvsp[0].exp)); 
    }
#line 2217 "y.tab.c"
    break;

  case 84: /* var_statement: VAR assign_list  */
#line 305 "bello.y"
                      { (yyval.stmt)=bldVarStmt((yyvsp[0].asgnLst)); }
#line 2223 "y.tab.c"
    break;

  case 85: /* assign_list: IDENTIFER  */
#line 310 "bello.y"
    {
        (yyval.asgnLst)= bldAsgnLst();
        asgnLstAdd((yyval.asgnLst), bldVrbExp((yyvsp[0].idtf)), bldNllExp());
    }
#line 2232 "y.tab.c"
    break;

  case 86: /* assign_list: IDENTIFER ASSIGN expression  */
#line 315 "bello.y"
    {
        (yyval.asgnLst)= bldAsgnLst();
        asgnLstAdd((yyval.asgnLst), bldVrbExp((yyvsp[-2].idtf)), (yyvsp[0].exp));
    }
#line 2241 "y.tab.c"
    break;

  case 87: /* assign_list: assign_list COMMA IDENTIFER  */
#line 320 "bello.y"
    {
        (yyval.asgnLst)=(yyvsp[-2].asgnLst);
        asgnLstAdd((yyval.asgnLst), bldVrbExp((yyvsp[0].idtf)), bldNllExp());
    }
#line 2250 "y.tab.c"
    break;

  case 88: /* assign_list: assign_list COMMA IDENTIFER ASSIGN expression  */
#line 325 "bello.y"
    {
        (yyval.asgnLst)=(yyvsp[-4].asgnLst);
        asgnLstAdd((yyval.asgnLst), bldVrbExp((yyvsp[-2].idtf)), (yyvsp[0].exp));
    }
#line 2259 "y.tab.c"
    break;

  case 89: /* function_expression: IDENTIFER LEFT_PAREN argument_list RIGHT_PAREN  */
#line 336 "bello.y"
    {
        (yyval.exp)=bldFcnExp((yyvsp[-3].idtf), (yyvsp[-1].argLst));
    }
#line 2267 "y.tab.c"
    break;

  case 90: /* function_expression: IDENTIFER LEFT_PAREN RIGHT_PAREN  */
#line 340 "bello.y"
    {
        (yyval.exp)=bldFcnExp((yyvsp[-2].idtf), bldArgLst());
    }
#line 2275 "y.tab.c"
    break;

  case 91: /* argument_list: expression  */
#line 346 "bello.y"
    {
        (yyval.argLst)=bldArgLst();
        argLstAdd((yyval.argLst), (yyvsp[0].exp));
    }
#line 2284 "y.tab.c"
    break;

  case 92: /* argument_list: argument_list COMMA expression  */
#line 351 "bello.y"
    {
        (yyval.argLst)=(yyvsp[-2].argLst);
        argLstAdd((yyval.argLst), (yyvsp[0].exp));
    }
#line 2293 "y.tab.c"
    break;

  case 93: /* evaluate_list: LEFT_QUAD expression RIGHT_QUAD  */
#line 359 "bello.y"
    {
        (yyval.evlLst) = bldAcsLst();
        acsLstIdxAdd((yyval.evlLst), (yyvsp[-1].exp));
    }
#line 2302 "y.tab.c"
    break;

  case 94: /* evaluate_list: LEFT_QUAD expression COLON expression RIGHT_QUAD  */
#line 364 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-3].exp), (yyvsp[-1].exp), bldCnstIntExp(1));
    }
#line 2311 "y.tab.c"
    break;

  case 95: /* evaluate_list: LEFT_QUAD expression COLON expression COLON RIGHT_QUAD  */
#line 369 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-4].exp), (yyvsp[-2].exp), bldCnstIntExp(1));
    }
#line 2320 "y.tab.c"
    break;

  case 96: /* evaluate_list: LEFT_QUAD expression COLON expression COLON expression RIGHT_QUAD  */
#line 374 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-5].exp), (yyvsp[-3].exp), (yyvsp[-1].exp));
    }
#line 2329 "y.tab.c"
    break;

  case 97: /* evaluate_list: LEFT_QUAD expression COLON RIGHT_QUAD  */
#line 379 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-2].exp), bldCnstIntExp(-1), bldCnstIntExp(1));
    }
#line 2338 "y.tab.c"
    break;

  case 98: /* evaluate_list: LEFT_QUAD expression COLON COLON RIGHT_QUAD  */
#line 384 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-3].exp), bldCnstIntExp(-1), bldCnstIntExp(1));
    }
#line 2347 "y.tab.c"
    break;

  case 99: /* evaluate_list: LEFT_QUAD expression COLON COLON expression RIGHT_QUAD  */
#line 389 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-4].exp), bldCnstIntExp(-1), (yyvsp[-1].exp));
    }
#line 2356 "y.tab.c"
    break;

  case 100: /* evaluate_list: LEFT_QUAD COLON expression RIGHT_QUAD  */
#line 394 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), (yyvsp[-1].exp), bldCnstIntExp(1));
    }
#line 2365 "y.tab.c"
    break;

  case 101: /* evaluate_list: LEFT_QUAD COLON expression COLON RIGHT_QUAD  */
#line 399 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), (yyvsp[-2].exp), bldCnstIntExp(1));
    }
#line 2374 "y.tab.c"
    break;

  case 102: /* evaluate_list: LEFT_QUAD COLON expression COLON expression RIGHT_QUAD  */
#line 404 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), (yyvsp[-3].exp), (yyvsp[-1].exp));
    }
#line 2383 "y.tab.c"
    break;

  case 103: /* evaluate_list: LEFT_QUAD COLON COLON RIGHT_QUAD  */
#line 409 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), bldCnstIntExp(-1), bldCnstIntExp(1));
    }
#line 2392 "y.tab.c"
    break;

  case 104: /* evaluate_list: evaluate_list LEFT_QUAD expression RIGHT_QUAD  */
#line 414 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-3].evlLst);
        acsLstIdxAdd((yyval.evlLst),(yyvsp[-1].exp));
    }
#line 2401 "y.tab.c"
    break;

  case 105: /* evaluate_list: evaluate_list LEFT_QUAD expression COLON expression RIGHT_QUAD  */
#line 419 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-5].evlLst);
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-3].exp), (yyvsp[-1].exp), bldCnstIntExp(1));
    }
#line 2410 "y.tab.c"
    break;

  case 106: /* evaluate_list: evaluate_list LEFT_QUAD expression COLON expression COLON RIGHT_QUAD  */
#line 424 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-6].evlLst);
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-4].exp), (yyvsp[-2].exp), bldCnstIntExp(1));
    }
#line 2419 "y.tab.c"
    break;

  case 107: /* evaluate_list: evaluate_list LEFT_QUAD expression COLON expression COLON expression RIGHT_QUAD  */
#line 429 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-7].evlLst);
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-5].exp), (yyvsp[-3].exp), (yyvsp[-1].exp));
    }
#line 2428 "y.tab.c"
    break;

  case 108: /* evaluate_list: evaluate_list LEFT_QUAD expression COLON RIGHT_QUAD  */
#line 434 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-4].evlLst);
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-2].exp), bldCnstIntExp(-1), bldCnstIntExp(1));
    }
#line 2437 "y.tab.c"
    break;

  case 109: /* evaluate_list: evaluate_list LEFT_QUAD expression COLON COLON RIGHT_QUAD  */
#line 439 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-5].evlLst);
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-3].exp), bldCnstIntExp(-1), bldCnstIntExp(1));
    }
#line 2446 "y.tab.c"
    break;

  case 110: /* evaluate_list: evaluate_list LEFT_QUAD expression COLON COLON expression RIGHT_QUAD  */
#line 444 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-6].evlLst);
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-4].exp), bldCnstIntExp(-1), (yyvsp[-1].exp));
    }
#line 2455 "y.tab.c"
    break;

  case 111: /* evaluate_list: evaluate_list LEFT_QUAD COLON expression RIGHT_QUAD  */
#line 449 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-4].evlLst);
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), (yyvsp[-1].exp), bldCnstIntExp(1));
    }
#line 2464 "y.tab.c"
    break;

  case 112: /* evaluate_list: evaluate_list LEFT_QUAD COLON expression COLON RIGHT_QUAD  */
#line 454 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-5].evlLst);
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), (yyvsp[-2].exp), bldCnstIntExp(1));
    }
#line 2473 "y.tab.c"
    break;

  case 113: /* evaluate_list: evaluate_list LEFT_QUAD COLON expression COLON expression RIGHT_QUAD  */
#line 459 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-6].evlLst);
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), (yyvsp[-3].exp), (yyvsp[-1].exp));
    }
#line 2482 "y.tab.c"
    break;

  case 114: /* evaluate_list: evaluate_list LEFT_QUAD COLON COLON RIGHT_QUAD  */
#line 464 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-4].evlLst);
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), bldCnstIntExp(-1), bldCnstIntExp(1));
    }
#line 2491 "y.tab.c"
    break;

  case 115: /* if_statement: IF LEFT_PAREN expression RIGHT_PAREN structure_statement  */
#line 482 "bello.y"
    {
        (yyval.stmt)=bldIfStmt((yyvsp[-2].exp),(yyvsp[0].stmt));
    }
#line 2499 "y.tab.c"
    break;

  case 116: /* if_statement: IF LEFT_PAREN expression RIGHT_PAREN structure_statement ELSE structure_statement  */
#line 486 "bello.y"
    {
        (yyval.stmt)=bldIfElsStmt((yyvsp[-4].exp), (yyvsp[-2].stmt), (yyvsp[0].stmt));
    }
#line 2507 "y.tab.c"
    break;

  case 117: /* for_statement: FOR LEFT_PAREN single_statement_no_semicolon SEMICOLON expression_statement SEMICOLON single_statement_no_semicolon RIGHT_PAREN structure_statement  */
#line 492 "bello.y"
    {
        (yyval.stmt)= bldForStmt((yyvsp[-6].stmt), (yyvsp[-4].stmt), (yyvsp[-2].stmt), (yyvsp[0].stmt));  
    }
#line 2515 "y.tab.c"
    break;

  case 118: /* while_statement: WHILE LEFT_PAREN expression_statement RIGHT_PAREN structure_statement  */
#line 498 "bello.y"
    {
        (yyval.stmt)= bldWhlStmt((yyvsp[-2].stmt), (yyvsp[0].stmt));
    }
#line 2523 "y.tab.c"
    break;

  case 119: /* do_while_statement: DO structure_statement WHILE LEFT_PAREN expression_statement RIGHT_PAREN SEMICOLON  */
#line 504 "bello.y"
    {
        (yyval.stmt)= bldDoWhlStmt((yyvsp[-2].stmt), (yyvsp[-5].stmt));
    }
#line 2531 "y.tab.c"
    break;

  case 120: /* break_statement: BREAK  */
#line 509 "bello.y"
            { (yyval.stmt)= bldBrkStmt(bldCnstIntExp(1)); }
#line 2537 "y.tab.c"
    break;

  case 121: /* break_statement: BREAK LEFT_PAREN expression RIGHT_PAREN  */
#line 510 "bello.y"
                                              { (yyval.stmt)= bldBrkStmt((yyvsp[-1].exp)); }
#line 2543 "y.tab.c"
    break;

  case 122: /* continue_statement: CONTINUE  */
#line 513 "bello.y"
               { (yyval.stmt)= bldCntnStmt(bldCnstIntExp(1)); }
#line 2549 "y.tab.c"
    break;

  case 123: /* continue_statement: CONTINUE LEFT_PAREN expression RIGHT_PAREN  */
#line 514 "bello.y"
                                                 { (yyval.stmt)= bldCntnStmt((yyvsp[-1].exp)); }
#line 2555 "y.tab.c"
    break;

  case 126: /* function_define_statement: FUNC IDENTIFER LEFT_PAREN parameter_list RIGHT_PAREN statement_block  */
#line 522 "bello.y"
    {
        struct FcnStrc* fcn;

        fcn=bldFcn((yyvsp[-4].idtf), (yyvsp[-2].prmLst), (yyvsp[0].stmt));

        (yyval.stmt) = bldFcnStmt(fcn);
    }
#line 2567 "y.tab.c"
    break;

  case 127: /* function_define_statement: FUNC IDENTIFER LEFT_PAREN RIGHT_PAREN statement_block  */
#line 530 "bello.y"
    {
        struct FcnStrc *fcn;

        fcn=bldFcn((yyvsp[-3].idtf), bldPrmLst(), (yyvsp[0].stmt));

        (yyval.stmt) = bldFcnStmt(fcn);
    }
#line 2579 "y.tab.c"
    break;

  case 128: /* function_define_statement: FUNC IDENTIFER LEFT_PAREN parameter_list RIGHT_PAREN single_statement  */
#line 538 "bello.y"
    {
        struct FcnStrc* fcn;

        fcn=bldFcn((yyvsp[-4].idtf), (yyvsp[-2].prmLst), (yyvsp[0].stmt));

        (yyval.stmt) = bldFcnStmt(fcn);
    }
#line 2591 "y.tab.c"
    break;

  case 129: /* function_define_statement: FUNC IDENTIFER LEFT_PAREN RIGHT_PAREN single_statement  */
#line 546 "bello.y"
    {
        struct FcnStrc *fcn;

        fcn=bldFcn((yyvsp[-3].idtf), bldPrmLst(), (yyvsp[0].stmt));

        (yyval.stmt) = bldFcnStmt(fcn);
    }
#line 2603 "y.tab.c"
    break;

  case 130: /* parameter_list: IDENTIFER  */
#line 557 "bello.y"
    {
        (yyval.prmLst) = bldPrmLst();
        prmLstAdd((yyval.prmLst), bldVrbExp((yyvsp[0].idtf)));
    }
#line 2612 "y.tab.c"
    break;

  case 131: /* parameter_list: parameter_list COMMA IDENTIFER  */
#line 562 "bello.y"
    { 
        (yyval.prmLst)=(yyvsp[-2].prmLst);  
        prmLstAdd((yyval.prmLst), bldVrbExp((yyvsp[0].idtf)));
    }
#line 2621 "y.tab.c"
    break;

  case 132: /* return_statement: RETURN  */
#line 568 "bello.y"
             { (yyval.stmt)=bldRtnStmt(NULL); }
#line 2627 "y.tab.c"
    break;

  case 133: /* return_statement: RETURN expression  */
#line 569 "bello.y"
                        { (yyval.stmt)=bldRtnStmt((yyvsp[0].exp)); }
#line 2633 "y.tab.c"
    break;


#line 2637 "y.tab.c"

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

#line 572 "bello.y"


int main(int argc, char * argv[])
{

    //创建全局环境

    intlGlbEnvr(&glbEnvr);

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


