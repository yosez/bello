/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     NULL_STRING = 258,
     NOINDENT = 259,
     LF = 260,
     END_FILE = 261,
     NEW = 262,
     IMPORT = 263,
     NOP = 264,
     DOT = 265,
     CLASS = 266,
     SHARED = 267,
     THIS = 268,
     AT = 269,
     INDENT = 270,
     INT_LTR = 271,
     BLN_LTR = 272,
     FLT_LTR = 273,
     STR_LTR = 274,
     OBJECT_VALUE = 275,
     NLL_LTR = 276,
     ARRAY_VALUE = 277,
     SHORTCUT_PRINTLN = 278,
     IDENTIFER = 279,
     ASSIGN = 280,
     VAR = 281,
     GLOBAL = 282,
     ADD_ASSIGN = 283,
     SUB_ASSIGN = 284,
     MUL_ASSIGN = 285,
     DIV_ASSIGN = 286,
     MOD_ASSIGN = 287,
     PRINT = 288,
     PRINTLN = 289,
     LEFT_PAREN = 290,
     RIGHT_PAREN = 291,
     LEFT_QUAD = 292,
     RIGHT_QUAD = 293,
     LEFT_BRACE = 294,
     RIGHT_BRACE = 295,
     SEMICOLON_OPTIONAL = 296,
     SEMICOLON = 297,
     COMMA = 298,
     COLON = 299,
     ADD = 300,
     SUB = 301,
     MUL = 302,
     DIV = 303,
     MOD = 304,
     EQ = 305,
     NE = 306,
     GT = 307,
     GE = 308,
     LT = 309,
     LE = 310,
     AND = 311,
     OR = 312,
     NOT = 313,
     XOR = 314,
     BIT_AND = 315,
     BIT_OR = 316,
     BIT_XOR = 317,
     BIT_NOT = 318,
     INCREMENT = 319,
     DECREMENT = 320,
     IF = 321,
     ELIF = 322,
     ELSE = 323,
     FOR = 324,
     WHILE = 325,
     DO = 326,
     CONTINUE = 327,
     BREAK = 328,
     FUNC = 329,
     RETURN = 330,
     NEW_ARRAY = 331,
     SPACE = 332,
     PACKAGE = 333,
     PLUS_SIGN = 334,
     MINUS_SIGN = 335,
     QM = 336
   };
#endif
/* Tokens.  */
#define NULL_STRING 258
#define NOINDENT 259
#define LF 260
#define END_FILE 261
#define NEW 262
#define IMPORT 263
#define NOP 264
#define DOT 265
#define CLASS 266
#define SHARED 267
#define THIS 268
#define AT 269
#define INDENT 270
#define INT_LTR 271
#define BLN_LTR 272
#define FLT_LTR 273
#define STR_LTR 274
#define OBJECT_VALUE 275
#define NLL_LTR 276
#define ARRAY_VALUE 277
#define SHORTCUT_PRINTLN 278
#define IDENTIFER 279
#define ASSIGN 280
#define VAR 281
#define GLOBAL 282
#define ADD_ASSIGN 283
#define SUB_ASSIGN 284
#define MUL_ASSIGN 285
#define DIV_ASSIGN 286
#define MOD_ASSIGN 287
#define PRINT 288
#define PRINTLN 289
#define LEFT_PAREN 290
#define RIGHT_PAREN 291
#define LEFT_QUAD 292
#define RIGHT_QUAD 293
#define LEFT_BRACE 294
#define RIGHT_BRACE 295
#define SEMICOLON_OPTIONAL 296
#define SEMICOLON 297
#define COMMA 298
#define COLON 299
#define ADD 300
#define SUB 301
#define MUL 302
#define DIV 303
#define MOD 304
#define EQ 305
#define NE 306
#define GT 307
#define GE 308
#define LT 309
#define LE 310
#define AND 311
#define OR 312
#define NOT 313
#define XOR 314
#define BIT_AND 315
#define BIT_OR 316
#define BIT_XOR 317
#define BIT_NOT 318
#define INCREMENT 319
#define DECREMENT 320
#define IF 321
#define ELIF 322
#define ELSE 323
#define FOR 324
#define WHILE 325
#define DO 326
#define CONTINUE 327
#define BREAK 328
#define FUNC 329
#define RETURN 330
#define NEW_ARRAY 331
#define SPACE 332
#define PACKAGE 333
#define PLUS_SIGN 334
#define MINUS_SIGN 335
#define QM 336




/* Copy the first part of user declarations.  */
#line 1 "./bello.y"

    #pragma once

    #ifndef Y_TAB_C
    #define Y_TAB_C
    #include <iostream>
    #include <stdio.h>
    #include <string.h>
    #include <stdlib.h>
    #include <stdbool.h>
    #include <stack>
    #include "dfn.h"
    #include "vrb.h"
    #include "val.h"
    #include "exp.h"
    #include "arr.h"
    #include "stm.h"
    #include "fn.h"
    #include "cls.h"
    #include "envr.h"
    #include "err.h"
    #include "ntv.h"
    #include "lex.yy.c"
    #include <string>
    #include <print>

    using std::print;

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

    extern int chkStmtAlwSubStmt(struct Stmt* stmt);

    extern int chkStmtAlwScndStmt(struct Stmt* stmt);

    extern int pnStmt(vector<Envr*> &envr, Stmt* stmt);

    //prsStt为1 从标准输入读取 prsStt为2 从源文件读取
    int prsStt;

    void fldStmt(int indt);
    void pshStmt(int indt, Stmt* stmt);
    void prtStmtStk();

    //类定义语句的标志，0为不是类定义的状态，1为类定义的状态
    int blnDfnCls=0;

    struct Stmt* lstStmt;

    int impFlg=1;


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 69 "./bello.y"
{
    int blnVl;
    int intVl;
    float fltVl;
    string *strVl;
    struct ObjStrc* objVl;

    struct VrbStrc *vrb;
    struct Exp *exp;
    struct Stmt *stmt;
    struct Fcn *fcn;
    struct PrmLstStrc *prmLst;
    struct ArgLstStrc *argLst;
    struct VrbLstStrc *vrbLst;
    struct AsnLstStrc *asnLst;
    struct ElmtLstStrc *elmtLst;
    struct PstnLstStrc *pstnLst;
    struct AcsLstStrc *evlLst;
    
    char *idtf;
    //string idtf;
}
/* Line 193 of yacc.c.  */
#line 348 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 361 "y.tab.c"

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
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1772

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  82
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  51
/* YYNRULES -- Number of rules.  */
#define YYNRULES  177
/* YYNRULES -- Number of states.  */
#define YYNSTATES  303

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   336

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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,    10,    18,    24,    31,    32,
      41,    48,    52,    56,    58,    60,    61,    62,    63,    64,
      65,    66,    67,    69,    71,    73,    75,    77,    79,    81,
      83,    85,    87,    89,    91,    93,    95,    97,    99,   101,
     103,   105,   107,   109,   111,   113,   115,   117,   119,   121,
     123,   125,   127,   129,   131,   132,   134,   138,   141,   143,
     146,   148,   150,   152,   154,   156,   158,   160,   162,   164,
     168,   172,   176,   180,   184,   188,   191,   194,   197,   200,
     203,   206,   210,   213,   216,   220,   224,   228,   232,   236,
     240,   244,   248,   252,   256,   260,   264,   268,   272,   276,
     280,   284,   290,   293,   295,   297,   299,   301,   303,   305,
     307,   309,   313,   316,   320,   324,   327,   329,   333,   336,
     340,   343,   345,   349,   353,   359,   364,   368,   370,   374,
     378,   384,   386,   390,   394,   400,   404,   410,   417,   425,
     430,   436,   443,   448,   454,   461,   466,   471,   478,   486,
     495,   501,   508,   516,   522,   529,   537,   543,   546,   548,
     551,   558,   565,   568,   570,   578,   580,   585,   587,   592,
     594,   596,   602,   607,   614,   620,   623,   625
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      83,     0,    -1,    84,    -1,    85,    -1,     8,    19,    -1,
      85,     4,    94,    88,    90,    93,     5,    -1,    85,     4,
      95,    89,     5,    -1,    85,    15,    96,     5,    87,    89,
      -1,    -1,    85,    92,    86,    96,     5,    87,    89,    93,
      -1,    85,    15,    96,     5,    87,    89,    -1,    85,     5,
      91,    -1,    85,     6,    92,    -1,     1,    -1,     6,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   102,    -1,   127,
      -1,   128,    -1,   132,    -1,    99,    -1,   114,    -1,   115,
      -1,   130,    -1,   124,    -1,   131,    -1,   125,    -1,   102,
      -1,   121,    -1,   122,    -1,   123,    -1,   124,    -1,   125,
      -1,   127,    -1,   128,    -1,   132,    -1,   130,    -1,    99,
      -1,   114,    -1,   115,    -1,   131,    -1,     1,    -1,   102,
      -1,   121,    -1,   124,    -1,   125,    -1,   126,    -1,    98,
      -1,    -1,     9,    -1,    39,   101,    40,    -1,    39,    40,
      -1,    96,    -1,   101,    96,    -1,   103,    -1,   110,    -1,
     104,    -1,   107,    -1,   108,    -1,   112,    -1,   109,    -1,
     105,    -1,   106,    -1,   111,    25,   103,    -1,   111,    28,
     103,    -1,   111,    29,   103,    -1,   111,    30,   103,    -1,
     111,    31,   103,    -1,   111,    32,   103,    -1,    64,   111,
      -1,    65,   111,    -1,   111,    64,    -1,   111,    65,    -1,
      46,   103,    -1,    45,   103,    -1,    35,   103,    36,    -1,
      58,   103,    -1,    63,   103,    -1,   103,    45,   103,    -1,
     103,    46,   103,    -1,   103,    47,   103,    -1,   103,    48,
     103,    -1,   103,    49,   103,    -1,   103,    56,   103,    -1,
     103,    57,   103,    -1,   103,    59,   103,    -1,   103,    50,
     103,    -1,   103,    51,   103,    -1,   103,    52,   103,    -1,
     103,    53,   103,    -1,   103,    54,   103,    -1,   103,    55,
     103,    -1,   103,    60,   103,    -1,   103,    61,   103,    -1,
     103,    62,   103,    -1,   103,    81,   103,    44,   103,    -1,
      23,   113,    -1,    16,    -1,    18,    -1,    17,    -1,    19,
      -1,    21,    -1,   117,    -1,   111,    -1,    24,    -1,   111,
      10,    24,    -1,   111,   120,    -1,   111,    10,   117,    -1,
      37,   113,    38,    -1,    37,    38,    -1,   103,    -1,   113,
      43,   103,    -1,    26,   116,    -1,    12,    26,   116,    -1,
      27,   116,    -1,    24,    -1,    24,    25,   103,    -1,   116,
      43,    24,    -1,   116,    43,    24,    25,   103,    -1,    24,
      35,   118,    36,    -1,    24,    35,    36,    -1,   103,    -1,
      24,    44,   103,    -1,   118,    43,   103,    -1,   118,    43,
      24,    44,   103,    -1,    24,    -1,    24,    25,   103,    -1,
     119,    43,    24,    -1,   119,    43,    24,    25,   103,    -1,
      37,   103,    38,    -1,    37,   103,    44,   103,    38,    -1,
      37,   103,    44,   103,    44,    38,    -1,    37,   103,    44,
     103,    44,   103,    38,    -1,    37,   103,    44,    38,    -1,
      37,   103,    44,    44,    38,    -1,    37,   103,    44,    44,
     103,    38,    -1,    37,    44,   103,    38,    -1,    37,    44,
     103,    44,    38,    -1,    37,    44,   103,    44,   103,    38,
      -1,    37,    44,    44,    38,    -1,   120,    37,   103,    38,
      -1,   120,    37,   103,    44,   103,    38,    -1,   120,    37,
     103,    44,   103,    44,    38,    -1,   120,    37,   103,    44,
     103,    44,   103,    38,    -1,   120,    37,   103,    44,    38,
      -1,   120,    37,   103,    44,    44,    38,    -1,   120,    37,
     103,    44,    44,   103,    38,    -1,   120,    37,    44,   103,
      38,    -1,   120,    37,    44,   103,    44,    38,    -1,   120,
      37,    44,   103,    44,   103,    38,    -1,   120,    37,    44,
      44,    38,    -1,    66,   103,    -1,    68,    -1,    67,   103,
      -1,    69,    97,    42,   102,    42,    97,    -1,    69,    97,
      44,   102,    44,    97,    -1,    70,   103,    -1,    70,    -1,
      71,   129,    70,    35,   102,    36,    42,    -1,    73,    -1,
      73,    35,   103,    36,    -1,    72,    -1,    72,    35,   103,
      36,    -1,    96,    -1,   100,    -1,    74,    24,    35,   119,
      36,    -1,    74,    24,    35,    36,    -1,    12,    74,    24,
      35,   119,    36,    -1,    12,    74,    24,    35,    36,    -1,
      11,    24,    -1,    75,    -1,    75,   103,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   177,   177,   178,   182,   207,   208,   209,   213,   213,
     215,   217,   219,   220,   221,   228,   238,   284,   329,   355,
     404,   481,   498,   499,   500,   501,   502,   503,   504,   507,
     508,   509,   510,   521,   522,   523,   524,   525,   526,   528,
     529,   530,   531,   532,   533,   534,   535,   536,   546,   547,
     548,   549,   550,   551,   555,   558,   561,   562,   565,   570,
     577,   583,   584,   585,   586,   587,   588,   591,   592,   595,
     596,   597,   598,   599,   600,   604,   605,   606,   607,   610,
     611,   612,   613,   614,   617,   618,   619,   620,   621,   622,
     623,   624,   625,   626,   627,   628,   629,   630,   631,   632,
     633,   634,   637,   643,   644,   645,   646,   647,   648,   649,
     653,   654,   669,   674,   738,   742,   750,   755,   763,   775,
     790,   793,   798,   803,   808,   819,   823,   829,   836,   841,
     846,   853,   858,   863,   868,   877,   882,   887,   892,   897,
     902,   907,   912,   917,   923,   928,   933,   938,   943,   948,
     953,   958,   963,   968,   973,   978,   983,   992,  1008,  1014,
    1030,  1034,  1059,  1067,  1073,  1079,  1080,  1083,  1084,  1087,
    1088,  1125,  1133,  1141,  1158,  1168,  1182,  1183
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NULL_STRING", "NOINDENT", "LF",
  "END_FILE", "NEW", "IMPORT", "NOP", "DOT", "CLASS", "SHARED", "THIS",
  "AT", "INDENT", "INT_LTR", "BLN_LTR", "FLT_LTR", "STR_LTR",
  "OBJECT_VALUE", "NLL_LTR", "ARRAY_VALUE", "SHORTCUT_PRINTLN",
  "IDENTIFER", "ASSIGN", "VAR", "GLOBAL", "ADD_ASSIGN", "SUB_ASSIGN",
  "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "PRINT", "PRINTLN",
  "LEFT_PAREN", "RIGHT_PAREN", "LEFT_QUAD", "RIGHT_QUAD", "LEFT_BRACE",
  "RIGHT_BRACE", "SEMICOLON_OPTIONAL", "SEMICOLON", "COMMA", "COLON",
  "ADD", "SUB", "MUL", "DIV", "MOD", "EQ", "NE", "GT", "GE", "LT", "LE",
  "AND", "OR", "NOT", "XOR", "BIT_AND", "BIT_OR", "BIT_XOR", "BIT_NOT",
  "INCREMENT", "DECREMENT", "IF", "ELIF", "ELSE", "FOR", "WHILE", "DO",
  "CONTINUE", "BREAK", "FUNC", "RETURN", "NEW_ARRAY", "SPACE", "PACKAGE",
  "PLUS_SIGN", "MINUS_SIGN", "QM", "$accept", "begin_stream",
  "import_statement", "statement", "@1", "check_indent",
  "enclose_statement_stack", "build_statement_stack",
  "build_single_statement_stack", "close_execute_statement",
  "close_execute_last_statement", "execute_single_statement",
  "monostatement", "foldable_statement", "single_statement",
  "single_statement_no_semicolon", "null_statement", "nop_statement",
  "statement_block", "block_list", "expression_statement", "expression",
  "lvalue_operation_expression", "assign_expression",
  "self_operation_expression", "unary_expression", "binary_expression",
  "shortcut_expression", "value_expression", "lvalue_expression",
  "array_expression", "element_list", "var_statement", "global_statement",
  "assign_list", "function_expression", "argument_list", "parameter_list",
  "evaluate_list", "if_statement", "else_statement", "elif_statement",
  "for_statement", "while_statement", "do_while_statement",
  "break_statement", "continue_statement", "structure_statement",
  "function_statement", "class_statement", "return_statement", 0
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
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    82,    83,    83,    84,    85,    85,    85,    86,    85,
      85,    85,    85,    85,    85,    87,    88,    89,    90,    91,
      92,    93,    94,    94,    94,    94,    94,    94,    94,    95,
      95,    95,    95,    96,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    97,    97,
      97,    97,    97,    97,    98,    99,   100,   100,   101,   101,
     102,   103,   103,   103,   103,   103,   103,   104,   104,   105,
     105,   105,   105,   105,   105,   106,   106,   106,   106,   107,
     107,   107,   107,   107,   108,   108,   108,   108,   108,   108,
     108,   108,   108,   108,   108,   108,   108,   108,   108,   108,
     108,   108,   109,   110,   110,   110,   110,   110,   110,   110,
     111,   111,   111,   111,   112,   112,   113,   113,   114,   114,
     115,   116,   116,   116,   116,   117,   117,   118,   118,   118,
     118,   119,   119,   119,   119,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   121,   122,   123,
     124,   124,   125,   125,   126,   127,   127,   128,   128,   129,
     129,   130,   130,   130,   130,   131,   132,   132
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     7,     5,     6,     0,     8,
       6,     3,     3,     1,     1,     0,     0,     0,     0,     0,
       0,     0,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     1,     3,     2,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       3,     3,     3,     3,     3,     2,     2,     2,     2,     2,
       2,     3,     2,     2,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     5,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     2,     3,     3,     2,     1,     3,     2,     3,
       2,     1,     3,     3,     5,     4,     3,     1,     3,     3,
       5,     1,     3,     3,     5,     3,     5,     6,     7,     4,
       5,     6,     4,     5,     6,     4,     4,     6,     7,     8,
       5,     6,     7,     5,     6,     7,     5,     2,     1,     2,
       6,     6,     2,     1,     7,     1,     4,     1,     4,     1,
       1,     5,     4,     6,     5,     2,     1,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    13,    14,     0,     0,     2,    20,     4,     1,     0,
      19,    20,     0,     8,    55,     0,     0,   103,   105,   104,
     106,   107,     0,   110,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    54,   163,   167,   165,     0,   176,
      16,    17,    26,    22,    60,    62,    67,    68,    63,    64,
      66,    61,   109,    65,    27,    28,   108,    30,    32,    23,
      24,    29,    31,    25,    11,    12,    47,     0,     0,   158,
       0,    43,    33,    44,    45,    34,    35,    36,    37,    38,
      39,    40,    42,    46,    41,     0,   175,     0,     0,   116,
     102,     0,   121,   118,   120,     0,   115,     0,    80,    79,
      82,    83,   110,    75,    76,     0,     0,    53,    48,    49,
      50,    51,    52,   162,     0,     0,     0,   177,    18,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    77,    78,   112,   157,
     159,    15,     0,   119,     0,     0,   110,   126,   127,     0,
       0,     0,    81,   114,     0,   169,   170,     0,     0,     0,
       0,     0,     0,    21,     6,    84,    85,    86,    87,    88,
      92,    93,    94,    95,    96,    97,    89,    90,    91,    98,
      99,   100,     0,   111,   113,    69,    70,    71,    72,    73,
      74,     0,     0,     0,    17,    15,     0,   117,     0,   125,
       0,   122,   123,    57,    58,     0,     0,     0,     0,   168,
     166,   131,   172,     0,     0,     0,     0,     0,   135,     0,
       0,     0,     7,    17,   174,     0,   128,   110,   129,     0,
      56,    59,     0,    54,    54,     0,   171,     0,     5,   101,
     145,   142,     0,   139,     0,     0,     0,     0,   146,     0,
      21,   173,     0,   124,     0,   160,   161,   132,   133,   143,
       0,   140,     0,   136,     0,   156,   153,     0,   150,     0,
       0,     9,   130,     0,     0,   144,   141,   137,     0,   154,
       0,   151,     0,   147,     0,   164,   134,   138,   155,   152,
     148,     0,   149
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,     5,     6,    85,   204,   118,   119,   173,    64,
      13,   224,    40,    41,    70,   106,   107,    71,   166,   215,
      72,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    90,    73,    74,    93,    56,   159,   223,   148,    75,
      76,    77,    78,    79,   112,    80,    81,   167,    82,    83,
      84
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -186
static const yytype_int16 yypact[] =
{
      66,  -186,  -186,    17,    29,  -186,    55,  -186,  -186,   519,
    -186,  -186,   452,  -186,  -186,    14,   -10,  -186,  -186,  -186,
    -186,  -186,  1013,    47,    28,    28,  1013,   641,  1013,  1013,
    1013,  1013,    38,    38,   127,  1013,    52,    59,    67,  1013,
    -186,  -186,  -186,  -186,  1630,  -186,  -186,  -186,  -186,  -186,
    -186,  -186,    -7,  -186,  -186,  -186,  -186,  -186,  -186,  -186,
    -186,  -186,  -186,  -186,  -186,  -186,  -186,  1013,  1013,  -186,
      90,  -186,  -186,  -186,  -186,  -186,  -186,  -186,  -186,  -186,
    -186,  -186,  -186,  -186,  -186,   452,  -186,    28,    72,  1630,
      54,   672,    91,    81,    81,  1065,  -186,    11,   -31,   -31,
     -31,   -31,  -186,    10,    10,   242,    39,  -186,  -186,  -186,
    -186,  -186,  -186,  1630,  1013,  1013,    92,  1630,  -186,   120,
    1013,  1013,  1013,  1013,  1013,  1013,  1013,  1013,  1013,  1013,
    1013,  1013,  1013,  1013,  1013,  1013,  1013,  1013,   102,  1013,
    1013,  1013,  1013,  1013,  1013,   703,  -186,  -186,    93,  1630,
    1630,  -186,   123,    81,    94,  1013,    21,  -186,  1630,    35,
    1013,   107,  -186,  -186,   312,  -186,  -186,    62,  1013,  1013,
    1102,  1139,    -9,  -186,  -186,   -15,   -15,   -31,   -31,   -31,
      -6,    -6,    -6,    -6,    -6,    -6,  1671,  1653,  1630,   314,
    1691,   244,  1612,    47,  -186,  1630,  1630,  1630,  1630,  1630,
    1630,   734,  1177,   765,  -186,  -186,    27,  1630,  1013,  -186,
    1044,  1630,   109,  -186,  -186,   382,   100,    95,    96,  -186,
    -186,   111,  -186,    37,   134,  1013,   104,  1215,  -186,   579,
     796,  1253,  -186,  -186,  -186,    43,  1630,    33,  1630,  1013,
    -186,  -186,  1013,   127,   127,  1013,  -186,   125,  -186,  1630,
    -186,  -186,   827,  -186,   858,  1291,   114,  1329,  -186,   610,
    -186,  -186,  1013,  1630,   117,  -186,  -186,  1630,   122,  -186,
    1404,  -186,  1441,  -186,   889,  -186,  -186,   920,  -186,   951,
    1367,  -186,  1630,   112,  1013,  -186,  -186,  -186,  1478,  -186,
    1515,  -186,  1552,  -186,   982,  -186,  1630,  -186,  -186,  -186,
    -186,  1589,  -186
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -186,  -186,  -186,  -186,  -186,   -50,  -186,  -185,  -186,  -186,
     145,  -103,  -186,  -186,   -74,  -159,  -186,   149,  -186,  -186,
      -8,   -22,  -186,  -186,  -186,  -186,  -186,  -186,  -186,    56,
    -186,   132,   154,   156,   -11,    30,  -186,   -40,  -186,   -32,
    -186,  -186,     1,     3,  -186,   158,   160,  -186,   161,   162,
     165
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -4
static const yytype_int16 yytable[] =
{
      89,    43,   109,   138,    95,    89,    98,    99,   100,   101,
      57,   152,    58,   113,    94,   221,    87,   117,   139,   232,
     138,   140,   141,   142,   143,   144,   108,   222,   133,     8,
     145,   165,   122,   123,   124,   110,     7,   111,    86,   120,
     121,   122,   123,   124,   133,   149,   150,   145,   260,   163,
     137,   221,    92,   133,   155,    -3,    91,   146,   147,     9,
      10,    11,   102,   234,    88,   208,   137,     1,    91,   158,
      12,   209,     2,   246,     3,   137,   153,   262,   210,   261,
     247,   168,    91,   169,   265,   266,   247,   114,   103,   104,
     214,   116,   170,   171,   115,   151,   154,   155,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   160,   195,   196,   197,
     198,   199,   200,   202,   161,   174,   193,   172,   205,   206,
     203,   212,   216,   207,   239,   242,   245,   243,   211,   248,
     244,   241,   250,    17,    18,    19,    20,   284,    21,   268,
      22,    23,   275,   283,   295,   233,    65,   281,    42,    97,
     217,   218,    26,    54,    27,    55,   235,    59,   194,    60,
      61,    62,    28,    29,    63,     0,     0,     0,     0,   227,
       0,   231,     0,     0,     0,    30,   236,     0,   238,     0,
      31,    32,    33,    67,     0,     0,    34,    35,   105,     0,
       0,     0,     0,   249,     0,     0,     0,   255,   257,     0,
       0,   109,   109,     0,     0,     0,     0,   263,     0,     0,
       0,     0,     0,   267,     0,     0,     0,     0,     0,     0,
     270,     0,   272,     0,   264,   108,   108,   280,     0,     0,
     282,     0,     0,    66,   110,   110,   111,   111,     0,     0,
       0,    14,   288,    15,    16,   290,     0,   292,    17,    18,
      19,    20,   296,    21,     0,    22,    23,     0,    24,    25,
       0,     0,   301,     0,     0,     0,     0,    26,     0,    27,
       0,   164,     0,     0,     0,     0,     0,    28,    29,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
      30,     0,     0,   133,   134,    31,    32,    33,    67,    68,
      69,    34,    35,    66,    36,    37,    38,    39,     0,     0,
       0,    14,     0,    15,    16,   137,     0,     0,    17,    18,
      19,    20,     0,    21,     0,    22,    23,     0,    24,    25,
       0,     0,     0,     0,     0,     0,     0,    26,     0,    27,
       0,     0,   213,     0,     0,     0,     0,    28,    29,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
      30,     0,     0,   133,     0,    31,    32,    33,    67,    68,
      69,    34,    35,    66,    36,    37,    38,    39,     0,     0,
       0,    14,     0,    15,    16,   137,     0,     0,    17,    18,
      19,    20,     0,    21,     0,    22,    23,     0,    24,    25,
       0,     0,     0,     0,     0,     0,     0,    26,     0,    27,
       0,     0,   240,     0,     0,     0,     0,    28,    29,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      30,     0,     0,     0,     0,    31,    32,    33,    67,    68,
      69,    34,    35,    66,    36,    37,    38,    39,     0,     0,
       0,    14,     0,    15,    16,     0,     0,     0,    17,    18,
      19,    20,     0,    21,     0,    22,    23,     0,    24,    25,
       0,     0,     0,     0,     0,     0,     0,    26,     0,    27,
       0,     0,     0,     0,     0,     0,     0,    28,    29,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      30,     0,     0,     0,     0,    31,    32,    33,    67,    68,
      69,    34,    35,     0,    36,    37,    38,    39,    14,     0,
      15,    16,     0,     0,     0,    17,    18,    19,    20,     0,
      21,     0,    22,    23,     0,    24,    25,     0,     0,     0,
       0,     0,     0,     0,    26,     0,    27,     0,     0,     0,
       0,     0,     0,     0,    28,    29,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    30,     0,     0,
       0,     0,    31,    32,    33,     0,     0,     0,    34,    35,
       0,    36,    37,    38,    39,    17,    18,    19,    20,     0,
      21,     0,    22,    23,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    26,     0,    27,   253,     0,     0,
       0,     0,     0,   254,    28,    29,    17,    18,    19,    20,
       0,    21,     0,    22,    23,     0,     0,    30,     0,     0,
       0,     0,    31,    32,    33,    26,     0,    27,   278,     0,
       0,     0,     0,     0,   279,    28,    29,    17,    18,    19,
      20,     0,    21,     0,    22,    23,     0,     0,    30,     0,
       0,     0,     0,    31,    32,    33,    26,     0,    27,    96,
       0,     0,     0,     0,     0,     0,    28,    29,    17,    18,
      19,    20,     0,    21,     0,    22,   156,     0,     0,    30,
       0,     0,     0,     0,    31,    32,    33,    26,   157,    27,
       0,     0,     0,     0,     0,     0,     0,    28,    29,    17,
      18,    19,    20,     0,    21,     0,    22,    23,     0,     0,
      30,     0,     0,     0,     0,    31,    32,    33,    26,     0,
      27,     0,     0,     0,     0,     0,     0,   201,    28,    29,
      17,    18,    19,    20,     0,    21,     0,    22,    23,     0,
       0,    30,     0,     0,     0,     0,    31,    32,    33,    26,
       0,    27,     0,     0,     0,     0,     0,     0,   226,    28,
      29,    17,    18,    19,    20,     0,    21,     0,    22,    23,
       0,     0,    30,     0,     0,     0,     0,    31,    32,    33,
      26,     0,    27,     0,     0,     0,     0,     0,     0,   230,
      28,    29,    17,    18,    19,    20,     0,    21,     0,    22,
      23,     0,     0,    30,     0,     0,     0,     0,    31,    32,
      33,    26,     0,    27,     0,     0,     0,     0,     0,     0,
     256,    28,    29,    17,    18,    19,    20,     0,    21,     0,
      22,    23,     0,     0,    30,     0,     0,     0,     0,    31,
      32,    33,    26,     0,    27,   269,     0,     0,     0,     0,
       0,     0,    28,    29,    17,    18,    19,    20,     0,    21,
       0,    22,    23,     0,     0,    30,     0,     0,     0,     0,
      31,    32,    33,    26,     0,    27,   271,     0,     0,     0,
       0,     0,     0,    28,    29,    17,    18,    19,    20,     0,
      21,     0,    22,    23,     0,     0,    30,     0,     0,     0,
       0,    31,    32,    33,    26,     0,    27,   287,     0,     0,
       0,     0,     0,     0,    28,    29,    17,    18,    19,    20,
       0,    21,     0,    22,    23,     0,     0,    30,     0,     0,
       0,     0,    31,    32,    33,    26,     0,    27,   289,     0,
       0,     0,     0,     0,     0,    28,    29,    17,    18,    19,
      20,     0,    21,     0,    22,    23,     0,     0,    30,     0,
       0,     0,     0,    31,    32,    33,    26,     0,    27,   291,
       0,     0,     0,     0,     0,     0,    28,    29,    17,    18,
      19,    20,     0,    21,     0,    22,    23,     0,     0,    30,
       0,     0,     0,     0,    31,    32,    33,    26,     0,    27,
     300,     0,     0,     0,     0,     0,     0,    28,    29,    17,
      18,    19,    20,     0,    21,     0,    22,    23,     0,     0,
      30,     0,     0,     0,     0,    31,    32,    33,    26,     0,
      27,     0,     0,     0,     0,     0,     0,     0,    28,    29,
      17,    18,    19,    20,     0,    21,     0,    22,   237,     0,
       0,    30,     0,     0,     0,     0,    31,    32,    33,    26,
       0,    27,     0,     0,     0,     0,     0,     0,     0,    28,
      29,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   162,    30,     0,     0,     0,     0,    31,    32,    33,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,     0,   133,   134,   135,   136,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   219,     0,
       0,     0,     0,     0,     0,     0,   137,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
       0,   133,   134,   135,   136,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   220,     0,     0,     0,     0,
       0,     0,     0,   137,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,     0,   133,   134,
     135,   136,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   228,     0,     0,     0,     0,
     137,   229,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,     0,   133,   134,   135,   136,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   251,     0,     0,     0,     0,   137,   252,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,     0,   133,   134,   135,   136,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   258,     0,     0,     0,     0,   137,   259,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,     0,   133,   134,   135,   136,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   273,
       0,     0,     0,     0,   137,   274,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,     0,
     133,   134,   135,   136,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   276,     0,     0,
       0,     0,   137,   277,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,     0,   133,   134,
     135,   136,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   293,     0,     0,     0,     0,
     137,   294,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,     0,   133,   134,   135,   136,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   285,     0,     0,     0,     0,     0,   137,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,     0,   133,   134,   135,   136,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   286,
       0,     0,     0,     0,     0,   137,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,     0,
     133,   134,   135,   136,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   297,     0,     0,     0,
       0,     0,   137,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,     0,   133,   134,   135,
     136,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   298,     0,     0,     0,     0,     0,   137,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,     0,   133,   134,   135,   136,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     299,     0,     0,     0,     0,     0,   137,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
       0,   133,   134,   135,   136,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   302,     0,     0,
       0,     0,     0,   137,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,     0,   133,   134,
     135,   136,     0,     0,     0,     0,   225,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     137,   133,   134,   135,   136,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,     0,   133,
     134,   135,   136,   137,     0,     0,     0,     0,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
       0,   137,   133,   134,   135,   136,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,     0,     0,     0,
     133,   134,   135,   136,   137,     0,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,     0,     0,     0,
     133,   134,   137,   136,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   137
};

static const yytype_int16 yycheck[] =
{
      22,     9,    34,    10,    26,    27,    28,    29,    30,    31,
       9,    85,     9,    35,    25,    24,    26,    39,    25,   204,
      10,    28,    29,    30,    31,    32,    34,    36,    59,     0,
      37,   105,    47,    48,    49,    34,    19,    34,    24,    45,
      46,    47,    48,    49,    59,    67,    68,    37,   233,    38,
      81,    24,    24,    59,    43,     0,    35,    64,    65,     4,
       5,     6,    24,    36,    74,    44,    81,     1,    35,    91,
      15,    36,     6,    36,     8,    81,    87,    44,    43,    36,
      43,    42,    35,    44,   243,   244,    43,    35,    32,    33,
     164,    24,   114,   115,    35,     5,    24,    43,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,    25,   139,   140,   141,
     142,   143,   144,   145,    43,     5,    24,    35,     5,    35,
      37,    24,    70,   155,    25,    35,    25,    42,   160,     5,
      44,   215,    38,    16,    17,    18,    19,    25,    21,    24,
      23,    24,    38,    36,    42,   205,    11,   260,     9,    27,
     168,   169,    35,     9,    37,     9,   206,     9,   138,     9,
       9,     9,    45,    46,     9,    -1,    -1,    -1,    -1,   201,
      -1,   203,    -1,    -1,    -1,    58,   208,    -1,   210,    -1,
      63,    64,    65,    66,    -1,    -1,    69,    70,    71,    -1,
      -1,    -1,    -1,   225,    -1,    -1,    -1,   229,   230,    -1,
      -1,   243,   244,    -1,    -1,    -1,    -1,   239,    -1,    -1,
      -1,    -1,    -1,   245,    -1,    -1,    -1,    -1,    -1,    -1,
     252,    -1,   254,    -1,   242,   243,   244,   259,    -1,    -1,
     262,    -1,    -1,     1,   243,   244,   243,   244,    -1,    -1,
      -1,     9,   274,    11,    12,   277,    -1,   279,    16,    17,
      18,    19,   284,    21,    -1,    23,    24,    -1,    26,    27,
      -1,    -1,   294,    -1,    -1,    -1,    -1,    35,    -1,    37,
      -1,    39,    -1,    -1,    -1,    -1,    -1,    45,    46,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      58,    -1,    -1,    59,    60,    63,    64,    65,    66,    67,
      68,    69,    70,     1,    72,    73,    74,    75,    -1,    -1,
      -1,     9,    -1,    11,    12,    81,    -1,    -1,    16,    17,
      18,    19,    -1,    21,    -1,    23,    24,    -1,    26,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,    37,
      -1,    -1,    40,    -1,    -1,    -1,    -1,    45,    46,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      58,    -1,    -1,    59,    -1,    63,    64,    65,    66,    67,
      68,    69,    70,     1,    72,    73,    74,    75,    -1,    -1,
      -1,     9,    -1,    11,    12,    81,    -1,    -1,    16,    17,
      18,    19,    -1,    21,    -1,    23,    24,    -1,    26,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,    37,
      -1,    -1,    40,    -1,    -1,    -1,    -1,    45,    46,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      58,    -1,    -1,    -1,    -1,    63,    64,    65,    66,    67,
      68,    69,    70,     1,    72,    73,    74,    75,    -1,    -1,
      -1,     9,    -1,    11,    12,    -1,    -1,    -1,    16,    17,
      18,    19,    -1,    21,    -1,    23,    24,    -1,    26,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,    37,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      58,    -1,    -1,    -1,    -1,    63,    64,    65,    66,    67,
      68,    69,    70,    -1,    72,    73,    74,    75,     9,    -1,
      11,    12,    -1,    -1,    -1,    16,    17,    18,    19,    -1,
      21,    -1,    23,    24,    -1,    26,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    35,    -1,    37,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    45,    46,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,    -1,    -1,
      -1,    -1,    63,    64,    65,    -1,    -1,    -1,    69,    70,
      -1,    72,    73,    74,    75,    16,    17,    18,    19,    -1,
      21,    -1,    23,    24,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    35,    -1,    37,    38,    -1,    -1,
      -1,    -1,    -1,    44,    45,    46,    16,    17,    18,    19,
      -1,    21,    -1,    23,    24,    -1,    -1,    58,    -1,    -1,
      -1,    -1,    63,    64,    65,    35,    -1,    37,    38,    -1,
      -1,    -1,    -1,    -1,    44,    45,    46,    16,    17,    18,
      19,    -1,    21,    -1,    23,    24,    -1,    -1,    58,    -1,
      -1,    -1,    -1,    63,    64,    65,    35,    -1,    37,    38,
      -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    16,    17,
      18,    19,    -1,    21,    -1,    23,    24,    -1,    -1,    58,
      -1,    -1,    -1,    -1,    63,    64,    65,    35,    36,    37,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    16,
      17,    18,    19,    -1,    21,    -1,    23,    24,    -1,    -1,
      58,    -1,    -1,    -1,    -1,    63,    64,    65,    35,    -1,
      37,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,    46,
      16,    17,    18,    19,    -1,    21,    -1,    23,    24,    -1,
      -1,    58,    -1,    -1,    -1,    -1,    63,    64,    65,    35,
      -1,    37,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,
      46,    16,    17,    18,    19,    -1,    21,    -1,    23,    24,
      -1,    -1,    58,    -1,    -1,    -1,    -1,    63,    64,    65,
      35,    -1,    37,    -1,    -1,    -1,    -1,    -1,    -1,    44,
      45,    46,    16,    17,    18,    19,    -1,    21,    -1,    23,
      24,    -1,    -1,    58,    -1,    -1,    -1,    -1,    63,    64,
      65,    35,    -1,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      44,    45,    46,    16,    17,    18,    19,    -1,    21,    -1,
      23,    24,    -1,    -1,    58,    -1,    -1,    -1,    -1,    63,
      64,    65,    35,    -1,    37,    38,    -1,    -1,    -1,    -1,
      -1,    -1,    45,    46,    16,    17,    18,    19,    -1,    21,
      -1,    23,    24,    -1,    -1,    58,    -1,    -1,    -1,    -1,
      63,    64,    65,    35,    -1,    37,    38,    -1,    -1,    -1,
      -1,    -1,    -1,    45,    46,    16,    17,    18,    19,    -1,
      21,    -1,    23,    24,    -1,    -1,    58,    -1,    -1,    -1,
      -1,    63,    64,    65,    35,    -1,    37,    38,    -1,    -1,
      -1,    -1,    -1,    -1,    45,    46,    16,    17,    18,    19,
      -1,    21,    -1,    23,    24,    -1,    -1,    58,    -1,    -1,
      -1,    -1,    63,    64,    65,    35,    -1,    37,    38,    -1,
      -1,    -1,    -1,    -1,    -1,    45,    46,    16,    17,    18,
      19,    -1,    21,    -1,    23,    24,    -1,    -1,    58,    -1,
      -1,    -1,    -1,    63,    64,    65,    35,    -1,    37,    38,
      -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    16,    17,
      18,    19,    -1,    21,    -1,    23,    24,    -1,    -1,    58,
      -1,    -1,    -1,    -1,    63,    64,    65,    35,    -1,    37,
      38,    -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    16,
      17,    18,    19,    -1,    21,    -1,    23,    24,    -1,    -1,
      58,    -1,    -1,    -1,    -1,    63,    64,    65,    35,    -1,
      37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    46,
      16,    17,    18,    19,    -1,    21,    -1,    23,    24,    -1,
      -1,    58,    -1,    -1,    -1,    -1,    63,    64,    65,    35,
      -1,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,
      46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    36,    58,    -1,    -1,    -1,    -1,    63,    64,    65,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    -1,    59,    60,    61,    62,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    81,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      -1,    59,    60,    61,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    -1,    59,    60,
      61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,
      81,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    -1,    59,    60,    61,    62,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,    81,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    -1,    59,    60,    61,    62,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    -1,    -1,    -1,    -1,    81,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    -1,    59,    60,    61,    62,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      -1,    -1,    -1,    -1,    81,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    -1,
      59,    60,    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,
      -1,    -1,    81,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    -1,    59,    60,
      61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,
      81,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    -1,    59,    60,    61,    62,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    -1,    -1,    -1,    -1,    -1,    81,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    -1,    59,    60,    61,    62,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      -1,    -1,    -1,    -1,    -1,    81,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    -1,
      59,    60,    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,
      -1,    -1,    81,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    -1,    59,    60,    61,
      62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,    -1,    81,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    -1,    59,    60,    61,    62,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    -1,    -1,    -1,    -1,    -1,    81,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      -1,    59,    60,    61,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,
      -1,    -1,    -1,    81,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    -1,    59,    60,
      61,    62,    -1,    -1,    -1,    -1,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      81,    59,    60,    61,    62,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    -1,    59,
      60,    61,    62,    81,    -1,    -1,    -1,    -1,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      -1,    81,    59,    60,    61,    62,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    -1,    -1,
      59,    60,    61,    62,    81,    -1,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    -1,    -1,
      59,    60,    81,    62,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    81
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     6,     8,    83,    84,    85,    19,     0,     4,
       5,     6,    15,    92,     9,    11,    12,    16,    17,    18,
      19,    21,    23,    24,    26,    27,    35,    37,    45,    46,
      58,    63,    64,    65,    69,    70,    72,    73,    74,    75,
      94,    95,    99,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   114,   115,   117,   124,   125,   127,
     128,   130,   131,   132,    91,    92,     1,    66,    67,    68,
      96,    99,   102,   114,   115,   121,   122,   123,   124,   125,
     127,   128,   130,   131,   132,    86,    24,    26,    74,   103,
     113,    35,    24,   116,   116,   103,    38,   113,   103,   103,
     103,   103,    24,   111,   111,    71,    97,    98,   102,   121,
     124,   125,   126,   103,    35,    35,    24,   103,    88,    89,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    59,    60,    61,    62,    81,    10,    25,
      28,    29,    30,    31,    32,    37,    64,    65,   120,   103,
     103,     5,    96,   116,    24,    43,    24,    36,   103,   118,
      25,    43,    36,    38,    39,    96,   100,   129,    42,    44,
     103,   103,    35,    90,     5,   103,   103,   103,   103,   103,
     103,   103,   103,   103,   103,   103,   103,   103,   103,   103,
     103,   103,   103,    24,   117,   103,   103,   103,   103,   103,
     103,    44,   103,    37,    87,     5,    35,   103,    44,    36,
      43,   103,    24,    40,    96,   101,    70,   102,   102,    36,
      36,    24,    36,   119,    93,    44,    44,   103,    38,    44,
      44,   103,    89,    87,    36,   119,   103,    24,   103,    25,
      40,    96,    35,    42,    44,    25,    36,    43,     5,   103,
      38,    38,    44,    38,    44,   103,    44,   103,    38,    44,
      89,    36,    44,   103,   102,    97,    97,   103,    24,    38,
     103,    38,   103,    38,    44,    38,    38,    44,    38,    44,
     103,    93,   103,    36,    25,    38,    38,    38,   103,    38,
     103,    38,   103,    38,    44,    42,   103,    38,    38,    38,
      38,   103,    38
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
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
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
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
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
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
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


/* Prevent warnings from -Wmissing-prototypes.  */

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



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

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
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
        case 3:
#line 178 "./bello.y"
    {}
    break;

  case 4:
#line 183 "./bello.y"
    {
      if (impFlg==0)
      {
        yyerrok;
      }

        printf("imp\n");

      FILE* f = fopen(((yyvsp[(2) - (2)].strVl))->c_str(), "r");

      //创建buffer
      YY_BUFFER_STATE stt = YY_CURRENT_BUFFER;

      //use file pointer to create new buffer
      YY_BUFFER_STATE sttNew = yy_create_buffer(f, YY_BUF_SIZE);

      //switch buffer
      yypush_buffer_state(sttNew);


    }
    break;

  case 8:
#line 213 "./bello.y"
    {(yyval.intVl) = 0; }
    break;

  case 12:
#line 219 "./bello.y"
    { return 0; }
    break;

  case 13:
#line 220 "./bello.y"
    { yyerrok; }
    break;

  case 14:
#line 222 "./bello.y"
    {
        yypop_buffer_state();
    }
    break;

  case 15:
#line 228 "./bello.y"
    { 
        if (((yyvsp[(-2) - (0)].intVl))>lstIndt+1) 
        {
           yyclearin;
           yyerrok;
        }
      }
    break;

  case 16:
#line 238 "./bello.y"
    {
            if (stmtStk.size()==0)
            {
                break;
            }

           //如果存在上一条语句

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
                stmtStk.erase(stmtStk.begin());
            }

            printf("ecl stmt\n");

            stmtStk.clear();


    }
    break;

  case 17:
#line 284 "./bello.y"
    {   
        int indt = (yyvsp[(-3) - (0)].intVl);

        Stmt* stmt=(yyvsp[(-2) - (0)].stmt);

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
    break;

  case 18:
#line 329 "./bello.y"
    {
        int indt = (yyvsp[(-3) - (0)].intVl);

        Stmt* stmt=(yyvsp[(-2) - (0)].stmt);

        stmt->indt= indt;

        //语句入栈
        pshStmt(indt, stmt);

        lstIndt = indt;

        for (int i=0;i<stmtStk.size();i++)
        {
            exctStmt(envr, stmtStk.at(i)->stmt);

            lstStmt = stmtStk.at(i)->stmt;
            stmtStk.erase(stmtStk.begin());
        }

        print("stmt single exec\n");
    }
    break;

  case 19:
#line 355 "./bello.y"
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
    break;

  case 20:
#line 404 "./bello.y"
    {
        //命令行允许顶级语句的语句块结束后无空行
        ////如果是命令行读取数据，则退出此动作
        //if (prsStt==1)
        //{
        //    break;
        //}

        //如果存在上一条语句
        if (stmtStk.size()>0)
        {
            //需要闭合上1条顶级语句的子语句，并执行该顶级语句

            //fldStmt(0);
//
            //printf("fld stmt\n");
//
            //pnStmt(envr, stmtStk.back()->stmt);
//
            //exctStmt(envr, stmtStk.back()->stmt);
//
            //stmtStk.pop_back();

            //折叠当前的语句并执行
            //if (stmtStk.back()->indt == 0)
            //{
            //    fldStmt(0);
            //
            //    execStmt(envr, stmtStk.back());
            //}

            //如果存在上1条语句，该语句允许子语句，e.g. for，执行语句
            //执行语句
            if (stmtStk.back()->indt == 0 && stmtStk.back()->alwSubStmt)
            {
                //printf("%s\n", )
                //执行倒数第2条指令
                //exctStmt(envr, stmtStk.at(stmtStk.size()-2)->stmt);
                //倒数第2条指令出栈
                //stmtStk.erase(stmtStk.end()-2);

                exctStmt(envr, stmtStk.back()->stmt);
                stmtStk.pop_back();
                //exctStmt(envr, stmtStk.back()->stmt);

                yyclearin;
                yyerrok;

            }

            //// //如果上1条语句为顶级语句且不允许子语句，则执行上一条语句
            //// if (stmtStk.back()->indt == 0 && stmtStk.back()->alwSubStmt==0)
            //// {
            ////     //执行上一条顶级语句
            ////     exctStmt(envr, stmtStk.back()->stmt);
            ////     stmtStk.pop_back();
            //// }

            ////如果上1条语句为子语句，则闭合上1条顶级语句，并执行该顶级语句
            //if (stmtStk.back()->indt > 0)
            //{

                //fldStmt(0);

                //// 如果是双主句语句的情况

                ////执行上一条顶级语句
                //exctStmt(envr, stmtStk.back()->stmt);
                //stmtStk.pop_back();

            //}

        }
    }
    break;

  case 21:
#line 481 "./bello.y"
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
    break;

  case 22:
#line 498 "./bello.y"
    { std::printf("expression\n"); (yyval.stmt)=(yyvsp[(1) - (1)].stmt); }
    break;

  case 23:
#line 499 "./bello.y"
    { (yyval.stmt)=(yyvsp[(1) - (1)].stmt); }
    break;

  case 24:
#line 500 "./bello.y"
    { (yyval.stmt)=(yyvsp[(1) - (1)].stmt); }
    break;

  case 25:
#line 501 "./bello.y"
    { (yyval.stmt)=(yyvsp[(1) - (1)].stmt); }
    break;

  case 26:
#line 502 "./bello.y"
    { (yyval.stmt)=(yyvsp[(1) - (1)].stmt); }
    break;

  case 27:
#line 503 "./bello.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt);}
    break;

  case 28:
#line 504 "./bello.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); }
    break;

  case 29:
#line 507 "./bello.y"
    { (yyval.stmt)=(yyvsp[(1) - (1)].stmt); }
    break;

  case 30:
#line 508 "./bello.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt);}
    break;

  case 31:
#line 509 "./bello.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); }
    break;

  case 32:
#line 510 "./bello.y"
    { (yyval.stmt)=(yyvsp[(1) - (1)].stmt); }
    break;

  case 33:
#line 521 "./bello.y"
    { (yyval.stmt)=(yyvsp[(1) - (1)].stmt); }
    break;

  case 34:
#line 522 "./bello.y"
    { (yyval.stmt)=(yyvsp[(1) - (1)].stmt); }
    break;

  case 35:
#line 523 "./bello.y"
    { (yyval.stmt)=(yyvsp[(1) - (1)].stmt); }
    break;

  case 36:
#line 524 "./bello.y"
    { (yyval.stmt)=(yyvsp[(1) - (1)].stmt); }
    break;

  case 37:
#line 525 "./bello.y"
    { (yyval.stmt)=(yyvsp[(1) - (1)].stmt); }
    break;

  case 38:
#line 526 "./bello.y"
    { (yyval.stmt)=(yyvsp[(1) - (1)].stmt); }
    break;

  case 39:
#line 528 "./bello.y"
    { (yyval.stmt)=(yyvsp[(1) - (1)].stmt); }
    break;

  case 40:
#line 529 "./bello.y"
    { (yyval.stmt)=(yyvsp[(1) - (1)].stmt); }
    break;

  case 41:
#line 530 "./bello.y"
    { (yyval.stmt)=(yyvsp[(1) - (1)].stmt); }
    break;

  case 42:
#line 531 "./bello.y"
    { (yyval.stmt)=(yyvsp[(1) - (1)].stmt); }
    break;

  case 43:
#line 532 "./bello.y"
    { (yyval.stmt)=(yyvsp[(1) - (1)].stmt); }
    break;

  case 44:
#line 533 "./bello.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt);}
    break;

  case 45:
#line 534 "./bello.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); }
    break;

  case 46:
#line 535 "./bello.y"
    { (yyval.stmt)= (yyvsp[(1) - (1)].stmt); }
    break;

  case 47:
#line 537 "./bello.y"
    { 
        (yyval.stmt)=bldNlStmt();
        yyclearin; 
        yyerrok; 
    }
    break;

  case 54:
#line 555 "./bello.y"
    { (yyval.stmt)=bldNlStmt(); }
    break;

  case 55:
#line 558 "./bello.y"
    { (yyval.stmt)=bldNlStmt(); }
    break;

  case 56:
#line 561 "./bello.y"
    { (yyval.stmt)=(yyvsp[(2) - (3)].stmt); }
    break;

  case 57:
#line 562 "./bello.y"
    { (yyval.stmt)=bldNlStmt(); }
    break;

  case 58:
#line 566 "./bello.y"
    { 
        (yyval.stmt)=bldStmtBlk(); 
        stmtBlkAdd((yyval.stmt), (yyvsp[(1) - (1)].stmt)); 
    }
    break;

  case 59:
#line 571 "./bello.y"
    {
        (yyval.stmt) = stmtBlkAdd((yyvsp[(1) - (2)].stmt) ,(yyvsp[(2) - (2)].stmt));
    }
    break;

  case 60:
#line 578 "./bello.y"
    { 
        (yyval.stmt)=bldExpStmt((yyvsp[(1) - (1)].exp)); 
    }
    break;

  case 61:
#line 583 "./bello.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); printf("**exp prs typ**:%d\n", ((yyvsp[(1) - (1)].exp))->typ); }
    break;

  case 62:
#line 584 "./bello.y"
    { (yyval.exp)=(yyvsp[(1) - (1)].exp); }
    break;

  case 63:
#line 585 "./bello.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); }
    break;

  case 64:
#line 586 "./bello.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); }
    break;

  case 65:
#line 587 "./bello.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); }
    break;

  case 66:
#line 588 "./bello.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); }
    break;

  case 69:
#line 595 "./bello.y"
    { (yyval.exp)=bldAsnExp((yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); }
    break;

  case 70:
#line 596 "./bello.y"
    { (yyval.exp)=bldAsnExp((yyvsp[(1) - (3)].exp), bldBnrExp(OpEnm::Add, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp))); }
    break;

  case 71:
#line 597 "./bello.y"
    { (yyval.exp)=bldAsnExp((yyvsp[(1) - (3)].exp), bldBnrExp(OpEnm::Sub, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp))); }
    break;

  case 72:
#line 598 "./bello.y"
    { (yyval.exp)=bldAsnExp((yyvsp[(1) - (3)].exp), bldBnrExp(OpEnm::Mul, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp))); }
    break;

  case 73:
#line 599 "./bello.y"
    { (yyval.exp)=bldAsnExp((yyvsp[(1) - (3)].exp), bldBnrExp(OpEnm::Div, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp))); }
    break;

  case 74:
#line 600 "./bello.y"
    { (yyval.exp)=bldAsnExp((yyvsp[(1) - (3)].exp), bldBnrExp(OpEnm::Asn, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp))); }
    break;

  case 75:
#line 604 "./bello.y"
    { (yyval.exp)=bldUnrExp(OpEnm::PfxInc, (yyvsp[(2) - (2)].exp)); }
    break;

  case 76:
#line 605 "./bello.y"
    { (yyval.exp)=bldUnrExp(OpEnm::PfxDec, (yyvsp[(2) - (2)].exp)); }
    break;

  case 77:
#line 606 "./bello.y"
    { (yyval.exp)=bldUnrExp(OpEnm::SfxInc, (yyvsp[(1) - (2)].exp)); }
    break;

  case 78:
#line 607 "./bello.y"
    { (yyval.exp)=bldUnrExp(OpEnm::SfxDec, (yyvsp[(1) - (2)].exp)); }
    break;

  case 79:
#line 610 "./bello.y"
    { (yyval.exp) = bldUnrExp(OpEnm::Ngtv, (yyvsp[(2) - (2)].exp)); }
    break;

  case 80:
#line 611 "./bello.y"
    { (yyval.exp) = bldUnrExp(OpEnm::Pstv, (yyvsp[(2) - (2)].exp)); }
    break;

  case 81:
#line 612 "./bello.y"
    { (yyval.exp)=(yyvsp[(2) - (3)].exp); }
    break;

  case 82:
#line 613 "./bello.y"
    { (yyval.exp)=bldUnrExp(OpEnm::Not, (yyvsp[(2) - (2)].exp)); }
    break;

  case 83:
#line 614 "./bello.y"
    { (yyval.exp)=bldUnrExp(OpEnm::BNot, (yyvsp[(2) - (2)].exp)); }
    break;

  case 84:
#line 617 "./bello.y"
    { (yyval.exp)=bldBnrExp(OpEnm::Add, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); }
    break;

  case 85:
#line 618 "./bello.y"
    { (yyval.exp)=bldBnrExp(OpEnm::Sub, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); }
    break;

  case 86:
#line 619 "./bello.y"
    { (yyval.exp)=bldBnrExp(OpEnm::Mul, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); }
    break;

  case 87:
#line 620 "./bello.y"
    { (yyval.exp)=bldBnrExp(OpEnm::Div, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); }
    break;

  case 88:
#line 621 "./bello.y"
    { (yyval.exp)=bldBnrExp(OpEnm::Mod, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); }
    break;

  case 89:
#line 622 "./bello.y"
    { (yyval.exp)=bldBnrExp(OpEnm::And, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); }
    break;

  case 90:
#line 623 "./bello.y"
    { (yyval.exp)=bldBnrExp(OpEnm::Or, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); }
    break;

  case 91:
#line 624 "./bello.y"
    { (yyval.exp)=bldBnrExp(OpEnm::Xor, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); }
    break;

  case 92:
#line 625 "./bello.y"
    { (yyval.exp)=bldBnrExp(OpEnm::Eq, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); }
    break;

  case 93:
#line 626 "./bello.y"
    { (yyval.exp)=bldBnrExp(OpEnm::Ne, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); }
    break;

  case 94:
#line 627 "./bello.y"
    { (yyval.exp)=bldBnrExp(OpEnm::Gt, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); }
    break;

  case 95:
#line 628 "./bello.y"
    { (yyval.exp)=bldBnrExp(OpEnm::Ge, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); }
    break;

  case 96:
#line 629 "./bello.y"
    { (yyval.exp)=bldBnrExp(OpEnm::Lt, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); }
    break;

  case 97:
#line 630 "./bello.y"
    { (yyval.exp)=bldBnrExp(OpEnm::Le, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); }
    break;

  case 98:
#line 631 "./bello.y"
    { (yyval.exp)=bldBnrExp(OpEnm::BAnd, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); }
    break;

  case 99:
#line 632 "./bello.y"
    { (yyval.exp)=bldBnrExp(OpEnm::BOr, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); }
    break;

  case 100:
#line 633 "./bello.y"
    { (yyval.exp)=bldBnrExp(OpEnm::BXor, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); }
    break;

  case 101:
#line 634 "./bello.y"
    { (yyval.exp) = bldTnrExp(OpEnm::Tnr, (yyvsp[(1) - (5)].exp), (yyvsp[(3) - (5)].exp), (yyvsp[(5) - (5)].exp)); }
    break;

  case 102:
#line 638 "./bello.y"
    {
        
    }
    break;

  case 103:
#line 643 "./bello.y"
    { printf("int ltr\n"); (yyval.exp)=bldIntValExp((yyvsp[(1) - (1)].intVl)); }
    break;

  case 104:
#line 644 "./bello.y"
    { (yyval.exp)=bldFltValExp((yyvsp[(1) - (1)].fltVl)); }
    break;

  case 105:
#line 645 "./bello.y"
    { (yyval.exp)=bldBlnValExp((yyvsp[(1) - (1)].blnVl)); }
    break;

  case 106:
#line 646 "./bello.y"
    { (yyval.exp)=bldStrValExp((yyvsp[(1) - (1)].strVl)); }
    break;

  case 107:
#line 647 "./bello.y"
    { (yyval.exp)=bldNlValExp(); }
    break;

  case 110:
#line 653 "./bello.y"
    { (yyval.exp)= bldLvlExp(bldVrbExp((yyvsp[(1) - (1)].idtf))); }
    break;

  case 111:
#line 655 "./bello.y"
    {
        LvlExpStrc* lvl = static_cast<LvlExpStrc*>((yyvsp[(1) - (3)].exp));
        (yyval.exp) = lvl;

        //寻找LvlExpStrc链最末尾的结构体
        while (lvl->hasAtb==1)
        {
            lvl= static_cast<LvlExpStrc*>(lvl->atb);
        }

        lvl->hasAtb=1;
        lvl->atb=static_cast<LvlExpStrc*>(bldLvlExp(bldVrbExp((yyvsp[(3) - (3)].idtf))));

    }
    break;

  case 112:
#line 670 "./bello.y"
    { 
        (yyval.exp)=(yyvsp[(1) - (2)].exp); 
        bldLvlExpAdd((yyvsp[(1) - (2)].exp), (yyvsp[(2) - (2)].evlLst)); 
    }
    break;

  case 113:
#line 675 "./bello.y"
    {

        printf("bld obj ivk exp\n");

        LvlExpStrc* lvl = static_cast<LvlExpStrc*>((yyvsp[(1) - (3)].exp));

        (yyval.exp) = (yyvsp[(1) - (3)].exp);

        //左值表达式设置调用对象方法的标志
        lvl->blnIvk = 1;

        while (lvl->hasAtb==1)
        {
            lvl = static_cast<LvlExpStrc*>(lvl->atb);
        }

        lvl->hasFcn=1;
        lvl->fcn=static_cast<FcnExpStrc*>((yyvsp[(3) - (3)].exp));

    }
    break;

  case 114:
#line 739 "./bello.y"
    {
        (yyval.exp)= bldArrExp((yyvsp[(2) - (3)].elmtLst));
    }
    break;

  case 115:
#line 743 "./bello.y"
    {
        (yyval.exp)= bldArrExp(bldElmtLst());
    }
    break;

  case 116:
#line 751 "./bello.y"
    { 
        (yyval.elmtLst)= bldElmtLst(); 
        elmtLstAdd((yyval.elmtLst), (yyvsp[(1) - (1)].exp)); 
    }
    break;

  case 117:
#line 756 "./bello.y"
    {  
        (yyval.elmtLst)=(yyvsp[(1) - (3)].elmtLst);  
        elmtLstAdd((yyval.elmtLst), (yyvsp[(3) - (3)].exp)); 
    }
    break;

  case 118:
#line 764 "./bello.y"
    { 
        //建立变量
        if (blnDfnCls==false)
        {
            (yyval.stmt)=bldVarStmt((yyvsp[(2) - (2)].asnLst)); 
        }
        else
        {
            //$$=bldVarStmt(StmtEnm::ClsVar, $2);
        }
    }
    break;

  case 119:
#line 776 "./bello.y"
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
    break;

  case 120:
#line 790 "./bello.y"
    { (yyval.stmt)=bldGlbStmt((yyvsp[(2) - (2)].asnLst)); }
    break;

  case 121:
#line 794 "./bello.y"
    {
        (yyval.asnLst)= bldAsnLst();
        asnLstAdd((yyval.asnLst), bldVrbExp((yyvsp[(1) - (1)].idtf)), bldNlExp());
    }
    break;

  case 122:
#line 799 "./bello.y"
    {
        (yyval.asnLst)= bldAsnLst();
        asnLstAdd((yyval.asnLst), bldVrbExp((yyvsp[(1) - (3)].idtf)), (yyvsp[(3) - (3)].exp));
    }
    break;

  case 123:
#line 804 "./bello.y"
    {
        (yyval.asnLst)=(yyvsp[(1) - (3)].asnLst);
        asnLstAdd((yyval.asnLst), bldVrbExp((yyvsp[(3) - (3)].idtf)), bldNlExp());
    }
    break;

  case 124:
#line 809 "./bello.y"
    {
        (yyval.asnLst)=(yyvsp[(1) - (5)].asnLst);
        asnLstAdd((yyval.asnLst), bldVrbExp((yyvsp[(3) - (5)].idtf)), (yyvsp[(5) - (5)].exp));
    }
    break;

  case 125:
#line 820 "./bello.y"
    {
        (yyval.exp)=bldFcnExp((yyvsp[(1) - (4)].idtf), (yyvsp[(3) - (4)].argLst));
    }
    break;

  case 126:
#line 824 "./bello.y"
    {
        (yyval.exp)=bldFcnExp((yyvsp[(1) - (3)].idtf), bldArgLst());
    }
    break;

  case 127:
#line 830 "./bello.y"
    {
        (yyval.argLst)=bldArgLst();

        /*printf("**arg lst add typ**:%d\n", ($1)->typ);*/
        argLstAdd((yyval.argLst), (yyvsp[(1) - (1)].exp));
    }
    break;

  case 128:
#line 837 "./bello.y"
    {
        (yyval.argLst) = bldArgLst();
        argLstAdd((yyval.argLst), bldVrbExp((yyvsp[(1) - (3)].idtf)), (yyvsp[(3) - (3)].exp));
    }
    break;

  case 129:
#line 842 "./bello.y"
    {
        (yyval.argLst) = (yyvsp[(1) - (3)].argLst);
        argLstAdd((yyval.argLst), (yyvsp[(3) - (3)].exp));
    }
    break;

  case 130:
#line 847 "./bello.y"
    {
        (yyval.argLst) = (yyvsp[(1) - (5)].argLst);
        argLstAdd((yyval.argLst), bldVrbExp((yyvsp[(3) - (5)].idtf)), (yyvsp[(5) - (5)].exp));
    }
    break;

  case 131:
#line 854 "./bello.y"
    {
        (yyval.prmLst) = bldPrmLst();
        prmLstAdd((yyval.prmLst), bldVrbExp((yyvsp[(1) - (1)].idtf)));
    }
    break;

  case 132:
#line 859 "./bello.y"
    {
        (yyval.prmLst) = bldPrmLst();
        prmLstAdd((yyval.prmLst), bldVrbExp((yyvsp[(1) - (3)].idtf)), (yyvsp[(3) - (3)].exp));
    }
    break;

  case 133:
#line 864 "./bello.y"
    { 
        (yyval.prmLst) = (yyvsp[(1) - (3)].prmLst);  
        prmLstAdd((yyval.prmLst), bldVrbExp((yyvsp[(3) - (3)].idtf)));
    }
    break;

  case 134:
#line 869 "./bello.y"
    {
        (yyval.prmLst) = (yyvsp[(1) - (5)].prmLst);
        prmLstAdd((yyval.prmLst), bldVrbExp((yyvsp[(3) - (5)].idtf)), (yyvsp[(5) - (5)].exp));
    }
    break;

  case 135:
#line 878 "./bello.y"
    {
        (yyval.evlLst) = bldAcsLst();
        acsLstIdxAdd((yyval.evlLst), (yyvsp[(2) - (3)].exp));
    }
    break;

  case 136:
#line 883 "./bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), (yyvsp[(2) - (5)].exp), (yyvsp[(4) - (5)].exp), bldIntValExp(1));
    }
    break;

  case 137:
#line 888 "./bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), (yyvsp[(2) - (6)].exp), (yyvsp[(4) - (6)].exp), bldIntValExp(1));
    }
    break;

  case 138:
#line 893 "./bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), (yyvsp[(2) - (7)].exp), (yyvsp[(4) - (7)].exp), (yyvsp[(6) - (7)].exp));
    }
    break;

  case 139:
#line 898 "./bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), (yyvsp[(2) - (4)].exp), bldIntValExp(-1), bldIntValExp(1));
    }
    break;

  case 140:
#line 903 "./bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), (yyvsp[(2) - (5)].exp), bldIntValExp(-1), bldIntValExp(1));
    }
    break;

  case 141:
#line 908 "./bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), (yyvsp[(2) - (6)].exp), bldIntValExp(-1), (yyvsp[(5) - (6)].exp));
    }
    break;

  case 142:
#line 913 "./bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), bldIntValExp(0), (yyvsp[(3) - (4)].exp), bldIntValExp(1));
    }
    break;

  case 143:
#line 919 "./bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), bldIntValExp(0), (yyvsp[(3) - (5)].exp), bldIntValExp(1));
    }
    break;

  case 144:
#line 924 "./bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), bldIntValExp(0), (yyvsp[(3) - (6)].exp), (yyvsp[(5) - (6)].exp));
    }
    break;

  case 145:
#line 929 "./bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), bldIntValExp(0), bldIntValExp(-1), bldIntValExp(1));
    }
    break;

  case 146:
#line 934 "./bello.y"
    {
        (yyval.evlLst)=(yyvsp[(1) - (4)].evlLst);
        acsLstIdxAdd((yyval.evlLst),(yyvsp[(3) - (4)].exp));
    }
    break;

  case 147:
#line 939 "./bello.y"
    {
        (yyval.evlLst)=(yyvsp[(1) - (6)].evlLst);
        acsLstSlcAdd((yyval.evlLst), (yyvsp[(3) - (6)].exp), (yyvsp[(5) - (6)].exp), bldIntValExp(1));
    }
    break;

  case 148:
#line 944 "./bello.y"
    {
        (yyval.evlLst)=(yyvsp[(1) - (7)].evlLst);
        acsLstSlcAdd((yyval.evlLst), (yyvsp[(3) - (7)].exp), (yyvsp[(5) - (7)].exp), bldIntValExp(1));
    }
    break;

  case 149:
#line 949 "./bello.y"
    {
        (yyval.evlLst)=(yyvsp[(1) - (8)].evlLst);
        acsLstSlcAdd((yyval.evlLst), (yyvsp[(3) - (8)].exp), (yyvsp[(5) - (8)].exp), (yyvsp[(7) - (8)].exp));
    }
    break;

  case 150:
#line 954 "./bello.y"
    {
        (yyval.evlLst)=(yyvsp[(1) - (5)].evlLst);
        acsLstSlcAdd((yyval.evlLst), (yyvsp[(3) - (5)].exp), bldIntValExp(-1), bldIntValExp(1));
    }
    break;

  case 151:
#line 959 "./bello.y"
    {
        (yyval.evlLst)=(yyvsp[(1) - (6)].evlLst);
        acsLstSlcAdd((yyval.evlLst), (yyvsp[(3) - (6)].exp), bldIntValExp(-1), bldIntValExp(1));
    }
    break;

  case 152:
#line 964 "./bello.y"
    {
        (yyval.evlLst)=(yyvsp[(1) - (7)].evlLst);
        acsLstSlcAdd((yyval.evlLst), (yyvsp[(3) - (7)].exp), bldIntValExp(-1), (yyvsp[(6) - (7)].exp));
    }
    break;

  case 153:
#line 969 "./bello.y"
    {
        (yyval.evlLst)=(yyvsp[(1) - (5)].evlLst);
        acsLstSlcAdd((yyval.evlLst), bldIntValExp(0), (yyvsp[(4) - (5)].exp), bldIntValExp(1));
    }
    break;

  case 154:
#line 974 "./bello.y"
    {
        (yyval.evlLst)=(yyvsp[(1) - (6)].evlLst);
        acsLstSlcAdd((yyval.evlLst), bldIntValExp(0), (yyvsp[(4) - (6)].exp), bldIntValExp(1));
    }
    break;

  case 155:
#line 979 "./bello.y"
    {
        (yyval.evlLst)=(yyvsp[(1) - (7)].evlLst);
        acsLstSlcAdd((yyval.evlLst), bldIntValExp(0), (yyvsp[(4) - (7)].exp), (yyvsp[(6) - (7)].exp));
    }
    break;

  case 156:
#line 985 "./bello.y"
    {
        (yyval.evlLst)=(yyvsp[(1) - (5)].evlLst);
        acsLstSlcAdd((yyval.evlLst), bldIntValExp(0), bldIntValExp(-1), bldIntValExp(1));
    }
    break;

  case 157:
#line 993 "./bello.y"
    {
        (yyval.stmt)=bldIfStmt((yyvsp[(2) - (2)].exp));
        //printf("bld if stmt\n");
    }
    break;

  case 158:
#line 1009 "./bello.y"
    {
        (yyval.stmt) = bldElsStmt();
    }
    break;

  case 159:
#line 1015 "./bello.y"
    {
        (yyval.stmt) = bldElifStmt((yyvsp[(2) - (2)].exp));
    }
    break;

  case 160:
#line 1031 "./bello.y"
    {
        (yyval.stmt)= bldForStmt((yyvsp[(2) - (6)].stmt), (yyvsp[(4) - (6)].stmt), (yyvsp[(6) - (6)].stmt));
    }
    break;

  case 161:
#line 1035 "./bello.y"
    {
        (yyval.stmt)= bldForStmt((yyvsp[(2) - (6)].stmt), (yyvsp[(4) - (6)].stmt), (yyvsp[(6) - (6)].stmt));
    }
    break;

  case 162:
#line 1060 "./bello.y"
    {
        (yyval.stmt) = bldWhlStmt((yyvsp[(2) - (2)].exp));
    }
    break;

  case 163:
#line 1068 "./bello.y"
    {
        (yyval.stmt) = bldWhlStmt();
    }
    break;

  case 164:
#line 1074 "./bello.y"
    {
        (yyval.stmt)= bldDoWhlStmt((yyvsp[(5) - (7)].stmt), (yyvsp[(2) - (7)].stmt));
    }
    break;

  case 165:
#line 1079 "./bello.y"
    { (yyval.stmt)= bldBrkStmt(bldIntValExp(1)); }
    break;

  case 166:
#line 1080 "./bello.y"
    { (yyval.stmt)= bldBrkStmt((yyvsp[(3) - (4)].exp)); }
    break;

  case 167:
#line 1083 "./bello.y"
    { (yyval.stmt)= bldCntnStmt(bldIntValExp(1)); }
    break;

  case 168:
#line 1084 "./bello.y"
    { (yyval.stmt)= bldCntnStmt((yyvsp[(3) - (4)].exp)); }
    break;

  case 171:
#line 1126 "./bello.y"
    {
        struct Fcn* fcn;

        fcn=bldFn((yyvsp[(2) - (5)].idtf), (yyvsp[(4) - (5)].prmLst));

        (yyval.stmt) = bldFcnStmt(fcn);
    }
    break;

  case 172:
#line 1134 "./bello.y"
    {
        struct Fcn *fcn;

        fcn=bldFn((yyvsp[(2) - (4)].idtf), bldPrmLst());

        (yyval.stmt) = bldFcnStmt(fcn);
    }
    break;

  case 173:
#line 1142 "./bello.y"
    {
        if (blnDfnCls==false)
        {
            yyclearin;
            yyerrok;

            break;
        }

        struct Fcn* fcn;

        fcn=bldFn((yyvsp[(3) - (6)].idtf), (yyvsp[(5) - (6)].prmLst));

        (yyval.stmt) = bldFcnStmt(fcn);
        
    }
    break;

  case 174:
#line 1159 "./bello.y"
    {
        struct Fcn *fcn;

        fcn=bldFn((yyvsp[(3) - (5)].idtf), bldPrmLst());

        (yyval.stmt) = bldFcnStmt(fcn);
    }
    break;

  case 175:
#line 1169 "./bello.y"
    {
        struct ClsStrc* cls;

        cls = bldCls((yyvsp[(2) - (2)].idtf));

        (yyval.stmt) = bldClsStmt(cls);

        //blnDfnCls = 1;
    }
    break;

  case 176:
#line 1182 "./bello.y"
    { (yyval.stmt)=bldRtnStmt(NULL); }
    break;

  case 177:
#line 1183 "./bello.y"
    { (yyval.stmt)=bldRtnStmt((yyvsp[(2) - (2)].exp)); }
    break;


/* Line 1267 of yacc.c.  */
#line 3460 "y.tab.c"
      default: break;
    }
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
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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
      if (yyn != YYPACT_NINF)
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

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
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


#line 1186 "./bello.y"


#endif




