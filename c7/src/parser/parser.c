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
  YYSYMBOL_FOR = 24,                       /* FOR  */
  YYSYMBOL_IN = 25,                        /* IN  */
  YYSYMBOL_IS_SET = 26,                    /* IS_SET  */
  YYSYMBOL_ADD_SET = 27,                   /* ADD_SET  */
  YYSYMBOL_REMOVE = 28,                    /* REMOVE  */
  YYSYMBOL_EXISTS = 29,                    /* EXISTS  */
  YYSYMBOL_IF = 30,                        /* IF  */
  YYSYMBOL_ELSE = 31,                      /* ELSE  */
  YYSYMBOL_NOT_OP = 32,                    /* NOT_OP  */
  YYSYMBOL_L_OP = 33,                      /* L_OP  */
  YYSYMBOL_G_OP = 34,                      /* G_OP  */
  YYSYMBOL_EQ_OP = 35,                     /* EQ_OP  */
  YYSYMBOL_NE_OP = 36,                     /* NE_OP  */
  YYSYMBOL_LE_OP = 37,                     /* LE_OP  */
  YYSYMBOL_GE_OP = 38,                     /* GE_OP  */
  YYSYMBOL_OR_OP = 39,                     /* OR_OP  */
  YYSYMBOL_AND_OP = 40,                    /* AND_OP  */
  YYSYMBOL_INTEGER = 41,                   /* INTEGER  */
  YYSYMBOL_FLOAT = 42,                     /* FLOAT  */
  YYSYMBOL_THEN = 43,                      /* THEN  */
  YYSYMBOL_YYACCEPT = 44,                  /* $accept  */
  YYSYMBOL_program = 45,                   /* program  */
  YYSYMBOL_stmts = 46,                     /* stmts  */
  YYSYMBOL_stmt = 47,                      /* stmt  */
  YYSYMBOL_func_stmt = 48,                 /* func_stmt  */
  YYSYMBOL_var_decl_stmt = 49,             /* var_decl_stmt  */
  YYSYMBOL_param_list = 50,                /* param_list  */
  YYSYMBOL_simple_param_list = 51,         /* simple_param_list  */
  YYSYMBOL_flex_block_struct = 52,         /* flex_block_struct  */
  YYSYMBOL_compound_block_stmt = 53,       /* compound_block_stmt  */
  YYSYMBOL_block_stmts = 54,               /* block_stmts  */
  YYSYMBOL_block_stmt = 55,                /* block_stmt  */
  YYSYMBOL_flow_control = 56,              /* flow_control  */
  YYSYMBOL_opt_param = 57,                 /* opt_param  */
  YYSYMBOL_for_expression = 58,            /* for_expression  */
  YYSYMBOL_decl_or_cond_expr = 59,         /* decl_or_cond_expr  */
  YYSYMBOL_or_cond_expr = 60,              /* or_cond_expr  */
  YYSYMBOL_and_cond_expr = 61,             /* and_cond_expr  */
  YYSYMBOL_unary_cond_expr = 62,           /* unary_cond_expr  */
  YYSYMBOL_eq_cond_expr = 63,              /* eq_cond_expr  */
  YYSYMBOL_equal_ops = 64,                 /* equal_ops  */
  YYSYMBOL_rel_cond_expr = 65,             /* rel_cond_expr  */
  YYSYMBOL_rel_ops = 66,                   /* rel_ops  */
  YYSYMBOL_set_expr = 67,                  /* set_expr  */
  YYSYMBOL_func_call = 68,                 /* func_call  */
  YYSYMBOL_set_func_call = 69,             /* set_func_call  */
  YYSYMBOL_simple_expr = 70,               /* simple_expr  */
  YYSYMBOL_func_cte_expr = 71,             /* func_cte_expr  */
  YYSYMBOL_func_expr = 72,                 /* func_expr  */
  YYSYMBOL_arith_expr = 73,                /* arith_expr  */
  YYSYMBOL_term = 74,                      /* term  */
  YYSYMBOL_factor = 75                     /* factor  */
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
#define YYLAST   4387

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  44
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  32
/* YYNRULES -- Number of rules.  */
#define YYNRULES  86
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  662

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   298


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
      35,    36,    37,    38,    39,    40,    41,    42,    43
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    39,    39,    42,    43,    46,    47,    50,    53,    56,
      57,    58,    61,    62,    63,    66,    67,    70,    71,    74,
      75,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      89,    90,    91,    92,    93,    94,    97,    98,   101,   102,
     105,   106,   107,   110,   111,   114,   115,   118,   119,   122,
     123,   126,   127,   130,   131,   132,   133,   136,   137,   138,
     139,   140,   143,   146,   149,   150,   151,   152,   155,   156,
     159,   160,   161,   162,   165,   166,   167,   170,   171,   172,
     175,   176,   177,   180,   181,   182,   183
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
  "TYPE", "ID", "EMPTY", "STRING", "RETURN", "FORALL", "FOR", "IN",
  "IS_SET", "ADD_SET", "REMOVE", "EXISTS", "IF", "ELSE", "NOT_OP", "L_OP",
  "G_OP", "EQ_OP", "NE_OP", "LE_OP", "GE_OP", "OR_OP", "AND_OP", "INTEGER",
  "FLOAT", "THEN", "$accept", "program", "stmts", "stmt", "func_stmt",
  "var_decl_stmt", "param_list", "simple_param_list", "flex_block_struct",
  "compound_block_stmt", "block_stmts", "block_stmt", "flow_control",
  "opt_param", "for_expression", "decl_or_cond_expr", "or_cond_expr",
  "and_cond_expr", "unary_cond_expr", "eq_cond_expr", "equal_ops",
  "rel_cond_expr", "rel_ops", "set_expr", "func_call", "set_func_call",
  "simple_expr", "func_cte_expr", "func_expr", "arith_expr", "term",
  "factor", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298
};
#endif

#define YYPACT_NINF (-249)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-87)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      18,    33,    37,     7,    91,   161,   176,   370,  -249,   186,
       8,   198,    44,    16,   230,    76,    94,   557,   200,   113,
     234,   170,   190,   204,   129,   124,    12,   217,   228,   245,
     249,   276,   286,   296,  3925,  3941,  3957,  3973,   322,   327,
     273,   344,   651,   651,   345,   294,    12,   651,   399,  1555,
     401,   416,   990,  1170,   428,   431,   445,   447,   463,   307,
    1469,  1996,   827,    54,   369,   827,   827,   827,  1480,   248,
    3989,  4005,  4021,   199,   386,   475,   289,   333,   479,   516,
      42,  4037,     1,     1,     1,     1,   527,   409,   136,   450,
    1783,  3163,  1491,   256,     3,   255,     5,   232,   390,   378,
    3182,  3198,  2171,   528,   530,   571,   591,    50,   601,   609,
     610,   635,   587,  4053,   645,  2005,     4,  2031,  2072,  2081,
    2089,  2095,  3824,   651,   639,  1103,   397,   299,  1048,   745,
    1491,  1491,  1156,  1268,  1530,    57,    73,    83,    92,   125,
     155,   648,   657,   659,   674,  3841,  4069,  4085,  4101,   337,
    4117,  4133,  4149,   691,  1103,   488,  3824,   338,   493,   444,
     492,  3217,  3147,  3383,   496,  4165,  3824,  3858,  4181,  3412,
    4197,   684,  3824,  4213,   651,   720,  1132,   725,   734,   748,
     749,   765,   773,  1142,  1215,   761,   777,   791,   813,   381,
    1376,  1586,  4229,   651,   770,   436,   779,   801,   833,   837,
     858,   869,   312,   665,   805,   846,   859,   860,   114,   675,
     724,   651,   888,   895,   915,   919,  2957,  2976,  3233,  3252,
    2995,  3014,   651,  1894,   685,   929,   930,   931,   934,  1480,
    2442,  2460,    29,    79,   318,  1420,  1809,  1984,  2816,  2658,
    2478,  2496,     4,     4,   294,  2038,  1078,   621,   155,   155,
    1480,     4,  1598,  4245,   651,   732,   902,   762,   789,   936,
     939,   948,   949,  1015,  1570,   792,   815,   816,   824,   909,
    1735,  1761,   651,   711,  1876,   585,   952,   953,   964,   972,
    1510,  2152,  2189,   361,    21,   107,   207,   254,  1627,  1722,
    1962,  2228,  2622,  2246,  2264,     4,  3033,  4261,   974,   978,
     979,   830,   197,    12,   980,   985,   987,  3428,  3445,  3462,
    3479,   855,   879,  1392,  4277,   999,  1002,  1012,  1000,   212,
      12,  1013,  1024,  1027,  1011,  1019,  1020,  1023,  1057,  1058,
    1051,   413,   294,  1054,   827,   827,   827,     4,     4,  1073,
     705,   294,  1062,   827,   827,   827,   165,   165,   165,   165,
    1076,   889,  1066,   827,   827,   827,   155,   155,  1080,   941,
     294,  1068,   827,   827,   827,    88,  1480,  1692,   196,   196,
     196,   196,   196,  1606,  1698,   392,  1230,  3052,  3071,    97,
    4293,  4309,  1082,  1004,   294,  1072,   827,   827,   827,   216,
     216,   216,   216,  1086,  1029,  1081,   294,  1462,  1075,   827,
     827,   827,  2104,   293,  1510,  1510,  1712,   223,   223,   223,
     223,   223,  3496,  4325,  1083,   651,   651,  1092,    12,  1093,
     827,    54,  1480,  3513,  3530,   403,  1085,  4341,  1084,   651,
     651,  1102,    12,  1105,   827,    54,  1480,  1090,  1094,  1107,
    1844,   427,  1108,  1111,  1120,  1121,  1946,  1973,  1109,   733,
     437,  1122,  1127,  1143,  1150,     4,   751,   800,   825,   867,
     894,  3268,  3090,  1153,  1157,  1167,  1180,  3109,  3128,  2833,
    2514,   443,  1185,  1186,  1187,  1188,   151,  2851,     4,  2532,
    2676,  2550,  2568,  2586,  2604,  3287,  4357,   844,  1791,   459,
    1190,  1193,  1194,  1195,     4,  1857,  1864,  1884,  2020,  2046,
    2693,  2299,  1462,   462,   651,   485,   965,   491,   529,  1205,
    1206,  1207,  1210,   558,   954,   531,   532,   542,   543,   552,
     512,  1050,  1232,  1211,  1212,  1216,  1223,   329,   360,  2711,
       4,  2317,  2640,  2353,  2371,  2406,  2424,  3547,  1225,  1226,
    1231,  3564,  1155,  3581,  1233,   256,   134,  1220,  1240,  1246,
    1248,  1224,  1253,  1234,  1255,   256,   143,  1260,  1263,  1264,
    1275,  1277,  1249,  1261,  1265,  1266,  1276,  3303,  3322,  3338,
    3357,  2868,  2886,  2903,  2921,  2938,   845,   857,   866,   881,
     924,   586,  2728,  1279,  1063,   294,  1274,   827,   827,   827,
     236,   236,   236,   236,  2746,  2763,  2781,  2798,  1291,  1298,
    1299,  3598,  3841,  1351,  3841,  1300,  1301,  1304,  1281,  3875,
    1410,  3875,   588,  1269,   599,  1311,  1312,  1315,  1317,     4,
    1316,  1325,  1354,  1394,  1773,  3615,  3632,  3649,  3666,  3841,
     620,  3683,  1308,  1309,  1310,  1314,  3875,   624,  1318,   634,
     637,   683,   689,   695,  3700,  3841,  3892,  1323,  3875,  3909,
    3717,  3746,  3762,  1327,  3791,  1328,  1335,  1337,  3841,  3875,
    3807,  1341
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -249,  -249,  -249,  1329,  -249,     0,  -249,  -225,   357,   -14,
    -248,   214,   297,   -28,   -63,  -114,   -60,   -40,   -21,   -10,
    -230,   -57,  -233,   393,    58,   385,   742,  1273,  1815,  1556,
    1221,   798
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,     3,     4,     5,    34,    13,    77,   150,   325,
      35,   326,    37,    93,    94,    95,    96,    97,    98,    99,
     134,   100,   140,    86,   204,   205,    87,   206,   207,   208,
     209,   210
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       6,    18,   368,     6,   367,   381,   116,    -2,   107,   251,
     128,   235,   -40,   283,   -11,   158,   129,    47,   -40,   375,
     117,   -11,    15,   252,    48,     1,    12,   -40,   232,    16,
     247,    49,    50,    51,   -40,   -44,     1,     8,    29,    30,
      31,    32,    52,    53,   130,   183,   184,   233,   115,   413,
     242,   243,     7,    52,    53,   407,   145,   406,   234,   211,
     404,    88,   -61,    14,   157,   127,   427,   284,   -44,   366,
     288,   126,    89,    90,    91,    38,   -61,   161,   -57,    17,
     212,   213,   214,   215,    54,   -46,    92,   285,   -58,   250,
     159,    -4,   -57,    38,   -47,   216,   217,   -59,   -61,   -61,
     185,   185,   -58,   -43,    54,   185,   286,   441,   151,    -4,
     160,   -59,    19,   -44,   -57,   -57,   450,   287,   -46,   -46,
     -44,   218,   346,   347,   -58,   -58,   236,   -47,   -47,    45,
     -60,   308,    40,   -59,   -59,   471,   -43,   366,    46,   -68,
     604,   -36,   151,   -36,   -60,   307,   -44,   405,    44,   611,
     218,   218,   151,   151,   -36,   -36,   -36,   -45,   151,   489,
     295,    -5,   -36,   -36,   -36,   -36,   -60,   -60,   -36,   324,
     455,   503,   235,   250,   296,    41,    -6,   -36,   -36,    -5,
      38,   185,   250,   265,   456,   289,    -3,   218,   218,   218,
     -45,   -45,   218,   235,    -6,    42,   216,   217,    -8,   425,
      -7,   478,    45,   311,    -3,   108,   202,   203,   365,    43,
     379,   418,   265,   -46,    38,   479,    -8,    45,    -7,   234,
     -46,   494,    62,   288,    38,    38,   432,   328,   530,   233,
      38,    36,   185,    63,   -18,   495,   -10,   230,   231,   -44,
     234,   619,   531,   -10,   368,   -44,   -46,   -46,   -17,    70,
      64,   185,   -18,   284,    65,   620,   288,   263,   264,   403,
     -48,   211,   -38,   246,   281,   282,   -17,   -48,   -38,   185,
     287,   -44,   131,   285,    89,    90,    91,   513,   514,    -9,
     185,    66,   212,   213,   214,   215,    -9,   236,    92,   132,
     133,    67,   286,   -48,   -48,   -13,   407,   216,   217,   -47,
     -14,    68,   -13,   287,   272,   156,   -47,   -14,   236,   235,
     477,    38,   185,    76,   -68,    82,    83,   273,   274,   275,
     -83,   -83,   -83,   -83,   -48,   276,   277,   278,   279,    71,
     185,   280,   -47,   -47,    72,   -43,   152,   -83,   289,   111,
     281,   282,   -43,   -12,   166,   476,   112,   288,   288,   529,
     -12,   313,   192,   132,   133,    38,   234,   -48,   -48,   309,
     614,    54,   546,    73,   527,   235,   -45,   -38,   -43,   405,
     152,   289,    38,   -45,   -38,    10,   556,    11,    54,   235,
     152,   152,   232,   286,   528,   -48,   152,   -68,   103,   242,
     243,   -48,   109,   545,   287,   287,   232,   -46,   485,   -45,
     -45,   233,    39,   -46,   -47,   112,   -72,   555,   -70,   -39,
     -47,    55,   234,   132,   133,   233,   -39,   -48,   -48,   440,
      39,   242,   243,   -71,   236,   236,   234,   186,   186,   -46,
     -46,    55,   186,   557,   123,   -74,   -47,   -47,   -75,    38,
     112,   341,   310,   562,   -85,   -85,   -85,   -85,   219,   571,
     112,   -43,    81,   237,   -69,   515,   112,   -43,   104,   105,
     106,   -85,   289,   289,   289,   576,   327,    36,   582,   124,
     -73,    38,   112,   185,   185,   112,    54,   219,   219,   218,
     236,   110,   247,   -43,   131,    38,   113,   185,   185,   283,
      54,   -72,   247,   218,   236,   -42,   283,   -70,   -72,   -45,
     -39,   -42,   163,   -41,   -70,   -45,   -39,    39,   186,   -41,
     266,    36,   290,   165,   219,   219,   219,   603,   -68,   219,
     590,   591,   114,   168,   170,   -68,   171,   610,    36,   173,
     312,   -45,   -45,   122,   141,   -71,   142,   -74,   -75,   266,
     630,    39,   -71,   284,   -74,   -75,   288,   637,   -42,   -69,
     284,    39,    39,   288,   329,   -42,   -69,    39,   -73,   186,
     515,    20,   185,   285,   -83,   -73,   -83,   -83,   -83,   -83,
     285,   -83,    21,    22,    23,    24,    25,   143,   186,    26,
      27,    28,   286,    29,    30,    31,    32,    33,   308,   286,
     308,   -55,   -41,   287,   -76,    70,   186,   144,   -55,   -41,
     287,   -76,   307,   218,   307,   639,   149,   186,   146,   324,
     -55,   324,   112,   218,   237,   308,   147,   148,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,   645,    70,   376,   307,
     648,   308,   308,   313,   129,   237,   324,   313,    39,   186,
     -63,    70,   -63,   -64,   308,   307,   307,   -63,   324,   324,
     -64,   324,   -76,   154,   324,   -64,   174,   186,   307,   324,
     311,   289,   311,   175,   -65,   290,   -66,   328,   289,   328,
     176,   177,   178,   -84,   -84,   -84,   -84,   179,   180,   181,
     182,   -67,    39,   -79,   -79,   348,   349,   311,    55,   -65,
     -84,   -55,   183,   184,   328,   -66,   -65,   -62,   290,    39,
     -79,   -67,   -66,   311,   311,    55,   328,   328,   -67,   328,
     -55,   449,   328,   242,   243,   172,   311,   328,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,   -72,   443,   444,   445,
     395,   -70,   -82,   -82,   -82,   -82,   452,   453,   454,   -72,
     -71,   -86,   -86,   -86,   -86,   -72,   464,   465,   466,   -82,
     211,   237,   237,   333,   334,   473,   474,   475,   -86,   -85,
     -85,   -85,   -85,    89,    90,    91,    39,   -74,    56,   -70,
     335,   212,   213,   214,   215,   -70,   -85,    92,   336,   491,
     492,   493,   516,   -75,    74,    75,   216,   217,    78,   290,
     290,   290,   524,   525,   526,   -72,   -71,   -69,    39,   -74,
     186,   186,   -71,    55,   -70,   -74,   219,   237,   -77,   -77,
     348,   349,    39,   544,   186,   186,   309,    55,   309,   -73,
     219,   237,   -75,   -69,    61,   -77,   -71,   554,   -75,   -69,
     -74,   -73,   193,   -78,   -78,   348,   349,   -73,   342,   194,
     191,   191,   343,   309,    61,   191,   195,   196,   197,   417,
     -78,   -76,   -63,   198,   199,   200,   201,   -76,   -63,   309,
     309,   221,   423,   344,   -64,   153,   241,   155,   202,   203,
     -64,   -75,   309,   -65,   345,   -80,   -80,   -80,   -80,   -65,
      61,    61,   120,   121,   -69,   -73,   424,   516,   -66,   186,
     221,   221,   -80,   352,   -66,   462,   164,   242,   243,   310,
     353,   310,   -81,   -81,   -81,   -81,   327,   384,   327,   -85,
     -85,   -85,   -85,   -85,   191,   -85,   -68,   389,   390,   -81,
     354,   191,   -68,   271,   355,   294,   310,   221,   221,   221,
     219,   -67,   221,   327,   361,   362,   363,   -67,   221,   364,
     219,   385,   310,   310,   386,   327,   327,   470,   327,   242,
     243,   327,   271,   387,   388,   310,   327,   398,   399,   628,
     -84,   631,   -84,   -84,   -84,   -84,   635,   -84,   638,   400,
     585,   -85,   191,   -85,   -85,   -85,   -85,   401,   -85,   414,
     616,   617,   618,   415,   416,   420,   644,   312,   290,   312,
     421,   191,   422,   647,   329,   290,   329,   -83,   -83,   -83,
     -83,   -83,   650,   652,   428,   653,   655,   429,   656,   191,
     488,   657,   242,   243,   312,   660,   661,   430,   434,   431,
     191,   329,   -83,   -83,   -83,   -83,   -83,   241,   -83,   435,
     312,   312,   436,   329,   329,   501,   329,   242,   243,   329,
     191,   191,   -21,   312,   329,   419,   221,   221,   241,   191,
     -15,   -16,   191,   -37,   -24,   -37,   -79,   439,   -79,   -79,
     592,   593,   433,   -79,   437,   438,   -37,   -37,   -37,   613,
     191,   242,   243,   442,   -37,   -37,   -37,   -37,   294,   448,
     -37,   451,   461,   -36,   -36,   463,   469,   472,   487,   -37,
     -37,   490,   500,   191,   523,   502,   -36,   -36,   -36,   541,
     543,    61,   538,   548,   -36,   -36,   -36,   -36,   254,   551,
     -36,   294,   553,   -76,   558,   255,   -18,   559,    61,   -36,
     -36,   -22,   256,   257,   258,   -23,   560,   561,   563,   259,
     260,   261,   262,   564,   -76,   446,   447,   332,   -85,   517,
     -85,   -85,   -85,   -85,   263,   264,   459,   460,   -83,   565,
     -83,   -83,   -83,   -83,   467,   468,   566,   539,   540,   567,
     542,   -51,   601,   568,   241,   241,   241,   241,   241,   483,
     484,   549,   550,   569,   552,   -51,   -51,   -84,   -84,   -84,
     -84,   -84,   -51,   -51,   -51,   -51,   570,   271,   271,   498,
     499,   572,   573,   574,   575,   522,   577,   -51,   -51,   578,
     579,   580,   294,   294,   294,   294,   294,   294,   535,   536,
     586,   587,   588,   191,   191,   589,    61,   594,   595,   221,
     241,   -84,   596,   -84,   -84,   -84,   -84,   191,   191,   597,
      61,   598,   599,   221,   241,   -37,   -37,   600,   -82,   602,
     -82,   -82,   -82,   -82,   581,   -82,   605,    60,   -37,   -37,
     -37,   -17,   606,   191,   607,    -8,   -37,   -37,   -37,   -37,
     608,   609,   -37,   190,   190,   -29,   -63,    60,   190,   -64,
     -65,   -37,   -37,   -52,   -63,   -86,   191,   -86,   -86,   -86,
     -86,   -66,   -86,   -67,   220,   612,   -64,   -52,   -52,   240,
     -65,   -66,   191,   615,   -52,   -52,   -52,   -52,   625,    57,
     522,   -67,   191,   118,   119,   626,   627,   632,   633,   -52,
     -52,   634,   -28,   220,   220,   187,   187,   640,   641,    57,
      79,   642,   -85,   643,   -85,   -85,   -85,   -85,   191,   -85,
       0,   -77,     9,   -77,   -77,   592,   593,   190,   -77,   -25,
     -26,   -27,     0,   221,   190,   -33,   270,     0,   293,   649,
     220,   220,   220,   221,   -34,   220,   272,   629,   -35,   -31,
     -78,   220,   -78,   -78,   592,   593,   658,   -78,   659,   273,
     274,   275,   -32,     0,     0,   270,     0,   276,   277,   278,
     279,     0,   -79,   280,   -79,   -79,   337,   338,   522,   522,
     623,   624,   281,   282,     0,   190,   187,   272,   267,     0,
     -80,   294,   -80,   -80,   -80,   -80,     0,   -80,   294,     0,
     273,   274,   275,     0,   190,   272,   636,   191,   276,   277,
     278,   279,     0,     0,   280,     0,   -50,   267,   273,   274,
     275,     0,   190,   281,   282,     0,   276,   277,   278,   279,
       0,     0,   280,   190,     0,   135,     0,   330,     0,     0,
     240,   281,   282,   136,   137,   -50,   -50,   138,   139,   -50,
     -50,     0,     0,   373,   374,     0,   339,   504,     0,   377,
     378,   240,   190,     0,   505,   190,   -79,   -79,   -79,    84,
      85,   506,   507,   508,   350,   222,     0,     0,   509,   510,
     511,   512,     0,   190,     0,   358,   211,     0,     0,   223,
     224,   293,     0,   513,   514,     0,   225,   226,   227,   228,
     245,    91,   229,     0,     0,   272,   190,   212,   213,   214,
     215,   230,   231,    92,    60,     0,     0,   382,     0,   402,
     275,     0,   216,   217,   293,   211,   276,   277,   278,   279,
       0,    60,   280,     0,     0,   393,     0,     0,     0,   245,
      91,   281,   282,     0,     0,     0,   212,   213,   214,   215,
      45,     0,   -85,   -85,   -85,   -85,   -85,   457,   458,     0,
       0,   216,   217,     0,     0,     0,    57,   -84,   -84,   -84,
     -84,   -84,    59,   -84,     0,     0,     0,   240,   240,   240,
     481,   482,   -82,    57,   -82,   -82,   -82,   -82,   189,   189,
       0,     0,    59,    80,   -85,     0,   -85,   -85,   -85,   -85,
     496,   497,   -77,     0,   -77,   -77,   337,   338,   521,   102,
       0,     0,     0,     0,   239,   293,   293,   293,   293,   533,
     534,     0,     0,   -50,     0,     0,   190,   190,     0,    60,
     -50,     0,   220,   240,     0,     0,     0,     0,   102,   102,
     190,   190,   135,    60,     0,     0,   220,   240,     0,     0,
     136,   137,   -50,   -50,   138,   139,   -50,   -50,     0,     0,
     518,     0,    80,     0,     0,     0,   190,     0,     0,   189,
       0,   269,     0,   292,     0,   102,   102,   102,   187,   187,
     102,    57,     0,     0,     0,     0,   162,   222,     0,   190,
       0,     0,   187,   187,   -78,    57,   -78,   -78,   337,   338,
     269,   223,   224,     0,     0,   190,     0,   272,   225,   226,
     227,   228,     0,   521,     0,   190,     0,     0,   -74,     0,
     331,   402,   275,   230,   231,   -74,     0,     0,   276,   277,
     278,   279,   -79,   -79,   -79,   391,   392,   -74,   -79,   340,
       0,   190,     0,   281,   282,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,     0,     0,     0,   220,   351,   -82,   -82,
     -82,   -82,   -82,     0,   -82,   518,   220,   583,   359,   -81,
       0,   -81,   -81,   -81,   -81,   239,   -81,     0,   244,     0,
     -85,   -85,   -85,   -85,   -85,     0,   -85,   125,   -86,   -86,
     -86,   -86,   -86,     0,   -86,     0,   239,   331,   -85,     0,
     383,   621,   622,     0,     0,   -74,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   293,     0,     0,     0,   394,     0,
       0,   293,     0,     0,   -74,     0,   292,     0,     0,     0,
     190,    58,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -86,   351,   -86,   -86,   -86,   -86,     0,   188,   188,    59,
       0,    58,   188,     0,   -85,   -85,   -85,   -85,   -85,   292,
     -85,   -77,   -77,   -77,   391,   392,    59,   -77,   101,     0,
       0,   396,   -85,   238,   -85,   -85,   -85,   -85,     0,   -85,
     397,   -78,   -78,   -78,   391,   392,     0,   -78,     0,   360,
     -85,   -85,   -85,   -85,   -85,   -85,     0,   101,   101,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,     0,     0,   -85,
       0,     0,   239,   239,   480,     0,     0,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,     0,     0,     0,   188,     0,
     268,     0,   291,     0,   101,   101,   101,     0,     0,   101,
       0,     0,   -80,   520,   -80,   -80,   -80,   -80,     0,     0,
     292,   292,   292,   532,     0,     0,     0,     0,   -75,   268,
       0,   189,   189,     0,    59,   -75,     0,   102,   239,   -81,
       0,   -81,   -81,   -81,   -81,   189,   189,   -75,    59,   188,
     -75,   102,   239,     0,     0,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -82,   -82,   -82,   -82,   -82,   188,   -75,
       0,   340,   -86,   -86,   -86,   -86,   -86,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,     0,   188,   -80,   -80,   -80,
     -80,   -80,     0,   -80,   359,     0,     0,   188,   -85,   -85,
     -85,   -85,   -85,   244,   238,   -85,   -85,   -85,   -85,   -85,
     383,   -85,     0,   -81,   -81,   -81,   -81,   -81,   520,   -81,
     584,     0,     0,   -85,     0,   238,     0,     0,     0,   188,
       0,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -77,
     -77,   -77,    84,    85,     0,     0,   394,   188,   -78,   -78,
     -78,    84,    85,     0,     0,   291,   -80,   -80,   -80,   -80,
     -80,   102,   -81,   -81,   -81,   -81,   -81,     0,     0,   396,
     -85,   102,   -85,   -85,   -85,   -85,     0,   -85,    58,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   291,   -85,
       0,     0,     0,     0,     0,    58,     0,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -83,   292,
     -83,   -83,   -83,   -83,     0,   -83,   292,     0,     0,     0,
       0,     0,     0,     0,     0,   584,     0,   -83,   -54,   248,
     249,   238,   238,     0,   -54,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,     0,     0,   -84,   -54,   -84,   -84,   -84,
     -84,     0,   -84,     0,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,   519,     0,   -84,     0,     0,     0,     0,   291,
     291,   291,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     188,   188,     0,    58,   -56,     0,   101,   238,     0,     0,
       0,   -56,     0,     0,   188,   188,     0,    58,     0,     0,
     101,   238,   -79,   -56,   -79,   -79,   410,   411,     0,   -79,
       0,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,     0,
     -82,   -79,   -82,   -82,   -82,   -82,     0,   -82,     0,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,     0,     0,   -82,
       0,     0,     0,     0,     0,     0,     0,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -86,     0,   -86,   -86,   -86,
     -86,     0,   -86,     0,     0,     0,     0,   519,     0,   188,
       0,     0,     0,   -85,   -86,   -85,   -85,   -85,   -85,     0,
     -85,     0,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
       0,     0,   -85,     0,     0,     0,     0,     0,     0,     0,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,     0,   -77,
     101,   -77,   -77,   410,   411,     0,   -77,     0,     0,     0,
     101,     0,     0,     0,     0,     0,     0,   -78,   -77,   -78,
     -78,   410,   411,     0,   -78,     0,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,     0,     0,   -78,     0,     0,     0,
       0,     0,     0,     0,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -80,     0,   -80,   -80,   -80,   -80,   291,   -80,
       0,     0,     0,     0,     0,   291,     0,     0,     0,     0,
     -81,   -80,   -81,   -81,   -81,   -81,     0,   -81,     0,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,     0,   -83,   -81,
     -83,   -83,   -83,   -83,     0,     0,     0,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,     0,   -84,   -83,   -84,   -84,
     -84,   -84,     0,     0,     0,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,     0,   -79,   -84,   -79,   -79,   371,   372,
       0,     0,     0,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,     0,   -82,   -79,   -82,   -82,   -82,   -82,     0,     0,
       0,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,     0,
     -86,   -82,   -86,   -86,   -86,   -86,     0,     0,     0,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,     0,   -85,   -86,
     -85,   -85,   -85,   -85,     0,     0,     0,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,     0,   -77,   -85,   -77,   -77,
     371,   372,     0,     0,     0,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,     0,   -78,   -77,   -78,   -78,   371,   372,
       0,     0,     0,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,     0,   -80,   -78,   -80,   -80,   -80,   -80,     0,     0,
       0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,     0,
     -81,   -80,   -81,   -81,   -81,   -81,     0,     0,     0,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,     0,   -54,   -81,
     408,   409,     0,     0,     0,   -54,     0,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,     0,   -53,   -54,   408,   409,
       0,     0,     0,   -53,     0,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,   -54,     0,   -54,   -53,   369,   370,     0,     0,
       0,     0,     0,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,     0,   -53,   -54,   369,   370,     0,     0,     0,     0,
       0,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -76,
       0,   -53,     0,     0,     0,     0,   -76,     0,     0,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -49,   -76,     0,
       0,     0,     0,     0,   -49,     0,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -63,     0,   135,     0,     0,     0,
       0,   -63,     0,     0,   136,   137,   -49,   -49,   138,   139,
     -49,   -49,   -64,   -63,     0,     0,     0,     0,     0,   -64,
       0,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -65,
       0,   -64,     0,     0,     0,     0,   -65,     0,     0,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   -66,   -65,     0,
       0,     0,     0,     0,   -66,     0,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -67,     0,   -66,     0,     0,     0,
       0,   -67,     0,     0,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -56,   -67,     0,     0,     0,     0,     0,     0,
       0,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -76,
       0,   -56,     0,     0,     0,     0,     0,     0,     0,   -56,
     -56,   -56,   -56,   -56,   -56,   -56,   -56,   -49,   -76,     0,
       0,     0,     0,     0,     0,     0,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -63,     0,   135,     0,     0,     0,
       0,     0,     0,     0,   136,   137,   -49,   -49,   138,   139,
     -49,   -49,   -64,   -63,     0,     0,     0,     0,     0,     0,
       0,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -65,
       0,   -64,     0,     0,     0,     0,     0,     0,     0,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   -66,   -65,     0,
       0,     0,     0,     0,     0,     0,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -67,     0,   -66,     0,     0,     0,
       0,     0,     0,     0,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,     0,   -67,   -83,   -83,   -83,   -83,   -83,     0,
     -83,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,     0,
       0,     0,   -83,   -84,   -84,   -84,   -84,   -84,     0,   -84,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,     0,     0,
       0,   -84,   -79,   -79,   -79,   356,   357,     0,   -79,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,     0,     0,     0,
     -79,   -82,   -82,   -82,   -82,   -82,     0,   -82,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,     0,     0,     0,   -82,
     -85,   -85,   -85,   -85,   -85,     0,   -85,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,     0,     0,     0,   -85,   -77,
     -77,   -77,   356,   357,     0,   -77,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,     0,     0,     0,   -77,   -78,   -78,
     -78,   356,   357,     0,   -78,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,     0,     0,     0,   -78,   -86,   -86,   -86,
     -86,   -86,     0,   -86,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,     0,     0,     0,   -86,   -80,   -80,   -80,   -80,
     -80,     0,   -80,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,     0,     0,     0,   -80,   -81,   -81,   -81,   -81,   -81,
       0,   -81,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
       0,     0,     0,   -81,   -53,   248,   249,     0,     0,     0,
     -53,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,     0,
     -55,     0,   -53,     0,     0,     0,   -55,     0,     0,     0,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -55,   -50,
       0,     0,     0,     0,     0,   -50,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,     0,   -56,     0,   135,     0,     0,
       0,   -56,     0,     0,     0,   136,   137,   -50,   -50,   138,
     139,   -50,   -50,   -56,   -49,     0,     0,     0,     0,     0,
     -49,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,     0,
     -74,     0,   135,     0,     0,     0,   -74,     0,     0,     0,
     136,   137,   -49,   -49,   138,   139,   -49,   -49,   -74,   -75,
       0,     0,     0,     0,     0,   -75,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,     0,   -76,     0,   -75,     0,     0,
       0,   -76,     0,     0,     0,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -76,   -63,     0,     0,     0,     0,     0,
     -63,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,     0,
     -64,     0,   -63,     0,     0,     0,   -64,     0,     0,     0,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -64,   -65,
       0,     0,     0,     0,     0,   -65,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,     0,   -66,     0,   -65,     0,     0,
       0,   -66,     0,     0,     0,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -66,   -67,     0,     0,     0,     0,     0,
     -67,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,     0,
       0,     0,   -67,     0,     0,     0,     0,   -30,     0,     0,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -30,   -30,
     -30,   -30,   -30,     0,     0,   -30,   -30,   -30,     0,   -30,
     -30,   -30,   -30,   -30,   167,   314,     0,    68,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   315,   316,   317,
     318,   319,   -21,     0,   320,   321,   322,     0,    29,    30,
      31,    32,   323,   -21,   -21,   -21,   -21,   -21,     0,   -15,
     -21,   -21,   -21,     0,   -21,   -21,   -21,   -21,   -21,   -21,
     -15,   -15,   -15,   -15,   -15,     0,   -16,   -15,   -15,   -15,
       0,   -15,   -15,   -15,   -15,   -15,   -15,   -16,   -16,   -16,
     -16,   -16,     0,   -24,   -16,   -16,   -16,     0,   -16,   -16,
     -16,   -16,   -16,   -16,   -24,   -24,   -24,   -24,   -24,     0,
     -18,   -24,   -24,   -24,     0,   -24,   -24,   -24,   -24,   -24,
     -24,   -18,   -18,   -18,   -18,   -18,     0,   -22,   -18,   -18,
     -18,     0,   -18,   -18,   -18,   -18,   -18,   -18,   -22,   -22,
     -22,   -22,   -22,     0,   -23,   -22,   -22,   -22,     0,   -22,
     -22,   -22,   -22,   -22,   -22,   -23,   -23,   -23,   -23,   -23,
       0,   -17,   -23,   -23,   -23,     0,   -23,   -23,   -23,   -23,
     -23,   -23,   -17,   -17,   -17,   -17,   -17,     0,    -8,   -17,
     -17,   -17,     0,   -17,   -17,   -17,   -17,   -17,   -17,    -8,
      -8,    -8,    -8,    -8,     0,   -29,    -8,    -8,    -8,     0,
      -8,    -8,    -8,    -8,    -8,    -8,   -29,   -29,   -29,   -29,
     -29,     0,   -28,   -29,   -29,   -29,     0,   -29,   -29,   -29,
     -29,   -29,   -29,   -28,   -28,   -28,   -28,   -28,     0,   -25,
     -28,   -28,   -28,     0,   -28,   -28,   -28,   -28,   -28,   -28,
     -25,   -25,   -25,   -25,   -25,     0,   -26,   -25,   -25,   -25,
       0,   -25,   -25,   -25,   -25,   -25,   -25,   -26,   -26,   -26,
     -26,   -26,     0,   -27,   -26,   -26,   -26,     0,   -26,   -26,
     -26,   -26,   -26,   -26,   -27,   -27,   -27,   -27,   -27,     0,
     -33,   -27,   -27,   -27,     0,   -27,   -27,   -27,   -27,   -27,
     -27,   -33,   -33,   -33,   -33,   -33,     0,   -30,   -33,   -33,
     -33,     0,   -33,   -33,   -33,   -33,   -33,   -33,   -30,   -30,
     -30,   -30,   -30,     0,   -34,   -30,   -30,   -30,     0,   -30,
     -30,   -30,   -30,   -30,   646,   -34,   -34,   -34,   -34,   -34,
       0,   -35,   -34,   -34,   -34,     0,   -34,   -34,   -34,   -34,
     -34,   -34,   -35,   -35,   -35,   -35,   -35,     0,     0,   -35,
     -35,   -35,     0,   -35,   -35,   -35,   -35,   -35,   -35,   314,
       0,   422,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   315,   316,   317,   318,   319,   -31,     0,   320,   321,
     322,     0,    29,    30,    31,    32,   323,   -31,   -31,   -31,
     -31,   -31,     0,     0,   -31,   -31,   -31,     0,   -31,   -31,
     -31,   -31,   -31,   -31,   314,     0,   436,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   315,   316,   317,   318,
     319,   -32,     0,   320,   321,   322,     0,    29,    30,    31,
      32,   323,   -32,   -32,   -32,   -32,   -32,   253,     0,   -32,
     -32,   -32,     0,   -32,   -32,   -32,   -32,   -32,   -32,    21,
      22,    23,    24,    25,   297,     0,    26,    27,    28,     0,
      29,    30,    31,    32,    33,     0,   298,   299,   300,   301,
     302,   253,     0,   303,   304,   305,     0,    29,    30,    31,
      32,   306,     0,    21,    22,    23,    24,    25,   314,     0,
      26,    27,    28,     0,    29,    30,    31,    32,   169,     0,
     315,   316,   317,   318,   319,   297,     0,   320,   321,   322,
       0,    29,    30,    31,    32,   323,     0,   298,   299,   300,
     301,   302,   314,     0,   303,   304,   305,     0,    29,    30,
      31,    32,   651,     0,   315,   316,   317,   318,   319,   -21,
       0,   320,   321,   322,     0,    29,    30,    31,    32,   654,
     -21,   -21,   -21,   -21,   -21,    69,     0,   -21,   -21,   -21,
       0,   -21,   -21,   -21,   -21,   -21,    21,    22,    23,    24,
      25,   -20,     0,    26,    27,    28,     0,    29,    30,    31,
      32,    33,   -20,   -20,   -20,   -20,   -20,   -24,     0,   -20,
     -20,   -20,     0,   -20,   -20,   -20,   -20,   -20,   -24,   -24,
     -24,   -24,   -24,   -19,     0,   -24,   -24,   -24,     0,   -24,
     -24,   -24,   -24,   -24,   -19,   -19,   -19,   -19,   -19,   -22,
       0,   -19,   -19,   -19,     0,   -19,   -19,   -19,   -19,   -19,
     -22,   -22,   -22,   -22,   -22,   -23,     0,   -22,   -22,   -22,
       0,   -22,   -22,   -22,   -22,   -22,   -23,   -23,   -23,   -23,
     -23,   -29,     0,   -23,   -23,   -23,     0,   -23,   -23,   -23,
     -23,   -23,   -29,   -29,   -29,   -29,   -29,   -28,     0,   -29,
     -29,   -29,     0,   -29,   -29,   -29,   -29,   -29,   -28,   -28,
     -28,   -28,   -28,   -25,     0,   -28,   -28,   -28,     0,   -28,
     -28,   -28,   -28,   -28,   -25,   -25,   -25,   -25,   -25,   -26,
       0,   -25,   -25,   -25,     0,   -25,   -25,   -25,   -25,   -25,
     -26,   -26,   -26,   -26,   -26,   -27,     0,   -26,   -26,   -26,
       0,   -26,   -26,   -26,   -26,   -26,   -27,   -27,   -27,   -27,
     -27,   -33,     0,   -27,   -27,   -27,     0,   -27,   -27,   -27,
     -27,   -27,   -33,   -33,   -33,   -33,   -33,   -15,     0,   -33,
     -33,   -33,     0,   -33,   -33,   -33,   -33,   -33,   -15,   -15,
     -15,   -15,   -15,   -16,     0,   -15,   -15,   -15,     0,   -15,
     -15,   -15,   -15,   -15,   -16,   -16,   -16,   -16,   -16,   -34,
       0,   -16,   -16,   -16,     0,   -16,   -16,   -16,   -16,   -16,
     -34,   -34,   -34,   -34,   -34,   -35,     0,   -34,   -34,   -34,
       0,   -34,   -34,   -34,   -34,   -34,   -35,   -35,   -35,   -35,
     -35,   -31,     0,   -35,   -35,   -35,     0,   -35,   -35,   -35,
     -35,   -35,   -31,   -31,   -31,   -31,   -31,   -32,     0,   -31,
     -31,   -31,     0,   -31,   -31,   -31,   -31,   -31,   -32,   -32,
     -32,   -32,   -32,    -8,     0,   -32,   -32,   -32,     0,   -32,
     -32,   -32,   -32,   -32,    -8,    -8,    -8,    -8,    -8,   380,
       0,    -8,    -8,    -8,     0,    -8,    -8,    -8,    -8,    -8,
      21,    22,    23,    24,    25,   412,     0,    26,    27,    28,
       0,    29,    30,    31,    32,    33,    21,    22,    23,    24,
      25,   426,     0,    26,    27,    28,     0,    29,    30,    31,
      32,    33,    21,    22,    23,    24,    25,   -18,     0,    26,
      27,    28,     0,    29,    30,    31,    32,    33,   -18,   -18,
     -18,   -18,   -18,   486,     0,   -18,   -18,   -18,     0,   -18,
     -18,   -18,   -18,   -18,    21,    22,    23,    24,    25,   537,
       0,    26,    27,    28,     0,    29,    30,    31,    32,    33,
      21,    22,    23,    24,    25,   547,     0,    26,    27,    28,
       0,    29,    30,    31,    32,    33,    21,    22,    23,    24,
      25,   -17,     0,    26,    27,    28,     0,    29,    30,    31,
      32,    33,   -17,   -17,   -17,   -17,   -17,     0,     0,   -17,
     -17,   -17,     0,   -17,   -17,   -17,   -17,   -17
};

static const yytype_int16 yycheck[] =
{
       0,    15,   235,     3,   234,   253,     5,     0,    68,     5,
       7,    68,     7,   127,     6,   129,    13,     5,    13,   244,
      19,    13,     6,    19,    12,    18,    18,     6,    68,    13,
      93,    19,    20,    21,    13,     6,    18,     0,    26,    27,
      28,    29,    41,    42,    39,    41,    42,    68,     6,   297,
       8,     9,    19,    41,    42,   288,     6,   287,    68,     5,
      39,     7,     5,    19,   127,    93,   314,   127,    39,    40,
     127,    92,    18,    19,    20,    17,    19,   134,     5,     3,
      26,    27,    28,    29,    26,     6,    32,   127,     5,    39,
     130,     0,    19,    35,     6,    41,    42,     5,    41,    42,
      42,    43,    19,     6,    46,    47,   127,   332,   122,    18,
     131,    19,    18,     6,    41,    42,   341,   127,    39,    40,
      13,    63,     8,     9,    41,    42,    68,    39,    40,     5,
       5,   145,    19,    41,    42,   360,    39,    40,    14,    25,
       6,     5,   156,     7,    19,   145,    39,    40,    19,     6,
      92,    93,   166,   167,    18,    19,    20,     6,   172,   384,
       5,     0,    26,    27,    28,    29,    41,    42,    32,   169,
       5,   396,   229,    39,    19,     5,     0,    41,    42,    18,
     122,   123,    39,   125,    19,   127,     0,   129,   130,   131,
      39,    40,   134,   250,    18,     5,    41,    42,     0,   313,
       0,     5,     5,   145,    18,     6,    41,    42,   229,     5,
     250,    14,   154,     6,   156,    19,    18,     5,    18,   229,
      13,     5,     5,   280,   166,   167,    14,   169,     5,   250,
     172,    17,   174,     5,     0,    19,     6,    41,    42,     7,
     250,     5,    19,    13,   477,    13,    39,    40,     0,    35,
       5,   193,    18,   313,     5,    19,   313,    41,    42,   280,
       6,     5,     7,     7,    41,    42,    18,    13,    13,   211,
     280,    39,    40,   313,    18,    19,    20,    41,    42,     6,
     222,     5,    26,    27,    28,    29,    13,   229,    32,    35,
      36,     5,   313,    39,    40,     6,   529,    41,    42,     6,
       6,     5,    13,   313,     5,     6,    13,    13,   250,   366,
     367,   253,   254,    19,     7,     8,     9,    18,    19,    20,
       8,     9,    10,    11,     6,    26,    27,    28,    29,     7,
     272,    32,    39,    40,     7,     6,   122,    25,   280,     6,
      41,    42,    13,     6,     6,   366,    13,   404,   405,   406,
      13,    13,     7,    35,    36,   297,   366,    39,    40,   145,
     585,   303,   422,    19,   404,   422,     6,     6,    39,    40,
     156,   313,   314,    13,    13,     5,   436,     7,   320,   436,
     166,   167,   422,   404,   405,     7,   172,     6,    19,     8,
       9,    13,     6,   421,   404,   405,   436,     7,     6,    39,
      40,   422,    17,    13,     7,    13,     7,   435,     7,     6,
      13,    26,   422,    35,    36,   436,    13,    39,    40,     6,
      35,     8,     9,     7,   366,   367,   436,    42,    43,    39,
      40,    46,    47,     6,    25,     7,    39,    40,     7,   381,
      13,     5,   145,     6,     8,     9,    10,    11,    63,     6,
      13,     7,     7,    68,     7,   397,    13,    13,    65,    66,
      67,    25,   404,   405,   406,     6,   169,   253,     6,    19,
       7,   413,    13,   415,   416,    13,   418,    92,    93,   421,
     422,     6,   545,    39,    40,   427,     7,   429,   430,   603,
     432,     6,   555,   435,   436,     7,   610,     6,    13,     7,
       7,    13,   145,     7,    13,    13,    13,   122,   123,    13,
     125,   297,   127,   156,   129,   130,   131,   545,     6,   134,
       8,     9,     6,   166,   167,    13,   169,   555,   314,   172,
     145,    39,    40,     6,     6,     6,     6,     6,     6,   154,
     603,   156,    13,   603,    13,    13,   603,   610,     6,     6,
     610,   166,   167,   610,   169,    13,    13,   172,     6,   174,
     502,     4,   504,   603,     6,    13,     8,     9,    10,    11,
     610,    13,    15,    16,    17,    18,    19,     6,   193,    22,
      23,    24,   603,    26,    27,    28,    29,    30,   602,   610,
     604,     6,     6,   603,     6,   381,   211,     6,    13,    13,
     610,    13,   602,   545,   604,     6,    19,   222,     7,   609,
      25,   611,    13,   555,   229,   629,     7,     7,    33,    34,
      35,    36,    37,    38,    39,    40,     6,   413,     7,   629,
       6,   645,   646,    13,    13,   250,   636,    13,   253,   254,
       6,   427,     7,     6,   658,   645,   646,    13,   648,   649,
      13,   651,     7,    14,   654,     7,     5,   272,   658,   659,
     602,   603,   604,    12,     7,   280,     7,   609,   610,   611,
      19,    20,    21,     8,     9,    10,    11,    26,    27,    28,
      29,     7,   297,     8,     9,    10,    11,   629,   303,     6,
      25,     6,    41,    42,   636,     6,    13,     6,   313,   314,
      25,     6,    13,   645,   646,   320,   648,   649,    13,   651,
      25,     6,   654,     8,     9,    31,   658,   659,    33,    34,
      35,    36,    37,    38,    39,    40,     6,   334,   335,   336,
      19,     6,     8,     9,    10,    11,   343,   344,   345,     7,
       6,     8,     9,    10,    11,    13,   353,   354,   355,    25,
       5,   366,   367,     5,     5,   362,   363,   364,    25,     8,
       9,    10,    11,    18,    19,    20,   381,     6,    26,     7,
       5,    26,    27,    28,    29,    13,    25,    32,     5,   386,
     387,   388,   397,     6,    42,    43,    41,    42,    46,   404,
     405,   406,   399,   400,   401,    25,     7,     6,   413,     7,
     415,   416,    13,   418,    25,    13,   421,   422,     8,     9,
      10,    11,   427,   420,   429,   430,   602,   432,   604,     6,
     435,   436,     7,     7,    26,    25,    25,   434,    13,    13,
      25,     7,     5,     8,     9,    10,    11,    13,     5,    12,
      42,    43,     5,   629,    46,    47,    19,    20,    21,    19,
      25,     7,     7,    26,    27,    28,    29,    13,    13,   645,
     646,    63,     7,     5,     7,   123,    68,   125,    41,    42,
      13,    25,   658,     7,     5,     8,     9,    10,    11,    13,
      82,    83,    84,    85,    25,    25,     7,   502,     7,   504,
      92,    93,    25,     5,    13,     6,   154,     8,     9,   602,
       5,   604,     8,     9,    10,    11,   609,     5,   611,     7,
       8,     9,    10,    11,   116,    13,     7,     8,     9,    25,
       5,   123,    13,   125,     5,   127,   629,   129,   130,   131,
     545,     7,   134,   636,     5,     5,     5,    13,   140,     5,
     555,     5,   645,   646,     5,   648,   649,     6,   651,     8,
       9,   654,   154,     5,     5,   658,   659,     5,     5,   602,
       6,   604,     8,     9,    10,    11,   609,    13,   611,     5,
       5,     6,   174,     8,     9,    10,    11,     5,    13,     5,
     587,   588,   589,     5,     5,     5,   629,   602,   603,   604,
       5,   193,     5,   636,   609,   610,   611,     7,     8,     9,
      10,    11,   645,   646,     5,   648,   649,     5,   651,   211,
       6,   654,     8,     9,   629,   658,   659,     5,     5,    19,
     222,   636,     7,     8,     9,    10,    11,   229,    13,     5,
     645,   646,     5,   648,   649,     6,   651,     8,     9,   654,
     242,   243,    31,   658,   659,   303,   248,   249,   250,   251,
      31,    31,   254,     5,    31,     7,     6,     6,     8,     9,
      10,    11,   320,    13,     7,     7,    18,    19,    20,     6,
     272,     8,     9,    19,    26,    27,    28,    29,   280,     6,
      32,    19,     6,     5,     6,    19,     6,    19,     6,    41,
      42,    19,     6,   295,    19,    14,    18,    19,    20,     7,
       7,   303,    19,    19,    26,    27,    28,    29,     5,     7,
      32,   313,     7,     6,     6,    12,    31,     6,   320,    41,
      42,    31,    19,    20,    21,    31,     6,     6,     6,    26,
      27,    28,    29,     6,    25,   337,   338,     5,     6,   397,
       8,     9,    10,    11,    41,    42,   348,   349,     6,     6,
       8,     9,    10,    11,   356,   357,     6,   415,   416,     6,
     418,     5,     7,     6,   366,   367,   368,   369,   370,   371,
     372,   429,   430,     6,   432,    19,    20,     7,     8,     9,
      10,    11,    26,    27,    28,    29,     6,   389,   390,   391,
     392,     6,     6,     6,     6,   397,     6,    41,    42,     6,
       6,     6,   404,   405,   406,   407,   408,   409,   410,   411,
       5,     5,     5,   415,   416,     5,   418,     6,     6,   421,
     422,     6,     6,     8,     9,    10,    11,   429,   430,     6,
     432,     6,     6,   435,   436,     5,     6,     6,     6,     6,
       8,     9,    10,    11,   502,    13,     6,    26,    18,    19,
      20,    31,     6,   455,     6,    31,    26,    27,    28,    29,
       7,     6,    32,    42,    43,    31,     6,    46,    47,     6,
       6,    41,    42,     5,    25,     6,   478,     8,     9,    10,
      11,     6,    13,     6,    63,     6,    25,    19,    20,    68,
      25,    25,   494,    19,    26,    27,    28,    29,     7,    26,
     502,    25,   504,    82,    83,     7,     7,     7,     7,    41,
      42,     7,    31,    92,    93,    42,    43,     6,     6,    46,
      47,     6,     6,     6,     8,     9,    10,    11,   530,    13,
      -1,     6,     3,     8,     9,    10,    11,   116,    13,    31,
      31,    31,    -1,   545,   123,    31,   125,    -1,   127,    31,
     129,   130,   131,   555,    31,   134,     5,     6,    31,    31,
       6,   140,     8,     9,    10,    11,    31,    13,    31,    18,
      19,    20,    31,    -1,    -1,   154,    -1,    26,    27,    28,
      29,    -1,     6,    32,     8,     9,    10,    11,   590,   591,
     592,   593,    41,    42,    -1,   174,   123,     5,   125,    -1,
       6,   603,     8,     9,    10,    11,    -1,    13,   610,    -1,
      18,    19,    20,    -1,   193,     5,     6,   619,    26,    27,
      28,    29,    -1,    -1,    32,    -1,     6,   154,    18,    19,
      20,    -1,   211,    41,    42,    -1,    26,    27,    28,    29,
      -1,    -1,    32,   222,    -1,    25,    -1,   174,    -1,    -1,
     229,    41,    42,    33,    34,    35,    36,    37,    38,    39,
      40,    -1,    -1,   242,   243,    -1,   193,     5,    -1,   248,
     249,   250,   251,    -1,    12,   254,     7,     8,     9,    10,
      11,    19,    20,    21,   211,     5,    -1,    -1,    26,    27,
      28,    29,    -1,   272,    -1,   222,     5,    -1,    -1,    19,
      20,   280,    -1,    41,    42,    -1,    26,    27,    28,    29,
      19,    20,    32,    -1,    -1,     5,   295,    26,    27,    28,
      29,    41,    42,    32,   303,    -1,    -1,   254,    -1,    19,
      20,    -1,    41,    42,   313,     5,    26,    27,    28,    29,
      -1,   320,    32,    -1,    -1,   272,    -1,    -1,    -1,    19,
      20,    41,    42,    -1,    -1,    -1,    26,    27,    28,    29,
       5,    -1,     7,     8,     9,    10,    11,   346,   347,    -1,
      -1,    41,    42,    -1,    -1,    -1,   303,     7,     8,     9,
      10,    11,    26,    13,    -1,    -1,    -1,   366,   367,   368,
     369,   370,     6,   320,     8,     9,    10,    11,    42,    43,
      -1,    -1,    46,    47,     6,    -1,     8,     9,    10,    11,
     389,   390,     6,    -1,     8,     9,    10,    11,   397,    63,
      -1,    -1,    -1,    -1,    68,   404,   405,   406,   407,   408,
     409,    -1,    -1,     6,    -1,    -1,   415,   416,    -1,   418,
      13,    -1,   421,   422,    -1,    -1,    -1,    -1,    92,    93,
     429,   430,    25,   432,    -1,    -1,   435,   436,    -1,    -1,
      33,    34,    35,    36,    37,    38,    39,    40,    -1,    -1,
     397,    -1,   116,    -1,    -1,    -1,   455,    -1,    -1,   123,
      -1,   125,    -1,   127,    -1,   129,   130,   131,   415,   416,
     134,   418,    -1,    -1,    -1,    -1,   140,     5,    -1,   478,
      -1,    -1,   429,   430,     6,   432,     8,     9,    10,    11,
     154,    19,    20,    -1,    -1,   494,    -1,     5,    26,    27,
      28,    29,    -1,   502,    -1,   504,    -1,    -1,     6,    -1,
     174,    19,    20,    41,    42,    13,    -1,    -1,    26,    27,
      28,    29,     7,     8,     9,    10,    11,    25,    13,   193,
      -1,   530,    -1,    41,    42,    33,    34,    35,    36,    37,
      38,    39,    40,    -1,    -1,    -1,   545,   211,     7,     8,
       9,    10,    11,    -1,    13,   502,   555,   504,   222,     6,
      -1,     8,     9,    10,    11,   229,    13,    -1,     5,    -1,
       7,     8,     9,    10,    11,    -1,    13,    14,     7,     8,
       9,    10,    11,    -1,    13,    -1,   250,   251,    25,    -1,
     254,   590,   591,    -1,    -1,     6,    33,    34,    35,    36,
      37,    38,    39,    40,   603,    -1,    -1,    -1,   272,    -1,
      -1,   610,    -1,    -1,    25,    -1,   280,    -1,    -1,    -1,
     619,    26,    33,    34,    35,    36,    37,    38,    39,    40,
       6,   295,     8,     9,    10,    11,    -1,    42,    43,   303,
      -1,    46,    47,    -1,     7,     8,     9,    10,    11,   313,
      13,     7,     8,     9,    10,    11,   320,    13,    63,    -1,
      -1,     5,     6,    68,     8,     9,    10,    11,    -1,    13,
      14,     7,     8,     9,    10,    11,    -1,    13,    -1,     5,
       6,    25,     8,     9,    10,    11,    -1,    92,    93,    33,
      34,    35,    36,    37,    38,    39,    40,    -1,    -1,    25,
      -1,    -1,   366,   367,   368,    -1,    -1,    33,    34,    35,
      36,    37,    38,    39,    40,    -1,    -1,    -1,   123,    -1,
     125,    -1,   127,    -1,   129,   130,   131,    -1,    -1,   134,
      -1,    -1,     6,   397,     8,     9,    10,    11,    -1,    -1,
     404,   405,   406,   407,    -1,    -1,    -1,    -1,     6,   154,
      -1,   415,   416,    -1,   418,    13,    -1,   421,   422,     6,
      -1,     8,     9,    10,    11,   429,   430,    25,   432,   174,
       6,   435,   436,    -1,    -1,    33,    34,    35,    36,    37,
      38,    39,    40,     7,     8,     9,    10,    11,   193,    25,
      -1,   455,     7,     8,     9,    10,    11,    33,    34,    35,
      36,    37,    38,    39,    40,    -1,   211,     7,     8,     9,
      10,    11,    -1,    13,   478,    -1,    -1,   222,     7,     8,
       9,    10,    11,     5,   229,     7,     8,     9,    10,    11,
     494,    13,    -1,     7,     8,     9,    10,    11,   502,    13,
     504,    -1,    -1,    25,    -1,   250,    -1,    -1,    -1,   254,
      -1,    33,    34,    35,    36,    37,    38,    39,    40,     7,
       8,     9,    10,    11,    -1,    -1,   530,   272,     7,     8,
       9,    10,    11,    -1,    -1,   280,     7,     8,     9,    10,
      11,   545,     7,     8,     9,    10,    11,    -1,    -1,     5,
       6,   555,     8,     9,    10,    11,    -1,    13,   303,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   313,    25,
      -1,    -1,    -1,    -1,    -1,   320,    -1,    33,    34,    35,
      36,    37,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     6,   603,
       8,     9,    10,    11,    -1,    13,   610,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   619,    -1,    25,     7,     8,
       9,   366,   367,    -1,    13,    33,    34,    35,    36,    37,
      38,    39,    40,    -1,    -1,     6,    25,     8,     9,    10,
      11,    -1,    13,    -1,    33,    34,    35,    36,    37,    38,
      39,    40,   397,    -1,    25,    -1,    -1,    -1,    -1,   404,
     405,   406,    33,    34,    35,    36,    37,    38,    39,    40,
     415,   416,    -1,   418,     6,    -1,   421,   422,    -1,    -1,
      -1,    13,    -1,    -1,   429,   430,    -1,   432,    -1,    -1,
     435,   436,     6,    25,     8,     9,    10,    11,    -1,    13,
      -1,    33,    34,    35,    36,    37,    38,    39,    40,    -1,
       6,    25,     8,     9,    10,    11,    -1,    13,    -1,    33,
      34,    35,    36,    37,    38,    39,    40,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    35,
      36,    37,    38,    39,    40,     6,    -1,     8,     9,    10,
      11,    -1,    13,    -1,    -1,    -1,    -1,   502,    -1,   504,
      -1,    -1,    -1,     6,    25,     8,     9,    10,    11,    -1,
      13,    -1,    33,    34,    35,    36,    37,    38,    39,    40,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    34,    35,    36,    37,    38,    39,    40,    -1,     6,
     545,     8,     9,    10,    11,    -1,    13,    -1,    -1,    -1,
     555,    -1,    -1,    -1,    -1,    -1,    -1,     6,    25,     8,
       9,    10,    11,    -1,    13,    -1,    33,    34,    35,    36,
      37,    38,    39,    40,    -1,    -1,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,    38,
      39,    40,     6,    -1,     8,     9,    10,    11,   603,    13,
      -1,    -1,    -1,    -1,    -1,   610,    -1,    -1,    -1,    -1,
       6,    25,     8,     9,    10,    11,    -1,    13,    -1,    33,
      34,    35,    36,    37,    38,    39,    40,    -1,     6,    25,
       8,     9,    10,    11,    -1,    -1,    -1,    33,    34,    35,
      36,    37,    38,    39,    40,    -1,     6,    25,     8,     9,
      10,    11,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      38,    39,    40,    -1,     6,    25,     8,     9,    10,    11,
      -1,    -1,    -1,    33,    34,    35,    36,    37,    38,    39,
      40,    -1,     6,    25,     8,     9,    10,    11,    -1,    -1,
      -1,    33,    34,    35,    36,    37,    38,    39,    40,    -1,
       6,    25,     8,     9,    10,    11,    -1,    -1,    -1,    33,
      34,    35,    36,    37,    38,    39,    40,    -1,     6,    25,
       8,     9,    10,    11,    -1,    -1,    -1,    33,    34,    35,
      36,    37,    38,    39,    40,    -1,     6,    25,     8,     9,
      10,    11,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      38,    39,    40,    -1,     6,    25,     8,     9,    10,    11,
      -1,    -1,    -1,    33,    34,    35,    36,    37,    38,    39,
      40,    -1,     6,    25,     8,     9,    10,    11,    -1,    -1,
      -1,    33,    34,    35,    36,    37,    38,    39,    40,    -1,
       6,    25,     8,     9,    10,    11,    -1,    -1,    -1,    33,
      34,    35,    36,    37,    38,    39,    40,    -1,     6,    25,
       8,     9,    -1,    -1,    -1,    13,    -1,    33,    34,    35,
      36,    37,    38,    39,    40,    -1,     6,    25,     8,     9,
      -1,    -1,    -1,    13,    -1,    33,    34,    35,    36,    37,
      38,    39,    40,    -1,     6,    25,     8,     9,    -1,    -1,
      -1,    -1,    -1,    33,    34,    35,    36,    37,    38,    39,
      40,    -1,     6,    25,     8,     9,    -1,    -1,    -1,    -1,
      -1,    33,    34,    35,    36,    37,    38,    39,    40,     6,
      -1,    25,    -1,    -1,    -1,    -1,    13,    -1,    -1,    33,
      34,    35,    36,    37,    38,    39,    40,     6,    25,    -1,
      -1,    -1,    -1,    -1,    13,    -1,    33,    34,    35,    36,
      37,    38,    39,    40,     6,    -1,    25,    -1,    -1,    -1,
      -1,    13,    -1,    -1,    33,    34,    35,    36,    37,    38,
      39,    40,     6,    25,    -1,    -1,    -1,    -1,    -1,    13,
      -1,    33,    34,    35,    36,    37,    38,    39,    40,     6,
      -1,    25,    -1,    -1,    -1,    -1,    13,    -1,    -1,    33,
      34,    35,    36,    37,    38,    39,    40,     6,    25,    -1,
      -1,    -1,    -1,    -1,    13,    -1,    33,    34,    35,    36,
      37,    38,    39,    40,     6,    -1,    25,    -1,    -1,    -1,
      -1,    13,    -1,    -1,    33,    34,    35,    36,    37,    38,
      39,    40,     6,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    34,    35,    36,    37,    38,    39,    40,     6,
      -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      34,    35,    36,    37,    38,    39,    40,     6,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    35,    36,
      37,    38,    39,    40,     6,    -1,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,    38,
      39,    40,     6,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    34,    35,    36,    37,    38,    39,    40,     6,
      -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      34,    35,    36,    37,    38,    39,    40,     6,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    35,    36,
      37,    38,    39,    40,     6,    -1,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,    38,
      39,    40,    -1,    25,     7,     8,     9,    10,    11,    -1,
      13,    33,    34,    35,    36,    37,    38,    39,    40,    -1,
      -1,    -1,    25,     7,     8,     9,    10,    11,    -1,    13,
      33,    34,    35,    36,    37,    38,    39,    40,    -1,    -1,
      -1,    25,     7,     8,     9,    10,    11,    -1,    13,    33,
      34,    35,    36,    37,    38,    39,    40,    -1,    -1,    -1,
      25,     7,     8,     9,    10,    11,    -1,    13,    33,    34,
      35,    36,    37,    38,    39,    40,    -1,    -1,    -1,    25,
       7,     8,     9,    10,    11,    -1,    13,    33,    34,    35,
      36,    37,    38,    39,    40,    -1,    -1,    -1,    25,     7,
       8,     9,    10,    11,    -1,    13,    33,    34,    35,    36,
      37,    38,    39,    40,    -1,    -1,    -1,    25,     7,     8,
       9,    10,    11,    -1,    13,    33,    34,    35,    36,    37,
      38,    39,    40,    -1,    -1,    -1,    25,     7,     8,     9,
      10,    11,    -1,    13,    33,    34,    35,    36,    37,    38,
      39,    40,    -1,    -1,    -1,    25,     7,     8,     9,    10,
      11,    -1,    13,    33,    34,    35,    36,    37,    38,    39,
      40,    -1,    -1,    -1,    25,     7,     8,     9,    10,    11,
      -1,    13,    33,    34,    35,    36,    37,    38,    39,    40,
      -1,    -1,    -1,    25,     7,     8,     9,    -1,    -1,    -1,
      13,    33,    34,    35,    36,    37,    38,    39,    40,    -1,
       7,    -1,    25,    -1,    -1,    -1,    13,    -1,    -1,    -1,
      33,    34,    35,    36,    37,    38,    39,    40,    25,     7,
      -1,    -1,    -1,    -1,    -1,    13,    33,    34,    35,    36,
      37,    38,    39,    40,    -1,     7,    -1,    25,    -1,    -1,
      -1,    13,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      38,    39,    40,    25,     7,    -1,    -1,    -1,    -1,    -1,
      13,    33,    34,    35,    36,    37,    38,    39,    40,    -1,
       7,    -1,    25,    -1,    -1,    -1,    13,    -1,    -1,    -1,
      33,    34,    35,    36,    37,    38,    39,    40,    25,     7,
      -1,    -1,    -1,    -1,    -1,    13,    33,    34,    35,    36,
      37,    38,    39,    40,    -1,     7,    -1,    25,    -1,    -1,
      -1,    13,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      38,    39,    40,    25,     7,    -1,    -1,    -1,    -1,    -1,
      13,    33,    34,    35,    36,    37,    38,    39,    40,    -1,
       7,    -1,    25,    -1,    -1,    -1,    13,    -1,    -1,    -1,
      33,    34,    35,    36,    37,    38,    39,    40,    25,     7,
      -1,    -1,    -1,    -1,    -1,    13,    33,    34,    35,    36,
      37,    38,    39,    40,    -1,     7,    -1,    25,    -1,    -1,
      -1,    13,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      38,    39,    40,    25,     7,    -1,    -1,    -1,    -1,    -1,
      13,    33,    34,    35,    36,    37,    38,    39,    40,    -1,
      -1,    -1,    25,    -1,    -1,    -1,    -1,     4,    -1,    -1,
      33,    34,    35,    36,    37,    38,    39,    40,    15,    16,
      17,    18,    19,    -1,    -1,    22,    23,    24,    -1,    26,
      27,    28,    29,    30,    31,     3,    -1,     5,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    15,    16,    17,
      18,    19,     4,    -1,    22,    23,    24,    -1,    26,    27,
      28,    29,    30,    15,    16,    17,    18,    19,    -1,     4,
      22,    23,    24,    -1,    26,    27,    28,    29,    30,    31,
      15,    16,    17,    18,    19,    -1,     4,    22,    23,    24,
      -1,    26,    27,    28,    29,    30,    31,    15,    16,    17,
      18,    19,    -1,     4,    22,    23,    24,    -1,    26,    27,
      28,    29,    30,    31,    15,    16,    17,    18,    19,    -1,
       4,    22,    23,    24,    -1,    26,    27,    28,    29,    30,
      31,    15,    16,    17,    18,    19,    -1,     4,    22,    23,
      24,    -1,    26,    27,    28,    29,    30,    31,    15,    16,
      17,    18,    19,    -1,     4,    22,    23,    24,    -1,    26,
      27,    28,    29,    30,    31,    15,    16,    17,    18,    19,
      -1,     4,    22,    23,    24,    -1,    26,    27,    28,    29,
      30,    31,    15,    16,    17,    18,    19,    -1,     4,    22,
      23,    24,    -1,    26,    27,    28,    29,    30,    31,    15,
      16,    17,    18,    19,    -1,     4,    22,    23,    24,    -1,
      26,    27,    28,    29,    30,    31,    15,    16,    17,    18,
      19,    -1,     4,    22,    23,    24,    -1,    26,    27,    28,
      29,    30,    31,    15,    16,    17,    18,    19,    -1,     4,
      22,    23,    24,    -1,    26,    27,    28,    29,    30,    31,
      15,    16,    17,    18,    19,    -1,     4,    22,    23,    24,
      -1,    26,    27,    28,    29,    30,    31,    15,    16,    17,
      18,    19,    -1,     4,    22,    23,    24,    -1,    26,    27,
      28,    29,    30,    31,    15,    16,    17,    18,    19,    -1,
       4,    22,    23,    24,    -1,    26,    27,    28,    29,    30,
      31,    15,    16,    17,    18,    19,    -1,     4,    22,    23,
      24,    -1,    26,    27,    28,    29,    30,    31,    15,    16,
      17,    18,    19,    -1,     4,    22,    23,    24,    -1,    26,
      27,    28,    29,    30,    31,    15,    16,    17,    18,    19,
      -1,     4,    22,    23,    24,    -1,    26,    27,    28,    29,
      30,    31,    15,    16,    17,    18,    19,    -1,    -1,    22,
      23,    24,    -1,    26,    27,    28,    29,    30,    31,     3,
      -1,     5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    15,    16,    17,    18,    19,     4,    -1,    22,    23,
      24,    -1,    26,    27,    28,    29,    30,    15,    16,    17,
      18,    19,    -1,    -1,    22,    23,    24,    -1,    26,    27,
      28,    29,    30,    31,     3,    -1,     5,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    15,    16,    17,    18,
      19,     4,    -1,    22,    23,    24,    -1,    26,    27,    28,
      29,    30,    15,    16,    17,    18,    19,     3,    -1,    22,
      23,    24,    -1,    26,    27,    28,    29,    30,    31,    15,
      16,    17,    18,    19,     3,    -1,    22,    23,    24,    -1,
      26,    27,    28,    29,    30,    -1,    15,    16,    17,    18,
      19,     3,    -1,    22,    23,    24,    -1,    26,    27,    28,
      29,    30,    -1,    15,    16,    17,    18,    19,     3,    -1,
      22,    23,    24,    -1,    26,    27,    28,    29,    30,    -1,
      15,    16,    17,    18,    19,     3,    -1,    22,    23,    24,
      -1,    26,    27,    28,    29,    30,    -1,    15,    16,    17,
      18,    19,     3,    -1,    22,    23,    24,    -1,    26,    27,
      28,    29,    30,    -1,    15,    16,    17,    18,    19,     4,
      -1,    22,    23,    24,    -1,    26,    27,    28,    29,    30,
      15,    16,    17,    18,    19,     4,    -1,    22,    23,    24,
      -1,    26,    27,    28,    29,    30,    15,    16,    17,    18,
      19,     4,    -1,    22,    23,    24,    -1,    26,    27,    28,
      29,    30,    15,    16,    17,    18,    19,     4,    -1,    22,
      23,    24,    -1,    26,    27,    28,    29,    30,    15,    16,
      17,    18,    19,     4,    -1,    22,    23,    24,    -1,    26,
      27,    28,    29,    30,    15,    16,    17,    18,    19,     4,
      -1,    22,    23,    24,    -1,    26,    27,    28,    29,    30,
      15,    16,    17,    18,    19,     4,    -1,    22,    23,    24,
      -1,    26,    27,    28,    29,    30,    15,    16,    17,    18,
      19,     4,    -1,    22,    23,    24,    -1,    26,    27,    28,
      29,    30,    15,    16,    17,    18,    19,     4,    -1,    22,
      23,    24,    -1,    26,    27,    28,    29,    30,    15,    16,
      17,    18,    19,     4,    -1,    22,    23,    24,    -1,    26,
      27,    28,    29,    30,    15,    16,    17,    18,    19,     4,
      -1,    22,    23,    24,    -1,    26,    27,    28,    29,    30,
      15,    16,    17,    18,    19,     4,    -1,    22,    23,    24,
      -1,    26,    27,    28,    29,    30,    15,    16,    17,    18,
      19,     4,    -1,    22,    23,    24,    -1,    26,    27,    28,
      29,    30,    15,    16,    17,    18,    19,     4,    -1,    22,
      23,    24,    -1,    26,    27,    28,    29,    30,    15,    16,
      17,    18,    19,     4,    -1,    22,    23,    24,    -1,    26,
      27,    28,    29,    30,    15,    16,    17,    18,    19,     4,
      -1,    22,    23,    24,    -1,    26,    27,    28,    29,    30,
      15,    16,    17,    18,    19,     4,    -1,    22,    23,    24,
      -1,    26,    27,    28,    29,    30,    15,    16,    17,    18,
      19,     4,    -1,    22,    23,    24,    -1,    26,    27,    28,
      29,    30,    15,    16,    17,    18,    19,     4,    -1,    22,
      23,    24,    -1,    26,    27,    28,    29,    30,    15,    16,
      17,    18,    19,     4,    -1,    22,    23,    24,    -1,    26,
      27,    28,    29,    30,    15,    16,    17,    18,    19,     4,
      -1,    22,    23,    24,    -1,    26,    27,    28,    29,    30,
      15,    16,    17,    18,    19,     4,    -1,    22,    23,    24,
      -1,    26,    27,    28,    29,    30,    15,    16,    17,    18,
      19,     4,    -1,    22,    23,    24,    -1,    26,    27,    28,
      29,    30,    15,    16,    17,    18,    19,     4,    -1,    22,
      23,    24,    -1,    26,    27,    28,    29,    30,    15,    16,
      17,    18,    19,     4,    -1,    22,    23,    24,    -1,    26,
      27,    28,    29,    30,    15,    16,    17,    18,    19,     4,
      -1,    22,    23,    24,    -1,    26,    27,    28,    29,    30,
      15,    16,    17,    18,    19,     4,    -1,    22,    23,    24,
      -1,    26,    27,    28,    29,    30,    15,    16,    17,    18,
      19,     4,    -1,    22,    23,    24,    -1,    26,    27,    28,
      29,    30,    15,    16,    17,    18,    19,    -1,    -1,    22,
      23,    24,    -1,    26,    27,    28,    29,    30
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    18,    45,    46,    47,    48,    49,    19,     0,    47,
       5,     7,    18,    50,    19,     6,    13,     3,    53,    18,
       4,    15,    16,    17,    18,    19,    22,    23,    24,    26,
      27,    28,    29,    30,    49,    54,    55,    56,    68,    69,
      19,     5,     5,     5,    19,     5,    14,     5,    12,    19,
      20,    21,    41,    42,    68,    69,    70,    71,    72,    73,
      74,    75,     5,     5,     5,     5,     5,     5,     5,     4,
      55,     7,     7,    19,    70,    70,    19,    51,    70,    71,
      73,     7,     8,     9,    10,    11,    67,    70,     7,    18,
      19,    20,    32,    57,    58,    59,    60,    61,    62,    63,
      65,    72,    73,    19,    67,    67,    67,    60,     6,     6,
       6,     6,    13,     7,     6,     6,     5,    19,    74,    74,
      75,    75,     6,    25,    19,    14,    62,    57,     7,    13,
      39,    40,    35,    36,    64,    25,    33,    34,    37,    38,
      66,     6,     6,     6,     6,     6,     7,     7,     7,    19,
      52,    53,    55,    70,    14,    70,     6,    58,    59,    61,
      62,    65,    73,    52,    70,    52,     6,    31,    52,    30,
      52,    52,    31,    52,     5,    12,    19,    20,    21,    26,
      27,    28,    29,    41,    42,    68,    69,    71,    72,    73,
      74,    75,     7,     5,    12,    19,    20,    21,    26,    27,
      28,    29,    41,    42,    68,    69,    71,    72,    73,    74,
      75,     5,    26,    27,    28,    29,    41,    42,    68,    69,
      74,    75,     5,    19,    20,    26,    27,    28,    29,    32,
      41,    42,    61,    62,    63,    65,    68,    69,    72,    73,
      74,    75,     8,     9,     5,    19,     7,    58,     8,     9,
      39,     5,    19,     3,     5,    12,    19,    20,    21,    26,
      27,    28,    29,    41,    42,    68,    69,    71,    72,    73,
      74,    75,     5,    18,    19,    20,    26,    27,    28,    29,
      32,    41,    42,    59,    60,    61,    62,    63,    65,    68,
      69,    72,    73,    74,    75,     5,    19,     3,    15,    16,
      17,    18,    19,    22,    23,    24,    30,    49,    53,    55,
      56,    68,    69,    13,     3,    15,    16,    17,    18,    19,
      22,    23,    24,    30,    49,    53,    55,    56,    68,    69,
      71,    73,     5,     5,     5,     5,     5,    10,    11,    71,
      73,     5,     5,     5,     5,     5,     8,     9,    10,    11,
      71,    73,     5,     5,     5,     5,    10,    11,    71,    73,
       5,     5,     5,     5,     5,    62,    40,    64,    66,     8,
       9,    10,    11,    74,    74,    51,     7,    74,    74,    61,
       4,    54,    71,    73,     5,     5,     5,     5,     5,     8,
       9,    10,    11,    71,    73,    19,     5,    14,     5,     5,
       5,     5,    19,    62,    39,    40,    64,    66,     8,     9,
      10,    11,     4,    54,     5,     5,     5,    19,    14,    70,
       5,     5,     5,     7,     7,    59,     4,    54,     5,     5,
       5,    19,    14,    70,     5,     5,     5,     7,     7,     6,
       6,    51,    19,    67,    67,    67,    75,    75,     6,     6,
      51,    19,    67,    67,    67,     5,    19,    74,    74,    75,
      75,     6,     6,    19,    67,    67,    67,    75,    75,     6,
       6,    51,    19,    67,    67,    67,    62,    65,     5,    19,
      73,    74,    74,    75,    75,     6,     4,     6,     6,    51,
      19,    67,    67,    67,     5,    19,    74,    74,    75,    75,
       6,     6,    14,    51,     5,    12,    19,    20,    21,    26,
      27,    28,    29,    41,    42,    68,    69,    70,    71,    72,
      73,    74,    75,    19,    67,    67,    67,    61,    62,    65,
       5,    19,    73,    74,    74,    75,    75,     4,    19,    70,
      70,     7,    70,     7,    67,    57,    60,     4,    19,    70,
      70,     7,    70,     7,    67,    57,    60,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       6,    70,     6,    71,    73,     5,     5,     5,     5,     5,
       8,     9,    10,    11,     6,     6,     6,     6,     6,     6,
       6,     7,     6,    57,     6,     6,     6,     6,     7,     6,
      57,     6,     6,     6,    51,    19,    67,    67,    67,     5,
      19,    74,    74,    75,    75,     7,     7,     7,    52,     6,
      58,    52,     7,     7,     7,    52,     6,    58,    52,     6,
       6,     6,     6,     6,    52,     6,    31,    52,     6,    31,
      52,    30,    52,    52,    30,    52,    52,    52,    31,    31,
      52,    52
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    44,    45,    46,    46,    47,    47,    48,    49,    50,
      50,    50,    51,    51,    51,    52,    52,    53,    53,    54,
      54,    55,    55,    55,    55,    55,    55,    55,    55,    55,
      56,    56,    56,    56,    56,    56,    57,    57,    58,    58,
      59,    59,    59,    60,    60,    61,    61,    62,    62,    63,
      63,    64,    64,    65,    65,    65,    65,    66,    66,    66,
      66,    66,    67,    68,    69,    69,    69,    69,    70,    70,
      71,    71,    71,    71,    72,    72,    72,    73,    73,    73,
      74,    74,    74,    75,    75,    75,    75
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     6,     3,     4,
       2,     0,     3,     1,     0,     1,     1,     3,     2,     2,
       1,     1,     2,     2,     1,     5,     5,     5,     4,     3,
       5,     7,    10,     5,     6,     7,     1,     2,     1,     3,
       1,     4,     3,     3,     1,     3,     1,     2,     1,     3,
       1,     1,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     4,     4,     4,     4,     4,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     3,     1,
       3,     3,     1,     1,     1,     1,     3
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
  case 2: /* program: stmts  */
#line 39 "parser/c7.y"
                        { create_empy_ast(); }
#line 2529 "parser/parser.c"
    break;


#line 2533 "parser/parser.c"

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

#line 186 "parser/c7.y"


void yyerror(const char *s) {
    printf("\nSyntaxError: %s in line %d, column %d.\n",
           s, parser_line, parser_column);
    syntax_error = 1;
}
