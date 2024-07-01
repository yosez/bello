/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
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


/* Line 371 of yacc.c  */
#line 112 "y.tab.c"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     INT_VALUE = 258,
     BOOLEAN_VALUE = 259,
     FLOAT_VALUE = 260,
     STRING_VALUE = 261,
     NULL_VALUE = 262,
     ARRAY_VALUE = 263,
     IDENTIFER = 264,
     ASSIGN = 265,
     VAR = 266,
     ADD_ASSIGN = 267,
     SUB_ASSIGN = 268,
     MUL_ASSIGN = 269,
     DIV_ASSIGN = 270,
     MOD_ASSIGN = 271,
     PRINT = 272,
     PRINTLN = 273,
     LEFT_PAREN = 274,
     RIGHT_PAREN = 275,
     LEFT_QUAD = 276,
     RIGHT_QUAD = 277,
     LEFT_BRACE = 278,
     RIGHT_BRACE = 279,
     SEMICOLON = 280,
     COMMA = 281,
     COLON = 282,
     ADD = 283,
     SUB = 284,
     MUL = 285,
     DIV = 286,
     MOD = 287,
     EQ = 288,
     NE = 289,
     GT = 290,
     GE = 291,
     LT = 292,
     LE = 293,
     AND = 294,
     OR = 295,
     NOT = 296,
     BIT_AND = 297,
     BIT_OR = 298,
     BIT_XOR = 299,
     BIT_NOT = 300,
     INCREMENT = 301,
     DECREMENT = 302,
     IF = 303,
     ELSE = 304,
     FOR = 305,
     WHILE = 306,
     DO = 307,
     CONTINUE = 308,
     BREAK = 309,
     FUNC = 310,
     RETURN = 311,
     READ_INT = 312,
     READ_FLOAT = 313,
     READ = 314,
     READ_BOOL = 315,
     READ_LINE = 316,
     NEW_ARRAY = 317,
     PLUS_SIGN = 318,
     MINUS_SIGN = 319
   };
#endif
/* Tokens.  */
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
#define PLUS_SIGN 318
#define MINUS_SIGN 319



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 387 of yacc.c  */
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
    struct EvlLstStrc *evlLst;

    char *idtf;



/* Line 387 of yacc.c  */
#line 306 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 334 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (YYID (0))
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
/* YYNRULES -- Number of states.  */
#define YYNSTATES  248

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   319

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
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
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     7,    11,    13,    14,    15,    18,    20,
      22,    24,    26,    29,    32,    35,    37,    40,    43,    45,
      47,    49,    51,    53,    55,    57,    58,    62,    65,    67,
      70,    72,    74,    76,    78,    80,    82,    84,    86,    88,
      92,    96,   100,   104,   108,   112,   115,   118,   121,   124,
     127,   130,   134,   137,   140,   144,   148,   152,   156,   160,
     164,   168,   172,   176,   180,   184,   188,   192,   196,   200,
     204,   206,   208,   210,   212,   214,   216,   218,   220,   223,
     227,   230,   235,   237,   241,   244,   246,   250,   254,   260,
     265,   269,   271,   275,   279,   285,   292,   300,   305,   311,
     318,   323,   329,   336,   341,   346,   353,   361,   370,   376,
     383,   391,   397,   404,   412,   418,   424,   432,   442,   448,
     456,   458,   463,   465,   470,   472,   474,   481,   487,   494,
     500,   502,   506,   508
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      66,     0,    -1,    68,    67,    66,    -1,    71,    67,    66,
      -1,     1,    -1,    -1,    -1,    73,    25,    -1,    90,    -1,
      91,    -1,    92,    -1,    93,    -1,    94,    25,    -1,    95,
      25,    -1,    99,    25,    -1,    97,    -1,    70,    25,    -1,
      85,    25,    -1,     1,    -1,    73,    -1,    90,    -1,    91,
      -1,    92,    -1,    93,    -1,    70,    -1,    -1,    23,    72,
      24,    -1,    23,    24,    -1,    68,    -1,    72,    68,    -1,
      74,    -1,    80,    -1,    75,    -1,    78,    -1,    79,    -1,
      82,    -1,    83,    -1,    76,    -1,    77,    -1,    81,    10,
      74,    -1,    81,    12,    74,    -1,    81,    13,    74,    -1,
      81,    14,    74,    -1,    81,    15,    74,    -1,    81,    16,
      74,    -1,    46,    81,    -1,    47,    81,    -1,    81,    46,
      -1,    81,    47,    -1,    29,    74,    -1,    28,    74,    -1,
      19,    74,    20,    -1,    41,    74,    -1,    45,    74,    -1,
      74,    28,    74,    -1,    74,    29,    74,    -1,    74,    30,
      74,    -1,    74,    31,    74,    -1,    74,    32,    74,    -1,
      74,    39,    74,    -1,    74,    40,    74,    -1,    74,    33,
      74,    -1,    74,    34,    74,    -1,    74,    35,    74,    -1,
      74,    36,    74,    -1,    74,    37,    74,    -1,    74,    38,
      74,    -1,    74,    42,    74,    -1,    74,    43,    74,    -1,
      74,    44,    74,    -1,     3,    -1,     5,    -1,     4,    -1,
       6,    -1,     7,    -1,    87,    -1,    81,    -1,     9,    -1,
      81,    89,    -1,    21,    84,    22,    -1,    21,    22,    -1,
      62,    19,    74,    20,    -1,    74,    -1,    84,    26,    74,
      -1,    11,    86,    -1,     9,    -1,     9,    10,    74,    -1,
      86,    26,     9,    -1,    86,    26,     9,    10,    74,    -1,
       9,    19,    88,    20,    -1,     9,    19,    20,    -1,    74,
      -1,    88,    26,    74,    -1,    21,    74,    22,    -1,    21,
      74,    27,    74,    22,    -1,    21,    74,    27,    74,    27,
      22,    -1,    21,    74,    27,    74,    27,    74,    22,    -1,
      21,    74,    27,    22,    -1,    21,    74,    27,    27,    22,
      -1,    21,    74,    27,    27,    74,    22,    -1,    21,    27,
      74,    22,    -1,    21,    27,    74,    27,    22,    -1,    21,
      27,    74,    27,    74,    22,    -1,    21,    27,    27,    22,
      -1,    89,    21,    74,    22,    -1,    89,    21,    74,    27,
      74,    22,    -1,    89,    21,    74,    27,    74,    27,    22,
      -1,    89,    21,    74,    27,    74,    27,    74,    22,    -1,
      89,    21,    74,    27,    22,    -1,    89,    21,    74,    27,
      27,    22,    -1,    89,    21,    74,    27,    27,    74,    22,
      -1,    89,    21,    27,    74,    22,    -1,    89,    21,    27,
      74,    27,    22,    -1,    89,    21,    27,    74,    27,    74,
      22,    -1,    89,    21,    27,    27,    22,    -1,    48,    19,
      74,    20,    96,    -1,    48,    19,    74,    20,    96,    49,
      96,    -1,    50,    19,    69,    25,    73,    25,    69,    20,
      96,    -1,    51,    19,    73,    20,    96,    -1,    52,    96,
      51,    19,    73,    20,    25,    -1,    54,    -1,    54,    19,
      74,    20,    -1,    53,    -1,    53,    19,    74,    20,    -1,
      68,    -1,    71,    -1,    55,     9,    19,    98,    20,    71,
      -1,    55,     9,    19,    20,    71,    -1,    55,     9,    19,
      98,    20,    68,    -1,    55,     9,    19,    20,    68,    -1,
       9,    -1,    98,    26,     9,    -1,    56,    -1,    56,    74,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   134,   134,   135,   136,   137,   141,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   171,
     172,   173,   174,   175,   176,   180,   183,   184,   187,   192,
     199,   205,   206,   208,   209,   210,   211,   214,   215,   218,
     219,   220,   221,   222,   223,   227,   228,   229,   230,   233,
     234,   235,   236,   237,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     259,   260,   261,   262,   263,   264,   265,   268,   269,   298,
     302,   308,   314,   319,   327,   331,   336,   341,   346,   357,
     361,   367,   372,   380,   385,   390,   395,   400,   405,   410,
     415,   420,   425,   430,   435,   440,   445,   450,   455,   460,
     465,   470,   475,   480,   485,   503,   507,   513,   519,   525,
     531,   532,   535,   536,   539,   540,   543,   551,   559,   567,
     578,   583,   590,   591
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT_VALUE", "BOOLEAN_VALUE",
  "FLOAT_VALUE", "STRING_VALUE", "NULL_VALUE", "ARRAY_VALUE", "IDENTIFER",
  "ASSIGN", "VAR", "ADD_ASSIGN", "SUB_ASSIGN", "MUL_ASSIGN", "DIV_ASSIGN",
  "MOD_ASSIGN", "PRINT", "PRINTLN", "LEFT_PAREN", "RIGHT_PAREN",
  "LEFT_QUAD", "RIGHT_QUAD", "LEFT_BRACE", "RIGHT_BRACE", "SEMICOLON",
  "COMMA", "COLON", "ADD", "SUB", "MUL", "DIV", "MOD", "EQ", "NE", "GT",
  "GE", "LT", "LE", "AND", "OR", "NOT", "BIT_AND", "BIT_OR", "BIT_XOR",
  "BIT_NOT", "INCREMENT", "DECREMENT", "IF", "ELSE", "FOR", "WHILE", "DO",
  "CONTINUE", "BREAK", "FUNC", "RETURN", "READ_INT", "READ_FLOAT", "READ",
  "READ_BOOL", "READ_LINE", "NEW_ARRAY", "PLUS_SIGN", "MINUS_SIGN",
  "$accept", "statement", "execute_statement", "single_statement",
  "single_statement_no_semicolon", "null_statement", "statement_block",
  "block_list", "expression_statement", "expression",
  "lvalue_operation_expression", "assign_expression",
  "self_operation_expression", "unary_expression", "binary_expression",
  "value_expression", "lvalue_expression", "array_expression",
  "new_array_expression", "element_list", "var_statement", "assign_list",
  "function_expression", "argument_list", "evaluate_list", "if_statement",
  "for_statement", "while_statement", "do_while_statement",
  "break_statement", "continue_statement", "structure_statement",
  "function_define_statement", "parameter_list", "return_statement", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
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

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
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

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
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

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    27,    82,    73,   127,    29,    74,    62,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    58,
      42,    54,    43,   118,   111,    44,    45,    46,    47,    48,
      49,    75,    50,   180,    51
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -140
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

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -140,   -57,    89,    38,   -85,   -69,    22,  -140,   -64,    -9,
    -140,  -140,  -140,  -140,  -140,  -140,    14,  -140,  -140,  -140,
    -140,  -140,  -140,  -140,  -140,   -62,   -61,   -60,   -59,  -140,
    -140,  -139,  -140,  -140,  -140
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -26
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

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-140)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

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

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
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

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */
#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
        break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
        break;
    }
}




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 4:
/* Line 1792 of yacc.c  */
#line 136 "bello.y"
    { yyerrok; }
    break;

  case 6:
/* Line 1792 of yacc.c  */
#line 141 "bello.y"
    { 
        //printf("statement type: %d\n",$<stmt>0->typ); 
        exctStmt(glbEnvr, glbEnvr, (yyvsp[(0) - (0)].stmt)); 
    }
    break;

  case 7:
/* Line 1792 of yacc.c  */
#line 148 "bello.y"
    { (yyval.stmt)=(yyvsp[(1) - (2)].stmt); }
    break;

  case 8:
/* Line 1792 of yacc.c  */
#line 149 "bello.y"
    { (yyval.stmt)=(yyvsp[(1) - (1)].stmt); }
    break;

  case 9:
/* Line 1792 of yacc.c  */
#line 150 "bello.y"
    { (yyval.stmt)=(yyvsp[(1) - (1)].stmt); }
    break;

  case 10:
/* Line 1792 of yacc.c  */
#line 151 "bello.y"
    { (yyval.stmt)=(yyvsp[(1) - (1)].stmt); }
    break;

  case 11:
/* Line 1792 of yacc.c  */
#line 152 "bello.y"
    { (yyval.stmt)=(yyvsp[(1) - (1)].stmt); }
    break;

  case 12:
/* Line 1792 of yacc.c  */
#line 153 "bello.y"
    { (yyval.stmt)=(yyvsp[(1) - (2)].stmt); }
    break;

  case 13:
/* Line 1792 of yacc.c  */
#line 154 "bello.y"
    { (yyval.stmt)=(yyvsp[(1) - (2)].stmt); }
    break;

  case 14:
/* Line 1792 of yacc.c  */
#line 155 "bello.y"
    { (yyval.stmt)=(yyvsp[(1) - (2)].stmt); }
    break;

  case 15:
/* Line 1792 of yacc.c  */
#line 156 "bello.y"
    { (yyval.stmt)=(yyvsp[(1) - (1)].stmt); }
    break;

  case 16:
/* Line 1792 of yacc.c  */
#line 157 "bello.y"
    { (yyval.stmt)=(yyvsp[(1) - (2)].stmt); }
    break;

  case 17:
/* Line 1792 of yacc.c  */
#line 158 "bello.y"
    { (yyval.stmt) = (yyvsp[(1) - (2)].stmt); }
    break;

  case 18:
/* Line 1792 of yacc.c  */
#line 160 "bello.y"
    { 
        //system("pause");  
        (yyval.stmt)=bldNllStmt(); 
        //printf("statement error. %d : %s\n", $$->typ, yytext); 
        yyclearin; 
        yyerrok; 
    }
    break;

  case 25:
/* Line 1792 of yacc.c  */
#line 180 "bello.y"
    { (yyval.stmt)=bldNllStmt(); }
    break;

  case 26:
/* Line 1792 of yacc.c  */
#line 183 "bello.y"
    { (yyval.stmt)=(yyvsp[(2) - (3)].stmt); }
    break;

  case 27:
/* Line 1792 of yacc.c  */
#line 184 "bello.y"
    { (yyval.stmt)=bldNllStmt(); }
    break;

  case 28:
/* Line 1792 of yacc.c  */
#line 188 "bello.y"
    { 
        (yyval.stmt)=bldStmtBlk(); 
        stmtBlkAdd((yyval.stmt), (yyvsp[(1) - (1)].stmt)); 
    }
    break;

  case 29:
/* Line 1792 of yacc.c  */
#line 193 "bello.y"
    {
        (yyval.stmt) = stmtBlkAdd((yyvsp[(1) - (2)].stmt) ,(yyvsp[(2) - (2)].stmt));
    }
    break;

  case 30:
/* Line 1792 of yacc.c  */
#line 200 "bello.y"
    { 
        (yyval.stmt)=bldExpStmt((yyvsp[(1) - (1)].exp)); 
    }
    break;

  case 33:
/* Line 1792 of yacc.c  */
#line 208 "bello.y"
    { (yyval.exp)=(yyvsp[(1) - (1)].exp); }
    break;

  case 34:
/* Line 1792 of yacc.c  */
#line 209 "bello.y"
    { (yyval.exp)=(yyvsp[(1) - (1)].exp); }
    break;

  case 35:
/* Line 1792 of yacc.c  */
#line 210 "bello.y"
    { (yyval.exp)=(yyvsp[(1) - (1)].exp); }
    break;

  case 36:
/* Line 1792 of yacc.c  */
#line 211 "bello.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); }
    break;

  case 39:
/* Line 1792 of yacc.c  */
#line 218 "bello.y"
    { (yyval.exp)=bldAsgnExp((yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); }
    break;

  case 40:
/* Line 1792 of yacc.c  */
#line 219 "bello.y"
    { (yyval.exp)=bldAsgnExp((yyvsp[(1) - (3)].exp), bldBnrExp(ADD, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp))); }
    break;

  case 41:
/* Line 1792 of yacc.c  */
#line 220 "bello.y"
    { (yyval.exp)=bldAsgnExp((yyvsp[(1) - (3)].exp), bldBnrExp(SUB, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp))); }
    break;

  case 42:
/* Line 1792 of yacc.c  */
#line 221 "bello.y"
    { (yyval.exp)=bldAsgnExp((yyvsp[(1) - (3)].exp), bldBnrExp(MUL, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp))); }
    break;

  case 43:
/* Line 1792 of yacc.c  */
#line 222 "bello.y"
    { (yyval.exp)=bldAsgnExp((yyvsp[(1) - (3)].exp), bldBnrExp(DIV, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp))); }
    break;

  case 44:
/* Line 1792 of yacc.c  */
#line 223 "bello.y"
    { (yyval.exp)=bldAsgnExp((yyvsp[(1) - (3)].exp), bldBnrExp(MOD, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp))); }
    break;

  case 45:
/* Line 1792 of yacc.c  */
#line 227 "bello.y"
    { (yyval.exp)=bldUnrExp(PREFIX_INCREMENT, (yyvsp[(2) - (2)].exp)); }
    break;

  case 46:
/* Line 1792 of yacc.c  */
#line 228 "bello.y"
    { (yyval.exp)=bldUnrExp(PREFIX_DECREMENT, (yyvsp[(2) - (2)].exp)); }
    break;

  case 47:
/* Line 1792 of yacc.c  */
#line 229 "bello.y"
    { (yyval.exp)=bldUnrExp(SUFFIX_INCREMENT, (yyvsp[(1) - (2)].exp)); }
    break;

  case 48:
/* Line 1792 of yacc.c  */
#line 230 "bello.y"
    { (yyval.exp)=bldUnrExp(SUFFIX_DECREMENT, (yyvsp[(1) - (2)].exp)); }
    break;

  case 49:
/* Line 1792 of yacc.c  */
#line 233 "bello.y"
    { (yyval.exp) = bldUnrExp(SUB, (yyvsp[(2) - (2)].exp)); }
    break;

  case 50:
/* Line 1792 of yacc.c  */
#line 234 "bello.y"
    { (yyval.exp) = bldUnrExp(ADD, (yyvsp[(2) - (2)].exp)); }
    break;

  case 51:
/* Line 1792 of yacc.c  */
#line 235 "bello.y"
    { (yyval.exp)=(yyvsp[(2) - (3)].exp); }
    break;

  case 52:
/* Line 1792 of yacc.c  */
#line 236 "bello.y"
    { (yyval.exp)=bldUnrExp(NOT, (yyvsp[(2) - (2)].exp)); }
    break;

  case 53:
/* Line 1792 of yacc.c  */
#line 237 "bello.y"
    { (yyval.exp)=bldUnrExp(BIT_NOT, (yyvsp[(2) - (2)].exp)); }
    break;

  case 54:
/* Line 1792 of yacc.c  */
#line 240 "bello.y"
    { (yyval.exp)=bldBnrExp(ADD, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); }
    break;

  case 55:
/* Line 1792 of yacc.c  */
#line 241 "bello.y"
    { (yyval.exp)=bldBnrExp(SUB, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); }
    break;

  case 56:
/* Line 1792 of yacc.c  */
#line 242 "bello.y"
    { (yyval.exp)=bldBnrExp(MUL, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); }
    break;

  case 57:
/* Line 1792 of yacc.c  */
#line 243 "bello.y"
    { (yyval.exp)=bldBnrExp(DIV, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); }
    break;

  case 58:
/* Line 1792 of yacc.c  */
#line 244 "bello.y"
    { (yyval.exp)=bldBnrExp(MOD, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); }
    break;

  case 59:
/* Line 1792 of yacc.c  */
#line 245 "bello.y"
    { (yyval.exp)=bldBnrExp(AND, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); }
    break;

  case 60:
/* Line 1792 of yacc.c  */
#line 246 "bello.y"
    { (yyval.exp)=bldBnrExp(OR, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); }
    break;

  case 61:
/* Line 1792 of yacc.c  */
#line 247 "bello.y"
    { (yyval.exp)=bldBnrExp(EQ, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); }
    break;

  case 62:
/* Line 1792 of yacc.c  */
#line 248 "bello.y"
    { (yyval.exp)=bldBnrExp(NE, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); }
    break;

  case 63:
/* Line 1792 of yacc.c  */
#line 249 "bello.y"
    { (yyval.exp)=bldBnrExp(GT, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); }
    break;

  case 64:
/* Line 1792 of yacc.c  */
#line 250 "bello.y"
    { (yyval.exp)=bldBnrExp(GE, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); }
    break;

  case 65:
/* Line 1792 of yacc.c  */
#line 251 "bello.y"
    { (yyval.exp)=bldBnrExp(LT, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); }
    break;

  case 66:
/* Line 1792 of yacc.c  */
#line 252 "bello.y"
    { (yyval.exp)=bldBnrExp(LE, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); }
    break;

  case 67:
/* Line 1792 of yacc.c  */
#line 253 "bello.y"
    { (yyval.exp)=bldBnrExp(BIT_AND, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); }
    break;

  case 68:
/* Line 1792 of yacc.c  */
#line 254 "bello.y"
    { (yyval.exp)=bldBnrExp(BIT_OR, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); }
    break;

  case 69:
/* Line 1792 of yacc.c  */
#line 255 "bello.y"
    { (yyval.exp)=bldBnrExp(BIT_XOR, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); }
    break;

  case 70:
/* Line 1792 of yacc.c  */
#line 259 "bello.y"
    { (yyval.exp)=bldCnstIntExp((yyvsp[(1) - (1)].intVl)); /*printf("Get data: %d\n",$1);*/ }
    break;

  case 71:
/* Line 1792 of yacc.c  */
#line 260 "bello.y"
    { (yyval.exp)=bldCnstFltExp((yyvsp[(1) - (1)].fltVl)); }
    break;

  case 72:
/* Line 1792 of yacc.c  */
#line 261 "bello.y"
    { (yyval.exp)=bldCnstBlnExp((yyvsp[(1) - (1)].blnVl)); }
    break;

  case 73:
/* Line 1792 of yacc.c  */
#line 262 "bello.y"
    { (yyval.exp)=bldCnstStrExp((yyvsp[(1) - (1)].strVl)); }
    break;

  case 74:
/* Line 1792 of yacc.c  */
#line 263 "bello.y"
    { (yyval.exp)=bldCnstNllExp(); }
    break;

  case 77:
/* Line 1792 of yacc.c  */
#line 268 "bello.y"
    { (yyval.exp)= bldLvlExp(bldVrbExp((yyvsp[(1) - (1)].idtf))); }
    break;

  case 78:
/* Line 1792 of yacc.c  */
#line 270 "bello.y"
    { 
        (yyval.exp)=(yyvsp[(1) - (2)].exp); 
        bldLvlExpAdd((yyvsp[(1) - (2)].exp), (yyvsp[(2) - (2)].evlLst)); 
    }
    break;

  case 79:
/* Line 1792 of yacc.c  */
#line 299 "bello.y"
    {
        (yyval.exp)= bldArrExp((yyvsp[(2) - (3)].elmtLst));
    }
    break;

  case 80:
/* Line 1792 of yacc.c  */
#line 303 "bello.y"
    {
        (yyval.exp)= bldArrExp(bldElmtLst());
    }
    break;

  case 81:
/* Line 1792 of yacc.c  */
#line 309 "bello.y"
    {
        (yyval.exp) = bldNewArrExp((yyvsp[(3) - (4)].exp));
    }
    break;

  case 82:
/* Line 1792 of yacc.c  */
#line 315 "bello.y"
    { 
        (yyval.elmtLst)= bldElmtLst(); 
        elmtLstAdd((yyval.elmtLst), (yyvsp[(1) - (1)].exp)); 
    }
    break;

  case 83:
/* Line 1792 of yacc.c  */
#line 320 "bello.y"
    {  
        (yyval.elmtLst)=(yyvsp[(1) - (3)].elmtLst);  
        elmtLstAdd((yyval.elmtLst), (yyvsp[(3) - (3)].exp)); 
    }
    break;

  case 84:
/* Line 1792 of yacc.c  */
#line 327 "bello.y"
    { (yyval.stmt)=bldVarStmt((yyvsp[(2) - (2)].asgnLst)); }
    break;

  case 85:
/* Line 1792 of yacc.c  */
#line 332 "bello.y"
    {
        (yyval.asgnLst)= bldAsgnLst();
        asgnLstAdd((yyval.asgnLst), bldVrbExp((yyvsp[(1) - (1)].idtf)), bldNllExp());
    }
    break;

  case 86:
/* Line 1792 of yacc.c  */
#line 337 "bello.y"
    {
        (yyval.asgnLst)= bldAsgnLst();
        asgnLstAdd((yyval.asgnLst), bldVrbExp((yyvsp[(1) - (3)].idtf)), (yyvsp[(3) - (3)].exp));
    }
    break;

  case 87:
/* Line 1792 of yacc.c  */
#line 342 "bello.y"
    {
        (yyval.asgnLst)=(yyvsp[(1) - (3)].asgnLst);
        asgnLstAdd((yyval.asgnLst), bldVrbExp((yyvsp[(3) - (3)].idtf)), bldNllExp());
    }
    break;

  case 88:
/* Line 1792 of yacc.c  */
#line 347 "bello.y"
    {
        (yyval.asgnLst)=(yyvsp[(1) - (5)].asgnLst);
        asgnLstAdd((yyval.asgnLst), bldVrbExp((yyvsp[(3) - (5)].idtf)), (yyvsp[(5) - (5)].exp));
    }
    break;

  case 89:
/* Line 1792 of yacc.c  */
#line 358 "bello.y"
    {
        (yyval.exp)=bldFcnExp((yyvsp[(1) - (4)].idtf), (yyvsp[(3) - (4)].argLst));
    }
    break;

  case 90:
/* Line 1792 of yacc.c  */
#line 362 "bello.y"
    {
        (yyval.exp)=bldFcnExp((yyvsp[(1) - (3)].idtf), bldArgLst());
    }
    break;

  case 91:
/* Line 1792 of yacc.c  */
#line 368 "bello.y"
    {
        (yyval.argLst)=bldArgLst();
        argLstAdd((yyval.argLst), (yyvsp[(1) - (1)].exp));
    }
    break;

  case 92:
/* Line 1792 of yacc.c  */
#line 373 "bello.y"
    {
        (yyval.argLst)=(yyvsp[(1) - (3)].argLst);
        argLstAdd((yyval.argLst), (yyvsp[(3) - (3)].exp));
    }
    break;

  case 93:
/* Line 1792 of yacc.c  */
#line 381 "bello.y"
    {
        (yyval.evlLst) = bldEvlLst();
        evlLstElmtAdd((yyval.evlLst), (yyvsp[(2) - (3)].exp));
    }
    break;

  case 94:
/* Line 1792 of yacc.c  */
#line 386 "bello.y"
    {
        (yyval.evlLst)= bldEvlLst();
        evlLstSlcAdd((yyval.evlLst), (yyvsp[(2) - (5)].exp), (yyvsp[(4) - (5)].exp), bldCnstIntExp(1));
    }
    break;

  case 95:
/* Line 1792 of yacc.c  */
#line 391 "bello.y"
    {
        (yyval.evlLst)= bldEvlLst();
        evlLstSlcAdd((yyval.evlLst), (yyvsp[(2) - (6)].exp), (yyvsp[(4) - (6)].exp), bldCnstIntExp(1));
    }
    break;

  case 96:
/* Line 1792 of yacc.c  */
#line 396 "bello.y"
    {
        (yyval.evlLst)= bldEvlLst();
        evlLstSlcAdd((yyval.evlLst), (yyvsp[(2) - (7)].exp), (yyvsp[(4) - (7)].exp), (yyvsp[(6) - (7)].exp));
    }
    break;

  case 97:
/* Line 1792 of yacc.c  */
#line 401 "bello.y"
    {
        (yyval.evlLst)= bldEvlLst();
        evlLstSlcAdd((yyval.evlLst), (yyvsp[(2) - (4)].exp), bldCnstIntExp(-1), bldCnstIntExp(1));
    }
    break;

  case 98:
/* Line 1792 of yacc.c  */
#line 406 "bello.y"
    {
        (yyval.evlLst)= bldEvlLst();
        evlLstSlcAdd((yyval.evlLst), (yyvsp[(2) - (5)].exp), bldCnstIntExp(-1), bldCnstIntExp(1));
    }
    break;

  case 99:
/* Line 1792 of yacc.c  */
#line 411 "bello.y"
    {
        (yyval.evlLst)= bldEvlLst();
        evlLstSlcAdd((yyval.evlLst), (yyvsp[(2) - (6)].exp), bldCnstIntExp(-1), (yyvsp[(5) - (6)].exp));
    }
    break;

  case 100:
/* Line 1792 of yacc.c  */
#line 416 "bello.y"
    {
        (yyval.evlLst)= bldEvlLst();
        evlLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), (yyvsp[(3) - (4)].exp), bldCnstIntExp(1));
    }
    break;

  case 101:
/* Line 1792 of yacc.c  */
#line 421 "bello.y"
    {
        (yyval.evlLst)= bldEvlLst();
        evlLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), (yyvsp[(3) - (5)].exp), bldCnstIntExp(1));
    }
    break;

  case 102:
/* Line 1792 of yacc.c  */
#line 426 "bello.y"
    {
        (yyval.evlLst)= bldEvlLst();
        evlLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), (yyvsp[(3) - (6)].exp), (yyvsp[(5) - (6)].exp));
    }
    break;

  case 103:
/* Line 1792 of yacc.c  */
#line 431 "bello.y"
    {
        (yyval.evlLst)= bldEvlLst();
        evlLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), bldCnstIntExp(-1), bldCnstIntExp(1));
    }
    break;

  case 104:
/* Line 1792 of yacc.c  */
#line 436 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[(1) - (4)].evlLst);
        evlLstElmtAdd((yyval.evlLst),(yyvsp[(3) - (4)].exp));
    }
    break;

  case 105:
/* Line 1792 of yacc.c  */
#line 441 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[(1) - (6)].evlLst);
        evlLstSlcAdd((yyval.evlLst), (yyvsp[(3) - (6)].exp), (yyvsp[(5) - (6)].exp), bldCnstIntExp(1));
    }
    break;

  case 106:
/* Line 1792 of yacc.c  */
#line 446 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[(1) - (7)].evlLst);
        evlLstSlcAdd((yyval.evlLst), (yyvsp[(3) - (7)].exp), (yyvsp[(5) - (7)].exp), bldCnstIntExp(1));
    }
    break;

  case 107:
/* Line 1792 of yacc.c  */
#line 451 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[(1) - (8)].evlLst);
        evlLstSlcAdd((yyval.evlLst), (yyvsp[(3) - (8)].exp), (yyvsp[(5) - (8)].exp), (yyvsp[(7) - (8)].exp));
    }
    break;

  case 108:
/* Line 1792 of yacc.c  */
#line 456 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[(1) - (5)].evlLst);
        evlLstSlcAdd((yyval.evlLst), (yyvsp[(3) - (5)].exp), bldCnstIntExp(-1), bldCnstIntExp(1));
    }
    break;

  case 109:
/* Line 1792 of yacc.c  */
#line 461 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[(1) - (6)].evlLst);
        evlLstSlcAdd((yyval.evlLst), (yyvsp[(3) - (6)].exp), bldCnstIntExp(-1), bldCnstIntExp(1));
    }
    break;

  case 110:
/* Line 1792 of yacc.c  */
#line 466 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[(1) - (7)].evlLst);
        evlLstSlcAdd((yyval.evlLst), (yyvsp[(3) - (7)].exp), bldCnstIntExp(-1), (yyvsp[(6) - (7)].exp));
    }
    break;

  case 111:
/* Line 1792 of yacc.c  */
#line 471 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[(1) - (5)].evlLst);
        evlLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), (yyvsp[(4) - (5)].exp), bldCnstIntExp(1));
    }
    break;

  case 112:
/* Line 1792 of yacc.c  */
#line 476 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[(1) - (6)].evlLst);
        evlLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), (yyvsp[(4) - (6)].exp), bldCnstIntExp(1));
    }
    break;

  case 113:
/* Line 1792 of yacc.c  */
#line 481 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[(1) - (7)].evlLst);
        evlLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), (yyvsp[(4) - (7)].exp), (yyvsp[(6) - (7)].exp));
    }
    break;

  case 114:
/* Line 1792 of yacc.c  */
#line 486 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[(1) - (5)].evlLst);
        evlLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), bldCnstIntExp(-1), bldCnstIntExp(1));
    }
    break;

  case 115:
/* Line 1792 of yacc.c  */
#line 504 "bello.y"
    {
        (yyval.stmt)=bldIfStmt((yyvsp[(3) - (5)].exp),(yyvsp[(5) - (5)].stmt));
    }
    break;

  case 116:
/* Line 1792 of yacc.c  */
#line 508 "bello.y"
    {
        (yyval.stmt)=bldIfElsStmt((yyvsp[(3) - (7)].exp), (yyvsp[(5) - (7)].stmt), (yyvsp[(7) - (7)].stmt));
    }
    break;

  case 117:
/* Line 1792 of yacc.c  */
#line 514 "bello.y"
    {
        (yyval.stmt)= bldForStmt((yyvsp[(3) - (9)].stmt), (yyvsp[(5) - (9)].stmt), (yyvsp[(7) - (9)].stmt), (yyvsp[(9) - (9)].stmt));  
    }
    break;

  case 118:
/* Line 1792 of yacc.c  */
#line 520 "bello.y"
    {
        (yyval.stmt)= bldWhlStmt((yyvsp[(3) - (5)].stmt), (yyvsp[(5) - (5)].stmt));
    }
    break;

  case 119:
/* Line 1792 of yacc.c  */
#line 526 "bello.y"
    {
        (yyval.stmt)= bldDoWhlStmt((yyvsp[(5) - (7)].stmt), (yyvsp[(2) - (7)].stmt));
    }
    break;

  case 120:
/* Line 1792 of yacc.c  */
#line 531 "bello.y"
    { (yyval.stmt)= bldBrkStmt(bldCnstIntExp(1)); }
    break;

  case 121:
/* Line 1792 of yacc.c  */
#line 532 "bello.y"
    { (yyval.stmt)= bldBrkStmt((yyvsp[(3) - (4)].exp)); }
    break;

  case 122:
/* Line 1792 of yacc.c  */
#line 535 "bello.y"
    { (yyval.stmt)= bldCntnStmt(bldCnstIntExp(1)); }
    break;

  case 123:
/* Line 1792 of yacc.c  */
#line 536 "bello.y"
    { (yyval.stmt)= bldCntnStmt((yyvsp[(3) - (4)].exp)); }
    break;

  case 126:
/* Line 1792 of yacc.c  */
#line 544 "bello.y"
    {
        struct FcnStrc* fcn;

        fcn=bldFcn((yyvsp[(2) - (6)].idtf), (yyvsp[(4) - (6)].prmLst), (yyvsp[(6) - (6)].stmt));

        (yyval.stmt) = bldFcnStmt(fcn);
    }
    break;

  case 127:
/* Line 1792 of yacc.c  */
#line 552 "bello.y"
    {
        struct FcnStrc *fcn;

        fcn=bldFcn((yyvsp[(2) - (5)].idtf), bldPrmLst(), (yyvsp[(5) - (5)].stmt));

        (yyval.stmt) = bldFcnStmt(fcn);
    }
    break;

  case 128:
/* Line 1792 of yacc.c  */
#line 560 "bello.y"
    {
        struct FcnStrc* fcn;

        fcn=bldFcn((yyvsp[(2) - (6)].idtf), (yyvsp[(4) - (6)].prmLst), (yyvsp[(6) - (6)].stmt));

        (yyval.stmt) = bldFcnStmt(fcn);
    }
    break;

  case 129:
/* Line 1792 of yacc.c  */
#line 568 "bello.y"
    {
        struct FcnStrc *fcn;

        fcn=bldFcn((yyvsp[(2) - (5)].idtf), bldPrmLst(), (yyvsp[(5) - (5)].stmt));

        (yyval.stmt) = bldFcnStmt(fcn);
    }
    break;

  case 130:
/* Line 1792 of yacc.c  */
#line 579 "bello.y"
    {
        (yyval.prmLst) = bldPrmLst();
        prmLstAdd((yyval.prmLst), bldVrbExp((yyvsp[(1) - (1)].idtf)));
    }
    break;

  case 131:
/* Line 1792 of yacc.c  */
#line 584 "bello.y"
    { 
        (yyval.prmLst)=(yyvsp[(1) - (3)].prmLst);  
        prmLstAdd((yyval.prmLst), bldVrbExp((yyvsp[(3) - (3)].idtf)));
    }
    break;

  case 132:
/* Line 1792 of yacc.c  */
#line 590 "bello.y"
    { (yyval.stmt)=bldRtnStmt(NULL); }
    break;

  case 133:
/* Line 1792 of yacc.c  */
#line 591 "bello.y"
    { (yyval.stmt)=bldRtnStmt((yyvsp[(2) - (2)].exp)); }
    break;


/* Line 1792 of yacc.c  */
#line 2836 "y.tab.c"
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


/* Line 2055 of yacc.c  */
#line 594 "bello.y"


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


