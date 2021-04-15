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
  YYSYMBOL_52_3 = 52,                      /* $@3  */
  YYSYMBOL_var_decl_stmt = 53,             /* var_decl_stmt  */
  YYSYMBOL_54_4 = 54,                      /* $@4  */
  YYSYMBOL_param_list = 55,                /* param_list  */
  YYSYMBOL_simple_param_list = 56,         /* simple_param_list  */
  YYSYMBOL_compound_block_stmt = 57,       /* compound_block_stmt  */
  YYSYMBOL_58_5 = 58,                      /* $@5  */
  YYSYMBOL_59_6 = 59,                      /* $@6  */
  YYSYMBOL_block_stmts = 60,               /* block_stmts  */
  YYSYMBOL_block_item = 61,                /* block_item  */
  YYSYMBOL_block_stmt = 62,                /* block_stmt  */
  YYSYMBOL_flow_control_if = 63,           /* flow_control_if  */
  YYSYMBOL_flow_control = 64,              /* flow_control  */
  YYSYMBOL_opt_param = 65,                 /* opt_param  */
  YYSYMBOL_for_expression = 66,            /* for_expression  */
  YYSYMBOL_decl_or_cond_expr = 67,         /* decl_or_cond_expr  */
  YYSYMBOL_or_cond_expr = 68,              /* or_cond_expr  */
  YYSYMBOL_and_cond_expr = 69,             /* and_cond_expr  */
  YYSYMBOL_unary_cond_expr = 70,           /* unary_cond_expr  */
  YYSYMBOL_eq_cond_expr = 71,              /* eq_cond_expr  */
  YYSYMBOL_equal_ops = 72,                 /* equal_ops  */
  YYSYMBOL_rel_cond_expr = 73,             /* rel_cond_expr  */
  YYSYMBOL_rel_cond_stmt = 74,             /* rel_cond_stmt  */
  YYSYMBOL_rel_ops = 75,                   /* rel_ops  */
  YYSYMBOL_set_expr = 76,                  /* set_expr  */
  YYSYMBOL_func_call = 77,                 /* func_call  */
  YYSYMBOL_set_func_call = 78,             /* set_func_call  */
  YYSYMBOL_simple_expr = 79,               /* simple_expr  */
  YYSYMBOL_func_cte_expr = 80,             /* func_cte_expr  */
  YYSYMBOL_func_expr = 81,                 /* func_expr  */
  YYSYMBOL_arith_expr = 82,                /* arith_expr  */
  YYSYMBOL_term = 83,                      /* term  */
  YYSYMBOL_factor = 84                     /* factor  */
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
#define YYLAST   5119

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  45
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  96
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  620

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
       0,    53,    53,    56,    57,    58,    61,    62,    65,    71,
      74,    65,    83,    83,    95,   100,   109,   112,   116,   120,
     123,   123,   131,   131,   141,   144,   147,   148,   151,   152,
     153,   154,   155,   160,   164,   168,   174,   178,   184,   192,
     195,   199,   203,   207,   213,   214,   217,   218,   223,   224,
     230,   236,   240,   243,   247,   250,   253,   256,   259,   262,
     266,   272,   275,   278,   279,   283,   286,   287,   288,   292,
     296,   302,   308,   314,   319,   323,   327,   333,   334,   337,
     341,   345,   349,   352,   353,   354,   357,   360,   363,   366,
     369,   372,   373,   378,   379,   380,   386
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
  "func_stmt", "$@1", "$@2", "$@3", "var_decl_stmt", "$@4", "param_list",
  "simple_param_list", "compound_block_stmt", "$@5", "$@6", "block_stmts",
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

#define YYPACT_NINF (-314)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-97)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -6,    48,    43,   236,   270,   423,   437,    16,  -314,   450,
     454,    54,    84,   323,   459,   388,    52,   216,   319,   113,
     122,   130,   103,   793,   544,   326,  2810,   142,  1161,   150,
     172,   179,   154,   406,   208,   219,   268,   272,   297,   304,
     308,   121,  1809,  2128,  2159,  2190,  2221,    33,  2252,   207,
     234,   559,   276,  2886,  2886,   320,  2886,   152,   349,   359,
     384,  1330,   929,  1559,   394,   403,   405,   407,   422,   370,
    1593,  1740,  2912,   159,   399,  2912,  2912,  2912,  3030,    40,
     406,   613,  2283,    33,  1938,    26,    18,   102,    97,  4258,
    4272,  4299,  1266,  2314,  2345,   269,   436,   438,   458,   917,
      25,  1790,  2100,  2376,    28,    28,   152,   152,   467,   451,
     677,   455,  3238,  1038,    29,    38,   227,   486,   504,   507,
     525,   497,   499,   527,   209,   601,    33,    33,  1103,  1544,
    3081,  3098,  3115,  3132,  3149,  3166,  3081,   540,   542,   551,
     561,  2157,  2188,  2219,  2250,  2281,  2841,  2886,   562,  2938,
    1055,  1257,  2967,   575,   596,   620,   627,   629,   602,  2407,
     648,   282,   343,  4306,  4313,  2438,  2469,  2500,  2531,   644,
    2938,    72,  2841,   508,   155,   557,  2841,   238,  2562,  2841,
    2593,  2624,   793,  2886,   164,   649,   657,   680,   694,  3745,
    3357,  3779,  4340,  4347,  3793,  3827,  2886,   167,   695,   697,
     711,   726,   787,   809,   746,   888,   600,   989,   774,   830,
     833,   834,  1021,  1105,  1285,   693,  2886,   178,   789,   827,
     860,   863,   864,   868,   850,   630,   589,   637,   858,   859,
     877,   894,   111,   684,   775,  2886,   274,  3047,  4840,   884,
     908,   919,   927,  4462,  4495,   158,   204,   550,  4846,  4879,
    4885,  4918,  4924,  4807,  4528,  4561,   108,   108,    25,    25,
      25,  1302,    40,  1315,   275,  3047,   719,   793,   942,   947,
     954,   406,   968,   973,   185,   887,    33,   926,   924,   959,
    2886,   300,   279,   358,   974,   983,   984,   997,   418,  1160,
    1402,  2057,   488,   558,   583,   610,   956,  2080,  2094,  2886,
     306,  3064,   962,   844,   999,  1006,  1007,  1011,  3391,  3273,
    3425,   574,   147,   298,   322,   463,  1780,  4026,  4060,  4067,
    4101,  4019,  3459,  3493,  2984,  2810,  1019,  1022,  1084,    25,
    3841,  3875,   995,  2912,  2912,  2912,    40,   164,   164,  1035,
    1101,  1357,  1001,  2912,  2912,  2912,    40,   167,   167,  2655,
    1040,  1142,    25,   780,   836,  1003,  2912,  2912,  2912,    40,
     134,   134,   178,   178,  1042,  1195,    25,  4594,  4627,  3308,
     414,  1010,  2912,  2912,  2912,  3047,  3183,  3183,   212,   212,
     274,   274,  3889,  3923,  1387,  1489,   647,  1627,   487,  2810,
    1049,  1015,  2886,  2886,  1050,  2912,   159,   406,    34,   990,
    1229,  1064,  1205,    25,  2131,  2194,  1030,  2912,  2912,  2912,
      40,   218,   218,   300,   300,  1068,  1218,    25,  3527,  3561,
    3343,   478,  1073,  1048,  2912,  2912,  2912,    40,  3001,  3064,
    3064,  3200,  3200,   221,   221,   306,   306,   652,  2686,  2717,
    4354,  3937,  1075,  1088,  1092,  1113,   675,  3971,  3985,  1114,
    1667,  1117,  1119,  1121,  1123,   690,  1692,  1870,  1108,   961,
    1129,  1135,  1146,  1157,   702,   966,  1024,  1029,  1199,  4957,
    4660,  1168,  1169,  1171,  1176,   554,  4963,  4996,  4693,  4726,
    4759,  4792,  5002,  2748,  1358,  1177,  1181,  1188,  1401,  1189,
    1038,  1192,   601,   662,  2225,  1190,  1194,  1206,  1210,   709,
    2256,  2287,  2318,  2349,  4108,  3595,  3001,  1211,  1212,  1215,
    1216,   728,  2886,   313,   729,   747,  1094,  1200,  1223,  1230,
     749,  1438,  1429,  1454,   750,   751,   763,   764,   765,   718,
    1468,  1551,   512,   517,  4142,  4149,  3629,  3663,  3697,  3731,
    2779,  4381,  4388,  4395,  4422,  4429,  1228,  1233,  1235,  1238,
    1244,  1225,  1243,  1247,  1253,  1254,  5035,  5041,  5074,  5080,
    1515,  1248,  1276,  1281,   601,  2869,  1589,  1693,   676,   788,
     792,   795,   842,   781,  4183,  4190,  4224,  4231,  4265,  1301,
    1259,    25,  1617,  1729,  1277,  2912,  2912,  2912,    40,   226,
     226,   313,   313,  1742,  1871,  1918,  1987,   601,   797,   601,
     821,  1843,  1313,  1316,  1317,  1319,   829,  1855,  1905,  1917,
    1957,  2022,   601,  2054,   831,   851,   852,   880,   881,  2096
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -314,  -314,  -314,  1323,  -314,  -314,  -314,  -314,    77,  1272,
    -314,  -249,   -21,  -177,  -171,  -313,   -42,   -16,  -119,  -108,
     -95,   -97,  -143,   -43,   -27,   -12,     2,  -237,   -32,   -44,
    -204,   -50,   -25,   336,   149,   474,  1606,  1428,  1093,   725
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,     4,     5,    11,    15,    21,    42,    12,
      17,   122,    43,    26,    27,    44,    45,    46,    47,    48,
     113,   114,   115,   116,   245,   246,   247,   130,   248,   249,
     136,   108,   228,   229,   109,   230,   231,   232,   233,   234
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      24,    49,    82,    90,    85,   325,   276,   311,    64,   174,
     376,   326,   438,   386,     1,    89,   264,   277,   150,    49,
      86,    -8,   192,   -12,   -52,   118,   119,   120,   208,   208,
     260,   208,   125,   100,   197,    87,   151,    57,   183,    90,
     492,   152,   184,     8,   377,   -46,   -19,    83,   250,    88,
     -46,    89,   -19,   173,    84,    64,   -52,   127,   192,    13,
     185,   186,   187,   188,   126,   205,   261,   207,    61,   101,
      63,   124,   126,   189,   190,   191,   483,     6,   431,   -50,
       6,   121,    90,    90,   -50,    88,    90,   446,   250,     7,
     389,    14,   164,    18,    89,    89,   390,   455,   163,   161,
     278,   192,   192,   -56,   275,   192,   317,   312,   -54,   160,
     464,   192,   432,   329,    87,   162,   -10,   184,   316,   360,
     361,    49,   208,   313,   292,   318,    79,   250,    88,    88,
     168,   128,   129,    23,    80,   -56,   -56,   -77,   314,   352,
     -54,   -54,    22,   217,    25,   292,    51,    49,   189,   330,
     191,    49,   315,   -48,    49,    52,   178,   100,   208,   -48,
     180,   499,   -47,   181,   235,   -52,   110,   -47,   236,   329,
     -52,   208,   260,   237,   225,   353,   227,    53,   511,   111,
     238,   437,    66,   352,    54,   429,   239,   240,   241,   242,
      79,   208,    61,   101,    63,    55,   -52,   375,   397,   243,
     112,   244,    96,    97,   189,   330,   191,   205,   261,   207,
     208,   -54,   250,    72,    93,   -55,   -54,   366,   225,   353,
     227,   236,    19,   403,    73,   370,   417,   281,    20,   123,
     300,   581,    90,   398,   -48,   513,    -2,     9,   388,   -48,
     250,    94,   -54,   -54,    89,   -49,    64,   -55,   -55,    86,
     -49,   192,   243,   367,   244,   208,     1,   317,   289,   404,
     291,   308,   418,   310,    87,   265,   521,   582,   523,   316,
      -5,    -5,   377,    74,   208,   137,   318,    75,    88,   366,
     317,   312,   387,   443,   444,   445,   -79,   152,   -51,   421,
      -5,   -79,   316,   452,   453,   454,   169,   313,   171,   318,
      49,   490,    76,   315,   -52,   403,   461,   462,   463,    77,
     -52,   417,   314,    78,   243,   367,   244,    95,   581,   177,
     -51,   127,   472,   473,   474,   -15,   315,   -12,   -54,    -9,
     432,   -15,   -14,   477,   -54,    -9,   -52,   430,   -14,   606,
     289,   404,   291,    -9,   476,   489,   308,   418,   310,   -53,
     250,   250,   250,   521,   582,   523,   -79,   496,   497,   498,
     -54,   -54,    50,   475,    49,   -80,   -80,   208,   208,    65,
     -80,   250,    64,   276,   508,   509,   510,   -77,   104,   105,
      50,   -53,   -53,   193,   277,   317,   317,   317,   535,   209,
     209,   -81,   209,   264,   -16,   565,    82,   316,   316,   534,
     -16,   -83,   532,   524,   318,   318,   318,   318,    16,   251,
     -84,    56,   103,    49,   -78,    57,    65,   314,   533,   193,
     394,   -55,   311,    -6,    -6,   -81,   -55,    58,    59,   -82,
     -81,   315,   315,    36,    37,    38,    39,    -7,    -7,    60,
     117,    82,   138,    -6,   139,   276,    61,    62,    63,   251,
      -4,    -4,   -55,   -55,    -3,    -3,   277,    -7,    49,   -13,
     -13,   279,   193,   193,   140,   250,   193,   278,   598,   -56,
      -4,   275,   193,   146,    -3,   -56,   567,   147,   276,   -13,
     276,   524,    50,   209,   -55,   293,   319,   208,   251,   277,
     -55,   277,   153,   276,   -51,   -83,   148,   128,   129,   -51,
     -83,   -56,   -56,   -18,   277,   157,   293,    67,    50,   -18,
     154,   158,    50,   155,   179,    50,   -55,   -55,   -51,   209,
     324,   317,   312,   -53,   -51,   -51,   375,   210,   210,   -53,
      98,   156,   209,   316,   159,   603,   604,   605,   313,   278,
     318,   486,   487,   275,   -11,   -11,   491,   165,   596,   166,
     -51,   430,   209,   314,    67,   -53,   -53,   -56,   167,   -23,
     -23,   -53,   -56,   -17,   -11,   -84,   -53,   315,   -85,   -17,
     -84,   209,   278,   251,   278,   170,   275,   526,   275,   -23,
     -46,   611,   -73,   613,   128,   129,   -46,   278,   -56,   -56,
     -78,   275,   -53,   -53,   359,   -78,   619,   -95,   -95,   -95,
     -95,   251,   266,   -74,   267,   346,   -95,    65,   -95,   -95,
     -95,   -95,   193,   -21,   -21,   -95,   209,   -82,   268,   269,
     270,   210,   -82,   294,   271,   272,   273,   -75,    36,    37,
      38,    39,    40,   -21,   -76,   209,   -72,   319,   -93,   -93,
     -93,   -93,   274,   175,   294,   -94,   -94,   -94,   -94,   -39,
     -71,   -39,   -39,   482,   332,   573,   -93,   327,   -47,   158,
     319,    50,   333,   -94,   -47,   -39,   -39,   -39,   -39,   -85,
     339,   -39,   -39,   -39,   -85,   -39,   -39,   -39,   -39,   -39,
     176,   545,   -44,   -73,   -44,   334,   -44,   158,   -73,   -39,
     350,   -44,   -88,   -88,   362,   363,   550,   -44,   -44,   335,
     349,   -79,   158,   -80,   -44,   -44,   -44,   -44,   555,   364,
     -88,   251,   251,   251,   158,   572,   342,   -44,   -44,   -44,
     -37,   158,   -37,   -37,   -77,    50,   589,   590,   209,   209,
     -77,   343,   251,    65,   578,   -79,   -37,   -37,   -37,   -37,
     158,   -79,   -37,   -37,   -37,    67,   -37,   -37,   -37,   -37,
     -37,   -37,   -81,   -80,   401,   -81,   -83,   -84,    71,   -80,
     -37,   -81,   -83,   -84,   525,   319,   319,   319,   319,   -50,
     -78,   -82,   195,   415,    50,   -50,   -78,   -82,   214,   214,
     -83,   214,   102,   -91,   -91,   -91,   -91,   -49,   -95,   -95,
     -95,   -95,   344,   -49,   -20,   -74,   -20,   -22,   255,   -75,
     -74,   -91,   -76,   612,   -75,    71,   -95,   -76,   195,   324,
     -20,   -20,   -20,   -20,   345,   -79,   -20,   -20,   -20,    50,
     -20,   -20,   -20,   -20,   -20,   214,   251,   -85,   279,    71,
      71,   144,   145,   -85,   -20,   618,   -84,   -73,   255,   -78,
     -82,   158,   525,   -73,   -92,   -92,   -92,   -92,   209,   -72,
     -64,   195,   195,   -80,   -72,   195,   -64,   -74,   -75,   -64,
     -64,   195,   -92,   -74,   -75,   355,   210,   210,   356,   357,
     -64,    67,   214,   358,   298,   323,   -81,   255,   -64,   -64,
     -64,   -64,   -64,   -64,   -83,   -84,   -76,   -72,   -28,   371,
     -28,   -28,   -76,   -72,   -93,   298,   -93,   -93,   -93,   -93,
     279,   319,   527,   -78,   -28,   -28,   -28,   -28,   214,   331,
     -28,   -28,   -28,   372,   -28,   -28,   -28,   -28,   -28,   -28,
     -82,   214,   341,   141,   373,   258,   259,   -31,   -28,   -31,
     -31,   399,   374,   279,    79,   279,   -95,   -95,   -95,   -95,
     -95,   214,   354,   -31,   -31,   -31,   -31,   391,   279,   -31,
     -31,   -31,   392,   -31,   -31,   -31,   -31,   -31,   -31,   393,
     214,   368,   255,   -77,   411,   412,   400,   -31,   -77,   -96,
     -96,   -96,   -96,   395,   -86,   -86,   362,   363,   396,   406,
     527,   195,   195,   214,   214,   214,   579,   -96,   407,   408,
     255,   -29,   -86,   -29,   -29,   -94,    71,   -94,   -94,   -94,
     -94,   195,   409,   422,   423,   214,   405,   -29,   -29,   -29,
     -29,   424,   425,   -29,   -29,   -29,   426,   -29,   -29,   -29,
     -29,   -29,   -29,   439,   214,   419,   323,   -77,   440,   258,
     259,   -29,   -87,   -87,   362,   363,   442,   -89,   -89,   -89,
     -89,   449,   451,   235,   460,   263,   458,   236,   469,   323,
     -87,   471,   237,   484,   214,   -89,   485,   488,   111,   238,
     299,   172,   447,   448,   300,   239,   240,   241,   242,   301,
     493,   495,   456,   457,   504,   302,   303,   214,   243,   112,
     244,   541,   304,   305,   306,   307,   506,   467,   468,   507,
     441,   214,   258,   259,   542,   308,   309,   310,   543,   584,
     255,   255,   255,   255,   255,   480,   481,   450,   -59,   258,
     259,   -88,   -59,   -88,   -88,   347,   348,   214,   214,   544,
     -85,   255,    71,   546,   -59,   547,    70,   548,   214,   549,
     -59,   -59,   -59,   -59,   -85,   551,   298,   298,   502,   503,
     194,   552,   214,   -59,   -59,   -59,   213,   213,   459,   213,
     258,   259,   553,   531,   323,   323,   323,   323,   323,   323,
     538,   539,   -37,   554,   -37,   -37,   254,   -93,   -93,   -93,
     -93,   -93,   -93,    70,   556,   557,   194,   558,   -37,   -37,
     -37,   -37,   559,   561,   -37,   -37,   -37,   562,   -37,   -37,
     -37,   -37,   -37,   213,   563,   564,   568,   142,   143,   566,
     569,   470,   -37,   258,   259,   585,   254,   -90,   -90,   -90,
     -90,   494,   570,   258,   259,   255,   571,   574,   575,   194,
     194,   576,   577,   194,   505,   -90,   258,   259,   586,   194,
     -30,   531,   -30,   -30,   -73,   587,     0,   214,   583,   -74,
     213,   -75,   297,   322,   -76,   254,   -30,   -30,   -30,   -30,
     -72,   -73,   -30,   -30,   -30,   593,   -30,   -30,   -30,   -30,
     -30,   -30,   -45,   297,   -45,   601,   -45,   258,   259,   -74,
     -30,   -45,   -63,   -75,   256,   257,   213,   -45,   -45,   -76,
     -72,   -63,   -63,   594,   -45,   -45,   -45,   -45,   595,   213,
     323,   -91,   -63,   -91,   -91,   -91,   -91,   -45,   -45,   -45,
     -63,   -63,   -63,   -63,   -63,   -63,   214,   600,   -95,   213,
     -95,   -95,   -95,   -95,   531,   531,   609,   610,   602,   614,
     -44,   -44,   615,   616,   -44,   617,    10,   215,   213,   -44,
     254,     0,     0,     0,     0,   -44,   -44,   -93,   -93,   -93,
     -93,   -93,   -44,   -44,   -44,   -44,     0,     0,     0,   382,
     383,   384,   385,   213,     0,   -44,   -44,   -44,   254,   -23,
       0,   -23,   -23,   -92,    70,   -92,   -92,   -92,   -92,   194,
       0,     0,     0,   213,     0,   -23,   -23,   -23,   -23,     0,
       0,   -23,   -23,   -23,     0,   -23,   -23,   -23,   -23,   -23,
     -23,     0,   213,   -86,   322,   -86,   -86,   347,   348,   -23,
       0,     0,   -36,     0,   -36,   -36,     0,   410,     0,   -95,
     -95,   -95,   -95,   -95,   -95,     0,     0,   322,   -36,   -36,
     -36,   -36,   213,     0,   -36,   -36,   -36,     0,   -36,   -36,
     -36,   -36,   -36,   -36,   588,   -95,     0,   -95,   -95,   -95,
     -95,   -95,   -36,     0,   -93,   213,   -93,   -93,   -93,   -93,
     -93,     0,     0,   465,   466,     0,     0,     0,     0,   213,
     -94,    69,   -94,   -94,   -94,   -94,   -94,     0,   254,   254,
     254,   478,   479,     0,   -88,    92,   -88,   -88,   591,   592,
     -88,   212,   212,     0,    99,   213,   213,     0,     0,   254,
      70,     0,     0,     0,     0,   -87,   213,   -87,   -87,   347,
     348,   253,     0,     0,   500,   501,     0,     0,    69,     0,
     213,    92,     0,     0,     0,     0,   -21,     0,   -21,   -21,
       0,   530,   322,   322,   322,   322,   536,   537,    99,     0,
       0,     0,   -21,   -21,   -21,   -21,     0,     0,   -21,   -21,
     -21,   253,   -21,   -21,   -21,   -21,   -21,   -21,     0,   -60,
       0,     0,     0,   -60,    92,    92,   -21,   -91,    92,   -91,
     -91,   -91,   -91,   -91,    92,   -60,   -94,   -94,   -94,   -94,
     -94,   -60,   -60,   -60,   -60,   212,     0,   296,   321,     0,
     253,     0,     0,   254,   -60,   -60,   -60,     0,     0,     0,
     -35,     0,   -35,   -35,     0,     0,     0,     0,   296,   530,
     -88,   -88,   -88,   106,   107,   213,   -35,   -35,   -35,   -35,
       0,   328,   -35,   -35,   -35,     0,   -35,   -35,   -35,   -35,
     -35,   -35,     0,   -95,   340,   -95,   -95,   -95,   -95,   -95,
     -35,     0,   -45,   -45,     0,     0,   -45,     0,     0,    68,
       0,   -45,     0,     0,   351,     0,     0,   -45,   -45,     0,
       0,     0,     0,    91,   -45,   -45,   -45,   -45,   322,   211,
     211,     0,   211,   365,     0,   253,     0,   -45,   -45,   -45,
       0,     0,     0,   -96,   213,   -96,   -96,   -96,   -96,   252,
       0,     0,   607,   608,     0,     0,    68,     0,   340,    91,
       0,     0,     0,   253,   -39,     0,   -39,   -39,   -89,    69,
     -89,   -89,   -89,   -89,    92,     0,     0,     0,   402,     0,
     -39,   -39,   -39,   -39,     0,     0,   -39,   -39,   -39,   252,
     -39,   -39,   -39,   -39,   -39,   599,     0,   416,     0,   321,
       0,     0,    91,    91,   -39,   -92,    91,   -92,   -92,   -92,
     -92,   -92,    91,   -32,     0,   -32,   -32,   -91,   -91,   -91,
     -91,   -91,   321,   211,     0,   295,   320,   328,   252,   -32,
     -32,   -32,   -32,     0,     0,   -32,   -32,   -32,     0,   -32,
     -32,   -32,   -32,   -32,   -32,     0,   295,     0,     0,     0,
     351,     0,     0,   -32,     0,     0,   -58,     0,     0,   211,
       0,     0,   -58,     0,   365,   131,   132,   -95,   -95,   -95,
     -95,   -95,   211,   253,   253,   253,   133,     0,     0,     0,
     -26,     0,   -26,   -26,   -58,   -58,   134,   135,   -58,   -58,
     212,   212,   211,     0,   253,    69,   -26,   -26,   -26,   -26,
       0,   402,   -26,   -26,   -26,     0,   -26,   -26,   -26,   -26,
     -26,   211,     0,   252,     0,   416,     0,     0,     0,   -96,
     -26,   -96,   -96,   -96,   -96,   -96,   529,   321,   321,   321,
     321,   -86,     0,   -86,   -86,   591,   592,   -86,     0,     0,
       0,   252,   -33,     0,   -33,   -33,   -90,    68,   -90,   -90,
     -90,   -90,    91,     0,     0,     0,   211,     0,   -33,   -33,
     -33,   -33,     0,     0,   -33,   -33,   -33,     0,   -33,   -33,
     -33,   -33,   -33,   -33,     0,   211,     0,   320,     0,     0,
       0,   -87,   -33,   -87,   -87,   591,   592,   -87,   253,   -34,
       0,   -34,   -34,   -89,     0,   -89,   -89,   -89,   -89,   -89,
     320,     0,     0,     0,   529,   -34,   -34,   -34,   -34,     0,
     580,   -34,   -34,   -34,   -64,   -34,   -34,   -34,   -34,   -34,
     -34,     0,     0,   -64,   -64,     0,     0,     0,     0,   -34,
       0,     0,     0,   -90,   -64,   -90,   -90,   -90,   -90,   -90,
       0,     0,   -64,   -64,   -64,   -64,   -64,   -64,     0,     0,
       0,   252,   252,   252,     0,     0,     0,     0,   -41,     0,
     -41,   -41,     0,   321,     0,     0,     0,     0,   211,   211,
       0,     0,   252,    68,   -41,   -41,   -41,   -41,     0,   580,
     -41,   -41,   -41,     0,   -41,   -41,   -41,   -41,   -41,   -41,
       0,     0,     0,   -42,     0,   -42,   -42,     0,   -41,     0,
       0,     0,     0,     0,   528,   320,   320,   320,   320,   -42,
     -42,   -42,   -42,     0,     0,   -42,   -42,   -42,     0,   -42,
     -42,   -42,   -42,   -42,   -42,   -40,     0,   -40,   -40,     0,
       0,     0,     0,   -42,   -94,   -94,   -94,   -94,   -94,   -94,
       0,   -40,   -40,   -40,   -40,     0,     0,   -40,   -40,   -40,
       0,   -40,   -40,   -40,   -40,   -40,   -40,   -88,   -88,   -88,
     413,   414,   -88,     0,     0,   -40,   252,   -43,     0,   -43,
     -43,   -91,   -91,   -91,   -91,   -91,   -91,   -92,   -92,   -92,
     -92,   -92,   528,   -43,   -43,   -43,   -43,     0,   211,   -43,
     -43,   -43,     0,   -43,   -43,   -43,   -43,   -43,   -43,   -28,
       0,   -28,   -28,     0,     0,     0,     0,   -43,   -95,   -95,
     -95,   -95,   -95,   -95,     0,   -28,   -28,   -28,   -28,     0,
       0,   -28,   -28,   -28,     0,   -28,   -28,   -28,   -28,   -28,
      28,     0,   182,    81,   -96,   -96,   -96,   -96,   -96,   -28,
       0,   320,     0,     0,     0,     0,    29,    30,    31,    32,
       0,     0,    33,    34,    35,     0,    36,    37,    38,    39,
      40,   -25,     0,   -25,   -25,   -86,   -86,   -86,   106,   107,
      41,   -92,   -92,   -92,   -92,   -92,   -92,   -25,   -25,   -25,
     -25,     0,     0,   -25,   -25,   -25,     0,   -25,   -25,   -25,
     -25,   -25,   -27,     0,   -27,   -27,   -87,   -87,   -87,   106,
     107,   -25,   -96,   -96,   -96,   -96,   -96,   -96,   -27,   -27,
     -27,   -27,     0,     0,   -27,   -27,   -27,     0,   -27,   -27,
     -27,   -27,   -27,   -31,     0,   -31,   -31,   -89,   -89,   -89,
     -89,   -89,   -27,   -86,   -86,   -86,   413,   414,   -86,   -31,
     -31,   -31,   -31,     0,     0,   -31,   -31,   -31,     0,   -31,
     -31,   -31,   -31,   -31,   -24,     0,   -24,   -24,   -90,   -90,
     -90,   -90,   -90,   -31,   -87,   -87,   -87,   413,   414,   -87,
     -24,   -24,   -24,   -24,     0,     0,   -24,   -24,   -24,     0,
     -24,   -24,   -24,   -24,   -24,   -29,     0,   -29,   -29,     0,
       0,     0,     0,     0,   -24,   -89,   -89,   -89,   -89,   -89,
     -89,   -29,   -29,   -29,   -29,     0,     0,   -29,   -29,   -29,
       0,   -29,   -29,   -29,   -29,   -29,   -30,     0,   -30,   -30,
       0,     0,     0,     0,     0,   -29,   -90,   -90,   -90,   -90,
     -90,   -90,   -30,   -30,   -30,   -30,     0,     0,   -30,   -30,
     -30,     0,   -30,   -30,   -30,   -30,   -30,   -36,     0,   -36,
     -36,     0,     0,     0,     0,     0,   -30,     0,     0,     0,
       0,     0,     0,   -36,   -36,   -36,   -36,     0,     0,   -36,
     -36,   -36,     0,   -36,   -36,   -36,   -36,   -36,   -35,     0,
     -35,   -35,     0,     0,     0,     0,     0,   -36,     0,     0,
       0,     0,     0,     0,   -35,   -35,   -35,   -35,     0,     0,
     -35,   -35,   -35,     0,   -35,   -35,   -35,   -35,   -35,   -32,
       0,   -32,   -32,     0,     0,     0,     0,     0,   -35,     0,
       0,     0,     0,     0,     0,   -32,   -32,   -32,   -32,     0,
       0,   -32,   -32,   -32,     0,   -32,   -32,   -32,   -32,   -32,
     -33,     0,   -33,   -33,     0,     0,     0,     0,     0,   -32,
       0,     0,     0,     0,     0,     0,   -33,   -33,   -33,   -33,
       0,     0,   -33,   -33,   -33,     0,   -33,   -33,   -33,   -33,
     -33,   -34,     0,   -34,   -34,     0,     0,     0,     0,     0,
     -33,     0,     0,     0,     0,     0,     0,   -34,   -34,   -34,
     -34,     0,     0,   -34,   -34,   -34,     0,   -34,   -34,   -34,
     -34,   -34,   -41,     0,   -41,   -41,     0,     0,     0,     0,
       0,   -34,     0,     0,     0,     0,     0,     0,   -41,   -41,
     -41,   -41,     0,     0,   -41,   -41,   -41,     0,   -41,   -41,
     -41,   -41,   -41,   -42,     0,   -42,   -42,     0,     0,     0,
       0,     0,   -41,     0,     0,     0,     0,     0,     0,   -42,
     -42,   -42,   -42,     0,     0,   -42,   -42,   -42,     0,   -42,
     -42,   -42,   -42,   -42,   -40,     0,   -40,   -40,     0,     0,
       0,     0,     0,   -42,     0,     0,     0,     0,     0,     0,
     -40,   -40,   -40,   -40,     0,     0,   -40,   -40,   -40,     0,
     -40,   -40,   -40,   -40,   -40,   -43,     0,   -43,   -43,     0,
       0,     0,     0,     0,   -40,     0,     0,     0,     0,     0,
       0,   -43,   -43,   -43,   -43,     0,     0,   -43,   -43,   -43,
       0,   -43,   -43,   -43,   -43,   -43,   -13,     0,   -13,   -13,
       0,     0,     0,     0,     0,   -43,     0,     0,     0,     0,
       0,     0,   -13,   -13,   -13,   -13,     0,     0,   -13,   -13,
     -13,     0,   -13,   -13,   -13,   -13,   -13,    28,     0,   182,
     540,     0,     0,     0,     0,     0,   -13,     0,     0,     0,
       0,     0,     0,    29,    30,    31,    32,     0,     0,    33,
      34,    35,     0,    36,    37,    38,    39,    40,   -23,     0,
     -23,   -23,     0,     0,     0,     0,     0,    41,     0,     0,
       0,     0,     0,     0,   -23,   -23,   -23,   -23,     0,     0,
     -23,   -23,   -23,     0,   -23,   -23,   -23,   -23,   -23,    28,
       0,   182,   560,     0,     0,     0,     0,     0,   -23,     0,
       0,     0,     0,     0,     0,    29,    30,    31,    32,     0,
       0,    33,    34,    35,     0,    36,    37,    38,    39,    40,
     -21,     0,   -21,   -21,     0,     0,     0,     0,     0,    41,
       0,     0,     0,     0,     0,     0,   -21,   -21,   -21,   -21,
       0,     0,   -21,   -21,   -21,     0,   -21,   -21,   -21,   -21,
     -21,    28,     0,   182,     0,     0,     0,     0,     0,     0,
     -21,     0,     0,     0,     0,     0,     0,    29,    30,    31,
      32,     0,     0,    33,    34,    35,     0,    36,    37,    38,
      39,    40,    28,     0,   182,     0,     0,     0,     0,     0,
       0,    41,     0,     0,     0,     0,     0,     0,    29,    30,
      31,     0,     0,     0,    33,    34,    35,     0,    36,    37,
      38,    39,    40,     0,   299,   597,     0,     0,   300,     0,
       0,     0,    41,   301,     0,     0,     0,     0,     0,   302,
     303,   196,     0,     0,     0,   197,   304,   305,   306,   307,
       0,     0,     0,     0,     0,     0,     0,   198,   199,   308,
     309,   310,     0,   200,   201,   202,   203,   216,     0,   204,
       0,   217,     0,     0,     0,     0,   205,   206,   207,     0,
       0,     0,     0,   218,   219,     0,     0,     0,     0,   220,
     221,   222,   223,   280,     0,   224,     0,   281,     0,     0,
       0,     0,   225,   226,   227,     0,     0,     0,     0,   282,
     283,     0,     0,     0,     0,   284,   285,   286,   287,     0,
       0,   288,   235,     0,     0,     0,   236,     0,   289,   290,
     291,   237,     0,     0,     0,     0,     0,   111,   238,   299,
       0,     0,     0,   300,   239,   240,   241,   242,   301,     0,
       0,     0,     0,     0,   302,   303,   512,   243,   112,   244,
     513,   304,   305,   306,   307,     0,     0,     0,     0,     0,
       0,     0,   514,   515,   308,   309,   310,     0,   516,   517,
     518,   519,     0,     0,   520,   -38,     0,     0,     0,   -38,
       0,   521,   522,   523,   -38,     0,     0,     0,     0,     0,
       0,   -38,   235,     0,     0,     0,   236,   -38,   -38,   -38,
     -38,   237,     0,     0,     0,     0,     0,     0,   238,   299,
     -38,   -38,   -38,   300,   239,   240,   241,   242,   301,     0,
       0,     0,     0,     0,     0,   303,   183,   243,   369,   244,
     184,   304,   305,   306,   307,     0,     0,     0,     0,     0,
       0,     0,    84,   -66,   308,   420,   310,   -66,   185,   186,
     187,   188,     0,     0,     0,     0,     0,     0,     0,   -66,
     -67,   189,   190,   191,   -67,   -66,   -66,   -66,   -66,     0,
       0,     0,     0,     0,     0,     0,   -67,   -70,   -66,   -66,
     -66,   -70,   -67,   -67,   -67,   -67,     0,     0,     0,     0,
       0,     0,     0,   -70,   -68,   -67,   -67,   -67,   -68,   -70,
     -70,   -70,   -70,     0,     0,     0,     0,     0,     0,     0,
     -68,   -69,   -70,   -70,   -70,   -69,   -68,   -68,   -68,   -68,
       0,     0,     0,     0,     0,     0,     0,   -69,   235,   -68,
     -68,   -68,   236,   -69,   -69,   -69,   -69,     0,     0,     0,
       0,     0,     0,     0,   238,   299,   -69,   -69,   -69,   300,
     239,   240,   241,   242,     0,     0,     0,     0,     0,     0,
       0,   303,     0,   243,   369,   244,     0,   304,   305,   306,
     307,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     308,   420,   310,   262,     0,   -95,   -95,   -95,   -95,   -95,
     -95,   149,     0,   -95,   -95,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -95,     0,     0,     0,     0,     0,
       0,     0,   -95,   -95,   -95,   -95,   -95,   -95,   427,   -95,
       0,   -95,   -95,   -95,   -95,   -95,   428,     0,   -95,   -95,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -95,
       0,     0,     0,     0,     0,     0,     0,   -95,   -95,   -95,
     -95,   -95,   -95,   262,     0,   -95,   -95,   -95,   -95,   -95,
     -95,     0,     0,   -95,   -95,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -95,     0,     0,     0,     0,     0,
       0,     0,   -95,   -95,   -95,   -95,   -95,   -95,   427,   -95,
       0,   -95,   -95,   -95,   -95,   -95,     0,     0,   -95,   -95,
       0,     0,   336,   -95,     0,   -95,   -95,   -95,   -95,   -95,
       0,     0,   -95,   -95,     0,     0,     0,   -95,   -95,   -95,
     -95,   -95,   -95,   -95,     0,     0,     0,     0,     0,     0,
       0,   -95,   -95,   -95,   -95,   -95,   -95,   -93,     0,   -93,
     -93,   -93,   -93,   -93,     0,     0,   -93,   -93,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -93,     0,     0,
       0,     0,     0,     0,     0,   -93,   -93,   -93,   -93,   -93,
     -93,   -94,     0,   -94,   -94,   -94,   -94,   -94,     0,     0,
     -94,   -94,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -94,     0,     0,     0,     0,     0,     0,     0,   -94,
     -94,   -94,   -94,   -94,   -94,   -88,     0,   -88,   -88,   435,
     436,   -88,     0,     0,   -88,   -88,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -88,     0,     0,     0,     0,
       0,     0,     0,   -88,   -88,   -88,   -88,   -88,   -88,   -91,
       0,   -91,   -91,   -91,   -91,   -91,     0,     0,   -91,   -91,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -91,
       0,     0,     0,     0,     0,     0,     0,   -91,   -91,   -91,
     -91,   -91,   -91,   -95,     0,   -95,   -95,   -95,   -95,   -95,
       0,     0,   -95,   -95,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -95,     0,     0,     0,     0,     0,     0,
       0,   -95,   -95,   -95,   -95,   -95,   -95,   -92,     0,   -92,
     -92,   -92,   -92,   -92,     0,     0,   -92,   -92,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -92,     0,     0,
       0,     0,     0,     0,     0,   -92,   -92,   -92,   -92,   -92,
     -92,   -96,     0,   -96,   -96,   -96,   -96,   -96,     0,     0,
     -96,   -96,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -96,     0,     0,     0,     0,     0,     0,     0,   -96,
     -96,   -96,   -96,   -96,   -96,   -86,     0,   -86,   -86,   435,
     436,   -86,     0,     0,   -86,   -86,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -86,     0,     0,     0,     0,
       0,     0,     0,   -86,   -86,   -86,   -86,   -86,   -86,   -87,
       0,   -87,   -87,   435,   436,   -87,     0,     0,   -87,   -87,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -87,
       0,     0,     0,     0,     0,     0,     0,   -87,   -87,   -87,
     -87,   -87,   -87,   -89,     0,   -89,   -89,   -89,   -89,   -89,
       0,     0,   -89,   -89,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -89,     0,     0,     0,     0,     0,     0,
       0,   -89,   -89,   -89,   -89,   -89,   -89,   -90,     0,   -90,
     -90,   -90,   -90,   -90,     0,     0,   -90,   -90,     0,     0,
       0,   -93,     0,   -93,   -93,   -93,   -93,   -90,     0,     0,
     -93,   -93,     0,     0,     0,   -90,   -90,   -90,   -90,   -90,
     -90,   -93,     0,     0,     0,     0,     0,     0,     0,   -93,
     -93,   -93,   -93,   -93,   -93,   -94,     0,   -94,   -94,   -94,
     -94,     0,     0,     0,   -94,   -94,     0,     0,     0,   -88,
       0,   -88,   -88,   337,   338,   -94,     0,     0,   -88,   -88,
       0,     0,     0,   -94,   -94,   -94,   -94,   -94,   -94,   -88,
       0,     0,     0,     0,     0,     0,     0,   -88,   -88,   -88,
     -88,   -88,   -88,   -91,     0,   -91,   -91,   -91,   -91,     0,
       0,     0,   -91,   -91,     0,     0,     0,   -95,     0,   -95,
     -95,   -95,   -95,   -91,     0,     0,   -95,   -95,     0,     0,
       0,   -91,   -91,   -91,   -91,   -91,   -91,   -95,     0,     0,
       0,     0,     0,     0,     0,   -95,   -95,   -95,   -95,   -95,
     -95,   -92,     0,   -92,   -92,   -92,   -92,     0,     0,     0,
     -92,   -92,     0,     0,     0,   -86,     0,   -86,   -86,   337,
     338,   -92,     0,     0,   -86,   -86,     0,     0,     0,   -92,
     -92,   -92,   -92,   -92,   -92,   -86,     0,     0,     0,     0,
       0,     0,     0,   -86,   -86,   -86,   -86,   -86,   -86,   -87,
       0,   -87,   -87,   337,   338,     0,     0,     0,   -87,   -87,
       0,     0,     0,   -96,     0,   -96,   -96,   -96,   -96,   -87,
       0,     0,   -96,   -96,     0,     0,     0,   -87,   -87,   -87,
     -87,   -87,   -87,   -96,     0,     0,     0,     0,     0,     0,
       0,   -96,   -96,   -96,   -96,   -96,   -96,   -89,     0,   -89,
     -89,   -89,   -89,     0,     0,     0,   -89,   -89,     0,     0,
       0,   -90,     0,   -90,   -90,   -90,   -90,   -89,     0,     0,
     -90,   -90,     0,     0,     0,   -89,   -89,   -89,   -89,   -89,
     -89,   -90,     0,     0,     0,     0,     0,     0,     0,   -90,
     -90,   -90,   -90,   -90,   -90,   -63,     0,   433,   434,     0,
       0,   -63,   -62,     0,   -63,   -63,     0,     0,   -62,     0,
       0,   -62,   -62,     0,     0,   -63,     0,     0,     0,     0,
       0,     0,   -62,   -63,   -63,   -63,   -63,   -63,   -63,     0,
     -62,   -62,   -62,   -62,   -62,   -62,   -83,     0,     0,     0,
       0,     0,   -83,   -84,     0,   -83,   -83,     0,     0,   -84,
       0,     0,   -84,   -84,     0,     0,   -83,     0,     0,     0,
       0,     0,     0,   -84,   -83,   -83,   -83,   -83,   -83,   -83,
       0,   -84,   -84,   -84,   -84,   -84,   -84,   -65,     0,     0,
       0,     0,     0,   -65,   -85,     0,   -65,   -65,     0,     0,
     -85,     0,     0,   -85,   -85,     0,     0,   -65,     0,     0,
       0,     0,     0,     0,   -85,   -65,   -65,   -65,   -65,   -65,
     -65,     0,   -85,   -85,   -85,   -85,   -85,   -85,   -57,     0,
       0,     0,     0,     0,   -57,   -61,     0,   131,   132,     0,
       0,   -61,     0,     0,   -61,   -61,     0,     0,   133,     0,
       0,     0,     0,     0,     0,   -61,   -57,   -57,   134,   135,
     -57,   -57,     0,   -61,   -61,   -61,   -61,   -61,   -61,   -73,
       0,     0,     0,     0,     0,   -73,   -74,     0,   -73,   -73,
       0,     0,   -74,     0,     0,   -74,   -74,     0,     0,   -73,
       0,     0,     0,     0,     0,     0,   -74,   -73,   -73,   -73,
     -73,   -73,   -73,     0,   -74,   -74,   -74,   -74,   -74,   -74,
     -75,     0,     0,     0,     0,     0,   -75,   -76,     0,   -75,
     -75,     0,     0,   -76,     0,     0,   -76,   -76,     0,     0,
     -75,     0,     0,     0,     0,     0,     0,   -76,   -75,   -75,
     -75,   -75,   -75,   -75,   -58,   -76,   -76,   -76,   -76,   -76,
     -76,   -72,     0,   131,   132,     0,     0,   -72,   -62,     0,
     -72,   -72,     0,     0,   133,     0,     0,   -62,   -62,     0,
       0,   -72,   -58,   -58,   134,   135,   -58,   -58,   -62,   -72,
     -72,   -72,   -72,   -72,   -72,   -65,   -62,   -62,   -62,   -62,
     -62,   -62,   -57,     0,   -65,   -65,     0,     0,     0,   -61,
       0,   131,   132,     0,     0,   -65,     0,     0,   -61,   -61,
       0,     0,   133,   -65,   -65,   -65,   -65,   -65,   -65,   -61,
     -57,   -57,   134,   135,   -57,   -57,   -83,   -61,   -61,   -61,
     -61,   -61,   -61,   -84,     0,   -83,   -83,     0,     0,     0,
     -85,     0,   -84,   -84,     0,     0,   -83,     0,     0,   -85,
     -85,     0,     0,   -84,   -83,   -83,   -83,   -83,   -83,   -83,
     -85,   -84,   -84,   -84,   -84,   -84,   -84,   -73,   -85,   -85,
     -85,   -85,   -85,   -85,   -74,     0,   -73,   -73,     0,     0,
       0,   -75,     0,   -74,   -74,     0,     0,   -73,     0,     0,
     -75,   -75,     0,     0,   -74,   -73,   -73,   -73,   -73,   -73,
     -73,   -75,   -74,   -74,   -74,   -74,   -74,   -74,   -76,   -75,
     -75,   -75,   -75,   -75,   -75,   -72,     0,   -76,   -76,     0,
       0,     0,     0,     0,   -72,   -72,     0,     0,   -76,     0,
       0,     0,     0,     0,     0,   -72,   -76,   -76,   -76,   -76,
     -76,   -76,     0,   -72,   -72,   -72,   -72,   -72,   -72,   -93,
     -93,   -93,   -93,   -93,   -93,     0,     0,   -93,   -93,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -93,     0,
       0,     0,     0,     0,     0,     0,   -93,   -93,   -93,   -93,
     -93,   -93,   -94,   -94,   -94,   -94,   -94,   -94,     0,     0,
     -94,   -94,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -94,     0,     0,     0,     0,     0,     0,     0,   -94,
     -94,   -94,   -94,   -94,   -94,   -88,   -88,   -88,   380,   381,
     -88,     0,     0,   -88,   -88,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -88,     0,     0,     0,     0,     0,
       0,     0,   -88,   -88,   -88,   -88,   -88,   -88,   -91,   -91,
     -91,   -91,   -91,   -91,     0,     0,   -91,   -91,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -91,     0,     0,
       0,     0,     0,     0,     0,   -91,   -91,   -91,   -91,   -91,
     -91,   -95,   -95,   -95,   -95,   -95,   -95,     0,     0,   -95,
     -95,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -95,     0,     0,     0,     0,     0,     0,     0,   -95,   -95,
     -95,   -95,   -95,   -95,   -92,   -92,   -92,   -92,   -92,   -92,
       0,     0,   -92,   -92,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -92,     0,     0,     0,     0,     0,     0,
       0,   -92,   -92,   -92,   -92,   -92,   -92,   -96,   -96,   -96,
     -96,   -96,   -96,     0,     0,   -96,   -96,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -96,     0,     0,     0,
       0,     0,     0,     0,   -96,   -96,   -96,   -96,   -96,   -96,
     -86,   -86,   -86,   380,   381,   -86,     0,     0,   -86,   -86,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -86,
       0,     0,     0,     0,     0,     0,     0,   -86,   -86,   -86,
     -86,   -86,   -86,   -87,   -87,   -87,   380,   381,   -87,     0,
       0,   -87,   -87,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -87,     0,     0,     0,     0,     0,     0,     0,
     -87,   -87,   -87,   -87,   -87,   -87,   -89,   -89,   -89,   -89,
     -89,   -89,     0,     0,   -89,   -89,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -89,     0,     0,     0,     0,
       0,     0,     0,   -89,   -89,   -89,   -89,   -89,   -89,   -90,
     -90,   -90,   -90,   -90,   -90,     0,     0,   -90,   -90,     0,
       0,     0,     0,     0,   -63,   378,   379,     0,   -90,   -63,
       0,     0,   -63,   -63,     0,     0,   -90,   -90,   -90,   -90,
     -90,   -90,     0,   -63,     0,     0,     0,     0,     0,     0,
       0,   -63,   -63,   -63,   -63,   -63,   -63,   -64,     0,     0,
       0,     0,   -64,   -58,     0,   -64,   -64,     0,   -58,     0,
       0,   131,   132,     0,     0,     0,   -64,     0,     0,     0,
       0,     0,   133,     0,   -64,   -64,   -64,   -64,   -64,   -64,
     -58,   -58,   134,   135,   -58,   -58,   -62,     0,     0,     0,
       0,   -62,   -83,     0,   -62,   -62,     0,   -83,     0,     0,
     -83,   -83,     0,     0,     0,   -62,     0,     0,     0,     0,
       0,   -83,     0,   -62,   -62,   -62,   -62,   -62,   -62,   -83,
     -83,   -83,   -83,   -83,   -83,   -84,     0,     0,     0,     0,
     -84,   -65,     0,   -84,   -84,     0,   -65,     0,     0,   -65,
     -65,     0,     0,     0,   -84,     0,     0,     0,     0,     0,
     -65,     0,   -84,   -84,   -84,   -84,   -84,   -84,   -65,   -65,
     -65,   -65,   -65,   -65,   -85,     0,     0,     0,     0,   -85,
     -57,     0,   -85,   -85,     0,   -57,     0,     0,   131,   132,
       0,     0,     0,   -85,     0,     0,     0,     0,     0,   133,
       0,   -85,   -85,   -85,   -85,   -85,   -85,   -57,   -57,   134,
     135,   -57,   -57,   -61,     0,     0,     0,     0,   -61,   -72,
       0,   -61,   -61,     0,   -72,     0,     0,   -72,   -72,     0,
       0,     0,   -61,     0,     0,     0,     0,     0,   -72,     0,
     -61,   -61,   -61,   -61,   -61,   -61,   -72,   -72,   -72,   -72,
     -72,   -72,   -73,     0,     0,     0,     0,   -73,   -74,     0,
     -73,   -73,     0,   -74,     0,     0,   -74,   -74,     0,     0,
       0,   -73,     0,     0,     0,     0,     0,   -74,     0,   -73,
     -73,   -73,   -73,   -73,   -73,   -74,   -74,   -74,   -74,   -74,
     -74,   -75,     0,     0,     0,     0,   -75,   -76,     0,   -75,
     -75,     0,   -76,     0,     0,   -76,   -76,     0,     0,     0,
     -75,     0,     0,     0,     0,     0,   -76,     0,   -75,   -75,
     -75,   -75,   -75,   -75,   -76,   -76,   -76,   -76,   -76,   -76
};

static const yytype_int16 yycheck[] =
{
      21,    26,    44,    47,    47,   182,   125,   150,    33,   152,
     247,   182,   325,   262,    20,    47,   113,   125,   113,    44,
      47,     5,    47,     7,     6,    75,    76,    77,    53,    54,
       5,    56,     6,     5,     9,    47,     7,     9,     5,    83,
       6,    12,     9,     0,   248,     7,     6,    14,    73,    47,
      12,    83,    12,   150,    21,    80,    38,    39,    83,     5,
      27,    28,    29,    30,    38,    40,    41,    42,    40,    41,
      42,    83,    38,    40,    41,    42,   389,     0,   315,     7,
       3,    41,   126,   127,    12,    83,   130,   336,   113,    41,
     267,     7,   136,    41,   126,   127,   267,   346,   130,   126,
     125,   126,   127,     6,   125,   130,   150,   150,     6,   125,
     359,   136,   316,     5,   126,   127,     3,     9,   150,     8,
       9,   146,   147,   150,   149,   150,     5,   152,   126,   127,
     146,    34,    35,     3,    13,    38,    39,    26,   150,     5,
      38,    39,    20,     9,    41,   170,     4,   172,    40,    41,
      42,   176,   150,     6,   179,     5,   172,     5,   183,    12,
     176,   410,     7,   179,     5,     7,     7,    12,     9,     5,
      12,   196,     5,    14,    40,    41,    42,     5,   427,    20,
      21,   324,    33,     5,     5,    38,    27,    28,    29,    30,
       5,   216,    40,    41,    42,    41,    38,    39,    13,    40,
      41,    42,    53,    54,    40,    41,    42,    40,    41,    42,
     235,     7,   237,     5,     7,     6,    12,     5,    40,    41,
      42,     9,     6,     5,     5,   237,     5,     9,    12,    80,
       9,     5,   276,   276,     7,     9,     0,     1,   265,    12,
     265,     7,    38,    39,   276,     7,   271,    38,    39,   276,
      12,   276,    40,    41,    42,   280,    20,   301,    40,    41,
      42,    40,    41,    42,   276,    38,    40,    41,    42,   301,
       0,     1,   476,     5,   299,     6,   301,     5,   276,     5,
     324,   324,     7,   333,   334,   335,     7,    12,     6,   301,
      20,    12,   324,   343,   344,   345,   147,   324,   149,   324,
     325,   396,     5,   301,     6,     5,   356,   357,   358,     5,
      12,     5,   324,     5,    40,    41,    42,    41,     5,   170,
      38,    39,   372,   373,   374,     6,   324,     7,     6,     6,
     534,    12,     6,   377,    12,    12,    38,    39,    12,   588,
      40,    41,    42,    20,   376,   395,    40,    41,    42,     6,
     375,   376,   377,    40,    41,    42,     7,   407,   408,   409,
      38,    39,    26,   375,   389,     7,     7,   392,   393,    33,
      12,   396,   397,   492,   424,   425,   426,     7,     8,     9,
      44,    38,    39,    47,   492,   429,   430,   431,   432,    53,
      54,     7,    56,   490,     6,   490,   438,   429,   430,   431,
      12,     7,   429,   428,   429,   430,   431,   432,    20,    73,
       7,     5,     7,   438,     7,     9,    80,   429,   430,    83,
     271,     7,   565,     0,     1,     7,    12,    21,    22,     7,
      12,   429,   430,    27,    28,    29,    30,     0,     1,    33,
      41,   483,     6,    20,     6,   564,    40,    41,    42,   113,
       0,     1,    38,    39,     0,     1,   564,    20,   483,     0,
       1,   125,   126,   127,     6,   490,   130,   492,   565,     6,
      20,   492,   136,     6,    20,    12,   492,    26,   597,    20,
     599,   506,   146,   147,     6,   149,   150,   512,   152,   597,
      12,   599,     6,   612,     7,     7,    41,    34,    35,    12,
      12,    38,    39,     6,   612,     6,   170,    33,   172,    12,
       6,    12,   176,     6,     6,   179,    38,    39,     6,   183,
      12,   565,   565,     6,    12,    38,    39,    53,    54,    12,
      56,     6,   196,   565,     7,   585,   586,   587,   565,   564,
     565,   392,   393,   564,     0,     1,   397,     7,   564,     7,
      38,    39,   216,   565,    80,    38,    39,     7,     7,     0,
       1,     7,    12,     6,    20,     7,    12,   565,     7,    12,
      12,   235,   597,   237,   599,    13,   597,   428,   599,    20,
       6,   597,     7,   599,    34,    35,    12,   612,    38,    39,
       7,   612,    38,    39,     5,    12,   612,     8,     9,    10,
      11,   265,     1,     7,     3,     5,     6,   271,     8,     9,
      10,    11,   276,     0,     1,    26,   280,     7,    17,    18,
      19,   147,    12,   149,    23,    24,    25,     7,    27,    28,
      29,    30,    31,    20,     7,   299,     7,   301,     8,     9,
      10,    11,    41,    41,   170,     8,     9,    10,    11,     1,
       6,     3,     4,     6,     5,   506,    26,   183,     6,    12,
     324,   325,     5,    26,    12,    17,    18,    19,    20,     7,
     196,    23,    24,    25,    12,    27,    28,    29,    30,    31,
      32,     6,     5,     7,     7,     5,     9,    12,    12,    41,
     216,    14,     8,     9,    10,    11,     6,    20,    21,     5,
       7,     6,    12,     6,    27,    28,    29,    30,     6,   235,
      26,   375,   376,   377,    12,     6,     5,    40,    41,    42,
       1,    12,     3,     4,     6,   389,     8,     9,   392,   393,
      12,     5,   396,   397,     6,     6,    17,    18,    19,    20,
      12,    12,    23,    24,    25,   271,    27,    28,    29,    30,
      31,    32,     6,     6,   280,     6,     6,     6,    33,    12,
      41,    12,    12,    12,   428,   429,   430,   431,   432,     6,
       6,     6,    47,   299,   438,    12,    12,    12,    53,    54,
       6,    56,    57,     8,     9,    10,    11,     6,     8,     9,
      10,    11,     5,    12,     1,     7,     3,     4,    73,     7,
      12,    26,     7,     6,    12,    80,    26,    12,    83,    12,
      17,    18,    19,    20,     5,    26,    23,    24,    25,   483,
      27,    28,    29,    30,    31,   100,   490,     6,   492,   104,
     105,   106,   107,    12,    41,     6,     6,     6,   113,     6,
       6,    12,   506,    12,     8,     9,    10,    11,   512,     7,
       6,   126,   127,    26,    12,   130,    12,     6,     6,    15,
      16,   136,    26,    12,    12,     5,   392,   393,     5,     5,
      26,   397,   147,     5,   149,   150,    26,   152,    34,    35,
      36,    37,    38,    39,    26,    26,     6,     6,     1,     5,
       3,     4,    12,    12,     6,   170,     8,     9,    10,    11,
     564,   565,   428,    26,    17,    18,    19,    20,   183,   184,
      23,    24,    25,     5,    27,    28,    29,    30,    31,    32,
      26,   196,   197,     6,     5,     8,     9,     1,    41,     3,
       4,     7,     5,   597,     5,   599,     7,     8,     9,    10,
      11,   216,   217,    17,    18,    19,    20,     5,   612,    23,
      24,    25,     5,    27,    28,    29,    30,    31,    32,     5,
     235,   236,   237,     7,     8,     9,     7,    41,    12,     8,
       9,    10,    11,     5,     8,     9,    10,    11,     5,     5,
     506,   256,   257,   258,   259,   260,   512,    26,     5,     5,
     265,     1,    26,     3,     4,     6,   271,     8,     9,    10,
      11,   276,     5,    41,     5,   280,   281,    17,    18,    19,
      20,     5,     5,    23,    24,    25,     5,    27,    28,    29,
      30,    31,    32,     4,   299,   300,   301,     6,     6,     8,
       9,    41,     8,     9,    10,    11,    41,     8,     9,    10,
      11,     6,    41,     5,    41,     7,     6,     9,     6,   324,
      26,    41,    14,     4,   329,    26,    41,     7,    20,    21,
       5,     6,   337,   338,     9,    27,    28,    29,    30,    14,
       6,    41,   347,   348,     6,    20,    21,   352,    40,    41,
      42,     6,    27,    28,    29,    30,    13,   362,   363,    41,
       6,   366,     8,     9,     6,    40,    41,    42,     6,     5,
     375,   376,   377,   378,   379,   380,   381,     6,     5,     8,
       9,     6,     9,     8,     9,    10,    11,   392,   393,     6,
       6,   396,   397,     6,    21,     6,    33,     6,   403,     6,
      27,    28,    29,    30,    26,     6,   411,   412,   413,   414,
      47,     6,   417,    40,    41,    42,    53,    54,     6,    56,
       8,     9,     6,   428,   429,   430,   431,   432,   433,   434,
     435,   436,     1,     6,     3,     4,    73,     7,     8,     9,
      10,    11,    12,    80,     6,     6,    83,     6,    17,    18,
      19,    20,     6,     6,    23,    24,    25,     6,    27,    28,
      29,    30,    31,   100,     6,     6,     6,   104,   105,     7,
       6,     6,    41,     8,     9,     5,   113,     8,     9,    10,
      11,     6,     6,     8,     9,   490,     6,     6,     6,   126,
     127,     6,     6,   130,     6,    26,     8,     9,     5,   136,
       1,   506,     3,     4,     6,     5,    -1,   512,   513,     6,
     147,     6,   149,   150,     6,   152,    17,    18,    19,    20,
       6,    26,    23,    24,    25,     7,    27,    28,    29,    30,
      31,    32,     5,   170,     7,     6,     9,     8,     9,    26,
      41,    14,     6,    26,     8,     9,   183,    20,    21,    26,
      26,    15,    16,     7,    27,    28,    29,    30,     7,   196,
     565,     6,    26,     8,     9,    10,    11,    40,    41,    42,
      34,    35,    36,    37,    38,    39,   581,     6,     6,   216,
       8,     9,    10,    11,   589,   590,   591,   592,    41,     6,
       5,     6,     6,     6,     9,     6,     3,    55,   235,    14,
     237,    -1,    -1,    -1,    -1,    20,    21,     7,     8,     9,
      10,    11,    27,    28,    29,    30,    -1,    -1,    -1,   256,
     257,   258,   259,   260,    -1,    40,    41,    42,   265,     1,
      -1,     3,     4,     6,   271,     8,     9,    10,    11,   276,
      -1,    -1,    -1,   280,    -1,    17,    18,    19,    20,    -1,
      -1,    23,    24,    25,    -1,    27,    28,    29,    30,    31,
      32,    -1,   299,     6,   301,     8,     9,    10,    11,    41,
      -1,    -1,     1,    -1,     3,     4,    -1,     5,    -1,     7,
       8,     9,    10,    11,    12,    -1,    -1,   324,    17,    18,
      19,    20,   329,    -1,    23,    24,    25,    -1,    27,    28,
      29,    30,    31,    32,     5,     6,    -1,     8,     9,    10,
      11,    12,    41,    -1,     6,   352,     8,     9,    10,    11,
      12,    -1,    -1,   360,   361,    -1,    -1,    -1,    -1,   366,
       6,    33,     8,     9,    10,    11,    12,    -1,   375,   376,
     377,   378,   379,    -1,     6,    47,     8,     9,    10,    11,
      12,    53,    54,    -1,    56,   392,   393,    -1,    -1,   396,
     397,    -1,    -1,    -1,    -1,     6,   403,     8,     9,    10,
      11,    73,    -1,    -1,   411,   412,    -1,    -1,    80,    -1,
     417,    83,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,
      -1,   428,   429,   430,   431,   432,   433,   434,   100,    -1,
      -1,    -1,    17,    18,    19,    20,    -1,    -1,    23,    24,
      25,   113,    27,    28,    29,    30,    31,    32,    -1,     5,
      -1,    -1,    -1,     9,   126,   127,    41,     6,   130,     8,
       9,    10,    11,    12,   136,    21,     7,     8,     9,    10,
      11,    27,    28,    29,    30,   147,    -1,   149,   150,    -1,
     152,    -1,    -1,   490,    40,    41,    42,    -1,    -1,    -1,
       1,    -1,     3,     4,    -1,    -1,    -1,    -1,   170,   506,
       7,     8,     9,    10,    11,   512,    17,    18,    19,    20,
      -1,   183,    23,    24,    25,    -1,    27,    28,    29,    30,
      31,    32,    -1,     6,   196,     8,     9,    10,    11,    12,
      41,    -1,     5,     6,    -1,    -1,     9,    -1,    -1,    33,
      -1,    14,    -1,    -1,   216,    -1,    -1,    20,    21,    -1,
      -1,    -1,    -1,    47,    27,    28,    29,    30,   565,    53,
      54,    -1,    56,   235,    -1,   237,    -1,    40,    41,    42,
      -1,    -1,    -1,     6,   581,     8,     9,    10,    11,    73,
      -1,    -1,   589,   590,    -1,    -1,    80,    -1,   260,    83,
      -1,    -1,    -1,   265,     1,    -1,     3,     4,     6,   271,
       8,     9,    10,    11,   276,    -1,    -1,    -1,   280,    -1,
      17,    18,    19,    20,    -1,    -1,    23,    24,    25,   113,
      27,    28,    29,    30,    31,    32,    -1,   299,    -1,   301,
      -1,    -1,   126,   127,    41,     6,   130,     8,     9,    10,
      11,    12,   136,     1,    -1,     3,     4,     7,     8,     9,
      10,    11,   324,   147,    -1,   149,   150,   329,   152,    17,
      18,    19,    20,    -1,    -1,    23,    24,    25,    -1,    27,
      28,    29,    30,    31,    32,    -1,   170,    -1,    -1,    -1,
     352,    -1,    -1,    41,    -1,    -1,     6,    -1,    -1,   183,
      -1,    -1,    12,    -1,   366,    15,    16,     7,     8,     9,
      10,    11,   196,   375,   376,   377,    26,    -1,    -1,    -1,
       1,    -1,     3,     4,    34,    35,    36,    37,    38,    39,
     392,   393,   216,    -1,   396,   397,    17,    18,    19,    20,
      -1,   403,    23,    24,    25,    -1,    27,    28,    29,    30,
      31,   235,    -1,   237,    -1,   417,    -1,    -1,    -1,     6,
      41,     8,     9,    10,    11,    12,   428,   429,   430,   431,
     432,     6,    -1,     8,     9,    10,    11,    12,    -1,    -1,
      -1,   265,     1,    -1,     3,     4,     6,   271,     8,     9,
      10,    11,   276,    -1,    -1,    -1,   280,    -1,    17,    18,
      19,    20,    -1,    -1,    23,    24,    25,    -1,    27,    28,
      29,    30,    31,    32,    -1,   299,    -1,   301,    -1,    -1,
      -1,     6,    41,     8,     9,    10,    11,    12,   490,     1,
      -1,     3,     4,     6,    -1,     8,     9,    10,    11,    12,
     324,    -1,    -1,    -1,   506,    17,    18,    19,    20,    -1,
     512,    23,    24,    25,     6,    27,    28,    29,    30,    31,
      32,    -1,    -1,    15,    16,    -1,    -1,    -1,    -1,    41,
      -1,    -1,    -1,     6,    26,     8,     9,    10,    11,    12,
      -1,    -1,    34,    35,    36,    37,    38,    39,    -1,    -1,
      -1,   375,   376,   377,    -1,    -1,    -1,    -1,     1,    -1,
       3,     4,    -1,   565,    -1,    -1,    -1,    -1,   392,   393,
      -1,    -1,   396,   397,    17,    18,    19,    20,    -1,   581,
      23,    24,    25,    -1,    27,    28,    29,    30,    31,    32,
      -1,    -1,    -1,     1,    -1,     3,     4,    -1,    41,    -1,
      -1,    -1,    -1,    -1,   428,   429,   430,   431,   432,    17,
      18,    19,    20,    -1,    -1,    23,    24,    25,    -1,    27,
      28,    29,    30,    31,    32,     1,    -1,     3,     4,    -1,
      -1,    -1,    -1,    41,     7,     8,     9,    10,    11,    12,
      -1,    17,    18,    19,    20,    -1,    -1,    23,    24,    25,
      -1,    27,    28,    29,    30,    31,    32,     7,     8,     9,
      10,    11,    12,    -1,    -1,    41,   490,     1,    -1,     3,
       4,     7,     8,     9,    10,    11,    12,     7,     8,     9,
      10,    11,   506,    17,    18,    19,    20,    -1,   512,    23,
      24,    25,    -1,    27,    28,    29,    30,    31,    32,     1,
      -1,     3,     4,    -1,    -1,    -1,    -1,    41,     7,     8,
       9,    10,    11,    12,    -1,    17,    18,    19,    20,    -1,
      -1,    23,    24,    25,    -1,    27,    28,    29,    30,    31,
       1,    -1,     3,     4,     7,     8,     9,    10,    11,    41,
      -1,   565,    -1,    -1,    -1,    -1,    17,    18,    19,    20,
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
      27,    28,    29,    30,    31,     1,    -1,     3,     4,    -1,
      -1,    -1,    -1,    -1,    41,     7,     8,     9,    10,    11,
      12,    17,    18,    19,    20,    -1,    -1,    23,    24,    25,
      -1,    27,    28,    29,    30,    31,     1,    -1,     3,     4,
      -1,    -1,    -1,    -1,    -1,    41,     7,     8,     9,    10,
      11,    12,    17,    18,    19,    20,    -1,    -1,    23,    24,
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
      23,    24,    25,    -1,    27,    28,    29,    30,    31,     1,
      -1,     3,     4,    -1,    -1,    -1,    -1,    -1,    41,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,    19,    20,    -1,
      -1,    23,    24,    25,    -1,    27,    28,    29,    30,    31,
       1,    -1,     3,     4,    -1,    -1,    -1,    -1,    -1,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    19,    20,
      -1,    -1,    23,    24,    25,    -1,    27,    28,    29,    30,
      31,     1,    -1,     3,    -1,    -1,    -1,    -1,    -1,    -1,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    19,
      20,    -1,    -1,    23,    24,    25,    -1,    27,    28,    29,
      30,    31,     1,    -1,     3,    -1,    -1,    -1,    -1,    -1,
      -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,
      19,    -1,    -1,    -1,    23,    24,    25,    -1,    27,    28,
      29,    30,    31,    -1,     5,     6,    -1,    -1,     9,    -1,
      -1,    -1,    41,    14,    -1,    -1,    -1,    -1,    -1,    20,
      21,     5,    -1,    -1,    -1,     9,    27,    28,    29,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    40,
      41,    42,    -1,    27,    28,    29,    30,     5,    -1,    33,
      -1,     9,    -1,    -1,    -1,    -1,    40,    41,    42,    -1,
      -1,    -1,    -1,    21,    22,    -1,    -1,    -1,    -1,    27,
      28,    29,    30,     5,    -1,    33,    -1,     9,    -1,    -1,
      -1,    -1,    40,    41,    42,    -1,    -1,    -1,    -1,    21,
      22,    -1,    -1,    -1,    -1,    27,    28,    29,    30,    -1,
      -1,    33,     5,    -1,    -1,    -1,     9,    -1,    40,    41,
      42,    14,    -1,    -1,    -1,    -1,    -1,    20,    21,     5,
      -1,    -1,    -1,     9,    27,    28,    29,    30,    14,    -1,
      -1,    -1,    -1,    -1,    20,    21,     5,    40,    41,    42,
       9,    27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    21,    22,    40,    41,    42,    -1,    27,    28,
      29,    30,    -1,    -1,    33,     5,    -1,    -1,    -1,     9,
      -1,    40,    41,    42,    14,    -1,    -1,    -1,    -1,    -1,
      -1,    21,     5,    -1,    -1,    -1,     9,    27,    28,    29,
      30,    14,    -1,    -1,    -1,    -1,    -1,    -1,    21,     5,
      40,    41,    42,     9,    27,    28,    29,    30,    14,    -1,
      -1,    -1,    -1,    -1,    -1,    21,     5,    40,    41,    42,
       9,    27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,
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
      -1,    21,    -1,    40,    41,    42,    -1,    27,    28,    29,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    41,    42,     5,    -1,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,    16,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    34,    35,    36,    37,    38,    39,     5,     6,
      -1,     8,     9,    10,    11,    12,    13,    -1,    15,    16,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,    36,
      37,    38,    39,     5,    -1,     7,     8,     9,    10,    11,
      12,    -1,    -1,    15,    16,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    34,    35,    36,    37,    38,    39,     5,     6,
      -1,     8,     9,    10,    11,    12,    -1,    -1,    15,    16,
      -1,    -1,     5,     6,    -1,     8,     9,    10,    11,    26,
      -1,    -1,    15,    16,    -1,    -1,    -1,    34,    35,    36,
      37,    38,    39,    26,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,    36,
      37,    38,    39,     6,    -1,     8,     9,    10,    11,    12,
      -1,    -1,    15,    16,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    34,    35,    36,    37,    38,    39,     6,    -1,     8,
       9,    10,    11,    12,    -1,    -1,    15,    16,    -1,    -1,
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
       9,    10,    11,    -1,    -1,    -1,    15,    16,    -1,    -1,
      -1,     6,    -1,     8,     9,    10,    11,    26,    -1,    -1,
      15,    16,    -1,    -1,    -1,    34,    35,    36,    37,    38,
      39,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,
      35,    36,    37,    38,    39,     6,    -1,     8,     9,    -1,
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
      37,    38,    39,    -1,    34,    35,    36,    37,    38,    39,
       6,    -1,    -1,    -1,    -1,    -1,    12,     6,    -1,    15,
      16,    -1,    -1,    12,    -1,    -1,    15,    16,    -1,    -1,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    26,    34,    35,
      36,    37,    38,    39,     6,    34,    35,    36,    37,    38,
      39,     6,    -1,    15,    16,    -1,    -1,    12,     6,    -1,
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
      -1,     6,    -1,    15,    16,    -1,    -1,    26,    -1,    -1,
      15,    16,    -1,    -1,    26,    34,    35,    36,    37,    38,
      39,    26,    34,    35,    36,    37,    38,    39,     6,    34,
      35,    36,    37,    38,    39,     6,    -1,    15,    16,    -1,
      -1,    -1,    -1,    -1,    15,    16,    -1,    -1,    26,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    34,    35,    36,    37,
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
       0,    20,    46,    47,    48,    49,    53,    41,     0,     1,
      48,    50,    54,     5,     7,    51,    20,    55,    41,     6,
      12,    52,    20,     3,    57,    41,    58,    59,     1,    17,
      18,    19,    20,    23,    24,    25,    27,    28,    29,    30,
      31,    41,    53,    57,    60,    61,    62,    63,    64,    77,
      78,     4,     5,     5,     5,    41,     5,     9,    21,    22,
      33,    40,    41,    42,    77,    78,    79,    80,    81,    82,
      83,    84,     5,     5,     5,     5,     5,     5,     5,     5,
      13,     4,    61,    14,    21,    68,    69,    70,    71,    73,
      74,    81,    82,     7,     7,    41,    79,    79,    80,    82,
       5,    41,    84,     7,     8,     9,    10,    11,    76,    79,
       7,    20,    41,    65,    66,    67,    68,    41,    76,    76,
      76,    41,    56,    79,    70,     6,    38,    39,    34,    35,
      72,    15,    16,    26,    36,    37,    75,     6,     6,     6,
       6,     6,    83,    83,    84,    84,     6,    26,    41,    13,
      65,     7,    12,     6,     6,     6,     6,     6,    12,     7,
      62,    69,    70,    73,    74,     7,     7,     7,    62,    79,
      13,    79,     6,    66,    67,    41,    32,    79,    62,     6,
      62,    62,     3,     5,     9,    27,    28,    29,    30,    40,
      41,    42,    77,    78,    83,    84,     5,     9,    21,    22,
      27,    28,    29,    30,    33,    40,    41,    42,    77,    78,
      80,    81,    82,    83,    84,    54,     5,     9,    21,    22,
      27,    28,    29,    30,    33,    40,    41,    42,    77,    78,
      80,    81,    82,    83,    84,     5,     9,    14,    21,    27,
      28,    29,    30,    40,    42,    69,    70,    71,    73,    74,
      77,    78,    81,    82,    83,    84,     8,     9,     8,     9,
       5,    41,     5,     7,    66,    38,     1,     3,    17,    18,
      19,    23,    24,    25,    41,    57,    63,    64,    77,    78,
       5,     9,    21,    22,    27,    28,    29,    30,    33,    40,
      41,    42,    77,    78,    80,    81,    82,    83,    84,     5,
       9,    14,    20,    21,    27,    28,    29,    30,    40,    41,
      42,    67,    68,    69,    70,    71,    73,    74,    77,    78,
      81,    82,    83,    84,    12,    58,    59,    80,    82,     5,
      41,    84,     5,     5,     5,     5,     5,    10,    11,    80,
      82,    84,     5,     5,     5,     5,     5,    10,    11,     7,
      80,    82,     5,    41,    84,     5,     5,     5,     5,     5,
       8,     9,    10,    11,    80,    82,     5,    41,    84,    41,
      70,     5,     5,     5,     5,    39,    72,    75,     8,     9,
      10,    11,    83,    83,    83,    83,    56,     7,    69,    58,
      59,     5,     5,     5,    79,     5,     5,    13,    68,     7,
       7,    80,    82,     5,    41,    84,     5,     5,     5,     5,
       5,     8,     9,    10,    11,    80,    82,     5,    41,    84,
      41,    70,    41,     5,     5,     5,     5,     5,    13,    38,
      39,    72,    75,     8,     9,    10,    11,    67,    60,     4,
       6,     6,    41,    76,    76,    76,    56,    84,    84,     6,
       6,    41,    76,    76,    76,    56,    84,    84,     6,     6,
      41,    76,    76,    76,    56,    83,    83,    84,    84,     6,
       6,    41,    76,    76,    76,    70,    73,    74,    83,    83,
      84,    84,     6,    60,     4,    41,    79,    79,     7,    76,
      65,    79,     6,     6,     6,    41,    76,    76,    76,    56,
      83,    83,    84,    84,     6,     6,    13,    41,    76,    76,
      76,    56,     5,     9,    21,    22,    27,    28,    29,    30,
      33,    40,    41,    42,    77,    78,    79,    80,    81,    82,
      83,    84,    69,    70,    73,    74,    83,    83,    84,    84,
       4,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       4,     6,     6,     6,     6,    65,     7,    62,     6,     6,
       6,     6,     6,    79,     6,     6,     6,     6,     6,    80,
      82,     5,    41,    84,     5,     5,     5,     5,     5,     8,
       9,    10,    11,     7,     7,     7,    62,     6,    66,    32,
       6,     6,    41,    76,    76,    76,    56,    83,    83,    84,
      84,    62,     6,    62,     6,     6,     6,     6,     6,    62
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    45,    46,    47,    47,    47,    48,    48,    50,    51,
      52,    49,    54,    53,    55,    55,    55,    56,    56,    56,
      58,    57,    59,    57,    60,    60,    61,    61,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    63,    64,
      64,    64,    64,    64,    65,    65,    66,    66,    67,    67,
      67,    68,    68,    69,    69,    70,    70,    71,    71,    72,
      72,    73,    73,    74,    74,    74,    75,    75,    75,    75,
      75,    76,    77,    78,    78,    78,    78,    79,    79,    80,
      80,    80,    80,    81,    81,    81,    82,    82,    82,    83,
      83,    83,    83,    84,    84,    84,    84
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     2,     1,     1,     1,     0,     0,
       0,     9,     0,     4,     4,     2,     0,     3,     1,     0,
       0,     4,     0,     3,     2,     1,     1,     1,     1,     2,
       2,     1,     5,     5,     5,     4,     3,     1,     2,     4,
       6,     5,     6,     7,     1,     2,     1,     3,     1,     4,
       3,     3,     1,     3,     1,     2,     1,     3,     1,     1,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     4,     4,     4,     4,     4,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     3,     1,     3,
       3,     1,     2,     1,     1,     1,     3
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
#line 2674 "parser/parser.c"
    break;

  case 6: /* stmt: func_stmt  */
#line 61 "parser/c7.y"
                       { add_ast((yyvsp[0].expression)); }
#line 2680 "parser/parser.c"
    break;

  case 7: /* stmt: var_decl_stmt  */
#line 62 "parser/c7.y"
                           { add_ast((yyvsp[0].expression)); }
#line 2686 "parser/parser.c"
    break;

  case 8: /* $@1: %empty  */
#line 65 "parser/c7.y"
                            {
                set_id_type((yyvsp[0].int_value), ST_ID_FUNC);
                global_opt = SAME_LVL;
                update_global_refs();
                global_scope = push_to_stack((yyvsp[0].int_value));
                set_scope((yyvsp[0].int_value), global_scope);
            }
#line 2698 "parser/parser.c"
    break;

  case 9: /* $@2: %empty  */
#line 71 "parser/c7.y"
                          {
                global_opt = INC_LVL;
                update_global_refs();
            }
#line 2707 "parser/parser.c"
    break;

  case 10: /* $@3: %empty  */
#line 74 "parser/c7.y"
                                          {
                global_opt = DEC_LVL;
                update_global_refs();
            }
#line 2716 "parser/parser.c"
    break;

  case 11: /* func_stmt: TYPE ID $@1 PARENT_LEFT $@2 param_list PARENT_RIGHT $@3 compound_block_stmt  */
#line 77 "parser/c7.y"
                                     {
                (yyval.expression) = create_func_expr(create_str_expr((yyvsp[-8].str_value)), create_var_expr((yyvsp[-7].int_value)), (yyvsp[-3].expression), (yyvsp[0].expression));
                free((yyvsp[-8].str_value));
            }
#line 2725 "parser/parser.c"
    break;

  case 12: /* $@4: %empty  */
#line 83 "parser/c7.y"
                                {
                    set_id_type((yyvsp[0].int_value), ST_ID_VAR);
                    global_opt = SAME_LVL;
                    update_global_refs();
                    global_scope = push_to_stack((yyvsp[0].int_value));
                    set_scope((yyvsp[0].int_value), global_scope);
                }
#line 2737 "parser/parser.c"
    break;

  case 13: /* var_decl_stmt: TYPE ID $@4 SEMICOLON  */
#line 89 "parser/c7.y"
                            {
                    (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-3].str_value)), create_var_expr((yyvsp[-2].int_value)));
                    free((yyvsp[-3].str_value));
                }
#line 2746 "parser/parser.c"
    break;

  case 14: /* param_list: param_list COMMA TYPE ID  */
#line 95 "parser/c7.y"
                                                {
                (yyval.expression) = create_ter_expr((yyvsp[-3].expression), create_str_expr((yyvsp[-1].str_value)), create_var_expr((yyvsp[0].int_value)));
                set_id_type((yyvsp[0].int_value), ST_ID_VAR);
                free((yyvsp[-1].str_value));
            }
#line 2756 "parser/parser.c"
    break;

  case 15: /* param_list: TYPE ID  */
#line 100 "parser/c7.y"
                            {
                (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-1].str_value)), create_var_expr((yyvsp[0].int_value)));
                set_id_type((yyvsp[0].int_value), ST_ID_VAR);
                global_opt = SAME_LVL;
                update_global_refs();
                global_scope = push_to_stack((yyvsp[0].int_value));
                set_scope((yyvsp[0].int_value), global_scope);
                free((yyvsp[-1].str_value));
            }
#line 2770 "parser/parser.c"
    break;

  case 16: /* param_list: %empty  */
#line 109 "parser/c7.y"
                          { (yyval.expression) = create_empty_expr(); }
#line 2776 "parser/parser.c"
    break;

  case 17: /* simple_param_list: simple_param_list COMMA ID  */
#line 112 "parser/c7.y"
                                                       {
                        (yyval.expression) = create_bin_expr((yyvsp[-2].expression), create_var_expr((yyvsp[0].int_value)));
                        set_id_type((yyvsp[0].int_value), ST_ID_VAR);
                    }
#line 2785 "parser/parser.c"
    break;

  case 18: /* simple_param_list: ID  */
#line 116 "parser/c7.y"
                            { 
                        (yyval.expression) = create_var_expr((yyvsp[0].int_value));
                        set_id_type((yyvsp[0].int_value), ST_ID_VAR);
                    }
#line 2794 "parser/parser.c"
    break;

  case 19: /* simple_param_list: %empty  */
#line 120 "parser/c7.y"
                                  { (yyval.expression) = create_empty_expr(); }
#line 2800 "parser/parser.c"
    break;

  case 20: /* $@5: %empty  */
#line 123 "parser/c7.y"
                                 {
                        global_opt = NEW_LVL;
                        update_global_refs();
                    }
#line 2809 "parser/parser.c"
    break;

  case 21: /* compound_block_stmt: BRACK_LEFT $@5 block_stmts BRACK_RIGHT  */
#line 126 "parser/c7.y"
                                                 {
                        global_opt = DEC_LVL;
                        update_global_refs();
                        (yyval.expression) = (yyvsp[-1].expression);
                    }
#line 2819 "parser/parser.c"
    break;

  case 22: /* $@6: %empty  */
#line 131 "parser/c7.y"
                                 {
                        global_opt = NEW_LVL;
                        update_global_refs();
                    }
#line 2828 "parser/parser.c"
    break;

  case 23: /* compound_block_stmt: BRACK_LEFT $@6 BRACK_RIGHT  */
#line 134 "parser/c7.y"
                                   {
                        global_opt = DEC_LVL;
                        update_global_refs();
                        (yyval.expression) = create_empty_expr();
                    }
#line 2838 "parser/parser.c"
    break;

  case 24: /* block_stmts: block_stmts block_item  */
#line 141 "parser/c7.y"
                                           {
                (yyval.expression) = create_bin_expr((yyvsp[-1].expression), (yyvsp[0].expression)); 
            }
#line 2846 "parser/parser.c"
    break;

  case 25: /* block_stmts: block_item  */
#line 144 "parser/c7.y"
                            { (yyval.expression) = (yyvsp[0].expression); }
#line 2852 "parser/parser.c"
    break;

  case 26: /* block_item: var_decl_stmt  */
#line 147 "parser/c7.y"
                               { (yyval.expression) = (yyvsp[0].expression); }
#line 2858 "parser/parser.c"
    break;

  case 27: /* block_item: block_stmt  */
#line 148 "parser/c7.y"
                            { (yyval.expression) = (yyvsp[0].expression); }
#line 2864 "parser/parser.c"
    break;

  case 28: /* block_stmt: compound_block_stmt  */
#line 151 "parser/c7.y"
                                     { (yyval.expression) = (yyvsp[0].expression); }
#line 2870 "parser/parser.c"
    break;

  case 29: /* block_stmt: func_call SEMICOLON  */
#line 152 "parser/c7.y"
                                     { (yyval.expression) = (yyvsp[-1].expression); }
#line 2876 "parser/parser.c"
    break;

  case 30: /* block_stmt: set_func_call SEMICOLON  */
#line 153 "parser/c7.y"
                                         { (yyval.expression) = (yyvsp[-1].expression); }
#line 2882 "parser/parser.c"
    break;

  case 31: /* block_stmt: flow_control  */
#line 154 "parser/c7.y"
                              { (yyval.expression) = (yyvsp[0].expression); }
#line 2888 "parser/parser.c"
    break;

  case 32: /* block_stmt: READ PARENT_LEFT ID PARENT_RIGHT SEMICOLON  */
#line 155 "parser/c7.y"
                                                               {
                (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-4].str_value)), create_var_expr((yyvsp[-2].int_value))); 
                set_id_type((yyvsp[-2].int_value), ST_ID_VAR);
                free((yyvsp[-4].str_value));
            }
#line 2898 "parser/parser.c"
    break;

  case 33: /* block_stmt: WRITE PARENT_LEFT simple_expr PARENT_RIGHT SEMICOLON  */
#line 160 "parser/c7.y"
                                                                         {
                (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-4].str_value)), (yyvsp[-2].expression)); 
                free((yyvsp[-4].str_value));
            }
#line 2907 "parser/parser.c"
    break;

  case 34: /* block_stmt: WRITELN PARENT_LEFT simple_expr PARENT_RIGHT SEMICOLON  */
#line 164 "parser/c7.y"
                                                                           {
                (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-4].str_value)), (yyvsp[-2].expression)); 
                free((yyvsp[-4].str_value));
            }
#line 2916 "parser/parser.c"
    break;

  case 35: /* block_stmt: ID ASSIGN simple_expr SEMICOLON  */
#line 168 "parser/c7.y"
                                                       {
                (yyval.expression) = create_ter_expr(create_var_expr((yyvsp[-3].int_value)), create_char_expr((yyvsp[-2].op)), (yyvsp[-1].expression));
                set_id_type((yyvsp[-3].int_value), ST_ID_VAR); 
                global_scope = push_to_stack((yyvsp[-3].int_value));
                set_scope((yyvsp[-3].int_value), global_scope);
            }
#line 2927 "parser/parser.c"
    break;

  case 36: /* block_stmt: RETURN simple_expr SEMICOLON  */
#line 174 "parser/c7.y"
                                                 {
                (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-2].str_value)), (yyvsp[-1].expression)); 
                free((yyvsp[-2].str_value));
            }
#line 2936 "parser/parser.c"
    break;

  case 37: /* block_stmt: error  */
#line 178 "parser/c7.y"
                    { 
                (yyval.expression) = create_empty_expr();
                yyerrok;
            }
#line 2945 "parser/parser.c"
    break;

  case 38: /* flow_control_if: IF PARENT_LEFT  */
#line 184 "parser/c7.y"
                                    {
                    global_opt = SAME_LVL;
                    update_global_refs();
                    (yyval.expression) = create_str_expr((yyvsp[-1].str_value));
                    free((yyvsp[-1].str_value));
                }
#line 2956 "parser/parser.c"
    break;

  case 39: /* flow_control: flow_control_if or_cond_expr PARENT_RIGHT block_stmt  */
#line 192 "parser/c7.y"
                                                                                               {
                    (yyval.expression) = create_ter_expr((yyvsp[-3].expression), (yyvsp[-2].expression), (yyvsp[0].expression)); 
                }
#line 2964 "parser/parser.c"
    break;

  case 40: /* flow_control: flow_control_if or_cond_expr PARENT_RIGHT block_stmt ELSE block_stmt  */
#line 195 "parser/c7.y"
                                                                                                            {
                    (yyval.expression) = create_qui_expr((yyvsp[-5].expression), (yyvsp[-4].expression), (yyvsp[-2].expression), create_str_expr((yyvsp[-1].str_value)), (yyvsp[0].expression));
                    free((yyvsp[-1].str_value));
                }
#line 2973 "parser/parser.c"
    break;

  case 41: /* flow_control: FORALL PARENT_LEFT set_expr PARENT_RIGHT block_stmt  */
#line 199 "parser/c7.y"
                                                                                 {
                    (yyval.expression) = create_ter_expr(create_str_expr((yyvsp[-4].str_value)), (yyvsp[-2].expression), (yyvsp[0].expression)); 
                    free((yyvsp[-4].str_value));
                }
#line 2982 "parser/parser.c"
    break;

  case 42: /* flow_control: FOR PARENT_LEFT opt_param opt_param PARENT_RIGHT block_stmt  */
#line 203 "parser/c7.y"
                                                                                             {
                    (yyval.expression) = create_qua_expr(create_str_expr((yyvsp[-5].str_value)), (yyvsp[-3].expression), (yyvsp[-2].expression), (yyvsp[0].expression)); 
                    free((yyvsp[-5].str_value));
                }
#line 2991 "parser/parser.c"
    break;

  case 43: /* flow_control: FOR PARENT_LEFT opt_param opt_param for_expression PARENT_RIGHT block_stmt  */
#line 207 "parser/c7.y"
                                                                                                                {
                    (yyval.expression) = create_qui_expr(create_str_expr((yyvsp[-6].str_value)), (yyvsp[-4].expression), (yyvsp[-3].expression), (yyvsp[-2].expression), (yyvsp[0].expression)); 
                    free((yyvsp[-6].str_value));
                }
#line 3000 "parser/parser.c"
    break;

  case 44: /* opt_param: SEMICOLON  */
#line 213 "parser/c7.y"
                        { (yyval.expression) = create_empty_expr(); }
#line 3006 "parser/parser.c"
    break;

  case 45: /* opt_param: for_expression SEMICOLON  */
#line 214 "parser/c7.y"
                                          { (yyval.expression) = (yyvsp[-1].expression); }
#line 3012 "parser/parser.c"
    break;

  case 46: /* for_expression: decl_or_cond_expr  */
#line 217 "parser/c7.y"
                                       { (yyval.expression) = (yyvsp[0].expression); }
#line 3018 "parser/parser.c"
    break;

  case 47: /* for_expression: for_expression COMMA decl_or_cond_expr  */
#line 218 "parser/c7.y"
                                                                 {
                    (yyval.expression) = create_bin_expr((yyvsp[-2].expression), (yyvsp[0].expression)); 
                }
#line 3026 "parser/parser.c"
    break;

  case 48: /* decl_or_cond_expr: or_cond_expr  */
#line 223 "parser/c7.y"
                                      { (yyval.expression) = (yyvsp[0].expression); }
#line 3032 "parser/parser.c"
    break;

  case 49: /* decl_or_cond_expr: TYPE ID ASSIGN simple_expr  */
#line 224 "parser/c7.y"
                                                             {
                        (yyval.expression) = create_qua_expr(create_str_expr((yyvsp[-3].str_value)), create_var_expr((yyvsp[-2].int_value)),
                                             create_char_expr((yyvsp[-1].op)), (yyvsp[0].expression)); 
                        set_id_type((yyvsp[-2].int_value), ST_ID_VAR);
                        free((yyvsp[-3].str_value));
                    }
#line 3043 "parser/parser.c"
    break;

  case 50: /* decl_or_cond_expr: ID ASSIGN simple_expr  */
#line 230 "parser/c7.y"
                                                     {
                        (yyval.expression) = create_ter_expr(create_var_expr((yyvsp[-2].int_value)), create_char_expr((yyvsp[-1].op)), (yyvsp[0].expression));
                        set_id_type((yyvsp[-2].int_value), ST_ID_VAR);
                    }
#line 3052 "parser/parser.c"
    break;

  case 51: /* or_cond_expr: or_cond_expr OR_OP and_cond_expr  */
#line 236 "parser/c7.y"
                                                               {
                    (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_str_expr((yyvsp[-1].str_value)), (yyvsp[0].expression)); 
                    free((yyvsp[-1].str_value));
                }
#line 3061 "parser/parser.c"
    break;

  case 52: /* or_cond_expr: and_cond_expr  */
#line 240 "parser/c7.y"
                                   { (yyval.expression) = (yyvsp[0].expression); }
#line 3067 "parser/parser.c"
    break;

  case 53: /* and_cond_expr: and_cond_expr AND_OP unary_cond_expr  */
#line 243 "parser/c7.y"
                                                                   {
                    (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_str_expr((yyvsp[-1].str_value)), (yyvsp[0].expression)); 
                    free((yyvsp[-1].str_value));
                }
#line 3076 "parser/parser.c"
    break;

  case 54: /* and_cond_expr: unary_cond_expr  */
#line 247 "parser/c7.y"
                                     { (yyval.expression) = (yyvsp[0].expression); }
#line 3082 "parser/parser.c"
    break;

  case 55: /* unary_cond_expr: NOT_OP unary_cond_expr  */
#line 250 "parser/c7.y"
                                               {
                    (yyval.expression) = create_bin_expr(create_char_expr((yyvsp[-1].op)), (yyvsp[0].expression)); 
                }
#line 3090 "parser/parser.c"
    break;

  case 56: /* unary_cond_expr: eq_cond_expr  */
#line 253 "parser/c7.y"
                                  { (yyval.expression) = (yyvsp[0].expression); }
#line 3096 "parser/parser.c"
    break;

  case 57: /* eq_cond_expr: eq_cond_expr equal_ops rel_cond_expr  */
#line 256 "parser/c7.y"
                                                                  {
                    (yyval.expression) = create_ter_expr((yyvsp[-2].expression), (yyvsp[-1].expression), (yyvsp[0].expression));
                }
#line 3104 "parser/parser.c"
    break;

  case 58: /* eq_cond_expr: rel_cond_expr  */
#line 259 "parser/c7.y"
                                   { (yyval.expression) = (yyvsp[0].expression); }
#line 3110 "parser/parser.c"
    break;

  case 59: /* equal_ops: EQ_OP  */
#line 262 "parser/c7.y"
                       {
                (yyval.expression) = create_str_expr((yyvsp[0].str_value));
                free((yyvsp[0].str_value));
            }
#line 3119 "parser/parser.c"
    break;

  case 60: /* equal_ops: NE_OP  */
#line 266 "parser/c7.y"
                       {
                (yyval.expression) = create_str_expr((yyvsp[0].str_value));
                free((yyvsp[0].str_value));
            }
#line 3128 "parser/parser.c"
    break;

  case 61: /* rel_cond_expr: rel_cond_expr rel_ops rel_cond_stmt  */
#line 272 "parser/c7.y"
                                                                  {
                    (yyval.expression) = create_ter_expr((yyvsp[-2].expression), (yyvsp[-1].expression), (yyvsp[0].expression));
                }
#line 3136 "parser/parser.c"
    break;

  case 62: /* rel_cond_expr: rel_cond_stmt  */
#line 275 "parser/c7.y"
                                   { (yyval.expression) = (yyvsp[0].expression); }
#line 3142 "parser/parser.c"
    break;

  case 63: /* rel_cond_stmt: arith_expr  */
#line 278 "parser/c7.y"
                                { (yyval.expression) = (yyvsp[0].expression); }
#line 3148 "parser/parser.c"
    break;

  case 64: /* rel_cond_stmt: EMPTY  */
#line 279 "parser/c7.y"
                           {
                    (yyval.expression) = create_str_expr((yyvsp[0].str_value));
                    free((yyvsp[0].str_value));
                }
#line 3157 "parser/parser.c"
    break;

  case 65: /* rel_cond_stmt: func_expr  */
#line 283 "parser/c7.y"
                               { (yyval.expression) = (yyvsp[0].expression); }
#line 3163 "parser/parser.c"
    break;

  case 66: /* rel_ops: L_OP  */
#line 286 "parser/c7.y"
                  { (yyval.expression) = create_char_expr((yyvsp[0].op)); }
#line 3169 "parser/parser.c"
    break;

  case 67: /* rel_ops: G_OP  */
#line 287 "parser/c7.y"
                  { (yyval.expression) = create_char_expr((yyvsp[0].op)); }
#line 3175 "parser/parser.c"
    break;

  case 68: /* rel_ops: LE_OP  */
#line 288 "parser/c7.y"
                   {
            (yyval.expression) = create_str_expr((yyvsp[0].str_value));
            free((yyvsp[0].str_value));
        }
#line 3184 "parser/parser.c"
    break;

  case 69: /* rel_ops: GE_OP  */
#line 292 "parser/c7.y"
                   { 
            (yyval.expression) = create_str_expr((yyvsp[0].str_value));
            free((yyvsp[0].str_value));
        }
#line 3193 "parser/parser.c"
    break;

  case 70: /* rel_ops: IN  */
#line 296 "parser/c7.y"
                {
            (yyval.expression) = create_str_expr((yyvsp[0].str_value));
            free((yyvsp[0].str_value));
        }
#line 3202 "parser/parser.c"
    break;

  case 71: /* set_expr: simple_expr IN simple_expr  */
#line 302 "parser/c7.y"
                                                    {
                (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_str_expr((yyvsp[-1].str_value)), (yyvsp[0].expression)); 
                free((yyvsp[-1].str_value));
            }
#line 3211 "parser/parser.c"
    break;

  case 72: /* func_call: ID PARENT_LEFT simple_param_list PARENT_RIGHT  */
#line 308 "parser/c7.y"
                                                                  {
                (yyval.expression) = create_bin_expr(create_var_expr((yyvsp[-3].int_value)), (yyvsp[-1].expression)); 
                set_id_type((yyvsp[-3].int_value), ST_ID_FUNC);
            }
#line 3220 "parser/parser.c"
    break;

  case 73: /* set_func_call: IS_SET PARENT_LEFT ID PARENT_RIGHT  */
#line 314 "parser/c7.y"
                                                           {
                    (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-3].str_value)), create_var_expr((yyvsp[-1].int_value))); 
                    set_id_type((yyvsp[-1].int_value), ST_ID_VAR);
                    free((yyvsp[-3].str_value));
                }
#line 3230 "parser/parser.c"
    break;

  case 74: /* set_func_call: ADD_SET PARENT_LEFT set_expr PARENT_RIGHT  */
#line 319 "parser/c7.y"
                                                                  {
                    (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-3].str_value)), (yyvsp[-1].expression)); 
                    free((yyvsp[-3].str_value));
                }
#line 3239 "parser/parser.c"
    break;

  case 75: /* set_func_call: REMOVE PARENT_LEFT set_expr PARENT_RIGHT  */
#line 323 "parser/c7.y"
                                                                 {
                    (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-3].str_value)), (yyvsp[-1].expression)); 
                    free((yyvsp[-3].str_value));
                }
#line 3248 "parser/parser.c"
    break;

  case 76: /* set_func_call: EXISTS PARENT_LEFT set_expr PARENT_RIGHT  */
#line 327 "parser/c7.y"
                                                                 {
                    (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-3].str_value)), (yyvsp[-1].expression));
                    free((yyvsp[-3].str_value)); 
                }
#line 3257 "parser/parser.c"
    break;

  case 77: /* simple_expr: arith_expr  */
#line 333 "parser/c7.y"
                            { (yyval.expression) = (yyvsp[0].expression); }
#line 3263 "parser/parser.c"
    break;

  case 78: /* simple_expr: func_cte_expr  */
#line 334 "parser/c7.y"
                               { (yyval.expression) = (yyvsp[0].expression); }
#line 3269 "parser/parser.c"
    break;

  case 79: /* func_cte_expr: EMPTY  */
#line 337 "parser/c7.y"
                           {
                    (yyval.expression) = create_str_expr((yyvsp[0].str_value));
                    free((yyvsp[0].str_value));
                }
#line 3278 "parser/parser.c"
    break;

  case 80: /* func_cte_expr: STRING  */
#line 341 "parser/c7.y"
                            {
                    (yyval.expression) = create_str_expr((yyvsp[0].str_value));
                    free((yyvsp[0].str_value));
                }
#line 3287 "parser/parser.c"
    break;

  case 81: /* func_cte_expr: CHAR  */
#line 345 "parser/c7.y"
                          {
                    (yyval.expression) = create_str_expr((yyvsp[0].str_value));
                    free((yyvsp[0].str_value));
                }
#line 3296 "parser/parser.c"
    break;

  case 82: /* func_cte_expr: func_expr  */
#line 349 "parser/c7.y"
                               { (yyval.expression) = (yyvsp[0].expression); }
#line 3302 "parser/parser.c"
    break;

  case 83: /* func_expr: func_call  */
#line 352 "parser/c7.y"
                               { (yyval.expression) = (yyvsp[0].expression); }
#line 3308 "parser/parser.c"
    break;

  case 84: /* func_expr: set_func_call  */
#line 353 "parser/c7.y"
                                   { (yyval.expression) = (yyvsp[0].expression); }
#line 3314 "parser/parser.c"
    break;

  case 85: /* func_expr: PARENT_LEFT func_cte_expr PARENT_RIGHT  */
#line 354 "parser/c7.y"
                                                            { (yyval.expression) = (yyvsp[-1].expression); }
#line 3320 "parser/parser.c"
    break;

  case 86: /* arith_expr: arith_expr ADD term  */
#line 357 "parser/c7.y"
                                           {
                (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_char_expr((yyvsp[-1].op)), (yyvsp[0].expression));
            }
#line 3328 "parser/parser.c"
    break;

  case 87: /* arith_expr: arith_expr SUB term  */
#line 360 "parser/c7.y"
                                           {
                (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_char_expr((yyvsp[-1].op)), (yyvsp[0].expression));
            }
#line 3336 "parser/parser.c"
    break;

  case 88: /* arith_expr: term  */
#line 363 "parser/c7.y"
                      { (yyval.expression) = (yyvsp[0].expression); }
#line 3342 "parser/parser.c"
    break;

  case 89: /* term: term MULT factor  */
#line 366 "parser/c7.y"
                                    {
            (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_char_expr((yyvsp[-1].op)), (yyvsp[0].expression));
        }
#line 3350 "parser/parser.c"
    break;

  case 90: /* term: term DIV factor  */
#line 369 "parser/c7.y"
                                   {
            (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_char_expr((yyvsp[-1].op)), (yyvsp[0].expression));
        }
#line 3358 "parser/parser.c"
    break;

  case 91: /* term: factor  */
#line 372 "parser/c7.y"
                    { (yyval.expression) = (yyvsp[0].expression); }
#line 3364 "parser/parser.c"
    break;

  case 92: /* term: SUB factor  */
#line 373 "parser/c7.y"
                                        { 
            (yyval.expression) = create_bin_expr(create_char_expr((yyvsp[-1].op)), (yyvsp[0].expression)); 
        }
#line 3372 "parser/parser.c"
    break;

  case 93: /* factor: INTEGER  */
#line 378 "parser/c7.y"
                     { (yyval.expression) = create_int_expr((yyvsp[0].int_value)); }
#line 3378 "parser/parser.c"
    break;

  case 94: /* factor: FLOAT  */
#line 379 "parser/c7.y"
                   { (yyval.expression) = create_float_expr((yyvsp[0].float_value)); }
#line 3384 "parser/parser.c"
    break;

  case 95: /* factor: ID  */
#line 380 "parser/c7.y"
                {
            (yyval.expression) = create_var_expr((yyvsp[0].int_value));
            set_id_type((yyvsp[0].int_value), ST_ID_VAR);
            global_scope = push_to_stack((yyvsp[0].int_value));
            set_scope((yyvsp[0].int_value), global_scope);
        }
#line 3395 "parser/parser.c"
    break;

  case 96: /* factor: PARENT_LEFT arith_expr PARENT_RIGHT  */
#line 386 "parser/c7.y"
                                                 { (yyval.expression) = (yyvsp[-1].expression); }
#line 3401 "parser/parser.c"
    break;


#line 3405 "parser/parser.c"

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

#line 389 "parser/c7.y"


void yyerror(const char *s) {
    printf("\nSyntaxError: %s in line %d, column %d.\n",
           s, parser_line, parser_column);
    parser_error += 1;
}
