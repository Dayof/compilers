/* A Bison parser, made by GNU Bison 3.7.5.  */

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
#define YYBISON 30705

/* Bison version string.  */
#define YYBISON_VERSION "3.7.5"

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

#line 80 "parser/parser.c"

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

#include "parser.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_BRACK_LEFT = 3,                 /* BRACK_LEFT  */
  YYSYMBOL_BRACK_RIGHT = 4,                /* BRACK_RIGHT  */
  YYSYMBOL_PARENT_LEFT = 5,                /* PARENT_LEFT  */
  YYSYMBOL_PARENT_RIGHT = 6,               /* PARENT_RIGHT  */
  YYSYMBOL_SEMICOLON = 7,                  /* SEMICOLON  */
  YYSYMBOL_ADD = 8,                        /* ADD  */
  YYSYMBOL_SUB = 9,                        /* SUB  */
  YYSYMBOL_MULT = 10,                      /* MULT  */
  YYSYMBOL_DIV = 11,                       /* DIV  */
  YYSYMBOL_CHAR = 12,                      /* CHAR  */
  YYSYMBOL_COMMA = 13,                     /* COMMA  */
  YYSYMBOL_ASSIGN = 14,                    /* ASSIGN  */
  YYSYMBOL_READ = 15,                      /* READ  */
  YYSYMBOL_WRITE = 16,                     /* WRITE  */
  YYSYMBOL_WRITELN = 17,                   /* WRITELN  */
  YYSYMBOL_TYPE = 18,                      /* TYPE  */
  YYSYMBOL_ID = 19,                        /* ID  */
  YYSYMBOL_EMPTY = 20,                     /* EMPTY  */
  YYSYMBOL_STRING = 21,                    /* STRING  */
  YYSYMBOL_RETURN = 22,                    /* RETURN  */
  YYSYMBOL_FORALL = 23,                    /* FORALL  */
  YYSYMBOL_IN = 24,                        /* IN  */
  YYSYMBOL_IS_SET = 25,                    /* IS_SET  */
  YYSYMBOL_ADD_SET = 26,                   /* ADD_SET  */
  YYSYMBOL_REMOVE = 27,                    /* REMOVE  */
  YYSYMBOL_EXISTS = 28,                    /* EXISTS  */
  YYSYMBOL_IF = 29,                        /* IF  */
  YYSYMBOL_ELSE = 30,                      /* ELSE  */
  YYSYMBOL_INTEGER = 31,                   /* INTEGER  */
  YYSYMBOL_FLOAT = 32,                     /* FLOAT  */
  YYSYMBOL_THEN = 33,                      /* THEN  */
  YYSYMBOL_YYACCEPT = 34,                  /* $accept  */
  YYSYMBOL_program = 35,                   /* program  */
  YYSYMBOL_stmts = 36,                     /* stmts  */
  YYSYMBOL_stmt = 37,                      /* stmt  */
  YYSYMBOL_func_stmt = 38,                 /* func_stmt  */
  YYSYMBOL_var_decl_stmt = 39,             /* var_decl_stmt  */
  YYSYMBOL_param_list = 40,                /* param_list  */
  YYSYMBOL_simple_param_list = 41,         /* simple_param_list  */
  YYSYMBOL_flex_block_struct = 42,         /* flex_block_struct  */
  YYSYMBOL_compound_block_stmt = 43,       /* compound_block_stmt  */
  YYSYMBOL_block_stmts = 44,               /* block_stmts  */
  YYSYMBOL_block_stmt = 45,                /* block_stmt  */
  YYSYMBOL_flow_control = 46,              /* flow_control  */
  YYSYMBOL_cond_expr = 47,                 /* cond_expr  */
  YYSYMBOL_set_expr = 48,                  /* set_expr  */
  YYSYMBOL_func_call = 49,                 /* func_call  */
  YYSYMBOL_set_func_call = 50,             /* set_func_call  */
  YYSYMBOL_simple_expr = 51,               /* simple_expr  */
  YYSYMBOL_func_cte_expr = 52,             /* func_cte_expr  */
  YYSYMBOL_arith_expr = 53,                /* arith_expr  */
  YYSYMBOL_term = 54,                      /* term  */
  YYSYMBOL_factor = 55                     /* factor  */
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
typedef yytype_int16 yy_state_t;

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

#if 1

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
#endif /* 1 */

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
#define YYLAST   1577

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  34
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  22
/* YYNRULES -- Number of rules.  */
#define YYNRULES  58
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  330

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   288


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
      25,    26,    27,    28,    29,    30,    31,    32,    33
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    37,    37,    40,    41,    44,    45,    48,    51,    54,
      55,    56,    59,    60,    61,    64,    65,    68,    69,    72,
      73,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      87,    88,    89,    90,    93,    96,    99,   102,   103,   104,
     105,   108,   109,   112,   113,   114,   115,   116,   117,   120,
     121,   122,   125,   126,   127,   130,   131,   132,   133
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "BRACK_LEFT",
  "BRACK_RIGHT", "PARENT_LEFT", "PARENT_RIGHT", "SEMICOLON", "ADD", "SUB",
  "MULT", "DIV", "CHAR", "COMMA", "ASSIGN", "READ", "WRITE", "WRITELN",
  "TYPE", "ID", "EMPTY", "STRING", "RETURN", "FORALL", "IN", "IS_SET",
  "ADD_SET", "REMOVE", "EXISTS", "IF", "ELSE", "INTEGER", "FLOAT", "THEN",
  "$accept", "program", "stmts", "stmt", "func_stmt", "var_decl_stmt",
  "param_list", "simple_param_list", "flex_block_struct",
  "compound_block_stmt", "block_stmts", "block_stmt", "flow_control",
  "cond_expr", "set_expr", "func_call", "set_func_call", "simple_expr",
  "func_cte_expr", "arith_expr", "term", "factor", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288
};
#endif

#define YYPACT_NINF (-221)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-59)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      30,    51,    62,    29,    43,    50,    53,    16,  -221,    54,
     178,    65,    58,   160,   168,    56,    83,  1112,    79,    94,
      84,   123,   131,   155,    95,    55,    14,   159,   177,   194,
     195,   197,   203,  1128,  1144,  1160,  1176,   137,   186,   188,
     206,    68,    68,   219,   267,    14,    68,   220,   367,   229,
     251,   341,   393,   252,   254,   256,   271,     9,   592,   649,
      98,   223,    98,    98,    98,   266,   109,  1192,  1208,  1224,
     283,   284,   289,   199,   210,   292,   296,   263,  1240,     6,
       6,     6,     6,   297,   280,   303,   309,   319,   325,   328,
     329,   331,   332,   336,   337,   326,  1256,   348,   933,    44,
     977,  1551,  1556,  1561,  1566,  1011,    68,   349,   356,   361,
     366,  1028,  1272,  1288,  1304,   218,  1320,  1336,  1352,   373,
     474,  1045,   650,  1368,   351,  1011,  1384,    68,   383,   454,
     386,   404,   406,   407,   408,   417,   471,   506,   420,   421,
     422,   285,   516,   524,  1400,    68,   399,    -4,   409,   410,
     424,   427,   430,   436,     4,    96,   418,   419,   428,   144,
     130,   139,    44,    44,    44,   575,  1416,  1432,   443,   444,
     448,   442,   128,    14,   450,   463,   666,   682,   698,   714,
     462,   465,  1448,   470,   478,   479,   457,   129,    14,   480,
     481,   464,   468,   476,   477,   488,   502,   504,   315,   267,
     499,    98,    98,    98,    44,    44,   513,   379,   267,   501,
      98,    98,    98,    59,    59,    59,    59,   581,   606,  1464,
    1480,   730,  1496,   509,    68,    68,   514,    14,   522,    98,
     266,   746,   762,   511,  1512,   523,    68,    68,   536,    14,
     537,    98,   266,   525,   528,   547,   616,   232,   548,   553,
     554,   555,   628,   637,   539,   148,   235,   559,   560,   562,
     563,    44,   179,   209,   242,   246,   273,  1528,   778,   565,
     566,   567,   794,   568,   810,   571,   573,   550,   582,   588,
     603,   580,   604,   589,   612,   614,   622,   625,   634,   645,
     648,   639,   647,   656,   663,   679,   667,   683,   699,   826,
    1028,  1028,   712,   715,   728,   708,  1062,  1062,   842,   858,
     874,   890,   906,   721,   724,   737,   740,   753,  1079,  1096,
     934,   950,   978,   756,   769,   772,  1028,  1062,   994,   785
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -221,  -221,  -221,   815,  -221,     0,  -221,  -141,   118,   -13,
    -158,   187,    64,  -220,   -32,    10,    40,   405,   425,   169,
     394,   335
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,     4,     5,    33,    13,    74,   116,   192,
      34,   193,    36,    90,    83,   156,   157,    84,   158,   159,
     142,   143
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       6,   208,    18,     6,   -57,   -57,   -57,   -57,   220,   222,
     276,    99,   -55,   -55,   -55,   -55,   -41,    79,    80,    46,
     -57,    10,   285,    11,   234,   100,    47,    37,   -55,    -2,
      86,    87,    88,    48,    49,    50,    53,    51,    52,    28,
      29,    30,    31,    -4,    37,    51,    52,     1,     1,   164,
      -5,   138,   138,    -6,    -3,    53,   138,    38,   247,    17,
      44,    -4,     8,   165,   261,    -8,    54,   256,    -5,    45,
       7,    -6,    -3,   127,    38,   136,   137,    14,   262,    -7,
     128,   139,   139,    -8,   -18,    54,   139,   129,   130,   131,
     154,   155,   117,   132,   133,   134,   135,    -7,   177,   136,
     137,    19,   -18,   145,   -56,   -56,   -56,   -56,   117,   -17,
     146,   176,   117,    39,    43,    37,   138,   147,   148,   149,
     -56,   180,   191,   150,   151,   152,   153,   -17,    40,   154,
     155,    37,   195,    44,    44,    37,    41,   138,   -51,   -51,
     215,   216,   227,   239,    68,    38,   139,   -54,   -54,   -54,
     -54,   181,   213,   214,   -51,   138,   -58,   -58,   -58,   -58,
      42,    38,   196,   -54,    60,    38,    15,   139,   -41,   249,
     250,   251,   -58,    16,   -10,   179,    37,    37,   258,   259,
     260,   -10,    61,    53,   -11,   139,   194,   -57,   -57,   -57,
     -57,   -11,    37,    69,    -9,    57,    12,   275,    53,    62,
      63,    -9,    64,   -57,    35,   -13,    38,    38,    65,   284,
     141,   141,   -13,    54,    57,    77,    94,   -49,   -49,   215,
     216,    67,    38,    95,   -12,    70,   144,   -45,    54,   120,
      37,   -12,    37,   -49,   138,   138,   -43,    53,   286,   123,
     124,   291,    85,   126,    37,    95,   138,   138,    95,    53,
     -50,   -50,   215,   216,   -52,   -52,   -52,   -52,   -44,   -46,
      38,   -47,    38,    78,   139,   139,   -50,    54,    77,    98,
     -52,   162,   163,   -14,    38,   141,   139,   139,   -42,    54,
     -14,   -53,   -53,   -53,   -53,    89,    73,   177,   177,    91,
      92,   -41,   118,   162,   163,    93,   198,   -53,   178,    96,
     176,   176,    97,   105,   106,   177,   191,   191,   118,   107,
     180,   180,   118,   177,   207,   108,   195,   195,   176,   191,
     191,   246,   191,   162,   163,   109,   176,   191,   180,   195,
     195,   110,   195,   198,   -34,   111,   180,   195,   112,   113,
     181,   181,    57,   114,   -36,   115,   196,   196,   -55,   -55,
     -55,   -55,   -55,    35,    35,   -48,   -37,    57,   181,   196,
     196,    59,   196,   -38,   179,   179,   181,   196,   -39,    35,
     194,   194,    44,   -40,   -57,   -57,   -57,   -57,   -57,   -35,
      59,   125,   179,   194,   194,   255,   194,   162,   163,   -45,
     179,   194,   -43,   141,   141,   161,    57,   161,   161,   161,
     -56,   -56,   -56,   -56,   -56,   141,   141,    67,    57,    67,
     -44,   200,   201,   202,    59,    59,   103,   104,   311,   312,
      58,    67,   203,   -45,   316,   317,   -46,   -47,   -42,   209,
     207,    55,   210,   -43,   -44,   211,   321,   323,   324,    58,
     325,   212,   -46,   -47,   328,   329,    71,    72,   223,   224,
      75,    56,   -42,   225,   160,   229,   160,   160,   160,   199,
     -57,   226,   -57,   -57,   -57,   -57,   140,   140,   230,   231,
      56,    76,   232,   101,   102,   235,   238,   -55,   -30,   -55,
     -55,   -55,   -55,   236,   237,   241,   242,   178,   178,   -30,
     -30,   -30,   -30,   -30,   -21,   243,   -30,   -30,   -15,   -30,
     -30,   -30,   -30,   -30,   121,   178,   -16,   -24,    59,   244,
     245,   119,   -56,   178,   -56,   -56,   -56,   -56,   248,   254,
     257,   272,   -51,    59,   -51,   -51,   204,   205,   269,   274,
     -54,   140,   -54,   -54,   -54,   -54,   161,   161,   161,   252,
     253,   -18,   278,   281,   283,   161,   161,   161,   161,   161,
     265,   266,   197,   -48,   287,   -22,   217,   218,   -23,   288,
     289,   290,    59,   -48,   161,   292,   293,    58,   294,   295,
     206,   296,   297,   298,    59,   299,   161,   300,   228,   301,
     -17,   -57,    58,   -57,   -57,   -57,   -57,   -49,   302,   -49,
     -49,   204,   205,   240,   303,   160,   160,   160,    56,   -51,
     -51,   -51,    81,    82,   160,   160,   160,   263,   264,   304,
      -8,   305,   -50,    56,   -50,   -50,   204,   205,   306,   -29,
     307,    58,   -58,   160,   -58,   -58,   -58,   -58,   -36,   270,
     271,   -37,   273,    58,   -52,   160,   -52,   -52,   -52,   -52,
     -38,   279,   280,   -53,   282,   -53,   -53,   -53,   -53,   140,
     140,   -39,    56,   182,   -40,    65,   -54,   -54,   -54,   -54,
     -54,   140,   140,   -36,    56,   183,   184,   185,   186,   187,
     -21,   -37,   188,   189,   308,    28,    29,    30,    31,   190,
     -38,   -21,   -21,   -21,   -21,   -21,   -15,   -39,   -21,   -21,
     309,   -21,   -21,   -21,   -21,   -21,   -21,   -15,   -15,   -15,
     -15,   -15,   -16,   -40,   -15,   -15,   310,   -15,   -15,   -15,
     -15,   -15,   -15,   -16,   -16,   -16,   -16,   -16,   -24,   313,
     -16,   -16,   314,   -16,   -16,   -16,   -16,   -16,   -16,   -24,
     -24,   -24,   -24,   -24,   -18,   315,   -24,   -24,   -28,   -24,
     -24,   -24,   -24,   -24,   -24,   -18,   -18,   -18,   -18,   -18,
     -22,   -25,   -18,   -18,   -26,   -18,   -18,   -18,   -18,   -18,
     -18,   -22,   -22,   -22,   -22,   -22,   -23,   -27,   -22,   -22,
     -33,   -22,   -22,   -22,   -22,   -22,   -22,   -23,   -23,   -23,
     -23,   -23,   -17,   319,   -23,   -23,   -31,   -23,   -23,   -23,
     -23,   -23,   -23,   -17,   -17,   -17,   -17,   -17,    -8,   326,
     -17,   -17,   327,   -17,   -17,   -17,   -17,   -17,   -17,    -8,
      -8,    -8,    -8,    -8,   -29,   -32,    -8,    -8,     9,    -8,
      -8,    -8,    -8,    -8,    -8,   -29,   -29,   -29,   -29,   -29,
     -28,     0,   -29,   -29,     0,   -29,   -29,   -29,   -29,   -29,
     -29,   -28,   -28,   -28,   -28,   -28,   -25,     0,   -28,   -28,
       0,   -28,   -28,   -28,   -28,   -28,   -28,   -25,   -25,   -25,
     -25,   -25,   -26,     0,   -25,   -25,     0,   -25,   -25,   -25,
     -25,   -25,   -25,   -26,   -26,   -26,   -26,   -26,   -27,     0,
     -26,   -26,     0,   -26,   -26,   -26,   -26,   -26,   -26,   -27,
     -27,   -27,   -27,   -27,   -33,     0,   -27,   -27,     0,   -27,
     -27,   -27,   -27,   -27,   -27,   -33,   -33,   -33,   -33,   -33,
     -30,     0,   -33,   -33,     0,   -33,   -33,   -33,   -33,   -33,
     -33,   -30,   -30,   -30,   -30,   -30,     0,     0,   -30,   -30,
       0,   -30,   -30,   -30,   -30,   -30,   318,   182,     0,   230,
     -58,   -58,   -58,   -58,   -58,     0,     0,     0,     0,   183,
     184,   185,   186,   187,   -31,     0,   188,   189,     0,    28,
      29,    30,    31,   190,     0,   -31,   -31,   -31,   -31,   -31,
       0,     0,   -31,   -31,     0,   -31,   -31,   -31,   -31,   -31,
     -31,   182,     0,   242,   -57,   -57,   -57,   -57,   -57,     0,
       0,     0,     0,   183,   184,   185,   186,   187,   -32,     0,
     188,   189,     0,    28,    29,    30,    31,   190,     0,   -32,
     -32,   -32,   -32,   -32,   166,     0,   -32,   -32,     0,   -32,
     -32,   -32,   -32,   -32,   -32,     0,    21,    22,    23,    24,
      25,   167,     0,    26,    27,     0,    28,    29,    30,    31,
      32,     0,     0,   168,   169,   170,   171,   172,   166,     0,
     173,   174,     0,    28,    29,    30,    31,   175,     0,     0,
      21,    22,    23,    24,    25,   182,     0,    26,    27,     0,
      28,    29,    30,    31,   122,     0,     0,   183,   184,   185,
     186,   187,   167,     0,   188,   189,     0,    28,    29,    30,
      31,   190,     0,     0,   168,   169,   170,   171,   172,   182,
       0,   173,   174,     0,    28,    29,    30,    31,   320,     0,
       0,   183,   184,   185,   186,   187,    20,     0,   188,   189,
       0,    28,    29,    30,    31,   322,     0,    21,    22,    23,
      24,    25,   -21,     0,    26,    27,     0,    28,    29,    30,
      31,    32,     0,   -21,   -21,   -21,   -21,   -21,    66,     0,
     -21,   -21,     0,   -21,   -21,   -21,   -21,   -21,     0,    21,
      22,    23,    24,    25,   -20,     0,    26,    27,     0,    28,
      29,    30,    31,    32,     0,   -20,   -20,   -20,   -20,   -20,
     -24,     0,   -20,   -20,     0,   -20,   -20,   -20,   -20,   -20,
       0,   -24,   -24,   -24,   -24,   -24,   -19,     0,   -24,   -24,
       0,   -24,   -24,   -24,   -24,   -24,     0,   -19,   -19,   -19,
     -19,   -19,   -22,     0,   -19,   -19,     0,   -19,   -19,   -19,
     -19,   -19,     0,   -22,   -22,   -22,   -22,   -22,   -23,     0,
     -22,   -22,     0,   -22,   -22,   -22,   -22,   -22,     0,   -23,
     -23,   -23,   -23,   -23,   -29,     0,   -23,   -23,     0,   -23,
     -23,   -23,   -23,   -23,     0,   -29,   -29,   -29,   -29,   -29,
     -28,     0,   -29,   -29,     0,   -29,   -29,   -29,   -29,   -29,
       0,   -28,   -28,   -28,   -28,   -28,   -25,     0,   -28,   -28,
       0,   -28,   -28,   -28,   -28,   -28,     0,   -25,   -25,   -25,
     -25,   -25,   -26,     0,   -25,   -25,     0,   -25,   -25,   -25,
     -25,   -25,     0,   -26,   -26,   -26,   -26,   -26,   -27,     0,
     -26,   -26,     0,   -26,   -26,   -26,   -26,   -26,     0,   -27,
     -27,   -27,   -27,   -27,   -33,     0,   -27,   -27,     0,   -27,
     -27,   -27,   -27,   -27,     0,   -33,   -33,   -33,   -33,   -33,
     -15,     0,   -33,   -33,     0,   -33,   -33,   -33,   -33,   -33,
       0,   -15,   -15,   -15,   -15,   -15,   -16,     0,   -15,   -15,
       0,   -15,   -15,   -15,   -15,   -15,     0,   -16,   -16,   -16,
     -16,   -16,   -31,     0,   -16,   -16,     0,   -16,   -16,   -16,
     -16,   -16,     0,   -31,   -31,   -31,   -31,   -31,   -32,     0,
     -31,   -31,     0,   -31,   -31,   -31,   -31,   -31,     0,   -32,
     -32,   -32,   -32,   -32,    -8,     0,   -32,   -32,     0,   -32,
     -32,   -32,   -32,   -32,     0,    -8,    -8,    -8,    -8,    -8,
     219,     0,    -8,    -8,     0,    -8,    -8,    -8,    -8,    -8,
       0,    21,    22,    23,    24,    25,   221,     0,    26,    27,
       0,    28,    29,    30,    31,    32,     0,    21,    22,    23,
      24,    25,   233,     0,    26,    27,     0,    28,    29,    30,
      31,    32,     0,    21,    22,    23,    24,    25,   -18,     0,
      26,    27,     0,    28,    29,    30,    31,    32,     0,   -18,
     -18,   -18,   -18,   -18,   267,     0,   -18,   -18,     0,   -18,
     -18,   -18,   -18,   -18,     0,    21,    22,    23,    24,    25,
     268,     0,    26,    27,     0,    28,    29,    30,    31,    32,
       0,    21,    22,    23,    24,    25,   277,     0,    26,    27,
       0,    28,    29,    30,    31,    32,     0,    21,    22,    23,
      24,    25,   -17,     0,    26,    27,     0,    28,    29,    30,
      31,    32,     0,   -17,   -17,   -17,   -17,   -17,     0,     0,
     -17,   -17,     0,   -17,   -17,   -17,   -17,   -17,   -49,   -49,
     -49,    81,    82,   -50,   -50,   -50,    81,    82,   -52,   -52,
     -52,   -52,   -52,   -53,   -53,   -53,   -53,   -53
};

static const yytype_int16 yycheck[] =
{
       0,     5,    15,     3,     8,     9,    10,    11,   166,   167,
     230,     5,     8,     9,    10,    11,     7,     8,     9,     5,
      24,     5,   242,     7,   182,    19,    12,    17,    24,     0,
      62,    63,    64,    19,    20,    21,    26,    31,    32,    25,
      26,    27,    28,     0,    34,    31,    32,    18,    18,     5,
       0,    41,    42,     0,     0,    45,    46,    17,   199,     3,
       5,    18,     0,    19,     5,     0,    26,   208,    18,    14,
      19,    18,    18,     5,    34,    31,    32,    19,    19,     0,
      12,    41,    42,    18,     0,    45,    46,    19,    20,    21,
      31,    32,   105,    25,    26,    27,    28,    18,   111,    31,
      32,    18,    18,     5,     8,     9,    10,    11,   121,     0,
      12,   111,   125,    19,    19,   105,   106,    19,    20,    21,
      24,   111,   122,    25,    26,    27,    28,    18,     5,    31,
      32,   121,   122,     5,     5,   125,     5,   127,     8,     9,
      10,    11,    14,    14,     7,   105,   106,     8,     9,    10,
      11,   111,     8,     9,    24,   145,     8,     9,    10,    11,
       5,   121,   122,    24,     5,   125,     6,   127,    24,   201,
     202,   203,    24,    13,     6,   111,   166,   167,   210,   211,
     212,    13,     5,   173,     6,   145,   122,     8,     9,    10,
      11,    13,   182,     7,     6,    26,    18,   229,   188,     5,
       5,    13,     5,    24,    17,     6,   166,   167,     5,   241,
      41,    42,    13,   173,    45,    46,     6,     8,     9,    10,
      11,    34,   182,    13,     6,    19,     7,     7,   188,   111,
     220,    13,   222,    24,   224,   225,     7,   227,     6,   121,
     122,     6,    19,   125,   234,    13,   236,   237,    13,   239,
       8,     9,    10,    11,     8,     9,    10,    11,     7,     7,
     220,     7,   222,     7,   224,   225,    24,   227,    99,     6,
      24,     8,     9,     6,   234,   106,   236,   237,     7,   239,
      13,     8,     9,    10,    11,    19,    19,   300,   301,     6,
       6,     6,   105,     8,     9,     6,   127,    24,   111,     7,
     300,   301,     6,     6,    24,   318,   306,   307,   121,     6,
     300,   301,   125,   326,   145,     6,   306,   307,   318,   319,
     320,     6,   322,     8,     9,     6,   326,   327,   318,   319,
     320,     6,   322,   164,     6,     6,   326,   327,     7,     7,
     300,   301,   173,     7,     7,    19,   306,   307,     7,     8,
       9,    10,    11,   166,   167,     7,     7,   188,   318,   319,
     320,    26,   322,     7,   300,   301,   326,   327,     7,   182,
     306,   307,     5,     7,     7,     8,     9,    10,    11,     6,
      45,    30,   318,   319,   320,     6,   322,     8,     9,     6,
     326,   327,     6,   224,   225,    60,   227,    62,    63,    64,
       7,     8,     9,    10,    11,   236,   237,   220,   239,   222,
       6,     5,     5,     5,    79,    80,    81,    82,   300,   301,
      26,   234,     5,    24,   306,   307,     6,     6,     6,     5,
     261,    26,     5,    24,    24,     5,   318,   319,   320,    45,
     322,     5,    24,    24,   326,   327,    41,    42,     5,     5,
      45,    26,    24,     5,    60,     5,    62,    63,    64,     5,
       6,    19,     8,     9,    10,    11,    41,    42,     5,     7,
      45,    46,     7,    79,    80,     5,    19,     6,     4,     8,
       9,    10,    11,     5,     5,     5,     5,   300,   301,    15,
      16,    17,    18,    19,    30,     7,    22,    23,    30,    25,
      26,    27,    28,    29,    30,   318,    30,    30,   173,     7,
       6,   106,     6,   326,     8,     9,    10,    11,    19,     6,
      19,     7,     6,   188,     8,     9,    10,    11,    19,     7,
       6,   106,     8,     9,    10,    11,   201,   202,   203,   204,
     205,    30,    19,     7,     7,   210,   211,   212,   213,   214,
     215,   216,   127,     6,     6,    30,   162,   163,    30,     6,
       6,     6,   227,    24,   229,     6,     6,   173,     6,     6,
     145,     6,     6,     6,   239,     7,   241,     6,   173,     6,
      30,     6,   188,     8,     9,    10,    11,     6,     6,     8,
       9,    10,    11,   188,     6,   201,   202,   203,   173,     7,
       8,     9,    10,    11,   210,   211,   212,   213,   214,     6,
      30,     7,     6,   188,     8,     9,    10,    11,     6,    30,
       6,   227,     6,   229,     8,     9,    10,    11,     6,   224,
     225,     6,   227,   239,     6,   241,     8,     9,    10,    11,
       6,   236,   237,     6,   239,     8,     9,    10,    11,   224,
     225,     6,   227,     3,     6,     5,     7,     8,     9,    10,
      11,   236,   237,    24,   239,    15,    16,    17,    18,    19,
       4,    24,    22,    23,     7,    25,    26,    27,    28,    29,
      24,    15,    16,    17,    18,    19,     4,    24,    22,    23,
       7,    25,    26,    27,    28,    29,    30,    15,    16,    17,
      18,    19,     4,    24,    22,    23,     7,    25,    26,    27,
      28,    29,    30,    15,    16,    17,    18,    19,     4,     7,
      22,    23,     7,    25,    26,    27,    28,    29,    30,    15,
      16,    17,    18,    19,     4,     7,    22,    23,    30,    25,
      26,    27,    28,    29,    30,    15,    16,    17,    18,    19,
       4,    30,    22,    23,    30,    25,    26,    27,    28,    29,
      30,    15,    16,    17,    18,    19,     4,    30,    22,    23,
      30,    25,    26,    27,    28,    29,    30,    15,    16,    17,
      18,    19,     4,    30,    22,    23,    30,    25,    26,    27,
      28,    29,    30,    15,    16,    17,    18,    19,     4,    30,
      22,    23,    30,    25,    26,    27,    28,    29,    30,    15,
      16,    17,    18,    19,     4,    30,    22,    23,     3,    25,
      26,    27,    28,    29,    30,    15,    16,    17,    18,    19,
       4,    -1,    22,    23,    -1,    25,    26,    27,    28,    29,
      30,    15,    16,    17,    18,    19,     4,    -1,    22,    23,
      -1,    25,    26,    27,    28,    29,    30,    15,    16,    17,
      18,    19,     4,    -1,    22,    23,    -1,    25,    26,    27,
      28,    29,    30,    15,    16,    17,    18,    19,     4,    -1,
      22,    23,    -1,    25,    26,    27,    28,    29,    30,    15,
      16,    17,    18,    19,     4,    -1,    22,    23,    -1,    25,
      26,    27,    28,    29,    30,    15,    16,    17,    18,    19,
       4,    -1,    22,    23,    -1,    25,    26,    27,    28,    29,
      30,    15,    16,    17,    18,    19,    -1,    -1,    22,    23,
      -1,    25,    26,    27,    28,    29,    30,     3,    -1,     5,
       7,     8,     9,    10,    11,    -1,    -1,    -1,    -1,    15,
      16,    17,    18,    19,     4,    -1,    22,    23,    -1,    25,
      26,    27,    28,    29,    -1,    15,    16,    17,    18,    19,
      -1,    -1,    22,    23,    -1,    25,    26,    27,    28,    29,
      30,     3,    -1,     5,     7,     8,     9,    10,    11,    -1,
      -1,    -1,    -1,    15,    16,    17,    18,    19,     4,    -1,
      22,    23,    -1,    25,    26,    27,    28,    29,    -1,    15,
      16,    17,    18,    19,     3,    -1,    22,    23,    -1,    25,
      26,    27,    28,    29,    30,    -1,    15,    16,    17,    18,
      19,     3,    -1,    22,    23,    -1,    25,    26,    27,    28,
      29,    -1,    -1,    15,    16,    17,    18,    19,     3,    -1,
      22,    23,    -1,    25,    26,    27,    28,    29,    -1,    -1,
      15,    16,    17,    18,    19,     3,    -1,    22,    23,    -1,
      25,    26,    27,    28,    29,    -1,    -1,    15,    16,    17,
      18,    19,     3,    -1,    22,    23,    -1,    25,    26,    27,
      28,    29,    -1,    -1,    15,    16,    17,    18,    19,     3,
      -1,    22,    23,    -1,    25,    26,    27,    28,    29,    -1,
      -1,    15,    16,    17,    18,    19,     4,    -1,    22,    23,
      -1,    25,    26,    27,    28,    29,    -1,    15,    16,    17,
      18,    19,     4,    -1,    22,    23,    -1,    25,    26,    27,
      28,    29,    -1,    15,    16,    17,    18,    19,     4,    -1,
      22,    23,    -1,    25,    26,    27,    28,    29,    -1,    15,
      16,    17,    18,    19,     4,    -1,    22,    23,    -1,    25,
      26,    27,    28,    29,    -1,    15,    16,    17,    18,    19,
       4,    -1,    22,    23,    -1,    25,    26,    27,    28,    29,
      -1,    15,    16,    17,    18,    19,     4,    -1,    22,    23,
      -1,    25,    26,    27,    28,    29,    -1,    15,    16,    17,
      18,    19,     4,    -1,    22,    23,    -1,    25,    26,    27,
      28,    29,    -1,    15,    16,    17,    18,    19,     4,    -1,
      22,    23,    -1,    25,    26,    27,    28,    29,    -1,    15,
      16,    17,    18,    19,     4,    -1,    22,    23,    -1,    25,
      26,    27,    28,    29,    -1,    15,    16,    17,    18,    19,
       4,    -1,    22,    23,    -1,    25,    26,    27,    28,    29,
      -1,    15,    16,    17,    18,    19,     4,    -1,    22,    23,
      -1,    25,    26,    27,    28,    29,    -1,    15,    16,    17,
      18,    19,     4,    -1,    22,    23,    -1,    25,    26,    27,
      28,    29,    -1,    15,    16,    17,    18,    19,     4,    -1,
      22,    23,    -1,    25,    26,    27,    28,    29,    -1,    15,
      16,    17,    18,    19,     4,    -1,    22,    23,    -1,    25,
      26,    27,    28,    29,    -1,    15,    16,    17,    18,    19,
       4,    -1,    22,    23,    -1,    25,    26,    27,    28,    29,
      -1,    15,    16,    17,    18,    19,     4,    -1,    22,    23,
      -1,    25,    26,    27,    28,    29,    -1,    15,    16,    17,
      18,    19,     4,    -1,    22,    23,    -1,    25,    26,    27,
      28,    29,    -1,    15,    16,    17,    18,    19,     4,    -1,
      22,    23,    -1,    25,    26,    27,    28,    29,    -1,    15,
      16,    17,    18,    19,     4,    -1,    22,    23,    -1,    25,
      26,    27,    28,    29,    -1,    15,    16,    17,    18,    19,
       4,    -1,    22,    23,    -1,    25,    26,    27,    28,    29,
      -1,    15,    16,    17,    18,    19,     4,    -1,    22,    23,
      -1,    25,    26,    27,    28,    29,    -1,    15,    16,    17,
      18,    19,     4,    -1,    22,    23,    -1,    25,    26,    27,
      28,    29,    -1,    15,    16,    17,    18,    19,     4,    -1,
      22,    23,    -1,    25,    26,    27,    28,    29,    -1,    15,
      16,    17,    18,    19,     4,    -1,    22,    23,    -1,    25,
      26,    27,    28,    29,    -1,    15,    16,    17,    18,    19,
       4,    -1,    22,    23,    -1,    25,    26,    27,    28,    29,
      -1,    15,    16,    17,    18,    19,     4,    -1,    22,    23,
      -1,    25,    26,    27,    28,    29,    -1,    15,    16,    17,
      18,    19,     4,    -1,    22,    23,    -1,    25,    26,    27,
      28,    29,    -1,    15,    16,    17,    18,    19,    -1,    -1,
      22,    23,    -1,    25,    26,    27,    28,    29,     7,     8,
       9,    10,    11,     7,     8,     9,    10,    11,     7,     8,
       9,    10,    11,     7,     8,     9,    10,    11
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    18,    35,    36,    37,    38,    39,    19,     0,    37,
       5,     7,    18,    40,    19,     6,    13,     3,    43,    18,
       4,    15,    16,    17,    18,    19,    22,    23,    25,    26,
      27,    28,    29,    39,    44,    45,    46,    49,    50,    19,
       5,     5,     5,    19,     5,    14,     5,    12,    19,    20,
      21,    31,    32,    49,    50,    51,    52,    53,    54,    55,
       5,     5,     5,     5,     5,     5,     4,    45,     7,     7,
      19,    51,    51,    19,    41,    51,    52,    53,     7,     8,
       9,    10,    11,    48,    51,    19,    48,    48,    48,    19,
      47,     6,     6,     6,     6,    13,     7,     6,     6,     5,
      19,    54,    54,    55,    55,     6,    24,     6,     6,     6,
       6,     6,     7,     7,     7,    19,    42,    43,    45,    51,
      42,    30,    29,    42,    42,    30,    42,     5,    12,    19,
      20,    21,    25,    26,    27,    28,    31,    32,    49,    50,
      52,    53,    54,    55,     7,     5,    12,    19,    20,    21,
      25,    26,    27,    28,    31,    32,    49,    50,    52,    53,
      54,    55,     8,     9,     5,    19,     3,     3,    15,    16,
      17,    18,    19,    22,    23,    29,    39,    43,    45,    46,
      49,    50,     3,    15,    16,    17,    18,    19,    22,    23,
      29,    39,    43,    45,    46,    49,    50,    52,    53,     5,
       5,     5,     5,     5,    10,    11,    52,    53,     5,     5,
       5,     5,     5,     8,     9,    10,    11,    54,    54,     4,
      44,     4,    44,     5,     5,     5,    19,    14,    51,     5,
       5,     7,     7,     4,    44,     5,     5,     5,    19,    14,
      51,     5,     5,     7,     7,     6,     6,    41,    19,    48,
      48,    48,    55,    55,     6,     6,    41,    19,    48,    48,
      48,     5,    19,    54,    54,    55,    55,     4,     4,    19,
      51,    51,     7,    51,     7,    48,    47,     4,    19,    51,
      51,     7,    51,     7,    48,    47,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     7,
       6,     6,     6,     6,     6,     7,     6,     6,     7,     7,
       7,    42,    42,     7,     7,     7,    42,    42,    30,    30,
      29,    42,    29,    42,    42,    42,    30,    30,    42,    42
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    34,    35,    36,    36,    37,    37,    38,    39,    40,
      40,    40,    41,    41,    41,    42,    42,    43,    43,    44,
      44,    45,    45,    45,    45,    45,    45,    45,    45,    45,
      46,    46,    46,    46,    47,    48,    49,    50,    50,    50,
      50,    51,    51,    52,    52,    52,    52,    52,    52,    53,
      53,    53,    54,    54,    54,    55,    55,    55,    55
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     6,     3,     4,
       2,     0,     3,     1,     0,     1,     1,     3,     2,     2,
       1,     1,     2,     2,     1,     5,     5,     5,     4,     3,
       5,     7,    10,     5,     1,     3,     4,     4,     4,     4,
       4,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       3,     1,     3,     3,     1,     1,     1,     1,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

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

/* This macro is provided for backward compatibility. */
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


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
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
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


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
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
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
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
# endif
#endif

#ifndef yytnamerr
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
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
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
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
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
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
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
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
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

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

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

#line 1826 "parser/parser.c"

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
      {
        yypcontext_t yyctx
          = {yyssp, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          goto yyexhaustedlab;
      }
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
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if 1
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 136 "parser/c7.y"


void yyerror(const char *s) {
    printf("\nSyntaxError: %s in line %d, column %d.\n",
           s, parser_line, parser_column);
    syntax_error = 1;
}
