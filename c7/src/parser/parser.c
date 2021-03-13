/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser/c7.y"

    #include <stdlib.h>
    #include <stdio.h>
    #include "ast.h"

    int yylex();
    void yyerror(const char *s);

#line 79 "parser/parser.c"

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

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_PARSER_PARSER_H_INCLUDED
# define YY_YY_PARSER_PARSER_H_INCLUDED
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
    BRACK_LEFT = 258,
    BRACK_RIGHT = 259,
    PARENT_LEFT = 260,
    PARENT_RIGHT = 261,
    SEMICOLON = 262,
    ADD = 263,
    SUB = 264,
    MULT = 265,
    DIV = 266,
    CHAR = 267,
    COMMA = 268,
    ASSIGN = 269,
    READ = 270,
    WRITE = 271,
    WRITELN = 272,
    TYPE = 273,
    ID = 274,
    EMPTY = 275,
    STRING = 276,
    RETURN = 277,
    FORALL = 278,
    IN = 279,
    IS_SET = 280,
    ADD_SET = 281,
    REMOVE = 282,
    EXISTS = 283,
    INTEGER = 284,
    FLOAT = 285
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 17 "parser/c7.y"

    char op;
    char* str_value;
    int int_value;
    float float_value;

#line 169 "parser/parser.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_PARSER_H_INCLUDED  */



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
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
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
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   694

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  31
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  20
/* YYNRULES -- Number of rules.  */
#define YYNRULES  52
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  208

#define YYUNDEFTOK  2
#define YYMAXUTOK   285


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

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
      25,    26,    27,    28,    29,    30
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    34,    34,    37,    38,    41,    42,    45,    49,    52,
      53,    54,    57,    58,    59,    62,    63,    66,    70,    71,
      74,    76,    78,    80,    81,    83,    84,    85,    87,    91,
      94,    98,   100,   102,   104,   108,   109,   112,   113,   114,
     115,   116,   117,   120,   121,   122,   125,   126,   127,   130,
     131,   132,   133
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "BRACK_LEFT", "BRACK_RIGHT",
  "PARENT_LEFT", "PARENT_RIGHT", "SEMICOLON", "ADD", "SUB", "MULT", "DIV",
  "CHAR", "COMMA", "ASSIGN", "READ", "WRITE", "WRITELN", "TYPE", "ID",
  "EMPTY", "STRING", "RETURN", "FORALL", "IN", "IS_SET", "ADD_SET",
  "REMOVE", "EXISTS", "INTEGER", "FLOAT", "$accept", "program", "stmts",
  "stmt", "func_stmt", "var_decl_stmt", "param_list", "simple_param_list",
  "flex_comp_block_stmt", "comp_block_stmt", "block_stmts", "block_stmt",
  "set_expr", "func_call", "set_func_call", "simple_expr", "func_cte_expr",
  "arith_expr", "term", "factor", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285
};
# endif

#define YYPACT_NINF (-29)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-53)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      16,    35,    62,    10,    33,    39,    40,     0,   -29,    63,
     117,    68,    48,    -4,    29,    72,    83,   266,    69,    59,
     282,   111,    73,   100,   101,   113,   158,   102,   210,   177,
     178,   181,   183,   186,   298,   314,   180,   185,   201,   236,
     236,   214,    70,   210,   236,   226,   573,   247,   252,   638,
     643,   264,   265,   272,   273,    23,   648,   653,   248,   268,
     248,   248,   248,   330,   346,   284,   289,   290,   138,   154,
     296,   300,    -5,   362,     8,     8,     8,     8,   305,   288,
     313,   316,   321,   322,   328,   331,   336,   337,   332,   378,
     347,   658,    31,   663,   668,   673,   678,   683,   182,   236,
     352,   353,   360,   363,   394,   410,   426,   155,   442,   458,
     474,   369,   236,   370,   241,   377,   380,   386,   387,   397,
     402,   579,   585,   393,   409,   412,   156,   591,   597,   490,
     236,   384,   104,   399,   400,   429,   434,   435,   445,   146,
     165,   407,   423,   431,    87,   170,   203,    31,    31,    31,
     603,   266,   450,   217,    70,   444,   248,   248,   248,    31,
      31,   460,   564,    70,   452,   248,   248,   248,    36,    36,
      36,    36,   609,   615,   506,   466,   621,   189,   473,   476,
     481,   482,   627,   633,   471,   208,   190,   492,   497,   498,
     505,    31,   234,   543,   547,   551,   555,   522,   508,   513,
     514,   521,   524,   511,   512,   518,   519,   544
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     1,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -29,   -29,   -29,   566,   -29,    56,   -29,   -18,   -29,   448,
     425,   479,   -17,    54,    60,   -14,    94,   -20,   -22,   -28
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,     5,    34,    13,    69,   108,    18,
      20,    35,    78,   141,   142,    79,   143,   144,   145,   146
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      57,    91,    15,   147,   148,    10,    56,    11,    55,    16,
      -2,   128,   128,    92,    53,    57,   128,   127,   127,   126,
     126,    56,   127,    55,    72,    66,    67,    93,     1,    70,
     -35,    74,    75,    -4,     1,   -10,   149,    49,    50,    -5,
      -6,   191,   -10,    81,    82,    83,    57,    57,    96,    97,
     150,    -4,    94,    95,     7,   192,     6,    -5,    -6,     6,
     121,   122,     8,    -3,   128,   139,   140,    14,    -8,    -7,
     127,   128,    72,   -17,    36,    17,   -14,   127,    21,   126,
      37,    -3,    51,   -14,   128,   111,    -8,    -7,    52,    68,
     127,   -17,   153,   123,   123,   168,   169,    51,   123,   124,
     124,    19,   128,    52,   124,    38,    39,    42,   127,   163,
     162,   -35,   -51,   -51,   -51,   -51,    43,    -9,    40,   128,
     128,   128,    54,   -11,    -9,   172,   173,   127,   -51,   153,
     -11,   182,   183,   125,   125,    12,   177,    54,    71,   179,
     180,   181,   195,   196,   -13,   186,   193,   194,   188,   189,
     190,   -13,    36,   123,   -49,   -49,   -49,   -49,    37,   124,
      87,   -12,   -35,   128,   147,   148,   123,    88,   -12,   127,
     -49,   162,   124,   -50,   -50,   -50,   -50,    41,   -45,   -45,
     170,   171,    58,    59,   123,   151,    60,    63,    61,   -50,
     124,    62,    64,   125,   -45,   198,   203,    23,    24,    25,
      26,    27,    88,    88,    28,    29,   152,    30,    31,    32,
      33,   -48,   -48,   -48,   -48,    44,   -52,   -52,   -52,   -52,
      65,   129,    45,   176,   161,   147,   148,   -48,    36,    46,
      47,    48,   -52,   -39,    37,    30,    31,    32,    33,    49,
      50,   112,   -51,   -51,   -51,   -51,   154,   -51,   113,   -51,
     -51,   -51,   -51,   130,   -37,   114,   115,   116,   -51,   -38,
     131,   117,   118,   119,   120,   121,   122,   132,   133,   134,
     -19,   -40,   -41,   135,   136,   137,   138,   139,   140,    73,
     -36,   -19,   -19,   -19,   -19,   -19,    22,    80,   -19,   -19,
      84,   -19,   -19,   -19,   -19,    85,    86,    23,    24,    25,
      26,    27,   -23,    89,    28,    29,    90,    30,    31,    32,
      33,    98,    99,   -23,   -23,   -23,   -23,   -23,   -18,   100,
     -23,   -23,   101,   -23,   -23,   -23,   -23,   102,   103,   -18,
     -18,   -18,   -18,   -18,   -25,   104,   -18,   -18,   105,   -18,
     -18,   -18,   -18,   106,   -30,   -25,   -25,   -25,   -25,   -25,
     -28,   107,   -25,   -25,   -42,   -25,   -25,   -25,   -25,   -31,
     -32,   -28,   -28,   -28,   -28,   -28,   -26,   -33,   -28,   -28,
     -34,   -28,   -28,   -28,   -28,   -29,   -39,   -26,   -26,   -26,
     -26,   -26,   -24,   -37,   -26,   -26,   -38,   -26,   -26,   -26,
     -26,   155,   156,   -24,   -24,   -24,   -24,   -24,   -20,   -40,
     -24,   -24,   157,   -24,   -24,   -24,   -24,   158,   -39,   -20,
     -20,   -20,   -20,   -20,   -21,   -41,   -20,   -20,   -36,   -20,
     -20,   -20,   -20,   -37,   -38,   -21,   -21,   -21,   -21,   -21,
     -22,   -40,   -21,   -21,   164,   -21,   -21,   -21,   -21,   165,
     166,   -22,   -22,   -22,   -22,   -22,   -27,   -41,   -22,   -22,
     167,   -22,   -22,   -22,   -22,   -36,   175,   -27,   -27,   -27,
     -27,   -27,   -15,   178,   -27,   -27,   184,   -27,   -27,   -27,
     -27,   187,   -42,   -15,   -15,   -15,   -15,   -15,   -16,   199,
     -15,   -15,   200,   -15,   -15,   -15,   -15,   201,   202,   -16,
     -16,   -16,   -16,   -16,    -8,   -42,   -16,   -16,   204,   -16,
     -16,   -16,   -16,   205,   206,    -8,    -8,    -8,    -8,    -8,
     197,   207,    -8,    -8,   -30,    -8,    -8,    -8,    -8,   -31,
     -32,    23,    24,    25,    26,    27,   -17,   -33,    28,    29,
     -34,    30,    31,    32,    33,   -30,   -31,   -17,   -17,   -17,
     -17,   -17,   -32,   -33,   -17,   -17,   109,   -17,   -17,   -17,
     -17,   -43,   -43,   170,   171,   -44,   -44,   170,   171,   -46,
     -46,   -46,   -46,   -47,   -47,   -47,   -47,   -43,   -34,     9,
     185,   -44,   147,   148,     0,   -46,   174,   110,    42,   -47,
     -51,   -51,   -51,   -51,   -51,   -49,     0,   -49,   -49,   -49,
     -49,   -50,     0,   -50,   -50,   -50,   -50,   -45,     0,   -45,
     -45,   159,   160,   -48,     0,   -48,   -48,   -48,   -48,   -51,
       0,   -51,   -51,   -51,   -51,   -43,     0,   -43,   -43,   159,
     160,   -44,     0,   -44,   -44,   159,   160,   -52,     0,   -52,
     -52,   -52,   -52,   -46,     0,   -46,   -46,   -46,   -46,   -47,
       0,   -47,   -47,   -47,   -47,   -49,   -49,   -49,   -49,   -49,
     -50,   -50,   -50,   -50,   -50,   -45,   -45,   -45,    76,    77,
     -48,   -48,   -48,   -48,   -48,   -52,   -52,   -52,   -52,   -52,
     -51,   -51,   -51,   -51,   -51,   -43,   -43,   -43,    76,    77,
     -44,   -44,   -44,    76,    77,   -46,   -46,   -46,   -46,   -46,
     -47,   -47,   -47,   -47,   -47
};

static const yytype_int16 yycheck[] =
{
      28,     6,     6,     8,     9,     5,    28,     7,    28,    13,
       0,    39,    40,     5,    28,    43,    44,    39,    40,    39,
      40,    43,    44,    43,    44,    39,    40,    19,    18,    43,
       7,     8,     9,     0,    18,     6,     5,    29,    30,     0,
       0,     5,    13,    60,    61,    62,    74,    75,    76,    77,
      19,    18,    74,    75,    19,    19,     0,    18,    18,     3,
      29,    30,     0,     0,    92,    29,    30,    19,     0,     0,
      92,    99,    92,     0,    20,     3,     6,    99,    19,    99,
      20,    18,    28,    13,   112,    99,    18,    18,    28,    19,
     112,    18,   112,    39,    40,     8,     9,    43,    44,    39,
      40,    18,   130,    43,    44,     5,     5,     5,   130,     5,
     130,    24,     8,     9,    10,    11,    14,     6,     5,   147,
     148,   149,    28,     6,    13,   147,   148,   149,    24,   149,
      13,   159,   160,    39,    40,    18,   154,    43,    44,   156,
     157,   158,   170,   171,     6,   163,   168,   169,   165,   166,
     167,    13,    98,    99,     8,     9,    10,    11,    98,    99,
       6,     6,     6,   191,     8,     9,   112,    13,    13,   191,
      24,   191,   112,     8,     9,    10,    11,    19,     8,     9,
      10,    11,     5,     5,   130,     3,     5,     7,     5,    24,
     130,     5,     7,    99,    24,     6,     6,    15,    16,    17,
      18,    19,    13,    13,    22,    23,   112,    25,    26,    27,
      28,     8,     9,    10,    11,     5,     8,     9,    10,    11,
      19,     7,    12,     6,   130,     8,     9,    24,   174,    19,
      20,    21,    24,     7,   174,    25,    26,    27,    28,    29,
      30,     5,     8,     9,    10,    11,     5,     6,    12,     8,
       9,    10,    11,     5,     7,    19,    20,    21,    24,     7,
      12,    25,    26,    27,    28,    29,    30,    19,    20,    21,
       4,     7,     7,    25,    26,    27,    28,    29,    30,     7,
       7,    15,    16,    17,    18,    19,     4,    19,    22,    23,
       6,    25,    26,    27,    28,     6,     6,    15,    16,    17,
      18,    19,     4,     7,    22,    23,     6,    25,    26,    27,
      28,     6,    24,    15,    16,    17,    18,    19,     4,     6,
      22,    23,     6,    25,    26,    27,    28,     6,     6,    15,
      16,    17,    18,    19,     4,     7,    22,    23,     7,    25,
      26,    27,    28,     7,     7,    15,    16,    17,    18,    19,
       4,    19,    22,    23,     7,    25,    26,    27,    28,     7,
       7,    15,    16,    17,    18,    19,     4,     7,    22,    23,
       7,    25,    26,    27,    28,     6,     6,    15,    16,    17,
      18,    19,     4,     6,    22,    23,     6,    25,    26,    27,
      28,     5,     5,    15,    16,    17,    18,    19,     4,     6,
      22,    23,     5,    25,    26,    27,    28,     5,    24,    15,
      16,    17,    18,    19,     4,     6,    22,    23,     6,    25,
      26,    27,    28,    24,    24,    15,    16,    17,    18,    19,
       4,    24,    22,    23,     5,    25,    26,    27,    28,     5,
       5,    15,    16,    17,    18,    19,     4,    24,    22,    23,
       5,    25,    26,    27,    28,    24,     6,    15,    16,    17,
      18,    19,     4,    19,    22,    23,     6,    25,    26,    27,
      28,    19,     6,    15,    16,    17,    18,    19,     4,     6,
      22,    23,     6,    25,    26,    27,    28,     6,     6,    15,
      16,    17,    18,    19,     4,    24,    22,    23,     6,    25,
      26,    27,    28,     6,     6,    15,    16,    17,    18,    19,
       4,     6,    22,    23,     6,    25,    26,    27,    28,     6,
       6,    15,    16,    17,    18,    19,     4,     6,    22,    23,
       6,    25,    26,    27,    28,    24,    24,    15,    16,    17,
      18,    19,    24,    24,    22,    23,    98,    25,    26,    27,
      28,     8,     9,    10,    11,     8,     9,    10,    11,     8,
       9,    10,    11,     8,     9,    10,    11,    24,    24,     3,
       6,    24,     8,     9,    -1,    24,   151,    98,     5,    24,
       7,     8,     9,    10,    11,     6,    -1,     8,     9,    10,
      11,     6,    -1,     8,     9,    10,    11,     6,    -1,     8,
       9,    10,    11,     6,    -1,     8,     9,    10,    11,     6,
      -1,     8,     9,    10,    11,     6,    -1,     8,     9,    10,
      11,     6,    -1,     8,     9,    10,    11,     6,    -1,     8,
       9,    10,    11,     6,    -1,     8,     9,    10,    11,     6,
      -1,     8,     9,    10,    11,     7,     8,     9,    10,    11,
       7,     8,     9,    10,    11,     7,     8,     9,    10,    11,
       7,     8,     9,    10,    11,     7,     8,     9,    10,    11,
       7,     8,     9,    10,    11,     7,     8,     9,    10,    11,
       7,     8,     9,    10,    11,     7,     8,     9,    10,    11,
       7,     8,     9,    10,    11
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    18,    32,    33,    34,    35,    36,    19,     0,    34,
       5,     7,    18,    37,    19,     6,    13,     3,    40,    18,
      41,    19,     4,    15,    16,    17,    18,    19,    22,    23,
      25,    26,    27,    28,    36,    42,    44,    45,     5,     5,
       5,    19,     5,    14,     5,    12,    19,    20,    21,    29,
      30,    44,    45,    46,    47,    48,    49,    50,     5,     5,
       5,     5,     5,     7,     7,    19,    46,    46,    19,    38,
      46,    47,    48,     7,     8,     9,    10,    11,    43,    46,
      19,    43,    43,    43,     6,     6,     6,     6,    13,     7,
       6,     6,     5,    19,    49,    49,    50,    50,     6,    24,
       6,     6,     6,     6,     7,     7,     7,    19,    39,    40,
      42,    46,     5,    12,    19,    20,    21,    25,    26,    27,
      28,    29,    30,    44,    45,    47,    48,    49,    50,     7,
       5,    12,    19,    20,    21,    25,    26,    27,    28,    29,
      30,    44,    45,    47,    48,    49,    50,     8,     9,     5,
      19,     3,    47,    48,     5,     5,     5,     5,     5,    10,
      11,    47,    48,     5,     5,     5,     5,     5,     8,     9,
      10,    11,    49,    49,    41,     6,     6,    38,    19,    43,
      43,    43,    50,    50,     6,     6,    38,    19,    43,    43,
      43,     5,    19,    49,    49,    50,    50,     4,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     6
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    31,    32,    33,    33,    34,    34,    35,    36,    37,
      37,    37,    38,    38,    38,    39,    39,    40,    41,    41,
      42,    42,    42,    42,    42,    42,    42,    42,    42,    43,
      44,    45,    45,    45,    45,    46,    46,    47,    47,    47,
      47,    47,    47,    48,    48,    48,    49,    49,    49,    50,
      50,    50,    50
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     6,     3,     4,
       2,     0,     3,     1,     0,     1,     1,     3,     2,     0,
       5,     5,     5,     1,     4,     2,     3,     5,     2,     3,
       4,     4,     4,     4,     4,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     3,     1,     3,     3,     1,     1,
       1,     1,     3
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
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
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
                       yystos[+yyssp[yyi + 1 - yynrhs]],
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
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
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
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
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
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
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
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
          ++yyp;
          ++yyformat;
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

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
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
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
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
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
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
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
  case 2:
#line 34 "parser/c7.y"
                { printf("\n\nSYNTAX - program -> stmts\n"); }
#line 1559 "parser/parser.c"
    break;

  case 3:
#line 37 "parser/c7.y"
                     { printf("\n\nSYNTAX - stmts -> stmts stmt\n"); }
#line 1565 "parser/parser.c"
    break;

  case 4:
#line 38 "parser/c7.y"
               { printf("\n\nSYNTAX -  stmts -> stmt\n"); }
#line 1571 "parser/parser.c"
    break;

  case 5:
#line 41 "parser/c7.y"
                    { printf("\n\nSYNTAX - func_stmt\n"); }
#line 1577 "parser/parser.c"
    break;

  case 6:
#line 42 "parser/c7.y"
                        { printf("\n\nSYNTAX - var_decl_stmt\n"); }
#line 1583 "parser/parser.c"
    break;

  case 7:
#line 45 "parser/c7.y"
                                                                                      { printf("\n\nSYNTAX - %s %s %c param_list %c comp_block_stmt\n",
                                                                                               (yyvsp[-5].str_value), (yyvsp[-4].str_value), (yyvsp[-3].op), (yyvsp[-1].op)); }
#line 1590 "parser/parser.c"
    break;

  case 8:
#line 49 "parser/c7.y"
                                             { printf("\n\nSYNTAX - %s %s %c\n", (yyvsp[-2].str_value), (yyvsp[-1].str_value), (yyvsp[0].op)); }
#line 1596 "parser/parser.c"
    break;

  case 9:
#line 52 "parser/c7.y"
                                                { printf("\n\nSYNTAX - param_list %c %s %s\n", (yyvsp[-2].op), (yyvsp[-1].str_value), (yyvsp[0].str_value)); }
#line 1602 "parser/parser.c"
    break;

  case 10:
#line 53 "parser/c7.y"
                            { printf("\n\nSYNTAX - param_list -> %s %s\n", (yyvsp[-1].str_value), (yyvsp[0].str_value)); }
#line 1608 "parser/parser.c"
    break;

  case 11:
#line 54 "parser/c7.y"
                          { printf("\n\nSYNTAX - param_list -> empty\n"); }
#line 1614 "parser/parser.c"
    break;

  case 12:
#line 57 "parser/c7.y"
                                                       { printf("\n\nSYNTAX - simple_param_list %c %s\n", (yyvsp[-1].op), (yyvsp[0].str_value)); }
#line 1620 "parser/parser.c"
    break;

  case 13:
#line 58 "parser/c7.y"
                            { printf("\n\nSYNTAX - simple_param_list -> %s\n", (yyvsp[0].str_value)); }
#line 1626 "parser/parser.c"
    break;

  case 14:
#line 59 "parser/c7.y"
                                  { printf("\n\nSYNTAX - simple_param_list -> empty\n"); }
#line 1632 "parser/parser.c"
    break;

  case 15:
#line 62 "parser/c7.y"
                                          { printf("\n\nSYNTAX - flex_comp_block_stmt -> comp_block_stmt\n"); }
#line 1638 "parser/parser.c"
    break;

  case 16:
#line 63 "parser/c7.y"
                                     { printf("\n\nSYNTAX - flex_comp_block_stmt -> comp_block_stmt\n"); }
#line 1644 "parser/parser.c"
    break;

  case 17:
#line 66 "parser/c7.y"
                                                           { printf("\n\nSYNTAX - %c block_stmts %c\n",
                                                                    (yyvsp[-2].op), (yyvsp[0].op)); }
#line 1651 "parser/parser.c"
    break;

  case 18:
#line 70 "parser/c7.y"
                                     { printf("\n\nSYNTAX - block_stmts block_stmt\n"); }
#line 1657 "parser/parser.c"
    break;

  case 19:
#line 71 "parser/c7.y"
                          { printf("\n\nSYNTAX - block_stmts -> empty\n"); }
#line 1663 "parser/parser.c"
    break;

  case 20:
#line 74 "parser/c7.y"
                                                                        { printf("\n\nSYNTAX - %s %c %s %c %c\n",
                                                                                 (yyvsp[-4].str_value), (yyvsp[-3].op), (yyvsp[-2].str_value), (yyvsp[-1].op), (yyvsp[0].op)); }
#line 1670 "parser/parser.c"
    break;

  case 21:
#line 76 "parser/c7.y"
                                                                               { printf("\n\nSYNTAX - %s %c simple_expr %c %c\n",
                                                                                        (yyvsp[-4].str_value), (yyvsp[-3].op), (yyvsp[-1].op), (yyvsp[0].op)); }
#line 1677 "parser/parser.c"
    break;

  case 22:
#line 78 "parser/c7.y"
                                                                                 { printf("\n\nSYNTAX - %s %c simple_expr %c %c\n",
                                                                                          (yyvsp[-4].str_value), (yyvsp[-3].op), (yyvsp[-1].op), (yyvsp[0].op)); }
#line 1684 "parser/parser.c"
    break;

  case 23:
#line 80 "parser/c7.y"
                            { printf("\n\nSYNTAX - block_stmt -> var_decl_stmt\n"); }
#line 1690 "parser/parser.c"
    break;

  case 24:
#line 81 "parser/c7.y"
                                                       { printf("\n\nSYNTAX - %s %c simple_expr %c\n",
                                                                (yyvsp[-3].str_value), (yyvsp[-2].op), (yyvsp[0].op)); }
#line 1697 "parser/parser.c"
    break;

  case 25:
#line 83 "parser/c7.y"
                                     { printf("\n\nSYNTAX - block_stmt -> func_call %c\n", (yyvsp[0].op)); }
#line 1703 "parser/parser.c"
    break;

  case 26:
#line 84 "parser/c7.y"
                                                 { printf("\n\nSYNTAX - %s simple_expr %c\n", (yyvsp[-2].str_value), (yyvsp[0].op)); }
#line 1709 "parser/parser.c"
    break;

  case 27:
#line 85 "parser/c7.y"
                                                                                     { printf("\n\nSYNTAX - %s %c set_expr %c flex_comp_block_stmt\n",
                                                                                              (yyvsp[-4].str_value), (yyvsp[-3].op), (yyvsp[-1].op)); }
#line 1716 "parser/parser.c"
    break;

  case 28:
#line 87 "parser/c7.y"
                                         { printf("\n\nSYNTAX - block_stmt -> set_func_call %c\n", (yyvsp[0].op)); }
#line 1722 "parser/parser.c"
    break;

  case 29:
#line 91 "parser/c7.y"
                                            { printf("\n\nSYNTAX - simple_expr %s simple_expr\n", (yyvsp[-1].str_value)); }
#line 1728 "parser/parser.c"
    break;

  case 30:
#line 94 "parser/c7.y"
                                                                     { printf("\n\nSYNTAX - %s %c simple_param_list %c\n",
                                                                              (yyvsp[-3].str_value), (yyvsp[-2].op), (yyvsp[0].op)); }
#line 1735 "parser/parser.c"
    break;

  case 31:
#line 98 "parser/c7.y"
                                                                 { printf("\n\nSYNTAX - %s %c %s %c\n",
                                                                              (yyvsp[-3].str_value), (yyvsp[-2].op), (yyvsp[-1].str_value), (yyvsp[0].op)); }
#line 1742 "parser/parser.c"
    break;

  case 32:
#line 100 "parser/c7.y"
                                                                     { printf("\n\nSYNTAX - %s %c set_expr %c\n",
                                                                              (yyvsp[-3].str_value), (yyvsp[-2].op), (yyvsp[0].op)); }
#line 1749 "parser/parser.c"
    break;

  case 33:
#line 102 "parser/c7.y"
                                                                    { printf("\n\nSYNTAX - %s %c set_expr %c\n",
                                                                              (yyvsp[-3].str_value), (yyvsp[-2].op), (yyvsp[0].op)); }
#line 1756 "parser/parser.c"
    break;

  case 34:
#line 104 "parser/c7.y"
                                                                    { printf("\n\nSYNTAX - %s %c set_expr %c\n",
                                                                              (yyvsp[-3].str_value), (yyvsp[-2].op), (yyvsp[0].op)); }
#line 1763 "parser/parser.c"
    break;

  case 35:
#line 108 "parser/c7.y"
                         { printf("\n\nSYNTAX - simple_expr -> arith_expr\n"); }
#line 1769 "parser/parser.c"
    break;

  case 36:
#line 109 "parser/c7.y"
                            { printf("\n\nSYNTAX - simple_expr -> func_cte_expr\n"); }
#line 1775 "parser/parser.c"
    break;

  case 37:
#line 112 "parser/c7.y"
                           { printf("\n\nSYNTAX - simple_expr -> %s\n", (yyvsp[0].str_value)); }
#line 1781 "parser/parser.c"
    break;

  case 38:
#line 113 "parser/c7.y"
                            { printf("\n\nSYNTAX - simple_expr -> %s\n", (yyvsp[0].str_value)); }
#line 1787 "parser/parser.c"
    break;

  case 39:
#line 114 "parser/c7.y"
                          { printf("\n\nSYNTAX - simple_expr -> %c\n", (yyvsp[0].op)); }
#line 1793 "parser/parser.c"
    break;

  case 40:
#line 115 "parser/c7.y"
                            { printf("\n\nSYNTAX - simple_expr -> func_call\n"); }
#line 1799 "parser/parser.c"
    break;

  case 41:
#line 116 "parser/c7.y"
                                { printf("\n\nSYNTAX - simple_expr -> set_func_call\n"); }
#line 1805 "parser/parser.c"
    break;

  case 42:
#line 117 "parser/c7.y"
                                                               { printf("\n\nSYNTAX - %c func_cte_expr %c\n", (yyvsp[-2].op), (yyvsp[0].op)); }
#line 1811 "parser/parser.c"
    break;

  case 43:
#line 120 "parser/c7.y"
                                     { printf("\n\nSYNTAX - arith_expr %c term\n", (yyvsp[-1].op)); }
#line 1817 "parser/parser.c"
    break;

  case 44:
#line 121 "parser/c7.y"
                                     { printf("\n\nSYNTAX - arith_expr %c term\n", (yyvsp[-1].op)); }
#line 1823 "parser/parser.c"
    break;

  case 45:
#line 122 "parser/c7.y"
                   { printf("\n\nSYNTAX - arith_expr -> term\n"); }
#line 1829 "parser/parser.c"
    break;

  case 46:
#line 125 "parser/c7.y"
                              { printf("\n\nSYNTAX - term %c factor\n", (yyvsp[-1].op)); }
#line 1835 "parser/parser.c"
    break;

  case 47:
#line 126 "parser/c7.y"
                             { printf("\n\nSYNTAX - term %c factor\n", (yyvsp[-1].op)); }
#line 1841 "parser/parser.c"
    break;

  case 48:
#line 127 "parser/c7.y"
                 { printf("\n\nSYNTAX - term -> factor\n"); }
#line 1847 "parser/parser.c"
    break;

  case 49:
#line 130 "parser/c7.y"
                     { printf("\n\nSYNTAX - integer -> %d\n", (yyvsp[0].int_value)); }
#line 1853 "parser/parser.c"
    break;

  case 50:
#line 131 "parser/c7.y"
                   { printf("\n\nSYNTAX - float -> %f\n", (yyvsp[0].float_value)); }
#line 1859 "parser/parser.c"
    break;

  case 51:
#line 132 "parser/c7.y"
                { printf("\n\nSYNTAX - var -> %s\n", (yyvsp[0].str_value)); }
#line 1865 "parser/parser.c"
    break;

  case 52:
#line 133 "parser/c7.y"
                                                    { printf("\n\nSYNTAX - %c arith_expr %c\n", (yyvsp[-2].op), (yyvsp[0].op)); }
#line 1871 "parser/parser.c"
    break;


#line 1875 "parser/parser.c"

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
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
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
                  yystos[+*yyssp], yyvsp);
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
#line 136 "parser/c7.y"


void yyerror(const char *s) {
    printf("\nSyntaxError: %s in line %d, column %d.\n",
           s, parser_line, parser_column);
    syntax_error = 1;
}
