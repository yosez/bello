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
     LF = 259,
     END_FILE = 260,
     NEW = 261,
     NOP = 262,
     DOT = 263,
     CLASS = 264,
     SHARED = 265,
     THIS = 266,
     INDENT = 267,
     INT_VALUE = 268,
     BOOLEAN_VALUE = 269,
     FLOAT_VALUE = 270,
     STRING_VALUE = 271,
     OBJECT_VALUE = 272,
     NULL_VALUE = 273,
     ARRAY_VALUE = 274,
     SHORTCUT_PRINTLN = 275,
     IDENTIFER = 276,
     ASSIGN = 277,
     VAR = 278,
     GLOBAL = 279,
     ADD_ASSIGN = 280,
     SUB_ASSIGN = 281,
     MUL_ASSIGN = 282,
     DIV_ASSIGN = 283,
     MOD_ASSIGN = 284,
     PRINT = 285,
     PRINTLN = 286,
     LEFT_PAREN = 287,
     RIGHT_PAREN = 288,
     LEFT_QUAD = 289,
     RIGHT_QUAD = 290,
     LEFT_BRACE = 291,
     RIGHT_BRACE = 292,
     SEMICOLON_OPTIONAL = 293,
     SEMICOLON = 294,
     COMMA = 295,
     COLON = 296,
     ADD = 297,
     SUB = 298,
     MUL = 299,
     DIV = 300,
     MOD = 301,
     EQ = 302,
     NE = 303,
     GT = 304,
     GE = 305,
     LT = 306,
     LE = 307,
     AND = 308,
     OR = 309,
     NOT = 310,
     BIT_AND = 311,
     BIT_OR = 312,
     BIT_XOR = 313,
     BIT_NOT = 314,
     INCREMENT = 315,
     DECREMENT = 316,
     IF = 317,
     ELSEIF = 318,
     ELSE = 319,
     FOR = 320,
     WHILE = 321,
     DO = 322,
     CONTINUE = 323,
     BREAK = 324,
     FUNC = 325,
     RETURN = 326,
     NEW_ARRAY = 327,
     PLUS_SIGN = 328,
     MINUS_SIGN = 329,
     QM = 330
   };
#endif
/* Tokens.  */
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
#define SHORTCUT_PRINTLN 275
#define IDENTIFER 276
#define ASSIGN 277
#define VAR 278
#define GLOBAL 279
#define ADD_ASSIGN 280
#define SUB_ASSIGN 281
#define MUL_ASSIGN 282
#define DIV_ASSIGN 283
#define MOD_ASSIGN 284
#define PRINT 285
#define PRINTLN 286
#define LEFT_PAREN 287
#define RIGHT_PAREN 288
#define LEFT_QUAD 289
#define RIGHT_QUAD 290
#define LEFT_BRACE 291
#define RIGHT_BRACE 292
#define SEMICOLON_OPTIONAL 293
#define SEMICOLON 294
#define COMMA 295
#define COLON 296
#define ADD 297
#define SUB 298
#define MUL 299
#define DIV 300
#define MOD 301
#define EQ 302
#define NE 303
#define GT 304
#define GE 305
#define LT 306
#define LE 307
#define AND 308
#define OR 309
#define NOT 310
#define BIT_AND 311
#define BIT_OR 312
#define BIT_XOR 313
#define BIT_NOT 314
#define INCREMENT 315
#define DECREMENT 316
#define IF 317
#define ELSEIF 318
#define ELSE 319
#define FOR 320
#define WHILE 321
#define DO 322
#define CONTINUE 323
#define BREAK 324
#define FUNC 325
#define RETURN 326
#define NEW_ARRAY 327
#define PLUS_SIGN 328
#define MINUS_SIGN 329
#define QM 330




/* Copy the first part of user declarations.  */
#line 1 "bello.y"

    //#pragma once
    #include <stdio.h>
    #include <string.h>
    #include <stdlib.h>
    #include <stdbool.h>
    #include <stack>
    #ifndef _WIN32
    #include "linenoise.h"
    #endif
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

    //extern struct StmtStkItemStrc;

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
#line 72 "bello.y"
{
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
}
/* Line 193 of yacc.c.  */
#line 339 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 352 "y.tab.c"

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1688

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  76
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  46
/* YYNRULES -- Number of rules.  */
#define YYNRULES  159
/* YYNRULES -- Number of states.  */
#define YYNSTATES  281

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   330

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
      75
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,    13,    20,    24,    28,    29,    31,
      32,    33,    34,    35,    36,    38,    40,    42,    44,    46,
      48,    50,    52,    54,    56,    58,    60,    62,    64,    66,
      68,    70,    72,    74,    76,    78,    79,    81,    85,    88,
      90,    93,    95,    97,    99,   101,   103,   105,   107,   109,
     111,   113,   117,   121,   125,   129,   133,   137,   140,   143,
     146,   149,   152,   155,   159,   162,   165,   169,   173,   177,
     181,   185,   189,   193,   197,   201,   205,   209,   213,   217,
     221,   225,   229,   235,   238,   240,   242,   244,   246,   248,
     250,   252,   255,   257,   261,   264,   268,   272,   275,   280,
     282,   286,   289,   293,   296,   298,   302,   306,   312,   317,
     321,   323,   327,   331,   337,   339,   343,   347,   353,   357,
     363,   370,   378,   383,   389,   396,   401,   407,   414,   419,
     424,   431,   439,   448,   454,   461,   469,   475,   482,   490,
     496,   499,   501,   504,   513,   516,   518,   526,   528,   533,
     535,   540,   542,   544,   550,   555,   562,   568,   571,   573
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      77,     0,    -1,    -1,    77,    82,    78,    84,     4,    79,
      80,    83,    -1,    77,    12,    84,     4,    79,    80,    -1,
      77,     4,    81,    -1,    77,     5,    82,    -1,    -1,     1,
      -1,    -1,    -1,    -1,    -1,    -1,    90,    -1,   110,    -1,
     111,    -1,   112,    -1,   113,    -1,   114,    -1,   116,    -1,
     117,    -1,   121,    -1,   119,    -1,    87,    -1,   103,    -1,
     104,    -1,   120,    -1,     1,    -1,    90,    -1,   110,    -1,
     113,    -1,   114,    -1,   115,    -1,    86,    -1,    -1,     7,
      -1,    36,    89,    37,    -1,    36,    37,    -1,    84,    -1,
      89,    84,    -1,    91,    -1,    98,    -1,    92,    -1,    95,
      -1,    96,    -1,   100,    -1,   101,    -1,    97,    -1,    93,
      -1,    94,    -1,    99,    22,    91,    -1,    99,    25,    91,
      -1,    99,    26,    91,    -1,    99,    27,    91,    -1,    99,
      28,    91,    -1,    99,    29,    91,    -1,    60,    99,    -1,
      61,    99,    -1,    99,    60,    -1,    99,    61,    -1,    43,
      91,    -1,    42,    91,    -1,    32,    91,    33,    -1,    55,
      91,    -1,    59,    91,    -1,    91,    42,    91,    -1,    91,
      43,    91,    -1,    91,    44,    91,    -1,    91,    45,    91,
      -1,    91,    46,    91,    -1,    91,    53,    91,    -1,    91,
      54,    91,    -1,    91,    47,    91,    -1,    91,    48,    91,
      -1,    91,    49,    91,    -1,    91,    50,    91,    -1,    91,
      51,    91,    -1,    91,    52,    91,    -1,    91,    56,    91,
      -1,    91,    57,    91,    -1,    91,    58,    91,    -1,    91,
      75,    91,    41,    91,    -1,    20,   102,    -1,    13,    -1,
      15,    -1,    14,    -1,    16,    -1,    18,    -1,   106,    -1,
      99,    -1,     6,    21,    -1,    21,    -1,    99,     8,    21,
      -1,    99,   109,    -1,    99,     8,   106,    -1,    34,   102,
      35,    -1,    34,    35,    -1,    72,    32,    91,    33,    -1,
      91,    -1,   102,    40,    91,    -1,    23,   105,    -1,    10,
      23,   105,    -1,    24,   105,    -1,    21,    -1,    21,    22,
      91,    -1,   105,    40,    21,    -1,   105,    40,    21,    22,
      91,    -1,    21,    32,   107,    33,    -1,    21,    32,    33,
      -1,    91,    -1,    21,    41,    91,    -1,   107,    40,    91,
      -1,   107,    40,    21,    41,    91,    -1,    21,    -1,    21,
      22,    91,    -1,   108,    40,    21,    -1,   108,    40,    21,
      22,    91,    -1,    34,    91,    35,    -1,    34,    91,    41,
      91,    35,    -1,    34,    91,    41,    91,    41,    35,    -1,
      34,    91,    41,    91,    41,    91,    35,    -1,    34,    91,
      41,    35,    -1,    34,    91,    41,    41,    35,    -1,    34,
      91,    41,    41,    91,    35,    -1,    34,    41,    91,    35,
      -1,    34,    41,    91,    41,    35,    -1,    34,    41,    91,
      41,    91,    35,    -1,    34,    41,    41,    35,    -1,   109,
      34,    91,    35,    -1,   109,    34,    91,    41,    91,    35,
      -1,   109,    34,    91,    41,    91,    41,    35,    -1,   109,
      34,    91,    41,    91,    41,    91,    35,    -1,   109,    34,
      91,    41,    35,    -1,   109,    34,    91,    41,    41,    35,
      -1,   109,    34,    91,    41,    41,    91,    35,    -1,   109,
      34,    41,    91,    35,    -1,   109,    34,    41,    91,    41,
      35,    -1,   109,    34,    41,    91,    41,    91,    35,    -1,
     109,    34,    41,    41,    35,    -1,    62,    91,    -1,    64,
      -1,    63,    91,    -1,    65,    32,    85,    39,    90,    39,
      85,    33,    -1,    66,    91,    -1,    66,    -1,    67,   118,
      66,    32,    90,    33,    39,    -1,    69,    -1,    69,    32,
      91,    33,    -1,    68,    -1,    68,    32,    91,    33,    -1,
      84,    -1,    88,    -1,    70,    21,    32,   108,    33,    -1,
      70,    21,    32,    33,    -1,    10,    70,    21,    32,   108,
      33,    -1,    10,    70,    21,    32,    33,    -1,     9,    21,
      -1,    71,    -1,    71,    91,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   174,   174,   174,   176,   178,   180,   181,   182,   186,
     196,   242,   291,   338,   356,   357,   358,   359,   360,   361,
     363,   364,   365,   366,   368,   369,   370,   371,   372,   382,
     383,   384,   385,   386,   387,   391,   394,   397,   398,   401,
     406,   413,   419,   420,   421,   422,   423,   424,   425,   428,
     429,   432,   433,   434,   435,   436,   437,   441,   442,   443,
     444,   447,   448,   449,   450,   451,   454,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   467,
     468,   469,   470,   473,   479,   480,   481,   482,   483,   484,
     485,   486,   489,   490,   505,   510,   574,   578,   584,   590,
     595,   603,   615,   630,   633,   638,   643,   648,   659,   663,
     669,   674,   679,   684,   691,   696,   701,   706,   715,   720,
     725,   730,   735,   740,   745,   750,   755,   760,   765,   770,
     775,   780,   785,   790,   795,   800,   805,   810,   815,   820,
     838,   854,   860,   876,   888,   896,   902,   908,   909,   912,
     913,   916,   917,   954,   962,   970,   987,   997,  1011,  1012
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NULL_STRING", "LF", "END_FILE", "NEW",
  "NOP", "DOT", "CLASS", "SHARED", "THIS", "INDENT", "INT_VALUE",
  "BOOLEAN_VALUE", "FLOAT_VALUE", "STRING_VALUE", "OBJECT_VALUE",
  "NULL_VALUE", "ARRAY_VALUE", "SHORTCUT_PRINTLN", "IDENTIFER", "ASSIGN",
  "VAR", "GLOBAL", "ADD_ASSIGN", "SUB_ASSIGN", "MUL_ASSIGN", "DIV_ASSIGN",
  "MOD_ASSIGN", "PRINT", "PRINTLN", "LEFT_PAREN", "RIGHT_PAREN",
  "LEFT_QUAD", "RIGHT_QUAD", "LEFT_BRACE", "RIGHT_BRACE",
  "SEMICOLON_OPTIONAL", "SEMICOLON", "COMMA", "COLON", "ADD", "SUB", "MUL",
  "DIV", "MOD", "EQ", "NE", "GT", "GE", "LT", "LE", "AND", "OR", "NOT",
  "BIT_AND", "BIT_OR", "BIT_XOR", "BIT_NOT", "INCREMENT", "DECREMENT",
  "IF", "ELSEIF", "ELSE", "FOR", "WHILE", "DO", "CONTINUE", "BREAK",
  "FUNC", "RETURN", "NEW_ARRAY", "PLUS_SIGN", "MINUS_SIGN", "QM",
  "$accept", "statement", "@1", "check_indent", "build_statement_stack",
  "close_execute_statement", "close_execute_last_statement",
  "execute_single_statement", "single_statement",
  "single_statement_no_semicolon", "null_statement", "nop_statement",
  "statement_block", "block_list", "expression_statement", "expression",
  "lvalue_operation_expression", "assign_expression",
  "self_operation_expression", "unary_expression", "binary_expression",
  "shortcut_expression", "value_expression", "lvalue_expression",
  "array_expression", "new_array_expression", "element_list",
  "var_statement", "global_statement", "assign_list",
  "function_expression", "argument_list", "parameter_list",
  "evaluate_list", "if_statement", "else_statement", "elseif_statement",
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
     325,   326,   327,   328,   329,   330
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    76,    78,    77,    77,    77,    77,    77,    77,    79,
      80,    81,    82,    83,    84,    84,    84,    84,    84,    84,
      84,    84,    84,    84,    84,    84,    84,    84,    84,    85,
      85,    85,    85,    85,    85,    86,    87,    88,    88,    89,
      89,    90,    91,    91,    91,    91,    91,    91,    91,    92,
      92,    93,    93,    93,    93,    93,    93,    94,    94,    94,
      94,    95,    95,    95,    95,    95,    96,    96,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    97,    98,    98,    98,    98,    98,    98,
      98,    98,    99,    99,    99,    99,   100,   100,   101,   102,
     102,   103,   103,   104,   105,   105,   105,   105,   106,   106,
     107,   107,   107,   107,   108,   108,   108,   108,   109,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   109,
     110,   111,   112,   113,   114,   114,   115,   116,   116,   117,
     117,   118,   118,   119,   119,   119,   119,   120,   121,   121
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     8,     6,     3,     3,     0,     1,     0,
       0,     0,     0,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     1,     3,     2,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     3,     3,     3,     3,     2,     2,     2,
       2,     2,     2,     3,     2,     2,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     5,     2,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     3,     2,     3,     3,     2,     4,     1,
       3,     2,     3,     2,     1,     3,     3,     5,     4,     3,
       1,     3,     3,     5,     1,     3,     3,     5,     3,     5,
       6,     7,     4,     5,     6,     4,     5,     6,     4,     4,
       6,     7,     8,     5,     6,     7,     5,     6,     7,     5,
       2,     1,     2,     8,     2,     1,     7,     1,     4,     1,
       4,     1,     1,     5,     4,     6,     5,     2,     1,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     8,    12,     1,    11,    12,     0,     2,     5,     6,
      28,     0,    36,     0,     0,    84,    86,    85,    87,    88,
       0,    92,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   141,     0,   145,   149,   147,     0,
     158,     0,     0,    24,    14,    41,    43,    49,    50,    44,
      45,    48,    42,    90,    46,    47,    25,    26,    89,    15,
      16,    17,    18,    19,    20,    21,    23,    27,    22,     0,
      91,   157,     0,     0,    99,    83,     0,   104,   101,   103,
       0,    97,     0,    62,    61,    64,    65,    92,    57,    58,
     140,   142,    35,   144,     0,     0,     0,   159,     0,     9,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    59,    60,    94,     0,   102,
       0,     0,    92,   109,   110,     0,     0,     0,    63,    96,
       0,     0,    34,    29,    30,    31,    32,    33,     0,     0,
       0,     0,    10,    66,    67,    68,    69,    70,    73,    74,
      75,    76,    77,    78,    71,    72,    79,    80,    81,     0,
      93,    95,    51,    52,    53,    54,    55,    56,     0,     0,
       0,     9,     0,   100,     0,   108,     0,   105,   106,     0,
     151,   152,     0,     0,   150,   148,   114,   154,     0,    98,
       4,     0,     0,     0,   118,     0,     0,     0,    10,   156,
       0,   111,    92,   112,     0,    38,    39,     0,     0,     0,
       0,   153,     0,    82,   128,   125,     0,   122,     0,     0,
       0,     0,   129,     0,    13,   155,     0,   107,    37,    40,
       0,    35,   115,   116,   126,     0,   123,     0,   119,     0,
     139,   136,     0,   133,     0,     0,     3,   113,     0,     0,
       0,   127,   124,   120,     0,   137,     0,   134,     0,   130,
       0,     0,   143,   117,   121,   138,   135,   131,     0,   146,
     132
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    69,   152,   200,     8,     7,   256,    42,   141,
     142,    43,   191,   217,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    75,    56,    57,    78,
      58,   135,   198,   127,    59,    60,    61,    62,    63,   147,
      64,    65,   192,    66,    67,    68
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -92
static const yytype_int16 yypact[] =
{
     242,   -92,    67,   -92,   -92,   -92,   530,   -92,   -92,   -92,
     -92,    -2,   -92,    21,    -6,   -92,   -92,   -92,   -92,   -92,
    1092,    74,    89,    89,  1092,   716,  1092,  1092,  1092,  1092,
      96,    96,  1092,  1092,   -92,    87,  1092,    88,   102,   118,
    1092,   108,   137,   -92,   -92,  1555,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,     2,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   530,
     -92,   -92,    89,   121,  1555,   103,   747,   122,   105,   105,
       1,   -92,    78,    72,    72,    72,    72,   -92,    27,    27,
    1555,  1555,   591,  1555,  1092,  1092,   116,  1555,  1092,   -92,
    1092,  1092,  1092,  1092,  1092,  1092,  1092,  1092,  1092,  1092,
    1092,  1092,  1092,  1092,  1092,  1092,  1092,   128,  1092,  1092,
    1092,  1092,  1092,  1092,   779,   -92,   -92,   119,   151,   105,
     124,  1092,    -9,   -92,  1555,   -18,  1092,   136,   -92,   -92,
     314,   120,   -92,   -92,   -92,   -92,   -92,   -92,    79,  1154,
       0,  1188,   -92,    63,    63,    72,    72,    72,    -5,    -5,
      -5,    -5,    -5,    -5,  1595,  1575,   316,  1613,   244,  1535,
      74,   -92,  1555,  1555,  1555,  1555,  1555,  1555,   811,  1208,
     843,   -92,    44,  1555,  1092,   -92,  1123,  1555,   139,   386,
     -92,   -92,    99,  1092,   -92,   -92,   145,   -92,   -15,   -92,
     -92,  1092,   133,  1243,   -92,   653,   875,  1263,   -92,   -92,
      33,  1555,    73,  1555,  1092,   -92,   -92,   458,   138,   130,
    1092,   -92,   150,  1555,   -92,   -92,   906,   -92,   937,  1298,
     140,  1318,   -92,   685,   -92,   -92,  1092,  1555,   -92,   -92,
    1092,   591,  1555,   154,   -92,  1373,   -92,  1407,   -92,   968,
     -92,   -92,   999,   -92,  1030,  1353,   -92,  1555,   144,   146,
    1092,   -92,   -92,   -92,  1427,   -92,  1461,   -92,  1481,   -92,
    1061,   134,   -92,  1555,   -92,   -92,   -92,   -92,  1515,   -92,
     -92
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -92,   -92,   -92,    -3,   -36,   -92,   175,   -92,   -43,   -59,
     -92,   -92,   -92,   -92,   -78,   -20,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,    38,   -92,   -92,   158,   -92,   -92,   -12,
      70,   -92,     6,   -92,   -91,   -92,   -92,   -90,   -89,   -92,
     -92,   -92,   -92,   -92,   -92,   -92
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -8
static const yytype_int16 yytable[] =
{
      74,   144,   145,   146,    80,    74,    83,    84,    85,    86,
     117,    79,    90,    91,   143,   185,    93,    72,   221,    70,
      97,   196,   186,    76,   118,   222,   128,   119,   120,   121,
     122,   123,   184,   197,   138,   117,   124,   100,   101,   102,
     103,   104,    71,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   134,   113,   114,   115,
     129,   124,   125,   126,    73,   196,   235,     3,    88,    89,
     116,     4,     5,   222,   148,   149,   116,   209,   151,     6,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   190,   172,   173,
     174,   175,   176,   177,   179,    76,    76,   102,   103,   104,
      77,   183,   194,   139,   236,   219,   187,    87,   131,    92,
      94,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,    95,   113,   114,   115,   116,    96,
      98,    99,   130,   131,   136,   137,   216,   116,   150,   170,
     144,   145,   146,   180,   116,   181,   182,   188,   203,   193,
     207,   214,   258,   143,   211,   218,   213,   220,   224,   241,
     240,   243,   234,   279,   239,   250,   260,   271,   208,   272,
       9,   223,   259,    82,     0,   229,   231,   171,   210,     0,
       0,     0,     0,     0,   237,     0,     0,     0,     0,     0,
     242,     0,     0,     0,     0,     0,   245,     0,   247,     0,
       0,     0,     0,   255,     0,     0,   257,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   264,
       0,     0,   266,     0,   268,     0,     0,     0,     0,     0,
     273,     0,    -7,     1,     0,     0,    -7,    -7,    -7,    -7,
     278,    -7,    -7,     0,    -7,    -7,    -7,    -7,    -7,     0,
      -7,     0,    -7,    -7,     0,    -7,    -7,     0,     0,     0,
       0,     0,     0,     0,    -7,     0,    -7,     0,     0,     0,
       0,     0,     0,     0,    -7,    -7,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,    -7,     0,     0,
     113,    -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,     0,
      -7,    -7,    -7,    -7,    -7,    10,     0,     0,     0,   116,
      11,    12,     0,    13,    14,     0,     0,    15,    16,    17,
      18,     0,    19,     0,    20,    21,     0,    22,    23,     0,
       0,     0,     0,     0,     0,     0,    24,     0,    25,     0,
     189,     0,     0,     0,     0,     0,    26,    27,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,    28,
       0,     0,     0,    29,    30,    31,    32,    33,    34,    35,
      36,     0,    37,    38,    39,    40,    41,    10,     0,     0,
       0,   116,    11,    12,     0,    13,    14,     0,     0,    15,
      16,    17,    18,     0,    19,     0,    20,    21,     0,    22,
      23,     0,     0,     0,     0,     0,     0,     0,    24,     0,
      25,     0,     0,   215,     0,     0,     0,     0,    26,    27,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    28,     0,     0,     0,    29,    30,    31,    32,    33,
      34,    35,    36,     0,    37,    38,    39,    40,    41,    10,
       0,     0,     0,     0,    11,    12,     0,    13,    14,     0,
       0,    15,    16,    17,    18,     0,    19,     0,    20,    21,
       0,    22,    23,     0,     0,     0,     0,     0,     0,     0,
      24,     0,    25,     0,     0,   238,     0,     0,     0,     0,
      26,    27,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    28,     0,     0,     0,    29,    30,    31,
      32,    33,    34,    35,    36,     0,    37,    38,    39,    40,
      41,    10,     0,     0,     0,     0,    11,    12,     0,    13,
      14,     0,     0,    15,    16,    17,    18,     0,    19,     0,
      20,    21,     0,    22,    23,     0,     0,     0,     0,     0,
       0,     0,    24,     0,    25,     0,     0,     0,     0,     0,
       0,     0,    26,    27,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    28,     0,     0,     0,    29,
      30,    31,    32,    33,    34,    35,    36,    11,    37,    38,
      39,    40,    41,     0,    15,    16,    17,    18,     0,    19,
       0,    20,    21,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    24,     0,    25,     0,     0,     0,     0,
       0,     0,     0,    26,    27,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    28,     0,     0,     0,
      29,    30,    31,    32,     0,     0,    35,    36,   140,    11,
       0,     0,     0,    41,     0,     0,    15,    16,    17,    18,
       0,    19,     0,    20,    21,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    24,     0,    25,   227,     0,
       0,    11,     0,     0,   228,    26,    27,     0,    15,    16,
      17,    18,     0,    19,     0,    20,    21,     0,    28,     0,
       0,     0,    29,    30,    31,     0,     0,    24,     0,    25,
     253,     0,    11,     0,     0,    41,   254,    26,    27,    15,
      16,    17,    18,     0,    19,     0,    20,    21,     0,     0,
      28,     0,     0,     0,    29,    30,    31,     0,    24,     0,
      25,    81,     0,    11,     0,     0,     0,    41,    26,    27,
      15,    16,    17,    18,     0,    19,     0,    20,   132,     0,
       0,    28,     0,     0,     0,    29,    30,    31,     0,    24,
     133,    25,     0,     0,     0,    11,     0,     0,    41,    26,
      27,     0,    15,    16,    17,    18,     0,    19,     0,    20,
      21,     0,    28,     0,     0,     0,    29,    30,    31,     0,
       0,    24,     0,    25,     0,     0,     0,    11,     0,    41,
     178,    26,    27,     0,    15,    16,    17,    18,     0,    19,
       0,    20,    21,     0,    28,     0,     0,     0,    29,    30,
      31,     0,     0,    24,     0,    25,     0,     0,     0,    11,
       0,    41,   202,    26,    27,     0,    15,    16,    17,    18,
       0,    19,     0,    20,    21,     0,    28,     0,     0,     0,
      29,    30,    31,     0,     0,    24,     0,    25,     0,     0,
       0,    11,     0,    41,   206,    26,    27,     0,    15,    16,
      17,    18,     0,    19,     0,    20,    21,     0,    28,     0,
       0,     0,    29,    30,    31,     0,     0,    24,     0,    25,
       0,     0,    11,     0,     0,    41,   230,    26,    27,    15,
      16,    17,    18,     0,    19,     0,    20,    21,     0,     0,
      28,     0,     0,     0,    29,    30,    31,     0,    24,     0,
      25,   244,     0,    11,     0,     0,     0,    41,    26,    27,
      15,    16,    17,    18,     0,    19,     0,    20,    21,     0,
       0,    28,     0,     0,     0,    29,    30,    31,     0,    24,
       0,    25,   246,     0,    11,     0,     0,     0,    41,    26,
      27,    15,    16,    17,    18,     0,    19,     0,    20,    21,
       0,     0,    28,     0,     0,     0,    29,    30,    31,     0,
      24,     0,    25,   263,     0,    11,     0,     0,     0,    41,
      26,    27,    15,    16,    17,    18,     0,    19,     0,    20,
      21,     0,     0,    28,     0,     0,     0,    29,    30,    31,
       0,    24,     0,    25,   265,     0,    11,     0,     0,     0,
      41,    26,    27,    15,    16,    17,    18,     0,    19,     0,
      20,    21,     0,     0,    28,     0,     0,     0,    29,    30,
      31,     0,    24,     0,    25,   267,     0,    11,     0,     0,
       0,    41,    26,    27,    15,    16,    17,    18,     0,    19,
       0,    20,    21,     0,     0,    28,     0,     0,     0,    29,
      30,    31,     0,    24,     0,    25,   277,     0,    11,     0,
       0,     0,    41,    26,    27,    15,    16,    17,    18,     0,
      19,     0,    20,    21,     0,     0,    28,     0,     0,     0,
      29,    30,    31,     0,    24,     0,    25,     0,     0,    11,
       0,     0,     0,    41,    26,    27,    15,    16,    17,    18,
       0,    19,     0,    20,   212,     0,     0,    28,     0,     0,
       0,    29,    30,    31,     0,    24,     0,    25,     0,     0,
       0,     0,     0,     0,    41,    26,    27,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    28,     0,
       0,     0,    29,    30,    31,     0,     0,   195,     0,     0,
       0,     0,     0,     0,     0,    41,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,     0,
     113,   114,   115,     0,     0,     0,     0,     0,     0,     0,
       0,   199,     0,     0,     0,     0,     0,     0,     0,   116,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   204,   113,   114,   115,     0,     0,   205,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   116,   113,   114,   115,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   225,     0,
       0,     0,     0,   116,   226,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   232,   113,
     114,   115,     0,     0,   233,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   116,   113,
     114,   115,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   248,     0,     0,     0,     0,   116,   249,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   251,   113,   114,   115,     0,     0,   252,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   116,   113,   114,   115,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   269,     0,
       0,     0,     0,   116,   270,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   261,   113,
     114,   115,     0,     0,     0,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   116,   113,
     114,   115,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   262,     0,     0,     0,     0,     0,   116,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   274,   113,   114,   115,     0,     0,     0,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   116,   113,   114,   115,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   275,     0,     0,     0,
       0,     0,   116,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   276,   113,   114,   115,
       0,     0,     0,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   116,   113,   114,   115,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     280,     0,     0,     0,     0,     0,   116,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
       0,   113,   114,   115,     0,     0,   201,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     116,   113,   114,   115,     0,     0,     0,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     116,   113,   114,   115,     0,     0,     0,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,     0,
     116,   113,   114,   115,     0,     0,     0,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,     0,     0,
     116,   113,   114,   115,     0,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,     0,     0,     0,   113,
     116,   115,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   116
};

static const yytype_int16 yycheck[] =
{
      20,    92,    92,    92,    24,    25,    26,    27,    28,    29,
       8,    23,    32,    33,    92,    33,    36,    23,    33,    21,
      40,    21,    40,    32,    22,    40,    69,    25,    26,    27,
      28,    29,    41,    33,    33,     8,    34,    42,    43,    44,
      45,    46,    21,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    76,    56,    57,    58,
      72,    34,    60,    61,    70,    21,    33,     0,    30,    31,
      75,     4,     5,    40,    94,    95,    75,    33,    98,    12,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   140,   118,   119,
     120,   121,   122,   123,   124,    32,    32,    44,    45,    46,
      21,   131,    33,    35,    41,   193,   136,    21,    40,    32,
      32,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    32,    56,    57,    58,    75,    21,
      32,     4,    21,    40,    22,    40,   189,    75,    32,    21,
     241,   241,   241,    34,    75,     4,    32,    21,   178,    39,
     180,    22,   240,   241,   184,    66,   186,    22,    35,    39,
      32,    21,   208,    39,   217,    35,    22,    33,   181,    33,
       5,   201,   241,    25,    -1,   205,   206,   117,   182,    -1,
      -1,    -1,    -1,    -1,   214,    -1,    -1,    -1,    -1,    -1,
     220,    -1,    -1,    -1,    -1,    -1,   226,    -1,   228,    -1,
      -1,    -1,    -1,   233,    -1,    -1,   236,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   249,
      -1,    -1,   252,    -1,   254,    -1,    -1,    -1,    -1,    -1,
     260,    -1,     0,     1,    -1,    -1,     4,     5,     6,     7,
     270,     9,    10,    -1,    12,    13,    14,    15,    16,    -1,
      18,    -1,    20,    21,    -1,    23,    24,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    -1,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    43,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    55,    -1,    -1,
      56,    59,    60,    61,    62,    63,    64,    65,    66,    -1,
      68,    69,    70,    71,    72,     1,    -1,    -1,    -1,    75,
       6,     7,    -1,     9,    10,    -1,    -1,    13,    14,    15,
      16,    -1,    18,    -1,    20,    21,    -1,    23,    24,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,    34,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    42,    43,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    55,
      -1,    -1,    -1,    59,    60,    61,    62,    63,    64,    65,
      66,    -1,    68,    69,    70,    71,    72,     1,    -1,    -1,
      -1,    75,     6,     7,    -1,     9,    10,    -1,    -1,    13,
      14,    15,    16,    -1,    18,    -1,    20,    21,    -1,    23,
      24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,
      34,    -1,    -1,    37,    -1,    -1,    -1,    -1,    42,    43,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    -1,    -1,    -1,    59,    60,    61,    62,    63,
      64,    65,    66,    -1,    68,    69,    70,    71,    72,     1,
      -1,    -1,    -1,    -1,     6,     7,    -1,     9,    10,    -1,
      -1,    13,    14,    15,    16,    -1,    18,    -1,    20,    21,
      -1,    23,    24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    -1,    34,    -1,    -1,    37,    -1,    -1,    -1,    -1,
      42,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    -1,    -1,    -1,    59,    60,    61,
      62,    63,    64,    65,    66,    -1,    68,    69,    70,    71,
      72,     1,    -1,    -1,    -1,    -1,     6,     7,    -1,     9,
      10,    -1,    -1,    13,    14,    15,    16,    -1,    18,    -1,
      20,    21,    -1,    23,    24,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    -1,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,    -1,    59,
      60,    61,    62,    63,    64,    65,    66,     6,    68,    69,
      70,    71,    72,    -1,    13,    14,    15,    16,    -1,    18,
      -1,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    -1,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,    -1,
      59,    60,    61,    62,    -1,    -1,    65,    66,    67,     6,
      -1,    -1,    -1,    72,    -1,    -1,    13,    14,    15,    16,
      -1,    18,    -1,    20,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    -1,    34,    35,    -1,
      -1,     6,    -1,    -1,    41,    42,    43,    -1,    13,    14,
      15,    16,    -1,    18,    -1,    20,    21,    -1,    55,    -1,
      -1,    -1,    59,    60,    61,    -1,    -1,    32,    -1,    34,
      35,    -1,     6,    -1,    -1,    72,    41,    42,    43,    13,
      14,    15,    16,    -1,    18,    -1,    20,    21,    -1,    -1,
      55,    -1,    -1,    -1,    59,    60,    61,    -1,    32,    -1,
      34,    35,    -1,     6,    -1,    -1,    -1,    72,    42,    43,
      13,    14,    15,    16,    -1,    18,    -1,    20,    21,    -1,
      -1,    55,    -1,    -1,    -1,    59,    60,    61,    -1,    32,
      33,    34,    -1,    -1,    -1,     6,    -1,    -1,    72,    42,
      43,    -1,    13,    14,    15,    16,    -1,    18,    -1,    20,
      21,    -1,    55,    -1,    -1,    -1,    59,    60,    61,    -1,
      -1,    32,    -1,    34,    -1,    -1,    -1,     6,    -1,    72,
      41,    42,    43,    -1,    13,    14,    15,    16,    -1,    18,
      -1,    20,    21,    -1,    55,    -1,    -1,    -1,    59,    60,
      61,    -1,    -1,    32,    -1,    34,    -1,    -1,    -1,     6,
      -1,    72,    41,    42,    43,    -1,    13,    14,    15,    16,
      -1,    18,    -1,    20,    21,    -1,    55,    -1,    -1,    -1,
      59,    60,    61,    -1,    -1,    32,    -1,    34,    -1,    -1,
      -1,     6,    -1,    72,    41,    42,    43,    -1,    13,    14,
      15,    16,    -1,    18,    -1,    20,    21,    -1,    55,    -1,
      -1,    -1,    59,    60,    61,    -1,    -1,    32,    -1,    34,
      -1,    -1,     6,    -1,    -1,    72,    41,    42,    43,    13,
      14,    15,    16,    -1,    18,    -1,    20,    21,    -1,    -1,
      55,    -1,    -1,    -1,    59,    60,    61,    -1,    32,    -1,
      34,    35,    -1,     6,    -1,    -1,    -1,    72,    42,    43,
      13,    14,    15,    16,    -1,    18,    -1,    20,    21,    -1,
      -1,    55,    -1,    -1,    -1,    59,    60,    61,    -1,    32,
      -1,    34,    35,    -1,     6,    -1,    -1,    -1,    72,    42,
      43,    13,    14,    15,    16,    -1,    18,    -1,    20,    21,
      -1,    -1,    55,    -1,    -1,    -1,    59,    60,    61,    -1,
      32,    -1,    34,    35,    -1,     6,    -1,    -1,    -1,    72,
      42,    43,    13,    14,    15,    16,    -1,    18,    -1,    20,
      21,    -1,    -1,    55,    -1,    -1,    -1,    59,    60,    61,
      -1,    32,    -1,    34,    35,    -1,     6,    -1,    -1,    -1,
      72,    42,    43,    13,    14,    15,    16,    -1,    18,    -1,
      20,    21,    -1,    -1,    55,    -1,    -1,    -1,    59,    60,
      61,    -1,    32,    -1,    34,    35,    -1,     6,    -1,    -1,
      -1,    72,    42,    43,    13,    14,    15,    16,    -1,    18,
      -1,    20,    21,    -1,    -1,    55,    -1,    -1,    -1,    59,
      60,    61,    -1,    32,    -1,    34,    35,    -1,     6,    -1,
      -1,    -1,    72,    42,    43,    13,    14,    15,    16,    -1,
      18,    -1,    20,    21,    -1,    -1,    55,    -1,    -1,    -1,
      59,    60,    61,    -1,    32,    -1,    34,    -1,    -1,     6,
      -1,    -1,    -1,    72,    42,    43,    13,    14,    15,    16,
      -1,    18,    -1,    20,    21,    -1,    -1,    55,    -1,    -1,
      -1,    59,    60,    61,    -1,    32,    -1,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    42,    43,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,
      -1,    -1,    59,    60,    61,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    72,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    -1,
      56,    57,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    35,    56,    57,    58,    -1,    -1,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    75,    56,    57,    58,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,
      -1,    -1,    -1,    75,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    35,    56,
      57,    58,    -1,    -1,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    75,    56,
      57,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    35,    -1,    -1,    -1,    -1,    75,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    35,    56,    57,    58,    -1,    -1,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    75,    56,    57,    58,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,
      -1,    -1,    -1,    75,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    35,    56,
      57,    58,    -1,    -1,    -1,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    75,    56,
      57,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    35,    -1,    -1,    -1,    -1,    -1,    75,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    35,    56,    57,    58,    -1,    -1,    -1,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    75,    56,    57,    58,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,    -1,    -1,
      -1,    -1,    75,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    35,    56,    57,    58,
      -1,    -1,    -1,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    75,    56,    57,    58,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      35,    -1,    -1,    -1,    -1,    -1,    75,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      -1,    56,    57,    58,    -1,    -1,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      75,    56,    57,    58,    -1,    -1,    -1,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      75,    56,    57,    58,    -1,    -1,    -1,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    -1,
      75,    56,    57,    58,    -1,    -1,    -1,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    -1,    -1,
      75,    56,    57,    58,    -1,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    -1,    -1,    -1,    56,
      75,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    77,     0,     4,     5,    12,    82,    81,    82,
       1,     6,     7,     9,    10,    13,    14,    15,    16,    18,
      20,    21,    23,    24,    32,    34,    42,    43,    55,    59,
      60,    61,    62,    63,    64,    65,    66,    68,    69,    70,
      71,    72,    84,    87,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   103,   104,   106,   110,
     111,   112,   113,   114,   116,   117,   119,   120,   121,    78,
      21,    21,    23,    70,    91,   102,    32,    21,   105,   105,
      91,    35,   102,    91,    91,    91,    91,    21,    99,    99,
      91,    91,    32,    91,    32,    32,    21,    91,    32,     4,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    56,    57,    58,    75,     8,    22,    25,
      26,    27,    28,    29,    34,    60,    61,   109,    84,   105,
      21,    40,    21,    33,    91,   107,    22,    40,    33,    35,
      67,    85,    86,    90,   110,   113,   114,   115,    91,    91,
      32,    91,    79,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      21,   106,    91,    91,    91,    91,    91,    91,    41,    91,
      34,     4,    32,    91,    41,    33,    40,    91,    21,    36,
      84,    88,   118,    39,    33,    33,    21,    33,   108,    33,
      80,    41,    41,    91,    35,    41,    41,    91,    79,    33,
     108,    91,    21,    91,    22,    37,    84,    89,    66,    90,
      22,    33,    40,    91,    35,    35,    41,    35,    41,    91,
      41,    91,    35,    41,    80,    33,    41,    91,    37,    84,
      32,    39,    91,    21,    35,    91,    35,    91,    35,    41,
      35,    35,    41,    35,    41,    91,    83,    91,    90,    85,
      22,    35,    35,    35,    91,    35,    91,    35,    91,    35,
      41,    33,    33,    91,    35,    35,    35,    35,    91,    39,
      35
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
        case 2:
#line 174 "bello.y"
    {(yyval.intVl) = 0; }
    break;

  case 6:
#line 180 "bello.y"
    { return 0; }
    break;

  case 8:
#line 182 "bello.y"
    { yyerrok; }
    break;

  case 9:
#line 186 "bello.y"
    { 
        if (((yyvsp[(-2) - (0)].intVl))>lstIndt+1) 
        {
           yyclearin;
           yyerrok;
        }
      }
    break;

  case 10:
#line 196 "bello.y"
    {   
        int indt = (yyvsp[(-3) - (0)].intVl);

        StmtStrc* stmt=(yyvsp[(-2) - (0)].stmt);

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

  case 11:
#line 242 "bello.y"
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

  case 12:
#line 291 "bello.y"
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
    break;

  case 13:
#line 338 "bello.y"
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

  case 14:
#line 356 "bello.y"
    { (yyval.stmt)=(yyvsp[(1) - (1)].stmt); }
    break;

  case 15:
#line 357 "bello.y"
    { (yyval.stmt)=(yyvsp[(1) - (1)].stmt); }
    break;

  case 16:
#line 358 "bello.y"
    { (yyval.stmt)=(yyvsp[(1) - (1)].stmt); }
    break;

  case 17:
#line 359 "bello.y"
    { (yyval.stmt)=(yyvsp[(1) - (1)].stmt); }
    break;

  case 18:
#line 360 "bello.y"
    { (yyval.stmt)=(yyvsp[(1) - (1)].stmt); }
    break;

  case 19:
#line 361 "bello.y"
    { (yyval.stmt)=(yyvsp[(1) - (1)].stmt); }
    break;

  case 20:
#line 363 "bello.y"
    { (yyval.stmt)=(yyvsp[(1) - (1)].stmt); }
    break;

  case 21:
#line 364 "bello.y"
    { (yyval.stmt)=(yyvsp[(1) - (1)].stmt); }
    break;

  case 22:
#line 365 "bello.y"
    { (yyval.stmt)=(yyvsp[(1) - (1)].stmt); }
    break;

  case 23:
#line 366 "bello.y"
    { (yyval.stmt)=(yyvsp[(1) - (1)].stmt); }
    break;

  case 24:
#line 368 "bello.y"
    { (yyval.stmt)=(yyvsp[(1) - (1)].stmt); }
    break;

  case 25:
#line 369 "bello.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt);}
    break;

  case 26:
#line 370 "bello.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); }
    break;

  case 27:
#line 371 "bello.y"
    { (yyval.stmt)= (yyvsp[(1) - (1)].stmt); }
    break;

  case 28:
#line 373 "bello.y"
    { 
        (yyval.stmt)=bldNllStmt(); 
        yyclearin; 
        yyerrok; 
    }
    break;

  case 35:
#line 391 "bello.y"
    { (yyval.stmt)=bldNllStmt(); }
    break;

  case 36:
#line 394 "bello.y"
    { (yyval.stmt)=bldNllStmt(); }
    break;

  case 37:
#line 397 "bello.y"
    { (yyval.stmt)=(yyvsp[(2) - (3)].stmt); }
    break;

  case 38:
#line 398 "bello.y"
    { (yyval.stmt)=bldNllStmt(); }
    break;

  case 39:
#line 402 "bello.y"
    { 
        (yyval.stmt)=bldStmtBlk(); 
        stmtBlkAdd((yyval.stmt), (yyvsp[(1) - (1)].stmt)); 
    }
    break;

  case 40:
#line 407 "bello.y"
    {
        (yyval.stmt) = stmtBlkAdd((yyvsp[(1) - (2)].stmt) ,(yyvsp[(2) - (2)].stmt));
    }
    break;

  case 41:
#line 414 "bello.y"
    { 
        (yyval.stmt)=bldExpStmt((yyvsp[(1) - (1)].exp)); 
    }
    break;

  case 44:
#line 421 "bello.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); }
    break;

  case 45:
#line 422 "bello.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); }
    break;

  case 46:
#line 423 "bello.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); }
    break;

  case 47:
#line 424 "bello.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); }
    break;

  case 48:
#line 425 "bello.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); }
    break;

  case 51:
#line 432 "bello.y"
    { (yyval.exp)=bldAsgnExp((yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); }
    break;

  case 52:
#line 433 "bello.y"
    { (yyval.exp)=bldAsgnExp((yyvsp[(1) - (3)].exp), bldBnrExp(ADD, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp))); }
    break;

  case 53:
#line 434 "bello.y"
    { (yyval.exp)=bldAsgnExp((yyvsp[(1) - (3)].exp), bldBnrExp(SUB, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp))); }
    break;

  case 54:
#line 435 "bello.y"
    { (yyval.exp)=bldAsgnExp((yyvsp[(1) - (3)].exp), bldBnrExp(MUL, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp))); }
    break;

  case 55:
#line 436 "bello.y"
    { (yyval.exp)=bldAsgnExp((yyvsp[(1) - (3)].exp), bldBnrExp(DIV, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp))); }
    break;

  case 56:
#line 437 "bello.y"
    { (yyval.exp)=bldAsgnExp((yyvsp[(1) - (3)].exp), bldBnrExp(MOD, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp))); }
    break;

  case 57:
#line 441 "bello.y"
    { (yyval.exp)=bldUnrExp(PREFIX_INCREMENT, (yyvsp[(2) - (2)].exp)); }
    break;

  case 58:
#line 442 "bello.y"
    { (yyval.exp)=bldUnrExp(PREFIX_DECREMENT, (yyvsp[(2) - (2)].exp)); }
    break;

  case 59:
#line 443 "bello.y"
    { (yyval.exp)=bldUnrExp(SUFFIX_INCREMENT, (yyvsp[(1) - (2)].exp)); }
    break;

  case 60:
#line 444 "bello.y"
    { (yyval.exp)=bldUnrExp(SUFFIX_DECREMENT, (yyvsp[(1) - (2)].exp)); }
    break;

  case 61:
#line 447 "bello.y"
    { (yyval.exp) = bldUnrExp(SUB, (yyvsp[(2) - (2)].exp)); }
    break;

  case 62:
#line 448 "bello.y"
    { (yyval.exp) = bldUnrExp(ADD, (yyvsp[(2) - (2)].exp)); }
    break;

  case 63:
#line 449 "bello.y"
    { (yyval.exp)=(yyvsp[(2) - (3)].exp); }
    break;

  case 64:
#line 450 "bello.y"
    { (yyval.exp)=bldUnrExp(NOT, (yyvsp[(2) - (2)].exp)); }
    break;

  case 65:
#line 451 "bello.y"
    { (yyval.exp)=bldUnrExp(BIT_NOT, (yyvsp[(2) - (2)].exp)); }
    break;

  case 66:
#line 454 "bello.y"
    { (yyval.exp)=bldBnrExp(ADD, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); }
    break;

  case 67:
#line 455 "bello.y"
    { (yyval.exp)=bldBnrExp(SUB, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); }
    break;

  case 68:
#line 456 "bello.y"
    { (yyval.exp)=bldBnrExp(MUL, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); }
    break;

  case 69:
#line 457 "bello.y"
    { (yyval.exp)=bldBnrExp(DIV, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); }
    break;

  case 70:
#line 458 "bello.y"
    { (yyval.exp)=bldBnrExp(MOD, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); }
    break;

  case 71:
#line 459 "bello.y"
    { (yyval.exp)=bldBnrExp(AND, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); }
    break;

  case 72:
#line 460 "bello.y"
    { (yyval.exp)=bldBnrExp(OR, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); }
    break;

  case 73:
#line 461 "bello.y"
    { (yyval.exp)=bldBnrExp(EQ, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); }
    break;

  case 74:
#line 462 "bello.y"
    { (yyval.exp)=bldBnrExp(NE, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); }
    break;

  case 75:
#line 463 "bello.y"
    { (yyval.exp)=bldBnrExp(GT, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); }
    break;

  case 76:
#line 464 "bello.y"
    { (yyval.exp)=bldBnrExp(GE, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); }
    break;

  case 77:
#line 465 "bello.y"
    { (yyval.exp)=bldBnrExp(LT, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); }
    break;

  case 78:
#line 466 "bello.y"
    { (yyval.exp)=bldBnrExp(LE, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); }
    break;

  case 79:
#line 467 "bello.y"
    { (yyval.exp)=bldBnrExp(BIT_AND, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); }
    break;

  case 80:
#line 468 "bello.y"
    { (yyval.exp)=bldBnrExp(BIT_OR, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); }
    break;

  case 81:
#line 469 "bello.y"
    { (yyval.exp)=bldBnrExp(BIT_XOR, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); }
    break;

  case 82:
#line 470 "bello.y"
    { (yyval.exp) = bldTnrExp(QM, (yyvsp[(1) - (5)].exp), (yyvsp[(3) - (5)].exp), (yyvsp[(5) - (5)].exp)); }
    break;

  case 83:
#line 474 "bello.y"
    {
        
    }
    break;

  case 84:
#line 479 "bello.y"
    { (yyval.exp)=bldCnstIntExp((yyvsp[(1) - (1)].intVl)); /*printf("Get data: %d\n",$1);*/ }
    break;

  case 85:
#line 480 "bello.y"
    { (yyval.exp)=bldCnstFltExp((yyvsp[(1) - (1)].fltVl)); }
    break;

  case 86:
#line 481 "bello.y"
    { (yyval.exp)=bldCnstBlnExp((yyvsp[(1) - (1)].blnVl)); }
    break;

  case 87:
#line 482 "bello.y"
    { (yyval.exp)=bldCnstStrExp((yyvsp[(1) - (1)].strVl)); }
    break;

  case 88:
#line 483 "bello.y"
    { (yyval.exp)=bldCnstNllExp(); }
    break;

  case 91:
#line 486 "bello.y"
    { (yyval.exp)= bldNewExp((yyvsp[(2) - (2)].idtf)); }
    break;

  case 92:
#line 489 "bello.y"
    { (yyval.exp)= bldLvlExp(bldVrbExp((yyvsp[(1) - (1)].idtf))); }
    break;

  case 93:
#line 491 "bello.y"
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

  case 94:
#line 506 "bello.y"
    { 
        (yyval.exp)=(yyvsp[(1) - (2)].exp); 
        bldLvlExpAdd((yyvsp[(1) - (2)].exp), (yyvsp[(2) - (2)].evlLst)); 
    }
    break;

  case 95:
#line 511 "bello.y"
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

  case 96:
#line 575 "bello.y"
    {
        (yyval.exp)= bldArrExp((yyvsp[(2) - (3)].elmtLst));
    }
    break;

  case 97:
#line 579 "bello.y"
    {
        (yyval.exp)= bldArrExp(bldElmtLst());
    }
    break;

  case 98:
#line 585 "bello.y"
    {
        (yyval.exp) = bldNewArrExp((yyvsp[(3) - (4)].exp));
    }
    break;

  case 99:
#line 591 "bello.y"
    { 
        (yyval.elmtLst)= bldElmtLst(); 
        elmtLstAdd((yyval.elmtLst), (yyvsp[(1) - (1)].exp)); 
    }
    break;

  case 100:
#line 596 "bello.y"
    {  
        (yyval.elmtLst)=(yyvsp[(1) - (3)].elmtLst);  
        elmtLstAdd((yyval.elmtLst), (yyvsp[(3) - (3)].exp)); 
    }
    break;

  case 101:
#line 604 "bello.y"
    { 
        //建立变量
        if (blnDfnCls==false)
        {
            (yyval.stmt)=bldVarStmt((yyvsp[(2) - (2)].asgnLst)); 
        }
        else
        {
            (yyval.stmt)=bldVarStmt(CLASS_VAR_STATEMENT, (yyvsp[(2) - (2)].asgnLst));
        }
    }
    break;

  case 102:
#line 616 "bello.y"
    {
        //需要是类定义状态
        if (blnDfnCls==1)
        {
            (yyval.stmt) = bldVarStmt(CLASS_SHARED_VAR_STATEMENT, (yyvsp[(3) - (3)].asgnLst)); 
        } 
        else
        {
            yyclearin;   
            yyerrok;
        }
    }
    break;

  case 103:
#line 630 "bello.y"
    { (yyval.stmt)=bldGlbStmt((yyvsp[(2) - (2)].asgnLst)); }
    break;

  case 104:
#line 634 "bello.y"
    {
        (yyval.asgnLst)= bldAsgnLst();
        asgnLstAdd((yyval.asgnLst), bldVrbExp((yyvsp[(1) - (1)].idtf)), bldNllExp());
    }
    break;

  case 105:
#line 639 "bello.y"
    {
        (yyval.asgnLst)= bldAsgnLst();
        asgnLstAdd((yyval.asgnLst), bldVrbExp((yyvsp[(1) - (3)].idtf)), (yyvsp[(3) - (3)].exp));
    }
    break;

  case 106:
#line 644 "bello.y"
    {
        (yyval.asgnLst)=(yyvsp[(1) - (3)].asgnLst);
        asgnLstAdd((yyval.asgnLst), bldVrbExp((yyvsp[(3) - (3)].idtf)), bldNllExp());
    }
    break;

  case 107:
#line 649 "bello.y"
    {
        (yyval.asgnLst)=(yyvsp[(1) - (5)].asgnLst);
        asgnLstAdd((yyval.asgnLst), bldVrbExp((yyvsp[(3) - (5)].idtf)), (yyvsp[(5) - (5)].exp));
    }
    break;

  case 108:
#line 660 "bello.y"
    {
        (yyval.exp)=bldFcnExp((yyvsp[(1) - (4)].idtf), (yyvsp[(3) - (4)].argLst));
    }
    break;

  case 109:
#line 664 "bello.y"
    {
        (yyval.exp)=bldFcnExp((yyvsp[(1) - (3)].idtf), bldArgLst());
    }
    break;

  case 110:
#line 670 "bello.y"
    {
        (yyval.argLst)=bldArgLst();
        argLstAdd((yyval.argLst), (yyvsp[(1) - (1)].exp));
    }
    break;

  case 111:
#line 675 "bello.y"
    {
        (yyval.argLst) = bldArgLst();
        argLstAdd((yyval.argLst), bldVrbExp((yyvsp[(1) - (3)].idtf)), (yyvsp[(3) - (3)].exp));
    }
    break;

  case 112:
#line 680 "bello.y"
    {
        (yyval.argLst) = (yyvsp[(1) - (3)].argLst);
        argLstAdd((yyval.argLst), (yyvsp[(3) - (3)].exp));
    }
    break;

  case 113:
#line 685 "bello.y"
    {
        (yyval.argLst) = (yyvsp[(1) - (5)].argLst);
        argLstAdd((yyval.argLst), bldVrbExp((yyvsp[(3) - (5)].idtf)), (yyvsp[(5) - (5)].exp));
    }
    break;

  case 114:
#line 692 "bello.y"
    {
        (yyval.prmLst) = bldPrmLst();
        prmLstAdd((yyval.prmLst), bldVrbExp((yyvsp[(1) - (1)].idtf)));
    }
    break;

  case 115:
#line 697 "bello.y"
    {
        (yyval.prmLst) = bldPrmLst();
        prmLstAdd((yyval.prmLst), bldVrbExp((yyvsp[(1) - (3)].idtf)), (yyvsp[(3) - (3)].exp));
    }
    break;

  case 116:
#line 702 "bello.y"
    { 
        (yyval.prmLst) = (yyvsp[(1) - (3)].prmLst);  
        prmLstAdd((yyval.prmLst), bldVrbExp((yyvsp[(3) - (3)].idtf)));
    }
    break;

  case 117:
#line 707 "bello.y"
    {
        (yyval.prmLst) = (yyvsp[(1) - (5)].prmLst);
        prmLstAdd((yyval.prmLst), bldVrbExp((yyvsp[(3) - (5)].idtf)), (yyvsp[(5) - (5)].exp));
    }
    break;

  case 118:
#line 716 "bello.y"
    {
        (yyval.evlLst) = bldAcsLst();
        acsLstIdxAdd((yyval.evlLst), (yyvsp[(2) - (3)].exp));
    }
    break;

  case 119:
#line 721 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), (yyvsp[(2) - (5)].exp), (yyvsp[(4) - (5)].exp), bldCnstIntExp(1));
    }
    break;

  case 120:
#line 726 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), (yyvsp[(2) - (6)].exp), (yyvsp[(4) - (6)].exp), bldCnstIntExp(1));
    }
    break;

  case 121:
#line 731 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), (yyvsp[(2) - (7)].exp), (yyvsp[(4) - (7)].exp), (yyvsp[(6) - (7)].exp));
    }
    break;

  case 122:
#line 736 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), (yyvsp[(2) - (4)].exp), bldCnstIntExp(-1), bldCnstIntExp(1));
    }
    break;

  case 123:
#line 741 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), (yyvsp[(2) - (5)].exp), bldCnstIntExp(-1), bldCnstIntExp(1));
    }
    break;

  case 124:
#line 746 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), (yyvsp[(2) - (6)].exp), bldCnstIntExp(-1), (yyvsp[(5) - (6)].exp));
    }
    break;

  case 125:
#line 751 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), (yyvsp[(3) - (4)].exp), bldCnstIntExp(1));
    }
    break;

  case 126:
#line 756 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), (yyvsp[(3) - (5)].exp), bldCnstIntExp(1));
    }
    break;

  case 127:
#line 761 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), (yyvsp[(3) - (6)].exp), (yyvsp[(5) - (6)].exp));
    }
    break;

  case 128:
#line 766 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), bldCnstIntExp(-1), bldCnstIntExp(1));
    }
    break;

  case 129:
#line 771 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[(1) - (4)].evlLst);
        acsLstIdxAdd((yyval.evlLst),(yyvsp[(3) - (4)].exp));
    }
    break;

  case 130:
#line 776 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[(1) - (6)].evlLst);
        acsLstSlcAdd((yyval.evlLst), (yyvsp[(3) - (6)].exp), (yyvsp[(5) - (6)].exp), bldCnstIntExp(1));
    }
    break;

  case 131:
#line 781 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[(1) - (7)].evlLst);
        acsLstSlcAdd((yyval.evlLst), (yyvsp[(3) - (7)].exp), (yyvsp[(5) - (7)].exp), bldCnstIntExp(1));
    }
    break;

  case 132:
#line 786 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[(1) - (8)].evlLst);
        acsLstSlcAdd((yyval.evlLst), (yyvsp[(3) - (8)].exp), (yyvsp[(5) - (8)].exp), (yyvsp[(7) - (8)].exp));
    }
    break;

  case 133:
#line 791 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[(1) - (5)].evlLst);
        acsLstSlcAdd((yyval.evlLst), (yyvsp[(3) - (5)].exp), bldCnstIntExp(-1), bldCnstIntExp(1));
    }
    break;

  case 134:
#line 796 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[(1) - (6)].evlLst);
        acsLstSlcAdd((yyval.evlLst), (yyvsp[(3) - (6)].exp), bldCnstIntExp(-1), bldCnstIntExp(1));
    }
    break;

  case 135:
#line 801 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[(1) - (7)].evlLst);
        acsLstSlcAdd((yyval.evlLst), (yyvsp[(3) - (7)].exp), bldCnstIntExp(-1), (yyvsp[(6) - (7)].exp));
    }
    break;

  case 136:
#line 806 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[(1) - (5)].evlLst);
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), (yyvsp[(4) - (5)].exp), bldCnstIntExp(1));
    }
    break;

  case 137:
#line 811 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[(1) - (6)].evlLst);
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), (yyvsp[(4) - (6)].exp), bldCnstIntExp(1));
    }
    break;

  case 138:
#line 816 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[(1) - (7)].evlLst);
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), (yyvsp[(4) - (7)].exp), (yyvsp[(6) - (7)].exp));
    }
    break;

  case 139:
#line 821 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[(1) - (5)].evlLst);
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), bldCnstIntExp(-1), bldCnstIntExp(1));
    }
    break;

  case 140:
#line 839 "bello.y"
    {
        (yyval.stmt)=bldIfStmt((yyvsp[(2) - (2)].exp));
        //printf("bld if stmt\n");
    }
    break;

  case 141:
#line 855 "bello.y"
    {
        (yyval.stmt) = bldElsStmt();
    }
    break;

  case 142:
#line 861 "bello.y"
    {
        (yyval.stmt) = bldElifStmt((yyvsp[(2) - (2)].exp));
    }
    break;

  case 143:
#line 877 "bello.y"
    {
        (yyval.stmt)= bldForStmt((yyvsp[(3) - (8)].stmt), (yyvsp[(5) - (8)].stmt), (yyvsp[(7) - (8)].stmt));  
    }
    break;

  case 144:
#line 889 "bello.y"
    {
        (yyval.stmt) = bldWhlStmt((yyvsp[(2) - (2)].exp));
    }
    break;

  case 145:
#line 897 "bello.y"
    {
        (yyval.stmt) = bldWhlStmt();
    }
    break;

  case 146:
#line 903 "bello.y"
    {
        (yyval.stmt)= bldDoWhlStmt((yyvsp[(5) - (7)].stmt), (yyvsp[(2) - (7)].stmt));
    }
    break;

  case 147:
#line 908 "bello.y"
    { (yyval.stmt)= bldBrkStmt(bldCnstIntExp(1)); }
    break;

  case 148:
#line 909 "bello.y"
    { (yyval.stmt)= bldBrkStmt((yyvsp[(3) - (4)].exp)); }
    break;

  case 149:
#line 912 "bello.y"
    { (yyval.stmt)= bldCntnStmt(bldCnstIntExp(1)); }
    break;

  case 150:
#line 913 "bello.y"
    { (yyval.stmt)= bldCntnStmt((yyvsp[(3) - (4)].exp)); }
    break;

  case 153:
#line 955 "bello.y"
    {
        struct FcnStrc* fcn;

        fcn=bldFcn((yyvsp[(2) - (5)].idtf), (yyvsp[(4) - (5)].prmLst));

        (yyval.stmt) = bldFcnStmt(fcn);
    }
    break;

  case 154:
#line 963 "bello.y"
    {
        struct FcnStrc *fcn;

        fcn=bldFcn((yyvsp[(2) - (4)].idtf), bldPrmLst());

        (yyval.stmt) = bldFcnStmt(fcn);
    }
    break;

  case 155:
#line 971 "bello.y"
    {
        if (blnDfnCls==false)
        {
            yyclearin;
            yyerrok;

            break;
        }

        struct FcnStrc* fcn;

        fcn=bldFcn((yyvsp[(3) - (6)].idtf), (yyvsp[(5) - (6)].prmLst));

        (yyval.stmt) = bldFcnStmt(fcn);
        
    }
    break;

  case 156:
#line 988 "bello.y"
    {
        struct FcnStrc *fcn;

        fcn=bldFcn((yyvsp[(3) - (5)].idtf), bldPrmLst());

        (yyval.stmt) = bldFcnStmt(fcn);
    }
    break;

  case 157:
#line 998 "bello.y"
    {
        struct ClsStrc* cls;

        cls = bldCls((yyvsp[(2) - (2)].idtf));

        (yyval.stmt) = bldClsStmt(cls);

        //blnDfnCls = 1;
    }
    break;

  case 158:
#line 1011 "bello.y"
    { (yyval.stmt)=bldRtnStmt(NULL); }
    break;

  case 159:
#line 1012 "bello.y"
    { (yyval.stmt)=bldRtnStmt((yyvsp[(2) - (2)].exp)); }
    break;


/* Line 1267 of yacc.c.  */
#line 3207 "y.tab.c"
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


#line 1015 "bello.y"



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
                //ifStmt->els = nullptr;
                //ifStmt->elif = nullptr;
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

                /* stmtStk.pop_back();

                auto ifStmtLst = static_cast<IfStmtStrc*>(stmtStk.back()->stmt);

                ifStmtLst->els = elsStmt->stmt;

                stmtStk.back()->blnScndStmt=1; */

                break;
            }
            case ELSEIF_STATEMENT:
            {
                auto elifStmt = static_cast<ElifStmtStrc*>(stmtStk.back()->stmt);
                elifStmt->stmt = blk;

                /* stmtStk.pop_back();

                auto ifStmtLst = static_cast<IfStmtStrc*>(stmtStk.back()->stmt);

                ifStmtLst->elif = blk;

                stmtStk.back()->blnScndStmt=1; */
                
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



