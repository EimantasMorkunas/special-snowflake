/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "snowflake.ypp" /* yacc.c:339  */

    #include <stdio.h>
    #include <iostream>
    #include <map>
    #include <vector>
    #include "AST/includes.hpp"
    void yyerror (char *s);
    int yylex();
    using namespace std;
    map <string, vector<ParamStruct*>*> paramsOfFunctions;

#line 78 "snowflake.tab.cpp" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
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
   by #include "snowflake.tab.hpp".  */
#ifndef YY_YY_SNOWFLAKE_TAB_HPP_INCLUDED
# define YY_YY_SNOWFLAKE_TAB_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    IF = 258,
    ELSE = 259,
    LOOP = 260,
    FUNC = 261,
    OUT = 262,
    VAR = 263,
    INTEGER = 264,
    FLOAT = 265,
    CHAR = 266,
    STRING = 267,
    PLUS = 268,
    MINUS = 269,
    MULT = 270,
    DIV = 271,
    MOD = 272,
    EQ = 273,
    NOT_EQ = 274,
    LTE = 275,
    GTE = 276,
    AND = 277,
    OR = 278,
    RNG = 279,
    NOT_INIT = 280,
    ARRAY_INIT = 281,
    INT_NAME = 282,
    FLOAT_NAME = 283,
    CHAR_NAME = 284,
    STRING_NAME = 285,
    BOOLEAN = 286,
    LT = 287,
    GT = 288
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 14 "snowflake.ypp" /* yacc.c:355  */
 
    Node* node;
    Code* code;
    Function * function;
    Block* block;
    Statement* statement;
    Expression* expression;
    Assignment* assignment;
    AssignmentBasic* assignmentBasic;
    Identifier* identifier;
    Variable* variable;
    Integer* integer;
    Parameters* params;
    Parameter* param;
    TypeName* typeName;
    string* s;
	Loop* loop;
	Range* range;
	VarOrInteger* varOrInteger;
	Logical* logical;
	Evaluation* eval;
	Bool* bb;
	BooleanExp* booleanExp;
	Identifiers* identifiers;
	EvalGroup* evalGroup;
	EvalGroupSub* evalGroupSub;
	String* strVal;
	Char* charVal;
    FunctionCall* call;
    CallParameters* callParams;
    CallParameter* callParam;

#line 185 "snowflake.tab.cpp" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SNOWFLAKE_TAB_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 202 "snowflake.tab.cpp" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

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
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   140

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  80
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  133

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   288

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    38,     2,     2,
      44,    45,    36,    34,    41,    35,     2,    37,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    48,     2,
       2,    40,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    42,     2,    43,    39,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    46,     2,    47,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32,    33
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   114,   114,   117,   118,   120,   121,   124,   125,   128,
     129,   130,   131,   134,   135,   136,   137,   140,   141,   144,
     145,   148,   149,   150,   153,   154,   155,   156,   157,   160,
     161,   162,   165,   166,   169,   170,   173,   174,   177,   178,
     181,   182,   185,   186,   189,   192,   193,   196,   197,   198,
     199,   200,   201,   204,   205,   208,   209,   210,   211,   214,
     215,   218,   219,   222,   234,   235,   238,   239,   242,   243,
     246,   249,   250,   253,   254,   257,   258,   261,   262,   263,
     264
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IF", "ELSE", "LOOP", "FUNC", "OUT",
  "VAR", "INTEGER", "FLOAT", "CHAR", "STRING", "PLUS", "MINUS", "MULT",
  "DIV", "MOD", "EQ", "NOT_EQ", "LTE", "GTE", "AND", "OR", "RNG",
  "NOT_INIT", "ARRAY_INIT", "INT_NAME", "FLOAT_NAME", "CHAR_NAME",
  "STRING_NAME", "BOOLEAN", "LT", "GT", "'+'", "'-'", "'*'", "'/'", "'%'",
  "'^'", "'='", "','", "'['", "']'", "'('", "')'", "'{'", "'}'", "':'",
  "$accept", "start", "code", "statements", "block", "statement",
  "assignment", "array", "arrayExp", "exp", "operator", "logical", "loop",
  "range", "eval", "booleanExp", "logicalOperator", "identifiers",
  "evalGroup", "evalGroupSub", "comp", "number", "identifier",
  "varOrInteger", "bool", "func", "funcParamsSub", "funcParams",
  "funcParam", "funcCall", "funcCallParamsSub", "funcCallParams",
  "funcCallParam", "typeName", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,    43,    45,    42,    47,    37,    94,
      61,    44,    91,    93,    40,    41,   123,   125,    58
};
# endif

#define YYPACT_NINF -88

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-88)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
       5,    20,     6,     5,   -88,    -1,   -88,   -88,    84,   -88,
     -88,   -88,   -88,     4,    21,   -88,     9,    84,    41,    61,
     -88,   -88,    34,   -88,    24,    50,    23,    34,    27,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,    74,
     -88,    42,   -88,    58,   -88,   -88,   -88,    28,    32,    43,
      15,    64,    85,   -88,   -88,    53,    34,   -88,   -88,   -88,
     -88,   -88,   -88,    92,    92,   -88,   -88,    24,    64,    34,
      64,    92,   -88,    75,    93,   -88,   -88,    72,    92,   -88,
      76,    73,   -88,   -88,    77,   -88,    58,   -88,   -88,    79,
      95,    80,    78,    81,   -31,   112,   -88,   -88,   -88,   -88,
     -88,    10,    83,   -88,    85,   -88,   122,    92,    34,    64,
     -88,   -88,    92,   -88,    -2,   -88,    92,   -88,    92,   -88,
       0,   -88,    82,   -88,   -88,    86,   -88,    34,   -88,   -88,
     -88,    87,   -88
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     2,     3,     0,     1,     4,    67,    77,
      78,    79,    80,    66,     0,    64,     0,     0,     0,     0,
      68,    65,     8,    69,     0,     0,     0,     7,     0,     5,
       9,    10,    11,    12,    55,    53,    54,    57,    58,     0,
      39,     0,    61,     0,    38,    56,    42,    37,    55,     0,
       0,     0,    74,     6,    63,     0,     8,    51,    52,    49,
      50,    47,    48,     0,     0,    40,    41,     0,     0,     8,
       0,     0,    16,    13,    21,    59,    60,     0,     0,    75,
      73,     0,    71,    62,     0,    43,    46,    44,    36,     0,
      35,     0,     0,    20,     0,     0,    24,    25,    26,    27,
      28,     0,     0,    76,     0,    70,    31,     0,     8,     0,
      33,    17,     0,    18,     0,    14,     0,    22,     0,    72,
       0,    45,     0,    34,    19,     0,    15,     8,    30,    32,
      23,     0,    29
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -88,   -88,   -88,   -88,   -56,   101,    35,   -88,   -88,   -87,
     -88,    12,   -88,   -88,   -20,    94,   -88,   -63,   -88,    29,
      49,   -88,   -48,   -61,   -88,   134,   -88,   -88,   121,   -88,
     -88,   -88,    36,   -88
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     3,    27,    28,    29,    30,    72,    92,    73,
     101,    31,    32,    89,    41,    42,    67,    43,    44,    87,
      64,    45,    46,    77,    47,     4,    13,    14,    15,    33,
      80,    81,    82,    16
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      84,    86,    74,    24,    79,    49,     6,    90,    94,    93,
      63,     1,   113,    91,   117,    85,    19,    20,    34,    35,
      36,    37,    38,    34,    35,    36,    37,    38,     5,   125,
     103,   126,    34,    35,    36,    37,    38,    24,    50,    25,
      51,    70,    26,     8,    86,    17,   127,    88,   123,    39,
      65,    66,   122,    74,   116,    40,    79,    71,    48,    35,
      36,    37,    38,    50,   124,    51,    18,    52,    74,    23,
      74,   131,    75,    76,    54,    39,    57,    58,    59,    60,
      68,    40,    34,    35,    36,    37,    38,    22,    56,    69,
      61,    62,    78,    34,    35,    36,    37,    38,    83,    63,
      34,    35,    36,    37,    38,    40,    96,    97,    98,    99,
     100,     9,    10,    11,    12,   102,    95,   104,   105,   109,
     114,   111,   112,   118,   106,   108,   120,   110,    53,   129,
     115,   130,   128,    55,   132,   107,   121,     7,    21,     0,
     119
};

static const yytype_int8 yycheck[] =
{
      56,    64,    50,     3,    52,    25,     0,    68,    71,    70,
      41,     6,    43,    69,   101,    63,     7,     8,     8,     9,
      10,    11,    12,     8,     9,    10,    11,    12,     8,   116,
      78,   118,     8,     9,    10,    11,    12,     3,    40,     5,
      42,    26,     8,    44,   107,    41,    46,    67,   109,    25,
      22,    23,   108,   101,    44,    31,   104,    42,     8,     9,
      10,    11,    12,    40,   112,    42,    45,    44,   116,     8,
     118,   127,     8,     9,    47,    25,    18,    19,    20,    21,
      48,    31,     8,     9,    10,    11,    12,    46,    46,    46,
      32,    33,     7,     8,     9,    10,    11,    12,    45,    41,
       8,     9,    10,    11,    12,    31,    13,    14,    15,    16,
      17,    27,    28,    29,    30,    43,    41,    41,    45,    24,
       8,    43,    41,    40,    47,    46,     4,    47,    27,    47,
      95,    45,   120,    39,    47,    86,   107,     3,    17,    -1,
     104
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,    50,    51,    74,     8,     0,    74,    44,    27,
      28,    29,    30,    75,    76,    77,    82,    41,    45,     7,
       8,    77,    46,     8,     3,     5,     8,    52,    53,    54,
      55,    60,    61,    78,     8,     9,    10,    11,    12,    25,
      31,    63,    64,    66,    67,    70,    71,    73,     8,    63,
      40,    42,    44,    54,    47,    64,    46,    18,    19,    20,
      21,    32,    33,    41,    69,    22,    23,    65,    48,    46,
      26,    42,    56,    58,    71,     8,     9,    72,     7,    71,
      79,    80,    81,    45,    53,    71,    66,    68,    63,    62,
      72,    53,    57,    72,    66,    41,    13,    14,    15,    16,
      17,    59,    43,    71,    41,    45,    47,    69,    46,    24,
      47,    43,    41,    43,     8,    55,    44,    58,    40,    81,
       4,    68,    53,    72,    71,    58,    58,    46,    60,    47,
      45,    53,    47
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    49,    50,    51,    51,    52,    52,    53,    53,    54,
      54,    54,    54,    55,    55,    55,    55,    56,    56,    57,
      57,    58,    58,    58,    59,    59,    59,    59,    59,    60,
      60,    60,    61,    61,    62,    62,    63,    63,    64,    64,
      65,    65,    66,    66,    67,    68,    68,    69,    69,    69,
      69,    69,    69,    70,    70,    71,    71,    71,    71,    72,
      72,    73,    73,    74,    75,    75,    76,    76,    77,    77,
      78,    79,    79,    80,    80,    81,    81,    82,    82,    82,
      82
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     2,     1,     0,     1,
       1,     1,     1,     3,     5,     6,     3,     3,     3,     3,
       1,     1,     3,     5,     1,     1,     1,     1,     1,     9,
       7,     5,     7,     5,     3,     1,     3,     1,     1,     1,
       1,     1,     1,     3,     3,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     8,     1,     3,     1,     0,     2,     3,
       4,     1,     3,     1,     0,     1,     2,     1,     1,     1,
       1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
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

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

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
      yychar = yylex ();
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
        case 2:
#line 114 "snowflake.ypp" /* yacc.c:1646  */
    {(yyval.code) = (yyvsp[0].code); CodeGenContext *c = new CodeGenContext(&paramsOfFunctions); cout << (yyval.code)->genCode(c) << endl; delete c;}
#line 1382 "snowflake.tab.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 117 "snowflake.ypp" /* yacc.c:1646  */
    {cout << "code" << endl; (yyval.code) = new Code(); (yyval.code)->FunctionList.push_back((yyvsp[0].function));}
#line 1388 "snowflake.tab.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 118 "snowflake.ypp" /* yacc.c:1646  */
    {printf("func code\n"); (yyvsp[-1].code)->FunctionList.push_back((yyvsp[0].function));}
#line 1394 "snowflake.tab.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 120 "snowflake.ypp" /* yacc.c:1646  */
    {printf("statement\n"); (yyval.block) = new Block(); (yyval.block)->StatementList.push_back((yyvsp[0].statement));}
#line 1400 "snowflake.tab.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 121 "snowflake.ypp" /* yacc.c:1646  */
    {printf("statement statements\n"); (yyvsp[-1].block)->StatementList.push_back((yyvsp[0].statement));}
#line 1406 "snowflake.tab.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 124 "snowflake.ypp" /* yacc.c:1646  */
    {printf("block statements\n"); (yyval.block) = (yyvsp[0].block);}
#line 1412 "snowflake.tab.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 125 "snowflake.ypp" /* yacc.c:1646  */
    {(yyval.block) = new Block();}
#line 1418 "snowflake.tab.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 128 "snowflake.ypp" /* yacc.c:1646  */
    {printf("assignment\n");}
#line 1424 "snowflake.tab.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 129 "snowflake.ypp" /* yacc.c:1646  */
    {printf("logical\n");}
#line 1430 "snowflake.tab.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 130 "snowflake.ypp" /* yacc.c:1646  */
    {printf("loop\n");}
#line 1436 "snowflake.tab.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 131 "snowflake.ypp" /* yacc.c:1646  */
    {printf("funcCall in statement\n");}
#line 1442 "snowflake.tab.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 134 "snowflake.ypp" /* yacc.c:1646  */
    {printf("simple assignment\n"); (yyval.assignment) = new AssignmentBasic((yyvsp[-2].variable), (yyvsp[0].expression));}
#line 1448 "snowflake.tab.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 135 "snowflake.ypp" /* yacc.c:1646  */
    {printf("multiple assignemnts\n");}
#line 1454 "snowflake.tab.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 136 "snowflake.ypp" /* yacc.c:1646  */
    {printf("array element assignement\n");}
#line 1460 "snowflake.tab.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 137 "snowflake.ypp" /* yacc.c:1646  */
    {printf("array assignement\n");}
#line 1466 "snowflake.tab.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 140 "snowflake.ypp" /* yacc.c:1646  */
    {printf("array with special init\n");}
#line 1472 "snowflake.tab.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 141 "snowflake.ypp" /* yacc.c:1646  */
    {printf("array with standard init\n");}
#line 1478 "snowflake.tab.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 144 "snowflake.ypp" /* yacc.c:1646  */
    {printf("array init exp w/ default\n");}
#line 1484 "snowflake.tab.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 145 "snowflake.ypp" /* yacc.c:1646  */
    {printf("array init exp\n");}
#line 1490 "snowflake.tab.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 148 "snowflake.ypp" /* yacc.c:1646  */
    {printf("exp with ident\n"); (yyval.expression) = new ExpressionBasic((yyvsp[0].identifier));}
#line 1496 "snowflake.tab.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 149 "snowflake.ypp" /* yacc.c:1646  */
    {printf("exp with op and exp\n"); (yyval.expression) = new ExpressionOp((yyvsp[-2].identifier), (yyvsp[-1].s), (yyvsp[0].expression));}
#line 1502 "snowflake.tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 150 "snowflake.ypp" /* yacc.c:1646  */
    {printf("exp with op and (exp)\n"); (yyval.expression) = new ExpressionBrackets((yyvsp[-4].identifier), (yyvsp[-3].s), (yyvsp[-1].expression));}
#line 1508 "snowflake.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 153 "snowflake.ypp" /* yacc.c:1646  */
    {printf("+\n");}
#line 1514 "snowflake.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 154 "snowflake.ypp" /* yacc.c:1646  */
    {printf("-\n");}
#line 1520 "snowflake.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 155 "snowflake.ypp" /* yacc.c:1646  */
    {printf("*\n");}
#line 1526 "snowflake.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 156 "snowflake.ypp" /* yacc.c:1646  */
    {printf("/\n");}
#line 1532 "snowflake.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 157 "snowflake.ypp" /* yacc.c:1646  */
    {printf("%\n");}
#line 1538 "snowflake.tab.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 160 "snowflake.ypp" /* yacc.c:1646  */
    {printf("if with else\n"); (yyval.logical) = new Logical(1, (yyvsp[-7].eval), (yyvsp[-5].block), (yyvsp[-1].block), nullptr);}
#line 1544 "snowflake.tab.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 161 "snowflake.ypp" /* yacc.c:1646  */
    {printf("if with else if\n"); (yyval.logical) = new Logical(2, (yyvsp[-5].eval), (yyvsp[-3].block), nullptr, (yyvsp[0].logical));}
#line 1550 "snowflake.tab.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 162 "snowflake.ypp" /* yacc.c:1646  */
    {printf("if no else\n"); (yyval.logical) = new Logical(3, (yyvsp[-3].eval), (yyvsp[-1].block), nullptr, nullptr);}
#line 1556 "snowflake.tab.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 165 "snowflake.ypp" /* yacc.c:1646  */
    {printf("loop with range\n"); (yyval.loop) = new LoopFor((yyvsp[-5].variable), (yyvsp[-3].range), (yyvsp[-1].block));}
#line 1562 "snowflake.tab.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 166 "snowflake.ypp" /* yacc.c:1646  */
    {printf("loop with cond\n");}
#line 1568 "snowflake.tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 169 "snowflake.ypp" /* yacc.c:1646  */
    {printf("range from to\n"); (yyval.range) = new Range((yyvsp[-2].varOrInteger), (yyvsp[0].varOrInteger));}
#line 1574 "snowflake.tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 170 "snowflake.ypp" /* yacc.c:1646  */
    {printf("range to\n"); (yyval.range) = new Range(nullptr, (yyvsp[0].varOrInteger));}
#line 1580 "snowflake.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 173 "snowflake.ypp" /* yacc.c:1646  */
    {printf("joint eval\n"); (yyval.eval) = new Evaluation((yyvsp[-2].bb), (*(yyvsp[-1].s)), (yyvsp[0].eval));}
#line 1586 "snowflake.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 174 "snowflake.ypp" /* yacc.c:1646  */
    {printf("simple eval\n"); (yyval.eval) = new Evaluation((yyvsp[0].bb), "", nullptr);}
#line 1592 "snowflake.tab.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 177 "snowflake.ypp" /* yacc.c:1646  */
    {printf("evalGroupI in boolean exp\n"); (yyval.booleanExp) = new BooleanExp((yyvsp[0].evalGroup), "false");}
#line 1598 "snowflake.tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 178 "snowflake.ypp" /* yacc.c:1646  */
    {printf("BOOLEAN in bool exp\n"); (yyval.booleanExp) = new BooleanExp(nullptr, (*(yyvsp[0].s)));}
#line 1604 "snowflake.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 181 "snowflake.ypp" /* yacc.c:1646  */
    {printf("and\n"); (yyval.s) = (yyvsp[0].s);}
#line 1610 "snowflake.tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 182 "snowflake.ypp" /* yacc.c:1646  */
    {printf("or\n"); (yyval.s) = (yyvsp[0].s);}
#line 1616 "snowflake.tab.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 185 "snowflake.ypp" /* yacc.c:1646  */
    {printf("identifiers1\n"); (yyval.identifiers) = new Identifiers(); (yyval.identifiers)->IdentifierList.push_back((yyvsp[0].identifier));}
#line 1622 "snowflake.tab.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 186 "snowflake.ypp" /* yacc.c:1646  */
    {printf("identifiers2\n"); (yyvsp[-2].identifiers)->IdentifierList.push_back((yyvsp[0].identifier));}
#line 1628 "snowflake.tab.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 189 "snowflake.ypp" /* yacc.c:1646  */
    {printf("evalGroup\n"); (yyval.evalGroup) = new EvalGroup((yyvsp[-2].identifiers), (*(yyvsp[-1].s)), (yyvsp[0].evalGroupSub));}
#line 1634 "snowflake.tab.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 192 "snowflake.ypp" /* yacc.c:1646  */
    {printf("evalGroupSub1\n"); (yyval.evalGroupSub) = new EvalGroupSub((yyvsp[-2].identifiers), (*(yyvsp[-1].s)), (yyvsp[0].evalGroupSub));}
#line 1640 "snowflake.tab.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 193 "snowflake.ypp" /* yacc.c:1646  */
    {printf("evalGroupSub2\n"); (yyval.evalGroupSub) = new EvalGroupSub((yyvsp[0].identifiers), "", nullptr);}
#line 1646 "snowflake.tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 196 "snowflake.ypp" /* yacc.c:1646  */
    {printf("lt\n"); (yyval.s) = (yyvsp[0].s);}
#line 1652 "snowflake.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 197 "snowflake.ypp" /* yacc.c:1646  */
    {printf("gt\n"); (yyval.s) = (yyvsp[0].s);}
#line 1658 "snowflake.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 198 "snowflake.ypp" /* yacc.c:1646  */
    {printf("lte\n"); (yyval.s) = (yyvsp[0].s);}
#line 1664 "snowflake.tab.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 199 "snowflake.ypp" /* yacc.c:1646  */
    {printf("gte\n"); (yyval.s) = (yyvsp[0].s);}
#line 1670 "snowflake.tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 200 "snowflake.ypp" /* yacc.c:1646  */
    {printf("eq\n"); (yyval.s) = (yyvsp[0].s);}
#line 1676 "snowflake.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 201 "snowflake.ypp" /* yacc.c:1646  */
    {printf("noteq\n"); (yyval.s) = (yyvsp[0].s);}
#line 1682 "snowflake.tab.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 204 "snowflake.ypp" /* yacc.c:1646  */
    {printf("int in number\n"); }
#line 1688 "snowflake.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 205 "snowflake.ypp" /* yacc.c:1646  */
    {printf("float in number\n");}
#line 1694 "snowflake.tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 208 "snowflake.ypp" /* yacc.c:1646  */
    {printf("var ident\n"); (yyval.identifier) = new Variable(*(yyvsp[0].variable));}
#line 1700 "snowflake.tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 209 "snowflake.ypp" /* yacc.c:1646  */
    {printf("number ident\n"); }
#line 1706 "snowflake.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 210 "snowflake.ypp" /* yacc.c:1646  */
    {printf("char ident\n"); (yyval.identifier) = new Char(*(yyvsp[0].s));}
#line 1712 "snowflake.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 211 "snowflake.ypp" /* yacc.c:1646  */
    {printf("string ident\n"); (yyval.identifier) = new String(*(yyvsp[0].s));}
#line 1718 "snowflake.tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 214 "snowflake.ypp" /* yacc.c:1646  */
    {printf("funcCall\n"); (yyval.varOrInteger) = new VarOrInteger((yyvsp[0].variable), nullptr);}
#line 1724 "snowflake.tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 215 "snowflake.ypp" /* yacc.c:1646  */
    {printf("funcCall\n"); (yyval.varOrInteger) = new VarOrInteger(nullptr, (yyvsp[0].integer));}
#line 1730 "snowflake.tab.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 218 "snowflake.ypp" /* yacc.c:1646  */
    {printf("funcCall\n"); (yyval.bb) = new Bool((yyvsp[0].booleanExp), false);}
#line 1736 "snowflake.tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 219 "snowflake.ypp" /* yacc.c:1646  */
    {printf("funcCall\n"); (yyval.bb) = new Bool((yyvsp[-1].booleanExp), true);}
#line 1742 "snowflake.tab.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 222 "snowflake.ypp" /* yacc.c:1646  */
    {
                                                                printf("func\n");
                                                                (yyval.function) = new Function((yyvsp[-6].variable), (yyvsp[-4].params), (yyvsp[-1].block));
                                                                vector<ParamStruct*>* bs = new vector<ParamStruct*>();
                                                                for(vector<Parameter*>::iterator it = (yyvsp[-4].params)->ParameterList.begin(); it != (yyvsp[-4].params)->ParameterList.end(); ++it)
                                                                {
                                                                    bs->push_back(new ParamStruct(&((*it)->name->name), (*it)->type->name, (*it)->isOut));
                                                                }
                                                                paramsOfFunctions[(yyvsp[-6].variable)->name] = bs;
                                                            }
#line 1757 "snowflake.tab.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 234 "snowflake.ypp" /* yacc.c:1646  */
    {printf("funcParamsSub\n"); (yyval.params) = new Parameters(); (yyval.params)->ParameterList.push_back((yyvsp[0].param));}
#line 1763 "snowflake.tab.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 235 "snowflake.ypp" /* yacc.c:1646  */
    {printf("funcParamsSub multiple\n"); (yyvsp[-2].params)->ParameterList.push_back((yyvsp[0].param));}
#line 1769 "snowflake.tab.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 238 "snowflake.ypp" /* yacc.c:1646  */
    {printf("funcParams\n"); (yyval.params) = (yyvsp[0].params);}
#line 1775 "snowflake.tab.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 239 "snowflake.ypp" /* yacc.c:1646  */
    {(yyval.params) = new Parameters();}
#line 1781 "snowflake.tab.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 242 "snowflake.ypp" /* yacc.c:1646  */
    {printf("funcParam\n"); (yyval.param) = new Parameter((yyvsp[0].variable), (yyvsp[-1].typeName), false);}
#line 1787 "snowflake.tab.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 243 "snowflake.ypp" /* yacc.c:1646  */
    {printf("funcParam Out\n"); (yyval.param) = new Parameter((yyvsp[0].variable), (yyvsp[-2].typeName), true);}
#line 1793 "snowflake.tab.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 246 "snowflake.ypp" /* yacc.c:1646  */
    {printf("funcCall\n"); (yyval.call) = new FunctionCall((yyvsp[-3].variable), (yyvsp[-1].callParams));}
#line 1799 "snowflake.tab.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 249 "snowflake.ypp" /* yacc.c:1646  */
    {printf("funcCallParamsSub single\n"); (yyval.callParams) = new CallParameters(); (yyval.callParams)->CallParameterList.push_back((yyvsp[0].callParam));}
#line 1805 "snowflake.tab.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 250 "snowflake.ypp" /* yacc.c:1646  */
    {printf("funcCallParamsSub mass\n"); (yyvsp[-2].callParams)->CallParameterList.push_back((yyvsp[0].callParam));}
#line 1811 "snowflake.tab.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 253 "snowflake.ypp" /* yacc.c:1646  */
    {printf("funcCallParams\n"); (yyval.callParams) = (yyvsp[0].callParams);}
#line 1817 "snowflake.tab.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 254 "snowflake.ypp" /* yacc.c:1646  */
    {(yyval.callParams) = new CallParameters();}
#line 1823 "snowflake.tab.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 257 "snowflake.ypp" /* yacc.c:1646  */
    {printf("call param ident\n"); (yyval.callParam) = new CallParameter((yyvsp[0].identifier), false);}
#line 1829 "snowflake.tab.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 258 "snowflake.ypp" /* yacc.c:1646  */
    {printf("call param out ident\n"); (yyval.callParam) = new CallParameter((yyvsp[0].identifier), true);}
#line 1835 "snowflake.tab.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 261 "snowflake.ypp" /* yacc.c:1646  */
    {(yyval.typeName) = new TypeName((yyvsp[0].s));}
#line 1841 "snowflake.tab.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 262 "snowflake.ypp" /* yacc.c:1646  */
    {(yyval.typeName) = new TypeName((yyvsp[0].s));}
#line 1847 "snowflake.tab.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 263 "snowflake.ypp" /* yacc.c:1646  */
    {(yyval.typeName) = new TypeName((yyvsp[0].s));}
#line 1853 "snowflake.tab.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 264 "snowflake.ypp" /* yacc.c:1646  */
    {(yyval.typeName) = new TypeName((yyvsp[0].s));}
#line 1859 "snowflake.tab.cpp" /* yacc.c:1646  */
    break;


#line 1863 "snowflake.tab.cpp" /* yacc.c:1646  */
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

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
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
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 267 "snowflake.ypp" /* yacc.c:1906  */


void yyerror (char *s) {printf ("%s\n", s);}
