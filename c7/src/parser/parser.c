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
  YYSYMBOL_CHAR = 17,                      /* CHAR  */
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
  YYSYMBOL_50_1 = 50,                      /* $@1  */
  YYSYMBOL_var_decl_stmt = 51,             /* var_decl_stmt  */
  YYSYMBOL_52_2 = 52,                      /* $@2  */
  YYSYMBOL_param_list = 53,                /* param_list  */
  YYSYMBOL_simple_param_list = 54,         /* simple_param_list  */
  YYSYMBOL_compound_block_stmt = 55,       /* compound_block_stmt  */
  YYSYMBOL_block_stmts = 56,               /* block_stmts  */
  YYSYMBOL_block_item = 57,                /* block_item  */
  YYSYMBOL_block_stmt = 58,                /* block_stmt  */
  YYSYMBOL_flow_control_if = 59,           /* flow_control_if  */
  YYSYMBOL_flow_control = 60,              /* flow_control  */
  YYSYMBOL_opt_param = 61,                 /* opt_param  */
  YYSYMBOL_for_expression = 62,            /* for_expression  */
  YYSYMBOL_decl_or_cond_expr = 63,         /* decl_or_cond_expr  */
  YYSYMBOL_or_cond_expr = 64,              /* or_cond_expr  */
  YYSYMBOL_and_cond_expr = 65,             /* and_cond_expr  */
  YYSYMBOL_unary_cond_expr = 66,           /* unary_cond_expr  */
  YYSYMBOL_eq_cond_expr = 67,              /* eq_cond_expr  */
  YYSYMBOL_equal_ops = 68,                 /* equal_ops  */
  YYSYMBOL_rel_cond_expr = 69,             /* rel_cond_expr  */
  YYSYMBOL_rel_cond_stmt = 70,             /* rel_cond_stmt  */
  YYSYMBOL_rel_ops = 71,                   /* rel_ops  */
  YYSYMBOL_set_expr = 72,                  /* set_expr  */
  YYSYMBOL_func_call = 73,                 /* func_call  */
  YYSYMBOL_set_func_call = 74,             /* set_func_call  */
  YYSYMBOL_simple_expr = 75,               /* simple_expr  */
  YYSYMBOL_func_cte_expr = 76,             /* func_cte_expr  */
  YYSYMBOL_func_expr = 77,                 /* func_expr  */
  YYSYMBOL_arith_expr = 78,                /* arith_expr  */
  YYSYMBOL_term = 79,                      /* term  */
  YYSYMBOL_factor = 80                     /* factor  */
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
#define YYLAST   5525

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  45
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  36
/* YYNRULES -- Number of rules.  */
#define YYNRULES  91
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  621

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
       0,    53,    53,    56,    57,    58,    61,    62,    65,    65,
      73,    73,    81,    86,    91,    96,    99,   100,   103,   106,
     111,   114,   117,   118,   121,   122,   123,   124,   125,   130,
     134,   138,   142,   146,   152,   158,   161,   165,   169,   173,
     179,   180,   183,   184,   189,   190,   196,   202,   206,   209,
     213,   216,   219,   222,   225,   228,   232,   238,   241,   244,
     245,   251,   252,   253,   257,   261,   267,   273,   279,   284,
     288,   292,   298,   299,   302,   306,   310,   315,   316,   317,
     320,   323,   326,   329,   332,   335,   336,   341,   342,   343,
     347,   348
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
  "MULT", "DIV", "COMMA", "ASSIGN", "NOT_OP", "L_OP", "G_OP", "CHAR",
  "READ", "WRITE", "WRITELN", "TYPE", "EMPTY", "STRING", "RETURN",
  "FORALL", "FOR", "IN", "IS_SET", "ADD_SET", "REMOVE", "EXISTS", "IF",
  "ELSE", "EQ_OP", "NE_OP", "LE_OP", "GE_OP", "OR_OP", "AND_OP", "INTEGER",
  "ID", "FLOAT", "UMINUS", "THEN", "$accept", "program", "stmts", "stmt",
  "func_stmt", "$@1", "var_decl_stmt", "$@2", "param_list",
  "simple_param_list", "compound_block_stmt", "block_stmts", "block_item",
  "block_stmt", "flow_control_if", "flow_control", "opt_param",
  "for_expression", "decl_or_cond_expr", "or_cond_expr", "and_cond_expr",
  "unary_cond_expr", "eq_cond_expr", "equal_ops", "rel_cond_expr",
  "rel_cond_stmt", "rel_ops", "set_expr", "func_call", "set_func_call",
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
     295,   296,   297,   298,   299
};
#endif

#define YYPACT_NINF (-238)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-92)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      18,    29,    41,   204,   214,   216,   297,    21,  -238,   355,
     416,    45,    73,   215,   457,    48,     9,    79,    83,   118,
     225,   488,   107,  2533,   507,   146,   147,   179,   121,   317,
     202,   203,   229,   268,   275,   277,   290,    62,  2565,  2597,
    2629,  2661,  2693,  1288,  2725,   223,   224,   116,   200,   674,
     674,   300,   674,   182,   307,   314,   326,  1304,  1643,  1724,
    1744,  1859,   328,   365,  2006,   580,  3470,  3528,   847,   161,
     284,   847,   847,   847,  3643,   818,   317,   524,  2757,  1288,
    1845,    94,    26,    70,    34,  3435,  3493,  1759,  2789,  2821,
     356,   369,   378,   380,   604,  3557,  2853,   359,   359,   182,
     182,   392,   395,  1375,   387,  3848,  1635,   129,   164,   226,
     425,   447,   460,   463,   134,   174,   470,   104,  3365,  1288,
    1288,   966,  1081,  1123,  1187,  3716,  3731,  3746,  3761,  1123,
     473,   474,   477,  3578,  3622,  3630,  3688,  3709,  3816,  3397,
     674,   450,  1564,  3425,  3454,  3570,   489,   490,   506,   515,
     526,  3585,  2885,   644,   106,   157,  4902,  4915,  2917,  2949,
    2981,  3013,   464,  1564,   287,  3397,   236,   316,   318,  3397,
     353,  3045,  3397,  3077,  3109,  3141,   536,   561,   617,   618,
     674,   247,   619,   630,   631,   634,  4366,  3653,  4379,  4413,
    4426,  4460,  4473,  4507,   674,  1143,   550,   640,   650,   666,
     673,   685,   694,  1446,  1290,  1608,  2060,  3079,   711,  3111,
     651,  3143,  3175,   560,   818,   674,  1433,   684,   691,   692,
     722,   723,   727,   734,   543,   806,   810,   863,   894,   713,
     908,   323,   928,   982,   674,  1834,  3672,  5408,   749,   750,
     754,   760,  4948,  4961,    10,    23,   274,  5414,  5447,  4994,
    5007,  5040,  5375,  5053,  5086,   674,  1895,   390,   397,   402,
     761,   766,   777,   778,  1710,   953,  1814,  1900,  2023,   407,
    2073,   361,  2105,  2138,   445,   445,   518,   518,   818,  3483,
     398,  3672,   705,  3173,   779,   786,   787,   755,   317,   798,
     802,    74,   769,  1027,  1940,  1288,  1979,   801,   805,   674,
    3806,   408,   449,   596,   804,   808,   820,   821,  1352,  1030,
    1693,  1983,  2568,   682,  2600,   736,  2632,  2664,   674,  3810,
    3701,   793,  4795,   823,   837,   845,   846,   741,  3861,  3943,
     508,   279,    19,    39,     8,  4829,  4842,  3956,  3990,  4003,
     456,  4037,  4050,  3614,  3205,  3237,   816,   847,   847,   847,
     855,   704,  4520,   822,   847,   847,   847,   818,   247,   247,
     856,   830,  3207,   825,   847,   847,   847,   818,  1143,  1143,
    3269,   531,   861,   968,  1006,   827,   847,   847,   847,   818,
     612,   612,  1433,  1433,   880,   976,  3896,  5099,   262,   850,
     847,   847,   847,  3672,  3776,  3776,  1216,  1216,  1834,  1834,
     886,  1071,  2171,   857,   847,   847,   847,   818,  1463,  1463,
    1895,  1895,  4554,  4567,  3239,  3271,   551,  3512,   298,  2024,
    3301,   858,   674,   674,   300,   893,   847,   161,   317,   131,
    2071,  2104,   901,  1085,  2696,   871,   847,   847,   847,   818,
    1708,  1708,  3806,  3806,   909,  1121,  3909,  4084,    82,   907,
     891,   847,   847,   847,   818,  3585,  3701,  3701,  3791,  3791,
    1947,  1947,  3810,  3810,   562,  3333,   916,   946,   947,   948,
    4601,  4614,   962,   963,   964,   967,   565,  4648,  4661,  3303,
    3335,   980,   983,   996,   997,   569,  3361,  3367,  3882,  1056,
    1061,   999,  1005,  1007,  1013,   570,  1097,  1195,  1257,  1347,
    5132,  5145,  1016,  1019,  1021,  1023,   492,  5453,  5486,  5178,
    5191,  5224,  5237,  2204,  2237,  1037,  1043,  1044,  1048,   584,
    2270,  2303,  2336,  2369,  5270,  2137,  1057,  1067,  1068,  1029,
    2170,  1072,  1635,  1077,  3365,  2728,  2760,  1079,  1083,  1092,
    1093,   621,  2792,  2824,  2856,  2888,  4097,  4131,  3585,  1095,
    1107,  1108,  1112,   632,   676,   119,   155,  4876,  4889,  4144,
    4178,  4191,  4225,  3930,  3977,  4024,  4071,  4695,  4708,  4742,
    4755,  4789,  3393,  3399,  3434,  3492,  3550,  1470,  1499,  1555,
    1599,  1619,  5283,  5316,  5329,  5362,  2402,  2435,  2468,  2501,
    2534,  1080,  1118,  1119,  2203,  3365,  3541,  2236,  2269,  2920,
    2952,  2984,  3016,  3048,   681,  4238,  4272,  4285,  4319,  4332,
    2302,  2335,  2368,  2401,  3365,   686,  3365,  2434,  3365,  2467,
    2500
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
       0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -238,  -238,  -238,  1009,  -238,  -238,     0,   -39,  -238,  -207,
     -17,  -166,    16,  -116,  -113,   -74,   -83,   -77,  -137,   -32,
      11,   -27,    -5,  -228,    54,   -24,  -237,  1452,   -16,   486,
     544,  1639,  1091,  1492,  1302,   881
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,     4,     5,    11,    38,    12,    16,   114,
      39,    40,    41,    42,    43,    44,   106,   107,   108,   109,
     244,   245,   246,   123,   247,   248,   129,   101,   227,   228,
     102,   229,   230,   231,   232,   233
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       6,    21,   294,     6,    45,   295,   330,   371,   167,   345,
     395,    81,   213,    60,   -52,    18,    83,   -48,   394,    86,
     -52,    19,   -48,   143,    45,   -48,    -8,   189,   -10,   280,
     -50,   -48,   -48,   206,   206,   -50,   206,    60,    84,     1,
     -52,     8,   121,   122,   296,   -50,   -52,   -52,   -48,   393,
      13,   -50,   117,   249,    82,    86,    78,   -48,   457,   267,
      60,   -50,   -50,   189,   -48,   120,   166,    75,   121,   122,
       7,   416,   -52,   -52,    84,    76,   -50,   -50,   -50,    75,
      14,    60,    60,    60,    60,   -13,    20,   428,   -51,    17,
     249,   -13,    83,   155,   -51,    86,    86,    85,   459,    86,
     118,   293,   297,   189,   189,   157,   458,   189,   -50,   -50,
     -51,   331,   -47,   189,    84,    84,   333,   420,   292,   336,
     -51,   -51,   -12,    45,   206,   -47,   311,   337,   -12,   249,
     154,   -47,   119,    85,   153,   267,   144,   534,   334,    22,
     150,   145,   -51,   -51,   -47,   120,   151,   311,    47,    45,
     476,    48,    49,    45,   332,   161,    45,   -47,   457,    45,
     485,   -49,    51,   -49,   206,   189,   234,   -49,   103,   119,
     235,   -42,   495,    85,    85,   236,   -42,   156,   206,   206,
     -16,   171,   104,   237,    50,   173,   -16,    52,   174,   238,
     239,   240,   241,   -49,   -49,   -49,   -49,   335,   267,   206,
     519,   242,   105,   243,    -2,     9,   464,    68,    69,   388,
     176,   177,   178,   179,    -5,    -5,    -6,    -6,   206,   249,
     249,   -14,    57,    58,    59,     1,    23,   -14,   175,    24,
      88,    89,   541,   -44,    70,    -5,    15,    -6,   -44,   206,
     267,    90,   172,    25,    26,    27,    28,   553,   343,    29,
      30,    31,   180,    32,    33,    34,    35,    36,   189,   189,
     206,   206,   267,   429,   281,   249,    37,    45,    83,   -51,
     395,    86,    60,    71,   -51,   182,   183,   184,   185,   189,
      72,   -52,    73,   206,   311,   -44,   -52,   186,   187,   188,
      84,   -44,   418,   448,   -46,    74,   336,    -7,    -7,   -46,
     -51,   -51,   206,   337,   337,   -47,    82,   -10,   121,   122,
     -47,   331,   -52,   -52,   -76,   334,   333,   456,    -7,   336,
     459,   -74,    52,   -43,   -15,   110,    53,   337,   -43,    45,
     -15,   380,   381,   -75,    54,    96,   -47,   393,   334,    55,
      56,   267,   189,   189,   532,   176,   177,   178,   179,    85,
     -72,   267,   206,   206,   332,    -4,    -4,    57,    58,    59,
     -45,    78,   130,   267,    52,   -45,   506,   -72,    53,   408,
     409,   508,   -73,   -72,   335,   131,    -4,   249,   249,   249,
     249,   249,   249,   249,   132,   529,   133,   176,   177,   178,
     179,   267,   267,   267,   267,   267,   -76,   335,   139,    57,
      58,    59,   -76,   -74,    45,   417,   206,   206,   -75,   -74,
     145,   249,    60,   -73,   -75,   -76,    -3,    -3,   294,   -73,
     -76,   295,   140,   267,   311,   311,   311,   311,   141,   333,
     556,   146,   336,   336,   336,   558,    78,    -3,   267,   267,
     337,   337,   337,   337,   337,   337,   337,   337,   507,   596,
     180,   334,   334,   147,   181,   280,   -74,   -11,   -11,   330,
     296,   -74,   -59,   163,   460,   461,   148,   555,   -59,   149,
     -66,   -59,   -59,   182,   183,   184,   185,   152,   -11,   294,
     158,   159,   295,   -59,   160,   186,   187,   188,    -9,    -9,
     -59,   -59,   -59,   -59,   -59,   -59,   -68,   -69,   294,   -49,
     294,   295,   294,   295,   -49,   295,    46,   -19,   -19,    -9,
     335,   335,   557,   -70,   -42,    61,   249,   293,   297,   615,
     -42,   296,   -71,   194,   -18,   -18,    46,   195,   -19,   190,
     -49,   -49,   267,   -67,   292,   207,   207,   488,   207,    61,
     296,   346,   296,   151,   296,   -18,   199,   200,   201,   202,
     598,   -87,   -87,   -87,   -87,   250,   -76,   524,   203,   204,
     205,   268,    61,   151,   331,   190,   347,   370,   -43,   333,
     -87,   571,   336,    62,   -43,   576,   581,   151,   293,   297,
     337,   151,   151,    61,    61,    61,    61,   -72,    97,    98,
     590,   334,   250,    91,    92,   292,   151,   293,   297,   293,
     297,   293,   297,   -75,   298,   190,   190,   332,   -75,   190,
     134,   613,   276,   277,   292,   190,   292,   215,   292,   115,
     116,   216,   348,   349,   353,    46,   207,   603,   312,   338,
     617,   250,   619,   151,   620,   354,   355,   268,   609,   356,
     220,   221,   222,   223,   151,   -35,   -74,   -35,   -35,   312,
     335,    46,   224,   225,   226,    46,   -75,   -72,    46,   276,
     277,    46,   -35,   -35,   -35,   -35,   207,   190,   -35,   -35,
     -35,   363,   -35,   -35,   -35,   -35,   -35,   169,   364,   194,
     207,   207,   -46,   195,   162,   -35,   164,   -45,   -46,   -73,
     365,   196,   618,   -45,   -73,   168,   197,   198,   343,   366,
     268,   207,   199,   200,   201,   202,   -33,   170,   -33,   -33,
     471,   -76,   276,   277,   203,   204,   205,   -73,   -74,   -75,
     207,   250,   250,   -33,   -33,   -33,   -33,   375,   376,   -33,
     -33,   -33,   377,   -33,   -33,   -33,   -33,   -33,   -33,   378,
     -73,   207,   268,   -72,   440,   441,   -33,   -87,   -72,   -87,
     -87,   -87,   -87,   -87,   389,   390,   -87,   -87,   115,   391,
     190,   190,   207,   207,   268,   392,   403,   250,   -87,    46,
     -22,   404,   -22,   -22,    61,   -87,   -87,   -87,   -87,   -87,
     -87,   190,   405,   406,   421,   207,   312,   -22,   -22,   -22,
     -22,   422,   423,   -22,   -22,   -22,   424,   -22,   -22,   -22,
     -22,   -22,   -22,   426,   207,   338,   338,   427,   430,   435,
     -22,   379,   431,   436,   -89,   -89,   -89,   -89,   -88,   -88,
     -88,   -88,   115,   255,   -17,   437,   438,   256,   450,   338,
     -17,    46,   425,   -89,   449,   257,   480,   -88,   276,   277,
     258,   259,   451,   268,   190,   190,   260,   261,   262,   263,
     452,   453,   215,   268,   207,   207,   216,   466,   264,   265,
     266,   470,   479,   472,   217,   268,   481,   489,   491,   218,
     219,   -77,   -77,   -77,   -77,   220,   221,   222,   223,   250,
     250,   250,   250,   250,   250,   250,   500,   224,   225,   226,
     -77,   502,   513,   268,   268,   268,   268,   268,   515,   526,
     530,   115,   -78,   -78,   -78,   -78,    46,   535,   207,   207,
      67,   115,   537,   250,    61,   546,   -91,   -91,   -91,   -91,
     548,   -78,   563,   115,   193,   268,   312,   312,   312,   312,
     212,   212,   549,   212,    95,   -91,   -82,   -82,   382,   383,
     268,   268,   338,   338,   338,   338,   338,   338,   338,   338,
     254,   115,   564,   565,   566,   -82,   273,    67,   407,   -89,
     193,   -89,   -89,   -89,   -89,   -89,   527,   528,   567,   568,
     569,   -55,   533,   570,   490,   -55,   276,   277,    67,    67,
     137,   138,   501,   115,   276,   277,   572,   254,   -55,   573,
     -85,   -85,   -85,   -85,   -55,   -55,   -55,   -55,   115,   554,
     193,   193,   574,   575,   193,   577,   -55,   -55,   -55,   -85,
     193,   578,    10,   579,   -86,   -86,   -86,   -86,   250,   580,
     298,   212,   582,   317,   342,   583,   254,   584,   -24,   585,
     -24,   -24,   273,   -86,   268,   439,   594,   -89,   -89,   -89,
     -89,   -89,   -89,   586,   317,   -24,   -24,   -24,   -24,   587,
     588,   -24,   -24,   -24,   589,   -24,   -24,   -24,   -24,   -24,
     -24,   212,   352,   591,   -79,   -79,   -79,   -79,   -24,   -90,
     -90,   -90,   -90,   592,   593,   212,   362,   514,   595,   276,
     277,   298,   338,   -79,   597,   599,   -56,   610,   -90,   600,
     -56,   536,   604,   276,   277,   273,   212,   374,   601,   602,
     298,   605,   298,   -56,   298,   -80,   -80,   382,   383,   -56,
     -56,   -56,   -56,   606,   607,   212,   387,   254,   608,     0,
      64,   -56,   -56,   -56,   -80,   611,   612,   547,   180,   276,
     277,     0,   181,     0,   191,     0,   212,   402,     0,     0,
     209,   209,     0,   209,    64,    80,     0,     0,   194,     0,
       0,   182,   183,   184,   185,   193,   193,   212,   212,   273,
     251,     0,   254,   186,   187,   188,   270,    64,     0,    67,
     191,   199,   200,   201,   202,     0,   193,     0,     0,     0,
     212,   434,     0,   203,   204,   205,     0,     0,    64,    64,
      64,    64,   -61,     0,     0,     0,   -61,   251,     0,   212,
     447,   342,     0,   -81,   -81,   382,   383,     0,     0,   -61,
     191,   191,     0,     0,   191,   -61,   -61,   -61,   -61,     0,
     191,   234,   -81,     0,   342,   235,     0,   -61,   -61,   -61,
       0,   209,     0,   314,   339,     0,   251,     0,   273,   477,
     478,     0,   270,     0,   238,   239,   240,   241,   273,   486,
     487,     0,     0,     0,   314,     0,   242,   386,   243,     0,
     273,     0,     0,   498,   499,   -83,   -83,   -83,   -83,     0,
       0,   209,   191,     0,   254,   254,   254,   254,   254,   511,
     512,     0,     0,     0,   -83,   209,   209,     0,   273,   273,
     273,   522,   523,   180,     0,   367,   -89,   181,   -89,   -89,
     -89,   -89,    79,   212,   212,   270,   209,     0,   254,    67,
      80,   -87,   -87,   -87,   -87,   -87,   182,   183,   184,   185,
     273,   317,   317,   544,   545,   209,   251,   251,   186,   187,
     188,    66,     0,     0,     0,   273,   273,   342,   342,   342,
     342,   342,   342,   561,   562,   192,   209,   270,     0,     0,
       0,   211,   211,     0,   211,   -84,   -84,   -84,   -84,   -87,
     -87,   -87,   -87,   -87,   -87,   191,   191,   209,   209,   270,
       0,   253,   251,     0,   -84,     0,     0,   272,    66,    64,
     -40,   192,   -40,     0,   -40,     0,   191,     0,     0,   -40,
     209,   314,     0,     0,     0,     0,   -40,   -40,     0,   135,
     136,     0,     0,   -40,   -40,   -40,   -40,     0,   253,   209,
     339,   339,     0,   254,     0,   -40,   -40,   -40,     0,     0,
       0,   192,   192,     0,     0,   192,     0,     0,     0,   273,
       0,   192,     0,     0,   339,     0,     0,     0,   215,     0,
       0,     0,   211,     0,   316,   341,     0,   253,   270,   191,
     191,     0,   -87,   272,   -87,   -87,   -87,   -87,   270,   209,
     209,   220,   221,   222,   223,   316,     0,     0,   255,     0,
     270,     0,   256,   224,   225,   226,     0,   342,   -68,   -68,
     -68,   -68,   211,     0,   251,   251,   251,   251,   251,   251,
     251,   260,   261,   262,   263,     0,   211,   -68,   270,   270,
     270,   270,   270,   264,   265,   266,     0,   -69,   -69,   -69,
     -69,     0,     0,   209,   209,     0,   272,   211,   251,    64,
       0,    65,     0,   111,   112,   113,   -69,     0,     0,     0,
     270,   314,   314,   314,   314,    87,   211,     0,   253,     0,
       0,   210,   210,     0,    94,   270,   270,   339,   339,   339,
     339,   339,   339,   339,   339,     0,     0,   211,     0,     0,
       0,   252,     0,   -70,   -70,   -70,   -70,   271,    65,   299,
       0,    87,     0,   300,     0,     0,   412,   413,   414,   415,
     272,   301,   -70,   253,     0,     0,   302,   303,     0,     0,
      66,     0,   304,   305,   306,   307,     0,   192,   252,     0,
       0,   211,     0,     0,   308,   309,   310,   -71,   -71,   -71,
     -71,    87,    87,     0,   -88,    87,   -88,   -88,   -88,   -88,
     211,    87,   341,   251,     0,     0,   -71,   -67,   -67,   -67,
     -67,     0,   210,     0,   315,   340,     0,   252,     0,   270,
     234,     0,   279,   271,   235,   341,   -67,     0,   214,   236,
     -89,   -89,   -89,   -89,   -89,   315,   104,   237,     0,   272,
       0,     0,     0,   238,   239,   240,   241,     0,    63,   272,
       0,     0,   351,     0,     0,   242,   105,   243,     0,     0,
       0,   272,   496,   497,     0,     0,   361,   339,   208,   208,
       0,    93,     0,     0,     0,   253,   253,   253,   509,   510,
     -88,   -88,   -88,   -88,   -88,   -88,   271,   373,     0,   272,
     520,   521,     0,   299,   269,    63,   -87,   300,   -87,   -87,
     -87,   -87,   -87,     0,   211,   211,   385,     0,   252,   253,
      66,   -88,   -88,   -88,   -88,   -88,   304,   305,   306,   307,
       0,   272,   542,   543,     0,     0,     0,   401,   308,   309,
     310,   -77,   -77,   -77,   -77,   -77,   272,   272,   341,   341,
     341,   341,   559,   560,     0,   -59,     0,   274,   275,     0,
     271,     0,     0,   252,   -59,   -59,     0,     0,     0,   208,
      65,   313,     0,     0,     0,     0,   -59,    87,     0,     0,
     269,   433,     0,   -59,   -59,   -59,   -59,   -59,   -59,   467,
     468,   469,   313,     0,     0,     0,   473,   474,   475,     0,
     445,     0,   340,     0,     0,     0,   482,   483,   484,   350,
     -88,     0,   -88,   -88,   -88,   -88,   -88,     0,   492,   493,
     494,     0,     0,   360,   253,   340,     0,     0,     0,   234,
       0,     0,   503,   504,   505,     0,     0,     0,     0,   271,
     272,   -60,     0,   269,   372,     0,   516,   517,   518,   271,
     -60,   -60,   238,   239,   240,   241,   -78,   -78,   -78,   -78,
     -78,   271,   -60,   384,   242,   386,   243,     0,   531,   -60,
     -60,   -60,   -60,   -60,   -60,   252,   252,   252,   538,   539,
     540,     0,     0,     0,   400,     0,     0,     0,   341,   271,
     255,     0,     0,   550,   551,   552,   -77,     0,   -77,   -77,
     -77,   -77,   -77,     0,   210,   210,     0,   269,     0,   252,
      65,     0,     0,   260,   261,   262,   263,    63,     0,     0,
       0,   271,     0,     0,     0,   264,   265,   266,   432,     0,
       0,   -23,     0,   -23,   -23,     0,   271,   271,   340,   340,
     340,   340,   318,     0,     0,     0,   319,   444,   -23,   -23,
     -23,   -23,     0,     0,   -23,   -23,   -23,     0,   -23,   -23,
     -23,   -23,   -23,   -23,     0,   323,   324,   325,   326,     0,
     -27,   -23,   -27,   -27,     0,     0,     0,   327,   446,   329,
     -77,   -77,   -77,   -77,   -77,   -77,   269,   -27,   -27,   -27,
     -27,     0,     0,   -27,   -27,   -27,   269,   -27,   -27,   -27,
     -27,   -27,   -27,   -91,   -91,   -91,   -91,   -91,   269,     0,
     -27,     0,     0,     0,   252,   -19,     0,   -19,   -19,   -78,
       0,   -78,   -78,   -78,   -78,   -78,     0,     0,     0,     0,
     271,     0,   -19,   -19,   -19,   -19,   269,     0,   -19,   -19,
     -19,     0,   -19,   -19,   -19,   -19,   -19,   -19,     0,     0,
       0,   208,   208,     0,     0,   -19,   -77,    63,   -77,   -77,
     -77,   -77,   -25,     0,   -25,   -25,     0,     0,   269,   -91,
       0,   -91,   -91,   -91,   -91,   -91,     0,     0,   340,   -25,
     -25,   -25,   -25,   269,   269,   -25,   -25,   -25,     0,   -25,
     -25,   -25,   -25,   -25,   -25,   -26,     0,   -26,   -26,     0,
       0,   -82,   -25,   -82,   -82,   410,   411,   -82,     0,     0,
       0,     0,   -26,   -26,   -26,   -26,     0,     0,   -26,   -26,
     -26,     0,   -26,   -26,   -26,   -26,   -26,   -26,   -18,     0,
     -18,   -18,     0,     0,   -85,   -26,   -85,   -85,   -85,   -85,
     -85,     0,     0,     0,     0,   -18,   -18,   -18,   -18,     0,
       0,   -18,   -18,   -18,     0,   -18,   -18,   -18,   -18,   -18,
     -18,   -32,     0,   -32,   -32,     0,     0,   -86,   -18,   -86,
     -86,   -86,   -86,   -86,     0,     0,     0,   269,   -32,   -32,
     -32,   -32,     0,     0,   -32,   -32,   -32,     0,   -32,   -32,
     -32,   -32,   -32,   -32,   -11,     0,   -11,   -11,     0,     0,
     -79,   -32,   -79,   -79,   -79,   -79,   -79,     0,     0,     0,
       0,   -11,   -11,   -11,   -11,     0,     0,   -11,   -11,   -11,
       0,   -11,   -11,   -11,   -11,   -11,   -11,   -31,     0,   -31,
     -31,     0,     0,   -90,   -11,   -90,   -90,   -90,   -90,   -90,
       0,     0,     0,     0,   -31,   -31,   -31,   -31,     0,     0,
     -31,   -31,   -31,     0,   -31,   -31,   -31,   -31,   -31,   -31,
     -35,     0,   -35,   -35,     0,     0,   -80,   -31,   -80,   -80,
     410,   411,   -80,     0,     0,     0,     0,   -35,   -35,   -35,
     -35,     0,     0,   -35,   -35,   -35,     0,   -35,   -35,   -35,
     -35,   -35,   616,   -28,     0,   -28,   -28,     0,     0,   -81,
     -35,   -81,   -81,   410,   411,   -81,     0,     0,     0,     0,
     -28,   -28,   -28,   -28,     0,     0,   -28,   -28,   -28,     0,
     -28,   -28,   -28,   -28,   -28,   -28,   -29,     0,   -29,   -29,
       0,     0,   -83,   -28,   -83,   -83,   -83,   -83,   -83,     0,
       0,     0,     0,   -29,   -29,   -29,   -29,     0,     0,   -29,
     -29,   -29,     0,   -29,   -29,   -29,   -29,   -29,   -29,   -30,
       0,   -30,   -30,     0,     0,   -84,   -29,   -84,   -84,   -84,
     -84,   -84,     0,     0,     0,     0,   -30,   -30,   -30,   -30,
       0,     0,   -30,   -30,   -30,     0,   -30,   -30,   -30,   -30,
     -30,   -30,   -37,     0,   -37,   -37,     0,     0,   -68,   -30,
     -68,   -68,   -68,   -68,   -68,     0,     0,     0,     0,   -37,
     -37,   -37,   -37,     0,     0,   -37,   -37,   -37,     0,   -37,
     -37,   -37,   -37,   -37,   -37,   -38,     0,   -38,   -38,     0,
       0,   -69,   -37,   -69,   -69,   -69,   -69,   -69,     0,     0,
       0,     0,   -38,   -38,   -38,   -38,     0,     0,   -38,   -38,
     -38,     0,   -38,   -38,   -38,   -38,   -38,   -38,   -36,     0,
     -36,   -36,     0,     0,   -70,   -38,   -70,   -70,   -70,   -70,
     -70,     0,     0,     0,     0,   -36,   -36,   -36,   -36,     0,
       0,   -36,   -36,   -36,     0,   -36,   -36,   -36,   -36,   -36,
     -36,   -39,     0,   -39,   -39,     0,     0,   -71,   -36,   -71,
     -71,   -71,   -71,   -71,     0,     0,     0,     0,   -39,   -39,
     -39,   -39,     0,     0,   -39,   -39,   -39,     0,   -39,   -39,
     -39,   -39,   -39,   -39,   -33,     0,   -33,   -33,     0,     0,
     -67,   -39,   -67,   -67,   -67,   -67,   -67,     0,     0,     0,
       0,   -33,   -33,   -33,   -33,     0,     0,   -33,   -33,   -33,
       0,   -33,   -33,   -33,   -33,   -33,   -22,     0,   -22,   -22,
       0,     0,     0,     0,   -33,   -78,   -78,   -78,   -78,   -78,
     -78,     0,     0,   -22,   -22,   -22,   -22,     0,     0,   -22,
     -22,   -22,     0,   -22,   -22,   -22,   -22,   -22,   -24,     0,
     -24,   -24,     0,     0,     0,     0,   -22,   -91,   -91,   -91,
     -91,   -91,   -91,     0,     0,   -24,   -24,   -24,   -24,     0,
       0,   -24,   -24,   -24,     0,   -24,   -24,   -24,   -24,   -24,
      23,     0,   175,    77,     0,     0,     0,     0,   -24,   -82,
     -82,   -82,   442,   443,   -82,     0,     0,    25,    26,    27,
      28,     0,     0,    29,    30,    31,     0,    32,    33,    34,
      35,    36,   -21,     0,   -21,   -21,     0,     0,     0,     0,
      37,   -85,   -85,   -85,   -85,   -85,   -85,     0,     0,   -21,
     -21,   -21,   -21,     0,     0,   -21,   -21,   -21,     0,   -21,
     -21,   -21,   -21,   -21,   -23,     0,   -23,   -23,     0,     0,
       0,     0,   -21,   -86,   -86,   -86,   -86,   -86,   -86,     0,
       0,   -23,   -23,   -23,   -23,     0,     0,   -23,   -23,   -23,
       0,   -23,   -23,   -23,   -23,   -23,   -27,     0,   -27,   -27,
       0,     0,     0,     0,   -23,   -79,   -79,   -79,   -79,   -79,
     -79,     0,     0,   -27,   -27,   -27,   -27,     0,     0,   -27,
     -27,   -27,     0,   -27,   -27,   -27,   -27,   -27,   -20,     0,
     -20,   -20,     0,     0,     0,     0,   -27,   -90,   -90,   -90,
     -90,   -90,   -90,     0,     0,   -20,   -20,   -20,   -20,     0,
       0,   -20,   -20,   -20,     0,   -20,   -20,   -20,   -20,   -20,
     -25,     0,   -25,   -25,     0,     0,     0,     0,   -20,   -80,
     -80,   -80,   442,   443,   -80,     0,     0,   -25,   -25,   -25,
     -25,     0,     0,   -25,   -25,   -25,     0,   -25,   -25,   -25,
     -25,   -25,   -26,     0,   -26,   -26,     0,     0,     0,     0,
     -25,   -81,   -81,   -81,   442,   443,   -81,     0,     0,   -26,
     -26,   -26,   -26,     0,     0,   -26,   -26,   -26,     0,   -26,
     -26,   -26,   -26,   -26,   -32,     0,   -32,   -32,     0,     0,
       0,     0,   -26,   -83,   -83,   -83,   -83,   -83,   -83,     0,
       0,   -32,   -32,   -32,   -32,     0,     0,   -32,   -32,   -32,
       0,   -32,   -32,   -32,   -32,   -32,   -31,     0,   -31,   -31,
       0,     0,     0,     0,   -32,   -84,   -84,   -84,   -84,   -84,
     -84,     0,     0,   -31,   -31,   -31,   -31,     0,     0,   -31,
     -31,   -31,     0,   -31,   -31,   -31,   -31,   -31,   -28,     0,
     -28,   -28,     0,     0,     0,     0,   -31,   -68,   -68,   -68,
     -68,   -68,   -68,     0,     0,   -28,   -28,   -28,   -28,     0,
       0,   -28,   -28,   -28,     0,   -28,   -28,   -28,   -28,   -28,
     -29,     0,   -29,   -29,     0,     0,     0,     0,   -28,   -69,
     -69,   -69,   -69,   -69,   -69,     0,     0,   -29,   -29,   -29,
     -29,     0,     0,   -29,   -29,   -29,     0,   -29,   -29,   -29,
     -29,   -29,   -30,     0,   -30,   -30,     0,     0,     0,     0,
     -29,   -70,   -70,   -70,   -70,   -70,   -70,     0,     0,   -30,
     -30,   -30,   -30,     0,     0,   -30,   -30,   -30,     0,   -30,
     -30,   -30,   -30,   -30,   -37,     0,   -37,   -37,     0,     0,
       0,     0,   -30,   -71,   -71,   -71,   -71,   -71,   -71,     0,
       0,   -37,   -37,   -37,   -37,     0,     0,   -37,   -37,   -37,
       0,   -37,   -37,   -37,   -37,   -37,   -38,     0,   -38,   -38,
       0,     0,     0,     0,   -37,   -67,   -67,   -67,   -67,   -67,
     -67,     0,     0,   -38,   -38,   -38,   -38,     0,     0,   -38,
     -38,   -38,     0,   -38,   -38,   -38,   -38,   -38,   -36,     0,
     -36,   -36,     0,     0,     0,   -78,   -38,   -78,   -78,   -78,
     -78,     0,     0,     0,     0,   -36,   -36,   -36,   -36,     0,
       0,   -36,   -36,   -36,     0,   -36,   -36,   -36,   -36,   -36,
     -39,     0,   -39,   -39,     0,     0,     0,   -91,   -36,   -91,
     -91,   -91,   -91,     0,     0,     0,     0,   -39,   -39,   -39,
     -39,     0,     0,   -39,   -39,   -39,     0,   -39,   -39,   -39,
     -39,   -39,    23,     0,   175,   344,     0,     0,     0,   -82,
     -39,   -82,   -82,   368,   369,     0,     0,     0,     0,    25,
      26,    27,    28,     0,     0,    29,    30,    31,     0,    32,
      33,    34,    35,    36,    23,     0,   175,   419,     0,     0,
       0,   -85,    37,   -85,   -85,   -85,   -85,     0,     0,     0,
       0,    25,    26,    27,    28,     0,     0,    29,    30,    31,
       0,    32,    33,    34,    35,    36,   -19,     0,   -19,   -19,
       0,     0,     0,   -86,    37,   -86,   -86,   -86,   -86,     0,
       0,     0,     0,   -19,   -19,   -19,   -19,     0,     0,   -19,
     -19,   -19,     0,   -19,   -19,   -19,   -19,   -19,    23,     0,
     175,   465,     0,     0,     0,   -80,   -19,   -80,   -80,   368,
     369,     0,     0,     0,     0,    25,    26,    27,    28,     0,
       0,    29,    30,    31,     0,    32,    33,    34,    35,    36,
     -11,     0,   -11,   -11,     0,     0,     0,   -81,    37,   -81,
     -81,   368,   369,     0,     0,     0,     0,   -11,   -11,   -11,
     -11,     0,     0,   -11,   -11,   -11,     0,   -11,   -11,   -11,
     -11,   -11,    23,     0,   175,   525,     0,     0,     0,   -79,
     -11,   -79,   -79,   -79,   -79,     0,     0,     0,     0,    25,
      26,    27,    28,     0,     0,    29,    30,    31,     0,    32,
      33,    34,    35,    36,   -18,     0,   -18,   -18,     0,     0,
       0,   -90,    37,   -90,   -90,   -90,   -90,     0,     0,     0,
       0,   -18,   -18,   -18,   -18,     0,     0,   -18,   -18,   -18,
       0,   -18,   -18,   -18,   -18,   -18,   282,   -83,   283,   -83,
     -83,   -83,   -83,   -84,   -18,   -84,   -84,   -84,   -84,     0,
       0,     0,     0,   284,   285,   286,   287,     0,     0,   288,
     289,   290,     0,    32,    33,    34,    35,    36,    23,   -68,
     175,   -68,   -68,   -68,   -68,   -69,   291,   -69,   -69,   -69,
     -69,     0,     0,     0,     0,    25,    26,    27,    28,     0,
       0,    29,    30,    31,     0,    32,    33,    34,    35,    36,
     318,   165,     0,     0,   319,     0,     0,     0,    37,   320,
     -70,   -54,   -70,   -70,   -70,   -70,   321,   322,     0,     0,
     124,   125,     0,   323,   324,   325,   326,     0,     0,   -41,
       0,   -41,   126,   -41,     0,   327,   328,   329,   -41,   -54,
     -54,   127,   128,   -54,   -54,   -41,   -41,   -82,   -82,   -82,
      99,   100,   -41,   -41,   -41,   -41,     0,     0,   -40,   -40,
       0,     0,   -40,     0,   -41,   -41,   -41,   -40,   -71,   -58,
     -71,   -71,   -71,   -71,   -40,   -40,     0,     0,   -58,   -58,
       0,   -40,   -40,   -40,   -40,     0,     0,   -41,   -41,     0,
     -58,   -41,     0,   -40,   -40,   -40,   -41,   -58,   -58,   -58,
     -58,   -58,   -58,   -41,   -41,   -85,   -85,   -85,   -85,   -85,
     -41,   -41,   -41,   -41,     0,     0,   318,   614,     0,     0,
     319,     0,   -41,   -41,   -41,   320,   -67,     0,   -67,   -67,
     -67,   -67,   321,   322,   -86,   -86,   -86,   -86,   -86,   323,
     324,   325,   326,     0,     0,   234,     0,     0,     0,   235,
       0,   327,   328,   329,   236,   -79,   -79,   -79,   -79,   -79,
     255,   104,   237,     0,   256,     0,     0,     0,   238,   239,
     240,   241,   257,     0,     0,     0,     0,   258,   259,     0,
     242,   105,   243,   260,   261,   262,   263,     0,     0,   318,
       0,     0,     0,   319,     0,   264,   265,   266,   320,   -90,
     -90,   -90,   -90,   -90,     0,   321,   322,   -80,   -80,   -80,
      99,   100,   323,   324,   325,   326,     0,     0,   -34,     0,
       0,     0,   -34,     0,   327,   328,   329,   -34,   357,   -89,
       0,   -89,   -89,   -89,   -89,   -34,     0,     0,   -89,   -89,
       0,   -34,   -34,   -34,   -34,     0,     0,   234,     0,     0,
     -89,   235,     0,   -34,   -34,   -34,   236,   -89,   -89,   -89,
     -89,   -89,   -89,     0,   237,   -81,   -81,   -81,    99,   100,
     238,   239,   240,   241,     0,     0,   318,     0,     0,     0,
     319,     0,   242,   386,   243,   320,   -83,   -83,   -83,   -83,
     -83,   -62,     0,   322,     0,   -62,     0,     0,     0,   323,
     324,   325,   326,     0,     0,     0,   -65,     0,   -62,     0,
     -65,   327,   446,   329,   -62,   -62,   -62,   -62,     0,     0,
       0,   -63,     0,   -65,     0,   -63,   -62,   -62,   -62,   -65,
     -65,   -65,   -65,     0,     0,     0,   -64,     0,   -63,     0,
     -64,   -65,   -65,   -65,   -63,   -63,   -63,   -63,     0,     0,
       0,   234,     0,   -64,     0,   235,   -63,   -63,   -63,   -64,
     -64,   -64,   -64,     0,     0,     0,   318,     0,   237,     0,
     319,   -64,   -64,   -64,   238,   239,   240,   241,     0,     0,
       0,   299,     0,   322,     0,   318,   242,   386,   243,   323,
     324,   325,   326,   -84,   -84,   -84,   -84,   -84,     0,     0,
       0,   327,   446,   329,   304,   305,   306,   307,   323,   324,
     325,   326,     0,     0,     0,     0,   308,   309,   310,     0,
     327,   446,   329,   278,     0,   -89,   -89,   -89,   -89,   -89,
     -89,   142,     0,   -89,   -89,     0,   454,   -89,     0,   -89,
     -89,   -89,   -89,   -89,   455,   -89,   -89,   -89,     0,     0,
       0,     0,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -67,
     -67,   -67,   -67,   -67,     0,   -89,   -89,   -89,   -89,   -89,
     -89,   278,     0,   -89,   -89,   -89,   -89,   -89,   -89,     0,
       0,   -89,   -89,     0,   454,   -89,     0,   -89,   -89,   -89,
     -89,   -89,     0,   -89,   -89,   -89,     0,     0,     0,     0,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -68,   -68,   -68,
     -68,   -68,     0,   -89,   -89,   -89,   -89,   -89,   -89,   -88,
       0,   -88,   -88,   -88,   -88,   -88,     0,     0,   -88,   -88,
       0,     0,   -77,     0,   -77,   -77,   -77,   -77,   -77,     0,
     -88,   -77,   -77,     0,     0,     0,     0,   -88,   -88,   -88,
     -88,   -88,   -88,   -77,   -69,   -69,   -69,   -69,   -69,     0,
     -77,   -77,   -77,   -77,   -77,   -77,   -78,     0,   -78,   -78,
     -78,   -78,   -78,     0,     0,   -78,   -78,     0,     0,   -91,
       0,   -91,   -91,   -91,   -91,   -91,     0,   -78,   -91,   -91,
       0,     0,     0,     0,   -78,   -78,   -78,   -78,   -78,   -78,
     -91,   -70,   -70,   -70,   -70,   -70,     0,   -91,   -91,   -91,
     -91,   -91,   -91,   -82,     0,   -82,   -82,   462,   463,   -82,
       0,     0,   -82,   -82,     0,     0,   -85,     0,   -85,   -85,
     -85,   -85,   -85,     0,   -82,   -85,   -85,     0,     0,     0,
       0,   -82,   -82,   -82,   -82,   -82,   -82,   -85,   -71,   -71,
     -71,   -71,   -71,     0,   -85,   -85,   -85,   -85,   -85,   -85,
     -86,     0,   -86,   -86,   -86,   -86,   -86,     0,     0,   -86,
     -86,     0,     0,   -79,     0,   -79,   -79,   -79,   -79,   -79,
       0,   -86,   -79,   -79,     0,     0,     0,     0,   -86,   -86,
     -86,   -86,   -86,   -86,   -79,     0,     0,     0,     0,     0,
       0,   -79,   -79,   -79,   -79,   -79,   -79,   -90,     0,   -90,
     -90,   -90,   -90,   -90,     0,     0,   -90,   -90,     0,     0,
     -80,     0,   -80,   -80,   462,   463,   -80,     0,   -90,   -80,
     -80,     0,     0,     0,     0,   -90,   -90,   -90,   -90,   -90,
     -90,   -80,     0,     0,     0,     0,     0,     0,   -80,   -80,
     -80,   -80,   -80,   -80,   -81,     0,   -81,   -81,   462,   463,
     -81,     0,     0,   -81,   -81,     0,     0,   -83,     0,   -83,
     -83,   -83,   -83,   -83,     0,   -81,   -83,   -83,     0,     0,
       0,     0,   -81,   -81,   -81,   -81,   -81,   -81,   -83,     0,
       0,     0,     0,     0,     0,   -83,   -83,   -83,   -83,   -83,
     -83,   -84,     0,   -84,   -84,   -84,   -84,   -84,     0,     0,
     -84,   -84,     0,     0,   -68,     0,   -68,   -68,   -68,   -68,
     -68,     0,   -84,   -68,   -68,     0,     0,     0,     0,   -84,
     -84,   -84,   -84,   -84,   -84,   -68,     0,     0,     0,     0,
       0,     0,   -68,   -68,   -68,   -68,   -68,   -68,   -69,     0,
     -69,   -69,   -69,   -69,   -69,     0,     0,   -69,   -69,     0,
       0,   -70,     0,   -70,   -70,   -70,   -70,   -70,     0,   -69,
     -70,   -70,     0,     0,     0,     0,   -69,   -69,   -69,   -69,
     -69,   -69,   -70,     0,     0,     0,     0,     0,     0,   -70,
     -70,   -70,   -70,   -70,   -70,   -71,     0,   -71,   -71,   -71,
     -71,   -71,     0,     0,   -71,   -71,     0,     0,   -67,     0,
     -67,   -67,   -67,   -67,   -67,     0,   -71,   -67,   -67,     0,
       0,     0,     0,   -71,   -71,   -71,   -71,   -71,   -71,   -67,
       0,     0,     0,     0,     0,     0,   -67,   -67,   -67,   -67,
     -67,   -67,   -87,     0,   -87,   -87,   -87,   -87,     0,     0,
       0,   -87,   -87,     0,     0,   -88,     0,   -88,   -88,   -88,
     -88,     0,     0,   -87,   -88,   -88,     0,     0,     0,     0,
     -87,   -87,   -87,   -87,   -87,   -87,   -88,     0,     0,     0,
       0,     0,     0,   -88,   -88,   -88,   -88,   -88,   -88,   -77,
       0,   -77,   -77,   -77,   -77,     0,     0,     0,   -77,   -77,
       0,     0,   -78,     0,   -78,   -78,   -78,   -78,     0,     0,
     -77,   -78,   -78,     0,     0,     0,     0,   -77,   -77,   -77,
     -77,   -77,   -77,   -78,     0,     0,     0,     0,     0,     0,
     -78,   -78,   -78,   -78,   -78,   -78,   -91,     0,   -91,   -91,
     -91,   -91,     0,     0,     0,   -91,   -91,     0,     0,   -82,
       0,   -82,   -82,   358,   359,     0,     0,   -91,   -82,   -82,
       0,     0,     0,     0,   -91,   -91,   -91,   -91,   -91,   -91,
     -82,     0,     0,     0,     0,     0,     0,   -82,   -82,   -82,
     -82,   -82,   -82,   -85,     0,   -85,   -85,   -85,   -85,     0,
       0,     0,   -85,   -85,     0,     0,   -86,     0,   -86,   -86,
     -86,   -86,     0,     0,   -85,   -86,   -86,     0,     0,     0,
       0,   -85,   -85,   -85,   -85,   -85,   -85,   -86,     0,     0,
       0,     0,     0,     0,   -86,   -86,   -86,   -86,   -86,   -86,
     -80,     0,   -80,   -80,   358,   359,     0,     0,     0,   -80,
     -80,     0,     0,   -81,     0,   -81,   -81,   358,   359,     0,
       0,   -80,   -81,   -81,     0,     0,     0,     0,   -80,   -80,
     -80,   -80,   -80,   -80,   -81,     0,     0,     0,     0,     0,
       0,   -81,   -81,   -81,   -81,   -81,   -81,   -79,     0,   -79,
     -79,   -79,   -79,     0,     0,     0,   -79,   -79,     0,     0,
     -90,     0,   -90,   -90,   -90,   -90,     0,     0,   -79,   -90,
     -90,     0,     0,     0,     0,   -79,   -79,   -79,   -79,   -79,
     -79,   -90,     0,     0,     0,     0,     0,     0,   -90,   -90,
     -90,   -90,   -90,   -90,   -83,     0,   -83,   -83,   -83,   -83,
       0,     0,     0,   -83,   -83,     0,     0,   -84,     0,   -84,
     -84,   -84,   -84,     0,     0,   -83,   -84,   -84,     0,     0,
       0,     0,   -83,   -83,   -83,   -83,   -83,   -83,   -84,     0,
       0,     0,     0,     0,     0,   -84,   -84,   -84,   -84,   -84,
     -84,   -68,     0,   -68,   -68,   -68,   -68,     0,     0,     0,
     -68,   -68,     0,     0,   -69,     0,   -69,   -69,   -69,   -69,
       0,     0,   -68,   -69,   -69,     0,     0,     0,     0,   -68,
     -68,   -68,   -68,   -68,   -68,   -69,     0,     0,     0,     0,
       0,     0,   -69,   -69,   -69,   -69,   -69,   -69,   -70,     0,
     -70,   -70,   -70,   -70,     0,     0,     0,   -70,   -70,     0,
       0,   -71,     0,   -71,   -71,   -71,   -71,     0,     0,   -70,
     -71,   -71,     0,     0,     0,     0,   -70,   -70,   -70,   -70,
     -70,   -70,   -71,     0,     0,     0,     0,     0,     0,   -71,
     -71,   -71,   -71,   -71,   -71,   -67,     0,   -67,   -67,   -67,
     -67,   -60,     0,     0,   -67,   -67,     0,   -60,     0,     0,
     -60,   -60,     0,     0,     0,     0,   -67,     0,     0,     0,
       0,     0,   -60,   -67,   -67,   -67,   -67,   -67,   -67,   -60,
     -60,   -60,   -60,   -60,   -60,   -54,     0,     0,     0,     0,
       0,   -54,     0,     0,   124,   125,     0,     0,   -58,     0,
       0,     0,     0,     0,   -58,     0,   126,   -58,   -58,     0,
       0,     0,     0,   -54,   -54,   127,   128,   -54,   -54,   -58,
       0,     0,     0,     0,     0,     0,   -58,   -58,   -58,   -58,
     -58,   -58,   -53,     0,     0,     0,     0,     0,   -53,     0,
       0,   124,   125,     0,     0,   -57,     0,     0,     0,     0,
       0,   -57,     0,   126,   -57,   -57,     0,     0,   -53,     0,
     -53,   -53,   127,   128,   -53,   -53,   -57,   124,   125,     0,
       0,   -57,     0,   -57,   -57,   -57,   -57,   -57,   -57,   126,
     -57,   -57,     0,     0,     0,     0,   -53,   -53,   127,   128,
     -53,   -53,   -57,     0,     0,     0,     0,     0,     0,   -57,
     -57,   -57,   -57,   -57,   -57,   -87,   -87,   -87,   -87,   -87,
     -87,     0,     0,   -87,   -87,     0,     0,     0,   -88,   -88,
     -88,   -88,   -88,   -88,     0,   -87,   -88,   -88,     0,     0,
       0,     0,   -87,   -87,   -87,   -87,   -87,   -87,   -88,     0,
       0,     0,     0,     0,     0,   -88,   -88,   -88,   -88,   -88,
     -88,   -77,   -77,   -77,   -77,   -77,   -77,     0,     0,   -77,
     -77,     0,     0,     0,   -78,   -78,   -78,   -78,   -78,   -78,
       0,   -77,   -78,   -78,     0,     0,     0,     0,   -77,   -77,
     -77,   -77,   -77,   -77,   -78,     0,     0,     0,     0,     0,
       0,   -78,   -78,   -78,   -78,   -78,   -78,   -91,   -91,   -91,
     -91,   -91,   -91,     0,     0,   -91,   -91,     0,     0,     0,
     -82,   -82,   -82,   398,   399,   -82,     0,   -91,   -82,   -82,
       0,     0,     0,     0,   -91,   -91,   -91,   -91,   -91,   -91,
     -82,     0,     0,     0,     0,     0,     0,   -82,   -82,   -82,
     -82,   -82,   -82,   -85,   -85,   -85,   -85,   -85,   -85,     0,
       0,   -85,   -85,     0,     0,     0,   -86,   -86,   -86,   -86,
     -86,   -86,     0,   -85,   -86,   -86,     0,     0,     0,     0,
     -85,   -85,   -85,   -85,   -85,   -85,   -86,     0,     0,     0,
       0,     0,     0,   -86,   -86,   -86,   -86,   -86,   -86,   -79,
     -79,   -79,   -79,   -79,   -79,     0,     0,   -79,   -79,     0,
       0,     0,   -90,   -90,   -90,   -90,   -90,   -90,     0,   -79,
     -90,   -90,     0,     0,     0,     0,   -79,   -79,   -79,   -79,
     -79,   -79,   -90,     0,     0,     0,     0,     0,     0,   -90,
     -90,   -90,   -90,   -90,   -90,   -80,   -80,   -80,   398,   399,
     -80,     0,     0,   -80,   -80,     0,     0,     0,   -81,   -81,
     -81,   398,   399,   -81,     0,   -80,   -81,   -81,     0,     0,
       0,     0,   -80,   -80,   -80,   -80,   -80,   -80,   -81,     0,
       0,     0,     0,     0,     0,   -81,   -81,   -81,   -81,   -81,
     -81,   -83,   -83,   -83,   -83,   -83,   -83,     0,     0,   -83,
     -83,     0,     0,     0,   -84,   -84,   -84,   -84,   -84,   -84,
       0,   -83,   -84,   -84,     0,     0,     0,     0,   -83,   -83,
     -83,   -83,   -83,   -83,   -84,     0,     0,     0,     0,     0,
       0,   -84,   -84,   -84,   -84,   -84,   -84,   -67,   -67,   -67,
     -67,   -67,   -67,     0,     0,   -67,   -67,     0,     0,     0,
     -68,   -68,   -68,   -68,   -68,   -68,     0,   -67,   -68,   -68,
       0,     0,     0,     0,   -67,   -67,   -67,   -67,   -67,   -67,
     -68,     0,     0,     0,     0,     0,     0,   -68,   -68,   -68,
     -68,   -68,   -68,   -69,   -69,   -69,   -69,   -69,   -69,     0,
       0,   -69,   -69,     0,     0,     0,   -70,   -70,   -70,   -70,
     -70,   -70,     0,   -69,   -70,   -70,     0,     0,     0,     0,
     -69,   -69,   -69,   -69,   -69,   -69,   -70,     0,     0,     0,
       0,     0,     0,   -70,   -70,   -70,   -70,   -70,   -70,   -71,
     -71,   -71,   -71,   -71,   -71,     0,     0,   -71,   -71,     0,
       0,     0,   -59,   396,   397,     0,     0,   -59,     0,   -71,
     -59,   -59,     0,     0,     0,     0,   -71,   -71,   -71,   -71,
     -71,   -71,   -59,     0,     0,     0,     0,     0,     0,   -59,
     -59,   -59,   -59,   -59,   -59,   -60,     0,     0,     0,     0,
     -60,   -54,     0,   -60,   -60,     0,   -54,     0,     0,   124,
     125,     0,     0,     0,     0,   -60,     0,     0,     0,     0,
       0,   126,   -60,   -60,   -60,   -60,   -60,   -60,   -54,   -54,
     127,   128,   -54,   -54,   -58,     0,     0,     0,     0,   -58,
     -53,     0,   -58,   -58,     0,   -53,     0,     0,   124,   125,
       0,     0,     0,     0,   -58,     0,     0,     0,     0,     0,
     126,   -58,   -58,   -58,   -58,   -58,   -58,   -53,   -53,   127,
     128,   -53,   -53,   -57,     0,     0,     0,     0,   -57,     0,
       0,   -57,   -57,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -57,     0,     0,     0,     0,     0,     0,
     -57,   -57,   -57,   -57,   -57,   -57
};

static const yytype_int16 yycheck[] =
{
       0,    18,   118,     3,    20,   118,   143,   214,   145,   175,
     247,    43,    51,    29,     6,     6,    43,     7,   246,    43,
      12,    12,    12,   106,    40,     6,     5,    43,     7,   106,
       7,    12,     6,    49,    50,    12,    52,    53,    43,    21,
       6,     0,    34,    35,   118,     6,    38,    39,    38,    39,
       5,    12,    79,    69,    43,    79,    40,    38,    39,    75,
      76,    38,    39,    79,    38,    39,   143,     5,    34,    35,
      41,   278,    38,    39,    79,    13,     6,    38,    39,     5,
       7,    97,    98,    99,   100,     6,     3,    13,     6,    41,
     106,    12,   119,   120,    12,   119,   120,    43,   335,   123,
       6,   118,   118,   119,   120,   129,   334,   123,    38,    39,
       6,   143,     6,   129,   119,   120,   143,   283,   118,   143,
      38,    39,     6,   139,   140,     6,   142,   143,    12,   145,
     119,    12,    38,    79,   118,   151,     7,     6,   143,    21,
       6,    12,    38,    39,    38,    39,    12,   163,    41,   165,
     357,     5,     5,   169,   143,   139,   172,    38,    39,   175,
     367,     6,    41,     6,   180,   181,     5,    12,     7,    38,
       9,     7,   379,   119,   120,    14,    12,   123,   194,   195,
       6,   165,    21,    22,     5,   169,    12,     5,   172,    28,
      29,    30,    31,    38,    39,    38,    39,   143,   214,   215,
     407,    40,    41,    42,     0,     1,   343,     5,     5,   236,
      28,    29,    30,    31,     0,     1,     0,     1,   234,   235,
     236,     6,    40,    41,    42,    21,     1,    12,     3,     4,
       7,     7,   439,     7,     5,    21,    21,    21,    12,   255,
     256,    41,     6,    18,    19,    20,    21,   454,    12,    24,
      25,    26,     5,    28,    29,    30,    31,    32,   274,   275,
     276,   277,   278,   295,    38,   281,    41,   283,   295,     7,
     507,   295,   288,     5,    12,    28,    29,    30,    31,   295,
       5,     7,     5,   299,   300,     6,    12,    40,    41,    42,
     295,    12,   281,   320,     7,     5,   320,     0,     1,    12,
      38,    39,   318,   319,   320,     7,   295,     7,    34,    35,
      12,   343,    38,    39,     7,   320,   343,    38,    21,   343,
     557,     7,     5,     7,     6,    41,     9,   343,    12,   345,
      12,     8,     9,     7,    17,     7,    38,    39,   343,    22,
      23,   357,   358,   359,   427,    28,    29,    30,    31,   295,
      27,   367,   368,   369,   343,     0,     1,    40,    41,    42,
       7,   345,     6,   379,     5,    12,   393,     6,     9,     8,
       9,   395,     7,    12,   320,     6,    21,   393,   394,   395,
     396,   397,   398,   399,     6,   424,     6,    28,    29,    30,
      31,   407,   408,   409,   410,   411,     6,   343,     6,    40,
      41,    42,    12,     6,   420,     7,   422,   423,     6,    12,
      12,   427,   428,     6,    12,     7,     0,     1,   534,    12,
      12,   534,    27,   439,   440,   441,   442,   443,    41,   456,
     457,     6,   456,   457,   458,   459,   420,    21,   454,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   394,   532,
       5,   456,   457,     6,     9,   532,     7,     0,     1,   596,
     534,    12,     6,    13,     8,     9,     6,   456,    12,     6,
       6,    15,    16,    28,    29,    30,    31,     7,    21,   595,
       7,     7,   595,    27,     7,    40,    41,    42,     0,     1,
      34,    35,    36,    37,    38,    39,     7,     7,   614,     7,
     616,   614,   618,   616,    12,   618,    20,     0,     1,    21,
     456,   457,   458,     7,     6,    29,   532,   534,   534,   596,
      12,   595,     7,     5,     0,     1,    40,     9,    21,    43,
      38,    39,   548,     7,   534,    49,    50,     6,    52,    53,
     614,     5,   616,    12,   618,    21,    28,    29,    30,    31,
     534,     8,     9,    10,    11,    69,     6,     6,    40,    41,
      42,    75,    76,    12,   596,    79,     5,     7,     6,   596,
      27,     6,   596,    29,    12,     6,     6,    12,   595,   595,
     596,    12,    12,    97,    98,    99,   100,     7,     8,     9,
       6,   596,   106,    49,    50,   595,    12,   614,   614,   616,
     616,   618,   618,     7,   118,   119,   120,   596,    12,   123,
       6,   595,     8,     9,   614,   129,   616,     5,   618,    75,
      76,     9,     5,     5,     5,   139,   140,     6,   142,   143,
     614,   145,   616,    12,   618,     5,     5,   151,     6,     5,
      28,    29,    30,    31,    12,     1,     6,     3,     4,   163,
     596,   165,    40,    41,    42,   169,     6,     6,   172,     8,
       9,   175,    18,    19,    20,    21,   180,   181,    24,    25,
      26,     5,    28,    29,    30,    31,    32,    33,     5,     5,
     194,   195,     6,     9,   140,    41,   142,     6,    12,     7,
       5,    17,     6,    12,    12,   151,    22,    23,    12,     5,
     214,   215,    28,    29,    30,    31,     1,   163,     3,     4,
       6,    27,     8,     9,    40,    41,    42,     6,    27,    27,
     234,   235,   236,    18,    19,    20,    21,     5,     5,    24,
      25,    26,     5,    28,    29,    30,    31,    32,    33,     5,
      27,   255,   256,     7,     8,     9,    41,     6,    12,     8,
       9,    10,    11,    12,     5,     5,    15,    16,   214,     5,
     274,   275,   276,   277,   278,     5,     5,   281,    27,   283,
       1,     5,     3,     4,   288,    34,    35,    36,    37,    38,
      39,   295,     5,     5,     5,   299,   300,    18,    19,    20,
      21,     5,     5,    24,    25,    26,    41,    28,    29,    30,
      31,    32,    33,     5,   318,   319,   320,     5,     7,     5,
      41,     5,     7,     5,     8,     9,    10,    11,     8,     9,
      10,    11,   278,     5,     6,     5,     5,     9,     5,   343,
      12,   345,   288,    27,    41,    17,     6,    27,     8,     9,
      22,    23,     5,   357,   358,   359,    28,    29,    30,    31,
       5,     5,     5,   367,   368,   369,     9,    41,    40,    41,
      42,     6,     6,    41,    17,   379,    41,     6,    41,    22,
      23,     8,     9,    10,    11,    28,    29,    30,    31,   393,
     394,   395,   396,   397,   398,   399,     6,    40,    41,    42,
      27,    41,     6,   407,   408,   409,   410,   411,    41,    41,
       7,   357,     8,     9,    10,    11,   420,     6,   422,   423,
      29,   367,    41,   427,   428,     6,     8,     9,    10,    11,
      13,    27,     6,   379,    43,   439,   440,   441,   442,   443,
      49,    50,    41,    52,    53,    27,     8,     9,    10,    11,
     454,   455,   456,   457,   458,   459,   460,   461,   462,   463,
      69,   407,     6,     6,     6,    27,    75,    76,     5,     6,
      79,     8,     9,    10,    11,    12,   422,   423,     6,     6,
       6,     5,   428,     6,     6,     9,     8,     9,    97,    98,
      99,   100,     6,   439,     8,     9,     6,   106,    22,     6,
       8,     9,    10,    11,    28,    29,    30,    31,   454,   455,
     119,   120,     6,     6,   123,     6,    40,    41,    42,    27,
     129,     6,     3,     6,     8,     9,    10,    11,   532,     6,
     534,   140,     6,   142,   143,     6,   145,     6,     1,     6,
       3,     4,   151,    27,   548,     5,     7,     7,     8,     9,
      10,    11,    12,     6,   163,    18,    19,    20,    21,     6,
       6,    24,    25,    26,     6,    28,    29,    30,    31,    32,
      33,   180,   181,     6,     8,     9,    10,    11,    41,     8,
       9,    10,    11,     6,     6,   194,   195,     6,     6,     8,
       9,   595,   596,    27,     7,     6,     5,     7,    27,     6,
       9,     6,   548,     8,     9,   214,   215,   216,     6,     6,
     614,     6,   616,    22,   618,     8,     9,    10,    11,    28,
      29,    30,    31,     6,     6,   234,   235,   236,     6,    -1,
      29,    40,    41,    42,    27,     7,     7,     6,     5,     8,
       9,    -1,     9,    -1,    43,    -1,   255,   256,    -1,    -1,
      49,    50,    -1,    52,    53,    22,    -1,    -1,     5,    -1,
      -1,    28,    29,    30,    31,   274,   275,   276,   277,   278,
      69,    -1,   281,    40,    41,    42,    75,    76,    -1,   288,
      79,    28,    29,    30,    31,    -1,   295,    -1,    -1,    -1,
     299,   300,    -1,    40,    41,    42,    -1,    -1,    97,    98,
      99,   100,     5,    -1,    -1,    -1,     9,   106,    -1,   318,
     319,   320,    -1,     8,     9,    10,    11,    -1,    -1,    22,
     119,   120,    -1,    -1,   123,    28,    29,    30,    31,    -1,
     129,     5,    27,    -1,   343,     9,    -1,    40,    41,    42,
      -1,   140,    -1,   142,   143,    -1,   145,    -1,   357,   358,
     359,    -1,   151,    -1,    28,    29,    30,    31,   367,   368,
     369,    -1,    -1,    -1,   163,    -1,    40,    41,    42,    -1,
     379,    -1,    -1,   382,   383,     8,     9,    10,    11,    -1,
      -1,   180,   181,    -1,   393,   394,   395,   396,   397,   398,
     399,    -1,    -1,    -1,    27,   194,   195,    -1,   407,   408,
     409,   410,   411,     5,    -1,     5,     6,     9,     8,     9,
      10,    11,    14,   422,   423,   214,   215,    -1,   427,   428,
      22,     7,     8,     9,    10,    11,    28,    29,    30,    31,
     439,   440,   441,   442,   443,   234,   235,   236,    40,    41,
      42,    29,    -1,    -1,    -1,   454,   455,   456,   457,   458,
     459,   460,   461,   462,   463,    43,   255,   256,    -1,    -1,
      -1,    49,    50,    -1,    52,     8,     9,    10,    11,     7,
       8,     9,    10,    11,    12,   274,   275,   276,   277,   278,
      -1,    69,   281,    -1,    27,    -1,    -1,    75,    76,   288,
       5,    79,     7,    -1,     9,    -1,   295,    -1,    -1,    14,
     299,   300,    -1,    -1,    -1,    -1,    21,    22,    -1,    97,
      98,    -1,    -1,    28,    29,    30,    31,    -1,   106,   318,
     319,   320,    -1,   532,    -1,    40,    41,    42,    -1,    -1,
      -1,   119,   120,    -1,    -1,   123,    -1,    -1,    -1,   548,
      -1,   129,    -1,    -1,   343,    -1,    -1,    -1,     5,    -1,
      -1,    -1,   140,    -1,   142,   143,    -1,   145,   357,   358,
     359,    -1,     6,   151,     8,     9,    10,    11,   367,   368,
     369,    28,    29,    30,    31,   163,    -1,    -1,     5,    -1,
     379,    -1,     9,    40,    41,    42,    -1,   596,     8,     9,
      10,    11,   180,    -1,   393,   394,   395,   396,   397,   398,
     399,    28,    29,    30,    31,    -1,   194,    27,   407,   408,
     409,   410,   411,    40,    41,    42,    -1,     8,     9,    10,
      11,    -1,    -1,   422,   423,    -1,   214,   215,   427,   428,
      -1,    29,    -1,    71,    72,    73,    27,    -1,    -1,    -1,
     439,   440,   441,   442,   443,    43,   234,    -1,   236,    -1,
      -1,    49,    50,    -1,    52,   454,   455,   456,   457,   458,
     459,   460,   461,   462,   463,    -1,    -1,   255,    -1,    -1,
      -1,    69,    -1,     8,     9,    10,    11,    75,    76,     5,
      -1,    79,    -1,     9,    -1,    -1,   274,   275,   276,   277,
     278,    17,    27,   281,    -1,    -1,    22,    23,    -1,    -1,
     288,    -1,    28,    29,    30,    31,    -1,   295,   106,    -1,
      -1,   299,    -1,    -1,    40,    41,    42,     8,     9,    10,
      11,   119,   120,    -1,     6,   123,     8,     9,    10,    11,
     318,   129,   320,   532,    -1,    -1,    27,     8,     9,    10,
      11,    -1,   140,    -1,   142,   143,    -1,   145,    -1,   548,
       5,    -1,     7,   151,     9,   343,    27,    -1,     5,    14,
       7,     8,     9,    10,    11,   163,    21,    22,    -1,   357,
      -1,    -1,    -1,    28,    29,    30,    31,    -1,    29,   367,
      -1,    -1,   180,    -1,    -1,    40,    41,    42,    -1,    -1,
      -1,   379,   380,   381,    -1,    -1,   194,   596,    49,    50,
      -1,    52,    -1,    -1,    -1,   393,   394,   395,   396,   397,
       7,     8,     9,    10,    11,    12,   214,   215,    -1,   407,
     408,   409,    -1,     5,    75,    76,     6,     9,     8,     9,
      10,    11,    12,    -1,   422,   423,   234,    -1,   236,   427,
     428,     7,     8,     9,    10,    11,    28,    29,    30,    31,
      -1,   439,   440,   441,    -1,    -1,    -1,   255,    40,    41,
      42,     7,     8,     9,    10,    11,   454,   455,   456,   457,
     458,   459,   460,   461,    -1,     6,    -1,     8,     9,    -1,
     278,    -1,    -1,   281,    15,    16,    -1,    -1,    -1,   140,
     288,   142,    -1,    -1,    -1,    -1,    27,   295,    -1,    -1,
     151,   299,    -1,    34,    35,    36,    37,    38,    39,   347,
     348,   349,   163,    -1,    -1,    -1,   354,   355,   356,    -1,
     318,    -1,   320,    -1,    -1,    -1,   364,   365,   366,   180,
       6,    -1,     8,     9,    10,    11,    12,    -1,   376,   377,
     378,    -1,    -1,   194,   532,   343,    -1,    -1,    -1,     5,
      -1,    -1,   390,   391,   392,    -1,    -1,    -1,    -1,   357,
     548,     6,    -1,   214,   215,    -1,   404,   405,   406,   367,
      15,    16,    28,    29,    30,    31,     7,     8,     9,    10,
      11,   379,    27,   234,    40,    41,    42,    -1,   426,    34,
      35,    36,    37,    38,    39,   393,   394,   395,   436,   437,
     438,    -1,    -1,    -1,   255,    -1,    -1,    -1,   596,   407,
       5,    -1,    -1,   451,   452,   453,     6,    -1,     8,     9,
      10,    11,    12,    -1,   422,   423,    -1,   278,    -1,   427,
     428,    -1,    -1,    28,    29,    30,    31,   288,    -1,    -1,
      -1,   439,    -1,    -1,    -1,    40,    41,    42,   299,    -1,
      -1,     1,    -1,     3,     4,    -1,   454,   455,   456,   457,
     458,   459,     5,    -1,    -1,    -1,     9,   318,    18,    19,
      20,    21,    -1,    -1,    24,    25,    26,    -1,    28,    29,
      30,    31,    32,    33,    -1,    28,    29,    30,    31,    -1,
       1,    41,     3,     4,    -1,    -1,    -1,    40,    41,    42,
       7,     8,     9,    10,    11,    12,   357,    18,    19,    20,
      21,    -1,    -1,    24,    25,    26,   367,    28,    29,    30,
      31,    32,    33,     7,     8,     9,    10,    11,   379,    -1,
      41,    -1,    -1,    -1,   532,     1,    -1,     3,     4,     6,
      -1,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
     548,    -1,    18,    19,    20,    21,   407,    -1,    24,    25,
      26,    -1,    28,    29,    30,    31,    32,    33,    -1,    -1,
      -1,   422,   423,    -1,    -1,    41,     6,   428,     8,     9,
      10,    11,     1,    -1,     3,     4,    -1,    -1,   439,     6,
      -1,     8,     9,    10,    11,    12,    -1,    -1,   596,    18,
      19,    20,    21,   454,   455,    24,    25,    26,    -1,    28,
      29,    30,    31,    32,    33,     1,    -1,     3,     4,    -1,
      -1,     6,    41,     8,     9,    10,    11,    12,    -1,    -1,
      -1,    -1,    18,    19,    20,    21,    -1,    -1,    24,    25,
      26,    -1,    28,    29,    30,    31,    32,    33,     1,    -1,
       3,     4,    -1,    -1,     6,    41,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    18,    19,    20,    21,    -1,
      -1,    24,    25,    26,    -1,    28,    29,    30,    31,    32,
      33,     1,    -1,     3,     4,    -1,    -1,     6,    41,     8,
       9,    10,    11,    12,    -1,    -1,    -1,   548,    18,    19,
      20,    21,    -1,    -1,    24,    25,    26,    -1,    28,    29,
      30,    31,    32,    33,     1,    -1,     3,     4,    -1,    -1,
       6,    41,     8,     9,    10,    11,    12,    -1,    -1,    -1,
      -1,    18,    19,    20,    21,    -1,    -1,    24,    25,    26,
      -1,    28,    29,    30,    31,    32,    33,     1,    -1,     3,
       4,    -1,    -1,     6,    41,     8,     9,    10,    11,    12,
      -1,    -1,    -1,    -1,    18,    19,    20,    21,    -1,    -1,
      24,    25,    26,    -1,    28,    29,    30,    31,    32,    33,
       1,    -1,     3,     4,    -1,    -1,     6,    41,     8,     9,
      10,    11,    12,    -1,    -1,    -1,    -1,    18,    19,    20,
      21,    -1,    -1,    24,    25,    26,    -1,    28,    29,    30,
      31,    32,    33,     1,    -1,     3,     4,    -1,    -1,     6,
      41,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      18,    19,    20,    21,    -1,    -1,    24,    25,    26,    -1,
      28,    29,    30,    31,    32,    33,     1,    -1,     3,     4,
      -1,    -1,     6,    41,     8,     9,    10,    11,    12,    -1,
      -1,    -1,    -1,    18,    19,    20,    21,    -1,    -1,    24,
      25,    26,    -1,    28,    29,    30,    31,    32,    33,     1,
      -1,     3,     4,    -1,    -1,     6,    41,     8,     9,    10,
      11,    12,    -1,    -1,    -1,    -1,    18,    19,    20,    21,
      -1,    -1,    24,    25,    26,    -1,    28,    29,    30,    31,
      32,    33,     1,    -1,     3,     4,    -1,    -1,     6,    41,
       8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,    18,
      19,    20,    21,    -1,    -1,    24,    25,    26,    -1,    28,
      29,    30,    31,    32,    33,     1,    -1,     3,     4,    -1,
      -1,     6,    41,     8,     9,    10,    11,    12,    -1,    -1,
      -1,    -1,    18,    19,    20,    21,    -1,    -1,    24,    25,
      26,    -1,    28,    29,    30,    31,    32,    33,     1,    -1,
       3,     4,    -1,    -1,     6,    41,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    18,    19,    20,    21,    -1,
      -1,    24,    25,    26,    -1,    28,    29,    30,    31,    32,
      33,     1,    -1,     3,     4,    -1,    -1,     6,    41,     8,
       9,    10,    11,    12,    -1,    -1,    -1,    -1,    18,    19,
      20,    21,    -1,    -1,    24,    25,    26,    -1,    28,    29,
      30,    31,    32,    33,     1,    -1,     3,     4,    -1,    -1,
       6,    41,     8,     9,    10,    11,    12,    -1,    -1,    -1,
      -1,    18,    19,    20,    21,    -1,    -1,    24,    25,    26,
      -1,    28,    29,    30,    31,    32,     1,    -1,     3,     4,
      -1,    -1,    -1,    -1,    41,     7,     8,     9,    10,    11,
      12,    -1,    -1,    18,    19,    20,    21,    -1,    -1,    24,
      25,    26,    -1,    28,    29,    30,    31,    32,     1,    -1,
       3,     4,    -1,    -1,    -1,    -1,    41,     7,     8,     9,
      10,    11,    12,    -1,    -1,    18,    19,    20,    21,    -1,
      -1,    24,    25,    26,    -1,    28,    29,    30,    31,    32,
       1,    -1,     3,     4,    -1,    -1,    -1,    -1,    41,     7,
       8,     9,    10,    11,    12,    -1,    -1,    18,    19,    20,
      21,    -1,    -1,    24,    25,    26,    -1,    28,    29,    30,
      31,    32,     1,    -1,     3,     4,    -1,    -1,    -1,    -1,
      41,     7,     8,     9,    10,    11,    12,    -1,    -1,    18,
      19,    20,    21,    -1,    -1,    24,    25,    26,    -1,    28,
      29,    30,    31,    32,     1,    -1,     3,     4,    -1,    -1,
      -1,    -1,    41,     7,     8,     9,    10,    11,    12,    -1,
      -1,    18,    19,    20,    21,    -1,    -1,    24,    25,    26,
      -1,    28,    29,    30,    31,    32,     1,    -1,     3,     4,
      -1,    -1,    -1,    -1,    41,     7,     8,     9,    10,    11,
      12,    -1,    -1,    18,    19,    20,    21,    -1,    -1,    24,
      25,    26,    -1,    28,    29,    30,    31,    32,     1,    -1,
       3,     4,    -1,    -1,    -1,    -1,    41,     7,     8,     9,
      10,    11,    12,    -1,    -1,    18,    19,    20,    21,    -1,
      -1,    24,    25,    26,    -1,    28,    29,    30,    31,    32,
       1,    -1,     3,     4,    -1,    -1,    -1,    -1,    41,     7,
       8,     9,    10,    11,    12,    -1,    -1,    18,    19,    20,
      21,    -1,    -1,    24,    25,    26,    -1,    28,    29,    30,
      31,    32,     1,    -1,     3,     4,    -1,    -1,    -1,    -1,
      41,     7,     8,     9,    10,    11,    12,    -1,    -1,    18,
      19,    20,    21,    -1,    -1,    24,    25,    26,    -1,    28,
      29,    30,    31,    32,     1,    -1,     3,     4,    -1,    -1,
      -1,    -1,    41,     7,     8,     9,    10,    11,    12,    -1,
      -1,    18,    19,    20,    21,    -1,    -1,    24,    25,    26,
      -1,    28,    29,    30,    31,    32,     1,    -1,     3,     4,
      -1,    -1,    -1,    -1,    41,     7,     8,     9,    10,    11,
      12,    -1,    -1,    18,    19,    20,    21,    -1,    -1,    24,
      25,    26,    -1,    28,    29,    30,    31,    32,     1,    -1,
       3,     4,    -1,    -1,    -1,    -1,    41,     7,     8,     9,
      10,    11,    12,    -1,    -1,    18,    19,    20,    21,    -1,
      -1,    24,    25,    26,    -1,    28,    29,    30,    31,    32,
       1,    -1,     3,     4,    -1,    -1,    -1,    -1,    41,     7,
       8,     9,    10,    11,    12,    -1,    -1,    18,    19,    20,
      21,    -1,    -1,    24,    25,    26,    -1,    28,    29,    30,
      31,    32,     1,    -1,     3,     4,    -1,    -1,    -1,    -1,
      41,     7,     8,     9,    10,    11,    12,    -1,    -1,    18,
      19,    20,    21,    -1,    -1,    24,    25,    26,    -1,    28,
      29,    30,    31,    32,     1,    -1,     3,     4,    -1,    -1,
      -1,    -1,    41,     7,     8,     9,    10,    11,    12,    -1,
      -1,    18,    19,    20,    21,    -1,    -1,    24,    25,    26,
      -1,    28,    29,    30,    31,    32,     1,    -1,     3,     4,
      -1,    -1,    -1,    -1,    41,     7,     8,     9,    10,    11,
      12,    -1,    -1,    18,    19,    20,    21,    -1,    -1,    24,
      25,    26,    -1,    28,    29,    30,    31,    32,     1,    -1,
       3,     4,    -1,    -1,    -1,     6,    41,     8,     9,    10,
      11,    -1,    -1,    -1,    -1,    18,    19,    20,    21,    -1,
      -1,    24,    25,    26,    -1,    28,    29,    30,    31,    32,
       1,    -1,     3,     4,    -1,    -1,    -1,     6,    41,     8,
       9,    10,    11,    -1,    -1,    -1,    -1,    18,    19,    20,
      21,    -1,    -1,    24,    25,    26,    -1,    28,    29,    30,
      31,    32,     1,    -1,     3,     4,    -1,    -1,    -1,     6,
      41,     8,     9,    10,    11,    -1,    -1,    -1,    -1,    18,
      19,    20,    21,    -1,    -1,    24,    25,    26,    -1,    28,
      29,    30,    31,    32,     1,    -1,     3,     4,    -1,    -1,
      -1,     6,    41,     8,     9,    10,    11,    -1,    -1,    -1,
      -1,    18,    19,    20,    21,    -1,    -1,    24,    25,    26,
      -1,    28,    29,    30,    31,    32,     1,    -1,     3,     4,
      -1,    -1,    -1,     6,    41,     8,     9,    10,    11,    -1,
      -1,    -1,    -1,    18,    19,    20,    21,    -1,    -1,    24,
      25,    26,    -1,    28,    29,    30,    31,    32,     1,    -1,
       3,     4,    -1,    -1,    -1,     6,    41,     8,     9,    10,
      11,    -1,    -1,    -1,    -1,    18,    19,    20,    21,    -1,
      -1,    24,    25,    26,    -1,    28,    29,    30,    31,    32,
       1,    -1,     3,     4,    -1,    -1,    -1,     6,    41,     8,
       9,    10,    11,    -1,    -1,    -1,    -1,    18,    19,    20,
      21,    -1,    -1,    24,    25,    26,    -1,    28,    29,    30,
      31,    32,     1,    -1,     3,     4,    -1,    -1,    -1,     6,
      41,     8,     9,    10,    11,    -1,    -1,    -1,    -1,    18,
      19,    20,    21,    -1,    -1,    24,    25,    26,    -1,    28,
      29,    30,    31,    32,     1,    -1,     3,     4,    -1,    -1,
      -1,     6,    41,     8,     9,    10,    11,    -1,    -1,    -1,
      -1,    18,    19,    20,    21,    -1,    -1,    24,    25,    26,
      -1,    28,    29,    30,    31,    32,     1,     6,     3,     8,
       9,    10,    11,     6,    41,     8,     9,    10,    11,    -1,
      -1,    -1,    -1,    18,    19,    20,    21,    -1,    -1,    24,
      25,    26,    -1,    28,    29,    30,    31,    32,     1,     6,
       3,     8,     9,    10,    11,     6,    41,     8,     9,    10,
      11,    -1,    -1,    -1,    -1,    18,    19,    20,    21,    -1,
      -1,    24,    25,    26,    -1,    28,    29,    30,    31,    32,
       5,     6,    -1,    -1,     9,    -1,    -1,    -1,    41,    14,
       6,     6,     8,     9,    10,    11,    21,    22,    -1,    -1,
      15,    16,    -1,    28,    29,    30,    31,    -1,    -1,     5,
      -1,     7,    27,     9,    -1,    40,    41,    42,    14,    34,
      35,    36,    37,    38,    39,    21,    22,     7,     8,     9,
      10,    11,    28,    29,    30,    31,    -1,    -1,     5,     6,
      -1,    -1,     9,    -1,    40,    41,    42,    14,     6,     6,
       8,     9,    10,    11,    21,    22,    -1,    -1,    15,    16,
      -1,    28,    29,    30,    31,    -1,    -1,     5,     6,    -1,
      27,     9,    -1,    40,    41,    42,    14,    34,    35,    36,
      37,    38,    39,    21,    22,     7,     8,     9,    10,    11,
      28,    29,    30,    31,    -1,    -1,     5,     6,    -1,    -1,
       9,    -1,    40,    41,    42,    14,     6,    -1,     8,     9,
      10,    11,    21,    22,     7,     8,     9,    10,    11,    28,
      29,    30,    31,    -1,    -1,     5,    -1,    -1,    -1,     9,
      -1,    40,    41,    42,    14,     7,     8,     9,    10,    11,
       5,    21,    22,    -1,     9,    -1,    -1,    -1,    28,    29,
      30,    31,    17,    -1,    -1,    -1,    -1,    22,    23,    -1,
      40,    41,    42,    28,    29,    30,    31,    -1,    -1,     5,
      -1,    -1,    -1,     9,    -1,    40,    41,    42,    14,     7,
       8,     9,    10,    11,    -1,    21,    22,     7,     8,     9,
      10,    11,    28,    29,    30,    31,    -1,    -1,     5,    -1,
      -1,    -1,     9,    -1,    40,    41,    42,    14,     5,     6,
      -1,     8,     9,    10,    11,    22,    -1,    -1,    15,    16,
      -1,    28,    29,    30,    31,    -1,    -1,     5,    -1,    -1,
      27,     9,    -1,    40,    41,    42,    14,    34,    35,    36,
      37,    38,    39,    -1,    22,     7,     8,     9,    10,    11,
      28,    29,    30,    31,    -1,    -1,     5,    -1,    -1,    -1,
       9,    -1,    40,    41,    42,    14,     7,     8,     9,    10,
      11,     5,    -1,    22,    -1,     9,    -1,    -1,    -1,    28,
      29,    30,    31,    -1,    -1,    -1,     5,    -1,    22,    -1,
       9,    40,    41,    42,    28,    29,    30,    31,    -1,    -1,
      -1,     5,    -1,    22,    -1,     9,    40,    41,    42,    28,
      29,    30,    31,    -1,    -1,    -1,     5,    -1,    22,    -1,
       9,    40,    41,    42,    28,    29,    30,    31,    -1,    -1,
      -1,     5,    -1,    22,    -1,     9,    40,    41,    42,    28,
      29,    30,    31,    -1,    -1,    -1,     5,    -1,    22,    -1,
       9,    40,    41,    42,    28,    29,    30,    31,    -1,    -1,
      -1,     5,    -1,    22,    -1,     5,    40,    41,    42,    28,
      29,    30,    31,     7,     8,     9,    10,    11,    -1,    -1,
      -1,    40,    41,    42,    28,    29,    30,    31,    28,    29,
      30,    31,    -1,    -1,    -1,    -1,    40,    41,    42,    -1,
      40,    41,    42,     5,    -1,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,    16,    -1,     5,     6,    -1,     8,
       9,    10,    11,    12,    13,    27,    15,    16,    -1,    -1,
      -1,    -1,    34,    35,    36,    37,    38,    39,    27,     7,
       8,     9,    10,    11,    -1,    34,    35,    36,    37,    38,
      39,     5,    -1,     7,     8,     9,    10,    11,    12,    -1,
      -1,    15,    16,    -1,     5,     6,    -1,     8,     9,    10,
      11,    12,    -1,    27,    15,    16,    -1,    -1,    -1,    -1,
      34,    35,    36,    37,    38,    39,    27,     7,     8,     9,
      10,    11,    -1,    34,    35,    36,    37,    38,    39,     6,
      -1,     8,     9,    10,    11,    12,    -1,    -1,    15,    16,
      -1,    -1,     6,    -1,     8,     9,    10,    11,    12,    -1,
      27,    15,    16,    -1,    -1,    -1,    -1,    34,    35,    36,
      37,    38,    39,    27,     7,     8,     9,    10,    11,    -1,
      34,    35,    36,    37,    38,    39,     6,    -1,     8,     9,
      10,    11,    12,    -1,    -1,    15,    16,    -1,    -1,     6,
      -1,     8,     9,    10,    11,    12,    -1,    27,    15,    16,
      -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,    39,
      27,     7,     8,     9,    10,    11,    -1,    34,    35,    36,
      37,    38,    39,     6,    -1,     8,     9,    10,    11,    12,
      -1,    -1,    15,    16,    -1,    -1,     6,    -1,     8,     9,
      10,    11,    12,    -1,    27,    15,    16,    -1,    -1,    -1,
      -1,    34,    35,    36,    37,    38,    39,    27,     7,     8,
       9,    10,    11,    -1,    34,    35,    36,    37,    38,    39,
       6,    -1,     8,     9,    10,    11,    12,    -1,    -1,    15,
      16,    -1,    -1,     6,    -1,     8,     9,    10,    11,    12,
      -1,    27,    15,    16,    -1,    -1,    -1,    -1,    34,    35,
      36,    37,    38,    39,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    34,    35,    36,    37,    38,    39,     6,    -1,     8,
       9,    10,    11,    12,    -1,    -1,    15,    16,    -1,    -1,
       6,    -1,     8,     9,    10,    11,    12,    -1,    27,    15,
      16,    -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,
      39,    27,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,
      36,    37,    38,    39,     6,    -1,     8,     9,    10,    11,
      12,    -1,    -1,    15,    16,    -1,    -1,     6,    -1,     8,
       9,    10,    11,    12,    -1,    27,    15,    16,    -1,    -1,
      -1,    -1,    34,    35,    36,    37,    38,    39,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,
      39,     6,    -1,     8,     9,    10,    11,    12,    -1,    -1,
      15,    16,    -1,    -1,     6,    -1,     8,     9,    10,    11,
      12,    -1,    27,    15,    16,    -1,    -1,    -1,    -1,    34,
      35,    36,    37,    38,    39,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    34,    35,    36,    37,    38,    39,     6,    -1,
       8,     9,    10,    11,    12,    -1,    -1,    15,    16,    -1,
      -1,     6,    -1,     8,     9,    10,    11,    12,    -1,    27,
      15,    16,    -1,    -1,    -1,    -1,    34,    35,    36,    37,
      38,    39,    27,    -1,    -1,    -1,    -1,    -1,    -1,    34,
      35,    36,    37,    38,    39,     6,    -1,     8,     9,    10,
      11,    12,    -1,    -1,    15,    16,    -1,    -1,     6,    -1,
       8,     9,    10,    11,    12,    -1,    27,    15,    16,    -1,
      -1,    -1,    -1,    34,    35,    36,    37,    38,    39,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    34,    35,    36,    37,
      38,    39,     6,    -1,     8,     9,    10,    11,    -1,    -1,
      -1,    15,    16,    -1,    -1,     6,    -1,     8,     9,    10,
      11,    -1,    -1,    27,    15,    16,    -1,    -1,    -1,    -1,
      34,    35,    36,    37,    38,    39,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    34,    35,    36,    37,    38,    39,     6,
      -1,     8,     9,    10,    11,    -1,    -1,    -1,    15,    16,
      -1,    -1,     6,    -1,     8,     9,    10,    11,    -1,    -1,
      27,    15,    16,    -1,    -1,    -1,    -1,    34,    35,    36,
      37,    38,    39,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      34,    35,    36,    37,    38,    39,     6,    -1,     8,     9,
      10,    11,    -1,    -1,    -1,    15,    16,    -1,    -1,     6,
      -1,     8,     9,    10,    11,    -1,    -1,    27,    15,    16,
      -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,    39,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,    36,
      37,    38,    39,     6,    -1,     8,     9,    10,    11,    -1,
      -1,    -1,    15,    16,    -1,    -1,     6,    -1,     8,     9,
      10,    11,    -1,    -1,    27,    15,    16,    -1,    -1,    -1,
      -1,    34,    35,    36,    37,    38,    39,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,    39,
       6,    -1,     8,     9,    10,    11,    -1,    -1,    -1,    15,
      16,    -1,    -1,     6,    -1,     8,     9,    10,    11,    -1,
      -1,    27,    15,    16,    -1,    -1,    -1,    -1,    34,    35,
      36,    37,    38,    39,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    34,    35,    36,    37,    38,    39,     6,    -1,     8,
       9,    10,    11,    -1,    -1,    -1,    15,    16,    -1,    -1,
       6,    -1,     8,     9,    10,    11,    -1,    -1,    27,    15,
      16,    -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,
      39,    27,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,
      36,    37,    38,    39,     6,    -1,     8,     9,    10,    11,
      -1,    -1,    -1,    15,    16,    -1,    -1,     6,    -1,     8,
       9,    10,    11,    -1,    -1,    27,    15,    16,    -1,    -1,
      -1,    -1,    34,    35,    36,    37,    38,    39,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,
      39,     6,    -1,     8,     9,    10,    11,    -1,    -1,    -1,
      15,    16,    -1,    -1,     6,    -1,     8,     9,    10,    11,
      -1,    -1,    27,    15,    16,    -1,    -1,    -1,    -1,    34,
      35,    36,    37,    38,    39,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    34,    35,    36,    37,    38,    39,     6,    -1,
       8,     9,    10,    11,    -1,    -1,    -1,    15,    16,    -1,
      -1,     6,    -1,     8,     9,    10,    11,    -1,    -1,    27,
      15,    16,    -1,    -1,    -1,    -1,    34,    35,    36,    37,
      38,    39,    27,    -1,    -1,    -1,    -1,    -1,    -1,    34,
      35,    36,    37,    38,    39,     6,    -1,     8,     9,    10,
      11,     6,    -1,    -1,    15,    16,    -1,    12,    -1,    -1,
      15,    16,    -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,
      -1,    -1,    27,    34,    35,    36,    37,    38,    39,    34,
      35,    36,    37,    38,    39,     6,    -1,    -1,    -1,    -1,
      -1,    12,    -1,    -1,    15,    16,    -1,    -1,     6,    -1,
      -1,    -1,    -1,    -1,    12,    -1,    27,    15,    16,    -1,
      -1,    -1,    -1,    34,    35,    36,    37,    38,    39,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    34,    35,    36,    37,
      38,    39,     6,    -1,    -1,    -1,    -1,    -1,    12,    -1,
      -1,    15,    16,    -1,    -1,     6,    -1,    -1,    -1,    -1,
      -1,    12,    -1,    27,    15,    16,    -1,    -1,     6,    -1,
      34,    35,    36,    37,    38,    39,    27,    15,    16,    -1,
      -1,     6,    -1,    34,    35,    36,    37,    38,    39,    27,
      15,    16,    -1,    -1,    -1,    -1,    34,    35,    36,    37,
      38,    39,    27,    -1,    -1,    -1,    -1,    -1,    -1,    34,
      35,    36,    37,    38,    39,     7,     8,     9,    10,    11,
      12,    -1,    -1,    15,    16,    -1,    -1,    -1,     7,     8,
       9,    10,    11,    12,    -1,    27,    15,    16,    -1,    -1,
      -1,    -1,    34,    35,    36,    37,    38,    39,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,
      39,     7,     8,     9,    10,    11,    12,    -1,    -1,    15,
      16,    -1,    -1,    -1,     7,     8,     9,    10,    11,    12,
      -1,    27,    15,    16,    -1,    -1,    -1,    -1,    34,    35,
      36,    37,    38,    39,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    34,    35,    36,    37,    38,    39,     7,     8,     9,
      10,    11,    12,    -1,    -1,    15,    16,    -1,    -1,    -1,
       7,     8,     9,    10,    11,    12,    -1,    27,    15,    16,
      -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,    39,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,    36,
      37,    38,    39,     7,     8,     9,    10,    11,    12,    -1,
      -1,    15,    16,    -1,    -1,    -1,     7,     8,     9,    10,
      11,    12,    -1,    27,    15,    16,    -1,    -1,    -1,    -1,
      34,    35,    36,    37,    38,    39,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    34,    35,    36,    37,    38,    39,     7,
       8,     9,    10,    11,    12,    -1,    -1,    15,    16,    -1,
      -1,    -1,     7,     8,     9,    10,    11,    12,    -1,    27,
      15,    16,    -1,    -1,    -1,    -1,    34,    35,    36,    37,
      38,    39,    27,    -1,    -1,    -1,    -1,    -1,    -1,    34,
      35,    36,    37,    38,    39,     7,     8,     9,    10,    11,
      12,    -1,    -1,    15,    16,    -1,    -1,    -1,     7,     8,
       9,    10,    11,    12,    -1,    27,    15,    16,    -1,    -1,
      -1,    -1,    34,    35,    36,    37,    38,    39,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,
      39,     7,     8,     9,    10,    11,    12,    -1,    -1,    15,
      16,    -1,    -1,    -1,     7,     8,     9,    10,    11,    12,
      -1,    27,    15,    16,    -1,    -1,    -1,    -1,    34,    35,
      36,    37,    38,    39,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    34,    35,    36,    37,    38,    39,     7,     8,     9,
      10,    11,    12,    -1,    -1,    15,    16,    -1,    -1,    -1,
       7,     8,     9,    10,    11,    12,    -1,    27,    15,    16,
      -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,    39,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,    36,
      37,    38,    39,     7,     8,     9,    10,    11,    12,    -1,
      -1,    15,    16,    -1,    -1,    -1,     7,     8,     9,    10,
      11,    12,    -1,    27,    15,    16,    -1,    -1,    -1,    -1,
      34,    35,    36,    37,    38,    39,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    34,    35,    36,    37,    38,    39,     7,
       8,     9,    10,    11,    12,    -1,    -1,    15,    16,    -1,
      -1,    -1,     7,     8,     9,    -1,    -1,    12,    -1,    27,
      15,    16,    -1,    -1,    -1,    -1,    34,    35,    36,    37,
      38,    39,    27,    -1,    -1,    -1,    -1,    -1,    -1,    34,
      35,    36,    37,    38,    39,     7,    -1,    -1,    -1,    -1,
      12,     7,    -1,    15,    16,    -1,    12,    -1,    -1,    15,
      16,    -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,
      -1,    27,    34,    35,    36,    37,    38,    39,    34,    35,
      36,    37,    38,    39,     7,    -1,    -1,    -1,    -1,    12,
       7,    -1,    15,    16,    -1,    12,    -1,    -1,    15,    16,
      -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,
      27,    34,    35,    36,    37,    38,    39,    34,    35,    36,
      37,    38,    39,     7,    -1,    -1,    -1,    -1,    12,    -1,
      -1,    15,    16,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      34,    35,    36,    37,    38,    39
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    21,    46,    47,    48,    49,    51,    41,     0,     1,
      48,    50,    52,     5,     7,    21,    53,    41,     6,    12,
       3,    55,    21,     1,     4,    18,    19,    20,    21,    24,
      25,    26,    28,    29,    30,    31,    32,    41,    51,    55,
      56,    57,    58,    59,    60,    73,    74,    41,     5,     5,
       5,    41,     5,     9,    17,    22,    23,    40,    41,    42,
      73,    74,    75,    76,    77,    78,    79,    80,     5,     5,
       5,     5,     5,     5,     5,     5,    13,     4,    57,    14,
      22,    64,    65,    66,    67,    69,    70,    78,     7,     7,
      41,    75,    75,    76,    78,    80,     7,     8,     9,    10,
      11,    72,    75,     7,    21,    41,    61,    62,    63,    64,
      41,    72,    72,    72,    54,    75,    75,    66,     6,    38,
      39,    34,    35,    68,    15,    16,    27,    36,    37,    71,
       6,     6,     6,     6,     6,    79,    79,    80,    80,     6,
      27,    41,    13,    61,     7,    12,     6,     6,     6,     6,
       6,    12,     7,    57,    65,    66,    69,    70,     7,     7,
       7,    57,    75,    13,    75,     6,    62,    63,    75,    33,
      75,    57,     6,    57,    57,     3,    28,    29,    30,    31,
       5,     9,    28,    29,    30,    31,    40,    41,    42,    73,
      74,    77,    79,    80,     5,     9,    17,    22,    23,    28,
      29,    30,    31,    40,    41,    42,    73,    74,    76,    77,
      78,    79,    80,    52,     5,     5,     9,    17,    22,    23,
      28,    29,    30,    31,    40,    41,    42,    73,    74,    76,
      77,    78,    79,    80,     5,     9,    14,    22,    28,    29,
      30,    31,    40,    42,    65,    66,    67,    69,    70,    73,
      74,    77,    78,    79,    80,     5,     9,    17,    22,    23,
      28,    29,    30,    31,    40,    41,    42,    73,    74,    76,
      77,    78,    79,    80,     8,     9,     8,     9,     5,     7,
      62,    38,     1,     3,    18,    19,    20,    21,    24,    25,
      26,    41,    51,    55,    58,    59,    60,    73,    74,     5,
       9,    17,    22,    23,    28,    29,    30,    31,    40,    41,
      42,    73,    74,    76,    77,    78,    79,    80,     5,     9,
      14,    21,    22,    28,    29,    30,    31,    40,    41,    42,
      63,    64,    65,    66,    67,    69,    70,    73,    74,    77,
      78,    79,    80,    12,     4,    56,     5,     5,     5,     5,
      76,    78,    80,     5,     5,     5,     5,     5,    10,    11,
      76,    78,    80,     5,     5,     5,     5,     5,    10,    11,
       7,    54,    76,    78,    80,     5,     5,     5,     5,     5,
       8,     9,    10,    11,    76,    78,    41,    80,    66,     5,
       5,     5,     5,    39,    68,    71,     8,     9,    10,    11,
      76,    78,    80,     5,     5,     5,     5,     5,     8,     9,
      10,    11,    79,    79,    79,    79,    54,     7,    65,     4,
      56,     5,     5,     5,    41,    75,     5,     5,    13,    64,
       7,     7,    76,    78,    80,     5,     5,     5,     5,     5,
       8,     9,    10,    11,    76,    78,    41,    80,    66,    41,
       5,     5,     5,     5,     5,    13,    38,    39,    68,    71,
       8,     9,    10,    11,    63,     4,    41,    72,    72,    72,
       6,     6,    41,    72,    72,    72,    54,    80,    80,     6,
       6,    41,    72,    72,    72,    54,    80,    80,     6,     6,
       6,    41,    72,    72,    72,    54,    79,    79,    80,    80,
       6,     6,    41,    72,    72,    72,    66,    69,    70,    79,
      79,    80,    80,     6,     6,    41,    72,    72,    72,    54,
      79,    79,    80,    80,     6,     4,    41,    75,    75,    52,
       7,    72,    61,    75,     6,     6,     6,    41,    72,    72,
      72,    54,    79,    79,    80,    80,     6,     6,    13,    41,
      72,    72,    72,    54,    75,    65,    66,    69,    70,    79,
      79,    80,    80,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     7,     6,    61,     7,    57,     6,
       6,     6,     6,     6,    75,     6,     6,     6,     6,     6,
       7,     7,     7,    57,     6,    62,    33,    57,     6,    57,
      57
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    45,    46,    47,    47,    47,    48,    48,    50,    49,
      52,    51,    53,    53,    53,    54,    54,    54,    55,    55,
      56,    56,    57,    57,    58,    58,    58,    58,    58,    58,
      58,    58,    58,    58,    59,    60,    60,    60,    60,    60,
      61,    61,    62,    62,    63,    63,    63,    64,    64,    65,
      65,    66,    66,    67,    67,    68,    68,    69,    69,    70,
      70,    71,    71,    71,    71,    71,    72,    73,    74,    74,
      74,    74,    75,    75,    76,    76,    76,    77,    77,    77,
      78,    78,    78,    79,    79,    79,    79,    80,    80,    80,
      80,    80
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     2,     1,     1,     1,     0,     7,
       0,     4,     4,     2,     0,     3,     1,     0,     3,     2,
       2,     1,     1,     1,     1,     2,     2,     1,     5,     5,
       5,     4,     3,     1,     2,     4,     6,     5,     6,     7,
       1,     2,     1,     3,     1,     4,     3,     3,     1,     3,
       1,     2,     1,     3,     1,     1,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     4,     4,     4,
       4,     4,     1,     1,     1,     1,     1,     1,     1,     3,
       3,     3,     1,     3,     3,     1,     2,     1,     1,     1,
       3,     1
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
#line 2755 "parser/parser.c"
    break;

  case 6: /* stmt: func_stmt  */
#line 61 "parser/c7.y"
                       { add_ast((yyvsp[0].expression)); }
#line 2761 "parser/parser.c"
    break;

  case 7: /* stmt: var_decl_stmt  */
#line 62 "parser/c7.y"
                           { add_ast((yyvsp[0].expression)); }
#line 2767 "parser/parser.c"
    break;

  case 8: /* $@1: %empty  */
#line 65 "parser/c7.y"
                            {
                set_id_type((yyvsp[0].int_value), ST_ID_FUNC);
            }
#line 2775 "parser/parser.c"
    break;

  case 9: /* func_stmt: TYPE ID $@1 PARENT_LEFT param_list PARENT_RIGHT compound_block_stmt  */
#line 67 "parser/c7.y"
                                                                            {
                (yyval.expression) = create_func_expr(create_str_expr((yyvsp[-6].str_value)), create_var_expr((yyvsp[-5].int_value)), (yyvsp[-2].expression), (yyvsp[0].expression));
                free((yyvsp[-6].str_value));
            }
#line 2784 "parser/parser.c"
    break;

  case 10: /* $@2: %empty  */
#line 73 "parser/c7.y"
                                {
                    set_id_type((yyvsp[0].int_value), ST_ID_VAR);
                }
#line 2792 "parser/parser.c"
    break;

  case 11: /* var_decl_stmt: TYPE ID $@2 SEMICOLON  */
#line 75 "parser/c7.y"
                            {
                    (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-3].str_value)), create_var_expr((yyvsp[-2].int_value)));
                    free((yyvsp[-3].str_value));
                }
#line 2801 "parser/parser.c"
    break;

  case 12: /* param_list: param_list COMMA TYPE ID  */
#line 81 "parser/c7.y"
                                                {
                (yyval.expression) = create_ter_expr((yyvsp[-3].expression), create_str_expr((yyvsp[-1].str_value)), create_var_expr((yyvsp[0].int_value)));
                set_id_type((yyvsp[0].int_value), ST_ID_VAR);
                free((yyvsp[-1].str_value));
            }
#line 2811 "parser/parser.c"
    break;

  case 13: /* param_list: TYPE ID  */
#line 86 "parser/c7.y"
                            {
                (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-1].str_value)), create_var_expr((yyvsp[0].int_value)));
                set_id_type((yyvsp[0].int_value), ST_ID_VAR);
                free((yyvsp[-1].str_value));
            }
#line 2821 "parser/parser.c"
    break;

  case 14: /* param_list: %empty  */
#line 91 "parser/c7.y"
                          {
                (yyval.expression) = create_empty_expr();
            }
#line 2829 "parser/parser.c"
    break;

  case 15: /* simple_param_list: simple_param_list COMMA simple_expr  */
#line 96 "parser/c7.y"
                                                                {
                        (yyval.expression) = create_bin_expr((yyvsp[-2].expression), (yyvsp[0].expression));
                    }
#line 2837 "parser/parser.c"
    break;

  case 16: /* simple_param_list: simple_expr  */
#line 99 "parser/c7.y"
                                     { (yyval.expression) = (yyvsp[0].expression); }
#line 2843 "parser/parser.c"
    break;

  case 17: /* simple_param_list: %empty  */
#line 100 "parser/c7.y"
                                  { (yyval.expression) = create_empty_expr(); }
#line 2849 "parser/parser.c"
    break;

  case 18: /* compound_block_stmt: BRACK_LEFT block_stmts BRACK_RIGHT  */
#line 103 "parser/c7.y"
                                                            {
                        (yyval.expression) = (yyvsp[-1].expression);
                    }
#line 2857 "parser/parser.c"
    break;

  case 19: /* compound_block_stmt: BRACK_LEFT BRACK_RIGHT  */
#line 106 "parser/c7.y"
                                              {
                        (yyval.expression) = create_empty_expr();
                    }
#line 2865 "parser/parser.c"
    break;

  case 20: /* block_stmts: block_stmts block_item  */
#line 111 "parser/c7.y"
                                           {
                (yyval.expression) = create_bin_expr((yyvsp[-1].expression), (yyvsp[0].expression)); 
            }
#line 2873 "parser/parser.c"
    break;

  case 21: /* block_stmts: block_item  */
#line 114 "parser/c7.y"
                            { (yyval.expression) = (yyvsp[0].expression); }
#line 2879 "parser/parser.c"
    break;

  case 22: /* block_item: var_decl_stmt  */
#line 117 "parser/c7.y"
                               { (yyval.expression) = (yyvsp[0].expression); }
#line 2885 "parser/parser.c"
    break;

  case 23: /* block_item: block_stmt  */
#line 118 "parser/c7.y"
                            { (yyval.expression) = (yyvsp[0].expression); }
#line 2891 "parser/parser.c"
    break;

  case 24: /* block_stmt: compound_block_stmt  */
#line 121 "parser/c7.y"
                                     { (yyval.expression) = (yyvsp[0].expression); }
#line 2897 "parser/parser.c"
    break;

  case 25: /* block_stmt: func_call SEMICOLON  */
#line 122 "parser/c7.y"
                                     { (yyval.expression) = (yyvsp[-1].expression); }
#line 2903 "parser/parser.c"
    break;

  case 26: /* block_stmt: set_func_call SEMICOLON  */
#line 123 "parser/c7.y"
                                         { (yyval.expression) = (yyvsp[-1].expression); }
#line 2909 "parser/parser.c"
    break;

  case 27: /* block_stmt: flow_control  */
#line 124 "parser/c7.y"
                              { (yyval.expression) = (yyvsp[0].expression); }
#line 2915 "parser/parser.c"
    break;

  case 28: /* block_stmt: READ PARENT_LEFT ID PARENT_RIGHT SEMICOLON  */
#line 125 "parser/c7.y"
                                                               {
                (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-4].str_value)), create_var_expr((yyvsp[-2].int_value))); 
                set_id_type((yyvsp[-2].int_value), ST_ID_VAR);
                free((yyvsp[-4].str_value));
            }
#line 2925 "parser/parser.c"
    break;

  case 29: /* block_stmt: WRITE PARENT_LEFT simple_expr PARENT_RIGHT SEMICOLON  */
#line 130 "parser/c7.y"
                                                                         {
                (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-4].str_value)), (yyvsp[-2].expression)); 
                free((yyvsp[-4].str_value));
            }
#line 2934 "parser/parser.c"
    break;

  case 30: /* block_stmt: WRITELN PARENT_LEFT simple_expr PARENT_RIGHT SEMICOLON  */
#line 134 "parser/c7.y"
                                                                           {
                (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-4].str_value)), (yyvsp[-2].expression)); 
                free((yyvsp[-4].str_value));
            }
#line 2943 "parser/parser.c"
    break;

  case 31: /* block_stmt: ID ASSIGN simple_expr SEMICOLON  */
#line 138 "parser/c7.y"
                                                       {
                (yyval.expression) = create_ter_expr(create_var_expr((yyvsp[-3].int_value)), create_char_expr((yyvsp[-2].char_value)), (yyvsp[-1].expression));
                set_id_type((yyvsp[-3].int_value), ST_ID_VAR); 
            }
#line 2952 "parser/parser.c"
    break;

  case 32: /* block_stmt: RETURN simple_expr SEMICOLON  */
#line 142 "parser/c7.y"
                                                 {
                (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-2].str_value)), (yyvsp[-1].expression)); 
                free((yyvsp[-2].str_value));
            }
#line 2961 "parser/parser.c"
    break;

  case 33: /* block_stmt: error  */
#line 146 "parser/c7.y"
                    { 
                (yyval.expression) = create_empty_expr();
                yyerrok;
            }
#line 2970 "parser/parser.c"
    break;

  case 34: /* flow_control_if: IF PARENT_LEFT  */
#line 152 "parser/c7.y"
                                    {
                    (yyval.expression) = create_str_expr((yyvsp[-1].str_value));
                    free((yyvsp[-1].str_value));
                }
#line 2979 "parser/parser.c"
    break;

  case 35: /* flow_control: flow_control_if or_cond_expr PARENT_RIGHT block_item  */
#line 158 "parser/c7.y"
                                                                                               {
                    (yyval.expression) = create_ter_expr((yyvsp[-3].expression), (yyvsp[-2].expression), (yyvsp[0].expression)); 
                }
#line 2987 "parser/parser.c"
    break;

  case 36: /* flow_control: flow_control_if or_cond_expr PARENT_RIGHT block_item ELSE block_item  */
#line 161 "parser/c7.y"
                                                                                                            {
                    (yyval.expression) = create_qui_expr((yyvsp[-5].expression), (yyvsp[-4].expression), (yyvsp[-2].expression), create_str_expr((yyvsp[-1].str_value)), (yyvsp[0].expression));
                    free((yyvsp[-1].str_value));
                }
#line 2996 "parser/parser.c"
    break;

  case 37: /* flow_control: FORALL PARENT_LEFT set_expr PARENT_RIGHT block_item  */
#line 165 "parser/c7.y"
                                                                                 {
                    (yyval.expression) = create_ter_expr(create_str_expr((yyvsp[-4].str_value)), (yyvsp[-2].expression), (yyvsp[0].expression)); 
                    free((yyvsp[-4].str_value));
                }
#line 3005 "parser/parser.c"
    break;

  case 38: /* flow_control: FOR PARENT_LEFT opt_param opt_param PARENT_RIGHT block_item  */
#line 169 "parser/c7.y"
                                                                                             {
                    (yyval.expression) = create_qua_expr(create_str_expr((yyvsp[-5].str_value)), (yyvsp[-3].expression), (yyvsp[-2].expression), (yyvsp[0].expression)); 
                    free((yyvsp[-5].str_value));
                }
#line 3014 "parser/parser.c"
    break;

  case 39: /* flow_control: FOR PARENT_LEFT opt_param opt_param for_expression PARENT_RIGHT block_item  */
#line 173 "parser/c7.y"
                                                                                                                {
                    (yyval.expression) = create_qui_expr(create_str_expr((yyvsp[-6].str_value)), (yyvsp[-4].expression), (yyvsp[-3].expression), (yyvsp[-2].expression), (yyvsp[0].expression)); 
                    free((yyvsp[-6].str_value));
                }
#line 3023 "parser/parser.c"
    break;

  case 40: /* opt_param: SEMICOLON  */
#line 179 "parser/c7.y"
                        { (yyval.expression) = create_empty_expr(); }
#line 3029 "parser/parser.c"
    break;

  case 41: /* opt_param: for_expression SEMICOLON  */
#line 180 "parser/c7.y"
                                          { (yyval.expression) = (yyvsp[-1].expression); }
#line 3035 "parser/parser.c"
    break;

  case 42: /* for_expression: decl_or_cond_expr  */
#line 183 "parser/c7.y"
                                       { (yyval.expression) = (yyvsp[0].expression); }
#line 3041 "parser/parser.c"
    break;

  case 43: /* for_expression: for_expression COMMA decl_or_cond_expr  */
#line 184 "parser/c7.y"
                                                                 {
                    (yyval.expression) = create_bin_expr((yyvsp[-2].expression), (yyvsp[0].expression)); 
                }
#line 3049 "parser/parser.c"
    break;

  case 44: /* decl_or_cond_expr: or_cond_expr  */
#line 189 "parser/c7.y"
                                      { (yyval.expression) = (yyvsp[0].expression); }
#line 3055 "parser/parser.c"
    break;

  case 45: /* decl_or_cond_expr: TYPE ID ASSIGN simple_expr  */
#line 190 "parser/c7.y"
                                                             {
                        (yyval.expression) = create_qua_expr(create_str_expr((yyvsp[-3].str_value)), create_var_expr((yyvsp[-2].int_value)),
                                             create_char_expr((yyvsp[-1].char_value)), (yyvsp[0].expression)); 
                        set_id_type((yyvsp[-2].int_value), ST_ID_VAR);
                        free((yyvsp[-3].str_value));
                    }
#line 3066 "parser/parser.c"
    break;

  case 46: /* decl_or_cond_expr: ID ASSIGN simple_expr  */
#line 196 "parser/c7.y"
                                                     {
                        (yyval.expression) = create_ter_expr(create_var_expr((yyvsp[-2].int_value)), create_char_expr((yyvsp[-1].char_value)), (yyvsp[0].expression));
                        set_id_type((yyvsp[-2].int_value), ST_ID_VAR);
                    }
#line 3075 "parser/parser.c"
    break;

  case 47: /* or_cond_expr: or_cond_expr OR_OP and_cond_expr  */
#line 202 "parser/c7.y"
                                                               {
                    (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_str_expr((yyvsp[-1].str_value)), (yyvsp[0].expression)); 
                    free((yyvsp[-1].str_value));
                }
#line 3084 "parser/parser.c"
    break;

  case 48: /* or_cond_expr: and_cond_expr  */
#line 206 "parser/c7.y"
                                   { (yyval.expression) = (yyvsp[0].expression); }
#line 3090 "parser/parser.c"
    break;

  case 49: /* and_cond_expr: and_cond_expr AND_OP unary_cond_expr  */
#line 209 "parser/c7.y"
                                                                   {
                    (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_str_expr((yyvsp[-1].str_value)), (yyvsp[0].expression)); 
                    free((yyvsp[-1].str_value));
                }
#line 3099 "parser/parser.c"
    break;

  case 50: /* and_cond_expr: unary_cond_expr  */
#line 213 "parser/c7.y"
                                     { (yyval.expression) = (yyvsp[0].expression); }
#line 3105 "parser/parser.c"
    break;

  case 51: /* unary_cond_expr: NOT_OP unary_cond_expr  */
#line 216 "parser/c7.y"
                                               {
                    (yyval.expression) = create_bin_expr(create_char_expr((yyvsp[-1].char_value)), (yyvsp[0].expression)); 
                }
#line 3113 "parser/parser.c"
    break;

  case 52: /* unary_cond_expr: eq_cond_expr  */
#line 219 "parser/c7.y"
                                  { (yyval.expression) = (yyvsp[0].expression); }
#line 3119 "parser/parser.c"
    break;

  case 53: /* eq_cond_expr: eq_cond_expr equal_ops rel_cond_expr  */
#line 222 "parser/c7.y"
                                                                  {
                    (yyval.expression) = create_ter_expr((yyvsp[-2].expression), (yyvsp[-1].expression), (yyvsp[0].expression));
                }
#line 3127 "parser/parser.c"
    break;

  case 54: /* eq_cond_expr: rel_cond_expr  */
#line 225 "parser/c7.y"
                                   { (yyval.expression) = (yyvsp[0].expression); }
#line 3133 "parser/parser.c"
    break;

  case 55: /* equal_ops: EQ_OP  */
#line 228 "parser/c7.y"
                       {
                (yyval.expression) = create_str_expr((yyvsp[0].str_value));
                free((yyvsp[0].str_value));
            }
#line 3142 "parser/parser.c"
    break;

  case 56: /* equal_ops: NE_OP  */
#line 232 "parser/c7.y"
                       {
                (yyval.expression) = create_str_expr((yyvsp[0].str_value));
                free((yyvsp[0].str_value));
            }
#line 3151 "parser/parser.c"
    break;

  case 57: /* rel_cond_expr: rel_cond_expr rel_ops rel_cond_stmt  */
#line 238 "parser/c7.y"
                                                                  {
                    (yyval.expression) = create_ter_expr((yyvsp[-2].expression), (yyvsp[-1].expression), (yyvsp[0].expression));
                }
#line 3159 "parser/parser.c"
    break;

  case 58: /* rel_cond_expr: rel_cond_stmt  */
#line 241 "parser/c7.y"
                                   { (yyval.expression) = (yyvsp[0].expression); }
#line 3165 "parser/parser.c"
    break;

  case 59: /* rel_cond_stmt: arith_expr  */
#line 244 "parser/c7.y"
                                { (yyval.expression) = (yyvsp[0].expression); }
#line 3171 "parser/parser.c"
    break;

  case 60: /* rel_cond_stmt: EMPTY  */
#line 245 "parser/c7.y"
                           {
                    (yyval.expression) = create_str_expr((yyvsp[0].str_value));
                    free((yyvsp[0].str_value));
                }
#line 3180 "parser/parser.c"
    break;

  case 61: /* rel_ops: L_OP  */
#line 251 "parser/c7.y"
                  { (yyval.expression) = create_char_expr((yyvsp[0].char_value)); }
#line 3186 "parser/parser.c"
    break;

  case 62: /* rel_ops: G_OP  */
#line 252 "parser/c7.y"
                  { (yyval.expression) = create_char_expr((yyvsp[0].char_value)); }
#line 3192 "parser/parser.c"
    break;

  case 63: /* rel_ops: LE_OP  */
#line 253 "parser/c7.y"
                   {
            (yyval.expression) = create_str_expr((yyvsp[0].str_value));
            free((yyvsp[0].str_value));
        }
#line 3201 "parser/parser.c"
    break;

  case 64: /* rel_ops: GE_OP  */
#line 257 "parser/c7.y"
                   { 
            (yyval.expression) = create_str_expr((yyvsp[0].str_value));
            free((yyvsp[0].str_value));
        }
#line 3210 "parser/parser.c"
    break;

  case 65: /* rel_ops: IN  */
#line 261 "parser/c7.y"
                {
            (yyval.expression) = create_str_expr((yyvsp[0].str_value));
            free((yyvsp[0].str_value));
        }
#line 3219 "parser/parser.c"
    break;

  case 66: /* set_expr: simple_expr IN simple_expr  */
#line 267 "parser/c7.y"
                                                    {
                (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_str_expr((yyvsp[-1].str_value)), (yyvsp[0].expression)); 
                free((yyvsp[-1].str_value));
            }
#line 3228 "parser/parser.c"
    break;

  case 67: /* func_call: ID PARENT_LEFT simple_param_list PARENT_RIGHT  */
#line 273 "parser/c7.y"
                                                                  {
                (yyval.expression) = create_bin_expr(create_var_expr((yyvsp[-3].int_value)), (yyvsp[-1].expression)); 
                set_id_type((yyvsp[-3].int_value), ST_ID_FUNC);
            }
#line 3237 "parser/parser.c"
    break;

  case 68: /* set_func_call: IS_SET PARENT_LEFT ID PARENT_RIGHT  */
#line 279 "parser/c7.y"
                                                           {
                    (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-3].str_value)), create_var_expr((yyvsp[-1].int_value))); 
                    set_id_type((yyvsp[-1].int_value), ST_ID_VAR);
                    free((yyvsp[-3].str_value));
                }
#line 3247 "parser/parser.c"
    break;

  case 69: /* set_func_call: ADD_SET PARENT_LEFT set_expr PARENT_RIGHT  */
#line 284 "parser/c7.y"
                                                                  {
                    (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-3].str_value)), (yyvsp[-1].expression)); 
                    free((yyvsp[-3].str_value));
                }
#line 3256 "parser/parser.c"
    break;

  case 70: /* set_func_call: REMOVE PARENT_LEFT set_expr PARENT_RIGHT  */
#line 288 "parser/c7.y"
                                                                 {
                    (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-3].str_value)), (yyvsp[-1].expression)); 
                    free((yyvsp[-3].str_value));
                }
#line 3265 "parser/parser.c"
    break;

  case 71: /* set_func_call: EXISTS PARENT_LEFT set_expr PARENT_RIGHT  */
#line 292 "parser/c7.y"
                                                                 {
                    (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-3].str_value)), (yyvsp[-1].expression));
                    free((yyvsp[-3].str_value)); 
                }
#line 3274 "parser/parser.c"
    break;

  case 72: /* simple_expr: arith_expr  */
#line 298 "parser/c7.y"
                            { (yyval.expression) = (yyvsp[0].expression); }
#line 3280 "parser/parser.c"
    break;

  case 73: /* simple_expr: func_cte_expr  */
#line 299 "parser/c7.y"
                               { (yyval.expression) = (yyvsp[0].expression); }
#line 3286 "parser/parser.c"
    break;

  case 74: /* func_cte_expr: EMPTY  */
#line 302 "parser/c7.y"
                           {
                    (yyval.expression) = create_str_expr((yyvsp[0].str_value));
                    free((yyvsp[0].str_value));
                }
#line 3295 "parser/parser.c"
    break;

  case 75: /* func_cte_expr: STRING  */
#line 306 "parser/c7.y"
                            {
                    (yyval.expression) = create_str_expr((yyvsp[0].str_value));
                    free((yyvsp[0].str_value));
                }
#line 3304 "parser/parser.c"
    break;

  case 76: /* func_cte_expr: CHAR  */
#line 310 "parser/c7.y"
                          {
                    (yyval.expression) = create_char_expr((yyvsp[0].char_value));
                }
#line 3312 "parser/parser.c"
    break;

  case 77: /* func_expr: func_call  */
#line 315 "parser/c7.y"
                               { (yyval.expression) = (yyvsp[0].expression); }
#line 3318 "parser/parser.c"
    break;

  case 78: /* func_expr: set_func_call  */
#line 316 "parser/c7.y"
                                   { (yyval.expression) = (yyvsp[0].expression); }
#line 3324 "parser/parser.c"
    break;

  case 79: /* func_expr: PARENT_LEFT func_cte_expr PARENT_RIGHT  */
#line 317 "parser/c7.y"
                                                            { (yyval.expression) = (yyvsp[-1].expression); }
#line 3330 "parser/parser.c"
    break;

  case 80: /* arith_expr: arith_expr ADD term  */
#line 320 "parser/c7.y"
                                           {
                (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_char_expr((yyvsp[-1].char_value)), (yyvsp[0].expression));
            }
#line 3338 "parser/parser.c"
    break;

  case 81: /* arith_expr: arith_expr SUB term  */
#line 323 "parser/c7.y"
                                           {
                (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_char_expr((yyvsp[-1].char_value)), (yyvsp[0].expression));
            }
#line 3346 "parser/parser.c"
    break;

  case 82: /* arith_expr: term  */
#line 326 "parser/c7.y"
                      { (yyval.expression) = (yyvsp[0].expression); }
#line 3352 "parser/parser.c"
    break;

  case 83: /* term: term MULT factor  */
#line 329 "parser/c7.y"
                                    {
            (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_char_expr((yyvsp[-1].char_value)), (yyvsp[0].expression));
        }
#line 3360 "parser/parser.c"
    break;

  case 84: /* term: term DIV factor  */
#line 332 "parser/c7.y"
                                   {
            (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_char_expr((yyvsp[-1].char_value)), (yyvsp[0].expression));
        }
#line 3368 "parser/parser.c"
    break;

  case 85: /* term: factor  */
#line 335 "parser/c7.y"
                    { (yyval.expression) = (yyvsp[0].expression); }
#line 3374 "parser/parser.c"
    break;

  case 86: /* term: SUB factor  */
#line 336 "parser/c7.y"
                                        { 
            (yyval.expression) = create_bin_expr(create_char_expr((yyvsp[-1].char_value)), (yyvsp[0].expression)); 
        }
#line 3382 "parser/parser.c"
    break;

  case 87: /* factor: INTEGER  */
#line 341 "parser/c7.y"
                     { (yyval.expression) = create_int_expr((yyvsp[0].int_value)); }
#line 3388 "parser/parser.c"
    break;

  case 88: /* factor: FLOAT  */
#line 342 "parser/c7.y"
                   { (yyval.expression) = create_float_expr((yyvsp[0].float_value)); }
#line 3394 "parser/parser.c"
    break;

  case 89: /* factor: ID  */
#line 343 "parser/c7.y"
                {
            (yyval.expression) = create_var_expr((yyvsp[0].int_value));
            set_id_type((yyvsp[0].int_value), ST_ID_VAR);
        }
#line 3403 "parser/parser.c"
    break;

  case 90: /* factor: PARENT_LEFT arith_expr PARENT_RIGHT  */
#line 347 "parser/c7.y"
                                                 { (yyval.expression) = (yyvsp[-1].expression); }
#line 3409 "parser/parser.c"
    break;

  case 91: /* factor: func_expr  */
#line 348 "parser/c7.y"
                       { (yyval.expression) = (yyvsp[0].expression); }
#line 3415 "parser/parser.c"
    break;


#line 3419 "parser/parser.c"

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

#line 351 "parser/c7.y"


void yyerror(const char *s) {
    printf("\nSyntaxError: %s in line %d, column %d.\n",
           s, parser_line, parser_column);
    parser_error += 1;
}
