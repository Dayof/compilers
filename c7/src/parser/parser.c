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
  YYSYMBOL_NOT_OP = 15,                    /* NOT_OP  */
  YYSYMBOL_L_OP = 16,                      /* L_OP  */
  YYSYMBOL_G_OP = 17,                      /* G_OP  */
  YYSYMBOL_READ = 18,                      /* READ  */
  YYSYMBOL_WRITE = 19,                     /* WRITE  */
  YYSYMBOL_WRITELN = 20,                   /* WRITELN  */
  YYSYMBOL_TYPE = 21,                      /* TYPE  */
  YYSYMBOL_EMPTY = 22,                     /* EMPTY  */
  YYSYMBOL_STRING = 23,                    /* STRING  */
  YYSYMBOL_RETURN = 24,                    /* RETURN  */
  YYSYMBOL_FORALL = 25,                    /* FORALL  */
  YYSYMBOL_FOR = 26,                       /* FOR  */
  YYSYMBOL_IN = 27,                        /* IN  */
  YYSYMBOL_IS_SET = 28,                    /* IS_SET  */
  YYSYMBOL_ADD_SET = 29,                   /* ADD_SET  */
  YYSYMBOL_REMOVE = 30,                    /* REMOVE  */
  YYSYMBOL_EXISTS = 31,                    /* EXISTS  */
  YYSYMBOL_IF = 32,                        /* IF  */
  YYSYMBOL_ELSE = 33,                      /* ELSE  */
  YYSYMBOL_EQ_OP = 34,                     /* EQ_OP  */
  YYSYMBOL_NE_OP = 35,                     /* NE_OP  */
  YYSYMBOL_LE_OP = 36,                     /* LE_OP  */
  YYSYMBOL_GE_OP = 37,                     /* GE_OP  */
  YYSYMBOL_OR_OP = 38,                     /* OR_OP  */
  YYSYMBOL_AND_OP = 39,                    /* AND_OP  */
  YYSYMBOL_INTEGER = 40,                   /* INTEGER  */
  YYSYMBOL_ID = 41,                        /* ID  */
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
  YYSYMBOL_rel_cond_stmt = 66,             /* rel_cond_stmt  */
  YYSYMBOL_rel_ops = 67,                   /* rel_ops  */
  YYSYMBOL_set_expr = 68,                  /* set_expr  */
  YYSYMBOL_func_call = 69,                 /* func_call  */
  YYSYMBOL_set_func_call = 70,             /* set_func_call  */
  YYSYMBOL_simple_expr = 71,               /* simple_expr  */
  YYSYMBOL_func_cte_expr = 72,             /* func_cte_expr  */
  YYSYMBOL_func_expr = 73,                 /* func_expr  */
  YYSYMBOL_arith_expr = 74,                /* arith_expr  */
  YYSYMBOL_term = 75,                      /* term  */
  YYSYMBOL_factor = 76                     /* factor  */
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
#define YYLAST   4331

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  44
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  86
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  595

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
static const yytype_int16 yyrline[] =
{
       0,    50,    50,    53,    54,    57,    58,    61,    66,    71,
      74,    77,    80,    83,    84,    87,    88,    91,    92,    95,
      98,   101,   102,   103,   104,   105,   108,   111,   114,   117,
     122,   125,   128,   131,   134,   139,   140,   143,   144,   149,
     150,   154,   159,   162,   165,   168,   171,   174,   177,   180,
     183,   184,   187,   190,   193,   194,   195,   198,   199,   200,
     201,   202,   205,   210,   215,   218,   221,   224,   229,   230,
     233,   234,   235,   236,   239,   240,   241,   244,   247,   250,
     253,   256,   259,   262,   263,   264,   265
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
  "MULT", "DIV", "CHAR", "COMMA", "ASSIGN", "NOT_OP", "L_OP", "G_OP",
  "READ", "WRITE", "WRITELN", "TYPE", "EMPTY", "STRING", "RETURN",
  "FORALL", "FOR", "IN", "IS_SET", "ADD_SET", "REMOVE", "EXISTS", "IF",
  "ELSE", "EQ_OP", "NE_OP", "LE_OP", "GE_OP", "OR_OP", "AND_OP", "INTEGER",
  "ID", "FLOAT", "THEN", "$accept", "program", "stmts", "stmt",
  "func_stmt", "var_decl_stmt", "param_list", "simple_param_list",
  "flex_block_struct", "compound_block_stmt", "block_stmts", "block_stmt",
  "flow_control", "opt_param", "for_expression", "decl_or_cond_expr",
  "or_cond_expr", "and_cond_expr", "unary_cond_expr", "eq_cond_expr",
  "equal_ops", "rel_cond_expr", "rel_cond_stmt", "rel_ops", "set_expr",
  "func_call", "set_func_call", "simple_expr", "func_cte_expr",
  "func_expr", "arith_expr", "term", "factor", YY_NULLPTR
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

#define YYPACT_NINF (-242)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-87)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      22,   -13,    40,    15,    21,   156,   157,     9,  -242,   173,
     271,   185,    10,    60,   126,    51,    59,  1882,   200,    36,
     210,    90,   101,   102,    74,    56,   145,   149,   197,   219,
     220,   228,   229,    85,  1900,  1918,  1936,  1954,   222,   246,
     135,   215,  1146,  1146,   251,  1146,   259,   275,   288,  1409,
     951,  1481,   299,   302,   317,   340,   349,   806,  2401,  2704,
    1445,   186,   282,  1445,  1445,  1445,   912,    19,    56,   238,
    1972,  1990,  2008,   363,   379,   380,   384,   791,  2026,     7,
       7,     7,     7,   392,   381,   395,  1297,   386,  1259,  2726,
     884,   183,   274,   107,   323,   448,   521,  4016,  4049,  4062,
    4003,   413,   422,   426,   435,    33,   153,   297,   447,   473,
     481,   482,   495,  2905,    77,  2952,  2999,  3046,  3093,  3140,
     726,  1146,   492,   428,  1488,  1025,  1348,  2414,  1297,  1297,
    2499,  2520,  2541,  2562,  2583,  2604,  2625,  2646,  2541,   505,
     520,   529,   537,   808,   560,   438,  2044,  2062,  2080,  2098,
    2116,  2134,  2152,   478,  1488,   388,   726,   316,   396,   503,
     530,  4095,  4108,   640,   331,   439,  2170,   726,   726,  2188,
    2206,  1146,   517,   559,   578,   602,   603,   617,   626,  1271,
    1542,  1471,   588,   639,   661,   680,   797,  1590,  1620,  2224,
    1146,   607,   651,   655,   641,   697,   699,   731,   367,   628,
     608,   684,   695,   704,   722,   281,   706,   785,  1146,   756,
     774,   776,   778,  3773,  3786,  4141,  4154,  3819,  3832,  1146,
     912,  1070,   784,   787,   793,   799,  3072,  2824,  3106,   213,
     224,    -4,  3500,  3534,  3540,  3574,  3580,  3334,  3119,  3153,
      77,    77,  2776,    19,  2360,   596,    83,    83,   912,    77,
    1767,  2242,  1146,   650,   672,   676,   803,   813,   826,   830,
    1028,   885,  1171,   683,   686,   687,   688,   643,  1401,  2417,
    1146,  2478,   800,   671,   837,   838,   846,   847,  2837,  2741,
    2871,   353,    31,    97,   159,   205,  2497,  2539,  2581,  2623,
    2665,  3300,  2884,  2918,  2260,   852,   862,   864,   807,    56,
     868,   869,   874,    88,   744,   959,   991,  1098,   876,   877,
    2436,   881,   872,   866,  1445,  1445,  1445,    19,    77,    77,
     902,   922,   875,  1445,  1445,  1445,    19,    89,    89,    89,
      89,   904,   929,   879,  1445,  1445,  1445,    83,    83,   926,
     999,   235,   898,  1445,  1445,  1445,    19,   912,  2667,  2667,
     121,   121,   121,   121,  1832,  2462,   354,  2364,    77,  3865,
    3878,  3911,   241,  2278,  2296,   939,  1073,   910,  1445,  1445,
    1445,    19,   128,   128,   128,   128,   949,  1261,  2789,   207,
     952,   928,  1445,  1445,  1445,    19,  2457,  2478,  2478,  2688,
    2688,   139,   139,   139,   139,  1179,  2314,   933,  1146,  1146,
     911,   969,  1445,   186,   912,    56,  1232,  1423,   378,   976,
    2761,   987,   988,   990,   992,   401,  2811,  2859,   986,   845,
    1012,  1019,  1036,  1037,   407,    77,   892,   938,  1061,  1125,
    1213,  4187,  3924,  1039,  1042,  1043,  1044,  3957,  3970,  3614,
    3166,  1046,  1051,  1052,  1053,   416,   266,  3620,  3654,    77,
    3200,  3213,  3247,  3260,  3294,  4200,  2332,   725,  2439,  1055,
    1058,  1062,  1067,   437,    77,  2713,  4050,  4096,  4142,  4188,
    3340,  2931,  2457,  1068,  1069,  1079,  1087,   458,  1146,   477,
     498,   516,  1089,  1093,  1094,  1095,   717,   308,   993,   519,
     544,   558,   564,   572,   457,  1135,  1495,   258,   263,  3374,
    3380,    77,  2965,  2978,  3012,  3025,  3059,  1537,  1104,  1105,
    1106,  1584,  1614,  1109,   884,    53,  1113,  1126,  1131,  1132,
    1134,  1141,  1123,  1127,  1128,  1130,  1138,  4233,  4246,  4279,
    4292,  3660,  3694,  3700,  3734,  3740,   727,   728,   746,   753,
     771,   574,  3414,  3420,  3454,  3460,  3494,  1155,  1282,  1144,
    1445,  1445,  1445,    19,   142,   142,   142,   142,  1159,  1165,
    1188,   808,  2392,   808,  1666,   575,  1529,  1190,  1196,  1207,
    1208,   577,    77,  1573,  1581,  1643,  1732,  1759,  1696,  1730,
    1762,  1780,   808,   589,  1798,   592,   614,   619,   634,   635,
    1828,   808,   808,  1846,  1864
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
       0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -242,  -242,  -242,  1214,  -242,     0,  -242,  -225,  -110,     8,
    -241,   486,   -43,   -83,   -84,  -105,   -61,   -53,   -62,    87,
    -220,    17,   -49,  -224,   124,   -16,   225,    13,  1307,  1275,
    1035,   843,   472
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,     3,     4,     5,    34,    13,   107,   150,   305,
      35,   306,    37,    90,    91,    92,    93,    94,    95,    96,
     132,    97,    98,   138,    83,   201,   202,    84,   203,   204,
     205,   206,   207
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       6,    38,   -47,     6,   230,   105,   245,   125,   349,    52,
     364,   348,   114,   229,    10,    -2,    11,   233,   356,    38,
     281,    -4,   158,    18,   122,   -14,   182,   182,     7,   182,
     130,   131,   -14,   163,   -47,   -47,     1,   -39,    54,   143,
       8,   157,    -4,     1,   -39,   215,   166,    49,   115,    51,
     234,    14,    52,   396,    17,    74,    75,   169,   170,   563,
     106,    45,   390,   284,   282,   389,    15,   160,    46,   387,
     215,   248,   283,    16,   215,   159,   287,    40,    47,    48,
      19,   108,   249,   232,    28,    29,    30,    31,   358,   162,
      67,   248,   415,    67,   425,    41,    49,    50,    51,    68,
     307,   424,   405,   -43,    38,   182,    42,    43,   263,   288,
     -43,   215,   215,   215,   -39,    44,   215,   179,   250,   181,
     -39,   445,   215,   213,   359,   214,   449,   308,   151,   198,
     426,   200,   -10,   464,   153,   -43,   388,   155,   263,   -10,
      38,    -9,   286,   304,   501,   128,   463,   572,    -9,   161,
      60,    38,    38,   231,    61,   182,    -5,    -6,   341,   -13,
     477,   226,   450,   228,   151,   -45,   -13,   165,   260,   465,
     262,   233,   -45,    -3,   182,   151,   151,    -5,    -6,   278,
     502,   280,   486,   573,   488,    -8,   230,   102,   103,   104,
     126,   208,   182,    85,    -3,   362,   127,   -45,   -45,   233,
      -7,    86,    62,   182,   234,   408,    -8,    87,    88,   379,
     -18,   -47,   285,   -46,   209,   210,   211,   212,   -47,   -43,
     -46,    -7,   287,   349,    63,    64,   213,    89,   214,    71,
     -45,   -18,   234,    65,    66,    38,   182,   232,   -17,   130,
     131,   -46,    39,   -47,   -47,   -46,   -46,   -42,   284,   282,
      53,   -43,   347,    72,   182,   288,    73,   283,   189,   -17,
      39,   287,   -45,   -45,   -42,   232,   -72,   183,   183,   -44,
     183,   -42,   -44,   -46,   -46,   390,   -44,   -11,    38,   -42,
     347,   -37,   -70,    52,   -11,   446,   216,   -37,   286,   327,
     328,   235,    12,    53,   288,   -71,   -42,   388,   233,   233,
     448,   -44,   -44,   144,   -44,   -44,   -74,   231,   -68,   -75,
     145,   216,   401,   553,   -85,   216,   -85,   -85,   -85,   -85,
     514,   -85,   167,   101,    78,   284,   498,   286,   571,   310,
     -43,   234,   234,   234,   497,   231,   -43,   -12,   287,   287,
     287,   500,   230,   515,   -12,    39,   183,   -69,    38,   264,
     289,   229,   216,   216,   216,   233,   -73,   216,   285,   -37,
     455,   -43,   129,   216,   232,   447,   -37,   145,   309,   109,
     489,   288,   288,   288,   288,   -83,   -83,   -83,   -83,   264,
      38,    39,   182,   182,   -38,   110,   111,   215,   234,    52,
     112,   -38,    39,    39,   -83,   -41,   183,   285,   120,   491,
     -35,   -41,   -35,   -38,   286,   286,   499,   521,   121,   -38,
     -35,   509,   510,   526,   145,   183,   -35,   -35,   516,   139,
     145,   232,   535,   -35,   -35,   -35,   -35,   123,   140,   145,
     245,   562,   141,   183,   231,   -35,   -35,   -35,   412,   413,
     414,   142,   154,   540,   183,   235,   -40,   421,   422,   423,
     145,   581,   -40,   584,   146,   -45,   489,   281,   434,   435,
     436,   -45,   182,   -68,   546,   554,   555,   442,   443,   444,
     -68,   145,   590,   235,   285,   285,    39,   183,   583,   164,
     147,   593,   594,   -72,   -62,   541,   -45,   -45,   148,   149,
     -72,   231,   460,   461,   462,   183,   289,    59,   215,   -46,
     284,   282,   -76,    36,   -70,   -46,   474,   475,   476,   283,
     -42,   -70,   -64,   287,   188,   188,   -42,   188,   307,    39,
     307,    70,   -71,   -72,    53,   -74,   513,   -65,   -47,   -71,
     -46,   -46,   -74,   218,   -47,   289,   -66,   -44,   239,   307,
      59,   -42,   129,   -44,   -67,   308,   288,   308,   307,   307,
     -75,    59,    59,   118,   119,   130,   131,   -75,   218,   -47,
     -47,   304,   218,   304,   -41,   -70,   308,   -63,   -44,   -44,
     -69,   -41,   235,   235,   235,   308,   308,   -69,   -73,   286,
     -40,   -76,   304,   589,   -71,   -73,   188,   -40,   -76,    39,
     145,   304,   304,   188,   -74,   591,   269,   293,   -64,   218,
     218,   218,   310,   357,   218,   -64,   152,   313,   314,   127,
     218,   490,   289,   289,   289,   289,   -84,   -84,   -84,   -84,
     -65,    39,   315,   183,   183,   -66,   269,   -65,   216,   235,
      53,   316,   -66,   326,   -72,   -84,   -85,   -85,   -85,   -85,
     -67,   -63,   152,   188,   -30,   -75,   322,   -67,   -63,   285,
     -68,   372,   373,   152,   152,   -85,   -68,   -72,   -30,   -30,
     -30,   -30,   188,   -72,   -30,   -30,   -30,   -69,   -30,   -30,
     -30,   -30,   -30,   168,   568,   569,   570,   -55,   -70,   -70,
     188,   -30,   -71,   -71,   -55,   -70,   -73,   -55,   -55,   -71,
     -74,   188,   239,   -75,   -69,   -73,   -74,   490,   -55,   -75,
     -69,   -73,   323,   183,   324,   -55,   -55,   -55,   -55,   -55,
     -55,   -74,   188,   188,   -79,   -79,   329,   330,   218,   218,
     239,   188,   -75,   -83,   188,   -83,   -83,   -83,   -83,   251,
     -83,   -69,   -76,   -79,   -64,   -65,   325,    36,   -76,   216,
     -64,   -65,   188,   293,    21,    22,    23,    24,   -21,   -73,
      25,    26,    27,   -66,    28,    29,    30,    31,    32,   -66,
     -67,   333,   -21,   -21,   -21,   -21,   -67,    33,   -21,   -21,
     -21,    59,   -21,   -21,   -21,   -21,   -21,   -21,   -63,   334,
      36,   335,   293,   336,   -63,   -21,   309,   289,   309,   342,
     416,   417,   343,   -82,   -82,   -82,   -82,   113,   344,   240,
     241,   429,   430,   -68,   345,   240,   241,   309,   367,   437,
     438,   294,   -82,   -68,    79,    80,   309,   309,   368,   239,
     239,   239,   239,   239,   453,   454,   295,   296,   297,   298,
     188,   369,   299,   300,   301,   370,    28,    29,    30,    31,
     302,   380,   381,   382,   269,   269,   468,   469,   400,   303,
      70,   383,   384,   -86,   -86,   -86,   -86,   397,   496,   293,
     293,   293,   293,   293,   293,   505,   506,   398,    58,   399,
     188,   188,   -86,   402,   403,   218,   239,    59,   410,   404,
     240,   241,    70,   406,   407,   187,   187,   409,   187,   208,
     371,   244,   -85,   -85,   -85,   -85,   -85,   188,   -85,    86,
     -85,   -85,   -85,   -85,   217,    87,    88,   411,   418,   238,
     431,    58,   209,   210,   211,   212,   420,   219,   511,   -85,
     433,   188,   116,   117,   213,    89,   214,   220,   419,   217,
     240,   241,   439,   217,   221,   432,   188,   240,   241,   441,
     222,   223,   224,   225,   496,   457,   -77,   -77,   329,   330,
     188,   459,   226,   227,   228,   470,    67,   187,   -85,   -85,
     -85,   -85,   -85,   -15,   187,   -77,   472,   268,   292,   473,
     217,   217,   217,   188,   508,   217,   512,   -15,   -15,   -15,
     -15,   217,   -76,   -15,   -15,   -15,   218,   -15,   -15,   -15,
     -15,   -15,   -15,   517,   518,   -16,   519,   268,   520,   -84,
     -15,   -84,   -84,   -84,   -84,   440,   -84,   240,   241,   -16,
     -16,   -16,   -16,   -76,   187,   -16,   -16,   -16,   522,   -16,
     -16,   -16,   -16,   -16,   -16,   523,   496,   496,   576,   577,
     270,   156,   -16,   187,   293,   -83,   -83,   -83,   -83,   -83,
     271,   -83,   524,   525,   188,   527,   272,   273,   528,   529,
     530,   187,   531,   274,   275,   276,   277,   532,   533,   534,
      57,   536,   187,   238,   537,   278,   279,   280,   538,   -78,
     -78,   329,   330,   539,   542,   543,   -55,   186,   186,   458,
      77,   240,   241,   354,   355,   544,   -55,   -55,   -78,   360,
     361,   238,   187,   545,   549,   187,   100,   -55,   550,   551,
     552,   237,   -24,    57,   -55,   -55,   -55,   -55,   -55,   -55,
     558,   559,   560,   187,   292,   561,   -24,   -24,   -24,   -24,
     564,   100,   -24,   -24,   -24,   100,   -24,   -24,   -24,   -24,
     -24,   -24,   -64,   -80,   -80,   -80,   -80,   -65,   -66,   -24,
     -67,   -79,    58,   -79,   -79,   556,   557,   -63,   -79,    77,
     -64,   171,   -80,   292,   -65,   -66,   186,   -67,   172,   267,
     291,   565,   100,   100,   100,   -63,   578,   100,   173,   174,
     427,   428,   579,   100,   175,   176,   177,   178,   -84,   -84,
     -84,   -84,   -84,   -18,   -84,   567,   179,   180,   181,   267,
     238,   238,   238,   451,   452,   580,   585,   -18,   -18,   -18,
     -18,   187,   586,   -18,   -18,   -18,   312,   -18,   -18,   -18,
     -18,   -18,   -18,   587,   588,   466,   467,     9,     0,     0,
     -18,   -81,   -81,   -81,   -81,   321,     0,     0,     0,   495,
     292,   292,   292,   292,   503,   504,   -22,     0,     0,     0,
     -81,   187,   187,   332,     0,     0,   217,   238,    58,     0,
     -22,   -22,   -22,   -22,   340,   237,   -22,   -22,   -22,     0,
     -22,   -22,   -22,   -22,   -22,   -22,   -55,   471,   187,   240,
     241,     0,   -55,   -22,     0,   -55,   -55,   -83,     0,   -83,
     -83,   -83,   -83,   237,   312,     0,   -55,   366,   566,     0,
     240,   241,   187,   -55,   -55,   -55,   -55,   -55,   -55,     0,
      56,     0,   208,     0,     0,   377,   291,   187,     0,     0,
       0,     0,    86,     0,     0,   495,     0,   185,   185,    88,
     185,   187,     0,     0,     0,   209,   210,   211,   212,     0,
       0,     0,    55,     0,    57,     0,    99,   213,   242,   214,
       0,   236,     0,    56,   187,   291,     0,     0,     0,   184,
     184,     0,    76,   -36,     0,   -36,     0,   217,     0,     0,
       0,    99,     0,   -36,     0,    99,     0,     0,     0,   -36,
     -36,     0,     0,     0,     0,    55,   -36,   -36,   -36,   -36,
       0,     0,   237,   237,   237,     0,     0,     0,   -36,   -36,
     -36,     0,     0,   332,     0,     0,   185,   574,   575,   266,
     290,     0,    99,    99,    99,   292,     0,    99,   -79,   -79,
     -79,   374,   375,    99,   -79,   187,   -83,   -83,   -83,   -83,
     -83,   494,   291,   291,   291,   291,     0,   -23,   184,   266,
       0,   265,     0,   186,   186,     0,     0,     0,   100,   237,
      57,   -23,   -23,   -23,   -23,     0,   185,   -23,   -23,   -23,
     190,   -23,   -23,   -23,   -23,   -23,   -23,   191,     0,     0,
     321,   265,     0,     0,   -23,   185,     0,   192,   193,     0,
       0,     0,     0,   194,   195,   196,   197,   -84,   311,   -84,
     -84,   -84,   -84,   185,   340,   198,   199,   200,   -84,   -84,
     -84,   -84,   -84,   252,   185,   236,     0,   320,     0,   366,
     253,   -82,     0,   -82,   -82,   -82,   -82,   494,   -82,     0,
     254,   255,     0,   548,     0,   331,   256,   257,   258,   259,
       0,     0,     0,   236,     0,     0,   339,   185,   260,   261,
     262,     0,     0,     0,     0,   -86,   377,   -86,   -86,   -86,
     -86,   -17,   -86,     0,     0,   185,   290,   317,   -85,   100,
     -85,   -85,   -85,   -85,     0,   -17,   -17,   -17,   -17,   365,
       0,   -17,   -17,   -17,     0,   -17,   -17,   -17,   -17,   -17,
     -17,     0,     0,     0,    56,     0,     0,   376,   -17,   -85,
       0,   -85,   -85,   -85,   -85,   290,   -85,   -77,    -8,   -77,
     -77,   556,   557,     0,   -77,     0,   -79,   291,   -79,   -79,
     318,   319,    -8,    -8,    -8,    -8,    55,   548,    -8,    -8,
      -8,     0,    -8,    -8,    -8,    -8,    -8,    -8,   -29,     0,
       0,     0,   236,   236,   236,    -8,   -82,     0,   -82,   -82,
     -82,   -82,   -29,   -29,   -29,   -29,     0,     0,   -29,   -29,
     -29,     0,   -29,   -29,   -29,   -29,   -29,   -29,     0,   -78,
       0,   -78,   -78,   556,   557,   -29,   -78,     0,     0,     0,
       0,   493,   290,   290,   290,   290,     0,     0,     0,     0,
     -28,     0,     0,   185,   185,     0,     0,     0,    99,   236,
      56,     0,     0,     0,   -28,   -28,   -28,   -28,     0,     0,
     -28,   -28,   -28,   492,   -28,   -28,   -28,   -28,   -28,   -28,
     -25,     0,     0,     0,     0,   184,   184,   -28,     0,     0,
       0,     0,    55,     0,   -25,   -25,   -25,   -25,     0,     0,
     -25,   -25,   -25,     0,   -25,   -25,   -25,   -25,   -25,   -25,
       0,     0,     0,     0,   -26,     0,     0,   -25,   -80,     0,
     -80,   -80,   -80,   -80,     0,   -80,     0,   493,   -26,   -26,
     -26,   -26,     0,   185,   -26,   -26,   -26,     0,   -26,   -26,
     -26,   -26,   -26,   -26,     0,   -81,   -27,   -81,   -81,   -81,
     -81,   -26,   -81,   -85,     0,   -85,   -85,   -85,   -85,   492,
     -27,   -27,   -27,   -27,   -32,   547,   -27,   -27,   -27,    99,
     -27,   -27,   -27,   -27,   -27,   -27,     0,     0,   -32,   -32,
     -32,   -32,   -30,   -27,   -32,   -32,   -32,     0,   -32,   -32,
     -32,   -32,   -32,   -32,     0,     0,   -30,   -30,   -30,   -30,
       0,   -32,   -30,   -30,   -30,     0,   -30,   -30,   -30,   -30,
     -30,   592,   -33,     0,     0,     0,     0,   290,   -77,   -30,
     -77,   -77,   318,   319,     0,     0,   -33,   -33,   -33,   -33,
     -34,     0,   -33,   -33,   -33,     0,   -33,   -33,   -33,   -33,
     -33,   -33,     0,     0,   -34,   -34,   -34,   -34,   -31,   -33,
     -34,   -34,   -34,     0,   -34,   -34,   -34,   -34,   -34,   -34,
       0,     0,   -31,   -31,   -31,   -31,    20,   -34,   -31,   -31,
     -31,     0,   -31,   -31,   -31,   -31,   -31,   -31,     0,     0,
      21,    22,    23,    24,   -21,   -31,    25,    26,    27,     0,
      28,    29,    30,    31,    32,     0,     0,     0,   -21,   -21,
     -21,   -21,    69,    33,   -21,   -21,   -21,     0,   -21,   -21,
     -21,   -21,   -21,     0,     0,     0,    21,    22,    23,    24,
     -20,   -21,    25,    26,    27,     0,    28,    29,    30,    31,
      32,     0,     0,     0,   -20,   -20,   -20,   -20,   -24,    33,
     -20,   -20,   -20,     0,   -20,   -20,   -20,   -20,   -20,     0,
       0,     0,   -24,   -24,   -24,   -24,   -19,   -20,   -24,   -24,
     -24,     0,   -24,   -24,   -24,   -24,   -24,     0,     0,     0,
     -19,   -19,   -19,   -19,   -22,   -24,   -19,   -19,   -19,     0,
     -19,   -19,   -19,   -19,   -19,     0,     0,     0,   -22,   -22,
     -22,   -22,   -23,   -19,   -22,   -22,   -22,     0,   -22,   -22,
     -22,   -22,   -22,     0,     0,     0,   -23,   -23,   -23,   -23,
     -29,   -22,   -23,   -23,   -23,     0,   -23,   -23,   -23,   -23,
     -23,     0,     0,     0,   -29,   -29,   -29,   -29,   -28,   -23,
     -29,   -29,   -29,     0,   -29,   -29,   -29,   -29,   -29,     0,
       0,     0,   -28,   -28,   -28,   -28,   -25,   -29,   -28,   -28,
     -28,     0,   -28,   -28,   -28,   -28,   -28,     0,     0,     0,
     -25,   -25,   -25,   -25,   -26,   -28,   -25,   -25,   -25,     0,
     -25,   -25,   -25,   -25,   -25,     0,     0,     0,   -26,   -26,
     -26,   -26,   -27,   -25,   -26,   -26,   -26,     0,   -26,   -26,
     -26,   -26,   -26,     0,     0,     0,   -27,   -27,   -27,   -27,
     -32,   -26,   -27,   -27,   -27,     0,   -27,   -27,   -27,   -27,
     -27,     0,     0,     0,   -32,   -32,   -32,   -32,   -15,   -27,
     -32,   -32,   -32,     0,   -32,   -32,   -32,   -32,   -32,     0,
       0,     0,   -15,   -15,   -15,   -15,   -16,   -32,   -15,   -15,
     -15,     0,   -15,   -15,   -15,   -15,   -15,     0,     0,     0,
     -16,   -16,   -16,   -16,   -33,   -15,   -16,   -16,   -16,     0,
     -16,   -16,   -16,   -16,   -16,     0,     0,     0,   -33,   -33,
     -33,   -33,   -34,   -16,   -33,   -33,   -33,     0,   -33,   -33,
     -33,   -33,   -33,     0,     0,     0,   -34,   -34,   -34,   -34,
     -31,   -33,   -34,   -34,   -34,     0,   -34,   -34,   -34,   -34,
     -34,     0,     0,     0,   -31,   -31,   -31,   -31,    -8,   -34,
     -31,   -31,   -31,     0,   -31,   -31,   -31,   -31,   -31,     0,
       0,     0,    -8,    -8,    -8,    -8,   363,   -31,    -8,    -8,
      -8,     0,    -8,    -8,    -8,    -8,    -8,     0,     0,     0,
      21,    22,    23,    24,   395,    -8,    25,    26,    27,     0,
      28,    29,    30,    31,    32,     0,     0,     0,    21,    22,
      23,    24,   -18,    33,    25,    26,    27,     0,    28,    29,
      30,    31,    32,     0,     0,     0,   -18,   -18,   -18,   -18,
     456,    33,   -18,   -18,   -18,     0,   -18,   -18,   -18,   -18,
     -18,     0,     0,     0,    21,    22,    23,    24,   507,   -18,
      25,    26,    27,     0,    28,    29,    30,    31,    32,     0,
       0,     0,    21,    22,    23,    24,   -17,    33,    25,    26,
      27,     0,    28,    29,    30,    31,    32,     0,     0,     0,
     -17,   -17,   -17,   -17,     0,    33,   -17,   -17,   -17,     0,
     -17,   -17,   -17,   -17,   -17,   -35,   -35,     0,     0,   -36,
     -36,     0,     0,   -17,     0,   -35,     0,     0,     0,   -36,
       0,   -35,   -35,     0,     0,   -36,   -36,     0,   -35,   -35,
     -35,   -35,   -36,   -36,   -36,   -36,     0,   270,   582,     0,
     -35,   -35,   -35,     0,   -36,   -36,   -36,   271,   -79,   -79,
     -79,    81,    82,   272,   273,     0,     0,     0,     0,   208,
     274,   275,   276,   277,   -82,   -82,   -82,   -82,   -82,    86,
     -82,     0,   278,   279,   280,    87,    88,     0,     0,     0,
       0,   270,   209,   210,   211,   212,   -86,   -86,   -86,   -86,
     -86,   271,   -86,     0,   213,    89,   214,   272,   273,     0,
       0,     0,   478,     0,   274,   275,   276,   277,   -78,   479,
     -78,   -78,   318,   319,     0,     0,   278,   279,   280,   480,
     481,     0,     0,   270,     0,   482,   483,   484,   485,     0,
       0,     0,     0,   271,     0,     0,     0,   486,   487,   488,
     273,     0,     0,   -49,   -50,     0,   274,   275,   276,   277,
     -49,     0,     0,   133,   134,     0,     0,     0,   278,   378,
     280,   -50,     0,     0,   135,   -51,     0,   -50,   -50,   -50,
     -50,   -49,   -49,   136,   137,   -49,   -49,     0,     0,   -50,
     -50,   -50,   -51,     0,     0,   -53,   208,     0,   -51,   -51,
     -51,   -51,   -53,     0,     0,   -53,   -53,     0,     0,     0,
     -51,   -51,   -51,    88,     0,     0,   -53,   -57,     0,   209,
     210,   211,   212,   -53,   -53,   -53,   -53,   -53,   -53,     0,
       0,   213,   242,   214,   -57,     0,     0,   -74,   -58,     0,
     -57,   -57,   -57,   -57,   -74,     0,     0,   -74,   -74,     0,
       0,     0,   -57,   -57,   -57,   -58,     0,     0,   -74,   -61,
       0,   -58,   -58,   -58,   -58,   -74,   -74,   -74,   -74,   -74,
     -74,     0,     0,   -58,   -58,   -58,   -61,     0,     0,   -75,
     -59,     0,   -61,   -61,   -61,   -61,   -75,     0,     0,   -75,
     -75,     0,     0,     0,   -61,   -61,   -61,   -59,     0,     0,
     -75,   -60,     0,   -59,   -59,   -59,   -59,   -75,   -75,   -75,
     -75,   -75,   -75,     0,     0,   -59,   -59,   -59,   -60,     0,
       0,   -56,   219,     0,   -60,   -60,   -60,   -60,   -56,     0,
       0,   -56,   -56,     0,     0,     0,   -60,   -60,   -60,   221,
       0,     0,   -56,   270,     0,   222,   223,   224,   225,   -56,
     -56,   -56,   -56,   -56,   -56,     0,     0,   226,   227,   228,
     273,   -82,   -82,   -82,   -82,   -82,   274,   275,   276,   277,
     -85,   -85,   -85,   -85,   -85,     0,   -85,     0,   278,   378,
     280,   243,     0,   -85,   -85,   -85,   -85,   -85,     0,   -85,
     124,     0,   -85,   -85,     0,     0,   385,   -85,     0,   -85,
     -85,   -85,   -85,   -85,   -85,   386,     0,   -85,   -85,     0,
     -85,   -85,   -85,   -85,   -85,   -85,     0,   -86,   -85,   -86,
     -86,   -86,   -86,     0,     0,   -85,   -85,   -85,   -85,   -85,
     -85,   243,     0,   -85,   -85,   -85,   -85,   -85,     0,   -85,
       0,     0,   -85,   -85,   385,   -85,     0,   -85,   -85,   -85,
     -85,     0,   -85,   -85,     0,   -85,   -85,     0,     0,     0,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -80,     0,   -80,
     -80,   -80,   -80,   -85,   -85,   -85,   -85,   -85,   -85,   346,
     -85,     0,   -85,   -85,   -85,   -85,     0,     0,     0,     0,
     -85,   -85,     0,   -83,     0,   -83,   -83,   -83,   -83,     0,
     -83,   -85,     0,   -83,   -83,     0,     0,     0,   -85,   -85,
     -85,   -85,   -85,   -85,   -83,   -81,     0,   -81,   -81,   -81,
     -81,   -83,   -83,   -83,   -83,   -83,   -83,   -84,     0,   -84,
     -84,   -84,   -84,     0,   -84,     0,     0,   -84,   -84,     0,
     -79,     0,   -79,   -79,   393,   394,     0,   -79,   -84,     0,
     -79,   -79,     0,     0,     0,   -84,   -84,   -84,   -84,   -84,
     -84,   -79,   -86,   -86,   -86,   -86,   -86,     0,   -79,   -79,
     -79,   -79,   -79,   -79,   -82,     0,   -82,   -82,   -82,   -82,
       0,   -82,     0,     0,   -82,   -82,     0,   -86,     0,   -86,
     -86,   -86,   -86,     0,   -86,   -82,     0,   -86,   -86,     0,
       0,     0,   -82,   -82,   -82,   -82,   -82,   -82,   -86,   -85,
     -85,   -85,   -85,   -85,     0,   -86,   -86,   -86,   -86,   -86,
     -86,   -85,     0,   -85,   -85,   -85,   -85,     0,   -85,     0,
       0,   -85,   -85,     0,   -77,     0,   -77,   -77,   393,   394,
       0,   -77,   -85,     0,   -77,   -77,     0,     0,     0,   -85,
     -85,   -85,   -85,   -85,   -85,   -77,   -77,   -77,   -77,    81,
      82,     0,   -77,   -77,   -77,   -77,   -77,   -77,   -78,     0,
     -78,   -78,   393,   394,     0,   -78,     0,     0,   -78,   -78,
       0,   -80,     0,   -80,   -80,   -80,   -80,     0,   -80,   -78,
       0,   -80,   -80,     0,     0,     0,   -78,   -78,   -78,   -78,
     -78,   -78,   -80,   -78,   -78,   -78,    81,    82,     0,   -80,
     -80,   -80,   -80,   -80,   -80,   -81,     0,   -81,   -81,   -81,
     -81,     0,   -81,     0,     0,   -81,   -81,     0,   -83,     0,
     -83,   -83,   -83,   -83,     0,     0,   -81,     0,   -83,   -83,
       0,     0,     0,   -81,   -81,   -81,   -81,   -81,   -81,   -83,
     -80,   -80,   -80,   -80,   -80,     0,   -83,   -83,   -83,   -83,
     -83,   -83,   -84,     0,   -84,   -84,   -84,   -84,     0,     0,
       0,     0,   -84,   -84,     0,   -79,     0,   -79,   -79,   352,
     353,     0,     0,   -84,     0,   -79,   -79,     0,     0,     0,
     -84,   -84,   -84,   -84,   -84,   -84,   -79,   -81,   -81,   -81,
     -81,   -81,     0,   -79,   -79,   -79,   -79,   -79,   -79,   -82,
       0,   -82,   -82,   -82,   -82,     0,     0,     0,     0,   -82,
     -82,     0,   -86,     0,   -86,   -86,   -86,   -86,     0,     0,
     -82,     0,   -86,   -86,     0,     0,     0,   -82,   -82,   -82,
     -82,   -82,   -82,   -86,     0,     0,     0,     0,     0,     0,
     -86,   -86,   -86,   -86,   -86,   -86,   -85,     0,   -85,   -85,
     -85,   -85,     0,     0,     0,     0,   -85,   -85,     0,   -77,
       0,   -77,   -77,   352,   353,     0,     0,   -85,     0,   -77,
     -77,     0,     0,     0,   -85,   -85,   -85,   -85,   -85,   -85,
     -77,     0,     0,     0,     0,     0,     0,   -77,   -77,   -77,
     -77,   -77,   -77,   -78,     0,   -78,   -78,   352,   353,     0,
       0,     0,     0,   -78,   -78,     0,   -80,     0,   -80,   -80,
     -80,   -80,     0,     0,   -78,     0,   -80,   -80,     0,     0,
       0,   -78,   -78,   -78,   -78,   -78,   -78,   -80,     0,     0,
       0,     0,     0,     0,   -80,   -80,   -80,   -80,   -80,   -80,
     -81,     0,   -81,   -81,   -81,   -81,   -54,     0,   391,   392,
     -81,   -81,     0,   -54,     0,     0,   -54,   -54,     0,     0,
       0,   -81,     0,     0,     0,     0,     0,   -54,   -81,   -81,
     -81,   -81,   -81,   -81,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,     0,   350,   351,     0,     0,   -76,     0,     0,     0,
     -54,   -54,     0,   -76,     0,     0,   -76,   -76,     0,     0,
       0,   -54,     0,     0,     0,     0,     0,   -76,   -54,   -54,
     -54,   -54,   -54,   -54,   -76,   -76,   -76,   -76,   -76,   -76,
     -48,     0,     0,     0,     0,     0,   -52,   -48,     0,     0,
     133,   134,     0,   -52,     0,     0,   -52,   -52,     0,     0,
       0,   135,     0,     0,     0,     0,     0,   -52,   -48,   -48,
     136,   137,   -48,   -48,   -52,   -52,   -52,   -52,   -52,   -52,
     -64,     0,     0,     0,     0,     0,   -65,   -64,     0,     0,
     -64,   -64,     0,   -65,     0,     0,   -65,   -65,     0,     0,
       0,   -64,     0,     0,     0,     0,     0,   -65,   -64,   -64,
     -64,   -64,   -64,   -64,   -65,   -65,   -65,   -65,   -65,   -65,
     -66,     0,     0,     0,     0,     0,   -67,   -66,     0,     0,
     -66,   -66,     0,   -67,     0,     0,   -67,   -67,     0,     0,
       0,   -66,     0,     0,     0,     0,     0,   -67,   -66,   -66,
     -66,   -66,   -66,   -66,   -67,   -67,   -67,   -67,   -67,   -67,
     -63,     0,     0,     0,     0,     0,   -49,   -63,     0,     0,
     -63,   -63,     0,     0,     0,     0,   133,   134,     0,     0,
       0,   -63,     0,     0,     0,     0,     0,   135,   -63,   -63,
     -63,   -63,   -63,   -63,   -49,   -49,   136,   137,   -49,   -49,
     -53,     0,     0,     0,     0,     0,   -74,     0,     0,     0,
     -53,   -53,     0,     0,     0,     0,   -74,   -74,     0,     0,
       0,   -53,     0,     0,     0,     0,     0,   -74,   -53,   -53,
     -53,   -53,   -53,   -53,   -74,   -74,   -74,   -74,   -74,   -74,
     -75,     0,     0,     0,     0,     0,   -56,     0,     0,     0,
     -75,   -75,     0,     0,     0,     0,   -56,   -56,     0,     0,
       0,   -75,     0,     0,     0,     0,     0,   -56,   -75,   -75,
     -75,   -75,   -75,   -75,   -56,   -56,   -56,   -56,   -56,   -56,
     -76,     0,     0,     0,     0,     0,   -48,     0,     0,     0,
     -76,   -76,     0,     0,     0,     0,   133,   134,     0,     0,
       0,   -76,     0,     0,     0,     0,     0,   135,   -76,   -76,
     -76,   -76,   -76,   -76,   -48,   -48,   136,   137,   -48,   -48,
     -52,     0,     0,     0,     0,     0,   -64,     0,     0,     0,
     -52,   -52,     0,     0,     0,     0,   -64,   -64,     0,     0,
       0,   -52,     0,     0,     0,     0,     0,   -64,   -52,   -52,
     -52,   -52,   -52,   -52,   -64,   -64,   -64,   -64,   -64,   -64,
     -65,     0,     0,     0,     0,     0,   -66,     0,     0,     0,
     -65,   -65,     0,     0,     0,     0,   -66,   -66,     0,     0,
       0,   -65,     0,     0,     0,     0,     0,   -66,   -65,   -65,
     -65,   -65,   -65,   -65,   -66,   -66,   -66,   -66,   -66,   -66,
     -67,     0,     0,     0,     0,     0,   -63,     0,     0,     0,
     -67,   -67,     0,     0,     0,     0,   -63,   -63,     0,     0,
       0,   -67,     0,     0,     0,     0,     0,   -63,   -67,   -67,
     -67,   -67,   -67,   -67,   -63,   -63,   -63,   -63,   -63,   -63,
     -83,   -83,   -83,   -83,   -83,     0,   -83,     0,     0,   -83,
     -83,     0,     0,   -84,   -84,   -84,   -84,   -84,     0,   -84,
     -83,     0,   -84,   -84,     0,     0,     0,   -83,   -83,   -83,
     -83,   -83,   -83,   -84,     0,     0,     0,     0,     0,     0,
     -84,   -84,   -84,   -84,   -84,   -84,   -79,   -79,   -79,   337,
     338,     0,   -79,     0,     0,   -79,   -79,     0,     0,   -82,
     -82,   -82,   -82,   -82,     0,   -82,   -79,     0,   -82,   -82,
       0,     0,     0,   -79,   -79,   -79,   -79,   -79,   -79,   -82,
       0,     0,     0,     0,     0,     0,   -82,   -82,   -82,   -82,
     -82,   -82,   -85,   -85,   -85,   -85,   -85,     0,   -85,     0,
       0,   -85,   -85,     0,     0,   -77,   -77,   -77,   337,   338,
       0,   -77,   -85,     0,   -77,   -77,     0,     0,     0,   -85,
     -85,   -85,   -85,   -85,   -85,   -77,     0,     0,     0,     0,
       0,     0,   -77,   -77,   -77,   -77,   -77,   -77,   -78,   -78,
     -78,   337,   338,     0,   -78,     0,     0,   -78,   -78,     0,
       0,   -86,   -86,   -86,   -86,   -86,     0,   -86,   -78,     0,
     -86,   -86,     0,     0,     0,   -78,   -78,   -78,   -78,   -78,
     -78,   -86,     0,     0,     0,     0,     0,     0,   -86,   -86,
     -86,   -86,   -86,   -86,   -80,   -80,   -80,   -80,   -80,     0,
     -80,     0,     0,   -80,   -80,     0,     0,   -81,   -81,   -81,
     -81,   -81,     0,   -81,   -80,     0,   -81,   -81,     0,     0,
       0,   -80,   -80,   -80,   -80,   -80,   -80,   -81,     0,     0,
       0,     0,     0,     0,   -81,   -81,   -81,   -81,   -81,   -81,
     -54,   246,   247,     0,     0,     0,   -54,     0,     0,   -54,
     -54,     0,     0,   -49,     0,     0,     0,     0,     0,   -49,
     -54,     0,   133,   134,     0,     0,     0,   -54,   -54,   -54,
     -54,   -54,   -54,   135,     0,     0,     0,     0,     0,     0,
     -49,   -49,   136,   137,   -49,   -49,   -53,   -77,   -77,   -77,
     374,   375,   -53,   -77,     0,   -53,   -53,     0,     0,   -56,
       0,     0,     0,     0,     0,   -56,   -53,     0,   -56,   -56,
       0,     0,     0,   -53,   -53,   -53,   -53,   -53,   -53,   -56,
       0,     0,     0,     0,     0,     0,   -56,   -56,   -56,   -56,
     -56,   -56,   -48,   -78,   -78,   -78,   374,   375,   -48,   -78,
       0,   133,   134,     0,     0,   -52,     0,     0,     0,     0,
       0,   -52,   135,     0,   -52,   -52,     0,     0,     0,   -48,
     -48,   136,   137,   -48,   -48,   -52,     0,     0,     0,     0,
       0,     0,   -52,   -52,   -52,   -52,   -52,   -52,   -74,   -80,
     -80,   -80,   -80,   -80,   -74,   -80,     0,   -74,   -74,     0,
       0,   -75,     0,     0,     0,     0,     0,   -75,   -74,     0,
     -75,   -75,     0,     0,     0,   -74,   -74,   -74,   -74,   -74,
     -74,   -75,     0,     0,     0,     0,     0,     0,   -75,   -75,
     -75,   -75,   -75,   -75,   -76,   -81,   -81,   -81,   -81,   -81,
     -76,   -81,     0,   -76,   -76,     0,     0,   -63,     0,     0,
       0,     0,     0,   -63,   -76,     0,   -63,   -63,     0,     0,
       0,   -76,   -76,   -76,   -76,   -76,   -76,   -63,     0,     0,
       0,     0,     0,     0,   -63,   -63,   -63,   -63,   -63,   -63,
     -64,     0,     0,     0,     0,     0,   -64,     0,     0,   -64,
     -64,     0,     0,   -65,     0,     0,     0,     0,     0,   -65,
     -64,     0,   -65,   -65,     0,     0,     0,   -64,   -64,   -64,
     -64,   -64,   -64,   -65,     0,     0,     0,     0,     0,     0,
     -65,   -65,   -65,   -65,   -65,   -65,   -66,     0,     0,     0,
       0,     0,   -66,     0,     0,   -66,   -66,     0,     0,   -67,
       0,     0,     0,     0,     0,   -67,   -66,     0,   -67,   -67,
       0,     0,     0,   -66,   -66,   -66,   -66,   -66,   -66,   -67,
       0,     0,     0,     0,     0,     0,   -67,   -67,   -67,   -67,
     -67,   -67
};

static const yytype_int16 yycheck[] =
{
       0,    17,     6,     3,    66,    66,    90,    90,   232,    25,
     251,   231,     5,    66,     5,     0,     7,    66,   243,    35,
     125,     0,   127,    15,    86,     6,    42,    43,    41,    45,
      34,    35,    13,   143,    38,    39,    21,     6,    25,     6,
       0,   125,    21,    21,    13,    61,   156,    40,    41,    42,
      66,    41,    68,   294,     3,    42,    43,   167,   168,     6,
      41,     5,   286,   125,   125,   285,     6,   129,    12,    38,
      86,    38,   125,    13,    90,   128,   125,    41,    22,    23,
      21,    68,     5,    66,    28,    29,    30,    31,     5,   138,
       5,    38,   317,     5,     5,     5,    40,    41,    42,    14,
     143,   326,    14,     6,   120,   121,     5,     5,   124,   125,
      13,   127,   128,   129,     7,    41,   132,    40,    41,    42,
      13,   346,   138,    40,    41,    42,     5,   143,   120,    40,
      41,    42,     6,     5,   121,    38,    39,   124,   154,    13,
     156,     6,   125,   143,     5,    38,   371,     5,    13,   132,
       5,   167,   168,    66,     5,   171,     0,     0,   220,     6,
     385,    40,    41,    42,   156,     6,    13,   154,    40,    41,
      42,   220,    13,     0,   190,   167,   168,    21,    21,    40,
      41,    42,    40,    41,    42,     0,   248,    63,    64,    65,
       7,     5,   208,     7,    21,   248,    13,    38,    39,   248,
       0,    15,     5,   219,   220,   310,    21,    21,    22,   271,
       0,     6,   125,     6,    28,    29,    30,    31,    13,     6,
      13,    21,   271,   447,     5,     5,    40,    41,    42,     7,
       6,    21,   248,     5,     5,   251,   252,   220,     0,    34,
      35,     6,    17,    38,    39,    38,    39,     6,   310,   310,
      25,    38,    39,     7,   270,   271,    41,   310,     7,    21,
      35,   310,    38,    39,     6,   248,     7,    42,    43,     6,
      45,    13,     6,    38,    39,   499,    13,     6,   294,    38,
      39,     7,     7,   299,    13,   347,    61,    13,   271,     8,
       9,    66,    21,    68,   310,     7,    38,    39,   347,   348,
     349,    38,    39,     6,    38,    39,     7,   220,    27,     7,
      13,    86,   299,     5,     6,    90,     8,     9,    10,    11,
     403,    13,     6,    41,     7,   387,   388,   310,   553,    13,
       7,   347,   348,   349,   387,   248,    13,     6,   387,   388,
     389,   390,   404,   404,    13,   120,   121,     7,   364,   124,
     125,   404,   127,   128,   129,   404,     7,   132,   271,     6,
       6,    38,    39,   138,   347,   348,    13,    13,   143,     6,
     386,   387,   388,   389,   390,     8,     9,    10,    11,   154,
     396,   156,   398,   399,     6,     6,     6,   403,   404,   405,
       6,    13,   167,   168,    27,     7,   171,   310,     6,   386,
       5,    13,     7,     7,   387,   388,   389,     6,    27,    13,
      15,   398,   399,     6,    13,   190,    21,    22,   405,     6,
      13,   404,     6,    28,    29,    30,    31,    41,     6,    13,
     514,   514,     6,   208,   347,    40,    41,    42,   314,   315,
     316,     6,    14,     6,   219,   220,     7,   323,   324,   325,
      13,   561,    13,   563,     7,     7,   472,   562,   334,   335,
     336,    13,   478,     6,     6,     8,     9,   343,   344,   345,
      13,    13,   582,   248,   387,   388,   251,   252,   562,    41,
       7,   591,   592,     6,     6,   472,    38,    39,     7,     7,
      13,   404,   368,   369,   370,   270,   271,    25,   514,     7,
     562,   562,     7,    17,     6,    13,   382,   383,   384,   562,
       7,    13,     7,   562,    42,    43,    13,    45,   561,   294,
     563,    35,     6,     6,   299,     6,   402,     7,     7,    13,
      38,    39,    13,    61,    13,   310,     7,     7,    66,   582,
      68,    38,    39,    13,     7,   561,   562,   563,   591,   592,
       6,    79,    80,    81,    82,    34,    35,    13,    86,    38,
      39,   561,    90,   563,     6,     6,   582,     7,    38,    39,
       6,    13,   347,   348,   349,   591,   592,    13,     6,   562,
       6,     6,   582,     6,     6,    13,   114,    13,    13,   364,
      13,   591,   592,   121,     6,     6,   124,   125,     6,   127,
     128,   129,    13,     7,   132,    13,   120,     5,     5,    13,
     138,   386,   387,   388,   389,   390,     8,     9,    10,    11,
       6,   396,     5,   398,   399,     6,   154,    13,   403,   404,
     405,     5,    13,     5,    27,    27,     8,     9,    10,    11,
       6,     6,   156,   171,     4,     6,     5,    13,    13,   562,
       7,     8,     9,   167,   168,    27,    13,     7,    18,    19,
      20,    21,   190,    13,    24,    25,    26,     6,    28,    29,
      30,    31,    32,    33,   550,   551,   552,     6,    27,     7,
     208,    41,    27,     7,    13,    13,     6,    16,    17,    13,
       7,   219,   220,     7,     7,     7,    13,   472,    27,    13,
      13,    13,     5,   478,     5,    34,    35,    36,    37,    38,
      39,    27,   240,   241,     8,     9,    10,    11,   246,   247,
     248,   249,    27,     6,   252,     8,     9,    10,    11,     3,
      13,    27,     7,    27,     7,     7,     5,   251,    13,   514,
      13,    13,   270,   271,    18,    19,    20,    21,     4,    27,
      24,    25,    26,     7,    28,    29,    30,    31,    32,    13,
       7,     5,    18,    19,    20,    21,    13,    41,    24,    25,
      26,   299,    28,    29,    30,    31,    32,    33,     7,     5,
     294,     5,   310,     5,    13,    41,   561,   562,   563,     5,
     318,   319,     5,     8,     9,    10,    11,     6,     5,     8,
       9,   329,   330,     6,     5,     8,     9,   582,     5,   337,
     338,     3,    27,     7,     8,     9,   591,   592,     5,   347,
     348,   349,   350,   351,   352,   353,    18,    19,    20,    21,
     358,     5,    24,    25,    26,     5,    28,    29,    30,    31,
      32,    41,     5,     5,   372,   373,   374,   375,    41,    41,
     364,     5,     5,     8,     9,    10,    11,     5,   386,   387,
     388,   389,   390,   391,   392,   393,   394,     5,    25,     5,
     398,   399,    27,     5,     5,   403,   404,   405,     6,     5,
       8,     9,   396,     7,     7,    42,    43,     6,    45,     5,
       5,     7,     7,     8,     9,    10,    11,   425,    13,    15,
       8,     9,    10,    11,    61,    21,    22,    41,     6,    66,
       6,    68,    28,    29,    30,    31,    41,     5,     7,    27,
      41,   449,    79,    80,    40,    41,    42,    15,     6,    86,
       8,     9,     6,    90,    22,     6,   464,     8,     9,    41,
      28,    29,    30,    31,   472,     6,     8,     9,    10,    11,
     478,    41,    40,    41,    42,     6,     5,   114,     7,     8,
       9,    10,    11,     4,   121,    27,    14,   124,   125,    41,
     127,   128,   129,   501,    41,   132,     7,    18,    19,    20,
      21,   138,     6,    24,    25,    26,   514,    28,    29,    30,
      31,    32,    33,     6,     6,     4,     6,   154,     6,     6,
      41,     8,     9,    10,    11,     6,    13,     8,     9,    18,
      19,    20,    21,    27,   171,    24,    25,    26,     6,    28,
      29,    30,    31,    32,    33,     6,   554,   555,   556,   557,
       5,     6,    41,   190,   562,     7,     8,     9,    10,    11,
      15,    13,     6,     6,   572,     6,    21,    22,     6,     6,
       6,   208,     6,    28,    29,    30,    31,     6,     6,     6,
      25,     6,   219,   220,     6,    40,    41,    42,     6,     8,
       9,    10,    11,     6,     6,     6,     6,    42,    43,     6,
      45,     8,     9,   240,   241,     6,    16,    17,    27,   246,
     247,   248,   249,     6,     5,   252,    61,    27,     5,     5,
       5,    66,     4,    68,    34,    35,    36,    37,    38,    39,
       6,     6,     6,   270,   271,     6,    18,    19,    20,    21,
       7,    86,    24,    25,    26,    90,    28,    29,    30,    31,
      32,    33,     6,     8,     9,    10,    11,     6,     6,    41,
       6,     6,   299,     8,     9,    10,    11,     6,    13,   114,
      27,     5,    27,   310,    27,    27,   121,    27,    12,   124,
     125,     6,   127,   128,   129,    27,     7,   132,    22,    23,
     327,   328,     7,   138,    28,    29,    30,    31,     7,     8,
       9,    10,    11,     4,    13,    41,    40,    41,    42,   154,
     347,   348,   349,   350,   351,     7,     6,    18,    19,    20,
      21,   358,     6,    24,    25,    26,   171,    28,    29,    30,
      31,    32,    33,     6,     6,   372,   373,     3,    -1,    -1,
      41,     8,     9,    10,    11,   190,    -1,    -1,    -1,   386,
     387,   388,   389,   390,   391,   392,     4,    -1,    -1,    -1,
      27,   398,   399,   208,    -1,    -1,   403,   404,   405,    -1,
      18,    19,    20,    21,   219,   220,    24,    25,    26,    -1,
      28,    29,    30,    31,    32,    33,     7,     6,   425,     8,
       9,    -1,    13,    41,    -1,    16,    17,     6,    -1,     8,
       9,    10,    11,   248,   249,    -1,    27,   252,     6,    -1,
       8,     9,   449,    34,    35,    36,    37,    38,    39,    -1,
      25,    -1,     5,    -1,    -1,   270,   271,   464,    -1,    -1,
      -1,    -1,    15,    -1,    -1,   472,    -1,    42,    43,    22,
      45,   478,    -1,    -1,    -1,    28,    29,    30,    31,    -1,
      -1,    -1,    25,    -1,   299,    -1,    61,    40,    41,    42,
      -1,    66,    -1,    68,   501,   310,    -1,    -1,    -1,    42,
      43,    -1,    45,     5,    -1,     7,    -1,   514,    -1,    -1,
      -1,    86,    -1,    15,    -1,    90,    -1,    -1,    -1,    21,
      22,    -1,    -1,    -1,    -1,    68,    28,    29,    30,    31,
      -1,    -1,   347,   348,   349,    -1,    -1,    -1,    40,    41,
      42,    -1,    -1,   358,    -1,    -1,   121,   554,   555,   124,
     125,    -1,   127,   128,   129,   562,    -1,   132,     7,     8,
       9,    10,    11,   138,    13,   572,     7,     8,     9,    10,
      11,   386,   387,   388,   389,   390,    -1,     4,   121,   154,
      -1,   124,    -1,   398,   399,    -1,    -1,    -1,   403,   404,
     405,    18,    19,    20,    21,    -1,   171,    24,    25,    26,
       5,    28,    29,    30,    31,    32,    33,    12,    -1,    -1,
     425,   154,    -1,    -1,    41,   190,    -1,    22,    23,    -1,
      -1,    -1,    -1,    28,    29,    30,    31,     6,   171,     8,
       9,    10,    11,   208,   449,    40,    41,    42,     7,     8,
       9,    10,    11,     5,   219,   220,    -1,   190,    -1,   464,
      12,     6,    -1,     8,     9,    10,    11,   472,    13,    -1,
      22,    23,    -1,   478,    -1,   208,    28,    29,    30,    31,
      -1,    -1,    -1,   248,    -1,    -1,   219,   252,    40,    41,
      42,    -1,    -1,    -1,    -1,     6,   501,     8,     9,    10,
      11,     4,    13,    -1,    -1,   270,   271,     5,     6,   514,
       8,     9,    10,    11,    -1,    18,    19,    20,    21,   252,
      -1,    24,    25,    26,    -1,    28,    29,    30,    31,    32,
      33,    -1,    -1,    -1,   299,    -1,    -1,   270,    41,     6,
      -1,     8,     9,    10,    11,   310,    13,     6,     4,     8,
       9,    10,    11,    -1,    13,    -1,     6,   562,     8,     9,
      10,    11,    18,    19,    20,    21,   299,   572,    24,    25,
      26,    -1,    28,    29,    30,    31,    32,    33,     4,    -1,
      -1,    -1,   347,   348,   349,    41,     6,    -1,     8,     9,
      10,    11,    18,    19,    20,    21,    -1,    -1,    24,    25,
      26,    -1,    28,    29,    30,    31,    32,    33,    -1,     6,
      -1,     8,     9,    10,    11,    41,    13,    -1,    -1,    -1,
      -1,   386,   387,   388,   389,   390,    -1,    -1,    -1,    -1,
       4,    -1,    -1,   398,   399,    -1,    -1,    -1,   403,   404,
     405,    -1,    -1,    -1,    18,    19,    20,    21,    -1,    -1,
      24,    25,    26,   386,    28,    29,    30,    31,    32,    33,
       4,    -1,    -1,    -1,    -1,   398,   399,    41,    -1,    -1,
      -1,    -1,   405,    -1,    18,    19,    20,    21,    -1,    -1,
      24,    25,    26,    -1,    28,    29,    30,    31,    32,    33,
      -1,    -1,    -1,    -1,     4,    -1,    -1,    41,     6,    -1,
       8,     9,    10,    11,    -1,    13,    -1,   472,    18,    19,
      20,    21,    -1,   478,    24,    25,    26,    -1,    28,    29,
      30,    31,    32,    33,    -1,     6,     4,     8,     9,    10,
      11,    41,    13,     6,    -1,     8,     9,    10,    11,   472,
      18,    19,    20,    21,     4,   478,    24,    25,    26,   514,
      28,    29,    30,    31,    32,    33,    -1,    -1,    18,    19,
      20,    21,     4,    41,    24,    25,    26,    -1,    28,    29,
      30,    31,    32,    33,    -1,    -1,    18,    19,    20,    21,
      -1,    41,    24,    25,    26,    -1,    28,    29,    30,    31,
      32,    33,     4,    -1,    -1,    -1,    -1,   562,     6,    41,
       8,     9,    10,    11,    -1,    -1,    18,    19,    20,    21,
       4,    -1,    24,    25,    26,    -1,    28,    29,    30,    31,
      32,    33,    -1,    -1,    18,    19,    20,    21,     4,    41,
      24,    25,    26,    -1,    28,    29,    30,    31,    32,    33,
      -1,    -1,    18,    19,    20,    21,     4,    41,    24,    25,
      26,    -1,    28,    29,    30,    31,    32,    33,    -1,    -1,
      18,    19,    20,    21,     4,    41,    24,    25,    26,    -1,
      28,    29,    30,    31,    32,    -1,    -1,    -1,    18,    19,
      20,    21,     4,    41,    24,    25,    26,    -1,    28,    29,
      30,    31,    32,    -1,    -1,    -1,    18,    19,    20,    21,
       4,    41,    24,    25,    26,    -1,    28,    29,    30,    31,
      32,    -1,    -1,    -1,    18,    19,    20,    21,     4,    41,
      24,    25,    26,    -1,    28,    29,    30,    31,    32,    -1,
      -1,    -1,    18,    19,    20,    21,     4,    41,    24,    25,
      26,    -1,    28,    29,    30,    31,    32,    -1,    -1,    -1,
      18,    19,    20,    21,     4,    41,    24,    25,    26,    -1,
      28,    29,    30,    31,    32,    -1,    -1,    -1,    18,    19,
      20,    21,     4,    41,    24,    25,    26,    -1,    28,    29,
      30,    31,    32,    -1,    -1,    -1,    18,    19,    20,    21,
       4,    41,    24,    25,    26,    -1,    28,    29,    30,    31,
      32,    -1,    -1,    -1,    18,    19,    20,    21,     4,    41,
      24,    25,    26,    -1,    28,    29,    30,    31,    32,    -1,
      -1,    -1,    18,    19,    20,    21,     4,    41,    24,    25,
      26,    -1,    28,    29,    30,    31,    32,    -1,    -1,    -1,
      18,    19,    20,    21,     4,    41,    24,    25,    26,    -1,
      28,    29,    30,    31,    32,    -1,    -1,    -1,    18,    19,
      20,    21,     4,    41,    24,    25,    26,    -1,    28,    29,
      30,    31,    32,    -1,    -1,    -1,    18,    19,    20,    21,
       4,    41,    24,    25,    26,    -1,    28,    29,    30,    31,
      32,    -1,    -1,    -1,    18,    19,    20,    21,     4,    41,
      24,    25,    26,    -1,    28,    29,    30,    31,    32,    -1,
      -1,    -1,    18,    19,    20,    21,     4,    41,    24,    25,
      26,    -1,    28,    29,    30,    31,    32,    -1,    -1,    -1,
      18,    19,    20,    21,     4,    41,    24,    25,    26,    -1,
      28,    29,    30,    31,    32,    -1,    -1,    -1,    18,    19,
      20,    21,     4,    41,    24,    25,    26,    -1,    28,    29,
      30,    31,    32,    -1,    -1,    -1,    18,    19,    20,    21,
       4,    41,    24,    25,    26,    -1,    28,    29,    30,    31,
      32,    -1,    -1,    -1,    18,    19,    20,    21,     4,    41,
      24,    25,    26,    -1,    28,    29,    30,    31,    32,    -1,
      -1,    -1,    18,    19,    20,    21,     4,    41,    24,    25,
      26,    -1,    28,    29,    30,    31,    32,    -1,    -1,    -1,
      18,    19,    20,    21,     4,    41,    24,    25,    26,    -1,
      28,    29,    30,    31,    32,    -1,    -1,    -1,    18,    19,
      20,    21,     4,    41,    24,    25,    26,    -1,    28,    29,
      30,    31,    32,    -1,    -1,    -1,    18,    19,    20,    21,
       4,    41,    24,    25,    26,    -1,    28,    29,    30,    31,
      32,    -1,    -1,    -1,    18,    19,    20,    21,     4,    41,
      24,    25,    26,    -1,    28,    29,    30,    31,    32,    -1,
      -1,    -1,    18,    19,    20,    21,     4,    41,    24,    25,
      26,    -1,    28,    29,    30,    31,    32,    -1,    -1,    -1,
      18,    19,    20,    21,    -1,    41,    24,    25,    26,    -1,
      28,    29,    30,    31,    32,     5,     6,    -1,    -1,     5,
       6,    -1,    -1,    41,    -1,    15,    -1,    -1,    -1,    15,
      -1,    21,    22,    -1,    -1,    21,    22,    -1,    28,    29,
      30,    31,    28,    29,    30,    31,    -1,     5,     6,    -1,
      40,    41,    42,    -1,    40,    41,    42,    15,     7,     8,
       9,    10,    11,    21,    22,    -1,    -1,    -1,    -1,     5,
      28,    29,    30,    31,     7,     8,     9,    10,    11,    15,
      13,    -1,    40,    41,    42,    21,    22,    -1,    -1,    -1,
      -1,     5,    28,    29,    30,    31,     7,     8,     9,    10,
      11,    15,    13,    -1,    40,    41,    42,    21,    22,    -1,
      -1,    -1,     5,    -1,    28,    29,    30,    31,     6,    12,
       8,     9,    10,    11,    -1,    -1,    40,    41,    42,    22,
      23,    -1,    -1,     5,    -1,    28,    29,    30,    31,    -1,
      -1,    -1,    -1,    15,    -1,    -1,    -1,    40,    41,    42,
      22,    -1,    -1,     6,     5,    -1,    28,    29,    30,    31,
      13,    -1,    -1,    16,    17,    -1,    -1,    -1,    40,    41,
      42,    22,    -1,    -1,    27,     5,    -1,    28,    29,    30,
      31,    34,    35,    36,    37,    38,    39,    -1,    -1,    40,
      41,    42,    22,    -1,    -1,     6,     5,    -1,    28,    29,
      30,    31,    13,    -1,    -1,    16,    17,    -1,    -1,    -1,
      40,    41,    42,    22,    -1,    -1,    27,     5,    -1,    28,
      29,    30,    31,    34,    35,    36,    37,    38,    39,    -1,
      -1,    40,    41,    42,    22,    -1,    -1,     6,     5,    -1,
      28,    29,    30,    31,    13,    -1,    -1,    16,    17,    -1,
      -1,    -1,    40,    41,    42,    22,    -1,    -1,    27,     5,
      -1,    28,    29,    30,    31,    34,    35,    36,    37,    38,
      39,    -1,    -1,    40,    41,    42,    22,    -1,    -1,     6,
       5,    -1,    28,    29,    30,    31,    13,    -1,    -1,    16,
      17,    -1,    -1,    -1,    40,    41,    42,    22,    -1,    -1,
      27,     5,    -1,    28,    29,    30,    31,    34,    35,    36,
      37,    38,    39,    -1,    -1,    40,    41,    42,    22,    -1,
      -1,     6,     5,    -1,    28,    29,    30,    31,    13,    -1,
      -1,    16,    17,    -1,    -1,    -1,    40,    41,    42,    22,
      -1,    -1,    27,     5,    -1,    28,    29,    30,    31,    34,
      35,    36,    37,    38,    39,    -1,    -1,    40,    41,    42,
      22,     7,     8,     9,    10,    11,    28,    29,    30,    31,
       7,     8,     9,    10,    11,    -1,    13,    -1,    40,    41,
      42,     5,    -1,     7,     8,     9,    10,    11,    -1,    13,
      14,    -1,    16,    17,    -1,    -1,     5,     6,    -1,     8,
       9,    10,    11,    27,    13,    14,    -1,    16,    17,    -1,
      34,    35,    36,    37,    38,    39,    -1,     6,    27,     8,
       9,    10,    11,    -1,    -1,    34,    35,    36,    37,    38,
      39,     5,    -1,     7,     8,     9,    10,    11,    -1,    13,
      -1,    -1,    16,    17,     5,     6,    -1,     8,     9,    10,
      11,    -1,    13,    27,    -1,    16,    17,    -1,    -1,    -1,
      34,    35,    36,    37,    38,    39,    27,     6,    -1,     8,
       9,    10,    11,    34,    35,    36,    37,    38,    39,     5,
       6,    -1,     8,     9,    10,    11,    -1,    -1,    -1,    -1,
      16,    17,    -1,     6,    -1,     8,     9,    10,    11,    -1,
      13,    27,    -1,    16,    17,    -1,    -1,    -1,    34,    35,
      36,    37,    38,    39,    27,     6,    -1,     8,     9,    10,
      11,    34,    35,    36,    37,    38,    39,     6,    -1,     8,
       9,    10,    11,    -1,    13,    -1,    -1,    16,    17,    -1,
       6,    -1,     8,     9,    10,    11,    -1,    13,    27,    -1,
      16,    17,    -1,    -1,    -1,    34,    35,    36,    37,    38,
      39,    27,     7,     8,     9,    10,    11,    -1,    34,    35,
      36,    37,    38,    39,     6,    -1,     8,     9,    10,    11,
      -1,    13,    -1,    -1,    16,    17,    -1,     6,    -1,     8,
       9,    10,    11,    -1,    13,    27,    -1,    16,    17,    -1,
      -1,    -1,    34,    35,    36,    37,    38,    39,    27,     7,
       8,     9,    10,    11,    -1,    34,    35,    36,    37,    38,
      39,     6,    -1,     8,     9,    10,    11,    -1,    13,    -1,
      -1,    16,    17,    -1,     6,    -1,     8,     9,    10,    11,
      -1,    13,    27,    -1,    16,    17,    -1,    -1,    -1,    34,
      35,    36,    37,    38,    39,    27,     7,     8,     9,    10,
      11,    -1,    34,    35,    36,    37,    38,    39,     6,    -1,
       8,     9,    10,    11,    -1,    13,    -1,    -1,    16,    17,
      -1,     6,    -1,     8,     9,    10,    11,    -1,    13,    27,
      -1,    16,    17,    -1,    -1,    -1,    34,    35,    36,    37,
      38,    39,    27,     7,     8,     9,    10,    11,    -1,    34,
      35,    36,    37,    38,    39,     6,    -1,     8,     9,    10,
      11,    -1,    13,    -1,    -1,    16,    17,    -1,     6,    -1,
       8,     9,    10,    11,    -1,    -1,    27,    -1,    16,    17,
      -1,    -1,    -1,    34,    35,    36,    37,    38,    39,    27,
       7,     8,     9,    10,    11,    -1,    34,    35,    36,    37,
      38,    39,     6,    -1,     8,     9,    10,    11,    -1,    -1,
      -1,    -1,    16,    17,    -1,     6,    -1,     8,     9,    10,
      11,    -1,    -1,    27,    -1,    16,    17,    -1,    -1,    -1,
      34,    35,    36,    37,    38,    39,    27,     7,     8,     9,
      10,    11,    -1,    34,    35,    36,    37,    38,    39,     6,
      -1,     8,     9,    10,    11,    -1,    -1,    -1,    -1,    16,
      17,    -1,     6,    -1,     8,     9,    10,    11,    -1,    -1,
      27,    -1,    16,    17,    -1,    -1,    -1,    34,    35,    36,
      37,    38,    39,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      34,    35,    36,    37,    38,    39,     6,    -1,     8,     9,
      10,    11,    -1,    -1,    -1,    -1,    16,    17,    -1,     6,
      -1,     8,     9,    10,    11,    -1,    -1,    27,    -1,    16,
      17,    -1,    -1,    -1,    34,    35,    36,    37,    38,    39,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,    36,
      37,    38,    39,     6,    -1,     8,     9,    10,    11,    -1,
      -1,    -1,    -1,    16,    17,    -1,     6,    -1,     8,     9,
      10,    11,    -1,    -1,    27,    -1,    16,    17,    -1,    -1,
      -1,    34,    35,    36,    37,    38,    39,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,    39,
       6,    -1,     8,     9,    10,    11,     6,    -1,     8,     9,
      16,    17,    -1,    13,    -1,    -1,    16,    17,    -1,    -1,
      -1,    27,    -1,    -1,    -1,    -1,    -1,    27,    34,    35,
      36,    37,    38,    39,    34,    35,    36,    37,    38,    39,
       6,    -1,     8,     9,    -1,    -1,     6,    -1,    -1,    -1,
      16,    17,    -1,    13,    -1,    -1,    16,    17,    -1,    -1,
      -1,    27,    -1,    -1,    -1,    -1,    -1,    27,    34,    35,
      36,    37,    38,    39,    34,    35,    36,    37,    38,    39,
       6,    -1,    -1,    -1,    -1,    -1,     6,    13,    -1,    -1,
      16,    17,    -1,    13,    -1,    -1,    16,    17,    -1,    -1,
      -1,    27,    -1,    -1,    -1,    -1,    -1,    27,    34,    35,
      36,    37,    38,    39,    34,    35,    36,    37,    38,    39,
       6,    -1,    -1,    -1,    -1,    -1,     6,    13,    -1,    -1,
      16,    17,    -1,    13,    -1,    -1,    16,    17,    -1,    -1,
      -1,    27,    -1,    -1,    -1,    -1,    -1,    27,    34,    35,
      36,    37,    38,    39,    34,    35,    36,    37,    38,    39,
       6,    -1,    -1,    -1,    -1,    -1,     6,    13,    -1,    -1,
      16,    17,    -1,    13,    -1,    -1,    16,    17,    -1,    -1,
      -1,    27,    -1,    -1,    -1,    -1,    -1,    27,    34,    35,
      36,    37,    38,    39,    34,    35,    36,    37,    38,    39,
       6,    -1,    -1,    -1,    -1,    -1,     6,    13,    -1,    -1,
      16,    17,    -1,    -1,    -1,    -1,    16,    17,    -1,    -1,
      -1,    27,    -1,    -1,    -1,    -1,    -1,    27,    34,    35,
      36,    37,    38,    39,    34,    35,    36,    37,    38,    39,
       6,    -1,    -1,    -1,    -1,    -1,     6,    -1,    -1,    -1,
      16,    17,    -1,    -1,    -1,    -1,    16,    17,    -1,    -1,
      -1,    27,    -1,    -1,    -1,    -1,    -1,    27,    34,    35,
      36,    37,    38,    39,    34,    35,    36,    37,    38,    39,
       6,    -1,    -1,    -1,    -1,    -1,     6,    -1,    -1,    -1,
      16,    17,    -1,    -1,    -1,    -1,    16,    17,    -1,    -1,
      -1,    27,    -1,    -1,    -1,    -1,    -1,    27,    34,    35,
      36,    37,    38,    39,    34,    35,    36,    37,    38,    39,
       6,    -1,    -1,    -1,    -1,    -1,     6,    -1,    -1,    -1,
      16,    17,    -1,    -1,    -1,    -1,    16,    17,    -1,    -1,
      -1,    27,    -1,    -1,    -1,    -1,    -1,    27,    34,    35,
      36,    37,    38,    39,    34,    35,    36,    37,    38,    39,
       6,    -1,    -1,    -1,    -1,    -1,     6,    -1,    -1,    -1,
      16,    17,    -1,    -1,    -1,    -1,    16,    17,    -1,    -1,
      -1,    27,    -1,    -1,    -1,    -1,    -1,    27,    34,    35,
      36,    37,    38,    39,    34,    35,    36,    37,    38,    39,
       6,    -1,    -1,    -1,    -1,    -1,     6,    -1,    -1,    -1,
      16,    17,    -1,    -1,    -1,    -1,    16,    17,    -1,    -1,
      -1,    27,    -1,    -1,    -1,    -1,    -1,    27,    34,    35,
      36,    37,    38,    39,    34,    35,    36,    37,    38,    39,
       6,    -1,    -1,    -1,    -1,    -1,     6,    -1,    -1,    -1,
      16,    17,    -1,    -1,    -1,    -1,    16,    17,    -1,    -1,
      -1,    27,    -1,    -1,    -1,    -1,    -1,    27,    34,    35,
      36,    37,    38,    39,    34,    35,    36,    37,    38,    39,
       7,     8,     9,    10,    11,    -1,    13,    -1,    -1,    16,
      17,    -1,    -1,     7,     8,     9,    10,    11,    -1,    13,
      27,    -1,    16,    17,    -1,    -1,    -1,    34,    35,    36,
      37,    38,    39,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      34,    35,    36,    37,    38,    39,     7,     8,     9,    10,
      11,    -1,    13,    -1,    -1,    16,    17,    -1,    -1,     7,
       8,     9,    10,    11,    -1,    13,    27,    -1,    16,    17,
      -1,    -1,    -1,    34,    35,    36,    37,    38,    39,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    34,    35,    36,    37,
      38,    39,     7,     8,     9,    10,    11,    -1,    13,    -1,
      -1,    16,    17,    -1,    -1,     7,     8,     9,    10,    11,
      -1,    13,    27,    -1,    16,    17,    -1,    -1,    -1,    34,
      35,    36,    37,    38,    39,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    34,    35,    36,    37,    38,    39,     7,     8,
       9,    10,    11,    -1,    13,    -1,    -1,    16,    17,    -1,
      -1,     7,     8,     9,    10,    11,    -1,    13,    27,    -1,
      16,    17,    -1,    -1,    -1,    34,    35,    36,    37,    38,
      39,    27,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,
      36,    37,    38,    39,     7,     8,     9,    10,    11,    -1,
      13,    -1,    -1,    16,    17,    -1,    -1,     7,     8,     9,
      10,    11,    -1,    13,    27,    -1,    16,    17,    -1,    -1,
      -1,    34,    35,    36,    37,    38,    39,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,    39,
       7,     8,     9,    -1,    -1,    -1,    13,    -1,    -1,    16,
      17,    -1,    -1,     7,    -1,    -1,    -1,    -1,    -1,    13,
      27,    -1,    16,    17,    -1,    -1,    -1,    34,    35,    36,
      37,    38,    39,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      34,    35,    36,    37,    38,    39,     7,     7,     8,     9,
      10,    11,    13,    13,    -1,    16,    17,    -1,    -1,     7,
      -1,    -1,    -1,    -1,    -1,    13,    27,    -1,    16,    17,
      -1,    -1,    -1,    34,    35,    36,    37,    38,    39,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    34,    35,    36,    37,
      38,    39,     7,     7,     8,     9,    10,    11,    13,    13,
      -1,    16,    17,    -1,    -1,     7,    -1,    -1,    -1,    -1,
      -1,    13,    27,    -1,    16,    17,    -1,    -1,    -1,    34,
      35,    36,    37,    38,    39,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    34,    35,    36,    37,    38,    39,     7,     7,
       8,     9,    10,    11,    13,    13,    -1,    16,    17,    -1,
      -1,     7,    -1,    -1,    -1,    -1,    -1,    13,    27,    -1,
      16,    17,    -1,    -1,    -1,    34,    35,    36,    37,    38,
      39,    27,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,
      36,    37,    38,    39,     7,     7,     8,     9,    10,    11,
      13,    13,    -1,    16,    17,    -1,    -1,     7,    -1,    -1,
      -1,    -1,    -1,    13,    27,    -1,    16,    17,    -1,    -1,
      -1,    34,    35,    36,    37,    38,    39,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,    39,
       7,    -1,    -1,    -1,    -1,    -1,    13,    -1,    -1,    16,
      17,    -1,    -1,     7,    -1,    -1,    -1,    -1,    -1,    13,
      27,    -1,    16,    17,    -1,    -1,    -1,    34,    35,    36,
      37,    38,    39,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      34,    35,    36,    37,    38,    39,     7,    -1,    -1,    -1,
      -1,    -1,    13,    -1,    -1,    16,    17,    -1,    -1,     7,
      -1,    -1,    -1,    -1,    -1,    13,    27,    -1,    16,    17,
      -1,    -1,    -1,    34,    35,    36,    37,    38,    39,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    34,    35,    36,    37,
      38,    39
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    21,    45,    46,    47,    48,    49,    41,     0,    47,
       5,     7,    21,    50,    41,     6,    13,     3,    53,    21,
       4,    18,    19,    20,    21,    24,    25,    26,    28,    29,
      30,    31,    32,    41,    49,    54,    55,    56,    69,    70,
      41,     5,     5,     5,    41,     5,    12,    22,    23,    40,
      41,    42,    69,    70,    71,    72,    73,    74,    75,    76,
       5,     5,     5,     5,     5,     5,     5,     5,    14,     4,
      55,     7,     7,    41,    71,    71,    72,    74,     7,     8,
       9,    10,    11,    68,    71,     7,    15,    21,    22,    41,
      57,    58,    59,    60,    61,    62,    63,    65,    66,    73,
      74,    41,    68,    68,    68,    60,    41,    51,    71,     6,
       6,     6,     6,     6,     5,    41,    75,    75,    76,    76,
       6,    27,    62,    41,    14,    57,     7,    13,    38,    39,
      34,    35,    64,    16,    17,    27,    36,    37,    67,     6,
       6,     6,     6,     6,     6,    13,     7,     7,     7,     7,
      52,    53,    55,    71,    14,    71,     6,    58,    59,    61,
      62,    65,    66,    52,    41,    71,    52,     6,    33,    52,
      52,     5,    12,    22,    23,    28,    29,    30,    31,    40,
      41,    42,    69,    70,    72,    73,    74,    75,    76,     7,
       5,    12,    22,    23,    28,    29,    30,    31,    40,    41,
      42,    69,    70,    72,    73,    74,    75,    76,     5,    28,
      29,    30,    31,    40,    42,    69,    70,    75,    76,     5,
      15,    22,    28,    29,    30,    31,    40,    41,    42,    61,
      62,    63,    65,    66,    69,    70,    73,    74,    75,    76,
       8,     9,    41,     5,     7,    58,     8,     9,    38,     5,
      41,     3,     5,    12,    22,    23,    28,    29,    30,    31,
      40,    41,    42,    69,    70,    72,    73,    74,    75,    76,
       5,    15,    21,    22,    28,    29,    30,    31,    40,    41,
      42,    59,    60,    61,    62,    63,    65,    66,    69,    70,
      73,    74,    75,    76,     3,    18,    19,    20,    21,    24,
      25,    26,    32,    41,    49,    53,    55,    56,    69,    70,
      13,    72,    74,     5,     5,     5,     5,     5,    10,    11,
      72,    74,     5,     5,     5,     5,     5,     8,     9,    10,
      11,    72,    74,     5,     5,     5,     5,    10,    11,    72,
      74,    62,     5,     5,     5,     5,     5,    39,    64,    67,
       8,     9,    10,    11,    75,    75,    51,     7,     5,    41,
      75,    75,    61,     4,    54,    72,    74,     5,     5,     5,
       5,     5,     8,     9,    10,    11,    72,    74,    41,    62,
      41,     5,     5,     5,     5,     5,    14,    38,    39,    64,
      67,     8,     9,    10,    11,     4,    54,     5,     5,     5,
      41,    71,     5,     5,     5,    14,     7,     7,    59,     6,
       6,    41,    68,    68,    68,    51,    76,    76,     6,     6,
      41,    68,    68,    68,    51,     5,    41,    75,    75,    76,
      76,     6,     6,    41,    68,    68,    68,    76,    76,     6,
       6,    41,    68,    68,    68,    51,    62,    65,    66,     5,
      41,    75,    75,    76,    76,     6,     4,     6,     6,    41,
      68,    68,    68,    51,     5,    41,    75,    75,    76,    76,
       6,     6,    14,    41,    68,    68,    68,    51,     5,    12,
      22,    23,    28,    29,    30,    31,    40,    41,    42,    69,
      70,    71,    72,    73,    74,    75,    76,    61,    62,    65,
      66,     5,    41,    75,    75,    76,    76,     4,    41,    71,
      71,     7,     7,    68,    57,    60,    71,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       6,    71,     6,     6,     6,     6,     6,    72,    74,     5,
       5,     5,     5,     5,     8,     9,    10,    11,     6,     6,
       6,     6,    57,     6,     7,     6,     6,    41,    68,    68,
      68,    51,     5,    41,    75,    75,    76,    76,     7,     7,
       7,    52,     6,    58,    52,     6,     6,     6,     6,     6,
      52,     6,    33,    52,    52
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    44,    45,    46,    46,    47,    47,    48,    49,    50,
      50,    50,    51,    51,    51,    52,    52,    53,    53,    54,
      54,    55,    55,    55,    55,    55,    55,    55,    55,    55,
      56,    56,    56,    56,    56,    57,    57,    58,    58,    59,
      59,    59,    60,    60,    61,    61,    62,    62,    63,    63,
      64,    64,    65,    65,    66,    66,    66,    67,    67,    67,
      67,    67,    68,    69,    70,    70,    70,    70,    71,    71,
      72,    72,    72,    72,    73,    73,    73,    74,    74,    74,
      75,    75,    75,    76,    76,    76,    76
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     6,     3,     4,
       2,     0,     3,     1,     0,     1,     1,     3,     2,     2,
       1,     1,     2,     2,     1,     5,     5,     5,     4,     3,
       5,     7,     5,     6,     7,     1,     2,     1,     3,     1,
       4,     3,     3,     1,     3,     1,     2,     1,     3,     1,
       1,     1,     3,     1,     1,     1,     1,     1,     1,     1,
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
  case 5: /* stmt: func_stmt  */
#line 57 "parser/c7.y"
                       { add_ast((yyvsp[0].expression)); }
#line 2499 "parser/parser.c"
    break;

  case 6: /* stmt: var_decl_stmt  */
#line 58 "parser/c7.y"
                           { add_ast((yyvsp[0].expression)); }
#line 2505 "parser/parser.c"
    break;

  case 7: /* func_stmt: TYPE ID PARENT_LEFT param_list PARENT_RIGHT compound_block_stmt  */
#line 61 "parser/c7.y"
                                                                                          {
                (yyval.expression) = create_func_expr(create_str_expr((yyvsp[-5].str_value)), create_var_expr((yyvsp[-4].int_value)), (yyvsp[-2].expression), (yyvsp[0].expression)); 
            }
#line 2513 "parser/parser.c"
    break;

  case 8: /* var_decl_stmt: TYPE ID SEMICOLON  */
#line 66 "parser/c7.y"
                                          {
                    (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-2].str_value)), create_var_expr((yyvsp[-1].int_value))); 
                }
#line 2521 "parser/parser.c"
    break;

  case 9: /* param_list: param_list COMMA TYPE ID  */
#line 71 "parser/c7.y"
                                                {
                (yyval.expression) = create_ter_expr((yyvsp[-3].expression), create_str_expr((yyvsp[-1].str_value)), create_var_expr((yyvsp[0].int_value)));
            }
#line 2529 "parser/parser.c"
    break;

  case 10: /* param_list: TYPE ID  */
#line 74 "parser/c7.y"
                            {
                (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-1].str_value)), create_var_expr((yyvsp[0].int_value)));
            }
#line 2537 "parser/parser.c"
    break;

  case 11: /* param_list: %empty  */
#line 77 "parser/c7.y"
                          { (yyval.expression) = create_empty_expr(); }
#line 2543 "parser/parser.c"
    break;

  case 12: /* simple_param_list: simple_param_list COMMA ID  */
#line 80 "parser/c7.y"
                                                       {
                        (yyval.expression) = create_bin_expr((yyvsp[-2].expression), create_var_expr((yyvsp[0].int_value)));
                    }
#line 2551 "parser/parser.c"
    break;

  case 13: /* simple_param_list: ID  */
#line 83 "parser/c7.y"
                            { (yyval.expression) = create_var_expr((yyvsp[0].int_value)); }
#line 2557 "parser/parser.c"
    break;

  case 14: /* simple_param_list: %empty  */
#line 84 "parser/c7.y"
                                  { (yyval.expression) = create_empty_expr(); }
#line 2563 "parser/parser.c"
    break;

  case 15: /* flex_block_struct: compound_block_stmt  */
#line 87 "parser/c7.y"
                                             { (yyval.expression) = (yyvsp[0].expression); }
#line 2569 "parser/parser.c"
    break;

  case 16: /* flex_block_struct: block_stmt  */
#line 88 "parser/c7.y"
                                    { (yyval.expression) = (yyvsp[0].expression); }
#line 2575 "parser/parser.c"
    break;

  case 17: /* compound_block_stmt: BRACK_LEFT block_stmts BRACK_RIGHT  */
#line 91 "parser/c7.y"
                                                            { (yyval.expression) = (yyvsp[-1].expression); }
#line 2581 "parser/parser.c"
    break;

  case 18: /* compound_block_stmt: BRACK_LEFT BRACK_RIGHT  */
#line 92 "parser/c7.y"
                                              { (yyval.expression) = create_empty_expr(); }
#line 2587 "parser/parser.c"
    break;

  case 19: /* block_stmts: block_stmts block_stmt  */
#line 95 "parser/c7.y"
                                           {
                (yyval.expression) = create_bin_expr((yyvsp[-1].expression), (yyvsp[0].expression)); 
            }
#line 2595 "parser/parser.c"
    break;

  case 20: /* block_stmts: block_stmt  */
#line 98 "parser/c7.y"
                            { (yyval.expression) = (yyvsp[0].expression); }
#line 2601 "parser/parser.c"
    break;

  case 21: /* block_stmt: var_decl_stmt  */
#line 101 "parser/c7.y"
                               { (yyval.expression) = (yyvsp[0].expression); }
#line 2607 "parser/parser.c"
    break;

  case 22: /* block_stmt: func_call SEMICOLON  */
#line 102 "parser/c7.y"
                                     { (yyval.expression) = (yyvsp[-1].expression); }
#line 2613 "parser/parser.c"
    break;

  case 23: /* block_stmt: set_func_call SEMICOLON  */
#line 103 "parser/c7.y"
                                         { (yyval.expression) = (yyvsp[-1].expression); }
#line 2619 "parser/parser.c"
    break;

  case 24: /* block_stmt: flow_control  */
#line 104 "parser/c7.y"
                              { (yyval.expression) = (yyvsp[0].expression); }
#line 2625 "parser/parser.c"
    break;

  case 25: /* block_stmt: READ PARENT_LEFT ID PARENT_RIGHT SEMICOLON  */
#line 105 "parser/c7.y"
                                                               {
                (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-4].str_value)), create_var_expr((yyvsp[-2].int_value))); 
            }
#line 2633 "parser/parser.c"
    break;

  case 26: /* block_stmt: WRITE PARENT_LEFT simple_expr PARENT_RIGHT SEMICOLON  */
#line 108 "parser/c7.y"
                                                                         {
                (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-4].str_value)), (yyvsp[-2].expression)); 
            }
#line 2641 "parser/parser.c"
    break;

  case 27: /* block_stmt: WRITELN PARENT_LEFT simple_expr PARENT_RIGHT SEMICOLON  */
#line 111 "parser/c7.y"
                                                                           {
                (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-4].str_value)), (yyvsp[-2].expression)); 
            }
#line 2649 "parser/parser.c"
    break;

  case 28: /* block_stmt: ID ASSIGN simple_expr SEMICOLON  */
#line 114 "parser/c7.y"
                                                       {
                (yyval.expression) = create_ter_expr(create_var_expr((yyvsp[-3].int_value)), create_char_expr((yyvsp[-2].op)), (yyvsp[-1].expression)); 
            }
#line 2657 "parser/parser.c"
    break;

  case 29: /* block_stmt: RETURN simple_expr SEMICOLON  */
#line 117 "parser/c7.y"
                                                 {
                (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-2].str_value)), (yyvsp[-1].expression)); 
            }
#line 2665 "parser/parser.c"
    break;

  case 30: /* flow_control: IF PARENT_LEFT or_cond_expr PARENT_RIGHT flex_block_struct  */
#line 122 "parser/c7.y"
                                                                                                   {
                    (yyval.expression) = create_ter_expr(create_str_expr((yyvsp[-4].str_value)), (yyvsp[-2].expression), (yyvsp[0].expression)); 
                }
#line 2673 "parser/parser.c"
    break;

  case 31: /* flow_control: IF PARENT_LEFT or_cond_expr PARENT_RIGHT flex_block_struct ELSE flex_block_struct  */
#line 125 "parser/c7.y"
                                                                                                                       {
                    (yyval.expression) = create_qui_expr(create_str_expr((yyvsp[-6].str_value)), (yyvsp[-4].expression), (yyvsp[-2].expression), create_str_expr((yyvsp[-1].str_value)), (yyvsp[0].expression)); 
                }
#line 2681 "parser/parser.c"
    break;

  case 32: /* flow_control: FORALL PARENT_LEFT set_expr PARENT_RIGHT flex_block_struct  */
#line 128 "parser/c7.y"
                                                                                        {
                    (yyval.expression) = create_ter_expr(create_str_expr((yyvsp[-4].str_value)), (yyvsp[-2].expression), (yyvsp[0].expression)); 
                }
#line 2689 "parser/parser.c"
    break;

  case 33: /* flow_control: FOR PARENT_LEFT opt_param opt_param PARENT_RIGHT flex_block_struct  */
#line 131 "parser/c7.y"
                                                                                                    {
                    (yyval.expression) = create_qua_expr(create_str_expr((yyvsp[-5].str_value)), (yyvsp[-3].expression), (yyvsp[-2].expression), (yyvsp[0].expression)); 
                }
#line 2697 "parser/parser.c"
    break;

  case 34: /* flow_control: FOR PARENT_LEFT opt_param opt_param for_expression PARENT_RIGHT flex_block_struct  */
#line 134 "parser/c7.y"
                                                                                                                       {
                    (yyval.expression) = create_qui_expr(create_str_expr((yyvsp[-6].str_value)), (yyvsp[-4].expression), (yyvsp[-3].expression), (yyvsp[-2].expression), (yyvsp[0].expression)); 
                }
#line 2705 "parser/parser.c"
    break;

  case 35: /* opt_param: SEMICOLON  */
#line 139 "parser/c7.y"
                        { (yyval.expression) = create_empty_expr(); }
#line 2711 "parser/parser.c"
    break;

  case 36: /* opt_param: for_expression SEMICOLON  */
#line 140 "parser/c7.y"
                                          { (yyval.expression) = (yyvsp[-1].expression); }
#line 2717 "parser/parser.c"
    break;

  case 37: /* for_expression: decl_or_cond_expr  */
#line 143 "parser/c7.y"
                                       { (yyval.expression) = (yyvsp[0].expression); }
#line 2723 "parser/parser.c"
    break;

  case 38: /* for_expression: for_expression COMMA decl_or_cond_expr  */
#line 144 "parser/c7.y"
                                                                 {
                    (yyval.expression) = create_bin_expr((yyvsp[-2].expression), (yyvsp[0].expression)); 
                }
#line 2731 "parser/parser.c"
    break;

  case 39: /* decl_or_cond_expr: or_cond_expr  */
#line 149 "parser/c7.y"
                                      { (yyval.expression) = (yyvsp[0].expression); }
#line 2737 "parser/parser.c"
    break;

  case 40: /* decl_or_cond_expr: TYPE ID ASSIGN simple_expr  */
#line 150 "parser/c7.y"
                                                             {
                        (yyval.expression) = create_qua_expr(create_str_expr((yyvsp[-3].str_value)), create_var_expr((yyvsp[-2].int_value)),
                                             create_char_expr((yyvsp[-1].op)), (yyvsp[0].expression)); 
                    }
#line 2746 "parser/parser.c"
    break;

  case 41: /* decl_or_cond_expr: ID ASSIGN simple_expr  */
#line 154 "parser/c7.y"
                                                     {
                        (yyval.expression) = create_ter_expr(create_var_expr((yyvsp[-2].int_value)), create_char_expr((yyvsp[-1].op)), (yyvsp[0].expression)); 
                    }
#line 2754 "parser/parser.c"
    break;

  case 42: /* or_cond_expr: or_cond_expr OR_OP and_cond_expr  */
#line 159 "parser/c7.y"
                                                               {
                    (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_str_expr((yyvsp[-1].str_value)), (yyvsp[0].expression)); 
                }
#line 2762 "parser/parser.c"
    break;

  case 43: /* or_cond_expr: and_cond_expr  */
#line 162 "parser/c7.y"
                                   { (yyval.expression) = (yyvsp[0].expression); }
#line 2768 "parser/parser.c"
    break;

  case 44: /* and_cond_expr: and_cond_expr AND_OP unary_cond_expr  */
#line 165 "parser/c7.y"
                                                                   {
                    (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_str_expr((yyvsp[-1].str_value)), (yyvsp[0].expression)); 
                }
#line 2776 "parser/parser.c"
    break;

  case 45: /* and_cond_expr: unary_cond_expr  */
#line 168 "parser/c7.y"
                                     { (yyval.expression) = (yyvsp[0].expression); }
#line 2782 "parser/parser.c"
    break;

  case 46: /* unary_cond_expr: NOT_OP unary_cond_expr  */
#line 171 "parser/c7.y"
                                               {
                    (yyval.expression) = create_bin_expr(create_char_expr((yyvsp[-1].op)), (yyvsp[0].expression)); 
                }
#line 2790 "parser/parser.c"
    break;

  case 47: /* unary_cond_expr: eq_cond_expr  */
#line 174 "parser/c7.y"
                                  { (yyval.expression) = (yyvsp[0].expression); }
#line 2796 "parser/parser.c"
    break;

  case 48: /* eq_cond_expr: eq_cond_expr equal_ops rel_cond_expr  */
#line 177 "parser/c7.y"
                                                                  {
                    (yyval.expression) = create_ter_expr((yyvsp[-2].expression), (yyvsp[-1].expression), (yyvsp[0].expression));
                }
#line 2804 "parser/parser.c"
    break;

  case 49: /* eq_cond_expr: rel_cond_expr  */
#line 180 "parser/c7.y"
                                   { (yyval.expression) = (yyvsp[0].expression); }
#line 2810 "parser/parser.c"
    break;

  case 50: /* equal_ops: EQ_OP  */
#line 183 "parser/c7.y"
                       { (yyval.expression) = create_str_expr((yyvsp[0].str_value)); }
#line 2816 "parser/parser.c"
    break;

  case 51: /* equal_ops: NE_OP  */
#line 184 "parser/c7.y"
                       { (yyval.expression) = create_str_expr((yyvsp[0].str_value)); }
#line 2822 "parser/parser.c"
    break;

  case 52: /* rel_cond_expr: rel_cond_expr rel_ops rel_cond_stmt  */
#line 187 "parser/c7.y"
                                                                  {
                    (yyval.expression) = create_ter_expr((yyvsp[-2].expression), (yyvsp[-1].expression), (yyvsp[0].expression));
                }
#line 2830 "parser/parser.c"
    break;

  case 53: /* rel_cond_expr: rel_cond_stmt  */
#line 190 "parser/c7.y"
                                   { (yyval.expression) = (yyvsp[0].expression); }
#line 2836 "parser/parser.c"
    break;

  case 54: /* rel_cond_stmt: arith_expr  */
#line 193 "parser/c7.y"
                                { (yyval.expression) = (yyvsp[0].expression); }
#line 2842 "parser/parser.c"
    break;

  case 55: /* rel_cond_stmt: EMPTY  */
#line 194 "parser/c7.y"
                           { (yyval.expression) = create_str_expr((yyvsp[0].str_value)); }
#line 2848 "parser/parser.c"
    break;

  case 56: /* rel_cond_stmt: func_expr  */
#line 195 "parser/c7.y"
                               { (yyval.expression) = (yyvsp[0].expression); }
#line 2854 "parser/parser.c"
    break;

  case 57: /* rel_ops: L_OP  */
#line 198 "parser/c7.y"
                  { (yyval.expression) = create_char_expr((yyvsp[0].op)); }
#line 2860 "parser/parser.c"
    break;

  case 58: /* rel_ops: G_OP  */
#line 199 "parser/c7.y"
                  { (yyval.expression) = create_char_expr((yyvsp[0].op)); }
#line 2866 "parser/parser.c"
    break;

  case 59: /* rel_ops: LE_OP  */
#line 200 "parser/c7.y"
                   { (yyval.expression) = create_str_expr((yyvsp[0].str_value)); }
#line 2872 "parser/parser.c"
    break;

  case 60: /* rel_ops: GE_OP  */
#line 201 "parser/c7.y"
                   { (yyval.expression) = create_str_expr((yyvsp[0].str_value)); }
#line 2878 "parser/parser.c"
    break;

  case 61: /* rel_ops: IN  */
#line 202 "parser/c7.y"
                { (yyval.expression) = create_str_expr((yyvsp[0].str_value)); }
#line 2884 "parser/parser.c"
    break;

  case 62: /* set_expr: simple_expr IN simple_expr  */
#line 205 "parser/c7.y"
                                                    {
                (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_str_expr((yyvsp[-1].str_value)), (yyvsp[0].expression)); 
            }
#line 2892 "parser/parser.c"
    break;

  case 63: /* func_call: ID PARENT_LEFT simple_param_list PARENT_RIGHT  */
#line 210 "parser/c7.y"
                                                                  {
                (yyval.expression) = create_bin_expr(create_var_expr((yyvsp[-3].int_value)), (yyvsp[-1].expression)); 
            }
#line 2900 "parser/parser.c"
    break;

  case 64: /* set_func_call: IS_SET PARENT_LEFT ID PARENT_RIGHT  */
#line 215 "parser/c7.y"
                                                           {
                    (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-3].str_value)), create_var_expr((yyvsp[-1].int_value))); 
                }
#line 2908 "parser/parser.c"
    break;

  case 65: /* set_func_call: ADD_SET PARENT_LEFT set_expr PARENT_RIGHT  */
#line 218 "parser/c7.y"
                                                                  {
                    (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-3].str_value)), (yyvsp[-1].expression)); 
                }
#line 2916 "parser/parser.c"
    break;

  case 66: /* set_func_call: REMOVE PARENT_LEFT set_expr PARENT_RIGHT  */
#line 221 "parser/c7.y"
                                                                 {
                    (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-3].str_value)), (yyvsp[-1].expression)); 
                }
#line 2924 "parser/parser.c"
    break;

  case 67: /* set_func_call: EXISTS PARENT_LEFT set_expr PARENT_RIGHT  */
#line 224 "parser/c7.y"
                                                                 {
                    (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-3].str_value)), (yyvsp[-1].expression)); 
                }
#line 2932 "parser/parser.c"
    break;

  case 68: /* simple_expr: arith_expr  */
#line 229 "parser/c7.y"
                            { (yyval.expression) = (yyvsp[0].expression); }
#line 2938 "parser/parser.c"
    break;

  case 69: /* simple_expr: func_cte_expr  */
#line 230 "parser/c7.y"
                               { (yyval.expression) = (yyvsp[0].expression); }
#line 2944 "parser/parser.c"
    break;

  case 70: /* func_cte_expr: EMPTY  */
#line 233 "parser/c7.y"
                           { (yyval.expression) = create_str_expr((yyvsp[0].str_value)); }
#line 2950 "parser/parser.c"
    break;

  case 71: /* func_cte_expr: STRING  */
#line 234 "parser/c7.y"
                            { (yyval.expression) = create_str_expr((yyvsp[0].str_value)); }
#line 2956 "parser/parser.c"
    break;

  case 72: /* func_cte_expr: CHAR  */
#line 235 "parser/c7.y"
                          { (yyval.expression) = create_char_expr((yyvsp[0].op)); }
#line 2962 "parser/parser.c"
    break;

  case 73: /* func_cte_expr: func_expr  */
#line 236 "parser/c7.y"
                               { (yyval.expression) = (yyvsp[0].expression); }
#line 2968 "parser/parser.c"
    break;

  case 74: /* func_expr: func_call  */
#line 239 "parser/c7.y"
                               { (yyval.expression) = (yyvsp[0].expression); }
#line 2974 "parser/parser.c"
    break;

  case 75: /* func_expr: set_func_call  */
#line 240 "parser/c7.y"
                                   { (yyval.expression) = (yyvsp[0].expression); }
#line 2980 "parser/parser.c"
    break;

  case 76: /* func_expr: PARENT_LEFT func_cte_expr PARENT_RIGHT  */
#line 241 "parser/c7.y"
                                                            { (yyval.expression) = (yyvsp[-1].expression); }
#line 2986 "parser/parser.c"
    break;

  case 77: /* arith_expr: arith_expr ADD term  */
#line 244 "parser/c7.y"
                                           {
                (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_char_expr((yyvsp[-1].op)), (yyvsp[0].expression));
            }
#line 2994 "parser/parser.c"
    break;

  case 78: /* arith_expr: arith_expr SUB term  */
#line 247 "parser/c7.y"
                                           {
                (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_char_expr((yyvsp[-1].op)), (yyvsp[0].expression));
            }
#line 3002 "parser/parser.c"
    break;

  case 79: /* arith_expr: term  */
#line 250 "parser/c7.y"
                      { (yyval.expression) = (yyvsp[0].expression); }
#line 3008 "parser/parser.c"
    break;

  case 80: /* term: term MULT factor  */
#line 253 "parser/c7.y"
                                    {
            (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_char_expr((yyvsp[-1].op)), (yyvsp[0].expression));
        }
#line 3016 "parser/parser.c"
    break;

  case 81: /* term: term DIV factor  */
#line 256 "parser/c7.y"
                                   {
            (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_char_expr((yyvsp[-1].op)), (yyvsp[0].expression));
        }
#line 3024 "parser/parser.c"
    break;

  case 82: /* term: factor  */
#line 259 "parser/c7.y"
                    { (yyval.expression) = (yyvsp[0].expression); }
#line 3030 "parser/parser.c"
    break;

  case 83: /* factor: INTEGER  */
#line 262 "parser/c7.y"
                     { (yyval.expression) = create_int_expr((yyvsp[0].int_value)); }
#line 3036 "parser/parser.c"
    break;

  case 84: /* factor: FLOAT  */
#line 263 "parser/c7.y"
                   { (yyval.expression) = create_float_expr((yyvsp[0].float_value)); }
#line 3042 "parser/parser.c"
    break;

  case 85: /* factor: ID  */
#line 264 "parser/c7.y"
                { (yyval.expression) = create_var_expr((yyvsp[0].int_value)); }
#line 3048 "parser/parser.c"
    break;

  case 86: /* factor: PARENT_LEFT arith_expr PARENT_RIGHT  */
#line 265 "parser/c7.y"
                                                 { (yyval.expression) = (yyvsp[-1].expression); }
#line 3054 "parser/parser.c"
    break;


#line 3058 "parser/parser.c"

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

#line 268 "parser/c7.y"


void yyerror(const char *s) {
    printf("\nSyntaxError: %s in line %d, column %d.\n",
           s, parser_line, parser_column);
    syntax_error = 1;
}
