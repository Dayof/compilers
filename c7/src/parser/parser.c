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
    #include "sym_tab.h"
    #include "ast.h"

    int yylex();
    void yyerror(const char *s);

#line 81 "parser/parser.c"

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
  YYSYMBOL_COMMA = 12,                     /* COMMA  */
  YYSYMBOL_ASSIGN = 13,                    /* ASSIGN  */
  YYSYMBOL_NOT_OP = 14,                    /* NOT_OP  */
  YYSYMBOL_L_OP = 15,                      /* L_OP  */
  YYSYMBOL_G_OP = 16,                      /* G_OP  */
  YYSYMBOL_READ = 17,                      /* READ  */
  YYSYMBOL_WRITE = 18,                     /* WRITE  */
  YYSYMBOL_WRITELN = 19,                   /* WRITELN  */
  YYSYMBOL_TYPE = 20,                      /* TYPE  */
  YYSYMBOL_EMPTY = 21,                     /* EMPTY  */
  YYSYMBOL_STRING = 22,                    /* STRING  */
  YYSYMBOL_RETURN = 23,                    /* RETURN  */
  YYSYMBOL_FORALL = 24,                    /* FORALL  */
  YYSYMBOL_FOR = 25,                       /* FOR  */
  YYSYMBOL_IN = 26,                        /* IN  */
  YYSYMBOL_IS_SET = 27,                    /* IS_SET  */
  YYSYMBOL_ADD_SET = 28,                   /* ADD_SET  */
  YYSYMBOL_REMOVE = 29,                    /* REMOVE  */
  YYSYMBOL_EXISTS = 30,                    /* EXISTS  */
  YYSYMBOL_IF = 31,                        /* IF  */
  YYSYMBOL_ELSE = 32,                      /* ELSE  */
  YYSYMBOL_CHAR = 33,                      /* CHAR  */
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
  YYSYMBOL_compound_block_stmt = 53,       /* compound_block_stmt  */
  YYSYMBOL_block_stmts = 54,               /* block_stmts  */
  YYSYMBOL_block_item = 55,                /* block_item  */
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
#define YYLAST   5088

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  45
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  89
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  609

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
       0,    53,    53,    56,    57,    58,    61,    62,    65,    72,
      79,    84,    89,    92,    96,   100,   103,   104,   107,   110,
     113,   114,   117,   118,   119,   120,   121,   126,   130,   134,
     138,   142,   148,   152,   156,   160,   164,   170,   171,   174,
     175,   180,   181,   187,   193,   197,   200,   204,   207,   210,
     213,   216,   219,   223,   229,   232,   235,   236,   240,   243,
     244,   245,   249,   253,   259,   265,   271,   276,   280,   284,
     290,   291,   294,   298,   302,   306,   309,   310,   311,   314,
     317,   320,   323,   326,   329,   330,   335,   336,   337,   341
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
  "MULT", "DIV", "COMMA", "ASSIGN", "NOT_OP", "L_OP", "G_OP", "READ",
  "WRITE", "WRITELN", "TYPE", "EMPTY", "STRING", "RETURN", "FORALL", "FOR",
  "IN", "IS_SET", "ADD_SET", "REMOVE", "EXISTS", "IF", "ELSE", "CHAR",
  "EQ_OP", "NE_OP", "LE_OP", "GE_OP", "OR_OP", "AND_OP", "INTEGER", "ID",
  "FLOAT", "UMINUS", "THEN", "$accept", "program", "stmts", "stmt",
  "func_stmt", "var_decl_stmt", "param_list", "simple_param_list",
  "compound_block_stmt", "block_stmts", "block_item", "block_stmt",
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

#define YYPACT_NINF (-241)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-90)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -17,   -25,    19,   259,   270,   273,   481,    35,  -241,   497,
     558,   413,   594,   -15,   189,   291,    63,    58,  1108,   597,
      39,  2102,   652,   102,   103,   104,    82,   546,   121,   132,
     135,   139,   143,   155,   159,    16,  2133,  2164,  2195,  2226,
    2257,  2288,   171,   172,   360,   136,   655,   655,   174,   655,
      64,   183,   184,   193,  1511,   738,  1572,   206,   208,   215,
     217,   226,   562,  1581,  2131,   694,   819,   196,   694,   694,
     694,    70,    11,   546,   654,  2319,  2350,  2381,   235,   242,
     256,   300,   379,    32,  2255,  2261,  2412,    52,    52,    64,
      64,   314,   351,   959,   125,   244,  4809,  3159,  1349,   327,
     337,   279,   408,   565,   465,  4815,  4848,  4854,  4776,   315,
     357,   361,   420,    25,   397,   404,   456,   463,   471,   495,
     498,  2286,  2292,  2317,  2323,  2348,   618,   655,   593,   414,
    1235,   295,  1557,  2939,   125,   125,   466,  1150,  1417,  3019,
    3036,  3053,  3070,  3087,  1417,   505,   509,   520,   521,  1412,
     531,   499,  2443,  2474,  2505,  2536,  2567,   467,  1235,   339,
     618,   425,   341,   600,   651,  4887,  4893,  1013,   432,   394,
    2598,   618,   618,  2629,  2660,  2691,   655,   144,   544,   585,
     606,   608,   625,   635,   638,  1135,   766,  1227,   661,   665,
     685,   688,   888,  1304,  1393,  2722,   655,   223,   573,   679,
     712,   725,   732,   755,   735,   747,   513,   799,   743,   744,
     772,   773,    62,   862,   914,   655,   247,   796,   807,   808,
     827,  4431,  4464,  4926,  4932,  4497,  4530,   655,   352,    70,
    1263,   837,   838,   849,   861,  3666,  3278,  3700,    38,    77,
     191,  4227,  4241,  4268,  4275,  4282,  3954,  3714,  3748,    32,
      32,    32,  1400,  3229,    11,   871,   427,   133,   133,    70,
     655,   409,   649,   706,   864,   869,   878,   879,   713,  1107,
    1158,  1846,   815,   843,   855,   874,  1091,  1880,  1912,   655,
     412,  3002,   740,    12,   890,   905,   912,   926,  3312,  3194,
    3346,   449,   272,   200,   302,   170,  3988,  3995,  4029,  4036,
    4070,  3940,  3380,  3414,  1047,  2753,   928,   929,   936,   546,
     937,   949,   962,   130,  1198,  1528,   823,   923,  2956,  2784,
    2815,   828,   986,  1480,   943,   694,   694,   694,    11,   144,
     144,   991,  1001,    32,   927,   967,   965,   694,   694,   694,
      11,   194,   194,   223,   223,  1005,  1018,    32,  4563,  4596,
     974,   694,   694,   694,   247,   247,  1012,  1076,    32,  3762,
    3796,    90,   980,   694,   694,   694,    11,    70,  3104,  3104,
     202,   202,   352,   352,  1601,  1814,   524,  2905,  4629,  4662,
     118,  1019,  1081,    32,  1945,  1977,   993,   694,   694,   694,
      11,   271,   271,   409,   409,  1029,  1114,    32,  3448,  3482,
    3264,   418,  1026,  1006,   694,   694,   694,    11,  2973,  3002,
    3002,  3121,  3121,   338,   338,   412,   412,  1600,  2846,  1008,
     655,   655,  1039,   694,   819,    70,   546,  1643,  1687,   590,
    2877,  1051,  2167,  1055,  1067,  1085,  1090,   603,  2198,  2229,
    1027,   994,  1096,  1098,  1118,  1123,   614,  1084,  1185,  1277,
    1315,  4965,  4695,  1124,  1128,  1151,  1152,  4728,  4761,  4309,
    3810,  1154,  1166,  1167,  1181,   622,   181,  4316,  4323,  3844,
    3858,  3892,  3906,  4971,   907,  2009,  1183,  1191,  1194,  1197,
     645,  2041,  2073,  2105,  2137,  4077,  3516,  2973,  1199,  1201,
    1202,  1204,   669,   655,   424,   674,   686,  1207,  1209,  1214,
    1215,   698,  1376,  1496,  1505,   702,   753,   776,   777,   785,
     548,  1564,  1627,   507,   514,  4111,  4118,  3550,  3584,  3618,
    3652,  1746,  1218,  1225,  1226,  1778,  1241,  1349,    81,  1149,
    1245,  1246,  1248,  1249,  1254,  1244,  1255,  1256,  1258,  1264,
    5004,  5010,  5043,  5049,  4350,  4357,  4364,  4391,  4398,   909,
     950,   951,   958,   978,   794,  4152,  4159,  4193,  4200,  4234,
    1265,  1142,    32,  1645,  1670,  1200,   694,   694,   694,    11,
     381,   381,   424,   424,  1267,  1273,  1297,  1412,  2922,  1412,
    1811,   805,  1686,  1299,  1300,  1301,  1303,   817,  1714,  1721,
    1728,  1780,  1845,  1877,  1910,  1942,  1412,   825,  1974,   829,
     839,   846,   851,   903,  2006,  1412,  1412,  2038,  2070
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
       0,     0,     0,     0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -241,  -241,  -241,  1316,  -241,    59,  -241,  -239,   -16,  -173,
     -18,  -117,  -137,   -91,   -92,  -120,   -63,   -67,   -49,   100,
    -230,   -36,   -41,  -240,   415,   -13,   123,   318,   660,  1334,
    1115,   925,   535
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,     4,     5,    36,    14,   115,    37,    38,
      39,    40,    41,    98,    99,   100,   101,   102,   103,   104,
     138,   105,   106,   144,    91,   208,   209,    92,   210,   211,
     212,   213,   214
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      19,   369,   320,     1,   238,    42,   256,   131,   113,   156,
     368,   291,   315,   162,    57,   376,     7,   -15,   -57,     8,
      75,    72,   239,   -15,   -57,    42,    15,   -57,   -57,    73,
     242,   149,   167,   188,   188,   241,   188,   251,   -57,   161,
      11,   177,    12,   170,   -45,   128,   -57,   -57,   -57,   -57,
     -57,   -57,   114,   223,   173,   174,   412,    83,   243,     6,
      57,    50,     6,   259,   293,   411,    18,   163,   292,    83,
     341,   342,   185,   252,   187,   227,   -45,   367,    20,   228,
      44,   223,   294,   -47,   229,   223,   164,   579,   -70,   437,
     297,   230,    54,    84,    56,   296,   -48,   231,   232,   233,
     234,   446,   165,   166,    54,    84,    56,    45,    46,    47,
     235,   236,   237,    42,   188,   -47,   -47,   272,   298,   259,
     223,   223,   223,    48,   -44,   223,    65,   465,   -48,   -48,
     215,   223,   418,   314,   216,    72,   316,    66,   347,    94,
      67,    43,   216,   426,    68,   272,    96,    42,    69,   251,
      58,   480,   217,   218,   219,   220,   -44,   367,    42,    42,
      70,    43,    42,   188,    71,   221,   253,   222,   492,   189,
     189,   240,   189,   221,   348,   222,   -49,    78,    76,    77,
     361,   195,   -49,   188,   185,   252,   187,   -46,   242,   224,
     -72,   -73,   380,   241,   244,    16,    58,   -49,   429,   333,
     -74,    17,   188,   197,   136,   137,   -45,   358,   -49,   -49,
     239,   228,   -45,   -76,   188,   -77,   243,   224,   242,   -46,
     -46,   224,    86,   241,   -71,   136,   137,   369,   333,   -49,
     -49,   295,   401,   -75,   205,   334,   207,   109,   -45,   410,
     297,   117,   235,   359,   237,   296,   243,   188,   118,    43,
     189,   293,   347,   273,   299,   292,   224,   224,   224,    -2,
       9,   224,   119,   205,   334,   207,   188,   224,   298,   294,
      -5,    -5,   317,    -6,    -6,   412,   383,   297,   -41,     1,
     261,   273,   296,    43,   -41,   129,   -41,   221,   348,   222,
      -5,   -41,    42,    -6,    43,    43,    57,   -11,    43,   189,
     279,   160,    75,   -11,   280,   298,   120,    42,   -47,   281,
     409,   269,   384,   271,   -47,   282,   283,   134,   466,   189,
     126,   145,   284,   285,   286,   287,   242,   242,   468,   240,
     587,   241,   467,   527,   132,   288,   289,   290,   189,   133,
     -47,   -47,   513,   397,   -39,    59,   -43,   280,   -40,   -39,
     189,   -43,   244,   -40,   243,   243,   243,   358,   238,   240,
     294,   514,   528,   146,    79,    80,   -10,   147,   297,   297,
     297,   516,   -10,   296,   296,   515,   239,   127,   288,   398,
     290,   295,   244,   189,   242,   121,   562,   249,   250,   241,
     494,   116,   235,   359,   237,   505,   298,   298,   298,   298,
      75,   -42,   189,   -14,   299,    42,   -42,   188,   188,   -14,
     150,   223,   243,    57,   383,   -45,   151,   397,   295,   -12,
     -45,   502,   563,   504,   -48,   -12,   148,   158,    43,   562,
     -48,   171,    58,    13,   377,   256,   578,   318,   -13,   133,
     315,   299,   315,    43,   -13,   157,   -45,   135,   159,   269,
     384,   271,   288,   398,   290,   -39,   -48,   -48,   291,   315,
     595,   -39,   598,   152,   502,   563,   504,   240,   315,   315,
     153,   -52,   -49,   -64,   505,   -52,   169,   -49,   154,   604,
     188,    -7,    -7,   110,   111,   112,   597,   -52,   607,   608,
     244,   244,   244,   -52,   -52,   -52,   -52,    -4,    -4,   136,
     137,    -7,   155,   -49,   -49,   -78,   -52,   -52,   -52,   295,
     295,   293,   -66,   -44,   223,   292,   -67,    -4,   340,   -44,
     -46,   -88,   -88,   -88,   -88,   240,   -46,   -68,   -69,   294,
     473,   506,   299,   299,   299,   299,   151,   297,   -65,   -88,
     168,    43,   296,   189,   189,   -44,   410,   224,   244,    58,
     -72,    49,   -46,   -46,   -70,    50,   570,   571,    -3,    -3,
     -70,   314,    64,   314,   316,   298,   316,    51,    52,   -70,
      87,    88,   -47,    30,    31,    32,    33,   -47,    -3,    53,
     314,   194,   194,   316,   194,    85,    54,    55,    56,   314,
     314,   -73,   316,   316,    -9,    -9,   -40,    -8,    -8,   -72,
     -48,   226,   -40,   -47,   -47,   -48,   248,   -44,    64,   534,
     506,   324,   -44,   325,    -9,   151,   189,    -8,   194,    21,
     539,   175,    64,    64,   124,   125,   151,   422,   548,   226,
     326,   -48,   -48,   226,   151,    23,    24,    25,   -44,   135,
     327,    27,    28,    29,   -74,    30,    31,    32,    33,    34,
     224,   553,   -17,   -17,   -16,   -16,   -72,   151,   -46,    35,
     176,   -72,   194,   -46,   177,   278,   303,   -76,   226,   226,
     226,   -77,   -17,   226,   -16,   559,   178,   179,   295,   226,
     -72,   151,   180,   181,   182,   183,   -72,    60,   184,   -46,
     -46,   -71,   -73,   278,   -75,   185,   186,   187,   -73,   196,
     317,   299,   317,   197,   -74,   -73,   190,   190,   -76,    81,
     -74,   194,   323,   -73,   -76,   198,   199,   336,   -73,   317,
     -74,   200,   201,   202,   203,   -74,   507,   204,   317,   317,
     337,   194,   335,    60,   205,   206,   207,   338,   523,   524,
     434,   435,   436,    72,   529,   -88,   -88,   -88,   -88,   -88,
     194,   349,   443,   444,   445,   -86,   -86,   -86,   -86,   -77,
     339,   -74,   194,   360,   248,   -77,   454,   455,   456,   -76,
     -77,   328,   -88,   -86,   -88,   -88,   -88,   -88,   462,   463,
     464,   402,   -43,   -71,   194,   194,   194,   190,   -43,   -71,
     274,   -75,   226,   226,   248,   194,   385,   -75,   -71,   -75,
     -42,   350,   477,   478,   479,   554,   -42,   -87,   -87,   -87,
     -87,   -78,   351,   352,   194,   399,   303,   -78,   274,   489,
     490,   491,   -76,   603,   215,   -87,    93,   -76,   216,   151,
     427,   605,   353,    94,   431,   -66,   321,   318,   526,    95,
      96,   -66,   362,   363,    64,   -67,   217,   218,   219,   220,
     -77,   -67,   -68,   303,   364,   -77,   331,   -69,   -68,   221,
      97,   222,   -71,   -69,   438,   439,   365,   -71,   194,   386,
     -81,   -81,   343,   344,   387,   345,   -37,   -37,   449,   450,
     -37,   -75,   194,   388,   389,   -37,   -75,   356,   -81,   457,
     458,   -37,   -37,   194,   -70,   403,   249,   250,   -37,   -37,
     -37,   -37,   248,   248,   248,   248,   248,   471,   472,   -65,
     404,   -37,   -37,   -37,   -78,   -65,   -66,   405,   194,   -78,
     381,   -66,   -84,   -84,   -84,   -84,   278,   278,   483,   484,
     428,   406,   194,   419,   420,   -88,   -88,   -88,   -88,   395,
     -84,   421,   423,   512,   303,   303,   303,   303,   303,   303,
     519,   520,    63,   -88,   424,   194,   194,   -67,   -68,   226,
     248,    64,   -67,   -68,   -37,   -69,   -37,   425,   -37,    60,
     -69,   193,   193,   -37,   193,   -85,   -85,   -85,   -85,   -37,
     -37,   584,   585,   586,   433,   -65,   -37,   -37,   -37,   -37,
     -65,   225,   432,   -85,   249,   250,   247,   440,    63,   -37,
     -37,   -37,   -89,   -89,   -89,   -89,   442,   441,   193,   249,
     250,   451,   122,   123,   -32,   453,   -32,   -32,   459,   225,
     -89,   461,   512,   225,   452,   474,   249,   250,   194,   564,
     -32,   -32,   -32,   -32,   476,   485,   -32,   -32,   -32,   487,
     -32,   -32,   -32,   -32,   -32,   172,   525,   488,   -31,   522,
     -31,   -31,   193,   -78,   -32,   277,   302,   -78,   225,   225,
     225,   530,   226,   225,   -31,   -31,   -31,   -31,   508,   225,
     -31,   -31,   -31,   531,   -31,   -31,   -31,   -31,   -31,   -31,
     190,   190,   460,   277,   249,   250,    60,   475,   -31,   249,
     250,   532,   -79,   -79,   343,   344,   533,   194,   -70,   391,
     392,   193,   535,   -70,   536,   512,   512,   590,   591,    21,
     -79,   175,    22,   303,   -86,   -86,   -86,   -86,   -86,   -86,
     486,   193,   249,   250,   537,    23,    24,    25,    26,   538,
     540,    27,    28,    29,   541,    30,    31,    32,    33,    34,
     193,   -86,    62,   -86,   -86,   -86,   -86,   508,   582,    35,
     249,   250,   193,   560,   247,   -53,   580,   542,   543,   -53,
     544,   192,   192,   390,    82,   -88,   -88,   -88,   -88,   -88,
     -88,   -53,   545,   546,   374,   375,   193,   -53,   -53,   -53,
     -53,   108,   378,   379,   247,   193,   246,   547,    62,   549,
     -53,   -53,   -53,   -80,   -80,   343,   344,   550,    82,   -22,
     551,   -22,   -22,   552,   193,   555,   302,   556,   557,   108,
     558,   -80,   565,   108,   566,   -22,   -22,   -22,   -22,   567,
     568,   -22,   -22,   -22,   574,   -22,   -22,   -22,   -22,   -22,
     -22,   575,   576,   -87,    63,   -87,   -87,   -87,   -87,   -22,
     260,   583,   192,   302,   261,   276,   301,   577,   108,   108,
     108,   -66,   -67,   108,   -68,   -69,   262,   263,   193,   108,
     -65,     0,   264,   265,   266,   267,   447,   448,   268,   -57,
     -66,   581,   193,   276,   592,   269,   270,   271,   -57,   -57,
     593,   -67,   -68,   193,   -69,   -82,   -82,   -82,   -82,   -57,
     -65,   322,   247,   247,   247,   469,   470,   -57,   -57,   -57,
     -57,   -57,   -57,   -82,   594,   599,   600,   601,   193,   602,
     -81,   332,   -81,   -81,   329,   330,   481,   482,     0,    10,
       0,     0,   193,   -83,   -83,   -83,   -83,     0,     0,     0,
     346,     0,     0,   511,   302,   302,   302,   302,   517,   518,
       0,   -83,   357,     0,   246,   193,   193,     0,     0,   225,
     247,    63,     0,     0,   215,     0,   255,     0,   216,     0,
       0,    61,     0,    94,     0,     0,   322,     0,     0,    95,
      96,     0,     0,     0,   246,   382,   217,   218,   219,   220,
     191,   191,   -86,   191,   -86,   -86,   -86,   -86,   -86,   221,
      97,   222,     0,     0,   396,     0,   301,     0,     0,   -84,
     107,   -84,   -84,   -84,   -84,   245,   -88,    61,   -88,   -88,
     -88,   -88,   511,   304,     0,   305,     0,     0,   193,     0,
       0,     0,   215,     0,    62,     0,   216,     0,   107,   306,
     307,   308,   107,   301,     0,   309,   310,   311,    96,    30,
      31,    32,    33,   312,   217,   218,   219,   220,   332,     0,
       0,     0,   225,   313,     0,     0,     0,   221,   253,   222,
       0,   191,   346,     0,   275,   300,     0,   107,   107,   107,
       0,     0,   107,   357,     0,     0,     0,     0,   107,     0,
       0,     0,   246,   246,   246,     0,   -85,   193,   -85,   -85,
     -85,   -85,   275,     0,     0,   588,   589,     0,   382,     0,
       0,   569,   -88,   302,   -88,   -88,   -88,   -88,   -88,     0,
     191,   -87,   396,   -87,   -87,   -87,   -87,   -87,   -86,   -86,
     -86,   -86,   -86,   510,   301,   301,   301,   301,     0,   -25,
     191,   -25,   -25,     0,     0,   192,   192,     0,     0,   108,
     246,    62,     0,     0,     0,   -25,   -25,   -25,   -25,   191,
       0,   -25,   -25,   -25,     0,   -25,   -25,   -25,   -25,   -25,
     -25,   191,   -38,   245,   -38,     0,   -38,     0,     0,   -25,
     -81,   -38,   -81,   -81,   572,   573,   -81,   -38,   -38,   -87,
     -87,   -87,   -87,   -87,   -38,   -38,   -38,   -38,   -81,   -81,
     -81,    89,    90,   245,   191,     0,     0,   -38,   -38,   -38,
       0,   -17,   510,   -17,   -17,     0,     0,   -79,   561,   -79,
     -79,   329,   330,   191,     0,   300,     0,   -17,   -17,   -17,
     -17,     0,     0,   -17,   -17,   -17,     0,   -17,   -17,   -17,
     -17,   -17,   -17,   -84,     0,   -84,   -84,   -84,   -84,   -84,
       0,   -17,   108,    61,   -23,     0,   -23,   -23,     0,     0,
       0,   -88,   300,   -88,   -88,   -88,   -88,   -88,     0,     0,
     -23,   -23,   -23,   -23,     0,     0,   -23,   -23,   -23,     0,
     -23,   -23,   -23,   -23,   -23,   -23,   -85,   561,   -85,   -85,
     -85,   -85,   -85,     0,   -23,     0,     0,     0,   -24,     0,
     -24,   -24,   -89,   301,   -89,   -89,   -89,   -89,   -89,     0,
       0,   245,   245,   245,   -24,   -24,   -24,   -24,     0,     0,
     -24,   -24,   -24,     0,   -24,   -24,   -24,   -24,   -24,   -24,
     -79,     0,   -79,   -79,   572,   573,   -79,   -80,   -24,   -80,
     -80,   572,   573,   -80,   -82,     0,   -82,   -82,   -82,   -82,
     -82,     0,   509,   300,   300,   300,   300,   -16,     0,   -16,
     -16,     0,     0,     0,   191,   191,     0,     0,   107,   245,
      61,     0,     0,   -16,   -16,   -16,   -16,     0,     0,   -16,
     -16,   -16,     0,   -16,   -16,   -16,   -16,   -16,   -16,   -30,
       0,   -30,   -30,     0,     0,     0,   -83,   -16,   -83,   -83,
     -83,   -83,   -83,     0,     0,   -30,   -30,   -30,   -30,     0,
       0,   -30,   -30,   -30,     0,   -30,   -30,   -30,   -30,   -30,
     -30,     0,   -29,     0,   -29,   -29,     0,     0,     0,   -30,
     -80,   509,   -80,   -80,   329,   330,     0,   191,   -29,   -29,
     -29,   -29,     0,     0,   -29,   -29,   -29,     0,   -29,   -29,
     -29,   -29,   -29,   -29,     0,     0,   -26,     0,   -26,   -26,
       0,     0,   -29,   -87,   -87,   -87,   -87,   -87,   -87,     0,
       0,   107,   -26,   -26,   -26,   -26,     0,     0,   -26,   -26,
     -26,     0,   -26,   -26,   -26,   -26,   -26,   -26,   -27,     0,
     -27,   -27,     0,     0,     0,     0,   -26,   -81,   -81,   -81,
     393,   394,   -81,     0,   -27,   -27,   -27,   -27,     0,     0,
     -27,   -27,   -27,     0,   -27,   -27,   -27,   -27,   -27,   -27,
       0,   -28,   300,   -28,   -28,     0,     0,     0,   -27,   -84,
     -84,   -84,   -84,   -84,   -84,     0,     0,   -28,   -28,   -28,
     -28,     0,     0,   -28,   -28,   -28,     0,   -28,   -28,   -28,
     -28,   -28,   -28,   -34,     0,   -34,   -34,     0,     0,     0,
       0,   -28,   -88,   -88,   -88,   -88,   -88,   -88,     0,   -34,
     -34,   -34,   -34,     0,     0,   -34,   -34,   -34,     0,   -34,
     -34,   -34,   -34,   -34,   -34,   -32,     0,   -32,   -32,     0,
       0,     0,     0,   -34,   -85,   -85,   -85,   -85,   -85,   -85,
       0,   -32,   -32,   -32,   -32,     0,     0,   -32,   -32,   -32,
       0,   -32,   -32,   -32,   -32,   -32,   606,   -35,     0,   -35,
     -35,     0,     0,     0,     0,   -32,   -89,   -89,   -89,   -89,
     -89,   -89,     0,   -35,   -35,   -35,   -35,     0,     0,   -35,
     -35,   -35,     0,   -35,   -35,   -35,   -35,   -35,   -35,   -36,
       0,   -36,   -36,     0,     0,     0,     0,   -35,   -79,   -79,
     -79,   393,   394,   -79,     0,   -36,   -36,   -36,   -36,     0,
       0,   -36,   -36,   -36,     0,   -36,   -36,   -36,   -36,   -36,
     -36,   -33,     0,   -33,   -33,     0,     0,     0,     0,   -36,
     -80,   -80,   -80,   393,   394,   -80,     0,   -33,   -33,   -33,
     -33,     0,     0,   -33,   -33,   -33,     0,   -33,   -33,   -33,
     -33,   -33,   -33,   -31,     0,   -31,   -31,     0,     0,     0,
       0,   -33,   -82,   -82,   -82,   -82,   -82,   -82,     0,   -31,
     -31,   -31,   -31,     0,     0,   -31,   -31,   -31,     0,   -31,
     -31,   -31,   -31,   -31,   -20,     0,   -20,   -20,   -84,   -84,
     -84,   -84,   -84,   -31,   -83,   -83,   -83,   -83,   -83,   -83,
     -20,   -20,   -20,   -20,     0,     0,   -20,   -20,   -20,     0,
     -20,   -20,   -20,   -20,   -20,   -22,     0,   -22,   -22,     0,
       0,     0,     0,   -89,   -20,   -89,   -89,   -89,   -89,     0,
       0,   -22,   -22,   -22,   -22,     0,     0,   -22,   -22,   -22,
       0,   -22,   -22,   -22,   -22,   -22,    21,     0,   175,    74,
       0,     0,     0,     0,   -82,   -22,   -82,   -82,   -82,   -82,
       0,     0,    23,    24,    25,    26,     0,     0,    27,    28,
      29,     0,    30,    31,    32,    33,    34,   -19,     0,   -19,
     -19,     0,     0,     0,     0,   -83,    35,   -83,   -83,   -83,
     -83,     0,     0,   -19,   -19,   -19,   -19,     0,     0,   -19,
     -19,   -19,     0,   -19,   -19,   -19,   -19,   -19,   -21,     0,
     -21,   -21,   -88,   -88,   -88,   -88,   -88,   -19,   -85,   -85,
     -85,   -85,   -85,     0,   -21,   -21,   -21,   -21,     0,     0,
     -21,   -21,   -21,     0,   -21,   -21,   -21,   -21,   -21,   -25,
       0,   -25,   -25,   -89,   -89,   -89,   -89,   -89,   -21,   -79,
     -79,   -79,    89,    90,     0,   -25,   -25,   -25,   -25,     0,
       0,   -25,   -25,   -25,     0,   -25,   -25,   -25,   -25,   -25,
     -18,     0,   -18,   -18,   -80,   -80,   -80,    89,    90,   -25,
     -82,   -82,   -82,   -82,   -82,     0,   -18,   -18,   -18,   -18,
       0,     0,   -18,   -18,   -18,     0,   -18,   -18,   -18,   -18,
     -18,   -23,     0,   -23,   -23,   -83,   -83,   -83,   -83,   -83,
     -18,     0,     0,     0,     0,     0,     0,   -23,   -23,   -23,
     -23,     0,     0,   -23,   -23,   -23,     0,   -23,   -23,   -23,
     -23,   -23,   -24,     0,   -24,   -24,     0,     0,     0,     0,
       0,   -23,     0,     0,     0,     0,     0,     0,   -24,   -24,
     -24,   -24,     0,     0,   -24,   -24,   -24,     0,   -24,   -24,
     -24,   -24,   -24,   -30,     0,   -30,   -30,     0,     0,     0,
       0,     0,   -24,     0,     0,     0,     0,     0,     0,   -30,
     -30,   -30,   -30,     0,     0,   -30,   -30,   -30,     0,   -30,
     -30,   -30,   -30,   -30,   -29,     0,   -29,   -29,     0,     0,
       0,     0,     0,   -30,     0,     0,     0,     0,     0,     0,
     -29,   -29,   -29,   -29,     0,     0,   -29,   -29,   -29,     0,
     -29,   -29,   -29,   -29,   -29,   -26,     0,   -26,   -26,     0,
       0,     0,     0,     0,   -29,     0,     0,     0,     0,     0,
       0,   -26,   -26,   -26,   -26,     0,     0,   -26,   -26,   -26,
       0,   -26,   -26,   -26,   -26,   -26,   -27,     0,   -27,   -27,
       0,     0,     0,     0,     0,   -26,     0,     0,     0,     0,
       0,     0,   -27,   -27,   -27,   -27,     0,     0,   -27,   -27,
     -27,     0,   -27,   -27,   -27,   -27,   -27,   -28,     0,   -28,
     -28,     0,     0,     0,     0,     0,   -27,     0,     0,     0,
       0,     0,     0,   -28,   -28,   -28,   -28,     0,     0,   -28,
     -28,   -28,     0,   -28,   -28,   -28,   -28,   -28,   -34,     0,
     -34,   -34,     0,     0,     0,     0,     0,   -28,     0,     0,
       0,     0,     0,     0,   -34,   -34,   -34,   -34,     0,     0,
     -34,   -34,   -34,     0,   -34,   -34,   -34,   -34,   -34,   -35,
       0,   -35,   -35,     0,     0,     0,     0,     0,   -34,     0,
       0,     0,     0,     0,     0,   -35,   -35,   -35,   -35,     0,
       0,   -35,   -35,   -35,     0,   -35,   -35,   -35,   -35,   -35,
     -36,     0,   -36,   -36,     0,     0,     0,     0,     0,   -35,
       0,     0,     0,     0,     0,     0,   -36,   -36,   -36,   -36,
       0,     0,   -36,   -36,   -36,     0,   -36,   -36,   -36,   -36,
     -36,   -33,     0,   -33,   -33,     0,     0,     0,     0,     0,
     -36,     0,     0,     0,     0,     0,     0,   -33,   -33,   -33,
     -33,     0,     0,   -33,   -33,   -33,     0,   -33,   -33,   -33,
     -33,   -33,    21,     0,   175,   319,     0,     0,     0,     0,
       0,   -33,     0,     0,     0,     0,     0,     0,    23,    24,
      25,    26,     0,     0,    27,    28,    29,     0,    30,    31,
      32,    33,    34,    -9,     0,    -9,    -9,     0,     0,     0,
       0,     0,    35,     0,     0,     0,     0,     0,     0,    -9,
      -9,    -9,    -9,     0,     0,    -9,    -9,    -9,     0,    -9,
      -9,    -9,    -9,    -9,    21,     0,   175,   417,     0,     0,
       0,     0,     0,    -9,     0,     0,     0,     0,     0,     0,
      23,    24,    25,    26,     0,     0,    27,    28,    29,     0,
      30,    31,    32,    33,    34,   -17,     0,   -17,   -17,     0,
       0,     0,     0,     0,    35,     0,     0,     0,     0,     0,
       0,   -17,   -17,   -17,   -17,     0,     0,   -17,   -17,   -17,
       0,   -17,   -17,   -17,   -17,   -17,    21,     0,   175,   430,
       0,     0,     0,     0,     0,   -17,     0,     0,     0,     0,
       0,     0,    23,    24,    25,    26,     0,     0,    27,    28,
      29,     0,    30,    31,    32,    33,    34,    21,     0,   175,
     521,     0,     0,     0,     0,     0,    35,     0,     0,     0,
       0,     0,     0,    23,    24,    25,    26,     0,     0,    27,
      28,    29,     0,    30,    31,    32,    33,    34,   -16,     0,
     -16,   -16,     0,     0,     0,     0,     0,    35,     0,     0,
       0,     0,     0,     0,   -16,   -16,   -16,   -16,     0,     0,
     -16,   -16,   -16,     0,   -16,   -16,   -16,   -16,   -16,     0,
     -38,   -38,     0,     0,   -38,     0,     0,     0,   -16,   -38,
       0,     0,     0,     0,     0,   -38,   -38,   279,   596,     0,
       0,   280,   -38,   -38,   -38,   -38,   281,     0,     0,     0,
       0,     0,   282,   283,   215,   -38,   -38,   -38,   216,   284,
     285,   286,   287,    94,     0,     0,     0,     0,     0,    95,
      96,   279,   288,   289,   290,   280,   217,   218,   219,   220,
     281,     0,     0,     0,     0,     0,   282,   283,   493,   221,
      97,   222,   494,   284,   285,   286,   287,     0,     0,     0,
       0,     0,     0,     0,   495,   496,   288,   289,   290,     0,
     497,   498,   499,   500,     0,     0,   501,   279,     0,     0,
       0,   280,     0,   502,   503,   504,   281,     0,     0,     0,
       0,     0,     0,   283,   -59,     0,     0,     0,   -59,   284,
     285,   286,   287,     0,     0,     0,     0,     0,     0,     0,
     -59,   -60,   288,   400,   290,   -60,   -59,   -59,   -59,   -59,
       0,     0,     0,     0,     0,     0,     0,   -60,   -63,   -59,
     -59,   -59,   -63,   -60,   -60,   -60,   -60,     0,     0,     0,
       0,     0,     0,     0,   -63,   -61,   -60,   -60,   -60,   -61,
     -63,   -63,   -63,   -63,     0,     0,     0,     0,     0,     0,
       0,   -61,   -62,   -63,   -63,   -63,   -62,   -61,   -61,   -61,
     -61,     0,     0,     0,     0,     0,     0,     0,   -62,   227,
     -61,   -61,   -61,   228,   -62,   -62,   -62,   -62,     0,     0,
       0,     0,     0,     0,     0,   230,   279,   -62,   -62,   -62,
     280,   231,   232,   233,   234,     0,     0,     0,     0,     0,
       0,     0,   283,     0,   235,   236,   237,     0,   284,   285,
     286,   287,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   288,   400,   290,   254,     0,   -88,   -88,   -88,   -88,
     -88,   -88,   130,     0,   -88,   -88,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -88,     0,     0,     0,     0,
       0,     0,     0,   -88,   -88,   -88,   -88,   -88,   -88,   407,
     -88,     0,   -88,   -88,   -88,   -88,   -88,   408,     0,   -88,
     -88,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -88,     0,     0,     0,     0,     0,     0,     0,   -88,   -88,
     -88,   -88,   -88,   -88,   254,     0,   -88,   -88,   -88,   -88,
     -88,   -88,     0,     0,   -88,   -88,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -88,     0,     0,     0,     0,
       0,     0,     0,   -88,   -88,   -88,   -88,   -88,   -88,   407,
     -88,     0,   -88,   -88,   -88,   -88,   -88,     0,     0,   -88,
     -88,     0,     0,   366,   -88,     0,   -88,   -88,   -88,   -88,
     -88,     0,     0,   -88,   -88,     0,     0,     0,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,     0,     0,     0,     0,     0,
       0,     0,   -88,   -88,   -88,   -88,   -88,   -88,   -86,     0,
     -86,   -86,   -86,   -86,   -86,     0,     0,   -86,   -86,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -86,     0,
       0,     0,     0,     0,     0,     0,   -86,   -86,   -86,   -86,
     -86,   -86,   -87,     0,   -87,   -87,   -87,   -87,   -87,     0,
       0,   -87,   -87,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -87,     0,     0,     0,     0,     0,     0,     0,
     -87,   -87,   -87,   -87,   -87,   -87,   -81,     0,   -81,   -81,
     415,   416,   -81,     0,     0,   -81,   -81,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -81,     0,     0,     0,
       0,     0,     0,     0,   -81,   -81,   -81,   -81,   -81,   -81,
     -84,     0,   -84,   -84,   -84,   -84,   -84,     0,     0,   -84,
     -84,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -84,     0,     0,     0,     0,     0,     0,     0,   -84,   -84,
     -84,   -84,   -84,   -84,   -88,     0,   -88,   -88,   -88,   -88,
     -88,     0,     0,   -88,   -88,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -88,     0,     0,     0,     0,     0,
       0,     0,   -88,   -88,   -88,   -88,   -88,   -88,   -85,     0,
     -85,   -85,   -85,   -85,   -85,     0,     0,   -85,   -85,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -85,     0,
       0,     0,     0,     0,     0,     0,   -85,   -85,   -85,   -85,
     -85,   -85,   -89,     0,   -89,   -89,   -89,   -89,   -89,     0,
       0,   -89,   -89,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -89,     0,     0,     0,     0,     0,     0,     0,
     -89,   -89,   -89,   -89,   -89,   -89,   -79,     0,   -79,   -79,
     415,   416,   -79,     0,     0,   -79,   -79,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -79,     0,     0,     0,
       0,     0,     0,     0,   -79,   -79,   -79,   -79,   -79,   -79,
     -80,     0,   -80,   -80,   415,   416,   -80,     0,     0,   -80,
     -80,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -80,     0,     0,     0,     0,     0,     0,     0,   -80,   -80,
     -80,   -80,   -80,   -80,   -82,     0,   -82,   -82,   -82,   -82,
     -82,     0,     0,   -82,   -82,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -82,     0,     0,     0,     0,     0,
       0,     0,   -82,   -82,   -82,   -82,   -82,   -82,   -83,     0,
     -83,   -83,   -83,   -83,   -83,     0,     0,   -83,   -83,     0,
       0,     0,   -86,     0,   -86,   -86,   -86,   -86,   -83,     0,
       0,   -86,   -86,     0,     0,     0,   -83,   -83,   -83,   -83,
     -83,   -83,   -86,     0,     0,     0,     0,     0,     0,     0,
     -86,   -86,   -86,   -86,   -86,   -86,   -87,     0,   -87,   -87,
     -87,   -87,     0,     0,     0,   -87,   -87,     0,     0,     0,
     -81,     0,   -81,   -81,   372,   373,   -87,     0,     0,   -81,
     -81,     0,     0,     0,   -87,   -87,   -87,   -87,   -87,   -87,
     -81,     0,     0,     0,     0,     0,     0,     0,   -81,   -81,
     -81,   -81,   -81,   -81,   -84,     0,   -84,   -84,   -84,   -84,
       0,     0,     0,   -84,   -84,     0,     0,     0,   -88,     0,
     -88,   -88,   -88,   -88,   -84,     0,     0,   -88,   -88,     0,
       0,     0,   -84,   -84,   -84,   -84,   -84,   -84,   -88,     0,
       0,     0,     0,     0,     0,     0,   -88,   -88,   -88,   -88,
     -88,   -88,   -85,     0,   -85,   -85,   -85,   -85,     0,     0,
       0,   -85,   -85,     0,     0,     0,   -89,     0,   -89,   -89,
     -89,   -89,   -85,     0,     0,   -89,   -89,     0,     0,     0,
     -85,   -85,   -85,   -85,   -85,   -85,   -89,     0,     0,     0,
       0,     0,     0,     0,   -89,   -89,   -89,   -89,   -89,   -89,
     -79,     0,   -79,   -79,   372,   373,     0,     0,     0,   -79,
     -79,     0,     0,     0,   -80,     0,   -80,   -80,   372,   373,
     -79,     0,     0,   -80,   -80,     0,     0,     0,   -79,   -79,
     -79,   -79,   -79,   -79,   -80,     0,     0,     0,     0,     0,
       0,     0,   -80,   -80,   -80,   -80,   -80,   -80,   -82,     0,
     -82,   -82,   -82,   -82,     0,     0,     0,   -82,   -82,     0,
       0,     0,   -83,     0,   -83,   -83,   -83,   -83,   -82,     0,
       0,   -83,   -83,     0,     0,     0,   -82,   -82,   -82,   -82,
     -82,   -82,   -83,     0,     0,     0,     0,     0,     0,     0,
     -83,   -83,   -83,   -83,   -83,   -83,   -56,     0,   413,   414,
       0,     0,   -56,     0,     0,   -56,   -56,     0,     0,     0,
     -56,     0,   370,   371,     0,     0,   -56,     0,     0,   -56,
     -56,     0,     0,     0,   -56,   -56,   -56,   -56,   -56,   -56,
     -56,     0,     0,     0,     0,     0,     0,     0,   -56,   -56,
     -56,   -56,   -56,   -56,   -51,     0,     0,     0,     0,     0,
     -51,   -55,     0,   139,   140,     0,     0,   -55,     0,     0,
     -55,   -55,     0,     0,   141,     0,     0,     0,     0,     0,
       0,   -55,   -51,   -51,   142,   143,   -51,   -51,     0,   -55,
     -55,   -55,   -55,   -55,   -55,   -76,     0,     0,     0,     0,
       0,   -76,   -77,     0,   -76,   -76,     0,     0,   -77,     0,
       0,   -77,   -77,     0,     0,   -76,     0,     0,     0,     0,
       0,     0,   -77,   -76,   -76,   -76,   -76,   -76,   -76,     0,
     -77,   -77,   -77,   -77,   -77,   -77,   -58,     0,     0,     0,
       0,     0,   -58,   -78,     0,   -58,   -58,     0,     0,   -78,
       0,     0,   -78,   -78,     0,     0,   -58,     0,     0,     0,
       0,     0,     0,   -78,   -58,   -58,   -58,   -58,   -58,   -58,
       0,   -78,   -78,   -78,   -78,   -78,   -78,   -50,     0,     0,
       0,     0,     0,   -50,   -54,     0,   139,   140,     0,     0,
     -54,     0,     0,   -54,   -54,     0,     0,   141,     0,     0,
       0,     0,     0,     0,   -54,   -50,   -50,   142,   143,   -50,
     -50,     0,   -54,   -54,   -54,   -54,   -54,   -54,   -66,     0,
       0,     0,     0,     0,   -66,   -67,     0,   -66,   -66,     0,
       0,   -67,     0,     0,   -67,   -67,     0,     0,   -66,     0,
       0,     0,     0,     0,     0,   -67,   -66,   -66,   -66,   -66,
     -66,   -66,     0,   -67,   -67,   -67,   -67,   -67,   -67,   -68,
       0,     0,     0,     0,     0,   -68,   -69,     0,   -68,   -68,
       0,     0,   -69,     0,     0,   -69,   -69,     0,     0,   -68,
       0,     0,     0,     0,     0,     0,   -69,   -68,   -68,   -68,
     -68,   -68,   -68,   -51,   -69,   -69,   -69,   -69,   -69,   -69,
     -65,     0,   139,   140,     0,     0,   -65,   -55,     0,   -65,
     -65,     0,     0,   141,     0,     0,   -55,   -55,     0,     0,
     -65,   -51,   -51,   142,   143,   -51,   -51,   -55,   -65,   -65,
     -65,   -65,   -65,   -65,   -76,   -55,   -55,   -55,   -55,   -55,
     -55,   -77,     0,   -76,   -76,     0,     0,     0,   -58,     0,
     -77,   -77,     0,     0,   -76,     0,     0,   -58,   -58,     0,
       0,   -77,   -76,   -76,   -76,   -76,   -76,   -76,   -58,   -77,
     -77,   -77,   -77,   -77,   -77,   -78,   -58,   -58,   -58,   -58,
     -58,   -58,   -50,     0,   -78,   -78,     0,     0,     0,   -54,
       0,   139,   140,     0,     0,   -78,     0,     0,   -54,   -54,
       0,     0,   141,   -78,   -78,   -78,   -78,   -78,   -78,   -54,
     -50,   -50,   142,   143,   -50,   -50,   -66,   -54,   -54,   -54,
     -54,   -54,   -54,   -67,     0,   -66,   -66,     0,     0,     0,
     -68,     0,   -67,   -67,     0,     0,   -66,     0,     0,   -68,
     -68,     0,     0,   -67,   -66,   -66,   -66,   -66,   -66,   -66,
     -68,   -67,   -67,   -67,   -67,   -67,   -67,   -69,   -68,   -68,
     -68,   -68,   -68,   -68,   -65,     0,   -69,   -69,     0,     0,
       0,     0,     0,   -65,   -65,     0,     0,   -69,     0,     0,
       0,     0,     0,     0,   -65,   -69,   -69,   -69,   -69,   -69,
     -69,     0,   -65,   -65,   -65,   -65,   -65,   -65,   -86,   -86,
     -86,   -86,   -86,   -86,     0,     0,   -86,   -86,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -86,     0,     0,
       0,     0,     0,     0,     0,   -86,   -86,   -86,   -86,   -86,
     -86,   -87,   -87,   -87,   -87,   -87,   -87,     0,     0,   -87,
     -87,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -87,     0,     0,     0,     0,     0,     0,     0,   -87,   -87,
     -87,   -87,   -87,   -87,   -81,   -81,   -81,   354,   355,   -81,
       0,     0,   -81,   -81,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -81,     0,     0,     0,     0,     0,     0,
       0,   -81,   -81,   -81,   -81,   -81,   -81,   -84,   -84,   -84,
     -84,   -84,   -84,     0,     0,   -84,   -84,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -84,     0,     0,     0,
       0,     0,     0,     0,   -84,   -84,   -84,   -84,   -84,   -84,
     -88,   -88,   -88,   -88,   -88,   -88,     0,     0,   -88,   -88,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -88,
       0,     0,     0,     0,     0,     0,     0,   -88,   -88,   -88,
     -88,   -88,   -88,   -85,   -85,   -85,   -85,   -85,   -85,     0,
       0,   -85,   -85,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -85,     0,     0,     0,     0,     0,     0,     0,
     -85,   -85,   -85,   -85,   -85,   -85,   -79,   -79,   -79,   354,
     355,   -79,     0,     0,   -79,   -79,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -79,     0,     0,     0,     0,
       0,     0,     0,   -79,   -79,   -79,   -79,   -79,   -79,   -80,
     -80,   -80,   354,   355,   -80,     0,     0,   -80,   -80,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -80,     0,
       0,     0,     0,     0,     0,     0,   -80,   -80,   -80,   -80,
     -80,   -80,   -89,   -89,   -89,   -89,   -89,   -89,     0,     0,
     -89,   -89,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -89,     0,     0,     0,     0,     0,     0,     0,   -89,
     -89,   -89,   -89,   -89,   -89,   -82,   -82,   -82,   -82,   -82,
     -82,     0,     0,   -82,   -82,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -82,     0,     0,     0,     0,     0,
       0,     0,   -82,   -82,   -82,   -82,   -82,   -82,   -83,   -83,
     -83,   -83,   -83,   -83,     0,     0,   -83,   -83,     0,     0,
       0,     0,     0,   -56,   257,   258,     0,   -83,   -56,     0,
       0,   -56,   -56,     0,     0,   -83,   -83,   -83,   -83,   -83,
     -83,     0,   -56,     0,     0,     0,     0,     0,     0,     0,
     -56,   -56,   -56,   -56,   -56,   -56,   -57,     0,     0,     0,
       0,   -57,   -51,     0,   -57,   -57,     0,   -51,     0,     0,
     139,   140,     0,     0,     0,   -57,     0,     0,     0,     0,
       0,   141,     0,   -57,   -57,   -57,   -57,   -57,   -57,   -51,
     -51,   142,   143,   -51,   -51,   -55,     0,     0,     0,     0,
     -55,   -58,     0,   -55,   -55,     0,   -58,     0,     0,   -58,
     -58,     0,     0,     0,   -55,     0,     0,     0,     0,     0,
     -58,     0,   -55,   -55,   -55,   -55,   -55,   -55,   -58,   -58,
     -58,   -58,   -58,   -58,   -50,     0,     0,     0,     0,   -50,
     -54,     0,   139,   140,     0,   -54,     0,     0,   -54,   -54,
       0,     0,     0,   141,     0,     0,     0,     0,     0,   -54,
       0,   -50,   -50,   142,   143,   -50,   -50,   -54,   -54,   -54,
     -54,   -54,   -54,   -76,     0,     0,     0,     0,   -76,   -77,
       0,   -76,   -76,     0,   -77,     0,     0,   -77,   -77,     0,
       0,     0,   -76,     0,     0,     0,     0,     0,   -77,     0,
     -76,   -76,   -76,   -76,   -76,   -76,   -77,   -77,   -77,   -77,
     -77,   -77,   -78,     0,     0,     0,     0,   -78,   -65,     0,
     -78,   -78,     0,   -65,     0,     0,   -65,   -65,     0,     0,
       0,   -78,     0,     0,     0,     0,     0,   -65,     0,   -78,
     -78,   -78,   -78,   -78,   -78,   -65,   -65,   -65,   -65,   -65,
     -65,   -66,     0,     0,     0,     0,   -66,   -67,     0,   -66,
     -66,     0,   -67,     0,     0,   -67,   -67,     0,     0,     0,
     -66,     0,     0,     0,     0,     0,   -67,     0,   -66,   -66,
     -66,   -66,   -66,   -66,   -67,   -67,   -67,   -67,   -67,   -67,
     -68,     0,     0,     0,     0,   -68,   -69,     0,   -68,   -68,
       0,   -69,     0,     0,   -69,   -69,     0,     0,     0,   -68,
       0,     0,     0,     0,     0,   -69,     0,   -68,   -68,   -68,
     -68,   -68,   -68,   -69,   -69,   -69,   -69,   -69,   -69
};

static const yytype_int16 yycheck[] =
{
      16,   241,   175,    20,    71,    18,    98,    98,    71,   126,
     240,   131,   149,   133,    27,   254,    41,     6,     6,     0,
      38,     5,    71,    12,    12,    38,    41,    15,    16,    13,
      71,     6,   149,    46,    47,    71,    49,     5,    26,   131,
       5,     9,     7,   160,     6,    94,    34,    35,    36,    37,
      38,    39,    41,    66,   171,   172,   296,     5,    71,     0,
      73,     9,     3,    38,   131,   295,     3,   134,   131,     5,
       8,     9,    40,    41,    42,     5,    38,    39,    20,     9,
      41,    94,   131,     6,    14,    98,   135,     6,    26,   328,
     131,    21,    40,    41,    42,   131,     6,    27,    28,    29,
      30,   340,   138,   144,    40,    41,    42,     5,     5,     5,
      40,    41,    42,   126,   127,    38,    39,   130,   131,    38,
     133,   134,   135,    41,     6,   138,     5,   366,    38,    39,
       5,   144,   305,   149,     9,     5,   149,     5,     5,    14,
       5,    18,     9,    13,     5,   158,    21,   160,     5,     5,
      27,   390,    27,    28,    29,    30,    38,    39,   171,   172,
       5,    38,   175,   176,     5,    40,    41,    42,   407,    46,
      47,    71,    49,    40,    41,    42,     6,    41,     7,     7,
     229,     7,    12,   196,    40,    41,    42,     6,   229,    66,
       7,     7,   259,   229,    71,     6,    73,     6,   318,     5,
       7,    12,   215,     9,    34,    35,     6,     5,    38,    39,
     259,     9,    12,     7,   227,     7,   229,    94,   259,    38,
      39,    98,     7,   259,     7,    34,    35,   467,     5,    38,
      39,   131,   281,     7,    40,    41,    42,    41,    38,    39,
     281,     6,    40,    41,    42,   281,   259,   260,     6,   126,
     127,   318,     5,   130,   131,   318,   133,   134,   135,     0,
       1,   138,     6,    40,    41,    42,   279,   144,   281,   318,
       0,     1,   149,     0,     1,   515,     5,   318,     6,    20,
       9,   158,   318,   160,    12,    41,     7,    40,    41,    42,
      20,    12,   305,    20,   171,   172,   309,     6,   175,   176,
       5,     6,   320,    12,     9,   318,     6,   320,     6,    14,
      38,    40,    41,    42,    12,    20,    21,    38,   367,   196,
       6,     6,    27,    28,    29,    30,   367,   368,   369,   229,
     569,   367,   368,   424,     7,    40,    41,    42,   215,    12,
      38,    39,   409,     5,     7,    27,     7,     9,     7,    12,
     227,    12,   229,    12,   367,   368,   369,     5,   425,   259,
     409,   410,   425,     6,    46,    47,     6,     6,   409,   410,
     411,   412,    12,   409,   410,   411,   425,    26,    40,    41,
      42,   281,   259,   260,   425,     6,     5,     8,     9,   425,
       9,    73,    40,    41,    42,   408,   409,   410,   411,   412,
     418,     7,   279,     6,   281,   418,    12,   420,   421,    12,
       6,   424,   425,   426,     5,     7,    12,     5,   318,     6,
      12,    40,    41,    42,     6,    12,     6,    13,   305,     5,
      12,     6,   309,    20,     7,   527,   527,    12,     6,    12,
     577,   318,   579,   320,    12,   127,    38,    39,   130,    40,
      41,    42,    40,    41,    42,     6,    38,    39,   578,   596,
     577,    12,   579,     7,    40,    41,    42,   367,   605,   606,
       7,     5,     7,     6,   487,     9,   158,    12,     7,   596,
     493,     0,     1,    68,    69,    70,   578,    21,   605,   606,
     367,   368,   369,    27,    28,    29,    30,     0,     1,    34,
      35,    20,     7,    38,    39,     7,    40,    41,    42,   409,
     410,   578,     7,     6,   527,   578,     7,    20,     5,    12,
       6,     8,     9,    10,    11,   425,    12,     7,     7,   578,
       6,   408,   409,   410,   411,   412,    12,   578,     7,    26,
      41,   418,   578,   420,   421,    38,    39,   424,   425,   426,
       6,     5,    38,    39,     6,     9,     8,     9,     0,     1,
      12,   577,    27,   579,   577,   578,   579,    21,    22,     7,
       8,     9,     7,    27,    28,    29,    30,    12,    20,    33,
     596,    46,    47,   596,    49,    50,    40,    41,    42,   605,
     606,     6,   605,   606,     0,     1,     6,     0,     1,    26,
       7,    66,    12,    38,    39,    12,    71,     7,    73,     6,
     487,     5,    12,     5,    20,    12,   493,    20,    83,     1,
       6,     3,    87,    88,    89,    90,    12,   309,     6,    94,
       5,    38,    39,    98,    12,    17,    18,    19,    38,    39,
       5,    23,    24,    25,     6,    27,    28,    29,    30,    31,
     527,     6,     0,     1,     0,     1,     7,    12,     7,    41,
       5,    12,   127,    12,     9,   130,   131,     6,   133,   134,
     135,     6,    20,   138,    20,     6,    21,    22,   578,   144,
       6,    12,    27,    28,    29,    30,    12,    27,    33,    38,
      39,     6,     6,   158,     6,    40,    41,    42,    12,     5,
     577,   578,   579,     9,     6,    26,    46,    47,     6,    49,
      12,   176,   177,     7,    12,    21,    22,     5,    12,   596,
       7,    27,    28,    29,    30,    12,   408,    33,   605,   606,
       5,   196,   197,    73,    40,    41,    42,     5,   420,   421,
     325,   326,   327,     5,   426,     7,     8,     9,    10,    11,
     215,   216,   337,   338,   339,     8,     9,    10,    11,     6,
       5,    26,   227,   228,   229,    12,   351,   352,   353,    26,
      26,     5,     6,    26,     8,     9,    10,    11,   363,   364,
     365,    41,     6,     6,   249,   250,   251,   127,    12,    12,
     130,     6,   257,   258,   259,   260,   261,    12,    26,    26,
       6,     5,   387,   388,   389,   487,    12,     8,     9,    10,
      11,     6,     5,     5,   279,   280,   281,    12,   158,   404,
     405,   406,     7,     6,     5,    26,     7,    12,     9,    12,
       7,     6,     5,    14,     6,     6,   176,    12,   423,    20,
      21,    12,     5,     5,   309,     6,    27,    28,    29,    30,
       7,    12,     6,   318,     5,    12,   196,     6,    12,    40,
      41,    42,     7,    12,   329,   330,     5,    12,   333,     5,
       8,     9,    10,    11,     5,   215,     5,     6,   343,   344,
       9,     7,   347,     5,     5,    14,    12,   227,    26,   354,
     355,    20,    21,   358,     6,     5,     8,     9,    27,    28,
      29,    30,   367,   368,   369,   370,   371,   372,   373,     6,
       5,    40,    41,    42,     7,    12,     7,     5,   383,    12,
     260,    12,     8,     9,    10,    11,   391,   392,   393,   394,
       7,     5,   397,     5,     5,     8,     9,    10,    11,   279,
      26,     5,     5,   408,   409,   410,   411,   412,   413,   414,
     415,   416,    27,    26,     5,   420,   421,     7,     7,   424,
     425,   426,    12,    12,     5,     7,     7,     5,     9,   309,
      12,    46,    47,    14,    49,     8,     9,    10,    11,    20,
      21,   566,   567,   568,    41,     7,    27,    28,    29,    30,
      12,    66,     6,    26,     8,     9,    71,     6,    73,    40,
      41,    42,     8,     9,    10,    11,    41,     6,    83,     8,
       9,     6,    87,    88,     1,    41,     3,     4,     6,    94,
      26,    41,   487,    98,     6,     6,     8,     9,   493,   494,
      17,    18,    19,    20,    41,     6,    23,    24,    25,    13,
      27,    28,    29,    30,    31,    32,     7,    41,     1,    41,
       3,     4,   127,    26,    41,   130,   131,     6,   133,   134,
     135,     6,   527,   138,    17,    18,    19,    20,   408,   144,
      23,    24,    25,     6,    27,    28,    29,    30,    31,    32,
     420,   421,     6,   158,     8,     9,   426,     6,    41,     8,
       9,     6,     8,     9,    10,    11,     6,   562,     7,     8,
       9,   176,     6,    12,     6,   570,   571,   572,   573,     1,
      26,     3,     4,   578,     7,     8,     9,    10,    11,    12,
       6,   196,     8,     9,     6,    17,    18,    19,    20,     6,
       6,    23,    24,    25,     6,    27,    28,    29,    30,    31,
     215,     6,    27,     8,     9,    10,    11,   487,     6,    41,
       8,     9,   227,   493,   229,     5,     7,     6,     6,     9,
       6,    46,    47,     5,    49,     7,     8,     9,    10,    11,
      12,    21,     6,     6,   249,   250,   251,    27,    28,    29,
      30,    66,   257,   258,   259,   260,    71,     6,    73,     6,
      40,    41,    42,     8,     9,    10,    11,     6,    83,     1,
       6,     3,     4,     6,   279,     6,   281,     6,     6,    94,
       6,    26,     5,    98,     5,    17,    18,    19,    20,     5,
       5,    23,    24,    25,     6,    27,    28,    29,    30,    31,
      32,     6,     6,     6,   309,     8,     9,    10,    11,    41,
       5,    41,   127,   318,     9,   130,   131,     6,   133,   134,
     135,     6,     6,   138,     6,     6,    21,    22,   333,   144,
       6,    -1,    27,    28,    29,    30,   341,   342,    33,     6,
      26,     6,   347,   158,     7,    40,    41,    42,    15,    16,
       7,    26,    26,   358,    26,     8,     9,    10,    11,    26,
      26,   176,   367,   368,   369,   370,   371,    34,    35,    36,
      37,    38,    39,    26,     7,     6,     6,     6,   383,     6,
       6,   196,     8,     9,    10,    11,   391,   392,    -1,     3,
      -1,    -1,   397,     8,     9,    10,    11,    -1,    -1,    -1,
     215,    -1,    -1,   408,   409,   410,   411,   412,   413,   414,
      -1,    26,   227,    -1,   229,   420,   421,    -1,    -1,   424,
     425,   426,    -1,    -1,     5,    -1,     7,    -1,     9,    -1,
      -1,    27,    -1,    14,    -1,    -1,   251,    -1,    -1,    20,
      21,    -1,    -1,    -1,   259,   260,    27,    28,    29,    30,
      46,    47,     6,    49,     8,     9,    10,    11,    12,    40,
      41,    42,    -1,    -1,   279,    -1,   281,    -1,    -1,     6,
      66,     8,     9,    10,    11,    71,     6,    73,     8,     9,
      10,    11,   487,     1,    -1,     3,    -1,    -1,   493,    -1,
      -1,    -1,     5,    -1,   309,    -1,     9,    -1,    94,    17,
      18,    19,    98,   318,    -1,    23,    24,    25,    21,    27,
      28,    29,    30,    31,    27,    28,    29,    30,   333,    -1,
      -1,    -1,   527,    41,    -1,    -1,    -1,    40,    41,    42,
      -1,   127,   347,    -1,   130,   131,    -1,   133,   134,   135,
      -1,    -1,   138,   358,    -1,    -1,    -1,    -1,   144,    -1,
      -1,    -1,   367,   368,   369,    -1,     6,   562,     8,     9,
      10,    11,   158,    -1,    -1,   570,   571,    -1,   383,    -1,
      -1,     5,     6,   578,     8,     9,    10,    11,    12,    -1,
     176,     6,   397,     8,     9,    10,    11,    12,     7,     8,
       9,    10,    11,   408,   409,   410,   411,   412,    -1,     1,
     196,     3,     4,    -1,    -1,   420,   421,    -1,    -1,   424,
     425,   426,    -1,    -1,    -1,    17,    18,    19,    20,   215,
      -1,    23,    24,    25,    -1,    27,    28,    29,    30,    31,
      32,   227,     5,   229,     7,    -1,     9,    -1,    -1,    41,
       6,    14,     8,     9,    10,    11,    12,    20,    21,     7,
       8,     9,    10,    11,    27,    28,    29,    30,     7,     8,
       9,    10,    11,   259,   260,    -1,    -1,    40,    41,    42,
      -1,     1,   487,     3,     4,    -1,    -1,     6,   493,     8,
       9,    10,    11,   279,    -1,   281,    -1,    17,    18,    19,
      20,    -1,    -1,    23,    24,    25,    -1,    27,    28,    29,
      30,    31,    32,     6,    -1,     8,     9,    10,    11,    12,
      -1,    41,   527,   309,     1,    -1,     3,     4,    -1,    -1,
      -1,     6,   318,     8,     9,    10,    11,    12,    -1,    -1,
      17,    18,    19,    20,    -1,    -1,    23,    24,    25,    -1,
      27,    28,    29,    30,    31,    32,     6,   562,     8,     9,
      10,    11,    12,    -1,    41,    -1,    -1,    -1,     1,    -1,
       3,     4,     6,   578,     8,     9,    10,    11,    12,    -1,
      -1,   367,   368,   369,    17,    18,    19,    20,    -1,    -1,
      23,    24,    25,    -1,    27,    28,    29,    30,    31,    32,
       6,    -1,     8,     9,    10,    11,    12,     6,    41,     8,
       9,    10,    11,    12,     6,    -1,     8,     9,    10,    11,
      12,    -1,   408,   409,   410,   411,   412,     1,    -1,     3,
       4,    -1,    -1,    -1,   420,   421,    -1,    -1,   424,   425,
     426,    -1,    -1,    17,    18,    19,    20,    -1,    -1,    23,
      24,    25,    -1,    27,    28,    29,    30,    31,    32,     1,
      -1,     3,     4,    -1,    -1,    -1,     6,    41,     8,     9,
      10,    11,    12,    -1,    -1,    17,    18,    19,    20,    -1,
      -1,    23,    24,    25,    -1,    27,    28,    29,    30,    31,
      32,    -1,     1,    -1,     3,     4,    -1,    -1,    -1,    41,
       6,   487,     8,     9,    10,    11,    -1,   493,    17,    18,
      19,    20,    -1,    -1,    23,    24,    25,    -1,    27,    28,
      29,    30,    31,    32,    -1,    -1,     1,    -1,     3,     4,
      -1,    -1,    41,     7,     8,     9,    10,    11,    12,    -1,
      -1,   527,    17,    18,    19,    20,    -1,    -1,    23,    24,
      25,    -1,    27,    28,    29,    30,    31,    32,     1,    -1,
       3,     4,    -1,    -1,    -1,    -1,    41,     7,     8,     9,
      10,    11,    12,    -1,    17,    18,    19,    20,    -1,    -1,
      23,    24,    25,    -1,    27,    28,    29,    30,    31,    32,
      -1,     1,   578,     3,     4,    -1,    -1,    -1,    41,     7,
       8,     9,    10,    11,    12,    -1,    -1,    17,    18,    19,
      20,    -1,    -1,    23,    24,    25,    -1,    27,    28,    29,
      30,    31,    32,     1,    -1,     3,     4,    -1,    -1,    -1,
      -1,    41,     7,     8,     9,    10,    11,    12,    -1,    17,
      18,    19,    20,    -1,    -1,    23,    24,    25,    -1,    27,
      28,    29,    30,    31,    32,     1,    -1,     3,     4,    -1,
      -1,    -1,    -1,    41,     7,     8,     9,    10,    11,    12,
      -1,    17,    18,    19,    20,    -1,    -1,    23,    24,    25,
      -1,    27,    28,    29,    30,    31,    32,     1,    -1,     3,
       4,    -1,    -1,    -1,    -1,    41,     7,     8,     9,    10,
      11,    12,    -1,    17,    18,    19,    20,    -1,    -1,    23,
      24,    25,    -1,    27,    28,    29,    30,    31,    32,     1,
      -1,     3,     4,    -1,    -1,    -1,    -1,    41,     7,     8,
       9,    10,    11,    12,    -1,    17,    18,    19,    20,    -1,
      -1,    23,    24,    25,    -1,    27,    28,    29,    30,    31,
      32,     1,    -1,     3,     4,    -1,    -1,    -1,    -1,    41,
       7,     8,     9,    10,    11,    12,    -1,    17,    18,    19,
      20,    -1,    -1,    23,    24,    25,    -1,    27,    28,    29,
      30,    31,    32,     1,    -1,     3,     4,    -1,    -1,    -1,
      -1,    41,     7,     8,     9,    10,    11,    12,    -1,    17,
      18,    19,    20,    -1,    -1,    23,    24,    25,    -1,    27,
      28,    29,    30,    31,     1,    -1,     3,     4,     7,     8,
       9,    10,    11,    41,     7,     8,     9,    10,    11,    12,
      17,    18,    19,    20,    -1,    -1,    23,    24,    25,    -1,
      27,    28,    29,    30,    31,     1,    -1,     3,     4,    -1,
      -1,    -1,    -1,     6,    41,     8,     9,    10,    11,    -1,
      -1,    17,    18,    19,    20,    -1,    -1,    23,    24,    25,
      -1,    27,    28,    29,    30,    31,     1,    -1,     3,     4,
      -1,    -1,    -1,    -1,     6,    41,     8,     9,    10,    11,
      -1,    -1,    17,    18,    19,    20,    -1,    -1,    23,    24,
      25,    -1,    27,    28,    29,    30,    31,     1,    -1,     3,
       4,    -1,    -1,    -1,    -1,     6,    41,     8,     9,    10,
      11,    -1,    -1,    17,    18,    19,    20,    -1,    -1,    23,
      24,    25,    -1,    27,    28,    29,    30,    31,     1,    -1,
       3,     4,     7,     8,     9,    10,    11,    41,     7,     8,
       9,    10,    11,    -1,    17,    18,    19,    20,    -1,    -1,
      23,    24,    25,    -1,    27,    28,    29,    30,    31,     1,
      -1,     3,     4,     7,     8,     9,    10,    11,    41,     7,
       8,     9,    10,    11,    -1,    17,    18,    19,    20,    -1,
      -1,    23,    24,    25,    -1,    27,    28,    29,    30,    31,
       1,    -1,     3,     4,     7,     8,     9,    10,    11,    41,
       7,     8,     9,    10,    11,    -1,    17,    18,    19,    20,
      -1,    -1,    23,    24,    25,    -1,    27,    28,    29,    30,
      31,     1,    -1,     3,     4,     7,     8,     9,    10,    11,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    19,
      20,    -1,    -1,    23,    24,    25,    -1,    27,    28,    29,
      30,    31,     1,    -1,     3,     4,    -1,    -1,    -1,    -1,
      -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,
      19,    20,    -1,    -1,    23,    24,    25,    -1,    27,    28,
      29,    30,    31,     1,    -1,     3,     4,    -1,    -1,    -1,
      -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    17,
      18,    19,    20,    -1,    -1,    23,    24,    25,    -1,    27,
      28,    29,    30,    31,     1,    -1,     3,     4,    -1,    -1,
      -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      17,    18,    19,    20,    -1,    -1,    23,    24,    25,    -1,
      27,    28,    29,    30,    31,     1,    -1,     3,     4,    -1,
      -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,
      -1,    17,    18,    19,    20,    -1,    -1,    23,    24,    25,
      -1,    27,    28,    29,    30,    31,     1,    -1,     3,     4,
      -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    17,    18,    19,    20,    -1,    -1,    23,    24,
      25,    -1,    27,    28,    29,    30,    31,     1,    -1,     3,
       4,    -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,
      -1,    -1,    -1,    17,    18,    19,    20,    -1,    -1,    23,
      24,    25,    -1,    27,    28,    29,    30,    31,     1,    -1,
       3,     4,    -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    17,    18,    19,    20,    -1,    -1,
      23,    24,    25,    -1,    27,    28,    29,    30,    31,     1,
      -1,     3,     4,    -1,    -1,    -1,    -1,    -1,    41,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,    19,    20,    -1,
      -1,    23,    24,    25,    -1,    27,    28,    29,    30,    31,
       1,    -1,     3,     4,    -1,    -1,    -1,    -1,    -1,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    19,    20,
      -1,    -1,    23,    24,    25,    -1,    27,    28,    29,    30,
      31,     1,    -1,     3,     4,    -1,    -1,    -1,    -1,    -1,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    19,
      20,    -1,    -1,    23,    24,    25,    -1,    27,    28,    29,
      30,    31,     1,    -1,     3,     4,    -1,    -1,    -1,    -1,
      -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,
      19,    20,    -1,    -1,    23,    24,    25,    -1,    27,    28,
      29,    30,    31,     1,    -1,     3,     4,    -1,    -1,    -1,
      -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    17,
      18,    19,    20,    -1,    -1,    23,    24,    25,    -1,    27,
      28,    29,    30,    31,     1,    -1,     3,     4,    -1,    -1,
      -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      17,    18,    19,    20,    -1,    -1,    23,    24,    25,    -1,
      27,    28,    29,    30,    31,     1,    -1,     3,     4,    -1,
      -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,
      -1,    17,    18,    19,    20,    -1,    -1,    23,    24,    25,
      -1,    27,    28,    29,    30,    31,     1,    -1,     3,     4,
      -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    17,    18,    19,    20,    -1,    -1,    23,    24,
      25,    -1,    27,    28,    29,    30,    31,     1,    -1,     3,
       4,    -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,
      -1,    -1,    -1,    17,    18,    19,    20,    -1,    -1,    23,
      24,    25,    -1,    27,    28,    29,    30,    31,     1,    -1,
       3,     4,    -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    17,    18,    19,    20,    -1,    -1,
      23,    24,    25,    -1,    27,    28,    29,    30,    31,    -1,
       5,     6,    -1,    -1,     9,    -1,    -1,    -1,    41,    14,
      -1,    -1,    -1,    -1,    -1,    20,    21,     5,     6,    -1,
      -1,     9,    27,    28,    29,    30,    14,    -1,    -1,    -1,
      -1,    -1,    20,    21,     5,    40,    41,    42,     9,    27,
      28,    29,    30,    14,    -1,    -1,    -1,    -1,    -1,    20,
      21,     5,    40,    41,    42,     9,    27,    28,    29,    30,
      14,    -1,    -1,    -1,    -1,    -1,    20,    21,     5,    40,
      41,    42,     9,    27,    28,    29,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    21,    22,    40,    41,    42,    -1,
      27,    28,    29,    30,    -1,    -1,    33,     5,    -1,    -1,
      -1,     9,    -1,    40,    41,    42,    14,    -1,    -1,    -1,
      -1,    -1,    -1,    21,     5,    -1,    -1,    -1,     9,    27,
      28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      21,     5,    40,    41,    42,     9,    27,    28,    29,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,     5,    40,
      41,    42,     9,    27,    28,    29,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    21,     5,    40,    41,    42,     9,
      27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    21,     5,    40,    41,    42,     9,    27,    28,    29,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,     5,
      40,    41,    42,     9,    27,    28,    29,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    21,     5,    40,    41,    42,
       9,    27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    21,    -1,    40,    41,    42,    -1,    27,    28,
      29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    41,    42,     5,    -1,     7,     8,     9,    10,
      11,    12,    13,    -1,    15,    16,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    34,    35,    36,    37,    38,    39,     5,
       6,    -1,     8,     9,    10,    11,    12,    13,    -1,    15,
      16,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,
      36,    37,    38,    39,     5,    -1,     7,     8,     9,    10,
      11,    12,    -1,    -1,    15,    16,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    34,    35,    36,    37,    38,    39,     5,
       6,    -1,     8,     9,    10,    11,    12,    -1,    -1,    15,
      16,    -1,    -1,     5,     6,    -1,     8,     9,    10,    11,
      26,    -1,    -1,    15,    16,    -1,    -1,    -1,    34,    35,
      36,    37,    38,    39,    26,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    34,    35,    36,    37,    38,    39,     6,    -1,
       8,     9,    10,    11,    12,    -1,    -1,    15,    16,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    34,    35,    36,    37,
      38,    39,     6,    -1,     8,     9,    10,    11,    12,    -1,
      -1,    15,    16,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      34,    35,    36,    37,    38,    39,     6,    -1,     8,     9,
      10,    11,    12,    -1,    -1,    15,    16,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,    39,
       6,    -1,     8,     9,    10,    11,    12,    -1,    -1,    15,
      16,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,
      36,    37,    38,    39,     6,    -1,     8,     9,    10,    11,
      12,    -1,    -1,    15,    16,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    34,    35,    36,    37,    38,    39,     6,    -1,
       8,     9,    10,    11,    12,    -1,    -1,    15,    16,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    34,    35,    36,    37,
      38,    39,     6,    -1,     8,     9,    10,    11,    12,    -1,
      -1,    15,    16,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      34,    35,    36,    37,    38,    39,     6,    -1,     8,     9,
      10,    11,    12,    -1,    -1,    15,    16,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,    39,
       6,    -1,     8,     9,    10,    11,    12,    -1,    -1,    15,
      16,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,
      36,    37,    38,    39,     6,    -1,     8,     9,    10,    11,
      12,    -1,    -1,    15,    16,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    34,    35,    36,    37,    38,    39,     6,    -1,
       8,     9,    10,    11,    12,    -1,    -1,    15,    16,    -1,
      -1,    -1,     6,    -1,     8,     9,    10,    11,    26,    -1,
      -1,    15,    16,    -1,    -1,    -1,    34,    35,    36,    37,
      38,    39,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      34,    35,    36,    37,    38,    39,     6,    -1,     8,     9,
      10,    11,    -1,    -1,    -1,    15,    16,    -1,    -1,    -1,
       6,    -1,     8,     9,    10,    11,    26,    -1,    -1,    15,
      16,    -1,    -1,    -1,    34,    35,    36,    37,    38,    39,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,
      36,    37,    38,    39,     6,    -1,     8,     9,    10,    11,
      -1,    -1,    -1,    15,    16,    -1,    -1,    -1,     6,    -1,
       8,     9,    10,    11,    26,    -1,    -1,    15,    16,    -1,
      -1,    -1,    34,    35,    36,    37,    38,    39,    26,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    34,    35,    36,    37,
      38,    39,     6,    -1,     8,     9,    10,    11,    -1,    -1,
      -1,    15,    16,    -1,    -1,    -1,     6,    -1,     8,     9,
      10,    11,    26,    -1,    -1,    15,    16,    -1,    -1,    -1,
      34,    35,    36,    37,    38,    39,    26,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,    39,
       6,    -1,     8,     9,    10,    11,    -1,    -1,    -1,    15,
      16,    -1,    -1,    -1,     6,    -1,     8,     9,    10,    11,
      26,    -1,    -1,    15,    16,    -1,    -1,    -1,    34,    35,
      36,    37,    38,    39,    26,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    34,    35,    36,    37,    38,    39,     6,    -1,
       8,     9,    10,    11,    -1,    -1,    -1,    15,    16,    -1,
      -1,    -1,     6,    -1,     8,     9,    10,    11,    26,    -1,
      -1,    15,    16,    -1,    -1,    -1,    34,    35,    36,    37,
      38,    39,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      34,    35,    36,    37,    38,    39,     6,    -1,     8,     9,
      -1,    -1,    12,    -1,    -1,    15,    16,    -1,    -1,    -1,
       6,    -1,     8,     9,    -1,    -1,    26,    -1,    -1,    15,
      16,    -1,    -1,    -1,    34,    35,    36,    37,    38,    39,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,
      36,    37,    38,    39,     6,    -1,    -1,    -1,    -1,    -1,
      12,     6,    -1,    15,    16,    -1,    -1,    12,    -1,    -1,
      15,    16,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,
      -1,    26,    34,    35,    36,    37,    38,    39,    -1,    34,
      35,    36,    37,    38,    39,     6,    -1,    -1,    -1,    -1,
      -1,    12,     6,    -1,    15,    16,    -1,    -1,    12,    -1,
      -1,    15,    16,    -1,    -1,    26,    -1,    -1,    -1,    -1,
      -1,    -1,    26,    34,    35,    36,    37,    38,    39,    -1,
      34,    35,    36,    37,    38,    39,     6,    -1,    -1,    -1,
      -1,    -1,    12,     6,    -1,    15,    16,    -1,    -1,    12,
      -1,    -1,    15,    16,    -1,    -1,    26,    -1,    -1,    -1,
      -1,    -1,    -1,    26,    34,    35,    36,    37,    38,    39,
      -1,    34,    35,    36,    37,    38,    39,     6,    -1,    -1,
      -1,    -1,    -1,    12,     6,    -1,    15,    16,    -1,    -1,
      12,    -1,    -1,    15,    16,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    34,    35,    36,    37,    38,
      39,    -1,    34,    35,    36,    37,    38,    39,     6,    -1,
      -1,    -1,    -1,    -1,    12,     6,    -1,    15,    16,    -1,
      -1,    12,    -1,    -1,    15,    16,    -1,    -1,    26,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    34,    35,    36,    37,
      38,    39,    -1,    34,    35,    36,    37,    38,    39,     6,
      -1,    -1,    -1,    -1,    -1,    12,     6,    -1,    15,    16,
      -1,    -1,    12,    -1,    -1,    15,    16,    -1,    -1,    26,
      -1,    -1,    -1,    -1,    -1,    -1,    26,    34,    35,    36,
      37,    38,    39,     6,    34,    35,    36,    37,    38,    39,
       6,    -1,    15,    16,    -1,    -1,    12,     6,    -1,    15,
      16,    -1,    -1,    26,    -1,    -1,    15,    16,    -1,    -1,
      26,    34,    35,    36,    37,    38,    39,    26,    34,    35,
      36,    37,    38,    39,     6,    34,    35,    36,    37,    38,
      39,     6,    -1,    15,    16,    -1,    -1,    -1,     6,    -1,
      15,    16,    -1,    -1,    26,    -1,    -1,    15,    16,    -1,
      -1,    26,    34,    35,    36,    37,    38,    39,    26,    34,
      35,    36,    37,    38,    39,     6,    34,    35,    36,    37,
      38,    39,     6,    -1,    15,    16,    -1,    -1,    -1,     6,
      -1,    15,    16,    -1,    -1,    26,    -1,    -1,    15,    16,
      -1,    -1,    26,    34,    35,    36,    37,    38,    39,    26,
      34,    35,    36,    37,    38,    39,     6,    34,    35,    36,
      37,    38,    39,     6,    -1,    15,    16,    -1,    -1,    -1,
       6,    -1,    15,    16,    -1,    -1,    26,    -1,    -1,    15,
      16,    -1,    -1,    26,    34,    35,    36,    37,    38,    39,
      26,    34,    35,    36,    37,    38,    39,     6,    34,    35,
      36,    37,    38,    39,     6,    -1,    15,    16,    -1,    -1,
      -1,    -1,    -1,    15,    16,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    34,    35,    36,    37,    38,
      39,    -1,    34,    35,    36,    37,    38,    39,     7,     8,
       9,    10,    11,    12,    -1,    -1,    15,    16,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,
      39,     7,     8,     9,    10,    11,    12,    -1,    -1,    15,
      16,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,
      36,    37,    38,    39,     7,     8,     9,    10,    11,    12,
      -1,    -1,    15,    16,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    34,    35,    36,    37,    38,    39,     7,     8,     9,
      10,    11,    12,    -1,    -1,    15,    16,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,    39,
       7,     8,     9,    10,    11,    12,    -1,    -1,    15,    16,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,    36,
      37,    38,    39,     7,     8,     9,    10,    11,    12,    -1,
      -1,    15,    16,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      34,    35,    36,    37,    38,    39,     7,     8,     9,    10,
      11,    12,    -1,    -1,    15,    16,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    34,    35,    36,    37,    38,    39,     7,
       8,     9,    10,    11,    12,    -1,    -1,    15,    16,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    34,    35,    36,    37,
      38,    39,     7,     8,     9,    10,    11,    12,    -1,    -1,
      15,    16,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,
      35,    36,    37,    38,    39,     7,     8,     9,    10,    11,
      12,    -1,    -1,    15,    16,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    34,    35,    36,    37,    38,    39,     7,     8,
       9,    10,    11,    12,    -1,    -1,    15,    16,    -1,    -1,
      -1,    -1,    -1,     7,     8,     9,    -1,    26,    12,    -1,
      -1,    15,    16,    -1,    -1,    34,    35,    36,    37,    38,
      39,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      34,    35,    36,    37,    38,    39,     7,    -1,    -1,    -1,
      -1,    12,     7,    -1,    15,    16,    -1,    12,    -1,    -1,
      15,    16,    -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,
      -1,    26,    -1,    34,    35,    36,    37,    38,    39,    34,
      35,    36,    37,    38,    39,     7,    -1,    -1,    -1,    -1,
      12,     7,    -1,    15,    16,    -1,    12,    -1,    -1,    15,
      16,    -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,
      26,    -1,    34,    35,    36,    37,    38,    39,    34,    35,
      36,    37,    38,    39,     7,    -1,    -1,    -1,    -1,    12,
       7,    -1,    15,    16,    -1,    12,    -1,    -1,    15,    16,
      -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    26,
      -1,    34,    35,    36,    37,    38,    39,    34,    35,    36,
      37,    38,    39,     7,    -1,    -1,    -1,    -1,    12,     7,
      -1,    15,    16,    -1,    12,    -1,    -1,    15,    16,    -1,
      -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    26,    -1,
      34,    35,    36,    37,    38,    39,    34,    35,    36,    37,
      38,    39,     7,    -1,    -1,    -1,    -1,    12,     7,    -1,
      15,    16,    -1,    12,    -1,    -1,    15,    16,    -1,    -1,
      -1,    26,    -1,    -1,    -1,    -1,    -1,    26,    -1,    34,
      35,    36,    37,    38,    39,    34,    35,    36,    37,    38,
      39,     7,    -1,    -1,    -1,    -1,    12,     7,    -1,    15,
      16,    -1,    12,    -1,    -1,    15,    16,    -1,    -1,    -1,
      26,    -1,    -1,    -1,    -1,    -1,    26,    -1,    34,    35,
      36,    37,    38,    39,    34,    35,    36,    37,    38,    39,
       7,    -1,    -1,    -1,    -1,    12,     7,    -1,    15,    16,
      -1,    12,    -1,    -1,    15,    16,    -1,    -1,    -1,    26,
      -1,    -1,    -1,    -1,    -1,    26,    -1,    34,    35,    36,
      37,    38,    39,    34,    35,    36,    37,    38,    39
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    20,    46,    47,    48,    49,    50,    41,     0,     1,
      48,     5,     7,    20,    51,    41,     6,    12,     3,    53,
      20,     1,     4,    17,    18,    19,    20,    23,    24,    25,
      27,    28,    29,    30,    31,    41,    50,    53,    54,    55,
      56,    57,    70,    71,    41,     5,     5,     5,    41,     5,
       9,    21,    22,    33,    40,    41,    42,    70,    71,    72,
      73,    74,    75,    76,    77,     5,     5,     5,     5,     5,
       5,     5,     5,    13,     4,    55,     7,     7,    41,    72,
      72,    73,    75,     5,    41,    77,     7,     8,     9,    10,
      11,    69,    72,     7,    14,    20,    21,    41,    58,    59,
      60,    61,    62,    63,    64,    66,    67,    74,    75,    41,
      69,    69,    69,    61,    41,    52,    72,     6,     6,     6,
       6,     6,    76,    76,    77,    77,     6,    26,    63,    41,
      13,    58,     7,    12,    38,    39,    34,    35,    65,    15,
      16,    26,    36,    37,    68,     6,     6,     6,     6,     6,
       6,    12,     7,     7,     7,     7,    56,    72,    13,    72,
       6,    59,    60,    62,    63,    66,    67,    56,    41,    72,
      56,     6,    32,    56,    56,     3,     5,     9,    21,    22,
      27,    28,    29,    30,    33,    40,    41,    42,    70,    71,
      73,    74,    75,    76,    77,     7,     5,     9,    21,    22,
      27,    28,    29,    30,    33,    40,    41,    42,    70,    71,
      73,    74,    75,    76,    77,     5,     9,    27,    28,    29,
      30,    40,    42,    70,    71,    76,    77,     5,     9,    14,
      21,    27,    28,    29,    30,    40,    41,    42,    62,    63,
      64,    66,    67,    70,    71,    74,    75,    76,    77,     8,
       9,     5,    41,    41,     5,     7,    59,     8,     9,    38,
       5,     9,    21,    22,    27,    28,    29,    30,    33,    40,
      41,    42,    70,    71,    73,    74,    75,    76,    77,     5,
       9,    14,    20,    21,    27,    28,    29,    30,    40,    41,
      42,    60,    61,    62,    63,    64,    66,    67,    70,    71,
      74,    75,    76,    77,     1,     3,    17,    18,    19,    23,
      24,    25,    31,    41,    53,    57,    70,    71,    12,     4,
      54,    73,    75,    77,     5,     5,     5,     5,     5,    10,
      11,    73,    75,     5,    41,    77,     5,     5,     5,     5,
       5,     8,     9,    10,    11,    73,    75,     5,    41,    77,
       5,     5,     5,     5,    10,    11,    73,    75,     5,    41,
      77,    63,     5,     5,     5,     5,     5,    39,    65,    68,
       8,     9,    10,    11,    76,    76,    52,     7,    76,    76,
      62,    73,    75,     5,    41,    77,     5,     5,     5,     5,
       5,     8,     9,    10,    11,    73,    75,     5,    41,    77,
      41,    63,    41,     5,     5,     5,     5,     5,    13,    38,
      39,    65,    68,     8,     9,    10,    11,     4,    54,     5,
       5,     5,    72,     5,     5,     5,    13,     7,     7,    60,
       4,     6,     6,    41,    69,    69,    69,    52,    77,    77,
       6,     6,    41,    69,    69,    69,    52,    76,    76,    77,
      77,     6,     6,    41,    69,    69,    69,    77,    77,     6,
       6,    41,    69,    69,    69,    52,    63,    66,    67,    76,
      76,    77,    77,     6,     6,     6,    41,    69,    69,    69,
      52,    76,    76,    77,    77,     6,     6,    13,    41,    69,
      69,    69,    52,     5,     9,    21,    22,    27,    28,    29,
      30,    33,    40,    41,    42,    70,    71,    72,    73,    74,
      75,    76,    77,    62,    63,    66,    67,    76,    76,    77,
      77,     4,    41,    72,    72,     7,    69,    58,    61,    72,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     6,    72,     6,     6,     6,     6,     6,
      73,    75,     5,    41,    77,     5,     5,     5,     5,     5,
       8,     9,    10,    11,     6,     6,     6,     6,    58,     6,
       7,     6,     6,    41,    69,    69,    69,    52,    76,    76,
      77,    77,     7,     7,     7,    56,     6,    59,    56,     6,
       6,     6,     6,     6,    56,     6,    32,    56,    56
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    45,    46,    47,    47,    47,    48,    48,    49,    50,
      51,    51,    51,    52,    52,    52,    53,    53,    54,    54,
      55,    55,    56,    56,    56,    56,    56,    56,    56,    56,
      56,    56,    57,    57,    57,    57,    57,    58,    58,    59,
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
       4,     2,     0,     3,     1,     0,     3,     2,     2,     1,
       1,     1,     1,     2,     2,     1,     5,     5,     5,     4,
       3,     1,     5,     7,     5,     6,     7,     1,     2,     1,
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
  case 4: /* stmts: stmts error  */
#line 57 "parser/c7.y"
                      { yyerrok; }
#line 2654 "parser/parser.c"
    break;

  case 6: /* stmt: func_stmt  */
#line 61 "parser/c7.y"
                       { add_ast((yyvsp[0].expression)); }
#line 2660 "parser/parser.c"
    break;

  case 7: /* stmt: var_decl_stmt  */
#line 62 "parser/c7.y"
                           { add_ast((yyvsp[0].expression)); }
#line 2666 "parser/parser.c"
    break;

  case 8: /* func_stmt: TYPE ID PARENT_LEFT param_list PARENT_RIGHT compound_block_stmt  */
#line 65 "parser/c7.y"
                                                                                          {
                (yyval.expression) = create_func_expr(create_str_expr((yyvsp[-5].str_value)), create_var_expr((yyvsp[-4].int_value)), (yyvsp[-2].expression), (yyvsp[0].expression));
                set_id_type((yyvsp[-4].int_value), ST_ID_FUNC);
                free((yyvsp[-5].str_value));
            }
#line 2676 "parser/parser.c"
    break;

  case 9: /* var_decl_stmt: TYPE ID SEMICOLON  */
#line 72 "parser/c7.y"
                                          {
                    (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-2].str_value)), create_var_expr((yyvsp[-1].int_value)));
                    set_id_type((yyvsp[-1].int_value), ST_ID_VAR); 
                    free((yyvsp[-2].str_value));
                }
#line 2686 "parser/parser.c"
    break;

  case 10: /* param_list: param_list COMMA TYPE ID  */
#line 79 "parser/c7.y"
                                                {
                (yyval.expression) = create_ter_expr((yyvsp[-3].expression), create_str_expr((yyvsp[-1].str_value)), create_var_expr((yyvsp[0].int_value)));
                set_id_type((yyvsp[0].int_value), ST_ID_VAR);
                free((yyvsp[-1].str_value));
            }
#line 2696 "parser/parser.c"
    break;

  case 11: /* param_list: TYPE ID  */
#line 84 "parser/c7.y"
                            {
                (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-1].str_value)), create_var_expr((yyvsp[0].int_value)));
                set_id_type((yyvsp[0].int_value), ST_ID_VAR);
                free((yyvsp[-1].str_value));
            }
#line 2706 "parser/parser.c"
    break;

  case 12: /* param_list: %empty  */
#line 89 "parser/c7.y"
                          { (yyval.expression) = create_empty_expr(); }
#line 2712 "parser/parser.c"
    break;

  case 13: /* simple_param_list: simple_param_list COMMA ID  */
#line 92 "parser/c7.y"
                                                       {
                        (yyval.expression) = create_bin_expr((yyvsp[-2].expression), create_var_expr((yyvsp[0].int_value)));
                        set_id_type((yyvsp[0].int_value), ST_ID_VAR);
                    }
#line 2721 "parser/parser.c"
    break;

  case 14: /* simple_param_list: ID  */
#line 96 "parser/c7.y"
                            { 
                        (yyval.expression) = create_var_expr((yyvsp[0].int_value));
                        set_id_type((yyvsp[0].int_value), ST_ID_VAR);
                    }
#line 2730 "parser/parser.c"
    break;

  case 15: /* simple_param_list: %empty  */
#line 100 "parser/c7.y"
                                  { (yyval.expression) = create_empty_expr(); }
#line 2736 "parser/parser.c"
    break;

  case 16: /* compound_block_stmt: BRACK_LEFT block_stmts BRACK_RIGHT  */
#line 103 "parser/c7.y"
                                                            { (yyval.expression) = (yyvsp[-1].expression); }
#line 2742 "parser/parser.c"
    break;

  case 17: /* compound_block_stmt: BRACK_LEFT BRACK_RIGHT  */
#line 104 "parser/c7.y"
                                              { (yyval.expression) = create_empty_expr(); }
#line 2748 "parser/parser.c"
    break;

  case 18: /* block_stmts: block_stmts block_item  */
#line 107 "parser/c7.y"
                                           {
                (yyval.expression) = create_bin_expr((yyvsp[-1].expression), (yyvsp[0].expression)); 
            }
#line 2756 "parser/parser.c"
    break;

  case 19: /* block_stmts: block_item  */
#line 110 "parser/c7.y"
                            { (yyval.expression) = (yyvsp[0].expression); }
#line 2762 "parser/parser.c"
    break;

  case 20: /* block_item: var_decl_stmt  */
#line 113 "parser/c7.y"
                               { (yyval.expression) = (yyvsp[0].expression); }
#line 2768 "parser/parser.c"
    break;

  case 21: /* block_item: block_stmt  */
#line 114 "parser/c7.y"
                            { (yyval.expression) = (yyvsp[0].expression); }
#line 2774 "parser/parser.c"
    break;

  case 22: /* block_stmt: compound_block_stmt  */
#line 117 "parser/c7.y"
                                     { (yyval.expression) = (yyvsp[0].expression); }
#line 2780 "parser/parser.c"
    break;

  case 23: /* block_stmt: func_call SEMICOLON  */
#line 118 "parser/c7.y"
                                     { (yyval.expression) = (yyvsp[-1].expression); }
#line 2786 "parser/parser.c"
    break;

  case 24: /* block_stmt: set_func_call SEMICOLON  */
#line 119 "parser/c7.y"
                                         { (yyval.expression) = (yyvsp[-1].expression); }
#line 2792 "parser/parser.c"
    break;

  case 25: /* block_stmt: flow_control  */
#line 120 "parser/c7.y"
                              { (yyval.expression) = (yyvsp[0].expression); }
#line 2798 "parser/parser.c"
    break;

  case 26: /* block_stmt: READ PARENT_LEFT ID PARENT_RIGHT SEMICOLON  */
#line 121 "parser/c7.y"
                                                               {
                (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-4].str_value)), create_var_expr((yyvsp[-2].int_value))); 
                set_id_type((yyvsp[-2].int_value), ST_ID_VAR);
                free((yyvsp[-4].str_value));
            }
#line 2808 "parser/parser.c"
    break;

  case 27: /* block_stmt: WRITE PARENT_LEFT simple_expr PARENT_RIGHT SEMICOLON  */
#line 126 "parser/c7.y"
                                                                         {
                (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-4].str_value)), (yyvsp[-2].expression)); 
                free((yyvsp[-4].str_value));
            }
#line 2817 "parser/parser.c"
    break;

  case 28: /* block_stmt: WRITELN PARENT_LEFT simple_expr PARENT_RIGHT SEMICOLON  */
#line 130 "parser/c7.y"
                                                                           {
                (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-4].str_value)), (yyvsp[-2].expression)); 
                free((yyvsp[-4].str_value));
            }
#line 2826 "parser/parser.c"
    break;

  case 29: /* block_stmt: ID ASSIGN simple_expr SEMICOLON  */
#line 134 "parser/c7.y"
                                                       {
                (yyval.expression) = create_ter_expr(create_var_expr((yyvsp[-3].int_value)), create_char_expr((yyvsp[-2].op)), (yyvsp[-1].expression));
                set_id_type((yyvsp[-3].int_value), ST_ID_VAR); 
            }
#line 2835 "parser/parser.c"
    break;

  case 30: /* block_stmt: RETURN simple_expr SEMICOLON  */
#line 138 "parser/c7.y"
                                                 {
                (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-2].str_value)), (yyvsp[-1].expression)); 
                free((yyvsp[-2].str_value));
            }
#line 2844 "parser/parser.c"
    break;

  case 31: /* block_stmt: error  */
#line 142 "parser/c7.y"
                    { 
                (yyval.expression) = create_empty_expr();
                yyerrok;
            }
#line 2853 "parser/parser.c"
    break;

  case 32: /* flow_control: IF PARENT_LEFT or_cond_expr PARENT_RIGHT block_stmt  */
#line 148 "parser/c7.y"
                                                                                            {
                    (yyval.expression) = create_ter_expr(create_str_expr((yyvsp[-4].str_value)), (yyvsp[-2].expression), (yyvsp[0].expression)); 
                    free((yyvsp[-4].str_value));
                }
#line 2862 "parser/parser.c"
    break;

  case 33: /* flow_control: IF PARENT_LEFT or_cond_expr PARENT_RIGHT block_stmt ELSE block_stmt  */
#line 152 "parser/c7.y"
                                                                                                         {
                    (yyval.expression) = create_qui_expr(create_str_expr((yyvsp[-6].str_value)), (yyvsp[-4].expression), (yyvsp[-2].expression), create_str_expr((yyvsp[-1].str_value)), (yyvsp[0].expression));
                    free((yyvsp[-6].str_value)); free((yyvsp[-1].str_value));
                }
#line 2871 "parser/parser.c"
    break;

  case 34: /* flow_control: FORALL PARENT_LEFT set_expr PARENT_RIGHT block_stmt  */
#line 156 "parser/c7.y"
                                                                                 {
                    (yyval.expression) = create_ter_expr(create_str_expr((yyvsp[-4].str_value)), (yyvsp[-2].expression), (yyvsp[0].expression)); 
                    free((yyvsp[-4].str_value));
                }
#line 2880 "parser/parser.c"
    break;

  case 35: /* flow_control: FOR PARENT_LEFT opt_param opt_param PARENT_RIGHT block_stmt  */
#line 160 "parser/c7.y"
                                                                                             {
                    (yyval.expression) = create_qua_expr(create_str_expr((yyvsp[-5].str_value)), (yyvsp[-3].expression), (yyvsp[-2].expression), (yyvsp[0].expression)); 
                    free((yyvsp[-5].str_value));
                }
#line 2889 "parser/parser.c"
    break;

  case 36: /* flow_control: FOR PARENT_LEFT opt_param opt_param for_expression PARENT_RIGHT block_stmt  */
#line 164 "parser/c7.y"
                                                                                                                {
                    (yyval.expression) = create_qui_expr(create_str_expr((yyvsp[-6].str_value)), (yyvsp[-4].expression), (yyvsp[-3].expression), (yyvsp[-2].expression), (yyvsp[0].expression)); 
                    free((yyvsp[-6].str_value));
                }
#line 2898 "parser/parser.c"
    break;

  case 37: /* opt_param: SEMICOLON  */
#line 170 "parser/c7.y"
                        { (yyval.expression) = create_empty_expr(); }
#line 2904 "parser/parser.c"
    break;

  case 38: /* opt_param: for_expression SEMICOLON  */
#line 171 "parser/c7.y"
                                          { (yyval.expression) = (yyvsp[-1].expression); }
#line 2910 "parser/parser.c"
    break;

  case 39: /* for_expression: decl_or_cond_expr  */
#line 174 "parser/c7.y"
                                       { (yyval.expression) = (yyvsp[0].expression); }
#line 2916 "parser/parser.c"
    break;

  case 40: /* for_expression: for_expression COMMA decl_or_cond_expr  */
#line 175 "parser/c7.y"
                                                                 {
                    (yyval.expression) = create_bin_expr((yyvsp[-2].expression), (yyvsp[0].expression)); 
                }
#line 2924 "parser/parser.c"
    break;

  case 41: /* decl_or_cond_expr: or_cond_expr  */
#line 180 "parser/c7.y"
                                      { (yyval.expression) = (yyvsp[0].expression); }
#line 2930 "parser/parser.c"
    break;

  case 42: /* decl_or_cond_expr: TYPE ID ASSIGN simple_expr  */
#line 181 "parser/c7.y"
                                                             {
                        (yyval.expression) = create_qua_expr(create_str_expr((yyvsp[-3].str_value)), create_var_expr((yyvsp[-2].int_value)),
                                             create_char_expr((yyvsp[-1].op)), (yyvsp[0].expression)); 
                        set_id_type((yyvsp[-2].int_value), ST_ID_VAR);
                        free((yyvsp[-3].str_value));
                    }
#line 2941 "parser/parser.c"
    break;

  case 43: /* decl_or_cond_expr: ID ASSIGN simple_expr  */
#line 187 "parser/c7.y"
                                                     {
                        (yyval.expression) = create_ter_expr(create_var_expr((yyvsp[-2].int_value)), create_char_expr((yyvsp[-1].op)), (yyvsp[0].expression));
                        set_id_type((yyvsp[-2].int_value), ST_ID_VAR); 
                    }
#line 2950 "parser/parser.c"
    break;

  case 44: /* or_cond_expr: or_cond_expr OR_OP and_cond_expr  */
#line 193 "parser/c7.y"
                                                               {
                    (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_str_expr((yyvsp[-1].str_value)), (yyvsp[0].expression)); 
                    free((yyvsp[-1].str_value));
                }
#line 2959 "parser/parser.c"
    break;

  case 45: /* or_cond_expr: and_cond_expr  */
#line 197 "parser/c7.y"
                                   { (yyval.expression) = (yyvsp[0].expression); }
#line 2965 "parser/parser.c"
    break;

  case 46: /* and_cond_expr: and_cond_expr AND_OP unary_cond_expr  */
#line 200 "parser/c7.y"
                                                                   {
                    (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_str_expr((yyvsp[-1].str_value)), (yyvsp[0].expression)); 
                    free((yyvsp[-1].str_value));
                }
#line 2974 "parser/parser.c"
    break;

  case 47: /* and_cond_expr: unary_cond_expr  */
#line 204 "parser/c7.y"
                                     { (yyval.expression) = (yyvsp[0].expression); }
#line 2980 "parser/parser.c"
    break;

  case 48: /* unary_cond_expr: NOT_OP unary_cond_expr  */
#line 207 "parser/c7.y"
                                               {
                    (yyval.expression) = create_bin_expr(create_char_expr((yyvsp[-1].op)), (yyvsp[0].expression)); 
                }
#line 2988 "parser/parser.c"
    break;

  case 49: /* unary_cond_expr: eq_cond_expr  */
#line 210 "parser/c7.y"
                                  { (yyval.expression) = (yyvsp[0].expression); }
#line 2994 "parser/parser.c"
    break;

  case 50: /* eq_cond_expr: eq_cond_expr equal_ops rel_cond_expr  */
#line 213 "parser/c7.y"
                                                                  {
                    (yyval.expression) = create_ter_expr((yyvsp[-2].expression), (yyvsp[-1].expression), (yyvsp[0].expression));
                }
#line 3002 "parser/parser.c"
    break;

  case 51: /* eq_cond_expr: rel_cond_expr  */
#line 216 "parser/c7.y"
                                   { (yyval.expression) = (yyvsp[0].expression); }
#line 3008 "parser/parser.c"
    break;

  case 52: /* equal_ops: EQ_OP  */
#line 219 "parser/c7.y"
                       {
                (yyval.expression) = create_str_expr((yyvsp[0].str_value));
                free((yyvsp[0].str_value));
            }
#line 3017 "parser/parser.c"
    break;

  case 53: /* equal_ops: NE_OP  */
#line 223 "parser/c7.y"
                       {
                (yyval.expression) = create_str_expr((yyvsp[0].str_value));
                free((yyvsp[0].str_value));
            }
#line 3026 "parser/parser.c"
    break;

  case 54: /* rel_cond_expr: rel_cond_expr rel_ops rel_cond_stmt  */
#line 229 "parser/c7.y"
                                                                  {
                    (yyval.expression) = create_ter_expr((yyvsp[-2].expression), (yyvsp[-1].expression), (yyvsp[0].expression));
                }
#line 3034 "parser/parser.c"
    break;

  case 55: /* rel_cond_expr: rel_cond_stmt  */
#line 232 "parser/c7.y"
                                   { (yyval.expression) = (yyvsp[0].expression); }
#line 3040 "parser/parser.c"
    break;

  case 56: /* rel_cond_stmt: arith_expr  */
#line 235 "parser/c7.y"
                                { (yyval.expression) = (yyvsp[0].expression); }
#line 3046 "parser/parser.c"
    break;

  case 57: /* rel_cond_stmt: EMPTY  */
#line 236 "parser/c7.y"
                           {
                    (yyval.expression) = create_str_expr((yyvsp[0].str_value));
                    free((yyvsp[0].str_value));
                }
#line 3055 "parser/parser.c"
    break;

  case 58: /* rel_cond_stmt: func_expr  */
#line 240 "parser/c7.y"
                               { (yyval.expression) = (yyvsp[0].expression); }
#line 3061 "parser/parser.c"
    break;

  case 59: /* rel_ops: L_OP  */
#line 243 "parser/c7.y"
                  { (yyval.expression) = create_char_expr((yyvsp[0].op)); }
#line 3067 "parser/parser.c"
    break;

  case 60: /* rel_ops: G_OP  */
#line 244 "parser/c7.y"
                  { (yyval.expression) = create_char_expr((yyvsp[0].op)); }
#line 3073 "parser/parser.c"
    break;

  case 61: /* rel_ops: LE_OP  */
#line 245 "parser/c7.y"
                   {
            (yyval.expression) = create_str_expr((yyvsp[0].str_value));
            free((yyvsp[0].str_value));
        }
#line 3082 "parser/parser.c"
    break;

  case 62: /* rel_ops: GE_OP  */
#line 249 "parser/c7.y"
                   { 
            (yyval.expression) = create_str_expr((yyvsp[0].str_value));
            free((yyvsp[0].str_value));
        }
#line 3091 "parser/parser.c"
    break;

  case 63: /* rel_ops: IN  */
#line 253 "parser/c7.y"
                {
            (yyval.expression) = create_str_expr((yyvsp[0].str_value));
            free((yyvsp[0].str_value));
        }
#line 3100 "parser/parser.c"
    break;

  case 64: /* set_expr: simple_expr IN simple_expr  */
#line 259 "parser/c7.y"
                                                    {
                (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_str_expr((yyvsp[-1].str_value)), (yyvsp[0].expression)); 
                free((yyvsp[-1].str_value));
            }
#line 3109 "parser/parser.c"
    break;

  case 65: /* func_call: ID PARENT_LEFT simple_param_list PARENT_RIGHT  */
#line 265 "parser/c7.y"
                                                                  {
                (yyval.expression) = create_bin_expr(create_var_expr((yyvsp[-3].int_value)), (yyvsp[-1].expression)); 
                set_id_type((yyvsp[-3].int_value), ST_ID_FUNC);
            }
#line 3118 "parser/parser.c"
    break;

  case 66: /* set_func_call: IS_SET PARENT_LEFT ID PARENT_RIGHT  */
#line 271 "parser/c7.y"
                                                           {
                    (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-3].str_value)), create_var_expr((yyvsp[-1].int_value))); 
                    set_id_type((yyvsp[-1].int_value), ST_ID_VAR);
                    free((yyvsp[-3].str_value));
                }
#line 3128 "parser/parser.c"
    break;

  case 67: /* set_func_call: ADD_SET PARENT_LEFT set_expr PARENT_RIGHT  */
#line 276 "parser/c7.y"
                                                                  {
                    (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-3].str_value)), (yyvsp[-1].expression)); 
                    free((yyvsp[-3].str_value));
                }
#line 3137 "parser/parser.c"
    break;

  case 68: /* set_func_call: REMOVE PARENT_LEFT set_expr PARENT_RIGHT  */
#line 280 "parser/c7.y"
                                                                 {
                    (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-3].str_value)), (yyvsp[-1].expression)); 
                    free((yyvsp[-3].str_value));
                }
#line 3146 "parser/parser.c"
    break;

  case 69: /* set_func_call: EXISTS PARENT_LEFT set_expr PARENT_RIGHT  */
#line 284 "parser/c7.y"
                                                                 {
                    (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-3].str_value)), (yyvsp[-1].expression));
                    free((yyvsp[-3].str_value)); 
                }
#line 3155 "parser/parser.c"
    break;

  case 70: /* simple_expr: arith_expr  */
#line 290 "parser/c7.y"
                            { (yyval.expression) = (yyvsp[0].expression); }
#line 3161 "parser/parser.c"
    break;

  case 71: /* simple_expr: func_cte_expr  */
#line 291 "parser/c7.y"
                               { (yyval.expression) = (yyvsp[0].expression); }
#line 3167 "parser/parser.c"
    break;

  case 72: /* func_cte_expr: EMPTY  */
#line 294 "parser/c7.y"
                           {
                    (yyval.expression) = create_str_expr((yyvsp[0].str_value));
                    free((yyvsp[0].str_value));
                }
#line 3176 "parser/parser.c"
    break;

  case 73: /* func_cte_expr: STRING  */
#line 298 "parser/c7.y"
                            {
                    (yyval.expression) = create_str_expr((yyvsp[0].str_value));
                    free((yyvsp[0].str_value));
                }
#line 3185 "parser/parser.c"
    break;

  case 74: /* func_cte_expr: CHAR  */
#line 302 "parser/c7.y"
                          {
                    (yyval.expression) = create_str_expr((yyvsp[0].str_value));
                    free((yyvsp[0].str_value));
                }
#line 3194 "parser/parser.c"
    break;

  case 75: /* func_cte_expr: func_expr  */
#line 306 "parser/c7.y"
                               { (yyval.expression) = (yyvsp[0].expression); }
#line 3200 "parser/parser.c"
    break;

  case 76: /* func_expr: func_call  */
#line 309 "parser/c7.y"
                               { (yyval.expression) = (yyvsp[0].expression); }
#line 3206 "parser/parser.c"
    break;

  case 77: /* func_expr: set_func_call  */
#line 310 "parser/c7.y"
                                   { (yyval.expression) = (yyvsp[0].expression); }
#line 3212 "parser/parser.c"
    break;

  case 78: /* func_expr: PARENT_LEFT func_cte_expr PARENT_RIGHT  */
#line 311 "parser/c7.y"
                                                            { (yyval.expression) = (yyvsp[-1].expression); }
#line 3218 "parser/parser.c"
    break;

  case 79: /* arith_expr: arith_expr ADD term  */
#line 314 "parser/c7.y"
                                           {
                (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_char_expr((yyvsp[-1].op)), (yyvsp[0].expression));
            }
#line 3226 "parser/parser.c"
    break;

  case 80: /* arith_expr: arith_expr SUB term  */
#line 317 "parser/c7.y"
                                           {
                (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_char_expr((yyvsp[-1].op)), (yyvsp[0].expression));
            }
#line 3234 "parser/parser.c"
    break;

  case 81: /* arith_expr: term  */
#line 320 "parser/c7.y"
                      { (yyval.expression) = (yyvsp[0].expression); }
#line 3240 "parser/parser.c"
    break;

  case 82: /* term: term MULT factor  */
#line 323 "parser/c7.y"
                                    {
            (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_char_expr((yyvsp[-1].op)), (yyvsp[0].expression));
        }
#line 3248 "parser/parser.c"
    break;

  case 83: /* term: term DIV factor  */
#line 326 "parser/c7.y"
                                   {
            (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_char_expr((yyvsp[-1].op)), (yyvsp[0].expression));
        }
#line 3256 "parser/parser.c"
    break;

  case 84: /* term: factor  */
#line 329 "parser/c7.y"
                    { (yyval.expression) = (yyvsp[0].expression); }
#line 3262 "parser/parser.c"
    break;

  case 85: /* term: SUB factor  */
#line 330 "parser/c7.y"
                                        { 
            (yyval.expression) = create_bin_expr(create_char_expr((yyvsp[-1].op)), (yyvsp[0].expression)); 
        }
#line 3270 "parser/parser.c"
    break;

  case 86: /* factor: INTEGER  */
#line 335 "parser/c7.y"
                     { (yyval.expression) = create_int_expr((yyvsp[0].int_value)); }
#line 3276 "parser/parser.c"
    break;

  case 87: /* factor: FLOAT  */
#line 336 "parser/c7.y"
                   { (yyval.expression) = create_float_expr((yyvsp[0].float_value)); }
#line 3282 "parser/parser.c"
    break;

  case 88: /* factor: ID  */
#line 337 "parser/c7.y"
                {
            (yyval.expression) = create_var_expr((yyvsp[0].int_value));
            set_id_type((yyvsp[0].int_value), ST_ID_VAR);
        }
#line 3291 "parser/parser.c"
    break;

  case 89: /* factor: PARENT_LEFT arith_expr PARENT_RIGHT  */
#line 341 "parser/c7.y"
                                                 { (yyval.expression) = (yyvsp[-1].expression); }
#line 3297 "parser/parser.c"
    break;


#line 3301 "parser/parser.c"

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

#line 344 "parser/c7.y"


void yyerror(const char *s) {
    printf("\nSyntaxError: %s in line %d, column %d.\n",
           s, parser_line, parser_column);
    parser_error += 1;
}
