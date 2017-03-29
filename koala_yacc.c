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
#line 2 "yacc/koala.y" /* yacc.c:339  */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "koala_includes.h"

int yyerror(const char *str);
int yylex(void);

extern int dim_count;


#line 80 "koala_yacc.c" /* yacc.c:339  */

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
   by #include "koala_yacc.h".  */
#ifndef YY_YY_KOALA_YACC_H_INCLUDED
# define YY_YY_KOALA_YACC_H_INCLUDED
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
    ELLIPSIS = 258,
    TYPELESS_ASSIGN = 259,
    ADD_ASSIGN = 260,
    SUB_ASSIGN = 261,
    MUL_ASSIGN = 262,
    DIV_ASSIGN = 263,
    MOD_ASSIGN = 264,
    AND_ASSIGN = 265,
    OR_ASSIGN = 266,
    XOR_ASSIGN = 267,
    RIGHT_SHIFT_ASSIGN = 268,
    LEFT_SHIFT_ASSIGN = 269,
    EQ = 270,
    NE = 271,
    GE = 272,
    LE = 273,
    AND = 274,
    OR = 275,
    NOT = 276,
    SHIFT_LEFT = 277,
    SHIFT_RIGHT = 278,
    INC = 279,
    DEC = 280,
    IF = 281,
    ELSE = 282,
    WHILE = 283,
    DO = 284,
    FOR = 285,
    IN = 286,
    SWITCH = 287,
    CASE = 288,
    BREAK = 289,
    FALLTHROUGH = 290,
    CONTINUE = 291,
    DEFAULT = 292,
    VAR = 293,
    FUNC = 294,
    RETURN = 295,
    STRUCT = 296,
    INTERFACE = 297,
    TYPE = 298,
    CONST = 299,
    PACKAGE = 300,
    IMPORT = 301,
    AS = 302,
    NEW = 303,
    FUNC_HEADER = 304,
    INT8 = 305,
    INT16 = 306,
    INT32 = 307,
    INT64 = 308,
    UINT8 = 309,
    UINT16 = 310,
    UINT32 = 311,
    UINT64 = 312,
    FLOAT32 = 313,
    FLOAT64 = 314,
    BOOL = 315,
    STRING = 316,
    ROOT_OBJECT = 317,
    DIMS = 318,
    SELF = 319,
    TOKEN_NIL = 320,
    TOKEN_TRUE = 321,
    TOKEN_FALSE = 322,
    INTEGER = 323,
    HEX = 324,
    OCT = 325,
    FLOAT = 326,
    STRING_LITERAL = 327,
    ID = 328
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 16 "yacc/koala.y" /* yacc.c:355  */

  string identifier;
  int type;
  char *ident;
  uint64 ival;
  float64 fval;
  string str_val;
  linked_list_t *linked_list;
  type_info_t *new_type_info;
  func_proto_type_t *func_proto_type;
  array_type_t *array_type;
  expr_t *expression;

#line 208 "koala_yacc.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_KOALA_YACC_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 225 "koala_yacc.c" /* yacc.c:358  */

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
#define YYFINAL  25
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1118

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  96
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  72
/* YYNRULES -- Number of rules.  */
#define YYNRULES  220
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  395

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   328

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    88,     2,     2,     2,    90,    93,     2,
      76,    75,    78,    85,    77,    86,    74,    89,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    80,
      91,    79,    92,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    83,     2,    84,    94,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    81,    95,    82,    87,     2,     2,     2,
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
      65,    66,    67,    68,    69,    70,    71,    72,    73
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   151,   151,   154,   160,   161,   165,   166,   170,   173,
     176,   180,   183,   186,   189,   192,   195,   198,   202,   205,
     208,   211,   214,   218,   224,   227,   233,   236,   237,   241,
     245,   246,   251,   252,   253,   254,   255,   256,   257,   261,
     265,   266,   270,   271,   272,   276,   277,   281,   282,   283,
     284,   292,   295,   301,   304,   307,   313,   318,   326,   330,
     331,   335,   336,   342,   343,   347,   348,   349,   353,   354,
     358,   359,   363,   364,   368,   372,   373,   374,   375,   376,
     377,   378,   379,   383,   384,   385,   386,   390,   391,   395,
     396,   400,   401,   407,   408,   409,   410,   414,   415,   416,
     417,   422,   425,   429,   430,   434,   435,   441,   445,   446,
     447,   448,   452,   455,   461,   462,   466,   467,   468,   472,
     476,   477,   478,   482,   483,   484,   488,   489,   493,   497,
     498,   499,   500,   501,   507,   508,   514,   515,   519,   522,
     524,   527,   528,   531,   532,   533,   534,   535,   536,   540,
     544,   547,   550,   553,   556,   562,   563,   567,   571,   572,
     576,   577,   578,   579,   580,   586,   587,   591,   592,   593,
     597,   600,   608,   616,   619,   622,   625,   631,   634,   637,
     640,   646,   649,   652,   658,   661,   664,   670,   673,   676,
     679,   682,   688,   691,   694,   700,   703,   709,   712,   718,
     721,   727,   730,   736,   739,   745,   751,   752,   756,   757,
     761,   762,   763,   764,   765,   766,   767,   768,   769,   770,
     771
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ELLIPSIS", "TYPELESS_ASSIGN",
  "ADD_ASSIGN", "SUB_ASSIGN", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN",
  "AND_ASSIGN", "OR_ASSIGN", "XOR_ASSIGN", "RIGHT_SHIFT_ASSIGN",
  "LEFT_SHIFT_ASSIGN", "EQ", "NE", "GE", "LE", "AND", "OR", "NOT",
  "SHIFT_LEFT", "SHIFT_RIGHT", "INC", "DEC", "IF", "ELSE", "WHILE", "DO",
  "FOR", "IN", "SWITCH", "CASE", "BREAK", "FALLTHROUGH", "CONTINUE",
  "DEFAULT", "VAR", "FUNC", "RETURN", "STRUCT", "INTERFACE", "TYPE",
  "CONST", "PACKAGE", "IMPORT", "AS", "NEW", "FUNC_HEADER", "INT8",
  "INT16", "INT32", "INT64", "UINT8", "UINT16", "UINT32", "UINT64",
  "FLOAT32", "FLOAT64", "BOOL", "STRING", "ROOT_OBJECT", "DIMS", "SELF",
  "TOKEN_NIL", "TOKEN_TRUE", "TOKEN_FALSE", "INTEGER", "HEX", "OCT",
  "FLOAT", "STRING_LITERAL", "ID", "'.'", "')'", "'('", "','", "'*'",
  "'='", "';'", "'{'", "'}'", "'['", "']'", "'+'", "'-'", "'~'", "'!'",
  "'/'", "'%'", "'<'", "'>'", "'&'", "'^'", "'|'", "$accept",
  "ModulePathName", "TypeNameList", "TypeName", "BaseType",
  "PrimitiveType", "ModuleType", "FunctionType", "ReturnTypeList",
  "Program", "PackageDeclaration", "ImportDeclarations",
  "ImportDeclaration", "Declarations", "Declaration", "ConstDeclaration",
  "VariableDeclaration", "VariableList", "VariableInitializerList",
  "VariableInitializer", "ArrayInitializerList", "SemiOrEmpty",
  "TypeDeclaration", "MemberDeclarations", "MemberDeclaration",
  "FieldDeclaration", "MethodDeclaration", "MethodDeclarationHeader1",
  "MethodDeclarationHeader2", "ParameterList",
  "InterfaceFunctionDeclarations", "InterfaceFunctionDeclaration",
  "FunctionDeclaration", "AnonymousFunctionDeclaration", "CodeBlock",
  "LocalVariableDeclarationsAndStatements",
  "LocalVariableDeclarationOrStatement", "Statement",
  "ExpressionStatement", "SelectionStatement", "IfStatement",
  "SwitchStatement", "IterationStatemnet", "ForInit", "ForExpr", "ForIncr",
  "JumpStatement", "ExpressionList", "PrimaryExpression", "Atom",
  "Literal", "DimExprs", "DimExpr", "TrailerList", "Trailer",
  "FunctionDeclarationList", "PostfixExpression", "UnaryExpression",
  "MultiplicativeExpression", "AdditiveExpression", "ShiftExpression",
  "RelationalExpression", "EqualityExpression", "AndExpression",
  "ExclusiveOrExpression", "InclusiveOrExpression", "LogicalAndExpression",
  "LogicalOrExpression", "Expression", "AssignmentExpression",
  "PostfixExpressionList", "CompoundOperator", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,    46,    41,    40,    44,    42,    61,
      59,   123,   125,    91,    93,    43,    45,   126,    33,    47,
      37,    60,    62,    38,    94,   124
};
# endif

#define YYPACT_NINF -294

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-294)))

#define YYTABLE_NINF -209

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      77,   -25,    -8,    -4,   -25,     8,     8,    26,   142,   142,
    -294,    90,  -294,  -294,  -294,  -294,  -294,  -294,   778,   -21,
     995,   808,  -294,   -35,    58,  -294,   142,    90,  -294,    90,
    -294,     9,  -294,  -294,  -294,  -294,  -294,  -294,  -294,  -294,
    -294,  -294,  -294,  -294,  -294,  1045,    25,    51,   489,    27,
    -294,  -294,  -294,  -294,    66,    32,    49,    74,   489,    61,
      86,  -294,  -294,   105,   -43,  -294,    90,   892,  -294,   126,
    -294,   669,   669,   146,  1045,  -294,  -294,  -294,  -294,  -294,
    -294,  -294,  -294,   669,   489,   669,   669,   669,   669,   669,
     167,   161,  -294,   129,  -294,  -294,    28,  -294,   743,  -294,
      37,  -294,   -38,   108,   232,     4,   243,   154,   166,   171,
     256,   231,  -294,   489,  -294,  1020,   272,    91,    -6,   -19,
    -294,     6,   489,  -294,   182,   182,   838,    99,  -294,  -294,
    -294,  -294,   138,   195,   205,     0,   199,  -294,  -294,  -294,
    -294,   124,  -294,   489,   211,   534,   669,    28,  -294,  1045,
     204,  -294,  -294,  -294,   669,   669,   669,   669,   669,   669,
     669,   669,   669,   669,   669,   669,   669,   669,   669,   669,
     669,   669,   206,  -294,  1020,   326,  -294,   209,  -294,   272,
     218,   219,   221,   865,   -10,  -294,  -294,  -294,   209,   222,
     223,   217,   220,    11,  -294,  -294,   128,  -294,  -294,  -294,
     838,  1020,   272,   137,   489,  -294,  -294,  -294,   226,  -294,
    -294,   225,   150,  -294,   214,  -294,   228,   489,  -294,  -294,
    -294,   -38,   -38,   108,   108,   232,   232,   232,   232,     4,
       4,   243,   154,   166,   171,   256,  -294,   151,   234,   238,
     209,   239,   242,   224,   227,   240,   579,  -294,  -294,  -294,
     391,  -294,  -294,   241,  -294,  -294,  -294,  -294,  -294,   139,
    -294,  -294,   140,  -294,   209,  -294,  1020,  1020,   260,   156,
     257,   182,  -294,  -294,   263,   918,  -294,  -294,   182,  -294,
    -294,  -294,  -294,   209,  -294,   272,    60,  -294,   280,  -294,
     669,  -294,   489,    85,  -294,   669,   669,   274,   444,   669,
    -294,  -294,  -294,  -294,   130,  -294,  -294,  -294,  -294,  -294,
    -294,  -294,  -294,  -294,  -294,  -294,  -294,  -294,  -294,   669,
     708,   669,  -294,  -294,   262,   157,   838,   158,  -294,  -294,
     944,   970,   159,  -294,  -294,   209,  -294,  -294,  -294,   -16,
    -294,    95,  -294,   265,   269,   270,  -294,  -294,   267,   624,
     288,  -294,  -294,    37,   290,  -294,   838,   162,  -294,   838,
     165,   838,  -294,  -294,  -294,  -294,   209,   209,   669,  -294,
    -294,   669,   289,   209,  -294,   838,  -294,   838,  -294,   322,
    -294,   293,  -294,   295,  -294,  -294,  -294,  -294,    -7,   291,
     209,  -294,  -294,  -294,  -294
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,    36,    37,
      40,    38,    45,    47,    48,    49,    50,    56,     0,     0,
       0,     0,     2,    63,    63,     1,    33,    34,    41,    35,
      46,     0,    15,    16,    17,    18,    11,    12,    13,    14,
      19,    20,    21,    22,    23,     0,    25,     0,     0,     0,
       6,     8,     9,    10,     0,     0,     0,     0,     0,     0,
       0,    64,    39,     0,     0,    42,    32,     0,     7,     0,
      57,     0,     0,     0,     0,   140,   152,   153,   154,   149,
     150,   151,   138,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    61,    58,   143,   167,   136,   139,     0,   155,
     170,   177,   181,   184,   187,   192,   195,   197,   199,   201,
     203,   205,    59,     0,    53,     0,     0,     0,     0,     0,
      67,     0,     0,     3,    63,    63,    27,     0,     4,    24,
     171,   172,     0,     0,     0,     0,     0,   173,   174,   175,
     176,     0,    54,     0,     0,     0,     0,   137,   158,     0,
     144,   156,   168,   169,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    87,     0,     0,    30,     0,    94,     0,
       0,     0,     0,     0,     0,    68,    70,    71,     0,     0,
       0,     0,     0,     0,    89,    51,     0,    43,    44,    26,
      29,     0,     0,     0,     0,   141,    60,   157,     0,    62,
     160,   163,     0,   134,     0,   159,   145,     0,   178,   179,
     180,   182,   183,   185,   186,   191,   190,   188,   189,   193,
     194,   196,   198,   200,   202,   204,    55,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   102,   105,   111,
       0,   103,   106,     0,   108,   114,   115,   109,   110,   170,
     112,   113,     0,    93,     0,    96,     0,     0,     0,     0,
       0,    63,    69,    74,     0,     0,    91,    92,    63,    90,
      52,    28,     5,     0,    98,     0,     0,   142,     0,   162,
       0,   161,     0,     0,    31,     0,     0,     0,     0,     0,
     129,   130,   131,   132,     0,   101,   104,   107,   220,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,     0,
       0,     0,    95,    88,     0,     0,    80,     0,    73,    65,
       0,    25,     0,    66,    97,     0,   100,   148,   165,     0,
     135,     0,   146,     0,     0,     0,   125,   124,     0,     0,
       0,   133,   207,   209,   206,    72,    76,     0,    79,    82,
       0,    86,    99,   164,   166,   147,     0,     0,     0,   123,
     127,     0,     0,     0,    75,    78,    81,    84,    85,   116,
     120,     0,   128,     0,   126,   119,    77,    83,     0,     0,
       0,   117,   118,   121,   122
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -294,   366,  -157,   -14,   -30,   -18,  -294,  -294,   -88,  -294,
    -294,   365,    15,    38,     7,  -294,  -163,   370,   282,   253,
     -47,   -15,  -294,  -294,   191,  -294,  -294,  -103,  -294,   -53,
    -294,   207,  -263,  -294,   -85,  -294,   153,  -294,  -293,  -294,
      13,  -294,  -294,  -294,  -294,  -294,  -294,  -232,  -294,  -294,
     264,  -294,   306,  -294,   259,  -294,  -162,   -29,   107,   110,
      40,   113,   251,   254,   255,   258,   261,  -294,   -75,  -294,
    -294,  -294
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    23,   127,   176,    50,    90,    52,    53,   177,     7,
       8,     9,    10,    11,    12,    13,    14,    18,    91,    92,
      93,    62,    15,   184,   185,   186,   187,   188,   192,   327,
     193,   194,    16,    94,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   349,   371,   383,   258,   212,    95,    96,
      97,    98,    99,   147,   148,   339,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   261,
     262,   319
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      51,   117,    51,    51,    49,   348,    57,    59,   134,    65,
     136,   121,   248,   259,   304,    68,   191,   237,    30,   238,
     189,   161,   162,     2,    28,   338,    25,    51,   181,   182,
     123,   178,   181,   182,    30,   125,    30,   135,   199,    60,
     154,    28,   130,   131,   133,    61,    27,    29,    17,    51,
     189,   155,   156,   128,   190,    54,    51,   137,   138,   139,
     140,   152,   153,   183,    66,    19,   363,   183,   150,    20,
     213,   214,   271,    30,   175,   196,   364,   143,   382,   203,
      51,    22,   206,   143,   190,    67,   195,   248,   259,   354,
     191,   264,   263,   278,   265,   163,   164,    51,    51,    69,
     260,   173,   144,   273,   145,    63,   113,   114,    51,   197,
     198,   146,   281,   118,   283,     1,     2,   284,   332,   216,
       3,     4,     5,     6,    70,   218,   219,   220,     1,     2,
     119,    51,    64,     3,     4,   347,   259,   143,    61,   115,
     122,   116,   337,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   120,   297,    51,   286,   353,   123,
     128,    51,   143,   152,   153,    51,   179,   342,   180,   270,
     293,   213,   143,   360,   200,   260,   201,   365,   124,   322,
       1,     2,    51,    51,    51,     3,     4,   282,     6,    76,
      77,    78,    79,   157,   158,    80,    81,   335,   334,   129,
     336,   225,   226,   227,   228,   143,   143,   290,   280,   259,
     351,   115,   285,   202,   180,   340,  -208,   320,  -208,   321,
     343,   344,   132,   260,   350,   289,   294,   290,   201,   115,
     115,   326,   356,   359,   361,   180,   201,   375,   358,   180,
     377,   142,   201,   141,   352,   341,   213,   167,    51,    51,
     362,   171,   323,   324,   159,   160,   329,    51,   165,   166,
     168,   128,    61,   333,   221,   222,   169,    51,   374,   223,
     224,   376,   357,   378,   372,   170,   204,   357,   229,   230,
     205,   379,   380,   207,   210,   217,   236,   386,   385,   387,
     175,   266,   267,   381,   268,   274,   260,   276,   291,   275,
     277,   287,   345,   391,   300,   394,   288,   301,    51,   292,
     295,    31,    51,    51,   296,   298,   128,   173,   299,     2,
     302,   307,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,   325,   328,    51,   330,
     366,    51,   355,    51,   367,    46,   368,   369,   174,   388,
      71,    72,   238,   175,   239,   240,   241,    51,   242,    51,
     243,   244,   245,   373,     1,    73,   246,   290,   389,   384,
     390,   393,    24,    26,    21,   272,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    74,
      75,    76,    77,    78,    79,   172,   209,    80,    81,    82,
     279,   392,    83,   306,   151,   208,   215,   175,   247,    85,
       0,    86,    87,    88,    89,    71,    72,   238,   231,   239,
     240,   241,   232,   242,   233,   243,   244,   245,   234,     1,
      73,   246,   235,     0,     0,     0,     0,     0,     0,     0,
       0,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    74,    75,    76,    77,    78,    79,
       0,     0,    80,    81,    82,     0,     0,    83,    71,    72,
       0,     0,   175,   305,    85,     0,    86,    87,    88,    89,
       0,     0,     1,    73,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    74,    75,    76,
      77,    78,    79,    71,    72,    80,    81,    82,     0,     0,
      83,     0,     0,     0,   346,     0,     0,    85,    73,    86,
      87,    88,    89,     0,     0,     0,     0,     0,     0,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    74,    75,    76,    77,    78,    79,    71,    72,
      80,    81,    82,     0,     0,    83,     0,     0,     0,     0,
      84,     0,    85,    73,    86,    87,    88,    89,     0,     0,
       0,     0,     0,     0,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    74,    75,    76,
      77,    78,    79,    71,    72,    80,    81,    82,     0,   211,
      83,     0,     0,     0,     0,     0,     0,    85,    73,    86,
      87,    88,    89,     0,     0,     0,     0,     0,     0,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    74,    75,    76,    77,    78,    79,    71,    72,
      80,    81,    82,     0,     0,    83,     0,     0,     0,   303,
       0,     0,    85,    73,    86,    87,    88,    89,     0,     0,
       0,     0,     0,     0,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    74,    75,    76,
      77,    78,    79,    71,    72,    80,    81,    82,     0,     0,
      83,     0,     0,     0,   370,     0,     0,    85,    73,    86,
      87,    88,    89,     0,     0,     0,     0,     0,     0,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    74,    75,    76,    77,    78,    79,     0,     0,
      80,    81,    82,     0,     0,    83,     0,    73,     0,     0,
       0,     0,    85,     0,    86,    87,    88,    89,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    74,    75,    76,    77,    78,    79,     0,     0,    80,
      81,    82,    31,     0,    83,     0,     0,     0,     0,     0,
       0,    85,     0,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,   149,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    46,    31,     0,     0,
       0,     0,     0,     0,     0,     0,    85,     0,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,     0,     0,     0,     0,     0,    31,     0,     0,
       0,    46,     0,     0,     0,    47,     0,    48,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,     0,     0,     0,     0,     0,    31,     0,     0,
       0,    46,     0,     0,     0,    47,     0,    58,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,     0,     0,    31,     0,     0,     0,     0,     0,
       0,    46,     0,     0,   174,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,     0,
       0,    31,     0,     0,     0,     0,     0,     0,    46,     0,
       0,   269,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,     0,    31,     0,     0,
       0,     0,     0,     0,     0,    46,     0,   126,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,     0,    31,     0,     0,     0,     0,     0,     0,
       0,   331,     0,   326,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,     0,    31,
       0,     0,     0,     0,     0,     0,     0,   331,     0,   356,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    31,     0,    55,    56,     0,     0,
       0,     0,     0,    46,    69,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    31,
       0,     0,     0,     0,     0,     0,     0,     0,    46,     0,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    31,     0,     0,     0,     0,     0,
       0,     0,     0,    46,     0,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    46
};

static const yytype_int16 yycheck[] =
{
      18,    54,    20,    21,    18,   298,    20,    21,    83,    24,
      85,    58,   175,   175,   246,    45,   119,   174,    11,    26,
      39,    17,    18,    39,     9,   288,     0,    45,    38,    39,
      73,   116,    38,    39,    27,    78,    29,    84,   126,    74,
      78,    26,    71,    72,    74,    80,     8,     9,    73,    67,
      39,    89,    90,    67,    73,    76,    74,    86,    87,    88,
      89,    24,    25,    73,    26,    73,    82,    73,    98,    73,
     145,   146,    82,    66,    81,   122,   339,    77,   371,   132,
      98,    73,    82,    77,    73,    76,    80,   250,   250,   321,
     193,   179,   177,    82,   179,    91,    92,   115,   116,    74,
     175,   115,    74,   188,    76,    47,    79,    80,   126,   124,
     125,    83,   200,    81,   202,    38,    39,   202,   275,   149,
      43,    44,    45,    46,    73,   154,   155,   156,    38,    39,
      81,   149,    74,    43,    44,   298,   298,    77,    80,    73,
      79,    75,    82,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    80,   240,   174,   204,   320,    73,
     174,   179,    77,    24,    25,   183,    75,    82,    77,   183,
     217,   246,    77,   330,    75,   250,    77,    82,    73,   264,
      38,    39,   200,   201,   202,    43,    44,   201,    46,    65,
      66,    67,    68,    85,    86,    71,    72,   285,   283,    73,
     285,   161,   162,   163,   164,    77,    77,    77,    80,   371,
      80,    73,    75,    75,    77,   290,    77,    77,    79,    79,
     295,   296,    76,   298,   299,    75,    75,    77,    77,    73,
      73,    75,    75,    75,    75,    77,    77,    75,   326,    77,
      75,    80,    77,    76,   319,   292,   321,    93,   266,   267,
     335,    20,   266,   267,    22,    23,   271,   275,    15,    16,
      94,   275,    80,   278,   157,   158,    95,   285,   356,   159,
     160,   359,   325,   361,   349,    19,    81,   330,   165,   166,
      75,   366,   367,    84,    73,    81,    80,   375,   373,   377,
      81,    73,    73,   368,    73,    73,   371,    80,    84,    76,
      80,    75,    28,   388,    80,   390,    81,    80,   326,    81,
      76,    39,   330,   331,    76,    76,   330,   331,    76,    39,
      80,    80,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    76,    80,   356,    76,
      75,   359,    80,   361,    75,    73,    76,    80,    76,    27,
      24,    25,    26,    81,    28,    29,    30,   375,    32,   377,
      34,    35,    36,    75,    38,    39,    40,    77,    75,    80,
      75,    80,     6,     8,     4,   184,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,   113,   143,    71,    72,    73,
     193,   388,    76,   250,    98,   141,   147,    81,    82,    83,
      -1,    85,    86,    87,    88,    24,    25,    26,   167,    28,
      29,    30,   168,    32,   169,    34,    35,    36,   170,    38,
      39,    40,   171,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      -1,    -1,    71,    72,    73,    -1,    -1,    76,    24,    25,
      -1,    -1,    81,    82,    83,    -1,    85,    86,    87,    88,
      -1,    -1,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    24,    25,    71,    72,    73,    -1,    -1,
      76,    -1,    -1,    -1,    80,    -1,    -1,    83,    39,    85,
      86,    87,    88,    -1,    -1,    -1,    -1,    -1,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    24,    25,
      71,    72,    73,    -1,    -1,    76,    -1,    -1,    -1,    -1,
      81,    -1,    83,    39,    85,    86,    87,    88,    -1,    -1,
      -1,    -1,    -1,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    24,    25,    71,    72,    73,    -1,    75,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    83,    39,    85,
      86,    87,    88,    -1,    -1,    -1,    -1,    -1,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    24,    25,
      71,    72,    73,    -1,    -1,    76,    -1,    -1,    -1,    80,
      -1,    -1,    83,    39,    85,    86,    87,    88,    -1,    -1,
      -1,    -1,    -1,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    24,    25,    71,    72,    73,    -1,    -1,
      76,    -1,    -1,    -1,    80,    -1,    -1,    83,    39,    85,
      86,    87,    88,    -1,    -1,    -1,    -1,    -1,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    -1,    -1,
      71,    72,    73,    -1,    -1,    76,    -1,    39,    -1,    -1,
      -1,    -1,    83,    -1,    85,    86,    87,    88,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    -1,    -1,    71,
      72,    73,    39,    -1,    76,    -1,    -1,    -1,    -1,    -1,
      -1,    83,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    73,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,
      -1,    73,    -1,    -1,    -1,    77,    -1,    79,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,
      -1,    73,    -1,    -1,    -1,    77,    -1,    79,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,
      -1,    73,    -1,    -1,    76,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    -1,
      -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    73,    -1,
      -1,    76,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    -1,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    73,    -1,    75,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    73,    -1,    75,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    -1,    39,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    -1,    75,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    39,    -1,    41,    42,    -1,    -1,
      -1,    -1,    -1,    73,    74,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    39,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    39,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    73,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    38,    39,    43,    44,    45,    46,   105,   106,   107,
     108,   109,   110,   111,   112,   118,   128,    73,   113,    73,
      73,   113,    73,    97,    97,     0,   107,   109,   108,   109,
     110,    39,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    73,    77,    79,    99,
     100,   101,   102,   103,    76,    41,    42,    99,    79,    99,
      74,    80,   117,    47,    74,   117,   109,    76,   100,    74,
      73,    24,    25,    39,    63,    64,    65,    66,    67,    68,
      71,    72,    73,    76,    81,    83,    85,    86,    87,    88,
     101,   114,   115,   116,   129,   144,   145,   146,   147,   148,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,    79,    80,    73,    75,   125,    81,    81,
      80,   116,    79,    73,    73,    78,    75,    98,    99,    73,
     153,   153,    76,   100,   164,   116,   164,   153,   153,   153,
     153,    76,    80,    77,    74,    76,    83,   149,   150,    63,
     100,   148,    24,    25,    78,    89,    90,    85,    86,    22,
      23,    17,    18,    91,    92,    15,    16,    93,    94,    95,
      19,    20,   114,    99,    76,    81,    99,   104,   130,    75,
      77,    38,    39,    73,   119,   120,   121,   122,   123,    39,
      73,   123,   124,   126,   127,    80,   116,   117,   117,   104,
      75,    77,    75,   125,    81,    75,    82,    84,   146,   115,
      73,    75,   143,   164,   164,   150,   100,    81,   153,   153,
     153,   154,   154,   155,   155,   156,   156,   156,   156,   157,
     157,   158,   159,   160,   161,   162,    80,    98,    26,    28,
      29,    30,    32,    34,    35,    36,    40,    82,   112,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   142,   152,
     164,   165,   166,   130,   104,   130,    73,    73,    73,    76,
      99,    82,   120,   130,    73,    76,    80,    80,    82,   127,
      80,   104,    99,   104,   130,    75,   116,    75,    81,    75,
      77,    84,    81,   116,    75,    76,    76,   130,    76,    76,
      80,    80,    80,    80,   143,    82,   132,    80,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,   167,
      77,    79,   130,    99,    99,    76,    75,   125,    80,   117,
      76,    73,    98,   117,   130,   104,   130,    82,   128,   151,
     164,   116,    82,   164,   164,    28,    80,   112,   134,   139,
     164,    80,   164,   152,   143,    80,    75,   125,   104,    75,
      98,    75,   130,    82,   128,    82,    75,    75,    76,    80,
      80,   140,   164,    75,   104,    75,   104,    75,   104,   130,
     130,   164,   134,   141,    80,   130,   104,   104,    27,    75,
      75,   130,   136,    80,   130
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    96,    97,    97,    98,    98,    99,    99,   100,   100,
     100,   101,   101,   101,   101,   101,   101,   101,   101,   101,
     101,   101,   101,   101,   102,   102,   103,   103,   103,   103,
     104,   104,   105,   105,   105,   105,   105,   105,   105,   106,
     107,   107,   108,   108,   108,   109,   109,   110,   110,   110,
     110,   111,   111,   112,   112,   112,   113,   113,   114,   115,
     115,   116,   116,   117,   117,   118,   118,   118,   119,   119,
     120,   120,   121,   121,   122,   123,   123,   123,   123,   123,
     123,   123,   123,   124,   124,   124,   124,   125,   125,   126,
     126,   127,   127,   128,   128,   128,   128,   129,   129,   129,
     129,   130,   130,   131,   131,   132,   132,   133,   133,   133,
     133,   133,   134,   134,   135,   135,   136,   136,   136,   137,
     138,   138,   138,   139,   139,   139,   140,   140,   141,   142,
     142,   142,   142,   142,   143,   143,   144,   144,   145,   145,
     145,   145,   145,   145,   145,   145,   145,   145,   145,   146,
     146,   146,   146,   146,   146,   147,   147,   148,   149,   149,
     150,   150,   150,   150,   150,   151,   151,   152,   152,   152,
     153,   153,   153,   153,   153,   153,   153,   154,   154,   154,
     154,   155,   155,   155,   156,   156,   156,   157,   157,   157,
     157,   157,   158,   158,   158,   159,   159,   160,   160,   161,
     161,   162,   162,   163,   163,   164,   165,   165,   166,   166,
     167,   167,   167,   167,   167,   167,   167,   167,   167,   167,
     167
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     3,     1,     3,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     4,     3,     5,     4,
       1,     3,     3,     2,     2,     2,     1,     1,     1,     3,
       1,     2,     3,     5,     5,     1,     2,     1,     1,     1,
       1,     5,     6,     4,     5,     6,     1,     3,     1,     1,
       3,     1,     3,     0,     1,     7,     7,     4,     1,     2,
       1,     1,     4,     3,     2,     5,     4,     6,     5,     4,
       3,     5,     4,     6,     5,     5,     4,     2,     4,     1,
       2,     2,     2,     6,     5,     7,     6,     5,     4,     6,
       5,     3,     2,     1,     2,     1,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     5,     7,     7,     5,
       5,     7,     7,     2,     1,     1,     2,     1,     1,     2,
       2,     2,     2,     3,     1,     3,     1,     2,     1,     1,
       1,     3,     4,     1,     2,     3,     5,     6,     5,     1,
       1,     1,     1,     1,     1,     1,     2,     3,     1,     2,
       2,     3,     3,     2,     5,     1,     2,     1,     2,     2,
       1,     2,     2,     2,     2,     2,     2,     1,     3,     3,
       3,     1,     3,     3,     1,     3,     3,     1,     3,     3,
       3,     3,     1,     3,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     3,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
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
#line 151 "yacc/koala.y" /* yacc.c:1661  */
    {
    //$$ = null;
  }
#line 1762 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 3:
#line 154 "yacc/koala.y" /* yacc.c:1661  */
    {
    //$$ = null;
  }
#line 1770 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 4:
#line 160 "yacc/koala.y" /* yacc.c:1661  */
    {}
#line 1776 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 5:
#line 161 "yacc/koala.y" /* yacc.c:1661  */
    {}
#line 1782 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 8:
#line 170 "yacc/koala.y" /* yacc.c:1661  */
    {
    //$$ = new_type_info($1, null);
  }
#line 1790 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 9:
#line 173 "yacc/koala.y" /* yacc.c:1661  */
    {

  }
#line 1798 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 10:
#line 176 "yacc/koala.y" /* yacc.c:1661  */
    {}
#line 1804 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 11:
#line 180 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.type) = TYPE_UINT8;
  }
#line 1812 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 12:
#line 183 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.type) = TYPE_UINT16;
  }
#line 1820 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 13:
#line 186 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.type) = TYPE_UINT32;
  }
#line 1828 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 14:
#line 189 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.type) = TYPE_UINT64;
  }
#line 1836 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 15:
#line 192 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.type) = TYPE_INT8;
  }
#line 1844 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 16:
#line 195 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.type) = TYPE_INT16;
  }
#line 1852 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 17:
#line 198 "yacc/koala.y" /* yacc.c:1661  */
    {
    printf("int32\n");
    (yyval.type) = TYPE_INT32;
  }
#line 1861 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 18:
#line 202 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.type) = TYPE_INT64;
  }
#line 1869 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 19:
#line 205 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.type) = TYPE_FLOAT32;
  }
#line 1877 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 20:
#line 208 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.type) = TYPE_FLOAT64;
  }
#line 1885 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 21:
#line 211 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.type) = TYPE_BOOL;
  }
#line 1893 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 22:
#line 214 "yacc/koala.y" /* yacc.c:1661  */
    {
    printf("string\n");
    (yyval.type) = TYPE_STRING;
  }
#line 1902 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 23:
#line 218 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.type) = TYPE_ROOT_OBJECT;
  }
#line 1910 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 24:
#line 224 "yacc/koala.y" /* yacc.c:1661  */
    {
    printf("Module:%s, TypeName:%s\n", (yyvsp[-2].identifier).val, (yyvsp[0].identifier).val);
  }
#line 1918 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 25:
#line 227 "yacc/koala.y" /* yacc.c:1661  */
    {
    printf("TypeName:%s\n", (yyvsp[0].identifier).val);
  }
#line 1926 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 26:
#line 233 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.func_proto_type) = new_func_proto_type(null, null);
  }
#line 1934 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 27:
#line 236 "yacc/koala.y" /* yacc.c:1661  */
    {}
#line 1940 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 28:
#line 237 "yacc/koala.y" /* yacc.c:1661  */
    {
    printf("FunctionType 3\n");
    (yyval.func_proto_type) = new_func_proto_type(null, null);
  }
#line 1949 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 29:
#line 241 "yacc/koala.y" /* yacc.c:1661  */
    {}
#line 1955 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 51:
#line 292 "yacc/koala.y" /* yacc.c:1661  */
    {

  }
#line 1963 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 52:
#line 295 "yacc/koala.y" /* yacc.c:1661  */
    {

  }
#line 1971 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 53:
#line 301 "yacc/koala.y" /* yacc.c:1661  */
    {
    //new_var_decl($2, $3, null);
  }
#line 1979 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 54:
#line 304 "yacc/koala.y" /* yacc.c:1661  */
    {

  }
#line 1987 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 55:
#line 307 "yacc/koala.y" /* yacc.c:1661  */
    {

  }
#line 1995 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 56:
#line 313 "yacc/koala.y" /* yacc.c:1661  */
    {
    printf("ID: %s\n", (yyvsp[0].identifier).val);
    (yyval.linked_list) = linked_list_new();
    linked_list_add_tail((yyval.linked_list), new_simple_var((yyvsp[0].identifier)));
  }
#line 2005 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 57:
#line 318 "yacc/koala.y" /* yacc.c:1661  */
    {
    printf("ID: %s\n", (yyvsp[0].identifier).val);
    (yyval.linked_list) = (yyvsp[-2].linked_list);
    linked_list_add_tail((yyval.linked_list), new_simple_var((yyvsp[0].identifier)));
  }
#line 2015 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 101:
#line 422 "yacc/koala.y" /* yacc.c:1661  */
    {
    printf("code block\n");
  }
#line 2023 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 106:
#line 435 "yacc/koala.y" /* yacc.c:1661  */
    {
    printf("----Statement\n");
  }
#line 2031 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 107:
#line 441 "yacc/koala.y" /* yacc.c:1661  */
    {
    //expr_tree_print($1);
    printf("----ExpressionStatement\n");
  }
#line 2040 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 112:
#line 452 "yacc/koala.y" /* yacc.c:1661  */
    {
    printf("----Expression\n");
  }
#line 2048 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 113:
#line 455 "yacc/koala.y" /* yacc.c:1661  */
    {
    printf("----AssignmentExpression\n");
  }
#line 2056 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 133:
#line 501 "yacc/koala.y" /* yacc.c:1661  */
    {
    printf("-----RETURN\n");
  }
#line 2064 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 136:
#line 514 "yacc/koala.y" /* yacc.c:1661  */
    {}
#line 2070 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 137:
#line 515 "yacc/koala.y" /* yacc.c:1661  */
    {}
#line 2076 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 138:
#line 519 "yacc/koala.y" /* yacc.c:1661  */
    {

  }
#line 2084 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 139:
#line 522 "yacc/koala.y" /* yacc.c:1661  */
    {
  }
#line 2091 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 140:
#line 524 "yacc/koala.y" /* yacc.c:1661  */
    {

  }
#line 2099 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 141:
#line 527 "yacc/koala.y" /* yacc.c:1661  */
    {}
#line 2105 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 142:
#line 528 "yacc/koala.y" /* yacc.c:1661  */
    {
    printf("complex_primary\n");
  }
#line 2113 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 143:
#line 531 "yacc/koala.y" /* yacc.c:1661  */
    {}
#line 2119 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 144:
#line 532 "yacc/koala.y" /* yacc.c:1661  */
    {}
#line 2125 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 145:
#line 533 "yacc/koala.y" /* yacc.c:1661  */
    {}
#line 2131 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 146:
#line 534 "yacc/koala.y" /* yacc.c:1661  */
    {}
#line 2137 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 147:
#line 535 "yacc/koala.y" /* yacc.c:1661  */
    {}
#line 2143 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 148:
#line 536 "yacc/koala.y" /* yacc.c:1661  */
    {}
#line 2149 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 149:
#line 540 "yacc/koala.y" /* yacc.c:1661  */
    {
    printf("INTEGER: %lld\n", (yyvsp[0].ival));
    (yyval.expression) = new_uint_expr((yyvsp[0].ival));
  }
#line 2158 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 150:
#line 544 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_float_expr((yyvsp[0].fval));
  }
#line 2166 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 151:
#line 547 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_string_expr((yyvsp[0].str_val));
  }
#line 2174 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 152:
#line 550 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = null;
  }
#line 2182 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 153:
#line 553 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_bool_expr(true);
  }
#line 2190 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 154:
#line 556 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_bool_expr(false);
  }
#line 2198 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 164:
#line 580 "yacc/koala.y" /* yacc.c:1661  */
    {
    printf("interface implementation\n");
  }
#line 2206 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 170:
#line 597 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2214 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 171:
#line 600 "yacc/koala.y" /* yacc.c:1661  */
    {
    if ((yyvsp[0].expression)->kind != EXP_VAR) {
      yyerror("error: rvalue required as increment operand\n");
      exit(-1);
    } else {
      (yyval.expression) = new_unary_exp(OP_INC_BEFORE, (yyvsp[0].expression));
    }
  }
#line 2227 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 172:
#line 608 "yacc/koala.y" /* yacc.c:1661  */
    {
    if ((yyvsp[0].expression)->kind != EXP_VAR) {
      yyerror("error: rvalue required as decrement operand\n");
      exit(-1);
    } else {
      (yyval.expression) = new_unary_exp(OP_DEC_BEFORE, (yyvsp[0].expression));
    }
  }
#line 2240 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 173:
#line 616 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2248 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 174:
#line 619 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_unary_exp(OP_MINUS, (yyvsp[0].expression));
  }
#line 2256 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 175:
#line 622 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_unary_exp(OP_BNOT, (yyvsp[0].expression));
  }
#line 2264 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 176:
#line 625 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_unary_exp(OP_LNOT, (yyvsp[0].expression));
  }
#line 2272 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 177:
#line 631 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2280 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 178:
#line 634 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_TIMES, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2288 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 179:
#line 637 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_DIVIDE, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2296 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 180:
#line 640 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_MOD, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2304 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 181:
#line 646 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2312 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 182:
#line 649 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_PLUS, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2320 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 183:
#line 652 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_MINUS, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2328 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 184:
#line 658 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2336 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 185:
#line 661 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_LSHIFT, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2344 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 186:
#line 664 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_RSHIFT, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2352 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 187:
#line 670 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2360 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 188:
#line 673 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_LT, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2368 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 189:
#line 676 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_GT, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2376 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 190:
#line 679 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_LE, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2384 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 191:
#line 682 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_GE, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2392 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 192:
#line 688 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2400 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 193:
#line 691 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_EQ, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2408 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 194:
#line 694 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_NEQ, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2416 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 195:
#line 700 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2424 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 196:
#line 703 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_BAND, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2432 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 197:
#line 709 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2440 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 198:
#line 712 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_BXOR, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2448 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 199:
#line 718 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2456 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 200:
#line 721 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_BOR, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2464 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 201:
#line 727 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2472 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 202:
#line 730 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_LAND, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2480 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 203:
#line 736 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2488 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 204:
#line 739 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_LOR, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2496 "koala_yacc.c" /* yacc.c:1661  */
    break;


#line 2500 "koala_yacc.c" /* yacc.c:1661  */
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
#line 776 "yacc/koala.y" /* yacc.c:1906  */

