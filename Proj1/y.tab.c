
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 6 "cminus.y"


#define YYPARSER /* distinguishes Yacc output from other code files */

#include "globals.h"
#include "util.h"
#include "scan.h"
#include "parse.h"

#define YYSTYPE TreeNode *

static char * savedName;
static int savedLineNo;
static int savedNum;
static int errLine;

static YYSTYPE savedTree; /* stores syntax tree for later return */

extern int yychar;

int yyerror(char * message){
	fprintf(listing,"Syntax error at line %d: %s\n",lineno,message);
	fprintf(listing,"Current token: ");
	printToken(yychar,tokenString);
	return 0;
}

static int yylex(void){
	return getToken();
}

TreeNode * parse(void){ 
	yyparse();
	return savedTree;
}



/* Line 189 of yacc.c  */
#line 112 "y.tab.c"

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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IF = 258,
     ELSE = 259,
     INT = 260,
     RETURN = 261,
     VOID = 262,
     WHILE = 263,
     ASSIGN = 264,
     EQ = 265,
     LT = 266,
     LTEQ = 267,
     GT = 268,
     GTEQ = 269,
     NEQ = 270,
     PLUS = 271,
     MINUS = 272,
     TIMES = 273,
     OVER = 274,
     LPAREN = 275,
     RPAREN = 276,
     LSQ = 277,
     RSQ = 278,
     LCURLY = 279,
     RCURLY = 280,
     COMMA = 281,
     SEMI = 282,
     ID = 283,
     NUM = 284,
     ERROR = 285
   };
#endif
/* Tokens.  */
#define IF 258
#define ELSE 259
#define INT 260
#define RETURN 261
#define VOID 262
#define WHILE 263
#define ASSIGN 264
#define EQ 265
#define LT 266
#define LTEQ 267
#define GT 268
#define GTEQ 269
#define NEQ 270
#define PLUS 271
#define MINUS 272
#define TIMES 273
#define OVER 274
#define LPAREN 275
#define RPAREN 276
#define LSQ 277
#define RSQ 278
#define LCURLY 279
#define RCURLY 280
#define COMMA 281
#define SEMI 282
#define ID 283
#define NUM 284
#define ERROR 285




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 214 "y.tab.c"

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
# if YYENABLE_NLS
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

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  11
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   159

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  31
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  36
/* YYNRULES -- Number of rules.  */
#define YYNRULES  76
/* YYNRULES -- Number of states.  */
#define YYNSTATES  129

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   285

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
      25,    26,    27,    28,    29,    30
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     5,     8,    10,    12,    14,    15,    20,
      21,    26,    27,    28,    37,    39,    41,    42,    50,    51,
      59,    60,    62,    64,    67,    71,    73,    76,    77,    83,
      88,    89,    92,    93,    96,    98,   100,   102,   104,   106,
     109,   111,   117,   125,   131,   134,   137,   141,   144,   148,
     152,   154,   156,   157,   163,   167,   171,   175,   179,   183,
     187,   189,   193,   197,   199,   203,   207,   209,   213,   215,
     217,   219,   220,   226,   227,   229,   233
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      32,     0,    -1,    33,    -1,    33,    34,    -1,    34,    -1,
      35,    -1,    41,    -1,    -1,     1,    28,    36,    27,    -1,
      -1,    40,    28,    37,    27,    -1,    -1,    -1,    40,    28,
      38,    22,    29,    39,    23,    27,    -1,     5,    -1,     7,
      -1,    -1,     1,    28,    42,    20,    44,    21,    48,    -1,
      -1,    40,    28,    43,    20,    44,    21,    48,    -1,    -1,
      45,    -1,     7,    -1,    45,    46,    -1,    45,    26,    46,
      -1,    46,    -1,    40,    28,    -1,    -1,    40,    28,    47,
      22,    23,    -1,    24,    49,    50,    25,    -1,    -1,    49,
      35,    -1,    -1,    50,    51,    -1,    52,    -1,    48,    -1,
      53,    -1,    54,    -1,    55,    -1,    56,    27,    -1,    27,
      -1,     3,    20,    56,    21,    51,    -1,     3,    20,    56,
      21,    51,     4,    51,    -1,     8,    20,    56,    21,    51,
      -1,    28,    27,    -1,     6,     1,    -1,     6,    56,    30,
      -1,     6,    27,    -1,     6,    56,    27,    -1,    57,     9,
      56,    -1,    59,    -1,    28,    -1,    -1,    28,    58,    22,
      56,    23,    -1,    60,    11,    60,    -1,    60,    12,    60,
      -1,    60,    13,    60,    -1,    60,    14,    60,    -1,    60,
      10,    60,    -1,    60,    15,    60,    -1,    60,    -1,    60,
      16,    61,    -1,    60,    17,    61,    -1,    61,    -1,    61,
      18,    62,    -1,    61,    19,    62,    -1,    62,    -1,    20,
      56,    21,    -1,    57,    -1,    63,    -1,    29,    -1,    -1,
      28,    64,    20,    65,    21,    -1,    -1,    66,    -1,    66,
      26,    56,    -1,    56,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    59,    59,    65,    79,    82,    83,    87,    86,    99,
      98,   111,   116,   110,   138,   144,   153,   152,   168,   167,
     184,   188,   189,   197,   212,   226,   232,   239,   238,   253,
     261,   262,   278,   279,   295,   296,   297,   298,   299,   302,
     303,   309,   315,   324,   332,   337,   342,   348,   352,   359,
     365,   368,   374,   373,   386,   393,   400,   407,   414,   421,
     428,   434,   441,   448,   451,   459,   466,   469,   473,   474,
     475,   483,   482,   496,   497,   500,   514
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IF", "ELSE", "INT", "RETURN", "VOID",
  "WHILE", "ASSIGN", "EQ", "LT", "LTEQ", "GT", "GTEQ", "NEQ", "PLUS",
  "MINUS", "TIMES", "OVER", "LPAREN", "RPAREN", "LSQ", "RSQ", "LCURLY",
  "RCURLY", "COMMA", "SEMI", "ID", "NUM", "ERROR", "$accept", "program",
  "declaration_list", "declaration", "var_declaration", "$@1", "$@2",
  "$@3", "$@4", "type_specifier", "fun_declaration", "$@5", "$@6",
  "params", "param_list", "param", "$@7", "compound_stmt",
  "local_declarations", "statement_list", "statement", "expression_stmt",
  "selection_stmt", "iteration_stmt", "return_stmt", "expression", "var",
  "$@8", "simple_expression", "additive_expression", "term", "factor",
  "call", "$@9", "args", "arg_list", 0
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
     285
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    31,    32,    33,    33,    34,    34,    36,    35,    37,
      35,    38,    39,    35,    40,    40,    42,    41,    43,    41,
      44,    44,    44,    45,    45,    45,    46,    47,    46,    48,
      49,    49,    50,    50,    51,    51,    51,    51,    51,    52,
      52,    53,    53,    54,    55,    55,    55,    55,    55,    56,
      56,    57,    58,    57,    59,    59,    59,    59,    59,    59,
      59,    60,    60,    60,    61,    61,    61,    62,    62,    62,
      62,    64,    63,    65,    65,    66,    66
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     0,     4,     0,
       4,     0,     0,     8,     1,     1,     0,     7,     0,     7,
       0,     1,     1,     2,     3,     1,     2,     0,     5,     4,
       0,     2,     0,     2,     1,     1,     1,     1,     1,     2,
       1,     5,     7,     5,     2,     2,     3,     2,     3,     3,
       1,     1,     0,     5,     3,     3,     3,     3,     3,     3,
       1,     3,     3,     1,     3,     3,     1,     3,     1,     1,
       1,     0,     5,     0,     1,     3,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    14,    15,     0,     0,     4,     5,     0,     6,
       7,     1,     3,     9,     0,     0,     0,     0,     0,     8,
      20,    10,     0,    20,    15,     0,     0,    21,    25,    12,
       0,    26,     0,     0,    23,     0,     0,     0,    30,    17,
      24,     0,    19,     0,     0,    13,    28,     0,    31,     0,
       0,     7,     9,     0,     0,     0,     0,    29,    40,    51,
      70,    35,    33,    34,    36,    37,    38,     0,    68,    50,
      60,    63,    66,    69,     0,    45,    47,    51,     0,     0,
       0,    44,     0,     0,    39,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    48,    46,     0,
      67,     0,    73,    49,    68,    58,    54,    55,    56,    57,
      59,    61,    62,    64,    65,     0,     0,     0,    76,     0,
      74,    41,    43,    53,    72,     0,     0,    75,    42
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     4,     5,     6,     7,    14,    16,    17,    35,    25,
       9,    15,    18,    26,    27,    28,    37,    61,    44,    50,
      62,    63,    64,    65,    66,    67,    68,    82,    69,    70,
      71,    72,    73,    83,   119,   120
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -109
static const yytype_int8 yypact[] =
{
      68,   -24,  -109,  -109,    26,    39,  -109,  -109,    -7,  -109,
      10,  -109,  -109,     7,    49,    14,    87,    95,    98,  -109,
      47,  -109,    91,    47,   100,    96,   101,    -2,  -109,  -109,
     102,    97,   103,    99,  -109,   105,   103,   104,  -109,  -109,
    -109,   106,  -109,   107,     8,  -109,  -109,   108,  -109,   109,
      35,  -109,   110,   111,    22,   114,    37,  -109,  -109,   -10,
    -109,  -109,  -109,  -109,  -109,  -109,  -109,   112,   116,  -109,
      80,    90,  -109,  -109,    37,  -109,  -109,    85,    -8,    37,
     117,  -109,   113,   120,  -109,    37,    37,    37,    37,    37,
      37,    37,    37,    37,    37,    37,   121,  -109,  -109,   122,
    -109,    37,    37,  -109,  -109,    94,    94,    94,    94,    94,
      94,    90,    90,  -109,  -109,    50,    50,   118,  -109,   123,
     119,   125,  -109,  -109,  -109,    37,    50,  -109,  -109
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -109,  -109,  -109,   141,   115,  -109,  -109,  -109,  -109,     1,
    -109,  -109,  -109,   124,  -109,    34,  -109,    36,  -109,  -109,
    -108,  -109,  -109,  -109,  -109,   -54,    -6,  -109,  -109,    12,
      20,    21,  -109,  -109,  -109,  -109
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -72
static const yytype_int16 yytable[] =
{
      78,     8,    80,     2,    10,     3,     8,   121,   122,    47,
     -71,   -32,   -52,     2,   -32,     3,   -32,    81,   128,    97,
      96,    13,    98,    75,    33,    99,    11,   -18,   -32,   -11,
     -16,   103,   -32,   -32,    20,   -32,   -32,   -32,    53,    -2,
       1,    54,    56,    55,     2,    49,     3,   117,   118,    76,
      77,    60,     2,    53,    24,    56,    54,    56,    55,    38,
      57,    34,    58,    59,    60,    77,    60,    40,    39,     1,
      56,   127,    42,     2,    38,     3,    19,    58,    59,    60,
     104,   104,   104,   104,   104,   104,   104,   104,   104,   104,
      86,    87,    88,    89,    90,    91,    92,    93,   105,   106,
     107,   108,   109,   110,     2,   -71,     3,   -52,    94,    95,
      92,    93,   111,   112,    21,   113,   114,    22,    23,   -27,
      29,   -22,    32,    36,    31,    85,    43,    38,    41,   126,
      46,    74,   -11,    45,    79,   101,    51,    52,   100,    84,
     102,   123,   115,   116,   124,   125,    12,    30,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    48
};

static const yytype_int8 yycheck[] =
{
      54,     0,    56,     5,    28,     7,     5,   115,   116,     1,
      20,     3,    22,     5,     6,     7,     8,    27,   126,    27,
      74,    28,    30,     1,    26,    79,     0,    20,    20,    22,
      20,    85,    24,    25,    20,    27,    28,    29,     3,     0,
       1,     6,    20,     8,     5,    44,     7,   101,   102,    27,
      28,    29,     5,     3,     7,    20,     6,    20,     8,    24,
      25,    27,    27,    28,    29,    28,    29,    33,    32,     1,
      20,   125,    36,     5,    24,     7,    27,    27,    28,    29,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      10,    11,    12,    13,    14,    15,    16,    17,    86,    87,
      88,    89,    90,    91,     5,    20,     7,    22,    18,    19,
      16,    17,    92,    93,    27,    94,    95,    22,    20,    22,
      29,    21,    21,    21,    28,     9,    22,    24,    23,     4,
      23,    20,    22,    27,    20,    22,    28,    28,    21,    27,
      20,    23,    21,    21,    21,    26,     5,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     5,     7,    32,    33,    34,    35,    40,    41,
      28,     0,    34,    28,    36,    42,    37,    38,    43,    27,
      20,    27,    22,    20,     7,    40,    44,    45,    46,    29,
      44,    28,    21,    26,    46,    39,    21,    47,    24,    48,
      46,    23,    48,    22,    49,    27,    23,     1,    35,    40,
      50,    28,    28,     3,     6,     8,    20,    25,    27,    28,
      29,    48,    51,    52,    53,    54,    55,    56,    57,    59,
      60,    61,    62,    63,    20,     1,    27,    28,    56,    20,
      56,    27,    58,    64,    27,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    56,    27,    30,    56,
      21,    22,    20,    56,    57,    60,    60,    60,    60,    60,
      60,    61,    61,    62,    62,    21,    21,    56,    56,    65,
      66,    51,    51,    23,    21,    26,     4,    56,    51
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
# if YYLTYPE_IS_TRIVIAL
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


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

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

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

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
  if (yyn == YYPACT_NINF)
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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

/* Line 1455 of yacc.c  */
#line 60 "cminus.y"
    {
			   savedTree = (yyvsp[(1) - (1)]);
			}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 66 "cminus.y"
    {
			   YYSTYPE tree = (yyvsp[(1) - (2)]);
			   if(tree != NULL){
			      while(tree->sibling != NULL){
			         tree = tree->sibling;
			      }
			      tree->sibling = (yyvsp[(2) - (2)]);
			      (yyval) = (yyvsp[(1) - (2)]);
			   }
			   else{
			      (yyval) = (yyvsp[(2) - (2)]);
			   }
			}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 79 "cminus.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 82 "cminus.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 83 "cminus.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 87 "cminus.y"
    {
			   savedName = copyString(tokenString); //store the ID
                           savedLineNo = lineno;
			}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 92 "cminus.y"
    {
			   (yyval) = newDecNode(VarK);
                           (yyval)->attr.name = savedName; //store the ID
                           (yyval)->lineno = savedLineNo;
			   addErrMsg("VARIABLE TYPE NOT SPECIFIED (MUST BE INT)",lineno);   
			}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 99 "cminus.y"
    {
			   savedName = copyString(tokenString); //store the ID
			   savedLineNo = lineno;
			}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 104 "cminus.y"
    {
			   (yyval) = newDecNode(VarK);
                           (yyval)->child[0] = (yyvsp[(1) - (4)]);
                           (yyval)->attr.name = savedName; //store the ID
			   (yyval)->lineno = savedLineNo;
			}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 111 "cminus.y"
    {
			   savedName = copyString(tokenString); //store the ID
                           savedLineNo = lineno;
			}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 116 "cminus.y"
    {
			   // record the NUM
			   printf("Recording NUM : %s\n",tokenString);
			   savedNum = atoi(tokenString);
			   /*
			   $$ = newExpNode(ConstK);
			   $$ = attr.val = atoi(tokenString); 
			   */
			}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 126 "cminus.y"
    {
			   (yyval) = newDecNode(VarK);
                           (yyval)->child[0] = (yyvsp[(1) - (8)]);

			   /* child[1] will hold a "const" -- the size of the array */
			   (yyval)->child[1] = newExpNode(ConstK);
			   (yyval)->child[1]->attr.val = savedNum;
 
                           (yyval)->attr.name = savedName; //store the ID
			}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 139 "cminus.y"
    {
			   //create const node, assign it 1
			   (yyval) = newExpNode(ConstK);
			   (yyval)->attr.val = 1;
			}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 145 "cminus.y"
    {
			   //create const node, assign it 0
			   (yyval) = newExpNode(ConstK);
                           (yyval)->attr.val = 0;
			}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 153 "cminus.y"
    {
                           savedName = copyString(tokenString);
                           savedLineNo = lineno;
			   errLine = lineno;
                        }
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 159 "cminus.y"
    {
                           (yyval) = newDecNode(FunK);
                           (yyval)->child[1] = (yyvsp[(5) - (7)]);
                           (yyval)->child[2] = (yyvsp[(7) - (7)]);
                           (yyval)->attr.name = savedName;
                           (yyval)->lineno = lineno;
			   addErrMsg("FUNCTION DOES NOT HAVE A VALID RETURN TYPE",errLine);
                        }
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 168 "cminus.y"
    {
			   savedName = copyString(tokenString);
			   savedLineNo = lineno;
			}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 173 "cminus.y"
    {
			   (yyval) = newDecNode(FunK);
			   (yyval)->child[0] = (yyvsp[(1) - (7)]);
			   (yyval)->child[1] = (yyvsp[(5) - (7)]);
			   (yyval)->child[2] = (yyvsp[(7) - (7)]);
			   (yyval)->attr.name = savedName;
			   (yyval)->lineno = lineno;
			}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 184 "cminus.y"
    {
			   (yyval) = NULL;
			   addErrMsg("NO PARAMETERS SPECIFIED.",lineno);
			}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 188 "cminus.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 190 "cminus.y"
    {
                           //create const node, assign it 0
                           (yyval) = newExpNode(ConstK);
                           (yyval)->attr.val = 0;
                        }
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 198 "cminus.y"
    {
			   addErrMsg("EXPECTING ',' BETWEEN EACH SUBSEQUENT PARAMETER!",lineno);
                           TreeNode * tree = (yyvsp[(1) - (2)]);
                           if(tree != NULL){
                              while(tree->sibling != NULL){
                                 tree = tree->sibling;
                              }
                              tree->sibling = (yyvsp[(2) - (2)]);
                              (yyval) = (yyvsp[(1) - (2)]);
                           }
                           else{
                              (yyval) = (yyvsp[(2) - (2)]);
                           }
                        }
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 213 "cminus.y"
    {
			   TreeNode * tree = (yyvsp[(1) - (3)]);
			   if(tree != NULL){
			      while(tree->sibling != NULL){ 
                                 tree = tree->sibling;
                              }
                              tree->sibling = (yyvsp[(3) - (3)]); 
                              (yyval) = (yyvsp[(1) - (3)]); 
                           }
                           else{ 
                              (yyval) = (yyvsp[(3) - (3)]);
                           }
			}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 227 "cminus.y"
    {	
			   (yyval) = (yyvsp[(1) - (1)]);
			}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 233 "cminus.y"
    {
			   (yyval) = newDecNode(ParamK);
			   (yyval)->child[0] = (yyvsp[(1) - (2)]);
			   (yyval)->attr.name = copyString(tokenString);
			}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 239 "cminus.y"
    {
			   savedName = copyString(tokenString);
			   savedLineNo = lineno;
			}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 244 "cminus.y"
    {
			   printf("Matched an 'int ID[]'\n");
			   (yyval) = newDecNode(ParamK);
                           (yyval)->child[0] = (yyvsp[(1) - (5)]);
                           (yyval)->attr.name = savedName;
			   (yyval)->lineno = savedLineNo;
			}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 254 "cminus.y"
    {
			   (yyval) = newStmtNode(CmpdK);
			   (yyval)->child[0] = (yyvsp[(2) - (4)]);
			   (yyval)->child[1] = (yyvsp[(3) - (4)]);   
			}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 261 "cminus.y"
    { (yyval) = NULL; }
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 263 "cminus.y"
    {
		 	   YYSTYPE tree = (yyvsp[(1) - (2)]);
                           if(tree != NULL){ 
                              while(tree->sibling != NULL){
                                 tree = tree->sibling;
                              }
                              tree->sibling = (yyvsp[(2) - (2)]);
                              (yyval) = (yyvsp[(1) - (2)]);
                           }
                           else{  
                              (yyval) = (yyvsp[(2) - (2)]); 
                           }  
			}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 278 "cminus.y"
    { (yyval) = NULL; }
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 280 "cminus.y"
    {
			   YYSTYPE tree = (yyvsp[(1) - (2)]);
                           if(tree != NULL){
                              while(tree->sibling != NULL){ 
                                 tree = tree->sibling;
                              }
                              tree->sibling = (yyvsp[(2) - (2)]);
                              (yyval) = (yyvsp[(1) - (2)]);
                           }
                           else{  
                              (yyval) = (yyvsp[(2) - (2)]);
                           }
			}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 295 "cminus.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 296 "cminus.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 297 "cminus.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 298 "cminus.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 299 "cminus.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 302 "cminus.y"
    { (yyval) = (yyvsp[(1) - (2)]); }
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 304 "cminus.y"
    {
			   (yyval) = NULL; //??
			}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 310 "cminus.y"
    {
			   (yyval) = newStmtNode(IfK);
			   (yyval)->child[0] = (yyvsp[(3) - (5)]);
			   (yyval)->child[1] = (yyvsp[(5) - (5)]);
			}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 316 "cminus.y"
    {
			   (yyval) = newStmtNode(IfK);
			   (yyval)->child[0] = (yyvsp[(3) - (7)]);
			   (yyval)->child[1] = (yyvsp[(5) - (7)]);
			   (yyval)->child[2] = (yyvsp[(7) - (7)]);
			}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 325 "cminus.y"
    {
			   (yyval) = newStmtNode(WhileK);
			   (yyval)->child[0] = (yyvsp[(3) - (5)]);
			   (yyval)->child[1] = (yyvsp[(5) - (5)]);
			}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 333 "cminus.y"
    {
			   (yyval) = newStmtNode(ReturnK);
                           addErrMsg("EXPECTING KEYWORD 'RETURN'",lineno);
			}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 338 "cminus.y"
    {
			   (yyval) = newStmtNode(ReturnK);
			   addErrMsg("NEEDS ';' AFTER RETURN STATEMENT",lineno);
			}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 343 "cminus.y"
    {
			   (yyval) = newStmtNode(ReturnK);
                           (yyval)->child[0] = (yyvsp[(2) - (3)]);
			   addErrMsg("NEEDS ';' AFTER RETURN STATEMENT",lineno);
			}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 349 "cminus.y"
    {
			   (yyval) = newStmtNode(ReturnK);
			}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 353 "cminus.y"
    {
			   (yyval) = newStmtNode(ReturnK);
			   (yyval)->child[0] = (yyvsp[(2) - (3)]);
			}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 360 "cminus.y"
    {
			   (yyval) = newStmtNode(AssignK);
			   (yyval)->child[0] = (yyvsp[(1) - (3)]);
			   (yyval)->child[1] = (yyvsp[(3) - (3)]);
			}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 365 "cminus.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 369 "cminus.y"
    {
			   (yyval) = newExpNode(IdK);
			   (yyval)->attr.name = copyString(tokenString);
			}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 374 "cminus.y"
    {
			   savedName = copyString(tokenString); //store the ID
                           savedLineNo = lineno;  
			}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 379 "cminus.y"
    {
			   (yyval) = newExpNode(IdK);
			   (yyval)->attr.name = copyString(tokenString);
			   (yyval)->child[0] = (yyvsp[(3) - (5)]); 
			}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 387 "cminus.y"
    {
			   (yyval) = newExpNode(OpK);
			   (yyval)->child[0] = (yyvsp[(1) - (3)]);
			   (yyval)->child[1] = (yyvsp[(3) - (3)]);
			   (yyval)->attr.op = LT; 
			}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 394 "cminus.y"
    {
			   (yyval) = newExpNode(OpK);
                           (yyval)->child[0] = (yyvsp[(1) - (3)]);
                           (yyval)->child[1] = (yyvsp[(3) - (3)]);
                           (yyval)->attr.op = LTEQ;
			}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 401 "cminus.y"
    {
			   (yyval) = newExpNode(OpK);
                           (yyval)->child[0] = (yyvsp[(1) - (3)]);
                           (yyval)->child[1] = (yyvsp[(3) - (3)]);
                           (yyval)->attr.op = GT;
			}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 408 "cminus.y"
    {
			   (yyval) = newExpNode(OpK);
                           (yyval)->child[0] = (yyvsp[(1) - (3)]);
                           (yyval)->child[1] = (yyvsp[(3) - (3)]);
                           (yyval)->attr.op = GTEQ;
			}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 415 "cminus.y"
    {
			   (yyval) = newExpNode(OpK);
                           (yyval)->child[0] = (yyvsp[(1) - (3)]);
                           (yyval)->child[1] = (yyvsp[(3) - (3)]);
                           (yyval)->attr.op = EQ;
			}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 422 "cminus.y"
    {
			   (yyval) = newExpNode(OpK);
                           (yyval)->child[0] = (yyvsp[(1) - (3)]);
                           (yyval)->child[1] = (yyvsp[(3) - (3)]);
                           (yyval)->attr.op = NEQ;
			}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 429 "cminus.y"
    { 
			   (yyval) = (yyvsp[(1) - (1)]);
			}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 435 "cminus.y"
    {
			   (yyval) = newExpNode(OpK);
			   (yyval)->child[0] = (yyvsp[(1) - (3)]);
			   (yyval)->child[1] = (yyvsp[(3) - (3)]);
			   (yyval)->attr.op = PLUS;
			}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 442 "cminus.y"
    {
			   (yyval) = newExpNode(OpK);
			   (yyval)->child[0] = (yyvsp[(1) - (3)]);
			   (yyval)->child[1] = (yyvsp[(3) - (3)]);
			   (yyval)->attr.op = MINUS;
			}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 448 "cminus.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 452 "cminus.y"
    {
			   (yyval) = newExpNode(OpK);
			   (yyval)->child[0] = (yyvsp[(1) - (3)]);
			   (yyval)->child[1] = (yyvsp[(3) - (3)]);
			   (yyval)->attr.op = TIMES;

			}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 460 "cminus.y"
    {
			   (yyval) = newExpNode(OpK);
			   (yyval)->child[0] = (yyvsp[(1) - (3)]);
			   (yyval)->child[1] = (yyvsp[(3) - (3)]);
			   (yyval)->attr.op = OVER;
			}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 466 "cminus.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 470 "cminus.y"
    {
			   (yyval) = (yyvsp[(2) - (3)]); // ??
			}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 473 "cminus.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 474 "cminus.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 476 "cminus.y"
    {
			   (yyval) = newExpNode(ConstK);
			   (yyval)->attr.val = atoi(tokenString);
			}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 483 "cminus.y"
    {
			   savedName = copyString(tokenString);	
			   savedLineNo = lineno;
			}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 488 "cminus.y"
    {
			   (yyval) = newExpNode(CallK);
			   (yyval)->child[0] = (yyvsp[(3) - (5)]);
			   (yyval)->attr.name = savedName;
			   (yyval)->lineno = savedLineNo;
			}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 496 "cminus.y"
    { (yyval) = NULL; }
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 497 "cminus.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 501 "cminus.y"
    {
			   TreeNode * tree = (yyvsp[(1) - (3)]);
                           if(tree != NULL){ 
                              while(tree->sibling != NULL){
                                 tree = tree->sibling;
                              }
                              tree->sibling = (yyvsp[(3) - (3)]);
                              (yyval) = (yyvsp[(1) - (3)]);
                           }
                           else{
                              (yyval) = (yyvsp[(3) - (3)]);
                           }	
			}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 514 "cminus.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;



/* Line 1455 of yacc.c  */
#line 2330 "y.tab.c"
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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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



