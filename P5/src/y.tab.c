/* A Bison parser, made by GNU Bison 3.4.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2019 Free Software Foundation,
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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "src/semantico.y"

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "semantico.h"

#define YYDEBUG 0

  int yylex();  // Para evitar warning al compilar
  void yyerror(const char * msg);

  

#line 84 "src/y.tab.c"

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

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_SRC_Y_TAB_H_INCLUDED
# define YY_YY_SRC_Y_TAB_H_INCLUDED
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
    PRINCIPAL = 258,
    INI_BLOQUE = 259,
    FIN_BLOQUE = 260,
    INI_VAR = 261,
    FIN_VAR = 262,
    INI_EXPR = 263,
    FIN_EXPR = 264,
    INI_TAM = 265,
    FIN_TAM = 266,
    PTCOMA = 267,
    COMA = 268,
    TIPO_BASICO = 269,
    CADENA = 270,
    CTE_CARACTER = 271,
    CTE_ENTERA = 272,
    CTE_LOGICA = 273,
    CTE_REAL = 274,
    SI = 275,
    SI_NO = 276,
    RETORNO = 277,
    ENTRADA = 278,
    SALIDA = 279,
    HACER = 280,
    HASTA = 281,
    CADENA2 = 282,
    OR = 283,
    AND = 284,
    XOR = 285,
    ASIG = 286,
    OPREL = 287,
    OPIGUAL = 288,
    SUMARESTA = 289,
    OPMUL = 290,
    OPUNARIO = 291
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SRC_Y_TAB_H_INCLUDED  */



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
typedef unsigned short yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short yytype_int16;
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
#  define YYSIZE_T unsigned
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

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
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


#define YY_ASSERT(E) ((void) (0 && (E)))

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   191

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  37
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  50
/* YYNRULES -- Number of rules.  */
#define YYNRULES  93
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  157

#define YYUNDEFTOK  2
#define YYMAXUTOK   291

/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  ((unsigned) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
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
      35,    36
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    51,    51,    51,    57,    58,    60,    57,    65,    68,
      73,    74,    77,    77,    80,    80,    83,    83,    84,    87,
      88,    87,    89,    91,    92,    96,    97,    95,    99,   102,
     102,   103,   103,   106,   107,   108,   109,   110,   111,   112,
     113,   117,   116,   128,   134,   142,   151,   151,   154,   154,
     154,   155,   158,   158,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   179,   180,
     181,   182,   183,   186,   187,   190,   193,   194,   197,   208,
     213,   218,   221,   230,   231,   234,   235,   236,   239,   242,
     247,   247,   248,   248
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PRINCIPAL", "INI_BLOQUE", "FIN_BLOQUE",
  "INI_VAR", "FIN_VAR", "INI_EXPR", "FIN_EXPR", "INI_TAM", "FIN_TAM",
  "PTCOMA", "COMA", "TIPO_BASICO", "CADENA", "CTE_CARACTER", "CTE_ENTERA",
  "CTE_LOGICA", "CTE_REAL", "SI", "SI_NO", "RETORNO", "ENTRADA", "SALIDA",
  "HACER", "HASTA", "CADENA2", "OR", "AND", "XOR", "ASIG", "OPREL",
  "OPIGUAL", "SUMARESTA", "OPMUL", "OPUNARIO", "$accept", "programa",
  "$@1", "bloque", "$@2", "$@3", "$@4", "interiorBloque", "dec_subprogs",
  "dec_subprog", "$@5", "cabe_subprog", "$@6", "cabe2", "$@7",
  "dec_var_loc", "$@8", "$@9", "var_loc", "cuerpo_dec_var", "$@10", "$@11",
  "sentencias", "$@12", "$@13", "sentencia", "sentencia_asig", "$@14",
  "sentencia_if", "sentencia_do_until", "sentencia_entrada", "$@15",
  "sentencia_salida", "$@16", "$@17", "sentencia_return", "@18",
  "expresion", "constante", "funcion", "const_matriz",
  "lista_identificador", "ident_array", "array_ident", "lista_parametros",
  "identificador", "num", "lista_expr", "$@19", "$@20", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291
};
# endif

#define YYPACT_NINF -92

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-92)))

#define YYTABLE_NINF -20

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -92,    17,    19,   -92,    34,   -92,   -92,   -92,    57,    62,
     -92,    69,   -92,     1,   -92,   -92,    64,   -92,   -92,    79,
      72,    12,   -92,   -92,    34,    72,   -92,    83,   129,   -92,
      66,    34,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
      70,    93,   -92,   -92,    11,   -92,    92,   -92,   -92,   129,
     -92,   129,   129,   -92,   -92,   -92,   -92,   129,   129,    90,
     -92,   -92,   -92,   -92,    29,     4,   100,   129,   116,   129,
     129,   -92,   -92,   -92,     7,    36,    90,    15,   122,   108,
     -92,   129,   129,   129,   129,   129,   129,   129,   141,    98,
     -92,    30,   -92,    95,   -92,    42,   150,   148,    39,     4,
     -92,     4,   -92,    22,    72,   -92,   -92,   129,   -92,   106,
     154,    76,    13,    43,   108,   -92,   -92,   -92,    27,   -92,
       4,   142,   -92,   129,   -92,   151,    77,   -92,   152,   -92,
     153,   143,    90,   -92,   -92,   -92,   160,   -92,   140,   -92,
     129,   -92,     4,   -92,     4,    72,   -92,   169,   -92,    61,
     -92,   -92,   -92,   142,   -92,   174,   -92
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     0,     1,     0,     4,     3,     5,    22,     0,
      11,     0,     6,    31,    20,     7,     0,    10,    12,    29,
       0,     0,    88,    14,     0,     0,    40,     0,     0,    46,
      48,     0,    33,    32,    34,    35,    36,    37,    38,    39,
       0,    82,    28,    25,     0,    24,     0,    13,    30,     0,
      67,     0,     0,    72,    68,    70,    71,     0,     0,    52,
      66,    65,    69,    55,    82,     0,     0,     0,     0,     0,
       0,    26,    21,    23,     0,     0,    92,     0,     0,    56,
      57,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      81,     0,    77,    78,    51,     0,     0,     0,     0,     0,
      18,     0,    15,     0,     0,    93,    75,     0,    54,    58,
      59,    60,    63,    61,    62,    64,    53,    74,     0,    47,
       0,     0,    49,     0,    41,    83,     0,    86,     0,    16,
       0,    43,    90,    73,    76,    89,     0,    50,     0,    42,
       0,    27,     0,    17,     0,     0,    91,    79,    45,     0,
      87,    85,    44,     0,    84,     0,    80
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -92,   -92,   -92,    10,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   118,
     -92,   -92,   -92,   -92,   -92,   -24,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -25,   -92,   -92,
     -92,    91,   -91,   -18,   -92,   -16,    38,   -59,   -92,   -92
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    32,     7,     8,    15,     9,    13,    17,
      24,    18,    46,   102,   143,    10,    11,    21,    44,    45,
      71,    99,    19,    25,    20,    33,    34,   139,    35,    36,
      37,    65,    38,    67,   137,    39,    88,    76,    60,    61,
      62,    91,    92,    63,   103,    64,   136,    77,   146,   105
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      23,    48,    40,    59,    41,    90,    -8,    40,    95,    41,
     127,    98,    42,    42,     6,    16,   100,     3,    72,    22,
     106,   101,     4,   128,    75,    43,    43,    78,   107,   134,
     118,   129,    79,    80,    47,   130,   133,    89,     5,    70,
     107,    68,   119,   120,    97,   104,    85,    86,    87,    93,
     125,   150,   107,   151,   122,   107,   109,   110,   111,   112,
     113,   114,   115,   -19,    81,    82,    83,    12,    84,    85,
      86,    87,   154,    26,   107,    14,     5,    86,    87,    22,
     131,   149,   132,    93,    -9,    93,    40,    22,    41,   141,
     120,    49,    27,    66,    28,    29,    30,    31,   138,    50,
      74,    69,    51,    70,    93,   121,    52,   117,    84,    85,
      86,    87,    94,    22,    53,    54,    55,    56,    81,    82,
      83,   152,    84,    85,    86,    87,    93,    40,    93,    41,
      50,   108,    57,    51,    58,    82,    83,    52,    84,    85,
      86,    87,    96,    87,    22,    53,    54,    55,    56,   148,
      81,    82,    83,   116,    84,    85,    86,    87,   123,   135,
     124,   140,    73,    57,   145,    58,   142,   144,    81,    82,
      83,   147,    84,    85,    86,    87,    81,    82,    83,   153,
      84,    85,    86,    87,    83,   156,    84,    85,    86,    87,
     126,   155
};

static const yytype_uint8 yycheck[] =
{
      16,    25,    20,    28,    20,     1,     5,    25,    67,    25,
     101,    70,     1,     1,     4,    14,     9,     0,     7,    15,
       5,    14,     3,     1,    49,    14,    14,    52,    13,   120,
      89,     9,    57,    58,    24,    13,     9,     8,     4,    10,
      13,    31,    12,    13,    69,     9,    33,    34,    35,    65,
      11,   142,    13,   144,    12,    13,    81,    82,    83,    84,
      85,    86,    87,     6,    28,    29,    30,     5,    32,    33,
      34,    35,    11,     1,    13,     6,     4,    34,    35,    15,
     104,   140,   107,    99,     5,   101,   104,    15,   104,    12,
      13,     8,    20,    27,    22,    23,    24,    25,   123,     1,
       8,    31,     4,    10,   120,    10,     8,     9,    32,    33,
      34,    35,    12,    15,    16,    17,    18,    19,    28,    29,
      30,   145,    32,    33,    34,    35,   142,   145,   144,   145,
       1,     9,    34,     4,    36,    29,    30,     8,    32,    33,
      34,    35,    26,    35,    15,    16,    17,    18,    19,     9,
      28,    29,    30,    12,    32,    33,    34,    35,     8,    17,
      12,    10,    44,    34,    21,    36,    14,    14,    28,    29,
      30,    11,    32,    33,    34,    35,    28,    29,    30,    10,
      32,    33,    34,    35,    30,    11,    32,    33,    34,    35,
      99,   153
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    38,    39,     0,     3,     4,    40,    41,    42,    44,
      52,    53,     5,    45,     6,    43,    14,    46,    48,    59,
      61,    54,    15,    82,    47,    60,     1,    20,    22,    23,
      24,    25,    40,    62,    63,    65,    66,    67,    69,    72,
      80,    82,     1,    14,    55,    56,    49,    40,    62,     8,
       1,     4,     8,    16,    17,    18,    19,    34,    36,    74,
      75,    76,    77,    80,    82,    68,    27,    70,    40,    31,
      10,    57,     7,    56,     8,    74,    74,    84,    74,    74,
      74,    28,    29,    30,    32,    33,    34,    35,    73,     8,
       1,    78,    79,    82,    12,    84,    26,    74,    84,    58,
       9,    14,    50,    81,     9,    86,     5,    13,     9,    74,
      74,    74,    74,    74,    74,    74,    12,     9,    84,    12,
      13,    10,    12,     8,    12,    11,    78,    79,     1,     9,
      13,    62,    74,     9,    79,    17,    83,    71,    74,    64,
      10,    12,    14,    51,    14,    21,    85,    11,     9,    84,
      79,    79,    62,    10,    11,    83,    11
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    37,    39,    38,    41,    42,    43,    40,    44,    44,
      45,    45,    47,    46,    49,    48,    51,    50,    50,    53,
      54,    52,    52,    55,    55,    57,    58,    56,    56,    60,
      59,    61,    59,    62,    62,    62,    62,    62,    62,    62,
      62,    64,    63,    65,    65,    66,    68,    67,    70,    71,
      69,    69,    73,    72,    74,    74,    74,    74,    74,    74,
      74,    74,    74,    74,    74,    74,    74,    74,    75,    75,
      75,    75,    75,    76,    76,    77,    78,    78,    79,    79,
      79,    79,    80,    80,    80,    81,    81,    81,    82,    83,
      85,    84,    86,    84
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     3,     0,     0,     0,     6,     2,     3,
       2,     0,     0,     3,     0,     5,     0,     3,     1,     0,
       0,     5,     0,     2,     1,     0,     0,     5,     1,     0,
       3,     0,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     5,     5,     7,     6,     0,     4,     0,     0,
       5,     3,     0,     4,     3,     1,     2,     2,     3,     3,
       3,     3,     3,     3,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     3,     3,     3,     1,     1,     4,
       7,     1,     1,     4,     7,     4,     2,     4,     1,     1,
       0,     4,     0,     2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
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
  unsigned long yylno = yyrline[yyrule];
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
                       &yyvsp[(yyi + 1) - (yynrhs)]
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
            else
              goto append;

          append:
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

  return (YYSIZE_T) (yystpcpy (yyres, yystr) - yyres);
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
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
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
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yynewstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  *yyssp = (yytype_int16) yystate;

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = (YYSIZE_T) (yyssp - yyss + 1);

# if defined yyoverflow
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
# else /* defined YYSTACK_RELOCATE */
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
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long) yystacksize));

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
  case 2:
#line 51 "src/semantico.y"
    { generaFich(); }
#line 1378 "src/y.tab.c"
    break;

  case 3:
#line 53 "src/semantico.y"
    { closeInter(); }
#line 1384 "src/y.tab.c"
    break;

  case 4:
#line 57 "src/semantico.y"
    {tsAddMark();}
#line 1390 "src/y.tab.c"
    break;

  case 5:
#line 58 "src/semantico.y"
    { fputs("{\n",file); }
#line 1396 "src/y.tab.c"
    break;

  case 6:
#line 60 "src/semantico.y"
    { fputs("}\n",file); }
#line 1402 "src/y.tab.c"
    break;

  case 7:
#line 61 "src/semantico.y"
    {tsCleanIn();}
#line 1408 "src/y.tab.c"
    break;

  case 12:
#line 77 "src/semantico.y"
    { subProg = 1;}
#line 1414 "src/y.tab.c"
    break;

  case 13:
#line 77 "src/semantico.y"
    { subProg = 0;}
#line 1420 "src/y.tab.c"
    break;

  case 14:
#line 80 "src/semantico.y"
    {decParam = 1; tsAddSubprog(yyvsp[0]);}
#line 1426 "src/y.tab.c"
    break;

  case 16:
#line 83 "src/semantico.y"
    { tsUpdateNparam(yyvsp[-1]); nParam = 0; decParam = 0; }
#line 1432 "src/y.tab.c"
    break;

  case 17:
#line 83 "src/semantico.y"
    {yyvsp[-2].nDim=0;}
#line 1438 "src/y.tab.c"
    break;

  case 19:
#line 87 "src/semantico.y"
    { varPrinc++;	}
#line 1444 "src/y.tab.c"
    break;

  case 20:
#line 88 "src/semantico.y"
    {decVar = 1;}
#line 1450 "src/y.tab.c"
    break;

  case 21:
#line 88 "src/semantico.y"
    {decVar = 0;}
#line 1456 "src/y.tab.c"
    break;

  case 25:
#line 96 "src/semantico.y"
    {tipoTMP = yyvsp[0].type;tipoArray = yyvsp[0].type;}
#line 1462 "src/y.tab.c"
    break;

  case 26:
#line 97 "src/semantico.y"
    {setType(yyvsp[-1]);}
#line 1468 "src/y.tab.c"
    break;

  case 29:
#line 102 "src/semantico.y"
    {decVar = 2;}
#line 1474 "src/y.tab.c"
    break;

  case 31:
#line 103 "src/semantico.y"
    {decVar = 2;}
#line 1480 "src/y.tab.c"
    break;

  case 41:
#line 117 "src/semantico.y"
    {
	  if(yyvsp[-3].type != yyvsp[-1].type){
	    printf("Error semántico(%d),los tipos no coinciden (%d) y (%d).\n",yylineno,yyvsp[-3].type,yyvsp[-1].type);
	  }
	  if(!equalSize(yyvsp[-3],yyvsp[-1])){
	    printf("Error semántico(%d),los tamaños no coinciden.\n",yylineno);
	  }
	}
#line 1493 "src/y.tab.c"
    break;

  case 42:
#line 125 "src/semantico.y"
    { generaAsignacion(yyvsp[-4],yyvsp[-3],yyvsp[-2]); }
#line 1499 "src/y.tab.c"
    break;

  case 43:
#line 129 "src/semantico.y"
    {
  	  if(yyvsp[-2].type != BOOLEANO){
    	    printf("Error semántico (%d),la expresión no es de tipo lógico.\n",yylineno);
  	  }
	}
#line 1509 "src/y.tab.c"
    break;

  case 44:
#line 135 "src/semantico.y"
    {
  	  if(yyvsp[-4].type != BOOLEANO){
    	    printf("Error semántico (%d),la expresión no es de tipo lógico.\n",yylineno);
  	  }
	}
#line 1519 "src/y.tab.c"
    break;

  case 45:
#line 143 "src/semantico.y"
    {
  if(yyvsp[-1].type != BOOLEANO){
    printf("Error semántico (%d),la expresión no es de tipo lógico.\n",yylineno);
  }
}
#line 1529 "src/y.tab.c"
    break;

  case 46:
#line 151 "src/semantico.y"
    {decEnt=1;}
#line 1535 "src/y.tab.c"
    break;

  case 47:
#line 151 "src/semantico.y"
    {decEnt=0;}
#line 1541 "src/y.tab.c"
    break;

  case 48:
#line 154 "src/semantico.y"
    {decSal=1;}
#line 1547 "src/y.tab.c"
    break;

  case 49:
#line 154 "src/semantico.y"
    {nParam = 0;}
#line 1553 "src/y.tab.c"
    break;

  case 50:
#line 154 "src/semantico.y"
    {decSal=0;}
#line 1559 "src/y.tab.c"
    break;

  case 51:
#line 155 "src/semantico.y"
    {generaEntSal(3,yyvsp[-1]);}
#line 1565 "src/y.tab.c"
    break;

  case 52:
#line 158 "src/semantico.y"
    { tsCheckReturn(yyvsp[0],&yyval);/* printTS();*/}
#line 1571 "src/y.tab.c"
    break;

  case 54:
#line 161 "src/semantico.y"
    { yyval.lex=yyvsp[-1].lex; yyval.type = yyvsp[-1].type; yyval.nDim = yyvsp[-1].nDim; yyval.tDim1 = yyvsp[-1].tDim1; yyval.tDim2 = yyvsp[-1].tDim2; }
#line 1577 "src/y.tab.c"
    break;

  case 55:
#line 162 "src/semantico.y"
    {decVar = 0;}
#line 1583 "src/y.tab.c"
    break;

  case 56:
#line 163 "src/semantico.y"
    {tsOpSign(yyvsp[-1], yyvsp[0], &yyval); }
#line 1589 "src/y.tab.c"
    break;

  case 57:
#line 164 "src/semantico.y"
    {tsOpUnary(yyvsp[-1], yyvsp[0], &yyval); }
#line 1595 "src/y.tab.c"
    break;

  case 58:
#line 165 "src/semantico.y"
    {tsOpOr(yyvsp[-2], yyvsp[-1], yyvsp[0], &yyval); }
#line 1601 "src/y.tab.c"
    break;

  case 59:
#line 166 "src/semantico.y"
    {tsOpAnd(yyvsp[-2], yyvsp[-1], yyvsp[0], &yyval); }
#line 1607 "src/y.tab.c"
    break;

  case 60:
#line 167 "src/semantico.y"
    {tsOpXor(yyvsp[-2], yyvsp[-1], yyvsp[0], &yyval); }
#line 1613 "src/y.tab.c"
    break;

  case 61:
#line 168 "src/semantico.y"
    {tsOpEqual(yyvsp[-2], yyvsp[-1], yyvsp[0], &yyval); }
#line 1619 "src/y.tab.c"
    break;

  case 62:
#line 169 "src/semantico.y"
    {tsOpSignBin(yyvsp[-2], yyvsp[-1], yyvsp[0], &yyval);  generaExpresion(yyvsp[-2],yyvsp[-1],yyvsp[0],&yyval); }
#line 1625 "src/y.tab.c"
    break;

  case 63:
#line 170 "src/semantico.y"
    {tsOpRel(yyvsp[-2], yyvsp[-1],yyvsp[0], &yyval); }
#line 1631 "src/y.tab.c"
    break;

  case 64:
#line 171 "src/semantico.y"
    {tsOpMul(yyvsp[-2],yyvsp[-1],yyvsp[0],&yyval); generaExpresion(yyvsp[-2],yyvsp[-1],yyvsp[0],&yyval); }
#line 1637 "src/y.tab.c"
    break;

  case 65:
#line 172 "src/semantico.y"
    {yyval.type = yyvsp[0].type; yyval.nDim = yyvsp[0].nDim; yyval.tDim1 = yyvsp[0].tDim1; yyval.tDim2 = yyvsp[0].tDim2; /*currentFunction = -1;*/}
#line 1643 "src/y.tab.c"
    break;

  case 66:
#line 173 "src/semantico.y"
    {yyval.type = yyvsp[0].type; yyval.nDim = yyvsp[0].nDim; yyval.tDim1 = yyvsp[0].tDim1; yyval.tDim2 = yyvsp[0].tDim2; }
#line 1649 "src/y.tab.c"
    break;

  case 68:
#line 179 "src/semantico.y"
    { yyval.type = ENTERO; yyval.nDim = 0; yyval.tDim1 = 0; yyval.tDim2 = 0; }
#line 1655 "src/y.tab.c"
    break;

  case 69:
#line 180 "src/semantico.y"
    { aux = 1; yyval.type = yyvsp[0].type; yyval.nDim = yyvsp[0].nDim; yyval.tDim1 = yyvsp[0].tDim1; yyval.tDim2 = yyvsp[0].tDim2; }
#line 1661 "src/y.tab.c"
    break;

  case 70:
#line 181 "src/semantico.y"
    { yyval.type = BOOLEANO; yyval.nDim = 0; yyval.tDim1 = 0; yyval.tDim2 = 0; }
#line 1667 "src/y.tab.c"
    break;

  case 71:
#line 182 "src/semantico.y"
    { yyval.type = REAL; yyval.nDim = 0; yyval.tDim1 = 0; yyval.tDim2 = 0; }
#line 1673 "src/y.tab.c"
    break;

  case 72:
#line 183 "src/semantico.y"
    { yyval.type = CARACTER; yyval.nDim = 0; yyval.tDim1 = 0; yyval.tDim2 = 0; }
#line 1679 "src/y.tab.c"
    break;

  case 73:
#line 186 "src/semantico.y"
    { tsFunctionCall(yyvsp[-3], &yyval); nParam = 0; }
#line 1685 "src/y.tab.c"
    break;

  case 74:
#line 187 "src/semantico.y"
    { tsFunctionCall(yyvsp[-2], &yyval); nParam = 0;}
#line 1691 "src/y.tab.c"
    break;

  case 75:
#line 190 "src/semantico.y"
    { yyval.type = yyvsp[-1].type; yyval.nDim = yyvsp[-1].nDim; yyval.tDim1 = yyvsp[-1].tDim1; yyval.tDim2 = yyvsp[-1].tDim2;}
#line 1697 "src/y.tab.c"
    break;

  case 78:
#line 197 "src/semantico.y"
    { if(decVar == 1){
				yyvsp[0].nDim=0; yyvsp[0].tDim1 = 0; yyvsp[0].tDim2 = 0; tsAddId(yyvsp[0]);
				{ generaDecVar(yyvsp[0]); }//CI
			      }
		             else{
				if(decParam == 0)
				   tsGetId(yyvsp[0], &yyval);
			     }
				//printf(" El tipo es (%d).\n",$1.type);
				if(decEnt == 1){tsGetId(yyvsp[0], &yyval); generaEntSal(1, yyval);}
			    }
#line 1713 "src/y.tab.c"
    break;

  case 79:
#line 208 "src/semantico.y"
    { if(decVar == 1) { yyvsp[-3].nDim=1; yyvsp[-3].tDim1=atoi(yyvsp[-1].lex); yyvsp[-3].tDim2=0; tsAddId(yyvsp[-3]);
	{ generaDecVar(yyvsp[-3]); }//CI
	 }
	if(decEnt == 1){tsGetId(yyvsp[-3], &yyval); generaEntSal(1, yyval);}
	}
#line 1723 "src/y.tab.c"
    break;

  case 80:
#line 213 "src/semantico.y"
    { if(decVar == 1) { yyvsp[-6].nDim=2; yyvsp[-6].tDim1=atoi(yyvsp[-4].lex); yyvsp[-6].tDim2=atoi(yyvsp[-1].lex); tsAddId(yyvsp[-6]);
	{ generaDecVar(yyvsp[-6]); }//CI
	 }
	if(decEnt == 1){tsGetId(yyvsp[-6], &yyval); generaEntSal(1, yyval);}
	}
#line 1733 "src/y.tab.c"
    break;

  case 82:
#line 221 "src/semantico.y"
    { if(decVar == 1){
				yyvsp[0].nDim=0; yyvsp[0].tDim1 = 0; yyvsp[0].tDim2 = 0; tsAddId(yyvsp[0]);
			      }
		             else{
				if(decParam == 0)
				   tsGetId(yyvsp[0], &yyval);
			     }
				//printf(" El tipo es (%d).\n",$1.type);
			    }
#line 1747 "src/y.tab.c"
    break;

  case 83:
#line 230 "src/semantico.y"
    { if(decVar == 2){ tsGetId(yyvsp[-3], &yyval); yyval.tDim1 = yyvsp[-1].tDim1; yyval.tDim2 = yyvsp[-1].tDim2; yyval.nDim = yyval.nDim -1; } }
#line 1753 "src/y.tab.c"
    break;

  case 84:
#line 231 "src/semantico.y"
    { if(decVar == 2){ tsGetId(yyvsp[-6], &yyval); yyval.tDim1 = yyvsp[-4].tDim1; yyval.tDim2 = yyvsp[-1].tDim2; yyval.nDim = yyval.nDim -2;} }
#line 1759 "src/y.tab.c"
    break;

  case 85:
#line 234 "src/semantico.y"
    { yyvsp[0].nDim=0; nParam++; setType(yyvsp[-1]); tsAddParam(yyvsp[0]); }
#line 1765 "src/y.tab.c"
    break;

  case 86:
#line 235 "src/semantico.y"
    { yyvsp[0].nDim=0; nParam++; setType(yyvsp[-1]); tsAddParam(yyvsp[0]); }
#line 1771 "src/y.tab.c"
    break;

  case 90:
#line 247 "src/semantico.y"
    { nParam++; tsCheckParam(yyvsp[(-1) - (3)],yyvsp[0], nParam); }
#line 1777 "src/y.tab.c"
    break;

  case 91:
#line 247 "src/semantico.y"
    {if(decSal == 1){generaEntSal(1,yyvsp[-3]);}}
#line 1783 "src/y.tab.c"
    break;

  case 92:
#line 248 "src/semantico.y"
    { nParam++; tsCheckParam(yyvsp[(-1) - (1)],yyvsp[0], nParam); }
#line 1789 "src/y.tab.c"
    break;

  case 93:
#line 248 "src/semantico.y"
    {if(decSal == 1){generaEntSal(1,yyvsp[-1]);}}
#line 1795 "src/y.tab.c"
    break;


#line 1799 "src/y.tab.c"

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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
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
#line 253 "src/semantico.y"



#include "lex.yy.c"

void yyerror(const char * msg) {
  printf("\n(Línea %d) %s\n", yylineno, msg);
}
