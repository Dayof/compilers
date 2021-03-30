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
  YYSYMBOL_UMINUS = 43,                    /* UMINUS  */
  YYSYMBOL_THEN = 44,                      /* THEN  */
  YYSYMBOL_YYACCEPT = 45,                  /* $accept  */
  YYSYMBOL_program = 46,                   /* program  */
  YYSYMBOL_stmts = 47,                     /* stmts  */
  YYSYMBOL_stmt = 48,                      /* stmt  */
  YYSYMBOL_func_stmt = 49,                 /* func_stmt  */
  YYSYMBOL_var_decl_stmt = 50,             /* var_decl_stmt  */
  YYSYMBOL_param_list = 51,                /* param_list  */
  YYSYMBOL_simple_param_list = 52,         /* simple_param_list  */
  YYSYMBOL_flex_block_struct = 53,         /* flex_block_struct  */
  YYSYMBOL_compound_block_stmt = 54,       /* compound_block_stmt  */
  YYSYMBOL_block_stmts = 55,               /* block_stmts  */
  YYSYMBOL_block_stmt = 56,                /* block_stmt  */
  YYSYMBOL_flow_control = 57,              /* flow_control  */
  YYSYMBOL_opt_param = 58,                 /* opt_param  */
  YYSYMBOL_for_expression = 59,            /* for_expression  */
  YYSYMBOL_decl_or_cond_expr = 60,         /* decl_or_cond_expr  */
  YYSYMBOL_or_cond_expr = 61,              /* or_cond_expr  */
  YYSYMBOL_and_cond_expr = 62,             /* and_cond_expr  */
  YYSYMBOL_unary_cond_expr = 63,           /* unary_cond_expr  */
  YYSYMBOL_eq_cond_expr = 64,              /* eq_cond_expr  */
  YYSYMBOL_equal_ops = 65,                 /* equal_ops  */
  YYSYMBOL_rel_cond_expr = 66,             /* rel_cond_expr  */
  YYSYMBOL_rel_cond_stmt = 67,             /* rel_cond_stmt  */
  YYSYMBOL_rel_ops = 68,                   /* rel_ops  */
  YYSYMBOL_set_expr = 69,                  /* set_expr  */
  YYSYMBOL_func_call = 70,                 /* func_call  */
  YYSYMBOL_set_func_call = 71,             /* set_func_call  */
  YYSYMBOL_simple_expr = 72,               /* simple_expr  */
  YYSYMBOL_func_cte_expr = 73,             /* func_cte_expr  */
  YYSYMBOL_func_expr = 74,                 /* func_expr  */
  YYSYMBOL_arith_expr = 75,                /* arith_expr  */
  YYSYMBOL_term = 76,                      /* term  */
  YYSYMBOL_factor = 77                     /* factor  */
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
#define YYLAST   5073

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  45
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  89
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  614

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   299


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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    51,    51,    54,    55,    56,    59,    60,    63,    69,
      75,    79,    83,    86,    89,    90,    93,    94,    97,    98,
     101,   104,   107,   108,   109,   110,   111,   115,   119,   123,
     126,   132,   136,   140,   144,   148,   152,   155,   156,   159,
     160,   165,   166,   171,   176,   180,   183,   187,   190,   193,
     196,   199,   202,   206,   212,   215,   218,   219,   223,   226,
     227,   228,   232,   236,   242,   248,   253,   257,   261,   265,
     271,   272,   275,   279,   283,   284,   287,   288,   289,   292,
     295,   298,   301,   304,   307,   308,   313,   314,   315,   316
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
  "ID", "FLOAT", "UMINUS", "THEN", "$accept", "program", "stmts", "stmt",
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
     295,   296,   297,   298,   299
};
#endif

#define YYPACT_NINF (-252)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-90)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      24,    20,    67,   136,   148,   172,   267,   123,  -252,   280,
     302,   434,   330,    51,    10,   128,    97,    84,  1342,   471,
      91,  1523,   479,   138,   149,   158,   124,   492,   162,   170,
     181,   191,   203,   211,   223,    74,  2118,  2150,  2182,  2214,
     206,   229,   145,   249,   686,   686,   286,   686,    54,   288,
     315,   317,  1101,  1002,  1340,   328,   339,   340,   342,   352,
     942,  1488,  1606,   741,   159,   268,   741,   741,   741,  3103,
      30,   492,   542,  2246,  2278,  2310,   358,   367,   370,   375,
     733,     9,  2124,  2185,  2342,    33,    33,    54,    54,   400,
     331,  2978,  3132,   368,  4745,   888,  2983,    12,   184,    26,
       2,   377,   717,  4758,  4791,  4804,  4712,   411,   413,   421,
     424,    14,   196,   248,   441,   449,   451,   475,   476,  2217,
    2249,  2281,  2313,  2345,  2374,   686,   426,   477,   947,  1207,
    3021,  1479,  3132,  3132,  3166,  3171,  3200,  3205,  3234,  3239,
    3268,  3273,  3200,   500,   501,   503,   518,  2406,   532,   530,
    2438,  2470,  2502,  2534,  2566,  2598,  2630,   553,   947,   198,
    2374,   332,   233,   605,   651,  4837,  4850,   653,   369,   278,
    2662,  2374,  2374,  2694,  2726,   686,   179,   568,   573,   591,
     603,   612,   625,   646,  1131,  1283,  1382,   600,   620,   633,
     649,   900,  1429,  1569,  2758,   686,   190,   525,   641,   643,
     647,   683,   691,   705,   485,   546,   692,   670,   693,   710,
     711,    75,   797,   953,   686,   266,   749,   752,   753,   771,
    4469,  4482,  4883,  4896,  4515,  4528,   686,   271,  3103,  4190,
     774,   775,   779,   784,  1080,  3406,  3675,    18,    31,   439,
    4196,  4230,  4236,  4270,  4276,  3916,  3688,  3722,     9,     9,
       9,  1629,  3358,    30,  3026,   387,    57,    57,  3103,  2790,
     686,   279,   422,   431,   498,   794,   806,   849,   850,  1461,
    1048,  1504,   528,   562,   634,   755,   935,  1671,  1851,   686,
     287,  3137,   817,   511,   869,   870,   878,   879,   415,  3345,
    3440,   493,   108,    72,   235,   627,   843,  3950,  3956,  3990,
    3996,  3910,  3453,  3487,   811,  2822,   902,   914,   933,   851,
     492,   934,   948,   955,    77,   999,  1046,  1102,  1153,   818,
     838,  3098,   952,   912,  1821,   931,   741,   741,   741,    30,
     179,   179,   967,  1028,     9,   974,  1072,   949,   741,   741,
     741,    30,    98,    98,   190,   190,   988,  1054,     9,  4561,
    4574,   956,   741,   741,   741,   266,   266,   992,  1156,     9,
    3735,  3769,   139,   963,   741,   741,   741,    30,  3103,  3302,
    3302,   120,   120,   271,   271,  1876,  1891,   524,  3064,  4607,
    4620,   186,  2854,  2886,  1010,  1184,     9,  1885,  1922,   964,
     741,   741,   741,    30,   209,   209,   279,   279,  1015,  1224,
       9,  3500,  3534,  3393,   372,  1008,   985,   741,   741,   741,
      30,  1245,  3137,  3137,  3307,  3307,   218,   218,   287,   287,
    1385,  2918,  1003,   686,   686,  1026,  1038,   741,   159,  3103,
     492,  1601,  1644,   547,  1042,  2119,  1045,  1063,  1067,  1092,
     574,  2147,  2154,  1027,  1136,  1095,  1096,  1098,  1107,   583,
    1142,  1191,  1196,  1200,  4929,  4653,  1119,  1123,  1143,  1149,
    4666,  4699,  4310,  3782,  1150,  1155,  1169,  1174,   587,   276,
    4316,  4350,  3816,  3829,  3863,  3876,  4942,  2950,   821,  1955,
    1181,  1182,  1189,  1190,   601,  1988,  2021,  2054,  2087,  4030,
    3547,  1245,  1192,  1197,  1213,  1215,   621,   686,   351,   622,
     650,   654,  1171,  1219,  1220,  1221,  1305,   858,  1435,   663,
     674,   712,   723,   782,   698,  1444,  1522,   577,   586,  4036,
    4070,  3581,  3594,  3628,  3641,  1685,  1239,  1240,  1249,  1746,
    1782,  1250,  2983,    81,  1141,  1253,  1254,  1255,  1257,  1258,
    1238,  1243,  1244,  1256,  1263,  4975,  4988,  5021,  5034,  4356,
    4390,  4396,  4430,  4436,   887,   903,   958,   979,   986,   787,
    4076,  4110,  4116,  4150,  4156,  1266,  1234,     9,  1552,  1563,
    1236,   741,   741,   741,    30,   257,   257,   351,   351,  1277,
    1290,  1293,  2406,  3069,  2406,  1815,   788,  1598,  1301,  1302,
    1303,  1311,   804,  1645,  1682,  1714,  1783,  1848,  1887,  1920,
    1953,  2406,   807,  1986,   808,   810,   820,   840,   844,  2019,
    2406,  2406,  2052,  2085
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
       0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -252,  -252,  -252,  1316,  -252,     0,  -252,  -240,  -125,    11,
    -251,   115,  -141,   -86,   -95,   -99,   -57,   -64,   -11,   -25,
    -232,   -43,   -52,  -236,   395,   -16,   208,    79,  1308,  1331,
    1170,   910,   517
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,     3,     4,     5,    36,    14,   113,   154,   316,
      37,   317,    39,    96,    97,    98,    99,   100,   101,   102,
     136,   103,   104,   142,    89,   207,   208,    90,   209,   210,
     211,   212,   213
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       6,   255,    40,     6,   370,   237,   318,   369,   383,   -45,
     129,    55,   111,   377,   250,   -45,    16,   241,   176,   130,
     147,    40,   167,    17,   -45,   131,   240,    19,   187,   187,
     291,   187,   162,   -41,   161,   170,   -15,   -47,    81,   -41,
     -45,   133,    48,   -15,   239,     1,   173,   174,   222,   184,
     251,   186,   258,   242,   421,    55,   -45,   368,   238,    81,
     415,     7,   348,   414,   132,   293,   215,     8,   163,   -47,
     -47,   112,   292,    52,    82,    54,   222,   297,   -45,    70,
     222,   126,    70,   342,   343,   -45,   296,   584,    71,   440,
     166,   430,    15,   165,    52,    82,    54,   220,   349,   221,
      18,   449,   -70,   334,   295,    20,    57,   196,    40,   187,
     -45,   413,   272,   298,   -41,   222,   222,   222,   294,   258,
     222,   -41,   164,    77,    78,   359,   222,   468,    11,   227,
      12,   319,    42,    38,   -11,   155,    -2,     9,   204,   335,
     206,   -11,   272,    43,    40,   -48,   412,   315,    -5,    -5,
     114,   -10,    73,   484,    44,    40,    40,     1,   -10,   187,
     234,   360,   236,    45,   214,    46,    91,    63,   215,    -5,
     496,   155,    -6,    -6,    92,    64,   241,   -48,   -48,   187,
      93,    94,   155,   155,   250,   240,    65,   216,   217,   218,
     219,   -39,   -44,    -6,   381,   334,    66,   -39,   187,   220,
      95,   221,   -14,   239,   157,   -43,   241,   159,    67,   -14,
     187,   -43,   242,    74,   386,   240,    68,   362,   261,   184,
     251,   186,   433,   400,   -44,   368,    41,   280,    69,   297,
     204,   335,   206,   239,   370,    56,    75,   169,   296,   156,
     -40,   -47,   242,    40,   187,    41,   -40,   238,   -47,   269,
     387,   271,   188,   188,   148,   188,   295,   293,   288,   401,
     290,   149,   567,   187,   292,   298,   498,    -7,    -7,   297,
     404,   348,   223,   -47,   -47,   156,   359,   243,   296,    56,
      -4,    -4,   -46,   415,   386,   -42,   156,   156,    -7,    40,
      76,   -42,   400,   194,    55,   -74,   295,   506,   568,   508,
     223,    -4,    -3,    -3,   223,   298,   220,   349,   221,   107,
     294,   234,   360,   236,   -46,   -46,   241,   241,   471,   269,
     387,   271,   -72,    -3,   -73,   240,   470,   288,   401,   290,
      -9,    -9,    41,   188,   592,   -76,   273,   299,   171,   223,
     223,   223,   532,   239,   223,   321,   -77,    84,   517,   -71,
     223,    -9,   242,   242,   242,   320,   567,   469,   125,   -75,
     297,   297,   297,   520,   115,   237,   273,    40,    41,   296,
     296,   519,   533,   116,    38,   -13,   117,   241,   -48,    41,
      41,   118,   -13,   188,   -47,   -48,   240,   295,   295,   426,
     -47,   506,   568,   508,   378,   509,   298,   298,   298,   298,
     131,   294,   518,   188,   239,    40,   124,   187,   187,   127,
     -48,   -48,   222,   242,    55,   -47,   -47,   143,   238,   144,
      38,   -86,   188,   -86,   -86,   -86,   -86,   145,   -86,   -74,
     146,   -86,   -86,   -48,   188,   -74,   243,   255,   -72,   -48,
     -12,   318,   -86,   318,   -72,   -49,   583,   -12,   150,   -86,
     -86,   -86,   -86,   -86,   -86,    13,   151,   600,   152,   603,
     318,   108,   109,   110,   -48,   -48,   243,    41,   188,   318,
     318,    -8,    -8,   134,   135,   509,   609,   -49,   -49,   -19,
     -19,   187,   153,   -78,   291,   612,   613,   188,   602,   299,
     511,   158,    -8,   -86,   -86,   -86,   -86,    47,    73,   -39,
     -19,    48,   527,   528,    49,   -73,   -39,   -66,   -67,   534,
     -68,   -73,   -86,    41,    50,    51,   222,   -57,    56,   293,
      30,    31,    32,    33,   -57,   -69,   292,   -57,   -57,   299,
     476,   297,    52,    53,    54,   -76,    73,   149,   -57,   -65,
     296,   -76,   -18,   -18,    62,   -57,   -57,   -57,   -57,   -57,
     -57,   341,   -74,   -40,   -88,   -88,   -88,   -88,   295,   -64,
     -40,   193,   193,   -18,   193,    83,   319,   298,   319,   -77,
     559,   168,   294,   -88,   -74,   -77,   243,   243,   243,   -72,
     539,   225,   315,   -44,   315,   319,   247,   149,    62,   544,
     -44,    41,   -46,   553,   319,   319,   149,   -73,   193,   -46,
     149,   315,    62,    62,   122,   123,   -76,   558,   325,   225,
     315,   315,   -44,   225,   149,   -44,   413,   326,   -44,   510,
     299,   299,   299,   299,   -46,   -46,   -77,   564,   -74,    41,
     327,   188,   188,   -49,   149,   -74,   223,   243,    56,   -71,
     -49,   -71,   193,   -44,   133,   278,   303,   -71,   225,   225,
     225,   328,   337,   225,   -31,   -75,   -72,   -31,   -46,   225,
     -73,   134,   135,   -72,   -46,   -49,   -49,   -73,   -72,   -76,
     -73,   -31,   -31,   -31,   -31,   278,   -76,   -31,   -31,   -31,
     -77,   -31,   -31,   -31,   -31,   -31,   172,   -77,   338,   -46,
     -46,   175,   193,   324,   -31,   176,   339,   -76,   177,   510,
     -87,   -87,   -87,   -87,   -70,   188,   575,   576,   178,   179,
     340,   -70,   193,   336,   180,   181,   182,   183,   -43,   -87,
     -77,   437,   438,   439,   -49,   -43,   184,   185,   186,   -71,
     -49,   193,   350,   446,   447,   448,   -71,   -71,   -75,   119,
     223,   248,   249,   193,   361,   247,   195,   457,   458,   459,
     196,   134,   135,   197,   351,   -49,   -49,   352,   353,   465,
     466,   467,   -75,   198,   199,   193,   193,   193,   -75,   200,
     201,   202,   203,   225,   225,   247,   354,   193,   388,   363,
     364,   204,   205,   206,   365,   481,   482,   483,   -75,   366,
     320,   299,   320,   -42,   -78,   -75,   193,   402,   303,   389,
     -42,   -78,   493,   494,   495,   -81,   -81,   344,   345,   320,
     608,   390,   -36,   610,   -66,   -36,   -67,   149,   320,   320,
     321,   -66,   531,   -67,   -81,   431,   -68,    62,   -78,   -36,
     -36,   -36,   -36,   -68,   -78,   -36,   -36,   -36,   303,   -36,
     -36,   -36,   -36,   -36,   -36,   432,   -69,   441,   442,   -51,
     -65,   193,   -36,   -69,   391,   392,   -51,   -65,   405,   137,
     138,   452,   453,   574,   -88,   193,   -88,   -88,   -88,   -88,
     139,   -88,   460,   461,   406,   407,   193,   -51,   -51,   140,
     141,   -51,   -51,   408,   409,   247,   247,   247,   247,   247,
     474,   475,   425,   253,   -66,   -88,   -88,   -88,   -88,   -88,
     -66,   -88,   128,   193,   -88,   -88,   -70,   422,   248,   249,
     -67,   278,   278,   487,   488,   -88,   -67,   193,   435,   423,
     248,   249,   -88,   -88,   -88,   -88,   -88,   -88,   516,   303,
     303,   303,   303,   303,   303,   523,   524,    61,   424,   427,
     193,   193,   -70,   394,   395,   225,   247,    62,   -70,   -70,
      85,    86,   260,   428,   192,   192,   261,   192,   434,   262,
     429,   -84,   -84,   -84,   -84,   -68,   589,   590,   591,   263,
     264,   -68,   436,   443,   224,   265,   266,   267,   268,   246,
     -84,    61,   -88,   -88,   -88,   -88,   -69,   269,   270,   271,
     445,   192,   -69,   -65,   454,   120,   121,   456,   462,   -65,
     -22,   -88,   224,   -22,   464,   480,   224,    70,   516,   -88,
     -88,   -88,   -88,   -88,   193,   569,   478,   -22,   -22,   -22,
     -22,   489,   491,   -22,   -22,   -22,   492,   -22,   -22,   -22,
     -22,   -22,   -22,   529,   444,   192,   248,   249,   277,   302,
     -22,   224,   224,   224,   526,   530,   224,   -16,   -78,   225,
     -16,   535,   224,   393,   -78,   -88,   -88,   -88,   -88,   -88,
     455,   -88,   248,   249,   -16,   -16,   -16,   -16,   277,   536,
     -16,   -16,   -16,   537,   -16,   -16,   -16,   -16,   -16,   -16,
     -85,   -85,   -85,   -85,   193,   192,   -86,   -16,   -86,   -86,
     -86,   -86,   516,   516,   595,   596,   -86,   -86,   538,   -85,
     303,   540,   541,   -17,   542,   192,   -17,   -86,   -86,   -86,
     -86,   -86,   -86,   543,   -86,   -86,   -86,   -86,   -86,   -86,
     -17,   -17,   -17,   -17,   192,   545,   -17,   -17,   -17,   546,
     -17,   -17,   -17,   -17,   -17,   -17,   192,   -86,   246,   -86,
     -86,   -86,   -86,   -17,   -89,   -89,   -89,   -89,   585,   547,
     -79,   -79,   344,   345,   -25,   548,   549,   -25,   375,   376,
     192,   550,   463,   -89,   248,   249,   379,   380,   246,   -79,
     192,   -25,   -25,   -25,   -25,   551,   570,   -25,   -25,   -25,
     552,   -25,   -25,   -25,   -25,   -25,   -25,   554,   555,   192,
     479,   302,   248,   249,   -25,   556,   557,    60,   560,   -80,
     -80,   344,   345,   561,   -82,   -82,   -82,   -82,   -83,   -83,
     -83,   -83,   279,   160,   191,   191,   280,    80,   -80,   562,
      61,   563,   281,   -82,   571,   572,   573,   -83,   282,   283,
     490,   302,   248,   249,   106,   284,   285,   286,   287,   245,
     587,    60,   248,   249,   192,   579,   580,   288,   289,   290,
     497,    80,   450,   451,   498,   581,   582,   499,   192,   -66,
     -67,   -68,   106,   -69,   -65,   -66,   106,   500,   501,   192,
     -67,   -68,   586,   502,   503,   504,   505,   588,   246,   246,
     246,   472,   473,   -69,   597,   506,   507,   508,   329,   -88,
     -65,   -88,   -88,   -88,   -88,   191,   192,   598,   276,   301,
     599,   106,   106,   106,   485,   486,   106,   604,   605,   606,
     192,   -86,   106,   -86,   -86,   -86,   -86,   607,   -86,    10,
       0,   515,   302,   302,   302,   302,   521,   522,   276,     0,
       0,     0,     0,   192,   192,    58,     0,     0,   224,   246,
      61,     0,     0,    21,     0,   323,    22,   -87,   -87,   -87,
     -87,   -87,   189,   189,     0,    79,     0,     0,    59,     0,
      23,    24,    25,    26,     0,   333,    27,    28,    29,     0,
      30,    31,    32,    33,    34,   190,   190,     0,   190,    58,
       0,     0,     0,    35,   347,     0,   -19,     0,   -87,   -19,
     -87,   -87,   -87,   -87,     0,   105,   358,     0,   245,     0,
     244,   515,    59,   -19,   -19,   -19,   -19,   192,     0,   -19,
     -19,   -19,     0,   -19,   -19,   -19,   -19,   -19,   -19,     0,
     323,     0,     0,   105,     0,     0,   -19,   105,   245,     0,
     385,     0,     0,   189,     0,   -81,   274,   -81,   -81,   330,
     331,   -87,   224,   -87,   -87,   -87,   -87,     0,   -87,   399,
     -81,   301,   -81,   -81,   577,   578,   190,   -81,     0,   275,
     300,     0,   105,   105,   105,     0,   274,   105,   -86,   -86,
     -86,   -86,   -86,   105,   -86,     0,     0,   192,     0,     0,
      60,     0,     0,   322,   214,   593,   594,     0,   215,   275,
       0,   301,     0,   302,    92,   -81,   -81,   -81,    87,    88,
      93,    94,     0,   332,   333,     0,   190,   216,   217,   218,
     219,   -87,   -87,   -87,   -87,   -87,     0,   -87,   347,   220,
      95,   221,   346,     0,   -36,     0,   190,   -36,   -84,   358,
     -84,   -84,   -84,   -84,   357,   -84,     0,     0,   245,   245,
     245,   -36,   -36,   -36,   -36,   190,     0,   -36,   -36,   -36,
       0,   -36,   -36,   -36,   -36,   -36,   385,   190,   -88,   244,
     -88,   -88,   -88,   -88,   -36,   -88,     0,     0,   384,   -85,
     399,   -85,   -85,   -85,   -85,   -84,   -85,   -84,   -84,   -84,
     -84,   514,   301,   301,   301,   301,     0,   398,     0,   244,
       0,   190,     0,   191,   191,     0,     0,     0,   106,   245,
      60,     0,   -23,     0,   -89,   -23,   -89,   -89,   -89,   -89,
     190,   -89,   300,   -84,   -84,   -84,   -84,   -84,    58,   -23,
     -23,   -23,   -23,     0,     0,   -23,   -23,   -23,     0,   -23,
     -23,   -23,   -23,   -23,   -23,   -88,     0,   -88,   -88,   -88,
     -88,    59,   -23,     0,     0,   -24,     0,     0,   -24,     0,
       0,   -79,   300,   -79,   -79,   577,   578,     0,   -79,     0,
       0,   514,   -24,   -24,   -24,   -24,     0,   566,   -24,   -24,
     -24,     0,   -24,   -24,   -24,   -24,   -24,   -24,   -81,   -81,
     -81,   396,   397,     0,   -81,   -24,   -18,     0,   -80,   -18,
     -80,   -80,   577,   578,     0,   -80,     0,     0,     0,   244,
     244,   244,   106,   -18,   -18,   -18,   -18,     0,     0,   -18,
     -18,   -18,     0,   -18,   -18,   -18,   -18,   -18,   -18,   512,
     -82,     0,   -82,   -82,   -82,   -82,   -18,   -82,     0,     0,
       0,   189,   189,     0,     0,     0,     0,   566,    58,     0,
       0,     0,   513,   300,   300,   300,   300,    -9,     0,     0,
      -9,     0,     0,   301,   190,   190,     0,     0,     0,   105,
     244,    59,     0,     0,    -9,    -9,    -9,    -9,     0,     0,
      -9,    -9,    -9,     0,    -9,    -9,    -9,    -9,    -9,    -9,
       0,     0,     0,   -30,     0,     0,   -30,    -9,     0,   -83,
       0,   -83,   -83,   -83,   -83,     0,   -83,     0,     0,   512,
     -30,   -30,   -30,   -30,     0,   565,   -30,   -30,   -30,     0,
     -30,   -30,   -30,   -30,   -30,   -30,   -29,     0,     0,   -29,
       0,     0,   513,   -30,     0,     0,     0,   -85,   190,   -85,
     -85,   -85,   -85,   -29,   -29,   -29,   -29,     0,     0,   -29,
     -29,   -29,     0,   -29,   -29,   -29,   -29,   -29,   -29,   -26,
       0,     0,   -26,     0,     0,     0,   -29,     0,   -84,   -84,
     -84,   -84,   -84,   105,   -84,     0,   -26,   -26,   -26,   -26,
       0,     0,   -26,   -26,   -26,     0,   -26,   -26,   -26,   -26,
     -26,   -26,   -79,     0,   -79,   -79,   330,   331,   -27,   -26,
       0,   -27,   -88,   -88,   -88,   -88,   -88,   -80,   -88,   -80,
     -80,   330,   331,     0,     0,   -27,   -27,   -27,   -27,     0,
       0,   -27,   -27,   -27,   300,   -27,   -27,   -27,   -27,   -27,
     -27,   -28,     0,     0,   -28,     0,     0,     0,   -27,   -85,
     -85,   -85,   -85,   -85,     0,   -85,     0,     0,   -28,   -28,
     -28,   -28,     0,     0,   -28,   -28,   -28,     0,   -28,   -28,
     -28,   -28,   -28,   -28,   -33,     0,     0,   -33,     0,     0,
       0,   -28,   -89,   -89,   -89,   -89,   -89,     0,   -89,     0,
       0,   -33,   -33,   -33,   -33,     0,     0,   -33,   -33,   -33,
       0,   -33,   -33,   -33,   -33,   -33,   -33,   -31,     0,     0,
     -31,     0,     0,     0,   -33,   -79,   -79,   -79,   396,   397,
       0,   -79,     0,     0,   -31,   -31,   -31,   -31,     0,     0,
     -31,   -31,   -31,     0,   -31,   -31,   -31,   -31,   -31,   611,
     -34,     0,     0,   -34,     0,     0,     0,   -31,   -80,   -80,
     -80,   396,   397,     0,   -80,     0,     0,   -34,   -34,   -34,
     -34,     0,     0,   -34,   -34,   -34,     0,   -34,   -34,   -34,
     -34,   -34,   -34,   -35,     0,     0,   -35,     0,     0,     0,
     -34,   -82,   -82,   -82,   -82,   -82,     0,   -82,     0,     0,
     -35,   -35,   -35,   -35,     0,     0,   -35,   -35,   -35,     0,
     -35,   -35,   -35,   -35,   -35,   -35,   -32,     0,     0,   -32,
       0,     0,     0,   -35,   -83,   -83,   -83,   -83,   -83,     0,
     -83,     0,     0,   -32,   -32,   -32,   -32,     0,     0,   -32,
     -32,   -32,     0,   -32,   -32,   -32,   -32,   -32,   -32,   -22,
       0,     0,   -22,     0,     0,   -89,   -32,   -89,   -89,   -89,
     -89,   -88,   -88,   -88,   -88,   -88,   -22,   -22,   -22,   -22,
       0,     0,   -22,   -22,   -22,     0,   -22,   -22,   -22,   -22,
     -22,    21,     0,   -82,    72,   -82,   -82,   -82,   -82,   -22,
     -83,     0,   -83,   -83,   -83,   -83,     0,     0,    23,    24,
      25,    26,     0,     0,    27,    28,    29,     0,    30,    31,
      32,    33,    34,   -21,     0,     0,   -21,     0,     0,     0,
       0,    35,   -85,   -85,   -85,   -85,   -85,     0,     0,     0,
     -21,   -21,   -21,   -21,     0,     0,   -21,   -21,   -21,     0,
     -21,   -21,   -21,   -21,   -21,   -25,     0,     0,   -25,     0,
       0,     0,     0,   -21,   -89,   -89,   -89,   -89,   -89,     0,
       0,     0,   -25,   -25,   -25,   -25,     0,     0,   -25,   -25,
     -25,     0,   -25,   -25,   -25,   -25,   -25,   -20,     0,     0,
     -20,     0,     0,     0,     0,   -25,   -79,   -79,   -79,    87,
      88,     0,     0,     0,   -20,   -20,   -20,   -20,     0,     0,
     -20,   -20,   -20,     0,   -20,   -20,   -20,   -20,   -20,   -23,
       0,     0,   -23,     0,     0,     0,     0,   -20,   -80,   -80,
     -80,    87,    88,     0,     0,     0,   -23,   -23,   -23,   -23,
       0,     0,   -23,   -23,   -23,     0,   -23,   -23,   -23,   -23,
     -23,   -24,     0,     0,   -24,     0,     0,     0,     0,   -23,
     -82,   -82,   -82,   -82,   -82,     0,     0,     0,   -24,   -24,
     -24,   -24,     0,     0,   -24,   -24,   -24,     0,   -24,   -24,
     -24,   -24,   -24,   -30,     0,     0,   -30,     0,     0,     0,
       0,   -24,   -83,   -83,   -83,   -83,   -83,     0,     0,     0,
     -30,   -30,   -30,   -30,     0,     0,   -30,   -30,   -30,     0,
     -30,   -30,   -30,   -30,   -30,    21,     0,   259,     0,     0,
       0,     0,     0,   -30,     0,     0,     0,     0,     0,     0,
       0,     0,    23,    24,    25,    26,     0,     0,    27,    28,
      29,     0,    30,    31,    32,    33,    34,   304,     0,   305,
       0,     0,     0,     0,     0,    35,     0,     0,     0,     0,
       0,     0,     0,     0,   306,   307,   308,   309,     0,     0,
     310,   311,   312,     0,    30,    31,    32,    33,   313,   -29,
       0,     0,   -29,     0,     0,     0,     0,   314,     0,     0,
       0,     0,     0,     0,     0,     0,   -29,   -29,   -29,   -29,
       0,     0,   -29,   -29,   -29,     0,   -29,   -29,   -29,   -29,
     -29,   -26,     0,     0,   -26,     0,     0,     0,     0,   -29,
       0,     0,     0,     0,     0,     0,     0,     0,   -26,   -26,
     -26,   -26,     0,     0,   -26,   -26,   -26,     0,   -26,   -26,
     -26,   -26,   -26,   -27,     0,     0,   -27,     0,     0,     0,
       0,   -26,     0,     0,     0,     0,     0,     0,     0,     0,
     -27,   -27,   -27,   -27,     0,     0,   -27,   -27,   -27,     0,
     -27,   -27,   -27,   -27,   -27,   -28,     0,     0,   -28,     0,
       0,     0,     0,   -27,     0,     0,     0,     0,     0,     0,
       0,     0,   -28,   -28,   -28,   -28,     0,     0,   -28,   -28,
     -28,     0,   -28,   -28,   -28,   -28,   -28,   -33,     0,     0,
     -33,     0,     0,     0,     0,   -28,     0,     0,     0,     0,
       0,     0,     0,     0,   -33,   -33,   -33,   -33,     0,     0,
     -33,   -33,   -33,     0,   -33,   -33,   -33,   -33,   -33,   -16,
       0,     0,   -16,     0,     0,     0,     0,   -33,     0,     0,
       0,     0,     0,     0,     0,     0,   -16,   -16,   -16,   -16,
       0,     0,   -16,   -16,   -16,     0,   -16,   -16,   -16,   -16,
     -16,   -17,     0,     0,   -17,     0,     0,     0,     0,   -16,
       0,     0,     0,     0,     0,     0,     0,     0,   -17,   -17,
     -17,   -17,     0,     0,   -17,   -17,   -17,     0,   -17,   -17,
     -17,   -17,   -17,   -34,     0,     0,   -34,     0,     0,     0,
       0,   -17,     0,     0,     0,     0,     0,     0,     0,     0,
     -34,   -34,   -34,   -34,     0,     0,   -34,   -34,   -34,     0,
     -34,   -34,   -34,   -34,   -34,   -35,     0,     0,   -35,     0,
       0,     0,     0,   -34,     0,     0,     0,     0,     0,     0,
       0,     0,   -35,   -35,   -35,   -35,     0,     0,   -35,   -35,
     -35,     0,   -35,   -35,   -35,   -35,   -35,   -32,     0,     0,
     -32,     0,     0,     0,     0,   -35,     0,     0,     0,     0,
       0,     0,     0,     0,   -32,   -32,   -32,   -32,     0,     0,
     -32,   -32,   -32,     0,   -32,   -32,   -32,   -32,   -32,    -9,
       0,     0,    -9,     0,     0,     0,     0,   -32,     0,     0,
       0,     0,     0,     0,     0,     0,    -9,    -9,    -9,    -9,
       0,     0,    -9,    -9,    -9,     0,    -9,    -9,    -9,    -9,
      -9,    21,     0,     0,   382,     0,     0,     0,     0,    -9,
       0,     0,     0,     0,     0,     0,     0,     0,    23,    24,
      25,    26,     0,     0,    27,    28,    29,     0,    30,    31,
      32,    33,    34,    21,     0,     0,   420,     0,     0,     0,
       0,    35,     0,     0,     0,     0,     0,     0,     0,     0,
      23,    24,    25,    26,     0,     0,    27,    28,    29,     0,
      30,    31,    32,    33,    34,   -19,     0,     0,   -19,     0,
       0,     0,     0,    35,     0,     0,     0,     0,     0,     0,
       0,     0,   -19,   -19,   -19,   -19,     0,     0,   -19,   -19,
     -19,     0,   -19,   -19,   -19,   -19,   -19,    21,     0,     0,
     477,     0,     0,     0,     0,   -19,     0,     0,     0,     0,
       0,     0,     0,     0,    23,    24,    25,    26,     0,     0,
      27,    28,    29,     0,    30,    31,    32,    33,    34,    21,
       0,     0,   525,     0,     0,     0,     0,    35,     0,     0,
       0,     0,     0,     0,     0,     0,    23,    24,    25,    26,
       0,     0,    27,    28,    29,     0,    30,    31,    32,    33,
      34,   -18,     0,     0,   -18,     0,     0,     0,     0,    35,
       0,     0,     0,     0,     0,     0,     0,     0,   -18,   -18,
     -18,   -18,     0,     0,   -18,   -18,   -18,     0,   -18,   -18,
     -18,   -18,   -18,   -37,     0,   -37,     0,   -37,   214,     0,
     254,   -18,   215,   -37,     0,     0,     0,     0,    92,   -37,
     -37,     0,     0,     0,    93,    94,   -37,   -37,   -37,   -37,
       0,   216,   217,   218,   219,     0,     0,     0,   -37,   -37,
     -37,     0,     0,   220,    95,   221,   -38,     0,   -38,     0,
     -38,   -37,   -37,     0,     0,   -37,   -38,     0,     0,     0,
       0,   -37,   -38,   -38,     0,     0,     0,   -37,   -37,   -38,
     -38,   -38,   -38,     0,   -37,   -37,   -37,   -37,     0,     0,
       0,   -38,   -38,   -38,     0,     0,   -37,   -37,   -37,   -38,
     -38,     0,     0,   -38,   279,   601,     0,     0,   280,   -38,
       0,     0,     0,     0,   281,   -38,   -38,     0,     0,     0,
     282,   283,   -38,   -38,   -38,   -38,     0,   284,   285,   286,
     287,     0,     0,   279,   -38,   -38,   -38,   280,   226,   288,
     289,   290,   227,   281,     0,     0,     0,     0,   228,   282,
     283,     0,     0,     0,     0,   229,   284,   285,   286,   287,
       0,   230,   231,   232,   233,     0,     0,   214,   288,   289,
     290,   215,   279,   234,   235,   236,   280,    92,     0,     0,
       0,     0,   281,     0,    94,     0,     0,     0,     0,   283,
     216,   217,   218,   219,     0,   284,   285,   286,   287,     0,
       0,   -52,   220,   252,   221,   -52,   -53,   288,   403,   290,
     -53,     0,     0,     0,     0,     0,     0,     0,   -52,     0,
       0,     0,     0,   -53,   -52,   -52,   -52,   -52,     0,   -53,
     -53,   -53,   -53,     0,     0,   214,   -52,   -52,   -52,   215,
     -59,   -53,   -53,   -53,   -59,     0,     0,     0,     0,     0,
       0,     0,    94,     0,     0,     0,     0,   -59,   216,   217,
     218,   219,     0,   -59,   -59,   -59,   -59,     0,     0,   -60,
     220,   252,   221,   -60,   -63,   -59,   -59,   -59,   -63,     0,
       0,     0,     0,     0,     0,     0,   -60,     0,     0,     0,
       0,   -63,   -60,   -60,   -60,   -60,     0,   -63,   -63,   -63,
     -63,     0,     0,   -61,   -60,   -60,   -60,   -61,   -62,   -63,
     -63,   -63,   -62,     0,     0,     0,     0,     0,     0,     0,
     -61,     0,     0,     0,     0,   -62,   -61,   -61,   -61,   -61,
       0,   -62,   -62,   -62,   -62,     0,     0,   226,   -61,   -61,
     -61,   227,   279,   -62,   -62,   -62,   280,     0,     0,     0,
       0,     0,     0,     0,   229,     0,     0,     0,     0,   283,
     230,   231,   232,   233,     0,   284,   285,   286,   287,     0,
       0,     0,   234,   235,   236,     0,     0,   288,   403,   290,
     410,   -88,     0,   -88,   -88,   -88,   -88,     0,   -88,   411,
       0,   -88,   -88,   253,     0,   -88,   -88,   -88,   -88,   -88,
       0,   -88,   -88,     0,   -88,   -88,     0,     0,     0,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,     0,     0,     0,     0,
       0,     0,   -88,   -88,   -88,   -88,   -88,   -88,   410,   -88,
       0,   -88,   -88,   -88,   -88,     0,   -88,     0,     0,   -88,
     -88,   367,   -88,     0,   -88,   -88,   -88,   -88,     0,     0,
     -88,     0,   -88,   -88,     0,     0,     0,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,     0,     0,     0,     0,     0,     0,
     -88,   -88,   -88,   -88,   -88,   -88,   -87,     0,   -87,   -87,
     -87,   -87,     0,   -87,     0,     0,   -87,   -87,     0,   -81,
       0,   -81,   -81,   418,   419,     0,   -81,   -87,     0,   -81,
     -81,     0,     0,     0,   -87,   -87,   -87,   -87,   -87,   -87,
     -81,     0,     0,     0,     0,     0,     0,   -81,   -81,   -81,
     -81,   -81,   -81,   -84,     0,   -84,   -84,   -84,   -84,     0,
     -84,     0,     0,   -84,   -84,     0,   -88,     0,   -88,   -88,
     -88,   -88,     0,   -88,   -84,     0,   -88,   -88,     0,     0,
       0,   -84,   -84,   -84,   -84,   -84,   -84,   -88,     0,     0,
       0,     0,     0,     0,   -88,   -88,   -88,   -88,   -88,   -88,
     -85,     0,   -85,   -85,   -85,   -85,     0,   -85,     0,     0,
     -85,   -85,     0,   -89,     0,   -89,   -89,   -89,   -89,     0,
     -89,   -85,     0,   -89,   -89,     0,     0,     0,   -85,   -85,
     -85,   -85,   -85,   -85,   -89,     0,     0,     0,     0,     0,
       0,   -89,   -89,   -89,   -89,   -89,   -89,   -79,     0,   -79,
     -79,   418,   419,     0,   -79,     0,     0,   -79,   -79,     0,
     -80,     0,   -80,   -80,   418,   419,     0,   -80,   -79,     0,
     -80,   -80,     0,     0,     0,   -79,   -79,   -79,   -79,   -79,
     -79,   -80,     0,     0,     0,     0,     0,     0,   -80,   -80,
     -80,   -80,   -80,   -80,   -82,     0,   -82,   -82,   -82,   -82,
       0,   -82,     0,     0,   -82,   -82,     0,   -83,     0,   -83,
     -83,   -83,   -83,     0,   -83,   -82,     0,   -83,   -83,     0,
       0,     0,   -82,   -82,   -82,   -82,   -82,   -82,   -83,     0,
       0,     0,     0,     0,     0,   -83,   -83,   -83,   -83,   -83,
     -83,   -87,     0,   -87,   -87,   -87,   -87,     0,     0,     0,
       0,   -87,   -87,     0,   -81,     0,   -81,   -81,   373,   374,
       0,     0,   -87,     0,   -81,   -81,     0,     0,     0,   -87,
     -87,   -87,   -87,   -87,   -87,   -81,     0,     0,     0,     0,
       0,     0,   -81,   -81,   -81,   -81,   -81,   -81,   -84,     0,
     -84,   -84,   -84,   -84,     0,     0,     0,     0,   -84,   -84,
       0,   -88,     0,   -88,   -88,   -88,   -88,     0,     0,   -84,
       0,   -88,   -88,     0,     0,     0,   -84,   -84,   -84,   -84,
     -84,   -84,   -88,     0,     0,     0,     0,     0,     0,   -88,
     -88,   -88,   -88,   -88,   -88,   -85,     0,   -85,   -85,   -85,
     -85,     0,     0,     0,     0,   -85,   -85,     0,   -89,     0,
     -89,   -89,   -89,   -89,     0,     0,   -85,     0,   -89,   -89,
       0,     0,     0,   -85,   -85,   -85,   -85,   -85,   -85,   -89,
       0,     0,     0,     0,     0,     0,   -89,   -89,   -89,   -89,
     -89,   -89,   -79,     0,   -79,   -79,   373,   374,     0,     0,
       0,     0,   -79,   -79,     0,   -80,     0,   -80,   -80,   373,
     374,     0,     0,   -79,     0,   -80,   -80,     0,     0,     0,
     -79,   -79,   -79,   -79,   -79,   -79,   -80,     0,     0,     0,
       0,     0,     0,   -80,   -80,   -80,   -80,   -80,   -80,   -82,
       0,   -82,   -82,   -82,   -82,     0,     0,     0,     0,   -82,
     -82,     0,   -83,     0,   -83,   -83,   -83,   -83,     0,     0,
     -82,     0,   -83,   -83,     0,     0,     0,   -82,   -82,   -82,
     -82,   -82,   -82,   -83,     0,     0,     0,     0,     0,     0,
     -83,   -83,   -83,   -83,   -83,   -83,   -56,     0,   416,   417,
       0,     0,   -56,   -56,   371,   372,   -56,   -56,     0,     0,
       0,     0,   -56,   -56,     0,     0,     0,   -56,     0,     0,
       0,     0,     0,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
     -56,   -56,   -56,   -56,   -56,   -56,   -55,     0,     0,     0,
       0,     0,   -76,   -55,     0,     0,   -55,   -55,     0,   -76,
       0,     0,   -76,   -76,     0,     0,     0,   -55,     0,     0,
       0,     0,     0,   -76,   -55,   -55,   -55,   -55,   -55,   -55,
     -76,   -76,   -76,   -76,   -76,   -76,   -77,     0,     0,     0,
       0,     0,   -58,   -77,     0,     0,   -77,   -77,     0,   -58,
       0,     0,   -58,   -58,     0,     0,     0,   -77,     0,     0,
       0,     0,     0,   -58,   -77,   -77,   -77,   -77,   -77,   -77,
     -58,   -58,   -58,   -58,   -58,   -58,   -78,     0,     0,     0,
       0,     0,   -50,   -78,     0,     0,   -78,   -78,     0,   -50,
       0,     0,   137,   138,     0,     0,     0,   -78,     0,     0,
       0,     0,     0,   139,   -78,   -78,   -78,   -78,   -78,   -78,
     -50,   -50,   140,   141,   -50,   -50,   -54,     0,     0,     0,
       0,     0,   -66,   -54,     0,     0,   -54,   -54,     0,   -66,
       0,     0,   -66,   -66,     0,     0,     0,   -54,     0,     0,
       0,     0,     0,   -66,   -54,   -54,   -54,   -54,   -54,   -54,
     -66,   -66,   -66,   -66,   -66,   -66,   -67,     0,     0,     0,
       0,     0,   -68,   -67,     0,     0,   -67,   -67,     0,   -68,
       0,     0,   -68,   -68,     0,     0,     0,   -67,     0,     0,
       0,     0,     0,   -68,   -67,   -67,   -67,   -67,   -67,   -67,
     -68,   -68,   -68,   -68,   -68,   -68,   -69,     0,     0,     0,
       0,     0,   -65,   -69,     0,     0,   -69,   -69,     0,   -65,
       0,     0,   -65,   -65,     0,     0,     0,   -69,     0,     0,
       0,     0,     0,   -65,   -69,   -69,   -69,   -69,   -69,   -69,
     -65,   -65,   -65,   -65,   -65,   -65,   -57,     0,     0,     0,
       0,     0,   -51,     0,     0,     0,   -57,   -57,     0,     0,
       0,     0,   137,   138,     0,     0,     0,   -57,     0,     0,
       0,     0,     0,   139,   -57,   -57,   -57,   -57,   -57,   -57,
     -51,   -51,   140,   141,   -51,   -51,   -55,     0,     0,     0,
       0,     0,   -76,     0,     0,     0,   -55,   -55,     0,     0,
       0,     0,   -76,   -76,     0,     0,     0,   -55,     0,     0,
       0,     0,     0,   -76,   -55,   -55,   -55,   -55,   -55,   -55,
     -76,   -76,   -76,   -76,   -76,   -76,   -77,     0,     0,     0,
       0,     0,   -58,     0,     0,     0,   -77,   -77,     0,     0,
       0,     0,   -58,   -58,     0,     0,     0,   -77,     0,     0,
       0,     0,     0,   -58,   -77,   -77,   -77,   -77,   -77,   -77,
     -58,   -58,   -58,   -58,   -58,   -58,   -78,     0,     0,     0,
       0,     0,   -50,     0,     0,     0,   -78,   -78,     0,     0,
       0,     0,   137,   138,     0,     0,     0,   -78,     0,     0,
       0,     0,     0,   139,   -78,   -78,   -78,   -78,   -78,   -78,
     -50,   -50,   140,   141,   -50,   -50,   -54,     0,     0,     0,
       0,     0,   -66,     0,     0,     0,   -54,   -54,     0,     0,
       0,     0,   -66,   -66,     0,     0,     0,   -54,     0,     0,
       0,     0,     0,   -66,   -54,   -54,   -54,   -54,   -54,   -54,
     -66,   -66,   -66,   -66,   -66,   -66,   -67,     0,     0,     0,
       0,     0,   -68,     0,     0,     0,   -67,   -67,     0,     0,
       0,     0,   -68,   -68,     0,     0,     0,   -67,     0,     0,
       0,     0,     0,   -68,   -67,   -67,   -67,   -67,   -67,   -67,
     -68,   -68,   -68,   -68,   -68,   -68,   -69,     0,     0,     0,
       0,     0,   -65,     0,     0,     0,   -69,   -69,     0,     0,
       0,     0,   -65,   -65,     0,     0,     0,   -69,     0,     0,
       0,     0,     0,   -65,   -69,   -69,   -69,   -69,   -69,   -69,
     -65,   -65,   -65,   -65,   -65,   -65,   -86,   -86,   -86,   -86,
     -86,     0,   -86,     0,     0,   -86,   -86,     0,     0,   -87,
     -87,   -87,   -87,   -87,     0,   -87,   -86,     0,   -87,   -87,
       0,     0,     0,   -86,   -86,   -86,   -86,   -86,   -86,   -87,
       0,     0,     0,     0,     0,     0,   -87,   -87,   -87,   -87,
     -87,   -87,   -81,   -81,   -81,   355,   356,     0,   -81,     0,
       0,   -81,   -81,     0,     0,   -84,   -84,   -84,   -84,   -84,
       0,   -84,   -81,     0,   -84,   -84,     0,     0,     0,   -81,
     -81,   -81,   -81,   -81,   -81,   -84,     0,     0,     0,     0,
       0,     0,   -84,   -84,   -84,   -84,   -84,   -84,   -88,   -88,
     -88,   -88,   -88,     0,   -88,     0,     0,   -88,   -88,     0,
       0,   -85,   -85,   -85,   -85,   -85,     0,   -85,   -88,     0,
     -85,   -85,     0,     0,     0,   -88,   -88,   -88,   -88,   -88,
     -88,   -85,     0,     0,     0,     0,     0,     0,   -85,   -85,
     -85,   -85,   -85,   -85,   -79,   -79,   -79,   355,   356,     0,
     -79,     0,     0,   -79,   -79,     0,     0,   -80,   -80,   -80,
     355,   356,     0,   -80,   -79,     0,   -80,   -80,     0,     0,
       0,   -79,   -79,   -79,   -79,   -79,   -79,   -80,     0,     0,
       0,     0,     0,     0,   -80,   -80,   -80,   -80,   -80,   -80,
     -89,   -89,   -89,   -89,   -89,     0,   -89,     0,     0,   -89,
     -89,     0,     0,   -82,   -82,   -82,   -82,   -82,     0,   -82,
     -89,     0,   -82,   -82,     0,     0,     0,   -89,   -89,   -89,
     -89,   -89,   -89,   -82,     0,     0,     0,     0,     0,     0,
     -82,   -82,   -82,   -82,   -82,   -82,   -83,   -83,   -83,   -83,
     -83,     0,   -83,     0,     0,   -83,   -83,     0,     0,   -56,
     256,   257,     0,     0,     0,   -56,   -83,     0,   -56,   -56,
       0,     0,     0,   -83,   -83,   -83,   -83,   -83,   -83,   -56,
       0,     0,     0,     0,     0,     0,   -56,   -56,   -56,   -56,
     -56,   -56,   -57,     0,     0,     0,     0,     0,   -57,     0,
       0,   -57,   -57,     0,     0,   -51,     0,     0,     0,     0,
       0,   -51,   -57,     0,   137,   138,     0,     0,     0,   -57,
     -57,   -57,   -57,   -57,   -57,   139,     0,     0,     0,     0,
       0,     0,   -51,   -51,   140,   141,   -51,   -51,   -55,     0,
       0,     0,     0,     0,   -55,     0,     0,   -55,   -55,     0,
       0,   -58,     0,     0,     0,     0,     0,   -58,   -55,     0,
     -58,   -58,     0,     0,     0,   -55,   -55,   -55,   -55,   -55,
     -55,   -58,     0,     0,     0,     0,     0,     0,   -58,   -58,
     -58,   -58,   -58,   -58,   -50,     0,     0,     0,     0,     0,
     -50,     0,     0,   137,   138,     0,     0,   -54,     0,     0,
       0,     0,     0,   -54,   139,     0,   -54,   -54,     0,     0,
       0,   -50,   -50,   140,   141,   -50,   -50,   -54,     0,     0,
       0,     0,     0,     0,   -54,   -54,   -54,   -54,   -54,   -54,
     -76,     0,     0,     0,     0,     0,   -76,     0,     0,   -76,
     -76,     0,     0,   -77,     0,     0,     0,     0,     0,   -77,
     -76,     0,   -77,   -77,     0,     0,     0,   -76,   -76,   -76,
     -76,   -76,   -76,   -77,     0,     0,     0,     0,     0,     0,
     -77,   -77,   -77,   -77,   -77,   -77,   -78,     0,     0,     0,
       0,     0,   -78,     0,     0,   -78,   -78,     0,     0,   -65,
       0,     0,     0,     0,     0,   -65,   -78,     0,   -65,   -65,
       0,     0,     0,   -78,   -78,   -78,   -78,   -78,   -78,   -65,
       0,     0,     0,     0,     0,     0,   -65,   -65,   -65,   -65,
     -65,   -65,   -66,     0,     0,     0,     0,     0,   -66,     0,
       0,   -66,   -66,     0,     0,   -67,     0,     0,     0,     0,
       0,   -67,   -66,     0,   -67,   -67,     0,     0,     0,   -66,
     -66,   -66,   -66,   -66,   -66,   -67,     0,     0,     0,     0,
       0,     0,   -67,   -67,   -67,   -67,   -67,   -67,   -68,     0,
       0,     0,     0,     0,   -68,     0,     0,   -68,   -68,     0,
       0,   -69,     0,     0,     0,     0,     0,   -69,   -68,     0,
     -69,   -69,     0,     0,     0,   -68,   -68,   -68,   -68,   -68,
     -68,   -69,     0,     0,     0,     0,     0,     0,   -69,   -69,
     -69,   -69,   -69,   -69
};

static const yytype_int16 yycheck[] =
{
       0,    96,    18,     3,   240,    69,   147,   239,   259,     7,
      96,    27,    69,   253,     5,    13,     6,    69,     9,     7,
       6,    37,   147,    13,     6,    13,    69,    16,    44,    45,
     129,    47,   131,     7,   129,   160,     6,     6,     5,    13,
      38,    39,     9,    13,    69,    21,   171,   172,    64,    40,
      41,    42,    38,    69,   305,    71,    38,    39,    69,     5,
     296,    41,     5,   295,    38,   129,     9,     0,   132,    38,
      39,    41,   129,    40,    41,    42,    92,   129,     6,     5,
      96,    92,     5,     8,     9,    13,   129,     6,    14,   329,
     142,    14,    41,   136,    40,    41,    42,    40,    41,    42,
       3,   341,    27,     5,   129,    21,    27,     9,   124,   125,
      38,    39,   128,   129,     6,   131,   132,   133,   129,    38,
     136,    13,   133,    44,    45,     5,   142,   367,     5,     9,
       7,   147,    41,    18,     6,   124,     0,     1,    40,    41,
      42,    13,   158,     5,   160,     6,    38,   147,     0,     1,
      71,     6,    37,   393,     5,   171,   172,    21,    13,   175,
      40,    41,    42,     5,     5,    41,     7,     5,     9,    21,
     410,   160,     0,     1,    15,     5,   228,    38,    39,   195,
      21,    22,   171,   172,     5,   228,     5,    28,    29,    30,
      31,     7,     6,    21,   258,     5,     5,    13,   214,    40,
      41,    42,     6,   228,   125,     7,   258,   128,     5,    13,
     226,    13,   228,     7,     5,   258,     5,   228,     9,    40,
      41,    42,   321,     5,    38,    39,    18,     9,     5,   281,
      40,    41,    42,   258,   470,    27,     7,   158,   281,   124,
       7,     6,   258,   259,   260,    37,    13,   258,    13,    40,
      41,    42,    44,    45,     6,    47,   281,   321,    40,    41,
      42,    13,     5,   279,   321,   281,     9,     0,     1,   321,
     281,     5,    64,    38,    39,   160,     5,    69,   321,    71,
       0,     1,     6,   519,     5,     7,   171,   172,    21,   305,
      41,    13,     5,     7,   310,     7,   321,    40,    41,    42,
      92,    21,     0,     1,    96,   321,    40,    41,    42,    41,
     321,    40,    41,    42,    38,    39,   368,   369,   370,    40,
      41,    42,     7,    21,     7,   368,   369,    40,    41,    42,
       0,     1,   124,   125,   574,     7,   128,   129,     6,   131,
     132,   133,   428,   368,   136,    13,     7,     7,   412,     7,
     142,    21,   368,   369,   370,   147,     5,   368,    27,     7,
     412,   413,   414,   415,     6,   429,   158,   383,   160,   412,
     413,   414,   429,     6,   259,     6,     6,   429,     6,   171,
     172,     6,    13,   175,     7,    13,   429,   412,   413,   310,
      13,    40,    41,    42,     7,   411,   412,   413,   414,   415,
      13,   412,   413,   195,   429,   421,     6,   423,   424,    41,
      38,    39,   428,   429,   430,    38,    39,     6,   429,     6,
     305,     6,   214,     8,     9,    10,    11,     6,    13,     7,
       6,    16,    17,     7,   226,    13,   228,   532,     7,    13,
       6,   582,    27,   584,    13,     6,   532,    13,     7,    34,
      35,    36,    37,    38,    39,    21,     7,   582,     7,   584,
     601,    66,    67,    68,    38,    39,   258,   259,   260,   610,
     611,     0,     1,    34,    35,   491,   601,    38,    39,     0,
       1,   497,     7,     7,   583,   610,   611,   279,   583,   281,
     411,    14,    21,     8,     9,    10,    11,     5,   383,     6,
      21,     9,   423,   424,    12,     7,    13,     7,     7,   430,
       7,    13,    27,   305,    22,    23,   532,     6,   310,   583,
      28,    29,    30,    31,    13,     7,   583,    16,    17,   321,
       6,   583,    40,    41,    42,     7,   421,    13,    27,     7,
     583,    13,     0,     1,    27,    34,    35,    36,    37,    38,
      39,     5,    27,     6,     8,     9,    10,    11,   583,     6,
      13,    44,    45,    21,    47,    48,   582,   583,   584,     7,
     491,    41,   583,    27,     6,    13,   368,   369,   370,     6,
       6,    64,   582,     6,   584,   601,    69,    13,    71,     6,
      13,   383,     6,     6,   610,   611,    13,     6,    81,    13,
      13,   601,    85,    86,    87,    88,     6,     6,     5,    92,
     610,   611,     7,    96,    13,    38,    39,     5,    13,   411,
     412,   413,   414,   415,    38,    39,     6,     6,     6,   421,
       5,   423,   424,     6,    13,    13,   428,   429,   430,     6,
      13,     7,   125,    38,    39,   128,   129,    13,   131,   132,
     133,     5,     5,   136,     1,     6,     6,     4,     7,   142,
       6,    34,    35,    13,    13,    38,    39,    13,    27,     6,
      27,    18,    19,    20,    21,   158,    13,    24,    25,    26,
       6,    28,    29,    30,    31,    32,    33,    13,     5,    38,
      39,     5,   175,   176,    41,     9,     5,    27,    12,   491,
       8,     9,    10,    11,     6,   497,     8,     9,    22,    23,
       5,    13,   195,   196,    28,    29,    30,    31,     6,    27,
      27,   326,   327,   328,     7,    13,    40,    41,    42,     6,
      13,   214,   215,   338,   339,   340,    13,    27,    27,     6,
     532,     8,     9,   226,   227,   228,     5,   352,   353,   354,
       9,    34,    35,    12,     5,    38,    39,     5,     5,   364,
     365,   366,     7,    22,    23,   248,   249,   250,    13,    28,
      29,    30,    31,   256,   257,   258,     5,   260,   261,     5,
       5,    40,    41,    42,     5,   390,   391,   392,     6,     5,
     582,   583,   584,     6,     6,    13,   279,   280,   281,     5,
      13,    13,   407,   408,   409,     8,     9,    10,    11,   601,
       6,     5,     1,     6,     6,     4,     6,    13,   610,   611,
      13,    13,   427,    13,    27,     7,     6,   310,     7,    18,
      19,    20,    21,    13,    13,    24,    25,    26,   321,    28,
      29,    30,    31,    32,    33,     7,     6,   330,   331,     6,
       6,   334,    41,    13,     5,     5,    13,    13,    41,    16,
      17,   344,   345,     5,     6,   348,     8,     9,    10,    11,
      27,    13,   355,   356,     5,     5,   359,    34,    35,    36,
      37,    38,    39,     5,     5,   368,   369,   370,   371,   372,
     373,   374,    41,     5,     7,     7,     8,     9,    10,    11,
      13,    13,    14,   386,    16,    17,     6,     5,     8,     9,
       7,   394,   395,   396,   397,    27,    13,   400,     6,     5,
       8,     9,    34,    35,    36,    37,    38,    39,   411,   412,
     413,   414,   415,   416,   417,   418,   419,    27,     5,     5,
     423,   424,     7,     8,     9,   428,   429,   430,    13,     7,
       8,     9,     5,     5,    44,    45,     9,    47,     6,    12,
       5,     8,     9,    10,    11,     7,   571,   572,   573,    22,
      23,    13,    41,     6,    64,    28,    29,    30,    31,    69,
      27,    71,     8,     9,    10,    11,     7,    40,    41,    42,
      41,    81,    13,     7,     6,    85,    86,    41,     6,    13,
       1,    27,    92,     4,    41,    41,    96,     5,   491,     7,
       8,     9,    10,    11,   497,   498,     6,    18,    19,    20,
      21,     6,    14,    24,    25,    26,    41,    28,    29,    30,
      31,    32,    33,     7,     6,   125,     8,     9,   128,   129,
      41,   131,   132,   133,    41,     7,   136,     1,     6,   532,
       4,     6,   142,     5,    27,     7,     8,     9,    10,    11,
       6,    13,     8,     9,    18,    19,    20,    21,   158,     6,
      24,    25,    26,     6,    28,    29,    30,    31,    32,    33,
       8,     9,    10,    11,   567,   175,     6,    41,     8,     9,
      10,    11,   575,   576,   577,   578,    16,    17,     6,    27,
     583,     6,     6,     1,     6,   195,     4,    27,     7,     8,
       9,    10,    11,     6,    34,    35,    36,    37,    38,    39,
      18,    19,    20,    21,   214,     6,    24,    25,    26,     6,
      28,    29,    30,    31,    32,    33,   226,     6,   228,     8,
       9,    10,    11,    41,     8,     9,    10,    11,     7,     6,
       8,     9,    10,    11,     1,     6,     6,     4,   248,   249,
     250,     6,     6,    27,     8,     9,   256,   257,   258,    27,
     260,    18,    19,    20,    21,     6,     5,    24,    25,    26,
       6,    28,    29,    30,    31,    32,    33,     6,     6,   279,
       6,   281,     8,     9,    41,     6,     6,    27,     6,     8,
       9,    10,    11,     6,     8,     9,    10,    11,     8,     9,
      10,    11,     5,     6,    44,    45,     9,    47,    27,     6,
     310,     6,    15,    27,     5,     5,     5,    27,    21,    22,
       6,   321,     8,     9,    64,    28,    29,    30,    31,    69,
       6,    71,     8,     9,   334,     6,     6,    40,    41,    42,
       5,    81,   342,   343,     9,     6,     6,    12,   348,     6,
       6,     6,    92,     6,     6,    27,    96,    22,    23,   359,
      27,    27,     6,    28,    29,    30,    31,    41,   368,   369,
     370,   371,   372,    27,     7,    40,    41,    42,     5,     6,
      27,     8,     9,    10,    11,   125,   386,     7,   128,   129,
       7,   131,   132,   133,   394,   395,   136,     6,     6,     6,
     400,     6,   142,     8,     9,    10,    11,     6,    13,     3,
      -1,   411,   412,   413,   414,   415,   416,   417,   158,    -1,
      -1,    -1,    -1,   423,   424,    27,    -1,    -1,   428,   429,
     430,    -1,    -1,     1,    -1,   175,     4,     7,     8,     9,
      10,    11,    44,    45,    -1,    47,    -1,    -1,    27,    -1,
      18,    19,    20,    21,    -1,   195,    24,    25,    26,    -1,
      28,    29,    30,    31,    32,    44,    45,    -1,    47,    71,
      -1,    -1,    -1,    41,   214,    -1,     1,    -1,     6,     4,
       8,     9,    10,    11,    -1,    64,   226,    -1,   228,    -1,
      69,   491,    71,    18,    19,    20,    21,   497,    -1,    24,
      25,    26,    -1,    28,    29,    30,    31,    32,    33,    -1,
     250,    -1,    -1,    92,    -1,    -1,    41,    96,   258,    -1,
     260,    -1,    -1,   125,    -1,     6,   128,     8,     9,    10,
      11,     6,   532,     8,     9,    10,    11,    -1,    13,   279,
       6,   281,     8,     9,    10,    11,   125,    13,    -1,   128,
     129,    -1,   131,   132,   133,    -1,   158,   136,     7,     8,
       9,    10,    11,   142,    13,    -1,    -1,   567,    -1,    -1,
     310,    -1,    -1,   175,     5,   575,   576,    -1,     9,   158,
      -1,   321,    -1,   583,    15,     7,     8,     9,    10,    11,
      21,    22,    -1,   195,   334,    -1,   175,    28,    29,    30,
      31,     7,     8,     9,    10,    11,    -1,    13,   348,    40,
      41,    42,   214,    -1,     1,    -1,   195,     4,     6,   359,
       8,     9,    10,    11,   226,    13,    -1,    -1,   368,   369,
     370,    18,    19,    20,    21,   214,    -1,    24,    25,    26,
      -1,    28,    29,    30,    31,    32,   386,   226,     6,   228,
       8,     9,    10,    11,    41,    13,    -1,    -1,   260,     6,
     400,     8,     9,    10,    11,     6,    13,     8,     9,    10,
      11,   411,   412,   413,   414,   415,    -1,   279,    -1,   258,
      -1,   260,    -1,   423,   424,    -1,    -1,    -1,   428,   429,
     430,    -1,     1,    -1,     6,     4,     8,     9,    10,    11,
     279,    13,   281,     7,     8,     9,    10,    11,   310,    18,
      19,    20,    21,    -1,    -1,    24,    25,    26,    -1,    28,
      29,    30,    31,    32,    33,     6,    -1,     8,     9,    10,
      11,   310,    41,    -1,    -1,     1,    -1,    -1,     4,    -1,
      -1,     6,   321,     8,     9,    10,    11,    -1,    13,    -1,
      -1,   491,    18,    19,    20,    21,    -1,   497,    24,    25,
      26,    -1,    28,    29,    30,    31,    32,    33,     7,     8,
       9,    10,    11,    -1,    13,    41,     1,    -1,     6,     4,
       8,     9,    10,    11,    -1,    13,    -1,    -1,    -1,   368,
     369,   370,   532,    18,    19,    20,    21,    -1,    -1,    24,
      25,    26,    -1,    28,    29,    30,    31,    32,    33,   411,
       6,    -1,     8,     9,    10,    11,    41,    13,    -1,    -1,
      -1,   423,   424,    -1,    -1,    -1,    -1,   567,   430,    -1,
      -1,    -1,   411,   412,   413,   414,   415,     1,    -1,    -1,
       4,    -1,    -1,   583,   423,   424,    -1,    -1,    -1,   428,
     429,   430,    -1,    -1,    18,    19,    20,    21,    -1,    -1,
      24,    25,    26,    -1,    28,    29,    30,    31,    32,    33,
      -1,    -1,    -1,     1,    -1,    -1,     4,    41,    -1,     6,
      -1,     8,     9,    10,    11,    -1,    13,    -1,    -1,   491,
      18,    19,    20,    21,    -1,   497,    24,    25,    26,    -1,
      28,    29,    30,    31,    32,    33,     1,    -1,    -1,     4,
      -1,    -1,   491,    41,    -1,    -1,    -1,     6,   497,     8,
       9,    10,    11,    18,    19,    20,    21,    -1,    -1,    24,
      25,    26,    -1,    28,    29,    30,    31,    32,    33,     1,
      -1,    -1,     4,    -1,    -1,    -1,    41,    -1,     7,     8,
       9,    10,    11,   532,    13,    -1,    18,    19,    20,    21,
      -1,    -1,    24,    25,    26,    -1,    28,    29,    30,    31,
      32,    33,     6,    -1,     8,     9,    10,    11,     1,    41,
      -1,     4,     7,     8,     9,    10,    11,     6,    13,     8,
       9,    10,    11,    -1,    -1,    18,    19,    20,    21,    -1,
      -1,    24,    25,    26,   583,    28,    29,    30,    31,    32,
      33,     1,    -1,    -1,     4,    -1,    -1,    -1,    41,     7,
       8,     9,    10,    11,    -1,    13,    -1,    -1,    18,    19,
      20,    21,    -1,    -1,    24,    25,    26,    -1,    28,    29,
      30,    31,    32,    33,     1,    -1,    -1,     4,    -1,    -1,
      -1,    41,     7,     8,     9,    10,    11,    -1,    13,    -1,
      -1,    18,    19,    20,    21,    -1,    -1,    24,    25,    26,
      -1,    28,    29,    30,    31,    32,    33,     1,    -1,    -1,
       4,    -1,    -1,    -1,    41,     7,     8,     9,    10,    11,
      -1,    13,    -1,    -1,    18,    19,    20,    21,    -1,    -1,
      24,    25,    26,    -1,    28,    29,    30,    31,    32,    33,
       1,    -1,    -1,     4,    -1,    -1,    -1,    41,     7,     8,
       9,    10,    11,    -1,    13,    -1,    -1,    18,    19,    20,
      21,    -1,    -1,    24,    25,    26,    -1,    28,    29,    30,
      31,    32,    33,     1,    -1,    -1,     4,    -1,    -1,    -1,
      41,     7,     8,     9,    10,    11,    -1,    13,    -1,    -1,
      18,    19,    20,    21,    -1,    -1,    24,    25,    26,    -1,
      28,    29,    30,    31,    32,    33,     1,    -1,    -1,     4,
      -1,    -1,    -1,    41,     7,     8,     9,    10,    11,    -1,
      13,    -1,    -1,    18,    19,    20,    21,    -1,    -1,    24,
      25,    26,    -1,    28,    29,    30,    31,    32,    33,     1,
      -1,    -1,     4,    -1,    -1,     6,    41,     8,     9,    10,
      11,     7,     8,     9,    10,    11,    18,    19,    20,    21,
      -1,    -1,    24,    25,    26,    -1,    28,    29,    30,    31,
      32,     1,    -1,     6,     4,     8,     9,    10,    11,    41,
       6,    -1,     8,     9,    10,    11,    -1,    -1,    18,    19,
      20,    21,    -1,    -1,    24,    25,    26,    -1,    28,    29,
      30,    31,    32,     1,    -1,    -1,     4,    -1,    -1,    -1,
      -1,    41,     7,     8,     9,    10,    11,    -1,    -1,    -1,
      18,    19,    20,    21,    -1,    -1,    24,    25,    26,    -1,
      28,    29,    30,    31,    32,     1,    -1,    -1,     4,    -1,
      -1,    -1,    -1,    41,     7,     8,     9,    10,    11,    -1,
      -1,    -1,    18,    19,    20,    21,    -1,    -1,    24,    25,
      26,    -1,    28,    29,    30,    31,    32,     1,    -1,    -1,
       4,    -1,    -1,    -1,    -1,    41,     7,     8,     9,    10,
      11,    -1,    -1,    -1,    18,    19,    20,    21,    -1,    -1,
      24,    25,    26,    -1,    28,    29,    30,    31,    32,     1,
      -1,    -1,     4,    -1,    -1,    -1,    -1,    41,     7,     8,
       9,    10,    11,    -1,    -1,    -1,    18,    19,    20,    21,
      -1,    -1,    24,    25,    26,    -1,    28,    29,    30,    31,
      32,     1,    -1,    -1,     4,    -1,    -1,    -1,    -1,    41,
       7,     8,     9,    10,    11,    -1,    -1,    -1,    18,    19,
      20,    21,    -1,    -1,    24,    25,    26,    -1,    28,    29,
      30,    31,    32,     1,    -1,    -1,     4,    -1,    -1,    -1,
      -1,    41,     7,     8,     9,    10,    11,    -1,    -1,    -1,
      18,    19,    20,    21,    -1,    -1,    24,    25,    26,    -1,
      28,    29,    30,    31,    32,     1,    -1,     3,    -1,    -1,
      -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    18,    19,    20,    21,    -1,    -1,    24,    25,
      26,    -1,    28,    29,    30,    31,    32,     1,    -1,     3,
      -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    18,    19,    20,    21,    -1,    -1,
      24,    25,    26,    -1,    28,    29,    30,    31,    32,     1,
      -1,    -1,     4,    -1,    -1,    -1,    -1,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    19,    20,    21,
      -1,    -1,    24,    25,    26,    -1,    28,    29,    30,    31,
      32,     1,    -1,    -1,     4,    -1,    -1,    -1,    -1,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,    19,
      20,    21,    -1,    -1,    24,    25,    26,    -1,    28,    29,
      30,    31,    32,     1,    -1,    -1,     4,    -1,    -1,    -1,
      -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      18,    19,    20,    21,    -1,    -1,    24,    25,    26,    -1,
      28,    29,    30,    31,    32,     1,    -1,    -1,     4,    -1,
      -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    18,    19,    20,    21,    -1,    -1,    24,    25,
      26,    -1,    28,    29,    30,    31,    32,     1,    -1,    -1,
       4,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    18,    19,    20,    21,    -1,    -1,
      24,    25,    26,    -1,    28,    29,    30,    31,    32,     1,
      -1,    -1,     4,    -1,    -1,    -1,    -1,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    19,    20,    21,
      -1,    -1,    24,    25,    26,    -1,    28,    29,    30,    31,
      32,     1,    -1,    -1,     4,    -1,    -1,    -1,    -1,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,    19,
      20,    21,    -1,    -1,    24,    25,    26,    -1,    28,    29,
      30,    31,    32,     1,    -1,    -1,     4,    -1,    -1,    -1,
      -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      18,    19,    20,    21,    -1,    -1,    24,    25,    26,    -1,
      28,    29,    30,    31,    32,     1,    -1,    -1,     4,    -1,
      -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    18,    19,    20,    21,    -1,    -1,    24,    25,
      26,    -1,    28,    29,    30,    31,    32,     1,    -1,    -1,
       4,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    18,    19,    20,    21,    -1,    -1,
      24,    25,    26,    -1,    28,    29,    30,    31,    32,     1,
      -1,    -1,     4,    -1,    -1,    -1,    -1,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    19,    20,    21,
      -1,    -1,    24,    25,    26,    -1,    28,    29,    30,    31,
      32,     1,    -1,    -1,     4,    -1,    -1,    -1,    -1,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,    19,
      20,    21,    -1,    -1,    24,    25,    26,    -1,    28,    29,
      30,    31,    32,     1,    -1,    -1,     4,    -1,    -1,    -1,
      -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      18,    19,    20,    21,    -1,    -1,    24,    25,    26,    -1,
      28,    29,    30,    31,    32,     1,    -1,    -1,     4,    -1,
      -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    18,    19,    20,    21,    -1,    -1,    24,    25,
      26,    -1,    28,    29,    30,    31,    32,     1,    -1,    -1,
       4,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    18,    19,    20,    21,    -1,    -1,
      24,    25,    26,    -1,    28,    29,    30,    31,    32,     1,
      -1,    -1,     4,    -1,    -1,    -1,    -1,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    19,    20,    21,
      -1,    -1,    24,    25,    26,    -1,    28,    29,    30,    31,
      32,     1,    -1,    -1,     4,    -1,    -1,    -1,    -1,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,    19,
      20,    21,    -1,    -1,    24,    25,    26,    -1,    28,    29,
      30,    31,    32,     5,    -1,     7,    -1,     9,     5,    -1,
       7,    41,     9,    15,    -1,    -1,    -1,    -1,    15,    21,
      22,    -1,    -1,    -1,    21,    22,    28,    29,    30,    31,
      -1,    28,    29,    30,    31,    -1,    -1,    -1,    40,    41,
      42,    -1,    -1,    40,    41,    42,     5,    -1,     7,    -1,
       9,     5,     6,    -1,    -1,     9,    15,    -1,    -1,    -1,
      -1,    15,    21,    22,    -1,    -1,    -1,    21,    22,    28,
      29,    30,    31,    -1,    28,    29,    30,    31,    -1,    -1,
      -1,    40,    41,    42,    -1,    -1,    40,    41,    42,     5,
       6,    -1,    -1,     9,     5,     6,    -1,    -1,     9,    15,
      -1,    -1,    -1,    -1,    15,    21,    22,    -1,    -1,    -1,
      21,    22,    28,    29,    30,    31,    -1,    28,    29,    30,
      31,    -1,    -1,     5,    40,    41,    42,     9,     5,    40,
      41,    42,     9,    15,    -1,    -1,    -1,    -1,    15,    21,
      22,    -1,    -1,    -1,    -1,    22,    28,    29,    30,    31,
      -1,    28,    29,    30,    31,    -1,    -1,     5,    40,    41,
      42,     9,     5,    40,    41,    42,     9,    15,    -1,    -1,
      -1,    -1,    15,    -1,    22,    -1,    -1,    -1,    -1,    22,
      28,    29,    30,    31,    -1,    28,    29,    30,    31,    -1,
      -1,     5,    40,    41,    42,     9,     5,    40,    41,    42,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    -1,
      -1,    -1,    -1,    22,    28,    29,    30,    31,    -1,    28,
      29,    30,    31,    -1,    -1,     5,    40,    41,    42,     9,
       5,    40,    41,    42,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    22,    -1,    -1,    -1,    -1,    22,    28,    29,
      30,    31,    -1,    28,    29,    30,    31,    -1,    -1,     5,
      40,    41,    42,     9,     5,    40,    41,    42,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    -1,    -1,    -1,
      -1,    22,    28,    29,    30,    31,    -1,    28,    29,    30,
      31,    -1,    -1,     5,    40,    41,    42,     9,     5,    40,
      41,    42,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    -1,    -1,    -1,    -1,    22,    28,    29,    30,    31,
      -1,    28,    29,    30,    31,    -1,    -1,     5,    40,    41,
      42,     9,     5,    40,    41,    42,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    22,    -1,    -1,    -1,    -1,    22,
      28,    29,    30,    31,    -1,    28,    29,    30,    31,    -1,
      -1,    -1,    40,    41,    42,    -1,    -1,    40,    41,    42,
       5,     6,    -1,     8,     9,    10,    11,    -1,    13,    14,
      -1,    16,    17,     5,    -1,     7,     8,     9,    10,    11,
      -1,    13,    27,    -1,    16,    17,    -1,    -1,    -1,    34,
      35,    36,    37,    38,    39,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    34,    35,    36,    37,    38,    39,     5,     6,
      -1,     8,     9,    10,    11,    -1,    13,    -1,    -1,    16,
      17,     5,     6,    -1,     8,     9,    10,    11,    -1,    -1,
      27,    -1,    16,    17,    -1,    -1,    -1,    34,    35,    36,
      37,    38,    39,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      34,    35,    36,    37,    38,    39,     6,    -1,     8,     9,
      10,    11,    -1,    13,    -1,    -1,    16,    17,    -1,     6,
      -1,     8,     9,    10,    11,    -1,    13,    27,    -1,    16,
      17,    -1,    -1,    -1,    34,    35,    36,    37,    38,    39,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,    36,
      37,    38,    39,     6,    -1,     8,     9,    10,    11,    -1,
      13,    -1,    -1,    16,    17,    -1,     6,    -1,     8,     9,
      10,    11,    -1,    13,    27,    -1,    16,    17,    -1,    -1,
      -1,    34,    35,    36,    37,    38,    39,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,    39,
       6,    -1,     8,     9,    10,    11,    -1,    13,    -1,    -1,
      16,    17,    -1,     6,    -1,     8,     9,    10,    11,    -1,
      13,    27,    -1,    16,    17,    -1,    -1,    -1,    34,    35,
      36,    37,    38,    39,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    34,    35,    36,    37,    38,    39,     6,    -1,     8,
       9,    10,    11,    -1,    13,    -1,    -1,    16,    17,    -1,
       6,    -1,     8,     9,    10,    11,    -1,    13,    27,    -1,
      16,    17,    -1,    -1,    -1,    34,    35,    36,    37,    38,
      39,    27,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,
      36,    37,    38,    39,     6,    -1,     8,     9,    10,    11,
      -1,    13,    -1,    -1,    16,    17,    -1,     6,    -1,     8,
       9,    10,    11,    -1,    13,    27,    -1,    16,    17,    -1,
      -1,    -1,    34,    35,    36,    37,    38,    39,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,
      39,     6,    -1,     8,     9,    10,    11,    -1,    -1,    -1,
      -1,    16,    17,    -1,     6,    -1,     8,     9,    10,    11,
      -1,    -1,    27,    -1,    16,    17,    -1,    -1,    -1,    34,
      35,    36,    37,    38,    39,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    34,    35,    36,    37,    38,    39,     6,    -1,
       8,     9,    10,    11,    -1,    -1,    -1,    -1,    16,    17,
      -1,     6,    -1,     8,     9,    10,    11,    -1,    -1,    27,
      -1,    16,    17,    -1,    -1,    -1,    34,    35,    36,    37,
      38,    39,    27,    -1,    -1,    -1,    -1,    -1,    -1,    34,
      35,    36,    37,    38,    39,     6,    -1,     8,     9,    10,
      11,    -1,    -1,    -1,    -1,    16,    17,    -1,     6,    -1,
       8,     9,    10,    11,    -1,    -1,    27,    -1,    16,    17,
      -1,    -1,    -1,    34,    35,    36,    37,    38,    39,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    34,    35,    36,    37,
      38,    39,     6,    -1,     8,     9,    10,    11,    -1,    -1,
      -1,    -1,    16,    17,    -1,     6,    -1,     8,     9,    10,
      11,    -1,    -1,    27,    -1,    16,    17,    -1,    -1,    -1,
      34,    35,    36,    37,    38,    39,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    34,    35,    36,    37,    38,    39,     6,
      -1,     8,     9,    10,    11,    -1,    -1,    -1,    -1,    16,
      17,    -1,     6,    -1,     8,     9,    10,    11,    -1,    -1,
      27,    -1,    16,    17,    -1,    -1,    -1,    34,    35,    36,
      37,    38,    39,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      34,    35,    36,    37,    38,    39,     6,    -1,     8,     9,
      -1,    -1,     6,    13,     8,     9,    16,    17,    -1,    -1,
      -1,    -1,    16,    17,    -1,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    27,    34,    35,    36,    37,    38,    39,
      34,    35,    36,    37,    38,    39,     6,    -1,    -1,    -1,
      -1,    -1,     6,    13,    -1,    -1,    16,    17,    -1,    13,
      -1,    -1,    16,    17,    -1,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    27,    34,    35,    36,    37,    38,    39,
      34,    35,    36,    37,    38,    39,     6,    -1,    -1,    -1,
      -1,    -1,     6,    13,    -1,    -1,    16,    17,    -1,    13,
      -1,    -1,    16,    17,    -1,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    27,    34,    35,    36,    37,    38,    39,
      34,    35,    36,    37,    38,    39,     6,    -1,    -1,    -1,
      -1,    -1,     6,    13,    -1,    -1,    16,    17,    -1,    13,
      -1,    -1,    16,    17,    -1,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    27,    34,    35,    36,    37,    38,    39,
      34,    35,    36,    37,    38,    39,     6,    -1,    -1,    -1,
      -1,    -1,     6,    13,    -1,    -1,    16,    17,    -1,    13,
      -1,    -1,    16,    17,    -1,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    27,    34,    35,    36,    37,    38,    39,
      34,    35,    36,    37,    38,    39,     6,    -1,    -1,    -1,
      -1,    -1,     6,    13,    -1,    -1,    16,    17,    -1,    13,
      -1,    -1,    16,    17,    -1,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    27,    34,    35,    36,    37,    38,    39,
      34,    35,    36,    37,    38,    39,     6,    -1,    -1,    -1,
      -1,    -1,     6,    13,    -1,    -1,    16,    17,    -1,    13,
      -1,    -1,    16,    17,    -1,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    27,    34,    35,    36,    37,    38,    39,
      34,    35,    36,    37,    38,    39,     6,    -1,    -1,    -1,
      -1,    -1,     6,    -1,    -1,    -1,    16,    17,    -1,    -1,
      -1,    -1,    16,    17,    -1,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    27,    34,    35,    36,    37,    38,    39,
      34,    35,    36,    37,    38,    39,     6,    -1,    -1,    -1,
      -1,    -1,     6,    -1,    -1,    -1,    16,    17,    -1,    -1,
      -1,    -1,    16,    17,    -1,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    27,    34,    35,    36,    37,    38,    39,
      34,    35,    36,    37,    38,    39,     6,    -1,    -1,    -1,
      -1,    -1,     6,    -1,    -1,    -1,    16,    17,    -1,    -1,
      -1,    -1,    16,    17,    -1,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    27,    34,    35,    36,    37,    38,    39,
      34,    35,    36,    37,    38,    39,     6,    -1,    -1,    -1,
      -1,    -1,     6,    -1,    -1,    -1,    16,    17,    -1,    -1,
      -1,    -1,    16,    17,    -1,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    27,    34,    35,    36,    37,    38,    39,
      34,    35,    36,    37,    38,    39,     6,    -1,    -1,    -1,
      -1,    -1,     6,    -1,    -1,    -1,    16,    17,    -1,    -1,
      -1,    -1,    16,    17,    -1,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    27,    34,    35,    36,    37,    38,    39,
      34,    35,    36,    37,    38,    39,     6,    -1,    -1,    -1,
      -1,    -1,     6,    -1,    -1,    -1,    16,    17,    -1,    -1,
      -1,    -1,    16,    17,    -1,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    27,    34,    35,    36,    37,    38,    39,
      34,    35,    36,    37,    38,    39,     6,    -1,    -1,    -1,
      -1,    -1,     6,    -1,    -1,    -1,    16,    17,    -1,    -1,
      -1,    -1,    16,    17,    -1,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    27,    34,    35,    36,    37,    38,    39,
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
       7,     8,     9,    10,    11,    -1,    13,    -1,    -1,    16,
      17,    -1,    -1,     7,     8,     9,    10,    11,    -1,    13,
      27,    -1,    16,    17,    -1,    -1,    -1,    34,    35,    36,
      37,    38,    39,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      34,    35,    36,    37,    38,    39,     7,     8,     9,    10,
      11,    -1,    13,    -1,    -1,    16,    17,    -1,    -1,     7,
       8,     9,    -1,    -1,    -1,    13,    27,    -1,    16,    17,
      -1,    -1,    -1,    34,    35,    36,    37,    38,    39,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    34,    35,    36,    37,
      38,    39,     7,    -1,    -1,    -1,    -1,    -1,    13,    -1,
      -1,    16,    17,    -1,    -1,     7,    -1,    -1,    -1,    -1,
      -1,    13,    27,    -1,    16,    17,    -1,    -1,    -1,    34,
      35,    36,    37,    38,    39,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    34,    35,    36,    37,    38,    39,     7,    -1,
      -1,    -1,    -1,    -1,    13,    -1,    -1,    16,    17,    -1,
      -1,     7,    -1,    -1,    -1,    -1,    -1,    13,    27,    -1,
      16,    17,    -1,    -1,    -1,    34,    35,    36,    37,    38,
      39,    27,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,
      36,    37,    38,    39,     7,    -1,    -1,    -1,    -1,    -1,
      13,    -1,    -1,    16,    17,    -1,    -1,     7,    -1,    -1,
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
      38,    39,     7,    -1,    -1,    -1,    -1,    -1,    13,    -1,
      -1,    16,    17,    -1,    -1,     7,    -1,    -1,    -1,    -1,
      -1,    13,    27,    -1,    16,    17,    -1,    -1,    -1,    34,
      35,    36,    37,    38,    39,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    34,    35,    36,    37,    38,    39,     7,    -1,
      -1,    -1,    -1,    -1,    13,    -1,    -1,    16,    17,    -1,
      -1,     7,    -1,    -1,    -1,    -1,    -1,    13,    27,    -1,
      16,    17,    -1,    -1,    -1,    34,    35,    36,    37,    38,
      39,    27,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,
      36,    37,    38,    39
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    21,    46,    47,    48,    49,    50,    41,     0,     1,
      48,     5,     7,    21,    51,    41,     6,    13,     3,    54,
      21,     1,     4,    18,    19,    20,    21,    24,    25,    26,
      28,    29,    30,    31,    32,    41,    50,    55,    56,    57,
      70,    71,    41,     5,     5,     5,    41,     5,     9,    12,
      22,    23,    40,    41,    42,    70,    71,    72,    73,    74,
      75,    76,    77,     5,     5,     5,     5,     5,     5,     5,
       5,    14,     4,    56,     7,     7,    41,    72,    72,    73,
      75,     5,    41,    77,     7,     8,     9,    10,    11,    69,
      72,     7,    15,    21,    22,    41,    58,    59,    60,    61,
      62,    63,    64,    66,    67,    74,    75,    41,    69,    69,
      69,    61,    41,    52,    72,     6,     6,     6,     6,     6,
      76,    76,    77,    77,     6,    27,    63,    41,    14,    58,
       7,    13,    38,    39,    34,    35,    65,    16,    17,    27,
      36,    37,    68,     6,     6,     6,     6,     6,     6,    13,
       7,     7,     7,     7,    53,    54,    56,    72,    14,    72,
       6,    59,    60,    62,    63,    66,    67,    53,    41,    72,
      53,     6,    33,    53,    53,     5,     9,    12,    22,    23,
      28,    29,    30,    31,    40,    41,    42,    70,    71,    73,
      74,    75,    76,    77,     7,     5,     9,    12,    22,    23,
      28,    29,    30,    31,    40,    41,    42,    70,    71,    73,
      74,    75,    76,    77,     5,     9,    28,    29,    30,    31,
      40,    42,    70,    71,    76,    77,     5,     9,    15,    22,
      28,    29,    30,    31,    40,    41,    42,    62,    63,    64,
      66,    67,    70,    71,    74,    75,    76,    77,     8,     9,
       5,    41,    41,     5,     7,    59,     8,     9,    38,     3,
       5,     9,    12,    22,    23,    28,    29,    30,    31,    40,
      41,    42,    70,    71,    73,    74,    75,    76,    77,     5,
       9,    15,    21,    22,    28,    29,    30,    31,    40,    41,
      42,    60,    61,    62,    63,    64,    66,    67,    70,    71,
      74,    75,    76,    77,     1,     3,    18,    19,    20,    21,
      24,    25,    26,    32,    41,    50,    54,    56,    57,    70,
      71,    13,    73,    75,    77,     5,     5,     5,     5,     5,
      10,    11,    73,    75,     5,    41,    77,     5,     5,     5,
       5,     5,     8,     9,    10,    11,    73,    75,     5,    41,
      77,     5,     5,     5,     5,    10,    11,    73,    75,     5,
      41,    77,    63,     5,     5,     5,     5,     5,    39,    65,
      68,     8,     9,    10,    11,    76,    76,    52,     7,    76,
      76,    62,     4,    55,    73,    75,     5,    41,    77,     5,
       5,     5,     5,     5,     8,     9,    10,    11,    73,    75,
       5,    41,    77,    41,    63,    41,     5,     5,     5,     5,
       5,    14,    38,    39,    65,    68,     8,     9,    10,    11,
       4,    55,     5,     5,     5,    41,    72,     5,     5,     5,
      14,     7,     7,    60,     6,     6,    41,    69,    69,    69,
      52,    77,    77,     6,     6,    41,    69,    69,    69,    52,
      76,    76,    77,    77,     6,     6,    41,    69,    69,    69,
      77,    77,     6,     6,    41,    69,    69,    69,    52,    63,
      66,    67,    76,    76,    77,    77,     6,     4,     6,     6,
      41,    69,    69,    69,    52,    76,    76,    77,    77,     6,
       6,    14,    41,    69,    69,    69,    52,     5,     9,    12,
      22,    23,    28,    29,    30,    31,    40,    41,    42,    70,
      71,    72,    73,    74,    75,    76,    77,    62,    63,    66,
      67,    76,    76,    77,    77,     4,    41,    72,    72,     7,
       7,    69,    58,    61,    72,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     6,    72,
       6,     6,     6,     6,     6,    73,    75,     5,    41,    77,
       5,     5,     5,     5,     5,     8,     9,    10,    11,     6,
       6,     6,     6,    58,     6,     7,     6,     6,    41,    69,
      69,    69,    52,    76,    76,    77,    77,     7,     7,     7,
      53,     6,    59,    53,     6,     6,     6,     6,     6,    53,
       6,    33,    53,    53
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    45,    46,    47,    47,    47,    48,    48,    49,    50,
      51,    51,    51,    52,    52,    52,    53,    53,    54,    54,
      55,    55,    56,    56,    56,    56,    56,    56,    56,    56,
      56,    57,    57,    57,    57,    57,    57,    58,    58,    59,
      59,    60,    60,    60,    61,    61,    62,    62,    63,    63,
      64,    64,    65,    65,    66,    66,    67,    67,    67,    68,
      68,    68,    68,    68,    69,    70,    71,    71,    71,    71,
      72,    72,    73,    73,    73,    73,    74,    74,    74,    75,
      75,    75,    76,    76,    76,    76,    77,    77,    77,    77
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     2,     1,     1,     1,     6,     3,
       4,     2,     0,     3,     1,     0,     1,     1,     3,     2,
       2,     1,     1,     2,     2,     1,     5,     5,     5,     4,
       3,     5,     7,     5,     6,     7,     1,     1,     2,     1,
       3,     1,     4,     3,     3,     1,     3,     1,     2,     1,
       3,     1,     1,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     4,     4,     4,     4,     4,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       3,     1,     3,     3,     1,     2,     1,     1,     1,     3
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
  case 6: /* stmt: func_stmt  */
#line 59 "parser/c7.y"
                       { add_ast((yyvsp[0].expression)); }
#line 2654 "parser/parser.c"
    break;

  case 7: /* stmt: var_decl_stmt  */
#line 60 "parser/c7.y"
                           { add_ast((yyvsp[0].expression)); }
#line 2660 "parser/parser.c"
    break;

  case 8: /* func_stmt: TYPE ID PARENT_LEFT param_list PARENT_RIGHT compound_block_stmt  */
#line 63 "parser/c7.y"
                                                                                          {
                (yyval.expression) = create_func_expr(create_str_expr((yyvsp[-5].str_value)), create_var_expr((yyvsp[-4].int_value)), (yyvsp[-2].expression), (yyvsp[0].expression));
                free((yyvsp[-5].str_value));
            }
#line 2669 "parser/parser.c"
    break;

  case 9: /* var_decl_stmt: TYPE ID SEMICOLON  */
#line 69 "parser/c7.y"
                                          {
                    (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-2].str_value)), create_var_expr((yyvsp[-1].int_value))); 
                    free((yyvsp[-2].str_value));
                }
#line 2678 "parser/parser.c"
    break;

  case 10: /* param_list: param_list COMMA TYPE ID  */
#line 75 "parser/c7.y"
                                                {
                (yyval.expression) = create_ter_expr((yyvsp[-3].expression), create_str_expr((yyvsp[-1].str_value)), create_var_expr((yyvsp[0].int_value)));
                free((yyvsp[-1].str_value));
            }
#line 2687 "parser/parser.c"
    break;

  case 11: /* param_list: TYPE ID  */
#line 79 "parser/c7.y"
                            {
                (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-1].str_value)), create_var_expr((yyvsp[0].int_value)));
                free((yyvsp[-1].str_value));
            }
#line 2696 "parser/parser.c"
    break;

  case 12: /* param_list: %empty  */
#line 83 "parser/c7.y"
                          { (yyval.expression) = create_empty_expr(); }
#line 2702 "parser/parser.c"
    break;

  case 13: /* simple_param_list: simple_param_list COMMA ID  */
#line 86 "parser/c7.y"
                                                       {
                        (yyval.expression) = create_bin_expr((yyvsp[-2].expression), create_var_expr((yyvsp[0].int_value)));
                    }
#line 2710 "parser/parser.c"
    break;

  case 14: /* simple_param_list: ID  */
#line 89 "parser/c7.y"
                            { (yyval.expression) = create_var_expr((yyvsp[0].int_value)); }
#line 2716 "parser/parser.c"
    break;

  case 15: /* simple_param_list: %empty  */
#line 90 "parser/c7.y"
                                  { (yyval.expression) = create_empty_expr(); }
#line 2722 "parser/parser.c"
    break;

  case 16: /* flex_block_struct: compound_block_stmt  */
#line 93 "parser/c7.y"
                                             { (yyval.expression) = (yyvsp[0].expression); }
#line 2728 "parser/parser.c"
    break;

  case 17: /* flex_block_struct: block_stmt  */
#line 94 "parser/c7.y"
                                    { (yyval.expression) = (yyvsp[0].expression); }
#line 2734 "parser/parser.c"
    break;

  case 18: /* compound_block_stmt: BRACK_LEFT block_stmts BRACK_RIGHT  */
#line 97 "parser/c7.y"
                                                            { (yyval.expression) = (yyvsp[-1].expression); }
#line 2740 "parser/parser.c"
    break;

  case 19: /* compound_block_stmt: BRACK_LEFT BRACK_RIGHT  */
#line 98 "parser/c7.y"
                                              { (yyval.expression) = create_empty_expr(); }
#line 2746 "parser/parser.c"
    break;

  case 20: /* block_stmts: block_stmts block_stmt  */
#line 101 "parser/c7.y"
                                           {
                (yyval.expression) = create_bin_expr((yyvsp[-1].expression), (yyvsp[0].expression)); 
            }
#line 2754 "parser/parser.c"
    break;

  case 21: /* block_stmts: block_stmt  */
#line 104 "parser/c7.y"
                            { (yyval.expression) = (yyvsp[0].expression); }
#line 2760 "parser/parser.c"
    break;

  case 22: /* block_stmt: var_decl_stmt  */
#line 107 "parser/c7.y"
                               { (yyval.expression) = (yyvsp[0].expression); }
#line 2766 "parser/parser.c"
    break;

  case 23: /* block_stmt: func_call SEMICOLON  */
#line 108 "parser/c7.y"
                                     { (yyval.expression) = (yyvsp[-1].expression); }
#line 2772 "parser/parser.c"
    break;

  case 24: /* block_stmt: set_func_call SEMICOLON  */
#line 109 "parser/c7.y"
                                         { (yyval.expression) = (yyvsp[-1].expression); }
#line 2778 "parser/parser.c"
    break;

  case 25: /* block_stmt: flow_control  */
#line 110 "parser/c7.y"
                              { (yyval.expression) = (yyvsp[0].expression); }
#line 2784 "parser/parser.c"
    break;

  case 26: /* block_stmt: READ PARENT_LEFT ID PARENT_RIGHT SEMICOLON  */
#line 111 "parser/c7.y"
                                                               {
                (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-4].str_value)), create_var_expr((yyvsp[-2].int_value))); 
                free((yyvsp[-4].str_value));
            }
#line 2793 "parser/parser.c"
    break;

  case 27: /* block_stmt: WRITE PARENT_LEFT simple_expr PARENT_RIGHT SEMICOLON  */
#line 115 "parser/c7.y"
                                                                         {
                (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-4].str_value)), (yyvsp[-2].expression)); 
                free((yyvsp[-4].str_value));
            }
#line 2802 "parser/parser.c"
    break;

  case 28: /* block_stmt: WRITELN PARENT_LEFT simple_expr PARENT_RIGHT SEMICOLON  */
#line 119 "parser/c7.y"
                                                                           {
                (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-4].str_value)), (yyvsp[-2].expression)); 
                free((yyvsp[-4].str_value));
            }
#line 2811 "parser/parser.c"
    break;

  case 29: /* block_stmt: ID ASSIGN simple_expr SEMICOLON  */
#line 123 "parser/c7.y"
                                                       {
                (yyval.expression) = create_ter_expr(create_var_expr((yyvsp[-3].int_value)), create_char_expr((yyvsp[-2].op)), (yyvsp[-1].expression)); 
            }
#line 2819 "parser/parser.c"
    break;

  case 30: /* block_stmt: RETURN simple_expr SEMICOLON  */
#line 126 "parser/c7.y"
                                                 {
                (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-2].str_value)), (yyvsp[-1].expression)); 
                free((yyvsp[-2].str_value));
            }
#line 2828 "parser/parser.c"
    break;

  case 31: /* flow_control: IF PARENT_LEFT or_cond_expr PARENT_RIGHT flex_block_struct  */
#line 132 "parser/c7.y"
                                                                                                   {
                    (yyval.expression) = create_ter_expr(create_str_expr((yyvsp[-4].str_value)), (yyvsp[-2].expression), (yyvsp[0].expression)); 
                    free((yyvsp[-4].str_value));
                }
#line 2837 "parser/parser.c"
    break;

  case 32: /* flow_control: IF PARENT_LEFT or_cond_expr PARENT_RIGHT flex_block_struct ELSE flex_block_struct  */
#line 136 "parser/c7.y"
                                                                                                                       {
                    (yyval.expression) = create_qui_expr(create_str_expr((yyvsp[-6].str_value)), (yyvsp[-4].expression), (yyvsp[-2].expression), create_str_expr((yyvsp[-1].str_value)), (yyvsp[0].expression));
                    free((yyvsp[-6].str_value)); free((yyvsp[-1].str_value));
                }
#line 2846 "parser/parser.c"
    break;

  case 33: /* flow_control: FORALL PARENT_LEFT set_expr PARENT_RIGHT flex_block_struct  */
#line 140 "parser/c7.y"
                                                                                        {
                    (yyval.expression) = create_ter_expr(create_str_expr((yyvsp[-4].str_value)), (yyvsp[-2].expression), (yyvsp[0].expression)); 
                    free((yyvsp[-4].str_value));
                }
#line 2855 "parser/parser.c"
    break;

  case 34: /* flow_control: FOR PARENT_LEFT opt_param opt_param PARENT_RIGHT flex_block_struct  */
#line 144 "parser/c7.y"
                                                                                                    {
                    (yyval.expression) = create_qua_expr(create_str_expr((yyvsp[-5].str_value)), (yyvsp[-3].expression), (yyvsp[-2].expression), (yyvsp[0].expression)); 
                    free((yyvsp[-5].str_value));
                }
#line 2864 "parser/parser.c"
    break;

  case 35: /* flow_control: FOR PARENT_LEFT opt_param opt_param for_expression PARENT_RIGHT flex_block_struct  */
#line 148 "parser/c7.y"
                                                                                                                       {
                    (yyval.expression) = create_qui_expr(create_str_expr((yyvsp[-6].str_value)), (yyvsp[-4].expression), (yyvsp[-3].expression), (yyvsp[-2].expression), (yyvsp[0].expression)); 
                    free((yyvsp[-6].str_value));
                }
#line 2873 "parser/parser.c"
    break;

  case 36: /* flow_control: error  */
#line 152 "parser/c7.y"
                        { (yyval.expression) = create_empty_expr(); }
#line 2879 "parser/parser.c"
    break;

  case 37: /* opt_param: SEMICOLON  */
#line 155 "parser/c7.y"
                        { (yyval.expression) = create_empty_expr(); }
#line 2885 "parser/parser.c"
    break;

  case 38: /* opt_param: for_expression SEMICOLON  */
#line 156 "parser/c7.y"
                                          { (yyval.expression) = (yyvsp[-1].expression); }
#line 2891 "parser/parser.c"
    break;

  case 39: /* for_expression: decl_or_cond_expr  */
#line 159 "parser/c7.y"
                                       { (yyval.expression) = (yyvsp[0].expression); }
#line 2897 "parser/parser.c"
    break;

  case 40: /* for_expression: for_expression COMMA decl_or_cond_expr  */
#line 160 "parser/c7.y"
                                                                 {
                    (yyval.expression) = create_bin_expr((yyvsp[-2].expression), (yyvsp[0].expression)); 
                }
#line 2905 "parser/parser.c"
    break;

  case 41: /* decl_or_cond_expr: or_cond_expr  */
#line 165 "parser/c7.y"
                                      { (yyval.expression) = (yyvsp[0].expression); }
#line 2911 "parser/parser.c"
    break;

  case 42: /* decl_or_cond_expr: TYPE ID ASSIGN simple_expr  */
#line 166 "parser/c7.y"
                                                             {
                        (yyval.expression) = create_qua_expr(create_str_expr((yyvsp[-3].str_value)), create_var_expr((yyvsp[-2].int_value)),
                                             create_char_expr((yyvsp[-1].op)), (yyvsp[0].expression)); 
                        free((yyvsp[-3].str_value));
                    }
#line 2921 "parser/parser.c"
    break;

  case 43: /* decl_or_cond_expr: ID ASSIGN simple_expr  */
#line 171 "parser/c7.y"
                                                     {
                        (yyval.expression) = create_ter_expr(create_var_expr((yyvsp[-2].int_value)), create_char_expr((yyvsp[-1].op)), (yyvsp[0].expression)); 
                    }
#line 2929 "parser/parser.c"
    break;

  case 44: /* or_cond_expr: or_cond_expr OR_OP and_cond_expr  */
#line 176 "parser/c7.y"
                                                               {
                    (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_str_expr((yyvsp[-1].str_value)), (yyvsp[0].expression)); 
                    free((yyvsp[-1].str_value));
                }
#line 2938 "parser/parser.c"
    break;

  case 45: /* or_cond_expr: and_cond_expr  */
#line 180 "parser/c7.y"
                                   { (yyval.expression) = (yyvsp[0].expression); }
#line 2944 "parser/parser.c"
    break;

  case 46: /* and_cond_expr: and_cond_expr AND_OP unary_cond_expr  */
#line 183 "parser/c7.y"
                                                                   {
                    (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_str_expr((yyvsp[-1].str_value)), (yyvsp[0].expression)); 
                    free((yyvsp[-1].str_value));
                }
#line 2953 "parser/parser.c"
    break;

  case 47: /* and_cond_expr: unary_cond_expr  */
#line 187 "parser/c7.y"
                                     { (yyval.expression) = (yyvsp[0].expression); }
#line 2959 "parser/parser.c"
    break;

  case 48: /* unary_cond_expr: NOT_OP unary_cond_expr  */
#line 190 "parser/c7.y"
                                               {
                    (yyval.expression) = create_bin_expr(create_char_expr((yyvsp[-1].op)), (yyvsp[0].expression)); 
                }
#line 2967 "parser/parser.c"
    break;

  case 49: /* unary_cond_expr: eq_cond_expr  */
#line 193 "parser/c7.y"
                                  { (yyval.expression) = (yyvsp[0].expression); }
#line 2973 "parser/parser.c"
    break;

  case 50: /* eq_cond_expr: eq_cond_expr equal_ops rel_cond_expr  */
#line 196 "parser/c7.y"
                                                                  {
                    (yyval.expression) = create_ter_expr((yyvsp[-2].expression), (yyvsp[-1].expression), (yyvsp[0].expression));
                }
#line 2981 "parser/parser.c"
    break;

  case 51: /* eq_cond_expr: rel_cond_expr  */
#line 199 "parser/c7.y"
                                   { (yyval.expression) = (yyvsp[0].expression); }
#line 2987 "parser/parser.c"
    break;

  case 52: /* equal_ops: EQ_OP  */
#line 202 "parser/c7.y"
                       {
                (yyval.expression) = create_str_expr((yyvsp[0].str_value));
                free((yyvsp[0].str_value));
            }
#line 2996 "parser/parser.c"
    break;

  case 53: /* equal_ops: NE_OP  */
#line 206 "parser/c7.y"
                       {
                (yyval.expression) = create_str_expr((yyvsp[0].str_value));
                free((yyvsp[0].str_value));
            }
#line 3005 "parser/parser.c"
    break;

  case 54: /* rel_cond_expr: rel_cond_expr rel_ops rel_cond_stmt  */
#line 212 "parser/c7.y"
                                                                  {
                    (yyval.expression) = create_ter_expr((yyvsp[-2].expression), (yyvsp[-1].expression), (yyvsp[0].expression));
                }
#line 3013 "parser/parser.c"
    break;

  case 55: /* rel_cond_expr: rel_cond_stmt  */
#line 215 "parser/c7.y"
                                   { (yyval.expression) = (yyvsp[0].expression); }
#line 3019 "parser/parser.c"
    break;

  case 56: /* rel_cond_stmt: arith_expr  */
#line 218 "parser/c7.y"
                                { (yyval.expression) = (yyvsp[0].expression); }
#line 3025 "parser/parser.c"
    break;

  case 57: /* rel_cond_stmt: EMPTY  */
#line 219 "parser/c7.y"
                           {
                    (yyval.expression) = create_str_expr((yyvsp[0].str_value));
                    free((yyvsp[0].str_value));
                }
#line 3034 "parser/parser.c"
    break;

  case 58: /* rel_cond_stmt: func_expr  */
#line 223 "parser/c7.y"
                               { (yyval.expression) = (yyvsp[0].expression); }
#line 3040 "parser/parser.c"
    break;

  case 59: /* rel_ops: L_OP  */
#line 226 "parser/c7.y"
                  { (yyval.expression) = create_char_expr((yyvsp[0].op)); }
#line 3046 "parser/parser.c"
    break;

  case 60: /* rel_ops: G_OP  */
#line 227 "parser/c7.y"
                  { (yyval.expression) = create_char_expr((yyvsp[0].op)); }
#line 3052 "parser/parser.c"
    break;

  case 61: /* rel_ops: LE_OP  */
#line 228 "parser/c7.y"
                   {
            (yyval.expression) = create_str_expr((yyvsp[0].str_value));
            free((yyvsp[0].str_value));
        }
#line 3061 "parser/parser.c"
    break;

  case 62: /* rel_ops: GE_OP  */
#line 232 "parser/c7.y"
                   { 
            (yyval.expression) = create_str_expr((yyvsp[0].str_value));
            free((yyvsp[0].str_value));
        }
#line 3070 "parser/parser.c"
    break;

  case 63: /* rel_ops: IN  */
#line 236 "parser/c7.y"
                {
            (yyval.expression) = create_str_expr((yyvsp[0].str_value));
            free((yyvsp[0].str_value));
        }
#line 3079 "parser/parser.c"
    break;

  case 64: /* set_expr: simple_expr IN simple_expr  */
#line 242 "parser/c7.y"
                                                    {
                (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_str_expr((yyvsp[-1].str_value)), (yyvsp[0].expression)); 
                free((yyvsp[-1].str_value));
            }
#line 3088 "parser/parser.c"
    break;

  case 65: /* func_call: ID PARENT_LEFT simple_param_list PARENT_RIGHT  */
#line 248 "parser/c7.y"
                                                                  {
                (yyval.expression) = create_bin_expr(create_var_expr((yyvsp[-3].int_value)), (yyvsp[-1].expression)); 
            }
#line 3096 "parser/parser.c"
    break;

  case 66: /* set_func_call: IS_SET PARENT_LEFT ID PARENT_RIGHT  */
#line 253 "parser/c7.y"
                                                           {
                    (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-3].str_value)), create_var_expr((yyvsp[-1].int_value))); 
                    free((yyvsp[-3].str_value));
                }
#line 3105 "parser/parser.c"
    break;

  case 67: /* set_func_call: ADD_SET PARENT_LEFT set_expr PARENT_RIGHT  */
#line 257 "parser/c7.y"
                                                                  {
                    (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-3].str_value)), (yyvsp[-1].expression)); 
                    free((yyvsp[-3].str_value));
                }
#line 3114 "parser/parser.c"
    break;

  case 68: /* set_func_call: REMOVE PARENT_LEFT set_expr PARENT_RIGHT  */
#line 261 "parser/c7.y"
                                                                 {
                    (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-3].str_value)), (yyvsp[-1].expression)); 
                    free((yyvsp[-3].str_value));
                }
#line 3123 "parser/parser.c"
    break;

  case 69: /* set_func_call: EXISTS PARENT_LEFT set_expr PARENT_RIGHT  */
#line 265 "parser/c7.y"
                                                                 {
                    (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-3].str_value)), (yyvsp[-1].expression));
                    free((yyvsp[-3].str_value)); 
                }
#line 3132 "parser/parser.c"
    break;

  case 70: /* simple_expr: arith_expr  */
#line 271 "parser/c7.y"
                            { (yyval.expression) = (yyvsp[0].expression); }
#line 3138 "parser/parser.c"
    break;

  case 71: /* simple_expr: func_cte_expr  */
#line 272 "parser/c7.y"
                               { (yyval.expression) = (yyvsp[0].expression); }
#line 3144 "parser/parser.c"
    break;

  case 72: /* func_cte_expr: EMPTY  */
#line 275 "parser/c7.y"
                           {
                    (yyval.expression) = create_str_expr((yyvsp[0].str_value));
                    free((yyvsp[0].str_value));
                }
#line 3153 "parser/parser.c"
    break;

  case 73: /* func_cte_expr: STRING  */
#line 279 "parser/c7.y"
                            {
                    (yyval.expression) = create_str_expr((yyvsp[0].str_value));
                    free((yyvsp[0].str_value));
                }
#line 3162 "parser/parser.c"
    break;

  case 74: /* func_cte_expr: CHAR  */
#line 283 "parser/c7.y"
                          { (yyval.expression) = create_char_expr((yyvsp[0].op)); }
#line 3168 "parser/parser.c"
    break;

  case 75: /* func_cte_expr: func_expr  */
#line 284 "parser/c7.y"
                               { (yyval.expression) = (yyvsp[0].expression); }
#line 3174 "parser/parser.c"
    break;

  case 76: /* func_expr: func_call  */
#line 287 "parser/c7.y"
                               { (yyval.expression) = (yyvsp[0].expression); }
#line 3180 "parser/parser.c"
    break;

  case 77: /* func_expr: set_func_call  */
#line 288 "parser/c7.y"
                                   { (yyval.expression) = (yyvsp[0].expression); }
#line 3186 "parser/parser.c"
    break;

  case 78: /* func_expr: PARENT_LEFT func_cte_expr PARENT_RIGHT  */
#line 289 "parser/c7.y"
                                                            { (yyval.expression) = (yyvsp[-1].expression); }
#line 3192 "parser/parser.c"
    break;

  case 79: /* arith_expr: arith_expr ADD term  */
#line 292 "parser/c7.y"
                                           {
                (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_char_expr((yyvsp[-1].op)), (yyvsp[0].expression));
            }
#line 3200 "parser/parser.c"
    break;

  case 80: /* arith_expr: arith_expr SUB term  */
#line 295 "parser/c7.y"
                                           {
                (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_char_expr((yyvsp[-1].op)), (yyvsp[0].expression));
            }
#line 3208 "parser/parser.c"
    break;

  case 81: /* arith_expr: term  */
#line 298 "parser/c7.y"
                      { (yyval.expression) = (yyvsp[0].expression); }
#line 3214 "parser/parser.c"
    break;

  case 82: /* term: term MULT factor  */
#line 301 "parser/c7.y"
                                    {
            (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_char_expr((yyvsp[-1].op)), (yyvsp[0].expression));
        }
#line 3222 "parser/parser.c"
    break;

  case 83: /* term: term DIV factor  */
#line 304 "parser/c7.y"
                                   {
            (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_char_expr((yyvsp[-1].op)), (yyvsp[0].expression));
        }
#line 3230 "parser/parser.c"
    break;

  case 84: /* term: factor  */
#line 307 "parser/c7.y"
                    { (yyval.expression) = (yyvsp[0].expression); }
#line 3236 "parser/parser.c"
    break;

  case 85: /* term: SUB factor  */
#line 308 "parser/c7.y"
                                        { 
            (yyval.expression) = create_bin_expr(create_char_expr((yyvsp[-1].op)), (yyvsp[0].expression)); 
        }
#line 3244 "parser/parser.c"
    break;

  case 86: /* factor: INTEGER  */
#line 313 "parser/c7.y"
                     { (yyval.expression) = create_int_expr((yyvsp[0].int_value)); }
#line 3250 "parser/parser.c"
    break;

  case 87: /* factor: FLOAT  */
#line 314 "parser/c7.y"
                   { (yyval.expression) = create_float_expr((yyvsp[0].float_value)); }
#line 3256 "parser/parser.c"
    break;

  case 88: /* factor: ID  */
#line 315 "parser/c7.y"
                { (yyval.expression) = create_var_expr((yyvsp[0].int_value)); }
#line 3262 "parser/parser.c"
    break;

  case 89: /* factor: PARENT_LEFT arith_expr PARENT_RIGHT  */
#line 316 "parser/c7.y"
                                                 { (yyval.expression) = (yyvsp[-1].expression); }
#line 3268 "parser/parser.c"
    break;


#line 3272 "parser/parser.c"

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

#line 319 "parser/c7.y"


void yyerror(const char *s) {
    printf("\nSyntaxError: %s in line %d, column %d.\n",
           s, parser_line, parser_column);
    syntax_error = 1;
}
