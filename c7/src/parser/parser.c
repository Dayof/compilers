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
  YYSYMBOL_50_1 = 50,                      /* $@1  */
  YYSYMBOL_51_2 = 51,                      /* $@2  */
  YYSYMBOL_var_decl_stmt = 52,             /* var_decl_stmt  */
  YYSYMBOL_53_3 = 53,                      /* $@3  */
  YYSYMBOL_param_list = 54,                /* param_list  */
  YYSYMBOL_simple_param_list = 55,         /* simple_param_list  */
  YYSYMBOL_compound_block_stmt = 56,       /* compound_block_stmt  */
  YYSYMBOL_57_4 = 57,                      /* $@4  */
  YYSYMBOL_block_stmts = 58,               /* block_stmts  */
  YYSYMBOL_block_item = 59,                /* block_item  */
  YYSYMBOL_block_stmt = 60,                /* block_stmt  */
  YYSYMBOL_flow_control_if = 61,           /* flow_control_if  */
  YYSYMBOL_flow_control = 62,              /* flow_control  */
  YYSYMBOL_opt_param = 63,                 /* opt_param  */
  YYSYMBOL_for_expression = 64,            /* for_expression  */
  YYSYMBOL_decl_or_cond_expr = 65,         /* decl_or_cond_expr  */
  YYSYMBOL_or_cond_expr = 66,              /* or_cond_expr  */
  YYSYMBOL_and_cond_expr = 67,             /* and_cond_expr  */
  YYSYMBOL_unary_cond_expr = 68,           /* unary_cond_expr  */
  YYSYMBOL_eq_cond_expr = 69,              /* eq_cond_expr  */
  YYSYMBOL_equal_ops = 70,                 /* equal_ops  */
  YYSYMBOL_rel_cond_expr = 71,             /* rel_cond_expr  */
  YYSYMBOL_rel_cond_stmt = 72,             /* rel_cond_stmt  */
  YYSYMBOL_rel_ops = 73,                   /* rel_ops  */
  YYSYMBOL_set_expr = 74,                  /* set_expr  */
  YYSYMBOL_func_call = 75,                 /* func_call  */
  YYSYMBOL_set_func_call = 76,             /* set_func_call  */
  YYSYMBOL_simple_expr = 77,               /* simple_expr  */
  YYSYMBOL_func_cte_expr = 78,             /* func_cte_expr  */
  YYSYMBOL_func_expr = 79,                 /* func_expr  */
  YYSYMBOL_arith_expr = 80,                /* arith_expr  */
  YYSYMBOL_term = 81,                      /* term  */
  YYSYMBOL_factor = 82                     /* factor  */
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
#define YYLAST   5099

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  45
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  38
/* YYNRULES -- Number of rules.  */
#define YYNRULES  94
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  616

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
       0,    53,    53,    56,    57,    58,    61,    62,    65,    69,
      65,    78,    78,    88,    93,   100,   107,   111,   115,   118,
     118,   127,   132,   135,   138,   139,   142,   143,   144,   145,
     146,   151,   155,   159,   165,   169,   175,   183,   186,   190,
     194,   198,   204,   205,   208,   209,   214,   215,   221,   227,
     231,   234,   238,   241,   244,   247,   250,   253,   257,   263,
     266,   269,   270,   274,   277,   278,   279,   283,   287,   293,
     299,   305,   310,   314,   318,   324,   325,   328,   332,   336,
     340,   343,   344,   345,   348,   351,   354,   357,   360,   363,
     364,   369,   370,   371,   377
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
  "func_stmt", "$@1", "$@2", "var_decl_stmt", "$@3", "param_list",
  "simple_param_list", "compound_block_stmt", "$@4", "block_stmts",
  "block_item", "block_stmt", "flow_control_if", "flow_control",
  "opt_param", "for_expression", "decl_or_cond_expr", "or_cond_expr",
  "and_cond_expr", "unary_cond_expr", "eq_cond_expr", "equal_ops",
  "rel_cond_expr", "rel_cond_stmt", "rel_ops", "set_expr", "func_call",
  "set_func_call", "simple_expr", "func_cte_expr", "func_expr",
  "arith_expr", "term", "factor", YY_NULLPTR
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

#define YYPACT_NINF (-315)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-95)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      40,     8,    73,   207,   230,   247,   427,   194,  -315,   429,
     436,    72,    78,   329,   470,   544,    43,    30,   102,    94,
      92,   836,   488,    85,   542,  1634,   144,  2068,   143,   152,
     162,   108,   518,   208,   228,   238,   251,   253,   266,   281,
      27,  2099,  2130,  2161,  2192,  2223,   254,  2254,   271,   282,
     252,   707,   707,   318,   707,    12,   327,   337,   338,  1553,
    1182,  1747,   356,   363,   392,   393,   402,   127,  1945,  2097,
     919,  1042,   315,   919,   919,   919,  2997,     6,   518,   553,
    2285,   254,  4231,    60,    81,   164,   180,  4245,  4272,  4279,
    1197,  2316,  2347,   355,   372,   418,   419,   994,    29,  2128,
    2159,  2378,   135,   135,    12,    12,   428,   409,  1671,   398,
    1263,  1723,   204,   216,   357,   442,   444,   446,   453,   214,
     308,   435,   203,   665,   254,   254,  3048,  3065,  3082,  3099,
    3116,  3133,  3150,  3167,  3082,   459,   466,   485,   486,  2190,
    2221,  2252,  2283,  2469,  1518,   707,   481,  2905,   132,  2871,
    2934,   495,   502,   511,   514,   527,   484,  2409,   165,   298,
     336,  4286,  4313,  2440,  2471,  2502,  2533,   551,  2905,   405,
    1518,   326,   431,   347,  1518,   469,  2564,  1518,  2595,  2626,
    2657,   707,    22,   561,   562,   577,   585,  3677,  3323,  3711,
    4320,  4327,  3725,  3759,   707,    39,   597,   609,   614,   640,
     655,   662,   622,   962,   921,  1169,   664,   701,   702,   713,
    1049,  1332,  1362,   584,   707,    91,   683,   697,   721,   725,
     738,   739,   727,   691,   639,   764,   744,   753,   754,   775,
      17,   877,   910,   707,   138,  3014,  4820,   792,   808,   810,
     839,  4442,  4475,   602,   619,   494,  4826,  4859,  4865,  4898,
    4904,  4787,  4508,  4541,   195,   195,    29,    29,    29,  1430,
       6,   779,   498,  3014,   299,  2688,   853,   857,   875,   518,
     878,   879,    54,   593,   254,   963,   834,   835,   707,   220,
     595,   623,   887,   888,   891,   901,   644,  1782,  1370,  2007,
     715,   780,   782,   805,  1022,  2039,  2071,   707,   265,  3031,
     868,  3958,   908,   911,   912,   917,   863,  3239,  3357,   354,
     260,    18,   273,   549,  3992,  3999,  4033,  4040,  4074,  3951,
    3391,  3425,  2951,  2719,  1634,   945,  1059,    29,  3773,  3807,
     924,   919,   919,   919,     6,    22,    22,   947,  1141,  1818,
     934,   919,   919,   919,     6,    39,    39,  2750,   956,  1213,
      29,   997,  1002,   935,   919,   919,   919,     6,   212,   212,
      91,    91,   971,  1231,    29,  4574,  4607,  3274,   703,   944,
     919,   919,   919,  3014,  3184,  3184,   349,   349,   138,   138,
    3821,  3855,  2319,  2350,   371,  1012,   726,  1135,  1634,   968,
     707,   707,  1007,   919,  1042,   518,   104,  1225,  1289,  1009,
    1254,    29,  2103,  2134,   975,   919,   919,   919,     6,   596,
     596,   220,   220,  1014,  1274,    29,  3459,  3493,  3309,   309,
    1011,   996,   919,   919,   919,     6,  2968,  3031,  3031,  3201,
    3201,   634,   634,   265,   265,   408,  2781,  4354,  3869,  1032,
    1037,  1038,  1053,   574,  3903,  3917,  1060,  2381,  1074,  1075,
    1083,  1086,   586,  2412,  2443,  1067,  1077,  1094,  1098,  1107,
    1119,   647,  1088,  1097,  1109,  1174,  4937,  4640,  1131,  1150,
    1151,  1155,   784,  4943,  4976,  4673,  4706,  4739,  4772,  4982,
    2812,  1163,  1164,  1165,  1333,  1168,  1723,  1041,   665,   819,
    2165,  1190,  1191,  1193,  1195,   649,  2196,  2227,  2258,  2289,
    4081,  3527,  2968,  1201,  1204,  1205,  1208,   657,   707,   268,
     674,   685,  1183,  1211,  1219,  1220,   733,  1134,  1498,  1600,
     755,   756,   757,   770,   771,   569,  1615,  1678,   594,   675,
    4115,  4122,  3561,  3595,  3629,  3663,  2843,  4361,  4368,  4395,
    4402,  4409,  1221,  1224,  1235,  1240,  1241,  1232,  1233,  1239,
    1243,  1255,  5015,  5021,  5054,  5060,  1382,  1260,  1284,  1287,
     665,  2888,  1564,  1784,   930,   932,   938,   977,   989,   821,
    4156,  4163,  4197,  4204,  4238,  1290,  1323,    29,  1714,  1811,
    1269,   919,   919,   919,     6,   637,   637,   268,   268,  1836,
    1869,  1905,  1940,   665,   823,   665,   824,  1839,  1298,  1305,
    1309,  1316,   837,  1870,  1906,  1939,  1974,  1972,   665,  2004,
     840,   845,   864,   898,   899,  2036
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
       0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -315,  -315,  -315,  1292,  -315,  -315,  -315,    19,  1270,  -315,
    -227,   -19,  -174,  -314,   -40,  -109,   -78,   -73,  -106,   -70,
    -135,   -45,   -25,   -30,    -9,  -237,   -35,   -42,  -239,    90,
     -23,   330,    77,   517,  1405,  1344,  1070,   700
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,     4,     5,    11,    15,    41,    12,    17,
     120,    42,    25,    43,    44,    45,    46,    47,   111,   112,
     113,   114,   243,   244,   245,   128,   246,   247,   134,   106,
     226,   227,   107,   228,   229,   230,   231,   232
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      22,    83,    48,    80,    88,   148,   324,   375,   374,    62,
     436,    87,   -18,   309,   158,   172,    85,    98,   -18,     6,
      48,    84,     6,   190,   -50,   358,   359,   327,   206,   206,
     -50,   206,    77,   384,   258,   166,    19,    86,   195,    88,
      78,   262,    20,   -75,   258,   274,    87,   119,   248,     7,
     275,   122,    59,    99,    61,    62,   -50,   428,   190,    77,
       1,   176,   187,   328,   189,   178,   123,   395,   179,   203,
     259,   205,    86,     8,   480,   430,   429,    13,   171,   203,
     259,   205,    88,    88,    18,    14,    88,   -50,   248,    87,
      87,   388,   162,   161,    85,   160,   350,    21,   124,   159,
     276,   190,   190,   310,   273,   190,   315,   443,   -14,    64,
     488,   190,    23,   314,   -14,    86,    86,   452,   312,   -50,
     125,    48,   206,   311,   290,   316,    26,   248,    94,    95,
     461,   223,   351,   225,   -75,   102,   103,   297,   170,   313,
      98,   298,   124,   364,    55,   290,   299,    48,    50,    53,
     -13,    48,   300,   301,    48,   121,   -13,    51,   206,   302,
     303,   304,   305,   116,   117,   118,   -37,    52,   -37,   -37,
     -52,   206,   306,   307,   308,    59,    99,    61,   241,   365,
     242,   495,   -37,   -37,   -37,   -37,   -54,   435,   -37,   -37,
     -37,   206,   -37,   -37,   -37,   -37,   -37,   174,   507,    -8,
     327,   -11,   -52,   -52,   182,   368,   -37,    -2,     9,   -53,
     206,   149,   248,    70,   126,   127,   150,   350,   -54,   -54,
     -17,   215,   167,   -44,   169,   401,   -17,     1,   -44,   396,
      -5,    -5,    88,    71,   375,   187,   328,   189,   386,    87,
     248,   -53,   -53,    72,    85,   175,    62,    -6,    -6,    84,
      -5,   190,   223,   351,   225,   206,    73,   315,    74,   181,
     287,   402,   289,   182,   314,    86,   -46,    -6,    81,   419,
     415,    75,   -46,   577,   206,    82,   316,   310,    91,   -52,
     315,   183,   184,   185,   186,   -52,    76,   314,   486,    92,
     313,   430,   312,    93,   187,   188,   189,   311,   427,   316,
     -35,    48,   -35,   -35,   -49,   306,   416,   308,   517,   578,
     519,   -52,   -52,   313,   155,   -53,   -35,   -35,   -35,   -35,
     156,   -53,   -35,   -35,   -35,   -11,   -35,   -35,   -35,   -35,
     -35,   -35,   177,   474,   -77,    -9,   -49,   125,   322,   473,
     -35,    -9,   -51,   472,   -78,   -79,   392,   -53,   -53,    -9,
     248,   248,   248,   -16,   364,    49,   115,   602,   234,   -16,
     -44,   135,    63,   -81,   -46,    48,   -44,   206,   206,   -46,
     -82,   248,    62,    49,   -51,   -51,   191,   479,   136,   563,
     561,   207,   207,   156,   207,   315,   315,   315,   531,   241,
     365,   242,   314,   314,   530,   263,    80,   312,   529,   101,
     -76,   249,   528,   520,   316,   316,   316,   316,    63,   -80,
     274,   191,   -48,    48,   -45,   275,   262,   -48,   313,   313,
     -45,   440,   441,   442,   137,   138,   309,    -7,    -7,    -4,
      -4,   449,   450,   451,   144,   145,    -3,    -3,   -45,   146,
      80,   249,   157,   -45,   458,   459,   460,    -7,   151,    -4,
     152,   592,   153,   277,   191,   191,    -3,    48,   191,   154,
     469,   470,   471,   248,   191,   276,   163,   482,   483,   273,
     -12,   -12,   487,   164,    49,   207,   -47,   291,   317,   520,
     249,   -47,   274,   485,   607,   206,   609,   275,   -10,   -10,
     -12,   594,   165,   -83,   168,   492,   493,   494,   291,   615,
      49,   -54,   -71,   522,    49,   385,   -54,    49,   -10,   -72,
     150,   207,   504,   505,   506,   274,   310,   274,   -73,   315,
     275,   -74,   275,    54,   207,   173,   314,    55,   126,   127,
     274,   312,   -54,   -54,   -70,   275,   311,   276,   316,    56,
      57,   273,   -21,   -21,   207,    35,    36,    37,    38,    65,
     -15,    58,   313,   -20,   -20,   -54,   -15,   -69,    59,    60,
      61,   -54,   -21,   207,    16,   249,   330,   331,   208,   208,
     276,    96,   276,   -20,   273,   -75,   273,   585,   586,   569,
     541,   -75,   332,   126,   127,   276,   156,   -54,   -54,   273,
     333,   347,   546,   249,   -26,    65,   -26,   -26,   156,    63,
     -49,   401,   -77,   -77,   191,   279,   -49,   -77,   207,   -50,
     -26,   -26,   -26,   -26,   -50,   -78,   -26,   -26,   -26,   340,
     -26,   -26,   -26,   -26,   -26,   -26,   -52,   207,   -79,   317,
     -78,   -52,   -49,   428,   -26,   -78,   287,   402,   289,   415,
     -50,   373,   577,   298,   357,   341,   509,   -93,   -93,   -93,
     -93,   -79,   317,   551,    49,   568,   -79,   -52,   -52,   156,
     342,   156,   208,   574,   292,   -93,   264,   343,   265,   156,
     -81,   599,   600,   601,   306,   416,   308,   517,   578,   519,
     -77,   -51,   266,   267,   268,   292,   -77,   -51,   269,   270,
     271,   -78,    35,    36,    37,    38,    39,   -78,   325,   -91,
     -91,   -91,   -91,   249,   249,   249,   272,   -82,   -76,   -77,
     -53,   337,   194,   -51,   -51,   -53,   195,   -91,    49,   -80,
     207,   207,   -81,   -78,   249,    63,   353,   -81,   196,   197,
     354,   348,    69,   -49,   198,   199,   200,   201,   -49,   -79,
     202,   -53,   -53,   355,   356,   -79,   193,   203,   204,   205,
     362,   212,   212,   -79,   212,   100,   521,   317,   317,   317,
     317,   -81,   -82,   -48,   -49,   373,    49,   -81,   -82,   -48,
     -81,   253,   -92,   -92,   -92,   -92,   -76,   -80,    69,   -82,
     -76,   193,   -76,   -80,   -42,   -42,    65,   -82,   -42,   -76,
     -92,   -51,   -82,   -42,   -76,   399,   -51,   369,   212,   -42,
     -42,   -80,    69,    69,   142,   143,   -42,   -42,   -42,   -42,
      49,   253,   -80,   370,   413,   371,   249,   -80,   277,   -42,
     -42,   -42,   -51,   -51,   193,   193,   -83,   -47,   193,   608,
     -83,   -83,   521,   -47,   193,   322,   -83,   -19,   207,   -19,
      24,   397,   398,   614,   372,   212,   -71,   296,   321,   156,
     253,   -72,   -71,   -19,   -19,   -19,   -19,   -72,   389,   -19,
     -19,   -19,   390,   -19,   -19,   -19,   -19,   -19,   296,   -91,
     -73,   -91,   -91,   -91,   -91,   -91,   -73,   -19,   -91,   -91,
     391,   212,   329,   393,   394,   -86,   -86,   360,   361,   -91,
     277,   317,   404,   405,   212,   339,   406,   -91,   -91,   -91,
     -91,   -91,   -91,   -86,   -74,   -70,   407,   208,   208,   420,
     -74,   -70,    65,   421,   212,   352,   422,   423,   -89,   -89,
     -89,   -89,   424,   277,   214,   277,   344,   -93,   215,   -93,
     -93,   -93,   -93,   212,   366,   253,   -89,   -71,   277,   -72,
     216,   217,   -71,   523,   -72,   -73,   218,   219,   220,   221,
     -73,   437,   222,   446,   193,   193,   212,   212,   212,   223,
     224,   225,   455,   253,   -29,   439,   -29,   -29,   -91,    69,
     -91,   -91,   -91,   -91,   193,   448,   457,   466,   212,   403,
     -29,   -29,   -29,   -29,   -74,   468,   -29,   -29,   -29,   -74,
     -29,   -29,   -29,   -29,   -29,   -29,   -70,   212,   417,   321,
     139,   -70,   256,   257,   -29,   -93,   -93,   -93,   -93,   481,
     -90,   -90,   -90,   -90,   484,   489,   491,   -43,   -43,   523,
     500,   -43,   321,   -93,   502,   575,   -43,   212,   -90,   -75,
     409,   410,   -43,   -43,   -75,   444,   445,   503,   537,   -43,
     -43,   -43,   -43,   538,   539,   453,   454,   233,   562,   108,
     212,   234,   -43,   -43,   -43,   -75,   235,   256,   257,   540,
     464,   465,   109,   236,   212,   438,   -83,   256,   257,   237,
     238,   239,   240,   253,   253,   253,   253,   253,   477,   478,
     542,   543,   241,   110,   242,   -94,   -94,   -94,   -94,   544,
     212,   212,   545,   -83,   253,    69,   -84,   -84,   360,   361,
     547,   212,    68,   -94,   548,   -85,   -85,   360,   361,   296,
     296,   498,   499,   549,   -84,   212,   192,   -87,   -87,   -87,
     -87,   211,   211,   -85,   211,   550,   527,   321,   321,   321,
     321,   321,   321,   534,   535,   -87,   -21,   552,   -21,   -21,
     -91,   252,   -91,   -91,   -91,   -91,   -91,   447,    68,   256,
     257,   192,   -21,   -21,   -21,   -21,   553,   554,   -21,   -21,
     -21,   555,   -21,   -21,   -21,   -21,   -21,   -21,   211,   557,
     558,   559,   140,   141,   560,   -92,   -21,   -92,   -92,   -92,
     -92,   252,   -88,   -88,   -88,   -88,   253,    77,   580,   -93,
     -93,   -93,   -93,   -93,   192,   192,   564,   565,   192,   566,
     -88,   567,   527,   -61,   192,   254,   255,   570,   212,   579,
     571,   572,   -61,   -61,   573,   211,   581,   295,   320,   456,
     252,   256,   257,   -61,   582,   583,   -27,   -71,   -27,   -27,
     -72,   -61,   -61,   -61,   -61,   -61,   -61,   467,   295,   256,
     257,   -73,   -27,   -27,   -27,   -27,   -74,   -70,   -27,   -27,
     -27,   211,   -27,   -27,   -27,   -27,   -27,   -27,   -71,   -72,
     490,   321,   256,   257,   211,   -73,   -27,   589,   260,   -74,
     -93,   -93,   -93,   -93,   -93,   -93,   147,   212,   -93,   -93,
     501,   -70,   256,   257,   211,   527,   527,   605,   606,   -93,
     -28,   590,   -28,   -28,   591,    10,   596,   -93,   -93,   -93,
     -93,   -93,   -93,   211,   610,   252,   -28,   -28,   -28,   -28,
     598,   611,   -28,   -28,   -28,   612,   -28,   -28,   -28,   -28,
     -28,   -28,   613,   213,   380,   381,   382,   383,   211,   597,
     -28,   256,   257,   252,   -34,     0,   -34,   -34,   -86,    68,
     -86,   -86,   345,   346,   192,     0,     0,     0,   211,     0,
     -34,   -34,   -34,   -34,     0,     0,   -34,   -34,   -34,     0,
     -34,   -34,   -34,   -34,   -34,   -34,     0,   211,   -89,   320,
     -89,   -89,   -89,   -89,   -34,   408,    67,   -93,   -93,   -93,
     -93,   -93,   -93,   -20,     0,   -20,   -20,     0,     0,     0,
      90,     0,   320,     0,     0,   210,   210,   211,    97,   -20,
     -20,   -20,   -20,     0,     0,   -20,   -20,   -20,     0,   -20,
     -20,   -20,   -20,   -20,   -20,   251,     0,     0,     0,     0,
     211,     0,    67,   -20,     0,    90,     0,     0,   462,   463,
       0,     0,     0,     0,   211,     0,   -93,    66,   -93,   -93,
     -93,   -93,    97,   252,   252,   252,   475,   476,     0,     0,
       0,    89,     0,     0,     0,   251,   209,   209,     0,   209,
     211,   211,     0,     0,   252,    68,     0,     0,    90,    90,
       0,   211,    90,     0,     0,     0,   250,     0,    90,   496,
     497,     0,     0,    66,     0,   211,    89,     0,     0,   210,
       0,   294,   319,     0,   251,     0,   526,   320,   320,   320,
     320,   532,   533,   584,   -93,     0,   -93,   -93,   -93,   -93,
     -93,     0,   294,     0,     0,     0,   250,     0,     0,    27,
       0,   180,     0,     0,     0,   326,     0,     0,     0,    89,
      89,     0,     0,    89,     0,    28,    29,    30,   338,    89,
       0,    32,    33,    34,     0,    35,    36,    37,    38,    39,
     209,     0,   293,   318,     0,   250,   252,     0,   349,    40,
     -91,   -91,   -91,   -91,   -91,   -33,     0,   -33,   -33,     0,
       0,     0,   526,   293,     0,     0,     0,   363,   211,   251,
       0,   -33,   -33,   -33,   -33,     0,   209,   -33,   -33,   -33,
       0,   -33,   -33,   -33,   -33,   -33,   -33,     0,     0,   209,
       0,     0,   338,     0,     0,   -33,   -92,   251,   -92,   -92,
     -92,   -92,   -92,    67,     0,     0,     0,     0,    90,   209,
       0,   -86,   400,   -86,   -86,   587,   588,   -86,     0,     0,
       0,   320,     0,     0,     0,    27,     0,   180,   209,     0,
     250,   414,     0,   319,     0,     0,     0,   211,     0,     0,
       0,    28,    29,    30,    31,   603,   604,    32,    33,    34,
       0,    35,    36,    37,    38,    39,   319,     0,   250,     0,
       0,   326,     0,     0,    66,    40,   -42,     0,   -42,    89,
     -42,     0,     0,   209,   -89,   -42,   -89,   -89,   -89,   -89,
     -89,   -42,   -42,     0,   349,     0,     0,     0,   -42,   -42,
     -42,   -42,   209,     0,   318,     0,     0,     0,   363,     0,
       0,   -42,   -42,   -42,     0,     0,     0,   251,   251,   251,
     -93,     0,   -93,   -93,   -93,   -93,   -93,   318,   233,     0,
     261,     0,   234,     0,   210,   210,     0,   235,   251,    67,
       0,     0,     0,   109,   236,   400,     0,     0,     0,     0,
     237,   238,   239,   240,   -92,   -92,   -92,   -92,   -92,   414,
       0,     0,     0,   241,   110,   242,     0,     0,     0,     0,
     525,   319,   319,   319,   319,     0,     0,     0,   250,   250,
     250,     0,     0,     0,     0,   -37,     0,   -37,   -37,   -91,
     -91,   -91,   -91,   -91,   -91,   209,   209,     0,     0,   250,
      66,   -37,   -37,   -37,   -37,     0,     0,   -37,   -37,   -37,
       0,   -37,   -37,   -37,   -37,   -37,   595,   -90,     0,   -90,
     -90,   -90,   -90,   -90,   -90,   -37,   -90,   -90,   -90,   -90,
     251,   524,   318,   318,   318,   318,     0,   -30,     0,   -30,
     -30,     0,     0,     0,     0,   -94,   525,   -94,   -94,   -94,
     -94,   -94,   576,   -30,   -30,   -30,   -30,     0,     0,   -30,
     -30,   -30,     0,   -30,   -30,   -30,   -30,   -30,   -30,     0,
     -31,     0,   -31,   -31,     0,     0,   -84,   -30,   -84,   -84,
     587,   588,   -84,     0,     0,     0,   -31,   -31,   -31,   -31,
       0,   250,   -31,   -31,   -31,     0,   -31,   -31,   -31,   -31,
     -31,   -31,     0,     0,     0,   319,   -32,   524,   -32,   -32,
     -31,     0,   -85,   209,   -85,   -85,   587,   588,   -85,     0,
       0,   576,   -32,   -32,   -32,   -32,     0,     0,   -32,   -32,
     -32,     0,   -32,   -32,   -32,   -32,   -32,   -32,     0,     0,
       0,   -39,     0,   -39,   -39,   -87,   -32,   -87,   -87,   -87,
     -87,   -87,   -86,   -86,   -86,   104,   105,   -39,   -39,   -39,
     -39,     0,     0,   -39,   -39,   -39,   318,   -39,   -39,   -39,
     -39,   -39,   -39,   -40,     0,   -40,   -40,     0,     0,     0,
     -88,   -39,   -88,   -88,   -88,   -88,   -88,     0,     0,   -40,
     -40,   -40,   -40,     0,     0,   -40,   -40,   -40,     0,   -40,
     -40,   -40,   -40,   -40,   -40,   -38,     0,   -38,   -38,     0,
       0,     0,     0,   -40,   -92,   -92,   -92,   -92,   -92,   -92,
       0,   -38,   -38,   -38,   -38,     0,     0,   -38,   -38,   -38,
       0,   -38,   -38,   -38,   -38,   -38,   -38,   -41,     0,   -41,
     -41,     0,     0,     0,     0,   -38,   -86,   -86,   -86,   411,
     412,   -86,     0,   -41,   -41,   -41,   -41,     0,     0,   -41,
     -41,   -41,     0,   -41,   -41,   -41,   -41,   -41,   -41,   -35,
       0,   -35,   -35,     0,     0,     0,     0,   -41,   -89,   -89,
     -89,   -89,   -89,   -89,     0,   -35,   -35,   -35,   -35,     0,
       0,   -35,   -35,   -35,     0,   -35,   -35,   -35,   -35,   -35,
     -24,     0,   -24,   -24,   -89,   -89,   -89,   -89,   -89,   -35,
     -93,   -93,   -93,   -93,   -93,   -93,   -24,   -24,   -24,   -24,
       0,     0,   -24,   -24,   -24,     0,   -24,   -24,   -24,   -24,
     -24,   -26,     0,   -26,   -26,   -93,   -93,   -93,   -93,   -93,
     -24,   -90,   -90,   -90,   -90,   -90,   -90,   -26,   -26,   -26,
     -26,     0,     0,   -26,   -26,   -26,     0,   -26,   -26,   -26,
     -26,   -26,    27,     0,   180,    79,   -90,   -90,   -90,   -90,
     -90,   -26,   -94,   -94,   -94,   -94,   -94,   -94,    28,    29,
      30,    31,     0,     0,    32,    33,    34,     0,    35,    36,
      37,    38,    39,   -23,     0,   -23,   -23,   -94,   -94,   -94,
     -94,   -94,    40,   -84,   -84,   -84,   411,   412,   -84,   -23,
     -23,   -23,   -23,     0,     0,   -23,   -23,   -23,     0,   -23,
     -23,   -23,   -23,   -23,   -25,     0,   -25,   -25,   -84,   -84,
     -84,   104,   105,   -23,   -85,   -85,   -85,   411,   412,   -85,
     -25,   -25,   -25,   -25,     0,     0,   -25,   -25,   -25,     0,
     -25,   -25,   -25,   -25,   -25,   -29,     0,   -29,   -29,   -85,
     -85,   -85,   104,   105,   -25,   -87,   -87,   -87,   -87,   -87,
     -87,   -29,   -29,   -29,   -29,     0,     0,   -29,   -29,   -29,
       0,   -29,   -29,   -29,   -29,   -29,   -22,     0,   -22,   -22,
     -87,   -87,   -87,   -87,   -87,   -29,   -88,   -88,   -88,   -88,
     -88,   -88,   -22,   -22,   -22,   -22,     0,     0,   -22,   -22,
     -22,     0,   -22,   -22,   -22,   -22,   -22,   -27,     0,   -27,
     -27,     0,     0,     0,     0,   -84,   -22,   -84,   -84,   345,
     346,     0,     0,   -27,   -27,   -27,   -27,     0,     0,   -27,
     -27,   -27,     0,   -27,   -27,   -27,   -27,   -27,   -28,     0,
     -28,   -28,     0,     0,     0,     0,   -85,   -27,   -85,   -85,
     345,   346,     0,     0,   -28,   -28,   -28,   -28,     0,     0,
     -28,   -28,   -28,     0,   -28,   -28,   -28,   -28,   -28,   -34,
       0,   -34,   -34,     0,     0,     0,     0,   -94,   -28,   -94,
     -94,   -94,   -94,     0,     0,   -34,   -34,   -34,   -34,     0,
       0,   -34,   -34,   -34,     0,   -34,   -34,   -34,   -34,   -34,
     -33,     0,   -33,   -33,     0,     0,     0,     0,   -87,   -34,
     -87,   -87,   -87,   -87,     0,     0,   -33,   -33,   -33,   -33,
       0,     0,   -33,   -33,   -33,     0,   -33,   -33,   -33,   -33,
     -33,   -30,     0,   -30,   -30,     0,     0,     0,     0,   -88,
     -33,   -88,   -88,   -88,   -88,     0,     0,   -30,   -30,   -30,
     -30,     0,     0,   -30,   -30,   -30,     0,   -30,   -30,   -30,
     -30,   -30,   -31,     0,   -31,   -31,   -88,   -88,   -88,   -88,
     -88,   -30,     0,     0,     0,     0,     0,     0,   -31,   -31,
     -31,   -31,     0,     0,   -31,   -31,   -31,     0,   -31,   -31,
     -31,   -31,   -31,   -32,     0,   -32,   -32,     0,     0,     0,
       0,     0,   -31,     0,     0,     0,     0,     0,     0,   -32,
     -32,   -32,   -32,     0,     0,   -32,   -32,   -32,     0,   -32,
     -32,   -32,   -32,   -32,   -39,     0,   -39,   -39,     0,     0,
       0,     0,     0,   -32,     0,     0,     0,     0,     0,     0,
     -39,   -39,   -39,   -39,     0,     0,   -39,   -39,   -39,     0,
     -39,   -39,   -39,   -39,   -39,   -40,     0,   -40,   -40,     0,
       0,     0,     0,     0,   -39,     0,     0,     0,     0,     0,
       0,   -40,   -40,   -40,   -40,     0,     0,   -40,   -40,   -40,
       0,   -40,   -40,   -40,   -40,   -40,   -38,     0,   -38,   -38,
       0,     0,     0,     0,     0,   -40,     0,     0,     0,     0,
       0,     0,   -38,   -38,   -38,   -38,     0,     0,   -38,   -38,
     -38,     0,   -38,   -38,   -38,   -38,   -38,   -41,     0,   -41,
     -41,     0,     0,     0,     0,     0,   -38,     0,     0,     0,
       0,     0,     0,   -41,   -41,   -41,   -41,     0,     0,   -41,
     -41,   -41,     0,   -41,   -41,   -41,   -41,   -41,   -19,     0,
     -19,   323,     0,     0,     0,     0,     0,   -41,     0,     0,
       0,     0,     0,     0,   -19,   -19,   -19,   -19,     0,     0,
     -19,   -19,   -19,     0,   -19,   -19,   -19,   -19,   -19,   -19,
       0,   -19,   387,     0,     0,     0,     0,     0,   -19,     0,
       0,     0,     0,     0,     0,   -19,   -19,   -19,   -19,     0,
       0,   -19,   -19,   -19,     0,   -19,   -19,   -19,   -19,   -19,
     -21,     0,   -21,   -21,     0,     0,     0,     0,     0,   -19,
       0,     0,     0,     0,     0,     0,   -21,   -21,   -21,   -21,
       0,     0,   -21,   -21,   -21,     0,   -21,   -21,   -21,   -21,
     -21,   -12,     0,   -12,   -12,     0,     0,     0,     0,     0,
     -21,     0,     0,     0,     0,     0,     0,   -12,   -12,   -12,
     -12,     0,     0,   -12,   -12,   -12,     0,   -12,   -12,   -12,
     -12,   -12,    27,     0,   180,   536,     0,     0,     0,     0,
       0,   -12,     0,     0,     0,     0,     0,     0,    28,    29,
      30,    31,     0,     0,    32,    33,    34,     0,    35,    36,
      37,    38,    39,    27,     0,   180,   556,     0,     0,     0,
       0,     0,    40,     0,     0,     0,     0,     0,     0,    28,
      29,    30,    31,     0,     0,    32,    33,    34,     0,    35,
      36,    37,    38,    39,   -20,     0,   -20,   -20,     0,     0,
       0,     0,     0,    40,     0,     0,     0,     0,     0,     0,
     -20,   -20,   -20,   -20,     0,     0,   -20,   -20,   -20,     0,
     -20,   -20,   -20,   -20,   -20,     0,   -43,     0,   -43,     0,
     -43,     0,     0,     0,   -20,   -43,     0,     0,     0,     0,
       0,   -43,   -43,   297,   593,     0,     0,   298,   -43,   -43,
     -43,   -43,   299,     0,     0,     0,     0,     0,   300,   301,
     278,   -43,   -43,   -43,   279,   302,   303,   304,   305,     0,
       0,     0,     0,     0,     0,     0,   280,   281,   306,   307,
     308,     0,   282,   283,   284,   285,     0,     0,   286,   233,
       0,     0,     0,   234,     0,   287,   288,   289,   235,     0,
       0,     0,     0,     0,   109,   236,   297,     0,     0,     0,
     298,   237,   238,   239,   240,   299,     0,     0,     0,     0,
       0,   300,   301,   508,   241,   110,   242,   509,   302,   303,
     304,   305,     0,     0,     0,     0,     0,     0,     0,   510,
     511,   306,   307,   308,     0,   512,   513,   514,   515,     0,
       0,   516,   -36,     0,     0,     0,   -36,     0,   517,   518,
     519,   -36,     0,     0,     0,     0,     0,     0,   -36,   233,
       0,     0,     0,   234,   -36,   -36,   -36,   -36,   235,     0,
       0,     0,     0,     0,     0,   236,   297,   -36,   -36,   -36,
     298,   237,   238,   239,   240,   299,     0,     0,     0,     0,
       0,     0,   301,   -57,   241,   367,   242,   -57,   302,   303,
     304,   305,     0,     0,     0,     0,     0,     0,     0,   -57,
     -58,   306,   418,   308,   -58,   -57,   -57,   -57,   -57,     0,
       0,     0,     0,     0,     0,     0,   -58,   181,   -57,   -57,
     -57,   182,   -58,   -58,   -58,   -58,     0,     0,     0,     0,
       0,     0,     0,    82,   -64,   -58,   -58,   -58,   -64,   183,
     184,   185,   186,     0,     0,     0,     0,     0,     0,     0,
     -64,   -65,   187,   188,   189,   -65,   -64,   -64,   -64,   -64,
       0,     0,     0,     0,     0,     0,     0,   -65,   -68,   -64,
     -64,   -64,   -68,   -65,   -65,   -65,   -65,     0,     0,     0,
       0,     0,     0,     0,   -68,   -66,   -65,   -65,   -65,   -66,
     -68,   -68,   -68,   -68,     0,     0,     0,     0,     0,     0,
       0,   -66,   -67,   -68,   -68,   -68,   -67,   -66,   -66,   -66,
     -66,     0,     0,     0,     0,     0,     0,     0,   -67,   233,
     -66,   -66,   -66,   234,   -67,   -67,   -67,   -67,     0,     0,
       0,     0,     0,     0,     0,   236,   297,   -67,   -67,   -67,
     298,   237,   238,   239,   240,     0,     0,     0,     0,     0,
       0,     0,   301,     0,   241,   367,   242,     0,   302,   303,
     304,   305,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   306,   418,   308,   425,   -93,     0,   -93,   -93,   -93,
     -93,   -93,   426,     0,   -93,   -93,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -93,     0,     0,     0,     0,
       0,     0,     0,   -93,   -93,   -93,   -93,   -93,   -93,   260,
       0,   -93,   -93,   -93,   -93,   -93,   -93,     0,     0,   -93,
     -93,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -93,     0,     0,     0,     0,     0,     0,     0,   -93,   -93,
     -93,   -93,   -93,   -93,   425,   -93,     0,   -93,   -93,   -93,
     -93,   -93,     0,     0,   -93,   -93,     0,     0,   334,   -93,
       0,   -93,   -93,   -93,   -93,   -93,     0,     0,   -93,   -93,
       0,     0,     0,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
       0,     0,     0,     0,     0,     0,     0,   -93,   -93,   -93,
     -93,   -93,   -93,   -92,     0,   -92,   -92,   -92,   -92,   -92,
       0,     0,   -92,   -92,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -92,     0,     0,     0,     0,     0,     0,
       0,   -92,   -92,   -92,   -92,   -92,   -92,   -86,     0,   -86,
     -86,   433,   434,   -86,     0,     0,   -86,   -86,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -86,     0,     0,
       0,     0,     0,     0,     0,   -86,   -86,   -86,   -86,   -86,
     -86,   -89,     0,   -89,   -89,   -89,   -89,   -89,     0,     0,
     -89,   -89,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -89,     0,     0,     0,     0,     0,     0,     0,   -89,
     -89,   -89,   -89,   -89,   -89,   -93,     0,   -93,   -93,   -93,
     -93,   -93,     0,     0,   -93,   -93,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -93,     0,     0,     0,     0,
       0,     0,     0,   -93,   -93,   -93,   -93,   -93,   -93,   -90,
       0,   -90,   -90,   -90,   -90,   -90,     0,     0,   -90,   -90,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -90,
       0,     0,     0,     0,     0,     0,     0,   -90,   -90,   -90,
     -90,   -90,   -90,   -94,     0,   -94,   -94,   -94,   -94,   -94,
       0,     0,   -94,   -94,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -94,     0,     0,     0,     0,     0,     0,
       0,   -94,   -94,   -94,   -94,   -94,   -94,   -84,     0,   -84,
     -84,   433,   434,   -84,     0,     0,   -84,   -84,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -84,     0,     0,
       0,     0,     0,     0,     0,   -84,   -84,   -84,   -84,   -84,
     -84,   -85,     0,   -85,   -85,   433,   434,   -85,     0,     0,
     -85,   -85,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -85,     0,     0,     0,     0,     0,     0,     0,   -85,
     -85,   -85,   -85,   -85,   -85,   -87,     0,   -87,   -87,   -87,
     -87,   -87,     0,     0,   -87,   -87,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -87,     0,     0,     0,     0,
       0,     0,     0,   -87,   -87,   -87,   -87,   -87,   -87,   -88,
       0,   -88,   -88,   -88,   -88,   -88,     0,     0,   -88,   -88,
       0,     0,     0,   -91,     0,   -91,   -91,   -91,   -91,   -88,
       0,     0,   -91,   -91,     0,     0,     0,   -88,   -88,   -88,
     -88,   -88,   -88,   -91,     0,     0,     0,     0,     0,     0,
       0,   -91,   -91,   -91,   -91,   -91,   -91,   -92,     0,   -92,
     -92,   -92,   -92,     0,     0,     0,   -92,   -92,     0,     0,
       0,   -86,     0,   -86,   -86,   335,   336,   -92,     0,     0,
     -86,   -86,     0,     0,     0,   -92,   -92,   -92,   -92,   -92,
     -92,   -86,     0,     0,     0,     0,     0,     0,     0,   -86,
     -86,   -86,   -86,   -86,   -86,   -89,     0,   -89,   -89,   -89,
     -89,     0,     0,     0,   -89,   -89,     0,     0,     0,   -93,
       0,   -93,   -93,   -93,   -93,   -89,     0,     0,   -93,   -93,
       0,     0,     0,   -89,   -89,   -89,   -89,   -89,   -89,   -93,
       0,     0,     0,     0,     0,     0,     0,   -93,   -93,   -93,
     -93,   -93,   -93,   -90,     0,   -90,   -90,   -90,   -90,     0,
       0,     0,   -90,   -90,     0,     0,     0,   -84,     0,   -84,
     -84,   335,   336,   -90,     0,     0,   -84,   -84,     0,     0,
       0,   -90,   -90,   -90,   -90,   -90,   -90,   -84,     0,     0,
       0,     0,     0,     0,     0,   -84,   -84,   -84,   -84,   -84,
     -84,   -85,     0,   -85,   -85,   335,   336,     0,     0,     0,
     -85,   -85,     0,     0,     0,   -94,     0,   -94,   -94,   -94,
     -94,   -85,     0,     0,   -94,   -94,     0,     0,     0,   -85,
     -85,   -85,   -85,   -85,   -85,   -94,     0,     0,     0,     0,
       0,     0,     0,   -94,   -94,   -94,   -94,   -94,   -94,   -87,
       0,   -87,   -87,   -87,   -87,     0,     0,     0,   -87,   -87,
       0,     0,     0,   -88,     0,   -88,   -88,   -88,   -88,   -87,
       0,     0,   -88,   -88,     0,     0,     0,   -87,   -87,   -87,
     -87,   -87,   -87,   -88,     0,     0,     0,     0,     0,     0,
       0,   -88,   -88,   -88,   -88,   -88,   -88,   -61,     0,   431,
     432,     0,     0,   -61,   -62,     0,   -61,   -61,     0,     0,
     -62,     0,     0,   -62,   -62,     0,     0,   -61,     0,     0,
       0,     0,     0,     0,   -62,   -61,   -61,   -61,   -61,   -61,
     -61,     0,   -62,   -62,   -62,   -62,   -62,   -62,   -56,     0,
       0,     0,     0,     0,   -56,   -60,     0,   129,   130,     0,
       0,   -60,     0,     0,   -60,   -60,     0,     0,   131,     0,
       0,     0,     0,     0,     0,   -60,   -56,   -56,   132,   133,
     -56,   -56,     0,   -60,   -60,   -60,   -60,   -60,   -60,   -81,
       0,     0,     0,     0,     0,   -81,   -82,     0,   -81,   -81,
       0,     0,   -82,     0,     0,   -82,   -82,     0,     0,   -81,
       0,     0,     0,     0,     0,     0,   -82,   -81,   -81,   -81,
     -81,   -81,   -81,     0,   -82,   -82,   -82,   -82,   -82,   -82,
     -63,     0,     0,     0,     0,     0,   -63,   -83,     0,   -63,
     -63,     0,     0,   -83,     0,     0,   -83,   -83,     0,     0,
     -63,     0,     0,     0,     0,     0,     0,   -83,   -63,   -63,
     -63,   -63,   -63,   -63,     0,   -83,   -83,   -83,   -83,   -83,
     -83,   -55,     0,     0,     0,     0,     0,   -55,   -59,     0,
     129,   130,     0,     0,   -59,     0,     0,   -59,   -59,     0,
       0,   131,     0,     0,     0,     0,     0,     0,   -59,   -55,
     -55,   132,   133,   -55,   -55,     0,   -59,   -59,   -59,   -59,
     -59,   -59,   -71,     0,     0,     0,     0,     0,   -71,   -72,
       0,   -71,   -71,     0,     0,   -72,     0,     0,   -72,   -72,
       0,     0,   -71,     0,     0,     0,     0,     0,     0,   -72,
     -71,   -71,   -71,   -71,   -71,   -71,     0,   -72,   -72,   -72,
     -72,   -72,   -72,   -73,     0,     0,     0,     0,     0,   -73,
     -74,     0,   -73,   -73,     0,     0,   -74,     0,     0,   -74,
     -74,     0,     0,   -73,     0,     0,     0,     0,     0,     0,
     -74,   -73,   -73,   -73,   -73,   -73,   -73,   -62,   -74,   -74,
     -74,   -74,   -74,   -74,   -70,     0,   -62,   -62,     0,     0,
     -70,   -56,     0,   -70,   -70,     0,     0,   -62,     0,     0,
     129,   130,     0,     0,   -70,   -62,   -62,   -62,   -62,   -62,
     -62,   131,   -70,   -70,   -70,   -70,   -70,   -70,   -60,   -56,
     -56,   132,   133,   -56,   -56,   -63,     0,   -60,   -60,     0,
       0,     0,   -55,     0,   -63,   -63,     0,     0,   -60,     0,
       0,   129,   130,     0,     0,   -63,   -60,   -60,   -60,   -60,
     -60,   -60,   131,   -63,   -63,   -63,   -63,   -63,   -63,   -59,
     -55,   -55,   132,   133,   -55,   -55,   -81,     0,   -59,   -59,
       0,     0,     0,   -82,     0,   -81,   -81,     0,     0,   -59,
       0,     0,   -82,   -82,     0,     0,   -81,   -59,   -59,   -59,
     -59,   -59,   -59,   -82,   -81,   -81,   -81,   -81,   -81,   -81,
     -83,   -82,   -82,   -82,   -82,   -82,   -82,   -71,     0,   -83,
     -83,     0,     0,     0,   -72,     0,   -71,   -71,     0,     0,
     -83,     0,     0,   -72,   -72,     0,     0,   -71,   -83,   -83,
     -83,   -83,   -83,   -83,   -72,   -71,   -71,   -71,   -71,   -71,
     -71,   -73,   -72,   -72,   -72,   -72,   -72,   -72,   -74,     0,
     -73,   -73,     0,     0,     0,   -70,     0,   -74,   -74,     0,
       0,   -73,     0,     0,   -70,   -70,     0,     0,   -74,   -73,
     -73,   -73,   -73,   -73,   -73,   -70,   -74,   -74,   -74,   -74,
     -74,   -74,     0,   -70,   -70,   -70,   -70,   -70,   -70,   -91,
     -91,   -91,   -91,   -91,   -91,     0,     0,   -91,   -91,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -91,     0,
       0,     0,     0,     0,     0,     0,   -91,   -91,   -91,   -91,
     -91,   -91,   -92,   -92,   -92,   -92,   -92,   -92,     0,     0,
     -92,   -92,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -92,     0,     0,     0,     0,     0,     0,     0,   -92,
     -92,   -92,   -92,   -92,   -92,   -86,   -86,   -86,   378,   379,
     -86,     0,     0,   -86,   -86,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -86,     0,     0,     0,     0,     0,
       0,     0,   -86,   -86,   -86,   -86,   -86,   -86,   -89,   -89,
     -89,   -89,   -89,   -89,     0,     0,   -89,   -89,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -89,     0,     0,
       0,     0,     0,     0,     0,   -89,   -89,   -89,   -89,   -89,
     -89,   -93,   -93,   -93,   -93,   -93,   -93,     0,     0,   -93,
     -93,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -93,     0,     0,     0,     0,     0,     0,     0,   -93,   -93,
     -93,   -93,   -93,   -93,   -90,   -90,   -90,   -90,   -90,   -90,
       0,     0,   -90,   -90,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -90,     0,     0,     0,     0,     0,     0,
       0,   -90,   -90,   -90,   -90,   -90,   -90,   -94,   -94,   -94,
     -94,   -94,   -94,     0,     0,   -94,   -94,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -94,     0,     0,     0,
       0,     0,     0,     0,   -94,   -94,   -94,   -94,   -94,   -94,
     -84,   -84,   -84,   378,   379,   -84,     0,     0,   -84,   -84,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -84,
       0,     0,     0,     0,     0,     0,     0,   -84,   -84,   -84,
     -84,   -84,   -84,   -85,   -85,   -85,   378,   379,   -85,     0,
       0,   -85,   -85,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -85,     0,     0,     0,     0,     0,     0,     0,
     -85,   -85,   -85,   -85,   -85,   -85,   -87,   -87,   -87,   -87,
     -87,   -87,     0,     0,   -87,   -87,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -87,     0,     0,     0,     0,
       0,     0,     0,   -87,   -87,   -87,   -87,   -87,   -87,   -88,
     -88,   -88,   -88,   -88,   -88,     0,     0,   -88,   -88,     0,
       0,     0,     0,     0,   -61,   376,   377,     0,   -88,   -61,
       0,     0,   -61,   -61,     0,     0,   -88,   -88,   -88,   -88,
     -88,   -88,     0,   -61,     0,     0,     0,     0,     0,     0,
       0,   -61,   -61,   -61,   -61,   -61,   -61,   -62,     0,     0,
       0,     0,   -62,   -56,     0,   -62,   -62,     0,   -56,     0,
       0,   129,   130,     0,     0,     0,   -62,     0,     0,     0,
       0,     0,   131,     0,   -62,   -62,   -62,   -62,   -62,   -62,
     -56,   -56,   132,   133,   -56,   -56,   -60,     0,     0,     0,
       0,   -60,   -81,     0,   -60,   -60,     0,   -81,     0,     0,
     -81,   -81,     0,     0,     0,   -60,     0,     0,     0,     0,
       0,   -81,     0,   -60,   -60,   -60,   -60,   -60,   -60,   -81,
     -81,   -81,   -81,   -81,   -81,   -82,     0,     0,     0,     0,
     -82,   -63,     0,   -82,   -82,     0,   -63,     0,     0,   -63,
     -63,     0,     0,     0,   -82,     0,     0,     0,     0,     0,
     -63,     0,   -82,   -82,   -82,   -82,   -82,   -82,   -63,   -63,
     -63,   -63,   -63,   -63,   -83,     0,     0,     0,     0,   -83,
     -55,     0,   -83,   -83,     0,   -55,     0,     0,   129,   130,
       0,     0,     0,   -83,     0,     0,     0,     0,     0,   131,
       0,   -83,   -83,   -83,   -83,   -83,   -83,   -55,   -55,   132,
     133,   -55,   -55,   -59,     0,     0,     0,     0,   -59,   -70,
       0,   -59,   -59,     0,   -70,     0,     0,   -70,   -70,     0,
       0,     0,   -59,     0,     0,     0,     0,     0,   -70,     0,
     -59,   -59,   -59,   -59,   -59,   -59,   -70,   -70,   -70,   -70,
     -70,   -70,   -71,     0,     0,     0,     0,   -71,   -72,     0,
     -71,   -71,     0,   -72,     0,     0,   -72,   -72,     0,     0,
       0,   -71,     0,     0,     0,     0,     0,   -72,     0,   -71,
     -71,   -71,   -71,   -71,   -71,   -72,   -72,   -72,   -72,   -72,
     -72,   -73,     0,     0,     0,     0,   -73,   -74,     0,   -73,
     -73,     0,   -74,     0,     0,   -74,   -74,     0,     0,     0,
     -73,     0,     0,     0,     0,     0,   -74,     0,   -73,   -73,
     -73,   -73,   -73,   -73,   -74,   -74,   -74,   -74,   -74,   -74
};

static const yytype_int16 yycheck[] =
{
      19,    46,    25,    43,    46,   111,   180,   246,   245,    32,
     324,    46,     6,   148,   123,   150,    46,     5,    12,     0,
      43,    46,     3,    46,     6,     8,     9,     5,    51,    52,
      12,    54,     5,   260,     5,   144,     6,    46,     9,    81,
      13,   111,    12,    26,     5,   123,    81,    41,    71,    41,
     123,    81,    40,    41,    42,    78,    38,    39,    81,     5,
      20,   170,    40,    41,    42,   174,     6,    13,   177,    40,
      41,    42,    81,     0,   388,   314,   313,     5,   148,    40,
      41,    42,   124,   125,    41,     7,   128,     6,   111,   124,
     125,   265,   134,   128,   124,   125,     5,     3,    38,   124,
     123,   124,   125,   148,   123,   128,   148,   334,     6,    32,
       6,   134,    20,   148,    12,   124,   125,   344,   148,    38,
      39,   144,   145,   148,   147,   148,    41,   150,    51,    52,
     357,    40,    41,    42,     7,     8,     9,     5,     6,   148,
       5,     9,    38,     5,     9,   168,    14,   170,     5,    41,
       6,   174,    20,    21,   177,    78,    12,     5,   181,    27,
      28,    29,    30,    73,    74,    75,     1,     5,     3,     4,
       6,   194,    40,    41,    42,    40,    41,    42,    40,    41,
      42,   408,    17,    18,    19,    20,     6,   322,    23,    24,
      25,   214,    27,    28,    29,    30,    31,    32,   425,     5,
       5,     7,    38,    39,     9,   235,    41,     0,     1,     6,
     233,     7,   235,     5,    34,    35,    12,     5,    38,    39,
       6,     9,   145,     7,   147,     5,    12,    20,    12,   274,
       0,     1,   274,     5,   473,    40,    41,    42,   263,   274,
     263,    38,    39,     5,   274,   168,   269,     0,     1,   274,
      20,   274,    40,    41,    42,   278,     5,   299,     5,     5,
      40,    41,    42,     9,   299,   274,     6,    20,    14,   299,
       5,     5,    12,     5,   297,    21,   299,   322,     7,     6,
     322,    27,    28,    29,    30,    12,     5,   322,   394,     7,
     299,   530,   322,    41,    40,    41,    42,   322,    38,   322,
       1,   324,     3,     4,     6,    40,    41,    42,    40,    41,
      42,    38,    39,   322,     6,     6,    17,    18,    19,    20,
      12,    12,    23,    24,    25,     7,    27,    28,    29,    30,
      31,    32,     6,   375,     7,     6,    38,    39,    12,   374,
      41,    12,     6,   373,     7,     7,   269,    38,    39,    20,
     373,   374,   375,     6,     5,    25,    41,   584,     9,    12,
       6,     6,    32,     7,     7,   388,    12,   390,   391,    12,
       7,   394,   395,    43,    38,    39,    46,     6,     6,   488,
     486,    51,    52,    12,    54,   427,   428,   429,   430,    40,
      41,    42,   427,   428,   429,    38,   436,   427,   428,     7,
       7,    71,   427,   426,   427,   428,   429,   430,    78,     7,
     488,    81,     7,   436,     6,   488,   486,    12,   427,   428,
      12,   331,   332,   333,     6,     6,   561,     0,     1,     0,
       1,   341,   342,   343,     6,    26,     0,     1,     7,    41,
     480,   111,     7,    12,   354,   355,   356,    20,     6,    20,
       6,   560,     6,   123,   124,   125,    20,   480,   128,     6,
     370,   371,   372,   486,   134,   488,     7,   390,   391,   488,
       0,     1,   395,     7,   144,   145,     7,   147,   148,   502,
     150,    12,   560,   393,   593,   508,   595,   560,     0,     1,
      20,   561,     7,     7,    13,   405,   406,   407,   168,   608,
     170,     7,     7,   426,   174,     7,    12,   177,    20,     7,
      12,   181,   422,   423,   424,   593,   561,   595,     7,   561,
     593,     7,   595,     5,   194,    41,   561,     9,    34,    35,
     608,   561,    38,    39,     7,   608,   561,   560,   561,    21,
      22,   560,     0,     1,   214,    27,    28,    29,    30,    32,
       6,    33,   561,     0,     1,     6,    12,     6,    40,    41,
      42,    12,    20,   233,    20,   235,     5,     5,    51,    52,
     593,    54,   595,    20,   593,     6,   595,     8,     9,   502,
       6,    12,     5,    34,    35,   608,    12,    38,    39,   608,
       5,     7,     6,   263,     1,    78,     3,     4,    12,   269,
       6,     5,     7,     6,   274,     9,    12,    12,   278,     7,
      17,    18,    19,    20,    12,     6,    23,    24,    25,     5,
      27,    28,    29,    30,    31,    32,     7,   297,     6,   299,
       7,    12,    38,    39,    41,    12,    40,    41,    42,     5,
      38,    39,     5,     9,     5,     5,     9,     8,     9,    10,
      11,     7,   322,     6,   324,     6,    12,    38,    39,    12,
       5,    12,   145,     6,   147,    26,     1,     5,     3,    12,
       6,   581,   582,   583,    40,    41,    42,    40,    41,    42,
       6,     6,    17,    18,    19,   168,    12,    12,    23,    24,
      25,     6,    27,    28,    29,    30,    31,    12,   181,     8,
       9,    10,    11,   373,   374,   375,    41,     6,     6,    26,
       7,   194,     5,    38,    39,    12,     9,    26,   388,     6,
     390,   391,     7,    26,   394,   395,     5,    12,    21,    22,
       5,   214,    32,     7,    27,    28,    29,    30,    12,     6,
      33,    38,    39,     5,     5,    12,    46,    40,    41,    42,
     233,    51,    52,    26,    54,    55,   426,   427,   428,   429,
     430,     6,     6,     6,    38,    39,   436,    12,    12,    12,
      26,    71,     8,     9,    10,    11,     6,     6,    78,    26,
      26,    81,    12,    12,     5,     6,   269,     7,     9,     7,
      26,     7,    12,    14,    12,   278,    12,     5,    98,    20,
      21,    26,   102,   103,   104,   105,    27,    28,    29,    30,
     480,   111,     7,     5,   297,     5,   486,    12,   488,    40,
      41,    42,    38,    39,   124,   125,     7,     6,   128,     6,
       6,    12,   502,    12,   134,    12,    12,     1,   508,     3,
       4,     7,     7,     6,     5,   145,     6,   147,   148,    12,
     150,     6,    12,    17,    18,    19,    20,    12,     5,    23,
      24,    25,     5,    27,    28,    29,    30,    31,   168,     6,
       6,     8,     9,    10,    11,    12,    12,    41,    15,    16,
       5,   181,   182,     5,     5,     8,     9,    10,    11,    26,
     560,   561,     5,     5,   194,   195,     5,    34,    35,    36,
      37,    38,    39,    26,     6,     6,     5,   390,   391,    41,
      12,    12,   395,     5,   214,   215,     5,     5,     8,     9,
      10,    11,     5,   593,     5,   595,     5,     6,     9,     8,
       9,    10,    11,   233,   234,   235,    26,     7,   608,     7,
      21,    22,    12,   426,    12,     7,    27,    28,    29,    30,
      12,     6,    33,     6,   254,   255,   256,   257,   258,    40,
      41,    42,     6,   263,     1,    41,     3,     4,     6,   269,
       8,     9,    10,    11,   274,    41,    41,     6,   278,   279,
      17,    18,    19,    20,     7,    41,    23,    24,    25,    12,
      27,    28,    29,    30,    31,    32,     7,   297,   298,   299,
       6,    12,     8,     9,    41,     8,     9,    10,    11,    41,
       8,     9,    10,    11,     7,     6,    41,     5,     6,   502,
       6,     9,   322,    26,    13,   508,    14,   327,    26,     7,
       8,     9,    20,    21,    12,   335,   336,    41,     6,    27,
      28,    29,    30,     6,     6,   345,   346,     5,     7,     7,
     350,     9,    40,    41,    42,     6,    14,     8,     9,     6,
     360,   361,    20,    21,   364,     6,     6,     8,     9,    27,
      28,    29,    30,   373,   374,   375,   376,   377,   378,   379,
       6,     6,    40,    41,    42,     8,     9,    10,    11,     6,
     390,   391,     6,    26,   394,   395,     8,     9,    10,    11,
       6,   401,    32,    26,     6,     8,     9,    10,    11,   409,
     410,   411,   412,     6,    26,   415,    46,     8,     9,    10,
      11,    51,    52,    26,    54,     6,   426,   427,   428,   429,
     430,   431,   432,   433,   434,    26,     1,     6,     3,     4,
       6,    71,     8,     9,    10,    11,    12,     6,    78,     8,
       9,    81,    17,    18,    19,    20,     6,     6,    23,    24,
      25,     6,    27,    28,    29,    30,    31,    32,    98,     6,
       6,     6,   102,   103,     6,     6,    41,     8,     9,    10,
      11,   111,     8,     9,    10,    11,   486,     5,     5,     7,
       8,     9,    10,    11,   124,   125,     6,     6,   128,     6,
      26,     6,   502,     6,   134,     8,     9,     6,   508,   509,
       6,     6,    15,    16,     6,   145,     5,   147,   148,     6,
     150,     8,     9,    26,     5,     5,     1,     6,     3,     4,
       6,    34,    35,    36,    37,    38,    39,     6,   168,     8,
       9,     6,    17,    18,    19,    20,     6,     6,    23,    24,
      25,   181,    27,    28,    29,    30,    31,    32,    26,    26,
       6,   561,     8,     9,   194,    26,    41,     7,     5,    26,
       7,     8,     9,    10,    11,    12,    13,   577,    15,    16,
       6,    26,     8,     9,   214,   585,   586,   587,   588,    26,
       1,     7,     3,     4,     7,     3,     6,    34,    35,    36,
      37,    38,    39,   233,     6,   235,    17,    18,    19,    20,
      41,     6,    23,    24,    25,     6,    27,    28,    29,    30,
      31,    32,     6,    53,   254,   255,   256,   257,   258,     6,
      41,     8,     9,   263,     1,    -1,     3,     4,     6,   269,
       8,     9,    10,    11,   274,    -1,    -1,    -1,   278,    -1,
      17,    18,    19,    20,    -1,    -1,    23,    24,    25,    -1,
      27,    28,    29,    30,    31,    32,    -1,   297,     6,   299,
       8,     9,    10,    11,    41,     5,    32,     7,     8,     9,
      10,    11,    12,     1,    -1,     3,     4,    -1,    -1,    -1,
      46,    -1,   322,    -1,    -1,    51,    52,   327,    54,    17,
      18,    19,    20,    -1,    -1,    23,    24,    25,    -1,    27,
      28,    29,    30,    31,    32,    71,    -1,    -1,    -1,    -1,
     350,    -1,    78,    41,    -1,    81,    -1,    -1,   358,   359,
      -1,    -1,    -1,    -1,   364,    -1,     6,    32,     8,     9,
      10,    11,    98,   373,   374,   375,   376,   377,    -1,    -1,
      -1,    46,    -1,    -1,    -1,   111,    51,    52,    -1,    54,
     390,   391,    -1,    -1,   394,   395,    -1,    -1,   124,   125,
      -1,   401,   128,    -1,    -1,    -1,    71,    -1,   134,   409,
     410,    -1,    -1,    78,    -1,   415,    81,    -1,    -1,   145,
      -1,   147,   148,    -1,   150,    -1,   426,   427,   428,   429,
     430,   431,   432,     5,     6,    -1,     8,     9,    10,    11,
      12,    -1,   168,    -1,    -1,    -1,   111,    -1,    -1,     1,
      -1,     3,    -1,    -1,    -1,   181,    -1,    -1,    -1,   124,
     125,    -1,    -1,   128,    -1,    17,    18,    19,   194,   134,
      -1,    23,    24,    25,    -1,    27,    28,    29,    30,    31,
     145,    -1,   147,   148,    -1,   150,   486,    -1,   214,    41,
       7,     8,     9,    10,    11,     1,    -1,     3,     4,    -1,
      -1,    -1,   502,   168,    -1,    -1,    -1,   233,   508,   235,
      -1,    17,    18,    19,    20,    -1,   181,    23,    24,    25,
      -1,    27,    28,    29,    30,    31,    32,    -1,    -1,   194,
      -1,    -1,   258,    -1,    -1,    41,     6,   263,     8,     9,
      10,    11,    12,   269,    -1,    -1,    -1,    -1,   274,   214,
      -1,     6,   278,     8,     9,    10,    11,    12,    -1,    -1,
      -1,   561,    -1,    -1,    -1,     1,    -1,     3,   233,    -1,
     235,   297,    -1,   299,    -1,    -1,    -1,   577,    -1,    -1,
      -1,    17,    18,    19,    20,   585,   586,    23,    24,    25,
      -1,    27,    28,    29,    30,    31,   322,    -1,   263,    -1,
      -1,   327,    -1,    -1,   269,    41,     5,    -1,     7,   274,
       9,    -1,    -1,   278,     6,    14,     8,     9,    10,    11,
      12,    20,    21,    -1,   350,    -1,    -1,    -1,    27,    28,
      29,    30,   297,    -1,   299,    -1,    -1,    -1,   364,    -1,
      -1,    40,    41,    42,    -1,    -1,    -1,   373,   374,   375,
       6,    -1,     8,     9,    10,    11,    12,   322,     5,    -1,
       7,    -1,     9,    -1,   390,   391,    -1,    14,   394,   395,
      -1,    -1,    -1,    20,    21,   401,    -1,    -1,    -1,    -1,
      27,    28,    29,    30,     7,     8,     9,    10,    11,   415,
      -1,    -1,    -1,    40,    41,    42,    -1,    -1,    -1,    -1,
     426,   427,   428,   429,   430,    -1,    -1,    -1,   373,   374,
     375,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,     7,
       8,     9,    10,    11,    12,   390,   391,    -1,    -1,   394,
     395,    17,    18,    19,    20,    -1,    -1,    23,    24,    25,
      -1,    27,    28,    29,    30,    31,    32,     6,    -1,     8,
       9,    10,    11,    12,     6,    41,     8,     9,    10,    11,
     486,   426,   427,   428,   429,   430,    -1,     1,    -1,     3,
       4,    -1,    -1,    -1,    -1,     6,   502,     8,     9,    10,
      11,    12,   508,    17,    18,    19,    20,    -1,    -1,    23,
      24,    25,    -1,    27,    28,    29,    30,    31,    32,    -1,
       1,    -1,     3,     4,    -1,    -1,     6,    41,     8,     9,
      10,    11,    12,    -1,    -1,    -1,    17,    18,    19,    20,
      -1,   486,    23,    24,    25,    -1,    27,    28,    29,    30,
      31,    32,    -1,    -1,    -1,   561,     1,   502,     3,     4,
      41,    -1,     6,   508,     8,     9,    10,    11,    12,    -1,
      -1,   577,    17,    18,    19,    20,    -1,    -1,    23,    24,
      25,    -1,    27,    28,    29,    30,    31,    32,    -1,    -1,
      -1,     1,    -1,     3,     4,     6,    41,     8,     9,    10,
      11,    12,     7,     8,     9,    10,    11,    17,    18,    19,
      20,    -1,    -1,    23,    24,    25,   561,    27,    28,    29,
      30,    31,    32,     1,    -1,     3,     4,    -1,    -1,    -1,
       6,    41,     8,     9,    10,    11,    12,    -1,    -1,    17,
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
       1,    -1,     3,     4,     7,     8,     9,    10,    11,    41,
       7,     8,     9,    10,    11,    12,    17,    18,    19,    20,
      -1,    -1,    23,    24,    25,    -1,    27,    28,    29,    30,
      31,     1,    -1,     3,     4,     7,     8,     9,    10,    11,
      41,     7,     8,     9,    10,    11,    12,    17,    18,    19,
      20,    -1,    -1,    23,    24,    25,    -1,    27,    28,    29,
      30,    31,     1,    -1,     3,     4,     7,     8,     9,    10,
      11,    41,     7,     8,     9,    10,    11,    12,    17,    18,
      19,    20,    -1,    -1,    23,    24,    25,    -1,    27,    28,
      29,    30,    31,     1,    -1,     3,     4,     7,     8,     9,
      10,    11,    41,     7,     8,     9,    10,    11,    12,    17,
      18,    19,    20,    -1,    -1,    23,    24,    25,    -1,    27,
      28,    29,    30,    31,     1,    -1,     3,     4,     7,     8,
       9,    10,    11,    41,     7,     8,     9,    10,    11,    12,
      17,    18,    19,    20,    -1,    -1,    23,    24,    25,    -1,
      27,    28,    29,    30,    31,     1,    -1,     3,     4,     7,
       8,     9,    10,    11,    41,     7,     8,     9,    10,    11,
      12,    17,    18,    19,    20,    -1,    -1,    23,    24,    25,
      -1,    27,    28,    29,    30,    31,     1,    -1,     3,     4,
       7,     8,     9,    10,    11,    41,     7,     8,     9,    10,
      11,    12,    17,    18,    19,    20,    -1,    -1,    23,    24,
      25,    -1,    27,    28,    29,    30,    31,     1,    -1,     3,
       4,    -1,    -1,    -1,    -1,     6,    41,     8,     9,    10,
      11,    -1,    -1,    17,    18,    19,    20,    -1,    -1,    23,
      24,    25,    -1,    27,    28,    29,    30,    31,     1,    -1,
       3,     4,    -1,    -1,    -1,    -1,     6,    41,     8,     9,
      10,    11,    -1,    -1,    17,    18,    19,    20,    -1,    -1,
      23,    24,    25,    -1,    27,    28,    29,    30,    31,     1,
      -1,     3,     4,    -1,    -1,    -1,    -1,     6,    41,     8,
       9,    10,    11,    -1,    -1,    17,    18,    19,    20,    -1,
      -1,    23,    24,    25,    -1,    27,    28,    29,    30,    31,
       1,    -1,     3,     4,    -1,    -1,    -1,    -1,     6,    41,
       8,     9,    10,    11,    -1,    -1,    17,    18,    19,    20,
      -1,    -1,    23,    24,    25,    -1,    27,    28,    29,    30,
      31,     1,    -1,     3,     4,    -1,    -1,    -1,    -1,     6,
      41,     8,     9,    10,    11,    -1,    -1,    17,    18,    19,
      20,    -1,    -1,    23,    24,    25,    -1,    27,    28,    29,
      30,    31,     1,    -1,     3,     4,     7,     8,     9,    10,
      11,    41,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,
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
      27,    28,    29,    30,    31,    -1,     5,    -1,     7,    -1,
       9,    -1,    -1,    -1,    41,    14,    -1,    -1,    -1,    -1,
      -1,    20,    21,     5,     6,    -1,    -1,     9,    27,    28,
      29,    30,    14,    -1,    -1,    -1,    -1,    -1,    20,    21,
       5,    40,    41,    42,     9,    27,    28,    29,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    40,    41,
      42,    -1,    27,    28,    29,    30,    -1,    -1,    33,     5,
      -1,    -1,    -1,     9,    -1,    40,    41,    42,    14,    -1,
      -1,    -1,    -1,    -1,    20,    21,     5,    -1,    -1,    -1,
       9,    27,    28,    29,    30,    14,    -1,    -1,    -1,    -1,
      -1,    20,    21,     5,    40,    41,    42,     9,    27,    28,
      29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,
      22,    40,    41,    42,    -1,    27,    28,    29,    30,    -1,
      -1,    33,     5,    -1,    -1,    -1,     9,    -1,    40,    41,
      42,    14,    -1,    -1,    -1,    -1,    -1,    -1,    21,     5,
      -1,    -1,    -1,     9,    27,    28,    29,    30,    14,    -1,
      -1,    -1,    -1,    -1,    -1,    21,     5,    40,    41,    42,
       9,    27,    28,    29,    30,    14,    -1,    -1,    -1,    -1,
      -1,    -1,    21,     5,    40,    41,    42,     9,    27,    28,
      29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,
       5,    40,    41,    42,     9,    27,    28,    29,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    21,     5,    40,    41,
      42,     9,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    21,     5,    40,    41,    42,     9,    27,
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
      -1,    40,    41,    42,     5,     6,    -1,     8,     9,    10,
      11,    12,    13,    -1,    15,    16,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    34,    35,    36,    37,    38,    39,     5,
      -1,     7,     8,     9,    10,    11,    12,    -1,    -1,    15,
      16,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,
      36,    37,    38,    39,     5,     6,    -1,     8,     9,    10,
      11,    12,    -1,    -1,    15,    16,    -1,    -1,     5,     6,
      -1,     8,     9,    10,    11,    26,    -1,    -1,    15,    16,
      -1,    -1,    -1,    34,    35,    36,    37,    38,    39,    26,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,    36,
      37,    38,    39,     6,    -1,     8,     9,    10,    11,    12,
      -1,    -1,    15,    16,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    34,    35,    36,    37,    38,    39,     6,    -1,     8,
       9,    10,    11,    12,    -1,    -1,    15,    16,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,
      39,     6,    -1,     8,     9,    10,    11,    12,    -1,    -1,
      15,    16,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,
      35,    36,    37,    38,    39,     6,    -1,     8,     9,    10,
      11,    12,    -1,    -1,    15,    16,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    34,    35,    36,    37,    38,    39,     6,
      -1,     8,     9,    10,    11,    12,    -1,    -1,    15,    16,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,    36,
      37,    38,    39,     6,    -1,     8,     9,    10,    11,    12,
      -1,    -1,    15,    16,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    34,    35,    36,    37,    38,    39,     6,    -1,     8,
       9,    10,    11,    12,    -1,    -1,    15,    16,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,
      39,     6,    -1,     8,     9,    10,    11,    12,    -1,    -1,
      15,    16,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,
      35,    36,    37,    38,    39,     6,    -1,     8,     9,    10,
      11,    12,    -1,    -1,    15,    16,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    34,    35,    36,    37,    38,    39,     6,
      -1,     8,     9,    10,    11,    12,    -1,    -1,    15,    16,
      -1,    -1,    -1,     6,    -1,     8,     9,    10,    11,    26,
      -1,    -1,    15,    16,    -1,    -1,    -1,    34,    35,    36,
      37,    38,    39,    26,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    34,    35,    36,    37,    38,    39,     6,    -1,     8,
       9,    10,    11,    -1,    -1,    -1,    15,    16,    -1,    -1,
      -1,     6,    -1,     8,     9,    10,    11,    26,    -1,    -1,
      15,    16,    -1,    -1,    -1,    34,    35,    36,    37,    38,
      39,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,
      35,    36,    37,    38,    39,     6,    -1,     8,     9,    10,
      11,    -1,    -1,    -1,    15,    16,    -1,    -1,    -1,     6,
      -1,     8,     9,    10,    11,    26,    -1,    -1,    15,    16,
      -1,    -1,    -1,    34,    35,    36,    37,    38,    39,    26,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,    36,
      37,    38,    39,     6,    -1,     8,     9,    10,    11,    -1,
      -1,    -1,    15,    16,    -1,    -1,    -1,     6,    -1,     8,
       9,    10,    11,    26,    -1,    -1,    15,    16,    -1,    -1,
      -1,    34,    35,    36,    37,    38,    39,    26,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,
      39,     6,    -1,     8,     9,    10,    11,    -1,    -1,    -1,
      15,    16,    -1,    -1,    -1,     6,    -1,     8,     9,    10,
      11,    26,    -1,    -1,    15,    16,    -1,    -1,    -1,    34,
      35,    36,    37,    38,    39,    26,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    34,    35,    36,    37,    38,    39,     6,
      -1,     8,     9,    10,    11,    -1,    -1,    -1,    15,    16,
      -1,    -1,    -1,     6,    -1,     8,     9,    10,    11,    26,
      -1,    -1,    15,    16,    -1,    -1,    -1,    34,    35,    36,
      37,    38,    39,    26,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    34,    35,    36,    37,    38,    39,     6,    -1,     8,
       9,    -1,    -1,    12,     6,    -1,    15,    16,    -1,    -1,
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
      37,    38,    39,    -1,    34,    35,    36,    37,    38,    39,
       6,    -1,    -1,    -1,    -1,    -1,    12,     6,    -1,    15,
      16,    -1,    -1,    12,    -1,    -1,    15,    16,    -1,    -1,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    26,    34,    35,
      36,    37,    38,    39,    -1,    34,    35,    36,    37,    38,
      39,     6,    -1,    -1,    -1,    -1,    -1,    12,     6,    -1,
      15,    16,    -1,    -1,    12,    -1,    -1,    15,    16,    -1,
      -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    26,    34,
      35,    36,    37,    38,    39,    -1,    34,    35,    36,    37,
      38,    39,     6,    -1,    -1,    -1,    -1,    -1,    12,     6,
      -1,    15,    16,    -1,    -1,    12,    -1,    -1,    15,    16,
      -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      34,    35,    36,    37,    38,    39,    -1,    34,    35,    36,
      37,    38,    39,     6,    -1,    -1,    -1,    -1,    -1,    12,
       6,    -1,    15,    16,    -1,    -1,    12,    -1,    -1,    15,
      16,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    34,    35,    36,    37,    38,    39,     6,    34,    35,
      36,    37,    38,    39,     6,    -1,    15,    16,    -1,    -1,
      12,     6,    -1,    15,    16,    -1,    -1,    26,    -1,    -1,
      15,    16,    -1,    -1,    26,    34,    35,    36,    37,    38,
      39,    26,    34,    35,    36,    37,    38,    39,     6,    34,
      35,    36,    37,    38,    39,     6,    -1,    15,    16,    -1,
      -1,    -1,     6,    -1,    15,    16,    -1,    -1,    26,    -1,
      -1,    15,    16,    -1,    -1,    26,    34,    35,    36,    37,
      38,    39,    26,    34,    35,    36,    37,    38,    39,     6,
      34,    35,    36,    37,    38,    39,     6,    -1,    15,    16,
      -1,    -1,    -1,     6,    -1,    15,    16,    -1,    -1,    26,
      -1,    -1,    15,    16,    -1,    -1,    26,    34,    35,    36,
      37,    38,    39,    26,    34,    35,    36,    37,    38,    39,
       6,    34,    35,    36,    37,    38,    39,     6,    -1,    15,
      16,    -1,    -1,    -1,     6,    -1,    15,    16,    -1,    -1,
      26,    -1,    -1,    15,    16,    -1,    -1,    26,    34,    35,
      36,    37,    38,    39,    26,    34,    35,    36,    37,    38,
      39,     6,    34,    35,    36,    37,    38,    39,     6,    -1,
      15,    16,    -1,    -1,    -1,     6,    -1,    15,    16,    -1,
      -1,    26,    -1,    -1,    15,    16,    -1,    -1,    26,    34,
      35,    36,    37,    38,    39,    26,    34,    35,    36,    37,
      38,    39,    -1,    34,    35,    36,    37,    38,    39,     7,
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
      -1,    -1,    -1,    -1,     7,     8,     9,    -1,    26,    12,
      -1,    -1,    15,    16,    -1,    -1,    34,    35,    36,    37,
      38,    39,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    34,    35,    36,    37,    38,    39,     7,    -1,    -1,
      -1,    -1,    12,     7,    -1,    15,    16,    -1,    12,    -1,
      -1,    15,    16,    -1,    -1,    -1,    26,    -1,    -1,    -1,
      -1,    -1,    26,    -1,    34,    35,    36,    37,    38,    39,
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
      36,    37,    38,    39,    34,    35,    36,    37,    38,    39
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    20,    46,    47,    48,    49,    52,    41,     0,     1,
      48,    50,    53,     5,     7,    51,    20,    54,    41,     6,
      12,     3,    56,    20,     4,    57,    41,     1,    17,    18,
      19,    20,    23,    24,    25,    27,    28,    29,    30,    31,
      41,    52,    56,    58,    59,    60,    61,    62,    75,    76,
       5,     5,     5,    41,     5,     9,    21,    22,    33,    40,
      41,    42,    75,    76,    77,    78,    79,    80,    81,    82,
       5,     5,     5,     5,     5,     5,     5,     5,    13,     4,
      59,    14,    21,    66,    67,    68,    69,    71,    72,    79,
      80,     7,     7,    41,    77,    77,    78,    80,     5,    41,
      82,     7,     8,     9,    10,    11,    74,    77,     7,    20,
      41,    63,    64,    65,    66,    41,    74,    74,    74,    41,
      55,    77,    68,     6,    38,    39,    34,    35,    70,    15,
      16,    26,    36,    37,    73,     6,     6,     6,     6,     6,
      81,    81,    82,    82,     6,    26,    41,    13,    63,     7,
      12,     6,     6,     6,     6,     6,    12,     7,    60,    67,
      68,    71,    72,     7,     7,     7,    60,    77,    13,    77,
       6,    64,    65,    41,    32,    77,    60,     6,    60,    60,
       3,     5,     9,    27,    28,    29,    30,    40,    41,    42,
      75,    76,    81,    82,     5,     9,    21,    22,    27,    28,
      29,    30,    33,    40,    41,    42,    75,    76,    78,    79,
      80,    81,    82,    53,     5,     9,    21,    22,    27,    28,
      29,    30,    33,    40,    41,    42,    75,    76,    78,    79,
      80,    81,    82,     5,     9,    14,    21,    27,    28,    29,
      30,    40,    42,    67,    68,    69,    71,    72,    75,    76,
      79,    80,    81,    82,     8,     9,     8,     9,     5,    41,
       5,     7,    64,    38,     1,     3,    17,    18,    19,    23,
      24,    25,    41,    56,    61,    62,    75,    76,     5,     9,
      21,    22,    27,    28,    29,    30,    33,    40,    41,    42,
      75,    76,    78,    79,    80,    81,    82,     5,     9,    14,
      20,    21,    27,    28,    29,    30,    40,    41,    42,    65,
      66,    67,    68,    69,    71,    72,    75,    76,    79,    80,
      81,    82,    12,     4,    57,    78,    80,     5,    41,    82,
       5,     5,     5,     5,     5,    10,    11,    78,    80,    82,
       5,     5,     5,     5,     5,    10,    11,     7,    78,    80,
       5,    41,    82,     5,     5,     5,     5,     5,     8,     9,
      10,    11,    78,    80,     5,    41,    82,    41,    68,     5,
       5,     5,     5,    39,    70,    73,     8,     9,    10,    11,
      81,    81,    81,    81,    55,     7,    67,     4,    57,     5,
       5,     5,    77,     5,     5,    13,    66,     7,     7,    78,
      80,     5,    41,    82,     5,     5,     5,     5,     5,     8,
       9,    10,    11,    78,    80,     5,    41,    82,    41,    68,
      41,     5,     5,     5,     5,     5,    13,    38,    39,    70,
      73,     8,     9,    10,    11,    65,    58,     6,     6,    41,
      74,    74,    74,    55,    82,    82,     6,     6,    41,    74,
      74,    74,    55,    82,    82,     6,     6,    41,    74,    74,
      74,    55,    81,    81,    82,    82,     6,     6,    41,    74,
      74,    74,    68,    71,    72,    81,    81,    82,    82,     6,
      58,    41,    77,    77,     7,    74,    63,    77,     6,     6,
       6,    41,    74,    74,    74,    55,    81,    81,    82,    82,
       6,     6,    13,    41,    74,    74,    74,    55,     5,     9,
      21,    22,    27,    28,    29,    30,    33,    40,    41,    42,
      75,    76,    77,    78,    79,    80,    81,    82,    67,    68,
      71,    72,    81,    81,    82,    82,     4,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     4,     6,     6,     6,
       6,    63,     7,    60,     6,     6,     6,     6,     6,    77,
       6,     6,     6,     6,     6,    78,    80,     5,    41,    82,
       5,     5,     5,     5,     5,     8,     9,    10,    11,     7,
       7,     7,    60,     6,    64,    32,     6,     6,    41,    74,
      74,    74,    55,    81,    81,    82,    82,    60,     6,    60,
       6,     6,     6,     6,     6,    60
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    45,    46,    47,    47,    47,    48,    48,    50,    51,
      49,    53,    52,    54,    54,    54,    55,    55,    55,    57,
      56,    56,    58,    58,    59,    59,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    61,    62,    62,    62,
      62,    62,    63,    63,    64,    64,    65,    65,    65,    66,
      66,    67,    67,    68,    68,    69,    69,    70,    70,    71,
      71,    72,    72,    72,    73,    73,    73,    73,    73,    74,
      75,    76,    76,    76,    76,    77,    77,    78,    78,    78,
      78,    79,    79,    79,    80,    80,    80,    81,    81,    81,
      81,    82,    82,    82,    82
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     2,     1,     1,     1,     0,     0,
       8,     0,     4,     4,     2,     0,     3,     1,     0,     0,
       4,     2,     2,     1,     1,     1,     1,     2,     2,     1,
       5,     5,     5,     4,     3,     1,     2,     4,     6,     5,
       6,     7,     1,     2,     1,     3,     1,     4,     3,     3,
       1,     3,     1,     2,     1,     3,     1,     1,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       4,     4,     4,     4,     4,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     3,     3,     1,     3,     3,     1,
       2,     1,     1,     1,     3
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
#line 2668 "parser/parser.c"
    break;

  case 6: /* stmt: func_stmt  */
#line 61 "parser/c7.y"
                       { add_ast((yyvsp[0].expression)); }
#line 2674 "parser/parser.c"
    break;

  case 7: /* stmt: var_decl_stmt  */
#line 62 "parser/c7.y"
                           { add_ast((yyvsp[0].expression)); }
#line 2680 "parser/parser.c"
    break;

  case 8: /* $@1: %empty  */
#line 65 "parser/c7.y"
                            {
                set_id_type((yyvsp[0].int_value), ST_ID_FUNC);
                global_scope = push_to_stack((yyvsp[0].int_value));
                set_scope((yyvsp[0].int_value), global_scope);
            }
#line 2690 "parser/parser.c"
    break;

  case 9: /* $@2: %empty  */
#line 69 "parser/c7.y"
                          {
                global_opt = NEW_LVL;
                update_global_refs();
            }
#line 2699 "parser/parser.c"
    break;

  case 10: /* func_stmt: TYPE ID $@1 PARENT_LEFT $@2 param_list PARENT_RIGHT compound_block_stmt  */
#line 72 "parser/c7.y"
                                                                {
                (yyval.expression) = create_func_expr(create_str_expr((yyvsp[-7].str_value)), create_var_expr((yyvsp[-6].int_value)), (yyvsp[-2].expression), (yyvsp[0].expression));
                free((yyvsp[-7].str_value));
            }
#line 2708 "parser/parser.c"
    break;

  case 11: /* $@3: %empty  */
#line 78 "parser/c7.y"
                                {
                    set_id_type((yyvsp[0].int_value), ST_ID_VAR);
                    global_scope = push_to_stack((yyvsp[0].int_value));
                    set_scope((yyvsp[0].int_value), global_scope);
                }
#line 2718 "parser/parser.c"
    break;

  case 12: /* var_decl_stmt: TYPE ID $@3 SEMICOLON  */
#line 82 "parser/c7.y"
                            {
                    (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-3].str_value)), create_var_expr((yyvsp[-2].int_value)));
                    free((yyvsp[-3].str_value));
                }
#line 2727 "parser/parser.c"
    break;

  case 13: /* param_list: param_list COMMA TYPE ID  */
#line 88 "parser/c7.y"
                                                {
                (yyval.expression) = create_ter_expr((yyvsp[-3].expression), create_str_expr((yyvsp[-1].str_value)), create_var_expr((yyvsp[0].int_value)));
                set_id_type((yyvsp[0].int_value), ST_ID_VAR);
                free((yyvsp[-1].str_value));
            }
#line 2737 "parser/parser.c"
    break;

  case 14: /* param_list: TYPE ID  */
#line 93 "parser/c7.y"
                            {
                (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-1].str_value)), create_var_expr((yyvsp[0].int_value)));
                set_id_type((yyvsp[0].int_value), ST_ID_VAR);
                global_scope = push_to_stack((yyvsp[0].int_value));
                set_scope((yyvsp[0].int_value), global_scope);
                free((yyvsp[-1].str_value));
            }
#line 2749 "parser/parser.c"
    break;

  case 15: /* param_list: %empty  */
#line 100 "parser/c7.y"
                          {
                (yyval.expression) = create_empty_expr();
                global_opt = RM_LVL;
                update_global_refs();
            }
#line 2759 "parser/parser.c"
    break;

  case 16: /* simple_param_list: simple_param_list COMMA ID  */
#line 107 "parser/c7.y"
                                                       {
                        (yyval.expression) = create_bin_expr((yyvsp[-2].expression), create_var_expr((yyvsp[0].int_value)));
                        set_id_type((yyvsp[0].int_value), ST_ID_VAR);
                    }
#line 2768 "parser/parser.c"
    break;

  case 17: /* simple_param_list: ID  */
#line 111 "parser/c7.y"
                            { 
                        (yyval.expression) = create_var_expr((yyvsp[0].int_value));
                        set_id_type((yyvsp[0].int_value), ST_ID_VAR);
                    }
#line 2777 "parser/parser.c"
    break;

  case 18: /* simple_param_list: %empty  */
#line 115 "parser/c7.y"
                                  { (yyval.expression) = create_empty_expr(); }
#line 2783 "parser/parser.c"
    break;

  case 19: /* $@4: %empty  */
#line 118 "parser/c7.y"
                                 {
                        global_opt = NEW_LVL;
                        update_global_refs();
                    }
#line 2792 "parser/parser.c"
    break;

  case 20: /* compound_block_stmt: BRACK_LEFT $@4 block_stmts BRACK_RIGHT  */
#line 121 "parser/c7.y"
                                                 {
                        (yyval.expression) = (yyvsp[-1].expression);
                        pop_stack_scopes();
                        global_opt = DEC_LVL;
                        update_global_refs();
                    }
#line 2803 "parser/parser.c"
    break;

  case 21: /* compound_block_stmt: BRACK_LEFT BRACK_RIGHT  */
#line 127 "parser/c7.y"
                                              {
                        (yyval.expression) = create_empty_expr();
                    }
#line 2811 "parser/parser.c"
    break;

  case 22: /* block_stmts: block_stmts block_item  */
#line 132 "parser/c7.y"
                                           {
                (yyval.expression) = create_bin_expr((yyvsp[-1].expression), (yyvsp[0].expression)); 
            }
#line 2819 "parser/parser.c"
    break;

  case 23: /* block_stmts: block_item  */
#line 135 "parser/c7.y"
                            { (yyval.expression) = (yyvsp[0].expression); }
#line 2825 "parser/parser.c"
    break;

  case 24: /* block_item: var_decl_stmt  */
#line 138 "parser/c7.y"
                               { (yyval.expression) = (yyvsp[0].expression); }
#line 2831 "parser/parser.c"
    break;

  case 25: /* block_item: block_stmt  */
#line 139 "parser/c7.y"
                            { (yyval.expression) = (yyvsp[0].expression); }
#line 2837 "parser/parser.c"
    break;

  case 26: /* block_stmt: compound_block_stmt  */
#line 142 "parser/c7.y"
                                     { (yyval.expression) = (yyvsp[0].expression); }
#line 2843 "parser/parser.c"
    break;

  case 27: /* block_stmt: func_call SEMICOLON  */
#line 143 "parser/c7.y"
                                     { (yyval.expression) = (yyvsp[-1].expression); }
#line 2849 "parser/parser.c"
    break;

  case 28: /* block_stmt: set_func_call SEMICOLON  */
#line 144 "parser/c7.y"
                                         { (yyval.expression) = (yyvsp[-1].expression); }
#line 2855 "parser/parser.c"
    break;

  case 29: /* block_stmt: flow_control  */
#line 145 "parser/c7.y"
                              { (yyval.expression) = (yyvsp[0].expression); }
#line 2861 "parser/parser.c"
    break;

  case 30: /* block_stmt: READ PARENT_LEFT ID PARENT_RIGHT SEMICOLON  */
#line 146 "parser/c7.y"
                                                               {
                (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-4].str_value)), create_var_expr((yyvsp[-2].int_value))); 
                set_id_type((yyvsp[-2].int_value), ST_ID_VAR);
                free((yyvsp[-4].str_value));
            }
#line 2871 "parser/parser.c"
    break;

  case 31: /* block_stmt: WRITE PARENT_LEFT simple_expr PARENT_RIGHT SEMICOLON  */
#line 151 "parser/c7.y"
                                                                         {
                (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-4].str_value)), (yyvsp[-2].expression)); 
                free((yyvsp[-4].str_value));
            }
#line 2880 "parser/parser.c"
    break;

  case 32: /* block_stmt: WRITELN PARENT_LEFT simple_expr PARENT_RIGHT SEMICOLON  */
#line 155 "parser/c7.y"
                                                                           {
                (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-4].str_value)), (yyvsp[-2].expression)); 
                free((yyvsp[-4].str_value));
            }
#line 2889 "parser/parser.c"
    break;

  case 33: /* block_stmt: ID ASSIGN simple_expr SEMICOLON  */
#line 159 "parser/c7.y"
                                                       {
                (yyval.expression) = create_ter_expr(create_var_expr((yyvsp[-3].int_value)), create_char_expr((yyvsp[-2].op)), (yyvsp[-1].expression));
                set_id_type((yyvsp[-3].int_value), ST_ID_VAR); 
                global_scope = push_to_stack((yyvsp[-3].int_value));
                set_scope((yyvsp[-3].int_value), global_scope);
            }
#line 2900 "parser/parser.c"
    break;

  case 34: /* block_stmt: RETURN simple_expr SEMICOLON  */
#line 165 "parser/c7.y"
                                                 {
                (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-2].str_value)), (yyvsp[-1].expression)); 
                free((yyvsp[-2].str_value));
            }
#line 2909 "parser/parser.c"
    break;

  case 35: /* block_stmt: error  */
#line 169 "parser/c7.y"
                    { 
                (yyval.expression) = create_empty_expr();
                yyerrok;
            }
#line 2918 "parser/parser.c"
    break;

  case 36: /* flow_control_if: IF PARENT_LEFT  */
#line 175 "parser/c7.y"
                                    {
                    global_opt = SAME_LVL;
                    update_global_refs();
                    (yyval.expression) = create_str_expr((yyvsp[-1].str_value));
                    free((yyvsp[-1].str_value));
                }
#line 2929 "parser/parser.c"
    break;

  case 37: /* flow_control: flow_control_if or_cond_expr PARENT_RIGHT block_stmt  */
#line 183 "parser/c7.y"
                                                                                               {
                    (yyval.expression) = create_ter_expr((yyvsp[-3].expression), (yyvsp[-2].expression), (yyvsp[0].expression)); 
                }
#line 2937 "parser/parser.c"
    break;

  case 38: /* flow_control: flow_control_if or_cond_expr PARENT_RIGHT block_stmt ELSE block_stmt  */
#line 186 "parser/c7.y"
                                                                                                            {
                    (yyval.expression) = create_qui_expr((yyvsp[-5].expression), (yyvsp[-4].expression), (yyvsp[-2].expression), create_str_expr((yyvsp[-1].str_value)), (yyvsp[0].expression));
                    free((yyvsp[-1].str_value));
                }
#line 2946 "parser/parser.c"
    break;

  case 39: /* flow_control: FORALL PARENT_LEFT set_expr PARENT_RIGHT block_stmt  */
#line 190 "parser/c7.y"
                                                                                 {
                    (yyval.expression) = create_ter_expr(create_str_expr((yyvsp[-4].str_value)), (yyvsp[-2].expression), (yyvsp[0].expression)); 
                    free((yyvsp[-4].str_value));
                }
#line 2955 "parser/parser.c"
    break;

  case 40: /* flow_control: FOR PARENT_LEFT opt_param opt_param PARENT_RIGHT block_stmt  */
#line 194 "parser/c7.y"
                                                                                             {
                    (yyval.expression) = create_qua_expr(create_str_expr((yyvsp[-5].str_value)), (yyvsp[-3].expression), (yyvsp[-2].expression), (yyvsp[0].expression)); 
                    free((yyvsp[-5].str_value));
                }
#line 2964 "parser/parser.c"
    break;

  case 41: /* flow_control: FOR PARENT_LEFT opt_param opt_param for_expression PARENT_RIGHT block_stmt  */
#line 198 "parser/c7.y"
                                                                                                                {
                    (yyval.expression) = create_qui_expr(create_str_expr((yyvsp[-6].str_value)), (yyvsp[-4].expression), (yyvsp[-3].expression), (yyvsp[-2].expression), (yyvsp[0].expression)); 
                    free((yyvsp[-6].str_value));
                }
#line 2973 "parser/parser.c"
    break;

  case 42: /* opt_param: SEMICOLON  */
#line 204 "parser/c7.y"
                        { (yyval.expression) = create_empty_expr(); }
#line 2979 "parser/parser.c"
    break;

  case 43: /* opt_param: for_expression SEMICOLON  */
#line 205 "parser/c7.y"
                                          { (yyval.expression) = (yyvsp[-1].expression); }
#line 2985 "parser/parser.c"
    break;

  case 44: /* for_expression: decl_or_cond_expr  */
#line 208 "parser/c7.y"
                                       { (yyval.expression) = (yyvsp[0].expression); }
#line 2991 "parser/parser.c"
    break;

  case 45: /* for_expression: for_expression COMMA decl_or_cond_expr  */
#line 209 "parser/c7.y"
                                                                 {
                    (yyval.expression) = create_bin_expr((yyvsp[-2].expression), (yyvsp[0].expression)); 
                }
#line 2999 "parser/parser.c"
    break;

  case 46: /* decl_or_cond_expr: or_cond_expr  */
#line 214 "parser/c7.y"
                                      { (yyval.expression) = (yyvsp[0].expression); }
#line 3005 "parser/parser.c"
    break;

  case 47: /* decl_or_cond_expr: TYPE ID ASSIGN simple_expr  */
#line 215 "parser/c7.y"
                                                             {
                        (yyval.expression) = create_qua_expr(create_str_expr((yyvsp[-3].str_value)), create_var_expr((yyvsp[-2].int_value)),
                                             create_char_expr((yyvsp[-1].op)), (yyvsp[0].expression)); 
                        set_id_type((yyvsp[-2].int_value), ST_ID_VAR);
                        free((yyvsp[-3].str_value));
                    }
#line 3016 "parser/parser.c"
    break;

  case 48: /* decl_or_cond_expr: ID ASSIGN simple_expr  */
#line 221 "parser/c7.y"
                                                     {
                        (yyval.expression) = create_ter_expr(create_var_expr((yyvsp[-2].int_value)), create_char_expr((yyvsp[-1].op)), (yyvsp[0].expression));
                        set_id_type((yyvsp[-2].int_value), ST_ID_VAR);
                    }
#line 3025 "parser/parser.c"
    break;

  case 49: /* or_cond_expr: or_cond_expr OR_OP and_cond_expr  */
#line 227 "parser/c7.y"
                                                               {
                    (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_str_expr((yyvsp[-1].str_value)), (yyvsp[0].expression)); 
                    free((yyvsp[-1].str_value));
                }
#line 3034 "parser/parser.c"
    break;

  case 50: /* or_cond_expr: and_cond_expr  */
#line 231 "parser/c7.y"
                                   { (yyval.expression) = (yyvsp[0].expression); }
#line 3040 "parser/parser.c"
    break;

  case 51: /* and_cond_expr: and_cond_expr AND_OP unary_cond_expr  */
#line 234 "parser/c7.y"
                                                                   {
                    (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_str_expr((yyvsp[-1].str_value)), (yyvsp[0].expression)); 
                    free((yyvsp[-1].str_value));
                }
#line 3049 "parser/parser.c"
    break;

  case 52: /* and_cond_expr: unary_cond_expr  */
#line 238 "parser/c7.y"
                                     { (yyval.expression) = (yyvsp[0].expression); }
#line 3055 "parser/parser.c"
    break;

  case 53: /* unary_cond_expr: NOT_OP unary_cond_expr  */
#line 241 "parser/c7.y"
                                               {
                    (yyval.expression) = create_bin_expr(create_char_expr((yyvsp[-1].op)), (yyvsp[0].expression)); 
                }
#line 3063 "parser/parser.c"
    break;

  case 54: /* unary_cond_expr: eq_cond_expr  */
#line 244 "parser/c7.y"
                                  { (yyval.expression) = (yyvsp[0].expression); }
#line 3069 "parser/parser.c"
    break;

  case 55: /* eq_cond_expr: eq_cond_expr equal_ops rel_cond_expr  */
#line 247 "parser/c7.y"
                                                                  {
                    (yyval.expression) = create_ter_expr((yyvsp[-2].expression), (yyvsp[-1].expression), (yyvsp[0].expression));
                }
#line 3077 "parser/parser.c"
    break;

  case 56: /* eq_cond_expr: rel_cond_expr  */
#line 250 "parser/c7.y"
                                   { (yyval.expression) = (yyvsp[0].expression); }
#line 3083 "parser/parser.c"
    break;

  case 57: /* equal_ops: EQ_OP  */
#line 253 "parser/c7.y"
                       {
                (yyval.expression) = create_str_expr((yyvsp[0].str_value));
                free((yyvsp[0].str_value));
            }
#line 3092 "parser/parser.c"
    break;

  case 58: /* equal_ops: NE_OP  */
#line 257 "parser/c7.y"
                       {
                (yyval.expression) = create_str_expr((yyvsp[0].str_value));
                free((yyvsp[0].str_value));
            }
#line 3101 "parser/parser.c"
    break;

  case 59: /* rel_cond_expr: rel_cond_expr rel_ops rel_cond_stmt  */
#line 263 "parser/c7.y"
                                                                  {
                    (yyval.expression) = create_ter_expr((yyvsp[-2].expression), (yyvsp[-1].expression), (yyvsp[0].expression));
                }
#line 3109 "parser/parser.c"
    break;

  case 60: /* rel_cond_expr: rel_cond_stmt  */
#line 266 "parser/c7.y"
                                   { (yyval.expression) = (yyvsp[0].expression); }
#line 3115 "parser/parser.c"
    break;

  case 61: /* rel_cond_stmt: arith_expr  */
#line 269 "parser/c7.y"
                                { (yyval.expression) = (yyvsp[0].expression); }
#line 3121 "parser/parser.c"
    break;

  case 62: /* rel_cond_stmt: EMPTY  */
#line 270 "parser/c7.y"
                           {
                    (yyval.expression) = create_str_expr((yyvsp[0].str_value));
                    free((yyvsp[0].str_value));
                }
#line 3130 "parser/parser.c"
    break;

  case 63: /* rel_cond_stmt: func_expr  */
#line 274 "parser/c7.y"
                               { (yyval.expression) = (yyvsp[0].expression); }
#line 3136 "parser/parser.c"
    break;

  case 64: /* rel_ops: L_OP  */
#line 277 "parser/c7.y"
                  { (yyval.expression) = create_char_expr((yyvsp[0].op)); }
#line 3142 "parser/parser.c"
    break;

  case 65: /* rel_ops: G_OP  */
#line 278 "parser/c7.y"
                  { (yyval.expression) = create_char_expr((yyvsp[0].op)); }
#line 3148 "parser/parser.c"
    break;

  case 66: /* rel_ops: LE_OP  */
#line 279 "parser/c7.y"
                   {
            (yyval.expression) = create_str_expr((yyvsp[0].str_value));
            free((yyvsp[0].str_value));
        }
#line 3157 "parser/parser.c"
    break;

  case 67: /* rel_ops: GE_OP  */
#line 283 "parser/c7.y"
                   { 
            (yyval.expression) = create_str_expr((yyvsp[0].str_value));
            free((yyvsp[0].str_value));
        }
#line 3166 "parser/parser.c"
    break;

  case 68: /* rel_ops: IN  */
#line 287 "parser/c7.y"
                {
            (yyval.expression) = create_str_expr((yyvsp[0].str_value));
            free((yyvsp[0].str_value));
        }
#line 3175 "parser/parser.c"
    break;

  case 69: /* set_expr: simple_expr IN simple_expr  */
#line 293 "parser/c7.y"
                                                    {
                (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_str_expr((yyvsp[-1].str_value)), (yyvsp[0].expression)); 
                free((yyvsp[-1].str_value));
            }
#line 3184 "parser/parser.c"
    break;

  case 70: /* func_call: ID PARENT_LEFT simple_param_list PARENT_RIGHT  */
#line 299 "parser/c7.y"
                                                                  {
                (yyval.expression) = create_bin_expr(create_var_expr((yyvsp[-3].int_value)), (yyvsp[-1].expression)); 
                set_id_type((yyvsp[-3].int_value), ST_ID_FUNC);
            }
#line 3193 "parser/parser.c"
    break;

  case 71: /* set_func_call: IS_SET PARENT_LEFT ID PARENT_RIGHT  */
#line 305 "parser/c7.y"
                                                           {
                    (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-3].str_value)), create_var_expr((yyvsp[-1].int_value))); 
                    set_id_type((yyvsp[-1].int_value), ST_ID_VAR);
                    free((yyvsp[-3].str_value));
                }
#line 3203 "parser/parser.c"
    break;

  case 72: /* set_func_call: ADD_SET PARENT_LEFT set_expr PARENT_RIGHT  */
#line 310 "parser/c7.y"
                                                                  {
                    (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-3].str_value)), (yyvsp[-1].expression)); 
                    free((yyvsp[-3].str_value));
                }
#line 3212 "parser/parser.c"
    break;

  case 73: /* set_func_call: REMOVE PARENT_LEFT set_expr PARENT_RIGHT  */
#line 314 "parser/c7.y"
                                                                 {
                    (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-3].str_value)), (yyvsp[-1].expression)); 
                    free((yyvsp[-3].str_value));
                }
#line 3221 "parser/parser.c"
    break;

  case 74: /* set_func_call: EXISTS PARENT_LEFT set_expr PARENT_RIGHT  */
#line 318 "parser/c7.y"
                                                                 {
                    (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-3].str_value)), (yyvsp[-1].expression));
                    free((yyvsp[-3].str_value)); 
                }
#line 3230 "parser/parser.c"
    break;

  case 75: /* simple_expr: arith_expr  */
#line 324 "parser/c7.y"
                            { (yyval.expression) = (yyvsp[0].expression); }
#line 3236 "parser/parser.c"
    break;

  case 76: /* simple_expr: func_cte_expr  */
#line 325 "parser/c7.y"
                               { (yyval.expression) = (yyvsp[0].expression); }
#line 3242 "parser/parser.c"
    break;

  case 77: /* func_cte_expr: EMPTY  */
#line 328 "parser/c7.y"
                           {
                    (yyval.expression) = create_str_expr((yyvsp[0].str_value));
                    free((yyvsp[0].str_value));
                }
#line 3251 "parser/parser.c"
    break;

  case 78: /* func_cte_expr: STRING  */
#line 332 "parser/c7.y"
                            {
                    (yyval.expression) = create_str_expr((yyvsp[0].str_value));
                    free((yyvsp[0].str_value));
                }
#line 3260 "parser/parser.c"
    break;

  case 79: /* func_cte_expr: CHAR  */
#line 336 "parser/c7.y"
                          {
                    (yyval.expression) = create_str_expr((yyvsp[0].str_value));
                    free((yyvsp[0].str_value));
                }
#line 3269 "parser/parser.c"
    break;

  case 80: /* func_cte_expr: func_expr  */
#line 340 "parser/c7.y"
                               { (yyval.expression) = (yyvsp[0].expression); }
#line 3275 "parser/parser.c"
    break;

  case 81: /* func_expr: func_call  */
#line 343 "parser/c7.y"
                               { (yyval.expression) = (yyvsp[0].expression); }
#line 3281 "parser/parser.c"
    break;

  case 82: /* func_expr: set_func_call  */
#line 344 "parser/c7.y"
                                   { (yyval.expression) = (yyvsp[0].expression); }
#line 3287 "parser/parser.c"
    break;

  case 83: /* func_expr: PARENT_LEFT func_cte_expr PARENT_RIGHT  */
#line 345 "parser/c7.y"
                                                            { (yyval.expression) = (yyvsp[-1].expression); }
#line 3293 "parser/parser.c"
    break;

  case 84: /* arith_expr: arith_expr ADD term  */
#line 348 "parser/c7.y"
                                           {
                (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_char_expr((yyvsp[-1].op)), (yyvsp[0].expression));
            }
#line 3301 "parser/parser.c"
    break;

  case 85: /* arith_expr: arith_expr SUB term  */
#line 351 "parser/c7.y"
                                           {
                (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_char_expr((yyvsp[-1].op)), (yyvsp[0].expression));
            }
#line 3309 "parser/parser.c"
    break;

  case 86: /* arith_expr: term  */
#line 354 "parser/c7.y"
                      { (yyval.expression) = (yyvsp[0].expression); }
#line 3315 "parser/parser.c"
    break;

  case 87: /* term: term MULT factor  */
#line 357 "parser/c7.y"
                                    {
            (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_char_expr((yyvsp[-1].op)), (yyvsp[0].expression));
        }
#line 3323 "parser/parser.c"
    break;

  case 88: /* term: term DIV factor  */
#line 360 "parser/c7.y"
                                   {
            (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_char_expr((yyvsp[-1].op)), (yyvsp[0].expression));
        }
#line 3331 "parser/parser.c"
    break;

  case 89: /* term: factor  */
#line 363 "parser/c7.y"
                    { (yyval.expression) = (yyvsp[0].expression); }
#line 3337 "parser/parser.c"
    break;

  case 90: /* term: SUB factor  */
#line 364 "parser/c7.y"
                                        { 
            (yyval.expression) = create_bin_expr(create_char_expr((yyvsp[-1].op)), (yyvsp[0].expression)); 
        }
#line 3345 "parser/parser.c"
    break;

  case 91: /* factor: INTEGER  */
#line 369 "parser/c7.y"
                     { (yyval.expression) = create_int_expr((yyvsp[0].int_value)); }
#line 3351 "parser/parser.c"
    break;

  case 92: /* factor: FLOAT  */
#line 370 "parser/c7.y"
                   { (yyval.expression) = create_float_expr((yyvsp[0].float_value)); }
#line 3357 "parser/parser.c"
    break;

  case 93: /* factor: ID  */
#line 371 "parser/c7.y"
                {
            (yyval.expression) = create_var_expr((yyvsp[0].int_value));
            set_id_type((yyvsp[0].int_value), ST_ID_VAR);
            global_scope = push_to_stack((yyvsp[0].int_value));
            set_scope((yyvsp[0].int_value), global_scope);
        }
#line 3368 "parser/parser.c"
    break;

  case 94: /* factor: PARENT_LEFT arith_expr PARENT_RIGHT  */
#line 377 "parser/c7.y"
                                                 { (yyval.expression) = (yyvsp[-1].expression); }
#line 3374 "parser/parser.c"
    break;


#line 3378 "parser/parser.c"

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

#line 380 "parser/c7.y"


void yyerror(const char *s) {
    printf("\nSyntaxError: %s in line %d, column %d.\n",
           s, parser_line, parser_column);
    parser_error += 1;
}
