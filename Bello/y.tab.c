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
    LF = 258,                      /* LF  */
    INDENT = 259,                  /* INDENT  */
    INT_VALUE = 260,               /* INT_VALUE  */
    BOOLEAN_VALUE = 261,           /* BOOLEAN_VALUE  */
    FLOAT_VALUE = 262,             /* FLOAT_VALUE  */
    STRING_VALUE = 263,            /* STRING_VALUE  */
    NULL_VALUE = 264,              /* NULL_VALUE  */
    ARRAY_VALUE = 265,             /* ARRAY_VALUE  */
    IDENTIFER = 266,               /* IDENTIFER  */
    ASSIGN = 267,                  /* ASSIGN  */
    VAR = 268,                     /* VAR  */
    GLOBAL = 269,                  /* GLOBAL  */
    ADD_ASSIGN = 270,              /* ADD_ASSIGN  */
    SUB_ASSIGN = 271,              /* SUB_ASSIGN  */
    MUL_ASSIGN = 272,              /* MUL_ASSIGN  */
    DIV_ASSIGN = 273,              /* DIV_ASSIGN  */
    MOD_ASSIGN = 274,              /* MOD_ASSIGN  */
    PRINT = 275,                   /* PRINT  */
    PRINTLN = 276,                 /* PRINTLN  */
    LEFT_PAREN = 277,              /* LEFT_PAREN  */
    RIGHT_PAREN = 278,             /* RIGHT_PAREN  */
    LEFT_QUAD = 279,               /* LEFT_QUAD  */
    RIGHT_QUAD = 280,              /* RIGHT_QUAD  */
    LEFT_BRACE = 281,              /* LEFT_BRACE  */
    RIGHT_BRACE = 282,             /* RIGHT_BRACE  */
    SEMICOLON_OPTIONAL = 283,      /* SEMICOLON_OPTIONAL  */
    SEMICOLON = 284,               /* SEMICOLON  */
    COMMA = 285,                   /* COMMA  */
    COLON = 286,                   /* COLON  */
    ADD = 287,                     /* ADD  */
    SUB = 288,                     /* SUB  */
    MUL = 289,                     /* MUL  */
    DIV = 290,                     /* DIV  */
    MOD = 291,                     /* MOD  */
    EQ = 292,                      /* EQ  */
    NE = 293,                      /* NE  */
    GT = 294,                      /* GT  */
    GE = 295,                      /* GE  */
    LT = 296,                      /* LT  */
    LE = 297,                      /* LE  */
    AND = 298,                     /* AND  */
    OR = 299,                      /* OR  */
    NOT = 300,                     /* NOT  */
    BIT_AND = 301,                 /* BIT_AND  */
    BIT_OR = 302,                  /* BIT_OR  */
    BIT_XOR = 303,                 /* BIT_XOR  */
    BIT_NOT = 304,                 /* BIT_NOT  */
    INCREMENT = 305,               /* INCREMENT  */
    DECREMENT = 306,               /* DECREMENT  */
    IF = 307,                      /* IF  */
    ELSE = 308,                    /* ELSE  */
    FOR = 309,                     /* FOR  */
    WHILE = 310,                   /* WHILE  */
    DO = 311,                      /* DO  */
    CONTINUE = 312,                /* CONTINUE  */
    BREAK = 313,                   /* BREAK  */
    FUNC = 314,                    /* FUNC  */
    RETURN = 315,                  /* RETURN  */
    READ_INT = 316,                /* READ_INT  */
    READ_FLOAT = 317,              /* READ_FLOAT  */
    READ = 318,                    /* READ  */
    READ_BOOL = 319,               /* READ_BOOL  */
    READ_LINE = 320,               /* READ_LINE  */
    NEW_ARRAY = 321,               /* NEW_ARRAY  */
    MINUS_SIGN = 322,              /* MINUS_SIGN  */
    PLUS_SIGN = 323                /* PLUS_SIGN  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define LF 258
#define INDENT 259
#define INT_VALUE 260
#define BOOLEAN_VALUE 261
#define FLOAT_VALUE 262
#define STRING_VALUE 263
#define NULL_VALUE 264
#define ARRAY_VALUE 265
#define IDENTIFER 266
#define ASSIGN 267
#define VAR 268
#define GLOBAL 269
#define ADD_ASSIGN 270
#define SUB_ASSIGN 271
#define MUL_ASSIGN 272
#define DIV_ASSIGN 273
#define MOD_ASSIGN 274
#define PRINT 275
#define PRINTLN 276
#define LEFT_PAREN 277
#define RIGHT_PAREN 278
#define LEFT_QUAD 279
#define RIGHT_QUAD 280
#define LEFT_BRACE 281
#define RIGHT_BRACE 282
#define SEMICOLON_OPTIONAL 283
#define SEMICOLON 284
#define COMMA 285
#define COLON 286
#define ADD 287
#define SUB 288
#define MUL 289
#define DIV 290
#define MOD 291
#define EQ 292
#define NE 293
#define GT 294
#define GE 295
#define LT 296
#define LE 297
#define AND 298
#define OR 299
#define NOT 300
#define BIT_AND 301
#define BIT_OR 302
#define BIT_XOR 303
#define BIT_NOT 304
#define INCREMENT 305
#define DECREMENT 306
#define IF 307
#define ELSE 308
#define FOR 309
#define WHILE 310
#define DO 311
#define CONTINUE 312
#define BREAK 313
#define FUNC 314
#define RETURN 315
#define READ_INT 316
#define READ_FLOAT 317
#define READ 318
#define READ_BOOL 319
#define READ_LINE 320
#define NEW_ARRAY 321
#define MINUS_SIGN 322
#define PLUS_SIGN 323

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

#line 326 "y.tab.c"

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
  YYSYMBOL_INDENT = 4,                     /* INDENT  */
  YYSYMBOL_INT_VALUE = 5,                  /* INT_VALUE  */
  YYSYMBOL_BOOLEAN_VALUE = 6,              /* BOOLEAN_VALUE  */
  YYSYMBOL_FLOAT_VALUE = 7,                /* FLOAT_VALUE  */
  YYSYMBOL_STRING_VALUE = 8,               /* STRING_VALUE  */
  YYSYMBOL_NULL_VALUE = 9,                 /* NULL_VALUE  */
  YYSYMBOL_ARRAY_VALUE = 10,               /* ARRAY_VALUE  */
  YYSYMBOL_IDENTIFER = 11,                 /* IDENTIFER  */
  YYSYMBOL_ASSIGN = 12,                    /* ASSIGN  */
  YYSYMBOL_VAR = 13,                       /* VAR  */
  YYSYMBOL_GLOBAL = 14,                    /* GLOBAL  */
  YYSYMBOL_ADD_ASSIGN = 15,                /* ADD_ASSIGN  */
  YYSYMBOL_SUB_ASSIGN = 16,                /* SUB_ASSIGN  */
  YYSYMBOL_MUL_ASSIGN = 17,                /* MUL_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 18,                /* DIV_ASSIGN  */
  YYSYMBOL_MOD_ASSIGN = 19,                /* MOD_ASSIGN  */
  YYSYMBOL_PRINT = 20,                     /* PRINT  */
  YYSYMBOL_PRINTLN = 21,                   /* PRINTLN  */
  YYSYMBOL_LEFT_PAREN = 22,                /* LEFT_PAREN  */
  YYSYMBOL_RIGHT_PAREN = 23,               /* RIGHT_PAREN  */
  YYSYMBOL_LEFT_QUAD = 24,                 /* LEFT_QUAD  */
  YYSYMBOL_RIGHT_QUAD = 25,                /* RIGHT_QUAD  */
  YYSYMBOL_LEFT_BRACE = 26,                /* LEFT_BRACE  */
  YYSYMBOL_RIGHT_BRACE = 27,               /* RIGHT_BRACE  */
  YYSYMBOL_SEMICOLON_OPTIONAL = 28,        /* SEMICOLON_OPTIONAL  */
  YYSYMBOL_SEMICOLON = 29,                 /* SEMICOLON  */
  YYSYMBOL_COMMA = 30,                     /* COMMA  */
  YYSYMBOL_COLON = 31,                     /* COLON  */
  YYSYMBOL_ADD = 32,                       /* ADD  */
  YYSYMBOL_SUB = 33,                       /* SUB  */
  YYSYMBOL_MUL = 34,                       /* MUL  */
  YYSYMBOL_DIV = 35,                       /* DIV  */
  YYSYMBOL_MOD = 36,                       /* MOD  */
  YYSYMBOL_EQ = 37,                        /* EQ  */
  YYSYMBOL_NE = 38,                        /* NE  */
  YYSYMBOL_GT = 39,                        /* GT  */
  YYSYMBOL_GE = 40,                        /* GE  */
  YYSYMBOL_LT = 41,                        /* LT  */
  YYSYMBOL_LE = 42,                        /* LE  */
  YYSYMBOL_AND = 43,                       /* AND  */
  YYSYMBOL_OR = 44,                        /* OR  */
  YYSYMBOL_NOT = 45,                       /* NOT  */
  YYSYMBOL_BIT_AND = 46,                   /* BIT_AND  */
  YYSYMBOL_BIT_OR = 47,                    /* BIT_OR  */
  YYSYMBOL_BIT_XOR = 48,                   /* BIT_XOR  */
  YYSYMBOL_BIT_NOT = 49,                   /* BIT_NOT  */
  YYSYMBOL_INCREMENT = 50,                 /* INCREMENT  */
  YYSYMBOL_DECREMENT = 51,                 /* DECREMENT  */
  YYSYMBOL_IF = 52,                        /* IF  */
  YYSYMBOL_ELSE = 53,                      /* ELSE  */
  YYSYMBOL_FOR = 54,                       /* FOR  */
  YYSYMBOL_WHILE = 55,                     /* WHILE  */
  YYSYMBOL_DO = 56,                        /* DO  */
  YYSYMBOL_CONTINUE = 57,                  /* CONTINUE  */
  YYSYMBOL_BREAK = 58,                     /* BREAK  */
  YYSYMBOL_FUNC = 59,                      /* FUNC  */
  YYSYMBOL_RETURN = 60,                    /* RETURN  */
  YYSYMBOL_READ_INT = 61,                  /* READ_INT  */
  YYSYMBOL_READ_FLOAT = 62,                /* READ_FLOAT  */
  YYSYMBOL_READ = 63,                      /* READ  */
  YYSYMBOL_READ_BOOL = 64,                 /* READ_BOOL  */
  YYSYMBOL_READ_LINE = 65,                 /* READ_LINE  */
  YYSYMBOL_NEW_ARRAY = 66,                 /* NEW_ARRAY  */
  YYSYMBOL_MINUS_SIGN = 67,                /* MINUS_SIGN  */
  YYSYMBOL_PLUS_SIGN = 68,                 /* PLUS_SIGN  */
  YYSYMBOL_YYACCEPT = 69,                  /* $accept  */
  YYSYMBOL_statement = 70,                 /* statement  */
  YYSYMBOL_execute_statement = 71,         /* execute_statement  */
  YYSYMBOL_single_statement = 72,          /* single_statement  */
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
  YYSYMBOL_function_expression = 85,       /* function_expression  */
  YYSYMBOL_argument_list = 86,             /* argument_list  */
  YYSYMBOL_evaluate_list = 87,             /* evaluate_list  */
  YYSYMBOL_if_statement = 88               /* if_statement  */
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
#define YYLAST   1076

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  69
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  20
/* YYNRULES -- Number of rules.  */
#define YYNRULES  91
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  164

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   323


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
      65,    66,    67,    68
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   137,   137,   138,   139,   140,   141,   145,   151,   152,
     163,   201,   207,   208,   209,   210,   211,   212,   215,   216,
     219,   220,   221,   222,   223,   224,   228,   229,   230,   231,
     234,   235,   236,   237,   238,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   260,   261,   262,   263,   264,   265,   266,   269,   270,
     278,   282,   288,   294,   299,   339,   343,   349,   354,   362,
     367,   372,   377,   382,   387,   392,   397,   402,   407,   412,
     417,   422,   427,   432,   437,   442,   447,   452,   457,   462,
     467,   485
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
  "\"end of file\"", "error", "\"invalid token\"", "LF", "INDENT",
  "INT_VALUE", "BOOLEAN_VALUE", "FLOAT_VALUE", "STRING_VALUE",
  "NULL_VALUE", "ARRAY_VALUE", "IDENTIFER", "ASSIGN", "VAR", "GLOBAL",
  "ADD_ASSIGN", "SUB_ASSIGN", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN",
  "PRINT", "PRINTLN", "LEFT_PAREN", "RIGHT_PAREN", "LEFT_QUAD",
  "RIGHT_QUAD", "LEFT_BRACE", "RIGHT_BRACE", "SEMICOLON_OPTIONAL",
  "SEMICOLON", "COMMA", "COLON", "ADD", "SUB", "MUL", "DIV", "MOD", "EQ",
  "NE", "GT", "GE", "LT", "LE", "AND", "OR", "NOT", "BIT_AND", "BIT_OR",
  "BIT_XOR", "BIT_NOT", "INCREMENT", "DECREMENT", "IF", "ELSE", "FOR",
  "WHILE", "DO", "CONTINUE", "BREAK", "FUNC", "RETURN", "READ_INT",
  "READ_FLOAT", "READ", "READ_BOOL", "READ_LINE", "NEW_ARRAY",
  "MINUS_SIGN", "PLUS_SIGN", "$accept", "statement", "execute_statement",
  "single_statement", "expression_statement", "expression",
  "lvalue_operation_expression", "assign_expression",
  "self_operation_expression", "unary_expression", "binary_expression",
  "value_expression", "lvalue_expression", "array_expression",
  "new_array_expression", "element_list", "function_expression",
  "argument_list", "evaluate_list", "if_statement", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-27)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-7)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      75,   -27,   142,   -27,   -27,   -27,   177,   -27,   -27,   -27,
     -27,   -27,     2,   642,   270,   642,   642,   642,   642,    18,
      18,    41,    42,    70,   -27,   -26,   -27,   -27,   -27,   -27,
     -27,   -27,    15,   -27,   -27,   -27,   -27,    71,   301,   663,
     -27,   -26,    -2,   -27,   -27,   -27,   -27,   -27,    61,    61,
     642,   642,   -27,   642,   642,   642,   642,   642,   642,   642,
     642,   642,   642,   642,   642,   642,   642,   642,   642,   642,
     642,   642,   642,   642,   642,   332,   -27,   -27,    66,   -27,
     -27,   -26,    -4,   -27,   -27,   642,   689,   711,   -27,    53,
      53,   -27,   -27,   -27,    35,    35,    35,    35,    35,    35,
     985,   968,  1034,  1002,  1019,   -26,   -26,   -26,   -26,   -26,
     -26,   363,   731,   394,   -27,   642,   -26,   -27,   -27,    52,
     751,   -27,   208,   425,   771,   -26,   -27,   -27,   456,   -27,
     487,   791,    67,   811,   -27,   239,   -27,   851,   -27,   871,
     -27,   518,   -27,   -27,   549,   -27,   580,   831,   -27,   -27,
     -27,   891,   -27,   911,   -27,   931,   -27,   611,   -27,   -27,
     -27,   -27,   951,   -27
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     5,     0,     1,    10,     4,     0,    51,    53,    52,
      54,    55,    58,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     8,    11,    13,    18,    19,    14,
      15,    12,    57,    16,    17,    56,     9,     0,     0,     0,
      61,    63,     0,    31,    30,    33,    34,    58,    26,    27,
       0,     0,     7,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    28,    29,    59,     3,
      66,    67,     0,    32,    60,     0,     0,     0,     2,    35,
      36,    37,    38,    39,    42,    43,    44,    45,    46,    47,
      40,    41,    48,    49,    50,    20,    21,    22,    23,    24,
      25,     0,     0,     0,    65,     0,    64,    91,    62,     0,
       0,    69,     0,     0,     0,    68,    79,    76,     0,    73,
       0,     0,     0,     0,    80,     0,    77,     0,    74,     0,
      70,     0,    90,    87,     0,    84,     0,     0,    78,    75,
      71,     0,    88,     0,    85,     0,    81,     0,    72,    89,
      86,    82,     0,    83
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -27,   -27,   -27,    85,   -27,   -13,   -27,   -27,   -27,   -27,
     -27,   -27,    16,   -27,   -27,   -27,   -27,   -27,   -27,   -27
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     2,    88,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    42,    35,    82,    78,    36
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      39,    41,    43,    44,    45,    46,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,   114,
      66,    67,    68,    84,    38,    81,   115,    69,    85,    47,
      70,    71,    72,    73,    74,    48,    49,    86,    87,    75,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   112,    50,    51,    76,    77,    53,    54,    55,
      56,    57,   116,    52,    79,    -6,     1,   126,    -6,    -6,
      -6,    -6,    -6,    -6,    -6,    75,    -6,    55,    56,    57,
     113,    37,   142,     0,     0,     0,     0,    -6,   120,    -6,
     124,     0,   125,     0,     0,     0,     0,    -6,    -6,   131,
     133,     0,     0,     0,     0,   137,     0,   139,     0,     0,
      -6,     0,   147,     0,    -6,    -6,    -6,    -6,   151,     0,
       0,   153,     0,   155,     0,     0,     0,     0,     0,     0,
       0,    -6,     3,     4,   162,     5,     6,     7,     8,     9,
      10,    11,     0,    12,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    13,     0,    14,     0,     0,     0,
       0,     0,     0,     0,    15,    16,     0,     0,     4,     0,
       0,     0,     7,     8,     9,    10,    11,    17,    12,     0,
       0,    18,    19,    20,    21,     0,     0,     0,     0,    13,
       0,    14,     0,     0,     0,     0,     0,     0,    22,    15,
      16,     0,     0,     7,     8,     9,    10,    11,     0,    12,
       0,     0,    17,     0,     0,     0,    18,    19,    20,    21,
      13,     0,    14,   129,     0,     0,     0,     0,     0,   130,
      15,    16,     0,    22,     7,     8,     9,    10,    11,     0,
      12,     0,     0,    17,     0,     0,     0,    18,    19,    20,
       0,    13,     0,    14,   145,     0,     0,     0,     0,     0,
     146,    15,    16,     0,    22,     7,     8,     9,    10,    11,
       0,    12,     0,     0,    17,     0,     0,     0,    18,    19,
      20,     0,    13,     0,    14,    40,     0,     0,     0,     0,
       0,     0,    15,    16,     0,    22,     7,     8,     9,    10,
      11,     0,    12,     0,     0,    17,     0,     0,     0,    18,
      19,    20,     0,    13,    80,    14,     0,     0,     0,     0,
       0,     0,     0,    15,    16,     0,    22,     7,     8,     9,
      10,    11,     0,    12,     0,     0,    17,     0,     0,     0,
      18,    19,    20,     0,    13,     0,    14,     0,     0,     0,
       0,     0,     0,   111,    15,    16,     0,    22,     7,     8,
       9,    10,    11,     0,    12,     0,     0,    17,     0,     0,
       0,    18,    19,    20,     0,    13,     0,    14,     0,     0,
       0,     0,     0,     0,   119,    15,    16,     0,    22,     7,
       8,     9,    10,    11,     0,    12,     0,     0,    17,     0,
       0,     0,    18,    19,    20,     0,    13,     0,    14,     0,
       0,     0,     0,     0,     0,   123,    15,    16,     0,    22,
       7,     8,     9,    10,    11,     0,    12,     0,     0,    17,
       0,     0,     0,    18,    19,    20,     0,    13,     0,    14,
       0,     0,     0,     0,     0,     0,   132,    15,    16,     0,
      22,     7,     8,     9,    10,    11,     0,    12,     0,     0,
      17,     0,     0,     0,    18,    19,    20,     0,    13,     0,
      14,   136,     0,     0,     0,     0,     0,     0,    15,    16,
       0,    22,     7,     8,     9,    10,    11,     0,    12,     0,
       0,    17,     0,     0,     0,    18,    19,    20,     0,    13,
       0,    14,   138,     0,     0,     0,     0,     0,     0,    15,
      16,     0,    22,     7,     8,     9,    10,    11,     0,    12,
       0,     0,    17,     0,     0,     0,    18,    19,    20,     0,
      13,     0,    14,   150,     0,     0,     0,     0,     0,     0,
      15,    16,     0,    22,     7,     8,     9,    10,    11,     0,
      12,     0,     0,    17,     0,     0,     0,    18,    19,    20,
       0,    13,     0,    14,   152,     0,     0,     0,     0,     0,
       0,    15,    16,     0,    22,     7,     8,     9,    10,    11,
       0,    12,     0,     0,    17,     0,     0,     0,    18,    19,
      20,     0,    13,     0,    14,   154,     0,     0,     0,     0,
       0,     0,    15,    16,     0,    22,     7,     8,     9,    10,
      11,     0,    12,     0,     0,    17,     0,     0,     0,    18,
      19,    20,     0,    13,     0,    14,   161,     0,     0,     0,
       0,     0,     0,    15,    16,     0,    22,     7,     8,     9,
      10,    11,     0,    12,     0,     0,    17,     0,     0,     0,
      18,    19,    20,     0,    13,     0,    14,     0,     0,     0,
       0,     0,     0,     0,    15,    16,     0,    22,     0,     0,
       0,     0,     0,     0,     0,     0,    83,    17,     0,     0,
       0,    18,    19,    20,     0,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    22,    66,
      67,    68,   117,     0,     0,     0,     0,     0,     0,     0,
       0,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,   118,    66,    67,    68,     0,     0,
       0,     0,     0,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,   121,    66,    67,    68,
       0,     0,   122,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,   127,    66,    67,    68,
       0,     0,   128,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,   134,    66,    67,    68,
       0,     0,   135,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,   140,    66,    67,    68,
       0,     0,   141,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,   143,    66,    67,    68,
       0,     0,   144,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,   156,    66,    67,    68,
       0,     0,   157,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,   148,    66,    67,    68,
       0,     0,     0,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,   149,    66,    67,    68,
       0,     0,     0,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,   158,    66,    67,    68,
       0,     0,     0,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,   159,    66,    67,    68,
       0,     0,     0,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,   160,    66,    67,    68,
       0,     0,     0,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,   163,    66,    67,    68,
       0,     0,     0,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,     0,    66,    67,    68,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,     0,     0,    66,    67,    68,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,     0,     0,
       0,    66,    67,    68,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,     0,     0,     0,    66,     0,
      68,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,     0,     0,     0,    66,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63
};

static const yytype_int16 yycheck[] =
{
      13,    14,    15,    16,    17,    18,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    23,
      46,    47,    48,    25,    22,    38,    30,    12,    30,    11,
      15,    16,    17,    18,    19,    19,    20,    50,    51,    24,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    22,    22,    50,    51,    32,    33,    34,
      35,    36,    85,     3,     3,     0,     1,    25,     3,     4,
       5,     6,     7,     8,     9,    24,    11,    34,    35,    36,
      24,     6,    25,    -1,    -1,    -1,    -1,    22,   111,    24,
     113,    -1,   115,    -1,    -1,    -1,    -1,    32,    33,   122,
     123,    -1,    -1,    -1,    -1,   128,    -1,   130,    -1,    -1,
      45,    -1,   135,    -1,    49,    50,    51,    52,   141,    -1,
      -1,   144,    -1,   146,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    66,     0,     1,   157,     3,     4,     5,     6,     7,
       8,     9,    -1,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    22,    -1,    24,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    33,    -1,    -1,     1,    -1,
      -1,    -1,     5,     6,     7,     8,     9,    45,    11,    -1,
      -1,    49,    50,    51,    52,    -1,    -1,    -1,    -1,    22,
      -1,    24,    -1,    -1,    -1,    -1,    -1,    -1,    66,    32,
      33,    -1,    -1,     5,     6,     7,     8,     9,    -1,    11,
      -1,    -1,    45,    -1,    -1,    -1,    49,    50,    51,    52,
      22,    -1,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,
      32,    33,    -1,    66,     5,     6,     7,     8,     9,    -1,
      11,    -1,    -1,    45,    -1,    -1,    -1,    49,    50,    51,
      -1,    22,    -1,    24,    25,    -1,    -1,    -1,    -1,    -1,
      31,    32,    33,    -1,    66,     5,     6,     7,     8,     9,
      -1,    11,    -1,    -1,    45,    -1,    -1,    -1,    49,    50,
      51,    -1,    22,    -1,    24,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    33,    -1,    66,     5,     6,     7,     8,
       9,    -1,    11,    -1,    -1,    45,    -1,    -1,    -1,    49,
      50,    51,    -1,    22,    23,    24,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    33,    -1,    66,     5,     6,     7,
       8,     9,    -1,    11,    -1,    -1,    45,    -1,    -1,    -1,
      49,    50,    51,    -1,    22,    -1,    24,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    32,    33,    -1,    66,     5,     6,
       7,     8,     9,    -1,    11,    -1,    -1,    45,    -1,    -1,
      -1,    49,    50,    51,    -1,    22,    -1,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    32,    33,    -1,    66,     5,
       6,     7,     8,     9,    -1,    11,    -1,    -1,    45,    -1,
      -1,    -1,    49,    50,    51,    -1,    22,    -1,    24,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    32,    33,    -1,    66,
       5,     6,     7,     8,     9,    -1,    11,    -1,    -1,    45,
      -1,    -1,    -1,    49,    50,    51,    -1,    22,    -1,    24,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,    -1,
      66,     5,     6,     7,     8,     9,    -1,    11,    -1,    -1,
      45,    -1,    -1,    -1,    49,    50,    51,    -1,    22,    -1,
      24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,
      -1,    66,     5,     6,     7,     8,     9,    -1,    11,    -1,
      -1,    45,    -1,    -1,    -1,    49,    50,    51,    -1,    22,
      -1,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      33,    -1,    66,     5,     6,     7,     8,     9,    -1,    11,
      -1,    -1,    45,    -1,    -1,    -1,    49,    50,    51,    -1,
      22,    -1,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    33,    -1,    66,     5,     6,     7,     8,     9,    -1,
      11,    -1,    -1,    45,    -1,    -1,    -1,    49,    50,    51,
      -1,    22,    -1,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    -1,    66,     5,     6,     7,     8,     9,
      -1,    11,    -1,    -1,    45,    -1,    -1,    -1,    49,    50,
      51,    -1,    22,    -1,    24,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    33,    -1,    66,     5,     6,     7,     8,
       9,    -1,    11,    -1,    -1,    45,    -1,    -1,    -1,    49,
      50,    51,    -1,    22,    -1,    24,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    33,    -1,    66,     5,     6,     7,
       8,     9,    -1,    11,    -1,    -1,    45,    -1,    -1,    -1,
      49,    50,    51,    -1,    22,    -1,    24,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    33,    -1,    66,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    45,    -1,    -1,
      -1,    49,    50,    51,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    66,    46,
      47,    48,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    23,    46,    47,    48,    -1,    -1,
      -1,    -1,    -1,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    25,    46,    47,    48,
      -1,    -1,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    25,    46,    47,    48,
      -1,    -1,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    25,    46,    47,    48,
      -1,    -1,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    25,    46,    47,    48,
      -1,    -1,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    25,    46,    47,    48,
      -1,    -1,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    25,    46,    47,    48,
      -1,    -1,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    25,    46,    47,    48,
      -1,    -1,    -1,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    25,    46,    47,    48,
      -1,    -1,    -1,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    25,    46,    47,    48,
      -1,    -1,    -1,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    25,    46,    47,    48,
      -1,    -1,    -1,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    25,    46,    47,    48,
      -1,    -1,    -1,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    25,    46,    47,    48,
      -1,    -1,    -1,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    -1,    46,    47,    48,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    -1,    -1,    46,    47,    48,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    -1,    -1,
      -1,    46,    47,    48,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    -1,    -1,    -1,    46,    -1,
      48,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    -1,    -1,    -1,    46,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,    70,     0,     1,     3,     4,     5,     6,     7,
       8,     9,    11,    22,    24,    32,    33,    45,    49,    50,
      51,    52,    66,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    85,    88,    72,    22,    74,
      25,    74,    84,    74,    74,    74,    74,    11,    81,    81,
      22,    22,     3,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    46,    47,    48,    12,
      15,    16,    17,    18,    19,    24,    50,    51,    87,     3,
      23,    74,    86,    23,    25,    30,    74,    74,    71,    74,
      74,    74,    74,    74,    74,    74,    74,    74,    74,    74,
      74,    74,    74,    74,    74,    74,    74,    74,    74,    74,
      74,    31,    74,    24,    23,    30,    74,    23,    23,    31,
      74,    25,    31,    31,    74,    74,    25,    25,    31,    25,
      31,    74,    31,    74,    25,    31,    25,    74,    25,    74,
      25,    31,    25,    25,    31,    25,    31,    74,    25,    25,
      25,    74,    25,    74,    25,    74,    25,    31,    25,    25,
      25,    25,    74,    25
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    69,    70,    70,    70,    70,    70,    71,    72,    72,
      72,    73,    74,    74,    74,    74,    74,    74,    75,    75,
      76,    76,    76,    76,    76,    76,    77,    77,    77,    77,
      78,    78,    78,    78,    78,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    79,
      79,    80,    80,    80,    80,    80,    80,    80,    81,    81,
      82,    82,    83,    84,    84,    85,    85,    86,    86,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      87,    88
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     4,     4,     2,     1,     0,     0,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     3,     3,     3,     3,     2,     2,     2,     2,
       2,     2,     3,     2,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       3,     2,     4,     1,     3,     4,     3,     1,     3,     3,
       5,     6,     7,     4,     5,     6,     4,     5,     6,     4,
       4,     6,     7,     8,     5,     6,     7,     5,     6,     7,
       5,     4
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
  case 5: /* statement: error  */
#line 140 "bello.y"
            { yyerrok; }
#line 1693 "y.tab.c"
    break;

  case 7: /* execute_statement: %empty  */
#line 145 "bello.y"
    { 
        exctStmt(envr, (yyvsp[(-1) - (0)].stmt)); 
    }
#line 1701 "y.tab.c"
    break;

  case 8: /* single_statement: expression_statement  */
#line 151 "bello.y"
                           { (yyval.stmt)=(yyvsp[0].stmt); }
#line 1707 "y.tab.c"
    break;

  case 9: /* single_statement: if_statement  */
#line 152 "bello.y"
                   { (yyval.stmt)=(yyvsp[0].stmt); }
#line 1713 "y.tab.c"
    break;

  case 10: /* single_statement: error  */
#line 164 "bello.y"
    { 
        (yyval.stmt)=bldNllStmt(); 
        yyclearin; 
        yyerrok; 
    }
#line 1723 "y.tab.c"
    break;

  case 11: /* expression_statement: expression  */
#line 202 "bello.y"
    { 
        (yyval.stmt)=bldExpStmt((yyvsp[0].exp)); 
    }
#line 1731 "y.tab.c"
    break;

  case 14: /* expression: unary_expression  */
#line 209 "bello.y"
                       { (yyval.exp)=(yyvsp[0].exp); }
#line 1737 "y.tab.c"
    break;

  case 15: /* expression: binary_expression  */
#line 210 "bello.y"
                        { (yyval.exp)=(yyvsp[0].exp); }
#line 1743 "y.tab.c"
    break;

  case 16: /* expression: array_expression  */
#line 211 "bello.y"
                       { (yyval.exp)=(yyvsp[0].exp); }
#line 1749 "y.tab.c"
    break;

  case 17: /* expression: new_array_expression  */
#line 212 "bello.y"
                           { (yyval.exp) = (yyvsp[0].exp); }
#line 1755 "y.tab.c"
    break;

  case 20: /* assign_expression: lvalue_expression ASSIGN expression  */
#line 219 "bello.y"
                                          { (yyval.exp)=bldAsgnExp((yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 1761 "y.tab.c"
    break;

  case 21: /* assign_expression: lvalue_expression ADD_ASSIGN expression  */
#line 220 "bello.y"
                                              { (yyval.exp)=bldAsgnExp((yyvsp[-2].exp), bldBnrExp(ADD, (yyvsp[-2].exp), (yyvsp[0].exp))); }
#line 1767 "y.tab.c"
    break;

  case 22: /* assign_expression: lvalue_expression SUB_ASSIGN expression  */
#line 221 "bello.y"
                                              { (yyval.exp)=bldAsgnExp((yyvsp[-2].exp), bldBnrExp(SUB, (yyvsp[-2].exp), (yyvsp[0].exp))); }
#line 1773 "y.tab.c"
    break;

  case 23: /* assign_expression: lvalue_expression MUL_ASSIGN expression  */
#line 222 "bello.y"
                                              { (yyval.exp)=bldAsgnExp((yyvsp[-2].exp), bldBnrExp(MUL, (yyvsp[-2].exp), (yyvsp[0].exp))); }
#line 1779 "y.tab.c"
    break;

  case 24: /* assign_expression: lvalue_expression DIV_ASSIGN expression  */
#line 223 "bello.y"
                                              { (yyval.exp)=bldAsgnExp((yyvsp[-2].exp), bldBnrExp(DIV, (yyvsp[-2].exp), (yyvsp[0].exp))); }
#line 1785 "y.tab.c"
    break;

  case 25: /* assign_expression: lvalue_expression MOD_ASSIGN expression  */
#line 224 "bello.y"
                                              { (yyval.exp)=bldAsgnExp((yyvsp[-2].exp), bldBnrExp(MOD, (yyvsp[-2].exp), (yyvsp[0].exp))); }
#line 1791 "y.tab.c"
    break;

  case 26: /* self_operation_expression: INCREMENT lvalue_expression  */
#line 228 "bello.y"
                                  { (yyval.exp)=bldUnrExp(PREFIX_INCREMENT, (yyvsp[0].exp)); }
#line 1797 "y.tab.c"
    break;

  case 27: /* self_operation_expression: DECREMENT lvalue_expression  */
#line 229 "bello.y"
                                  { (yyval.exp)=bldUnrExp(PREFIX_DECREMENT, (yyvsp[0].exp)); }
#line 1803 "y.tab.c"
    break;

  case 28: /* self_operation_expression: lvalue_expression INCREMENT  */
#line 230 "bello.y"
                                  { (yyval.exp)=bldUnrExp(SUFFIX_INCREMENT, (yyvsp[-1].exp)); }
#line 1809 "y.tab.c"
    break;

  case 29: /* self_operation_expression: lvalue_expression DECREMENT  */
#line 231 "bello.y"
                                  { (yyval.exp)=bldUnrExp(SUFFIX_DECREMENT, (yyvsp[-1].exp)); }
#line 1815 "y.tab.c"
    break;

  case 30: /* unary_expression: SUB expression  */
#line 234 "bello.y"
                                      { (yyval.exp) = bldUnrExp(SUB, (yyvsp[0].exp)); }
#line 1821 "y.tab.c"
    break;

  case 31: /* unary_expression: ADD expression  */
#line 235 "bello.y"
                                     { (yyval.exp) = bldUnrExp(ADD, (yyvsp[0].exp)); }
#line 1827 "y.tab.c"
    break;

  case 32: /* unary_expression: LEFT_PAREN expression RIGHT_PAREN  */
#line 236 "bello.y"
                                        { (yyval.exp)=(yyvsp[-1].exp); }
#line 1833 "y.tab.c"
    break;

  case 33: /* unary_expression: NOT expression  */
#line 237 "bello.y"
                     { (yyval.exp)=bldUnrExp(NOT, (yyvsp[0].exp)); }
#line 1839 "y.tab.c"
    break;

  case 34: /* unary_expression: BIT_NOT expression  */
#line 238 "bello.y"
                         { (yyval.exp)=bldUnrExp(BIT_NOT, (yyvsp[0].exp)); }
#line 1845 "y.tab.c"
    break;

  case 35: /* binary_expression: expression ADD expression  */
#line 241 "bello.y"
                                { (yyval.exp)=bldBnrExp(ADD, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 1851 "y.tab.c"
    break;

  case 36: /* binary_expression: expression SUB expression  */
#line 242 "bello.y"
                                { (yyval.exp)=bldBnrExp(SUB, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 1857 "y.tab.c"
    break;

  case 37: /* binary_expression: expression MUL expression  */
#line 243 "bello.y"
                                { (yyval.exp)=bldBnrExp(MUL, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 1863 "y.tab.c"
    break;

  case 38: /* binary_expression: expression DIV expression  */
#line 244 "bello.y"
                                { (yyval.exp)=bldBnrExp(DIV, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 1869 "y.tab.c"
    break;

  case 39: /* binary_expression: expression MOD expression  */
#line 245 "bello.y"
                                { (yyval.exp)=bldBnrExp(MOD, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 1875 "y.tab.c"
    break;

  case 40: /* binary_expression: expression AND expression  */
#line 246 "bello.y"
                                { (yyval.exp)=bldBnrExp(AND, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 1881 "y.tab.c"
    break;

  case 41: /* binary_expression: expression OR expression  */
#line 247 "bello.y"
                               { (yyval.exp)=bldBnrExp(OR, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 1887 "y.tab.c"
    break;

  case 42: /* binary_expression: expression EQ expression  */
#line 248 "bello.y"
                               { (yyval.exp)=bldBnrExp(EQ, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 1893 "y.tab.c"
    break;

  case 43: /* binary_expression: expression NE expression  */
#line 249 "bello.y"
                               { (yyval.exp)=bldBnrExp(NE, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 1899 "y.tab.c"
    break;

  case 44: /* binary_expression: expression GT expression  */
#line 250 "bello.y"
                               { (yyval.exp)=bldBnrExp(GT, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 1905 "y.tab.c"
    break;

  case 45: /* binary_expression: expression GE expression  */
#line 251 "bello.y"
                               { (yyval.exp)=bldBnrExp(GE, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 1911 "y.tab.c"
    break;

  case 46: /* binary_expression: expression LT expression  */
#line 252 "bello.y"
                               { (yyval.exp)=bldBnrExp(LT, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 1917 "y.tab.c"
    break;

  case 47: /* binary_expression: expression LE expression  */
#line 253 "bello.y"
                               { (yyval.exp)=bldBnrExp(LE, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 1923 "y.tab.c"
    break;

  case 48: /* binary_expression: expression BIT_AND expression  */
#line 254 "bello.y"
                                    { (yyval.exp)=bldBnrExp(BIT_AND, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 1929 "y.tab.c"
    break;

  case 49: /* binary_expression: expression BIT_OR expression  */
#line 255 "bello.y"
                                   { (yyval.exp)=bldBnrExp(BIT_OR, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 1935 "y.tab.c"
    break;

  case 50: /* binary_expression: expression BIT_XOR expression  */
#line 256 "bello.y"
                                    { (yyval.exp)=bldBnrExp(BIT_XOR, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 1941 "y.tab.c"
    break;

  case 51: /* value_expression: INT_VALUE  */
#line 260 "bello.y"
                { (yyval.exp)=bldCnstIntExp((yyvsp[0].intVl)); /*printf("Get data: %d\n",$1);*/ }
#line 1947 "y.tab.c"
    break;

  case 52: /* value_expression: FLOAT_VALUE  */
#line 261 "bello.y"
                  { (yyval.exp)=bldCnstFltExp((yyvsp[0].fltVl)); }
#line 1953 "y.tab.c"
    break;

  case 53: /* value_expression: BOOLEAN_VALUE  */
#line 262 "bello.y"
                    { (yyval.exp)=bldCnstBlnExp((yyvsp[0].blnVl)); }
#line 1959 "y.tab.c"
    break;

  case 54: /* value_expression: STRING_VALUE  */
#line 263 "bello.y"
                   { (yyval.exp)=bldCnstStrExp((yyvsp[0].strVl)); }
#line 1965 "y.tab.c"
    break;

  case 55: /* value_expression: NULL_VALUE  */
#line 264 "bello.y"
                 { (yyval.exp)=bldCnstNllExp(); }
#line 1971 "y.tab.c"
    break;

  case 58: /* lvalue_expression: IDENTIFER  */
#line 269 "bello.y"
                { (yyval.exp)= bldLvlExp(bldVrbExp((yyvsp[0].idtf))); }
#line 1977 "y.tab.c"
    break;

  case 59: /* lvalue_expression: lvalue_expression evaluate_list  */
#line 271 "bello.y"
    { 
        (yyval.exp)=(yyvsp[-1].exp); 
        bldLvlExpAdd((yyvsp[-1].exp), (yyvsp[0].evlLst)); 
    }
#line 1986 "y.tab.c"
    break;

  case 60: /* array_expression: LEFT_QUAD element_list RIGHT_QUAD  */
#line 279 "bello.y"
    {
        (yyval.exp)= bldArrExp((yyvsp[-1].elmtLst));
    }
#line 1994 "y.tab.c"
    break;

  case 61: /* array_expression: LEFT_QUAD RIGHT_QUAD  */
#line 283 "bello.y"
    {
        (yyval.exp)= bldArrExp(bldElmtLst());
    }
#line 2002 "y.tab.c"
    break;

  case 62: /* new_array_expression: NEW_ARRAY LEFT_PAREN expression RIGHT_PAREN  */
#line 289 "bello.y"
    {
        (yyval.exp) = bldNewArrExp((yyvsp[-1].exp));
    }
#line 2010 "y.tab.c"
    break;

  case 63: /* element_list: expression  */
#line 295 "bello.y"
    { 
        (yyval.elmtLst)= bldElmtLst(); 
        elmtLstAdd((yyval.elmtLst), (yyvsp[0].exp)); 
    }
#line 2019 "y.tab.c"
    break;

  case 64: /* element_list: element_list COMMA expression  */
#line 300 "bello.y"
    {  
        (yyval.elmtLst)=(yyvsp[-2].elmtLst);  
        elmtLstAdd((yyval.elmtLst), (yyvsp[0].exp)); 
    }
#line 2028 "y.tab.c"
    break;

  case 65: /* function_expression: IDENTIFER LEFT_PAREN argument_list RIGHT_PAREN  */
#line 340 "bello.y"
    {
        (yyval.exp)=bldFcnExp((yyvsp[-3].idtf), (yyvsp[-1].argLst));
    }
#line 2036 "y.tab.c"
    break;

  case 66: /* function_expression: IDENTIFER LEFT_PAREN RIGHT_PAREN  */
#line 344 "bello.y"
    {
        (yyval.exp)=bldFcnExp((yyvsp[-2].idtf), bldArgLst());
    }
#line 2044 "y.tab.c"
    break;

  case 67: /* argument_list: expression  */
#line 350 "bello.y"
    {
        (yyval.argLst)=bldArgLst();
        argLstAdd((yyval.argLst), (yyvsp[0].exp));
    }
#line 2053 "y.tab.c"
    break;

  case 68: /* argument_list: argument_list COMMA expression  */
#line 355 "bello.y"
    {
        (yyval.argLst)=(yyvsp[-2].argLst);
        argLstAdd((yyval.argLst), (yyvsp[0].exp));
    }
#line 2062 "y.tab.c"
    break;

  case 69: /* evaluate_list: LEFT_QUAD expression RIGHT_QUAD  */
#line 363 "bello.y"
    {
        (yyval.evlLst) = bldAcsLst();
        acsLstIdxAdd((yyval.evlLst), (yyvsp[-1].exp));
    }
#line 2071 "y.tab.c"
    break;

  case 70: /* evaluate_list: LEFT_QUAD expression COLON expression RIGHT_QUAD  */
#line 368 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-3].exp), (yyvsp[-1].exp), bldCnstIntExp(1));
    }
#line 2080 "y.tab.c"
    break;

  case 71: /* evaluate_list: LEFT_QUAD expression COLON expression COLON RIGHT_QUAD  */
#line 373 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-4].exp), (yyvsp[-2].exp), bldCnstIntExp(1));
    }
#line 2089 "y.tab.c"
    break;

  case 72: /* evaluate_list: LEFT_QUAD expression COLON expression COLON expression RIGHT_QUAD  */
#line 378 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-5].exp), (yyvsp[-3].exp), (yyvsp[-1].exp));
    }
#line 2098 "y.tab.c"
    break;

  case 73: /* evaluate_list: LEFT_QUAD expression COLON RIGHT_QUAD  */
#line 383 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-2].exp), bldCnstIntExp(-1), bldCnstIntExp(1));
    }
#line 2107 "y.tab.c"
    break;

  case 74: /* evaluate_list: LEFT_QUAD expression COLON COLON RIGHT_QUAD  */
#line 388 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-3].exp), bldCnstIntExp(-1), bldCnstIntExp(1));
    }
#line 2116 "y.tab.c"
    break;

  case 75: /* evaluate_list: LEFT_QUAD expression COLON COLON expression RIGHT_QUAD  */
#line 393 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-4].exp), bldCnstIntExp(-1), (yyvsp[-1].exp));
    }
#line 2125 "y.tab.c"
    break;

  case 76: /* evaluate_list: LEFT_QUAD COLON expression RIGHT_QUAD  */
#line 398 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), (yyvsp[-1].exp), bldCnstIntExp(1));
    }
#line 2134 "y.tab.c"
    break;

  case 77: /* evaluate_list: LEFT_QUAD COLON expression COLON RIGHT_QUAD  */
#line 403 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), (yyvsp[-2].exp), bldCnstIntExp(1));
    }
#line 2143 "y.tab.c"
    break;

  case 78: /* evaluate_list: LEFT_QUAD COLON expression COLON expression RIGHT_QUAD  */
#line 408 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), (yyvsp[-3].exp), (yyvsp[-1].exp));
    }
#line 2152 "y.tab.c"
    break;

  case 79: /* evaluate_list: LEFT_QUAD COLON COLON RIGHT_QUAD  */
#line 413 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), bldCnstIntExp(-1), bldCnstIntExp(1));
    }
#line 2161 "y.tab.c"
    break;

  case 80: /* evaluate_list: evaluate_list LEFT_QUAD expression RIGHT_QUAD  */
#line 418 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-3].evlLst);
        acsLstIdxAdd((yyval.evlLst),(yyvsp[-1].exp));
    }
#line 2170 "y.tab.c"
    break;

  case 81: /* evaluate_list: evaluate_list LEFT_QUAD expression COLON expression RIGHT_QUAD  */
#line 423 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-5].evlLst);
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-3].exp), (yyvsp[-1].exp), bldCnstIntExp(1));
    }
#line 2179 "y.tab.c"
    break;

  case 82: /* evaluate_list: evaluate_list LEFT_QUAD expression COLON expression COLON RIGHT_QUAD  */
#line 428 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-6].evlLst);
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-4].exp), (yyvsp[-2].exp), bldCnstIntExp(1));
    }
#line 2188 "y.tab.c"
    break;

  case 83: /* evaluate_list: evaluate_list LEFT_QUAD expression COLON expression COLON expression RIGHT_QUAD  */
#line 433 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-7].evlLst);
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-5].exp), (yyvsp[-3].exp), (yyvsp[-1].exp));
    }
#line 2197 "y.tab.c"
    break;

  case 84: /* evaluate_list: evaluate_list LEFT_QUAD expression COLON RIGHT_QUAD  */
#line 438 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-4].evlLst);
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-2].exp), bldCnstIntExp(-1), bldCnstIntExp(1));
    }
#line 2206 "y.tab.c"
    break;

  case 85: /* evaluate_list: evaluate_list LEFT_QUAD expression COLON COLON RIGHT_QUAD  */
#line 443 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-5].evlLst);
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-3].exp), bldCnstIntExp(-1), bldCnstIntExp(1));
    }
#line 2215 "y.tab.c"
    break;

  case 86: /* evaluate_list: evaluate_list LEFT_QUAD expression COLON COLON expression RIGHT_QUAD  */
#line 448 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-6].evlLst);
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-4].exp), bldCnstIntExp(-1), (yyvsp[-1].exp));
    }
#line 2224 "y.tab.c"
    break;

  case 87: /* evaluate_list: evaluate_list LEFT_QUAD COLON expression RIGHT_QUAD  */
#line 453 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-4].evlLst);
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), (yyvsp[-1].exp), bldCnstIntExp(1));
    }
#line 2233 "y.tab.c"
    break;

  case 88: /* evaluate_list: evaluate_list LEFT_QUAD COLON expression COLON RIGHT_QUAD  */
#line 458 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-5].evlLst);
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), (yyvsp[-2].exp), bldCnstIntExp(1));
    }
#line 2242 "y.tab.c"
    break;

  case 89: /* evaluate_list: evaluate_list LEFT_QUAD COLON expression COLON expression RIGHT_QUAD  */
#line 463 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-6].evlLst);
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), (yyvsp[-3].exp), (yyvsp[-1].exp));
    }
#line 2251 "y.tab.c"
    break;

  case 90: /* evaluate_list: evaluate_list LEFT_QUAD COLON COLON RIGHT_QUAD  */
#line 468 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-4].evlLst);
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), bldCnstIntExp(-1), bldCnstIntExp(1));
    }
#line 2260 "y.tab.c"
    break;

  case 91: /* if_statement: IF LEFT_PAREN expression RIGHT_PAREN  */
#line 486 "bello.y"
    {
        (yyval.stmt)=bldIfStmt((yyvsp[-1].exp));
    }
#line 2268 "y.tab.c"
    break;


#line 2272 "y.tab.c"

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

#line 576 "bello.y"


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


