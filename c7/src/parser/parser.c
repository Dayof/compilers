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
#define YYLAST   5119

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  45
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  36
/* YYNRULES -- Number of rules.  */
#define YYNRULES  92
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  612

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
     245,   249,   252,   253,   254,   258,   262,   268,   274,   280,
     285,   289,   293,   299,   300,   303,   307,   311,   314,   317,
     318,   319,   322,   325,   328,   331,   334,   337,   338,   343,
     344,   345,   349
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

#define YYPACT_NINF (-277)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-93)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       8,     6,    72,    65,   230,   377,   457,   227,  -277,   521,
     523,    75,    74,    18,   599,    53,    10,    70,   108,    98,
     667,   621,    86,  2258,   627,   129,   130,   134,   101,  1011,
     141,   151,   182,   191,   207,   215,   231,    31,  2290,  2322,
    2355,  2387,  2419,  3321,  2451,   201,   260,   160,   234,  3189,
    3189,   261,  3189,    14,   264,   294,   304,  1486,  1187,  1697,
     305,   308,   321,   364,   381,  1117,  1990,  2078,  3204,   197,
     282,  3204,  3204,  3204,  3350,   148,  1011,   634,  2483,  3321,
     953,    19,    11,   153,   325,  1585,  3097,  4407,   501,  2515,
    2547,   337,   401,   408,   415,   237,    37,  2152,  2201,  2579,
      59,    59,    14,    14,   432,   418,   610,   419,  3581,  1981,
     203,   399,   126,   463,   474,   481,   495,   195,   258,   465,
     223,   921,  3321,  3321,  1470,  3423,  3438,  3453,  3468,  3483,
    3498,  3513,  3438,   496,   498,   519,   526,  2213,  2264,  2293,
    2325,  2357,  1185,  3189,   536,  3219,  1401,  3087,  3248,   527,
     556,   557,   560,   567,  3263,  2611,   774,   409,   412,  4420,
    4433,  2643,  2675,  2707,  2739,   569,  3219,   424,  1185,   280,
     540,   292,  1185,   559,  2771,  1185,  2803,  2835,  2867,  3189,
     103,   596,   607,   609,   611,  3911,  3331,  3924,  4446,  4459,
    3958,  3971,  3189,   181,   605,   630,   631,   641,   644,   654,
     669,  1232,  1219,  1306,   672,   675,   688,   695,   345,  1403,
    1452,   703,  3189,   208,   694,   702,   704,   738,   756,   764,
     766,   550,   466,   855,   759,   781,   783,   785,   173,   862,
     927,  3189,   254,  3379,  1664,   817,   823,   829,   838,  4570,
    4583,   476,   534,   677,  4846,  4852,  4885,  4891,  4924,  4813,
    4616,  4629,  3189,   276,   329,   336,   349,   850,   853,   857,
     869,   456,   821,  1277,   378,   387,   389,   391,   281,  1284,
    1343,    82,    82,    37,    37,    37,  1600,   148,  3116,   591,
    3379,   820,  2899,   875,   878,   893,  1011,   902,   937,    38,
     884,  3321,  1089,   732,   794,  3189,   297,   807,   813,   835,
     939,   955,   956,   959,  1245,   922,  1349,   847,   879,   889,
     899,   885,  1372,  1388,  3189,   327,  3408,   661,   570,   978,
     981,   997,  1003,  3642,  3594,  3676,   422,    15,    22,    57,
     545,   729,  1745,  1832,  4193,  4206,  4159,  3689,  3723,  3292,
    2931,  2963,   812,   745,    37,  4005,  4018,   960,  3204,  3204,
    3204,   148,   103,   103,  1009,   964,  1804,   968,  3204,  3204,
    3204,   148,   181,   181,  2995,  1015,  1029,    37,   966,   996,
     977,  3204,  3204,  3204,   148,   127,   127,   208,   208,  1021,
    1049,    37,  4662,  4675,  3629,   606,   990,  3204,  3204,  3204,
    3379,  3528,  3528,   143,   143,   254,   254,  1026,  1092,    37,
    1381,  1640,  1007,  3204,  3204,  3204,   148,   200,   200,   276,
     276,  4052,  4065,  1918,  1924,   443,  3145,   721,  1243,  3027,
    1008,  3189,  3189,  1047,  3204,   197,  1011,    32,  1305,  1344,
    1053,  1125,    37,  1883,  1907,  1030,  3204,  3204,  3204,   148,
     267,   267,   297,   297,  1078,  1168,    37,  3736,  3770,  1542,
     135,  1065,  1048,  3204,  3204,  3204,   148,  3263,  3408,  3408,
    3543,  3543,   279,   279,   327,   327,   485,  3059,  4472,  4099,
    1088,  1091,  1099,  1105,   513,  4112,  4146,  1106,  2127,  1110,
    1123,  1129,  1131,   544,  2159,  2173,  1068,  1064,  1136,  1137,
    1141,  1145,   660,  1072,  1077,  1130,  1152,  4930,  4708,  1146,
    1158,  1159,  1160,   750,  4963,  4969,  4721,  4754,  4767,  4800,
     663,  1648,  1165,  1172,  1174,  1176,   670,  1655,  1717,  1794,
    1820,  5002,  1504,  1181,  1183,  1184,  1564,  1196,  1981,  1151,
     921,   914,  1942,  1201,  1202,  1206,  1212,   697,  2006,  2031,
    2065,  2071,  4240,  3783,  3263,  1215,  1216,  1217,  1225,   708,
     711,   374,   388,  4253,  4287,  3817,  3830,  3864,  3877,  4485,
    4498,  4511,  4524,  4537,  1229,  1230,  1231,  1239,  1242,  1238,
    1250,  1251,  1253,  1254,  5008,  5041,  5047,  5080,   712,   713,
     734,   768,   770,  1252,  1259,  1263,   921,  3174,  1612,  1712,
     916,   951,   972,  1010,  1012,   773,  4300,  4334,  4347,  4381,
    4394,  1880,  1944,  2028,  2091,   921,   775,   921,  2125,   921,
    2174,  2225
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
       0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -277,  -277,  -277,  1279,  -277,  -277,    90,  1240,  -277,  -276,
     -18,  -172,   -38,  -101,  -113,  -107,   -96,   -98,  -141,   -33,
     -25,   -34,   -39,  -228,    -6,    71,  -213,   796,   -17,   204,
     316,  1813,  1645,  1395,  1027,   604
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,     4,     5,    11,    38,    12,    16,   117,
      39,    40,    41,    42,    43,    44,   109,   110,   111,   112,
     241,   242,   243,   126,   244,   245,   132,   104,   224,   225,
     105,   226,   227,   228,   229,   230
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      21,   415,    78,    45,    84,   326,   341,   170,   291,    83,
      81,   279,    60,   146,   292,   391,    18,   -48,    82,    96,
     156,   -44,    19,    45,   -14,   121,   188,   -44,   -48,     1,
     -14,   392,   204,   204,   -48,   204,    75,    85,   530,    15,
      84,   164,   275,    75,    76,   120,   193,     7,   169,   -48,
     123,   426,   246,   458,    57,    97,    59,   122,   264,    60,
     -48,   459,   188,   -50,    96,    -2,     9,   174,    53,   -50,
     122,   176,     8,    85,   177,   474,   -13,   201,   276,   203,
      13,    14,   -13,    84,    84,   483,     1,   344,    83,   158,
       6,   180,   246,     6,    17,   -50,   -50,   157,   492,    57,
      97,    59,   460,   290,   293,   188,   188,   330,   344,   188,
     419,    20,   329,   327,    86,   188,    85,    85,   461,    22,
     159,   328,   185,   345,   187,    45,   204,    47,   307,   333,
     516,   246,   367,   -44,    48,    49,   213,   264,   -44,    50,
     331,   -51,    51,   185,   345,   187,    68,   -51,   381,   307,
      86,    45,   232,   252,   -17,    45,    69,   253,    45,   -50,
     -17,    45,   204,   537,   280,   254,   -12,   221,   368,   223,
     255,   256,   -12,   -51,   -51,   204,   257,   258,   259,   260,
     549,   375,   376,   239,   382,   240,   275,    70,   261,   262,
     263,   -50,   -50,    86,    86,   204,    71,    86,   466,   385,
     -73,   153,   231,   160,   106,   399,   232,   154,    89,   253,
     147,   233,    72,   367,   204,   148,   246,   332,   107,   234,
      73,   201,   276,   203,    46,   235,   236,   237,   238,   -51,
      -5,    -5,    -8,    61,   -10,   204,    74,   239,   108,   240,
     261,   400,   263,   137,    46,   273,   274,   189,   221,   368,
     223,    -5,    84,   205,   205,   417,   205,    83,   427,   381,
     264,   -51,   -51,   246,   -16,    45,    82,    90,   -10,    60,
     -16,   -77,   432,   247,   188,    91,   296,   330,   204,   265,
      61,   399,   450,   189,   446,    85,   175,   -73,   315,   407,
     408,   392,   339,   -73,   239,   382,   240,   204,   -15,   333,
     330,   -75,   432,    78,   -15,   329,   327,   304,   433,   306,
     331,   -76,   -79,   247,   328,   -80,   261,   400,   263,   323,
     447,   325,   333,   113,    45,   294,   189,   189,    99,   528,
     189,   -52,   446,   331,   264,   -77,   189,   304,   433,   306,
     461,   -77,   -75,   133,   264,    62,    46,   205,   -75,   308,
     334,   -73,   247,   273,   274,   -76,   503,   264,   265,   124,
     125,   -76,    86,   -52,   -52,    92,    93,   323,   447,   325,
     308,   -74,    46,   246,   246,   246,    46,    -6,    -6,    46,
     -47,    78,    46,   205,   -79,   504,   -47,   332,   -78,   264,
     -79,   118,   119,   -80,   -49,   -74,   205,   -78,    -6,   -80,
     -49,   -74,    45,   -78,   204,   204,   -42,   134,   246,    60,
     332,   -42,   -47,   459,   135,   -47,   205,   291,   -49,   330,
     330,   136,   264,   292,   329,   552,   -49,   -49,   -42,   589,
     279,   -46,   587,   551,   -42,   205,   -46,   247,   142,   264,
     264,   333,   333,   333,   333,   143,   326,   -47,   123,   521,
     -49,   -49,   331,   331,   553,   154,   205,    -7,    -7,   165,
     144,   167,   -89,   505,   -89,   -89,   -89,   -89,   -89,   149,
     171,   374,   155,   291,   -91,   -91,   -91,   -91,    -7,   292,
     150,   265,   173,   -48,   247,   604,    46,   151,   -48,   606,
      61,   -43,   291,   -91,   291,   189,   291,   -43,   292,   205,
     292,   152,   292,   161,   608,   162,   610,   -59,   611,   271,
     272,   246,   290,   293,   -48,   390,   -59,   -59,   205,   563,
     334,    -4,    -4,    -3,    -3,   154,   163,   264,   -59,   332,
     332,   332,   554,   -81,   -69,   -59,   -59,   -59,   -59,   -59,
     -59,   -50,    -4,   334,    -3,    46,   -50,   -43,   330,   166,
     568,   -52,   -43,   329,   327,   265,   154,   -52,   -89,   -89,
     -89,   -89,   328,   -70,   -71,   265,   -45,   -72,   290,   293,
     333,   -45,   -50,   -50,   -68,   -67,   -60,   -89,   265,   124,
     125,   331,   -60,   -52,   -52,   -60,   -60,   290,   293,   290,
     293,   290,   293,   118,   247,   247,   247,   -60,   416,   -11,
     -11,   347,   423,   148,   -60,   -60,   -60,   -60,   -60,   -60,
     265,   -77,   348,   -51,   349,   -40,   350,   -40,   -51,   -40,
     -11,    -9,    -9,    46,   -40,   205,   205,   -19,   -19,   247,
      61,   -40,   -40,    67,   -18,   -18,   -75,   -76,   -40,   -40,
     -40,   -40,    -9,   265,   -51,   -51,   357,   191,   -19,   358,
     -40,   -40,   -40,   210,   210,   -18,   210,    98,   332,   359,
     265,   265,   334,   334,   334,   334,   573,   118,    23,   -81,
     178,    24,   154,   251,   360,   -81,   582,   118,   -79,   270,
      67,   -80,   154,   191,   -52,    25,    26,    27,    28,   -52,
     118,    29,    30,    31,   -74,    32,    33,    34,    35,    36,
     210,   -78,   451,   594,    67,    67,   140,   141,    37,   154,
     364,   124,   125,   251,   600,   -52,   -52,   -46,   -69,   -70,
     154,   -77,   118,   -46,   -69,   -70,   191,   191,   -47,   -75,
     191,   -76,   247,   -47,   294,   -54,   191,   524,   525,   428,
     -71,   -54,   529,   370,   127,   128,   -71,   210,   265,   313,
     338,   469,   251,   273,   274,   118,   129,   -49,   270,   -47,
     390,   371,   -49,   -54,   -54,   130,   131,   -54,   -54,   372,
     313,   373,   118,   550,   -72,   -35,   -68,   -35,   -35,   -45,
     -72,   609,   -68,   210,   346,   -45,   -79,   339,   -49,   -49,
     294,   334,   -35,   -35,   -35,   -35,   210,   356,   -35,   -35,
     -35,   429,   -35,   -35,   -35,   -35,   -35,   172,   -80,   294,
     -74,   294,   -78,   294,   -77,   -35,   210,   369,   468,   -77,
     -75,   -33,   386,   -33,   -33,   -75,   406,   -91,   387,   -91,
     -91,   -91,   -91,   -91,   388,   210,   383,   251,   -33,   -33,
     -33,   -33,   -76,   389,   -33,   -33,   -33,   -76,   -33,   -33,
     -33,   -33,   -33,   -33,   -79,   402,   210,   401,   403,   -79,
     595,   -33,   404,   -90,   -90,   -90,   -90,   114,   115,   116,
     -84,   -84,   377,   378,   405,   191,   191,   210,   210,   210,
     420,   270,   -90,   421,   251,   -24,   -80,   -24,   -24,   -84,
      67,   -80,   -73,   440,   441,   191,   -74,   -73,   422,   210,
     434,   -74,   -24,   -24,   -24,   -24,   -78,   424,   -24,   -24,
     -24,   -78,   -24,   -24,   -24,   -24,   -24,   -24,   210,   448,
     338,   -81,   281,   -69,   282,   -24,   -81,   439,   -69,   -91,
     -91,   -91,   -91,   -91,   -91,   -87,   -87,   -87,   -87,   283,
     284,   285,   425,   338,   435,   286,   287,   288,   210,    32,
      33,    34,    35,    36,   -87,   270,   475,   476,   -70,   -60,
     436,   437,   289,   -70,   438,   270,   484,   485,   -60,   -60,
     478,   210,   273,   274,   -91,   -91,   -91,   -91,   270,   -71,
     -60,   495,   496,   452,   -71,   210,   453,   -60,   -60,   -60,
     -60,   -60,   -60,   -91,   251,   251,   251,   251,   251,   508,
     509,   470,   454,   210,   -88,   -88,   -88,   -88,   455,   479,
     270,   270,   270,   519,   520,   477,    52,   -72,   488,   -68,
      53,   486,   -72,   -88,   -68,   210,   210,   497,    54,   251,
      67,   499,   510,    55,    56,   487,   210,   273,   274,    32,
      33,    34,    35,   270,   313,   313,   540,   541,   512,   523,
     210,    57,    58,    59,   526,   498,    66,   273,   274,   531,
     270,   270,   338,   338,   338,   338,   338,   338,   557,   558,
     190,   533,   -92,   -92,   -92,   -92,   209,   209,   544,   209,
     -82,   -82,   377,   378,   542,   -83,   -83,   377,   378,   545,
     -27,   -92,   -27,   -27,   559,   -81,   250,   560,   511,   -82,
     273,   274,   269,    66,   -83,   561,   190,   -27,   -27,   -27,
     -27,   562,   -81,   -27,   -27,   -27,   564,   -27,   -27,   -27,
     -27,   -27,   -27,   209,   -73,   100,   101,   138,   139,   565,
     -27,   532,   251,   273,   274,   566,   250,   567,   -85,   -85,
     -85,   -85,   569,   570,   471,   472,   473,   571,   270,   190,
     190,   572,   574,   190,   480,   481,   482,   -85,   588,   190,
     -86,   -86,   -86,   -86,   575,   576,   577,   489,   490,   491,
     209,   578,   312,   337,   543,   250,   273,   274,   579,   -86,
     580,   269,   581,   500,   501,   502,    23,   583,   178,   584,
     585,   338,    75,   312,   -91,   -91,   -91,   -91,   -91,   513,
     514,   515,   586,    25,    26,    27,   209,   590,   591,    29,
      30,    31,   592,    32,    33,    34,    35,    36,   593,   209,
     527,   596,   597,   598,   361,   -91,    37,   -91,   -91,   -91,
     -91,   599,   534,   535,   536,   -69,   -70,   -71,   -89,   209,
     -89,   -89,   -89,   -89,   -19,   -72,   -19,   -19,   -68,   546,
     547,   548,   -89,   -89,   -89,   -89,   -89,   -89,   209,   601,
     250,   -19,   -19,   -19,   -19,   -69,   602,   -19,   -19,   -19,
     603,   -19,   -19,   -19,   -19,   -19,   -19,   -70,   -71,   209,
     -72,   -68,    10,   -90,   -19,   -90,   -90,   -90,   -90,   -90,
     -84,   211,   -84,   -84,   409,   410,   -84,     0,   411,   412,
     413,   414,   209,     0,   269,     0,   -25,   250,   -25,   -25,
       0,     0,   -90,    66,   -90,   -90,   -90,   -90,   190,     0,
       0,     0,   209,   -25,   -25,   -25,   -25,     0,     0,   -25,
     -25,   -25,     0,   -25,   -25,   -25,   -25,   -25,   -25,     0,
       0,   209,     0,   337,     0,   -26,   -25,   -26,   -26,   -87,
       0,   -87,   -87,   -87,   -87,   -87,   -90,   -90,   -90,   -90,
     -90,   -90,   -26,   -26,   -26,   -26,   337,     0,   -26,   -26,
     -26,   209,   -26,   -26,   -26,   -26,   -26,   -26,   269,   -84,
     -84,   -84,   442,   443,   -84,   -26,     0,   -91,   269,   -91,
     -91,   -91,   -91,   -91,   209,   -87,   -87,   -87,   -87,   -87,
     -87,   269,   493,   494,     0,     0,   314,   168,   209,   -84,
     315,   -84,   -84,   362,   363,   316,     0,   250,   250,   250,
     506,   507,   317,   318,    65,     0,   209,     0,     0,   319,
     320,   321,   322,   269,   517,   518,     0,     0,    88,     0,
       0,   323,   324,   325,   208,   208,     0,    95,   209,   209,
       0,     0,   250,    66,     0,     0,     0,     0,   -87,   209,
     -87,   -87,   -87,   -87,   249,     0,   269,   538,   539,     0,
     268,    65,     0,   209,    88,   -55,     0,     0,     0,   -55,
       0,     0,     0,   269,   269,   337,   337,   337,   337,   555,
     556,    95,   -55,   -89,   -89,   -89,   -89,   -89,   -55,   -55,
     -55,   -55,     0,     0,   249,   -18,     0,   -18,   -18,     0,
     -55,   -55,   -55,     0,     0,     0,     0,    88,    88,     0,
       0,    88,   -18,   -18,   -18,   -18,     0,    88,   -18,   -18,
     -18,     0,   -18,   -18,   -18,   -18,   -18,   -18,   208,     0,
     311,   336,     0,   249,     0,   -18,     0,   456,   -91,   268,
     -91,   -91,   -91,   -91,   -91,   250,     0,   -91,   -91,     0,
       0,   311,     0,     0,     0,   -32,     0,   -32,   -32,   -91,
       0,   269,     0,     0,   343,     0,   -91,   -91,   -91,   -91,
     -91,   -91,   -32,   -32,   -32,   -32,     0,   355,   -32,   -32,
     -32,   -54,   -32,   -32,   -32,   -32,   -32,   -32,     0,     0,
     127,   128,     0,     0,     0,   -32,   -91,   366,   -91,   -91,
     -91,   -91,   129,   -31,   337,   -31,   -31,     0,     0,   -54,
     -54,   130,   131,   -54,   -54,     0,   380,     0,   249,     0,
     -31,   -31,   -31,   -31,     0,     0,   -31,   -31,   -31,     0,
     -31,   -31,   -31,   -31,   -31,   -31,   -88,   398,   -88,   -88,
     -88,   -88,   -88,   -31,   -92,     0,   -92,   -92,   -92,   -92,
     -92,   -82,     0,   -82,   -82,   409,   410,   -82,     0,     0,
     355,   -60,   268,     0,    64,   249,   -60,     0,     0,   -60,
     -60,    65,     0,     0,     0,     0,    88,     0,    87,     0,
     431,   -60,     0,     0,   207,   207,     0,   207,   -60,   -60,
     -60,   -60,   -60,   -60,   -90,   -90,   -90,   -90,   -90,   445,
       0,   336,     0,   -35,   248,   -35,   -35,     0,     0,     0,
     267,    64,     0,   -83,    87,   -83,   -83,   409,   410,   -83,
     -35,   -35,   -35,   -35,   336,     0,   -35,   -35,   -35,   343,
     -35,   -35,   -35,   -35,   -35,   607,   268,     0,     0,     0,
       0,   -58,     0,   -35,   248,     0,   268,   -58,     0,     0,
     -58,   -58,   366,     0,     0,     0,     0,    87,    87,   268,
       0,    87,   -58,     0,     0,     0,   380,    87,     0,   -58,
     -58,   -58,   -58,   -58,   -58,   249,   249,   249,   207,     0,
     310,   335,     0,   248,   398,     0,     0,     0,     0,   267,
     -85,   268,   -85,   -85,   -85,   -85,   -85,     0,     0,     0,
     -88,   310,   -88,   -88,   -88,   -88,   208,   208,     0,     0,
     249,    65,     0,     0,   207,     0,   -86,   431,   -86,   -86,
     -86,   -86,   -86,     0,   268,     0,     0,   207,   -79,     0,
       0,   445,    63,     0,   -79,     0,     0,   -79,   -79,     0,
       0,   268,   268,   336,   336,   336,   336,   207,     0,   -79,
       0,     0,   206,   206,     0,    94,   -79,   -79,   -79,   -79,
     -79,   -79,     0,     0,     0,     0,   207,     0,   248,     0,
       0,   -28,     0,   -28,   -28,     0,     0,     0,   266,    63,
     -91,   -91,   -91,   -91,   -91,   -91,     0,   207,   -28,   -28,
     -28,   -28,     0,     0,   -28,   -28,   -28,     0,   -28,   -28,
     -28,   -28,   -28,   -28,   -88,   -88,   -88,   -88,   -88,   -88,
       0,   -28,   267,   249,   -82,   248,   -82,   -82,   362,   363,
     -83,    64,   -83,   -83,   362,   363,    87,     0,     0,   268,
     207,     0,     0,     0,     0,   -29,     0,   -29,   -29,   -92,
     -92,   -92,   -92,   -92,   -92,     0,   206,     0,   309,   207,
       0,   335,   -29,   -29,   -29,   -29,     0,   266,   -29,   -29,
     -29,     0,   -29,   -29,   -29,   -29,   -29,   -29,     0,   309,
       0,     0,   336,     0,   335,   -29,   231,     0,   278,     0,
     232,     0,   342,     0,     0,   233,   267,   -84,   -84,   -84,
     102,   103,   107,   234,     0,   354,   267,     0,     0,   235,
     236,   237,   238,   -82,   -82,   -82,   442,   443,   -82,   267,
       0,   239,   108,   240,     0,   365,     0,     0,     0,   -30,
       0,   -30,   -30,     0,     0,   248,   248,   248,   -83,   -83,
     -83,   442,   443,   -83,   379,     0,   -30,   -30,   -30,   -30,
       0,   267,   -30,   -30,   -30,     0,   -30,   -30,   -30,   -30,
     -30,   -30,     0,     0,     0,   397,   207,   207,     0,   -30,
     248,    64,   -85,   -85,   -85,   -85,   -85,   -85,   -86,   -86,
     -86,   -86,   -86,   -86,   267,   -87,   -87,   -87,   -87,   -87,
     266,     0,   -37,     0,   -37,   -37,     0,     0,     0,    63,
       0,   267,   267,   335,   335,   335,   335,     0,   430,   -37,
     -37,   -37,   -37,     0,     0,   -37,   -37,   -37,     0,   -37,
     -37,   -37,   -37,   -37,   -37,     0,   -38,   444,   -38,   -38,
       0,     0,   -37,   -92,     0,   -92,   -92,   -92,   -92,     0,
       0,     0,     0,   -38,   -38,   -38,   -38,     0,     0,   -38,
     -38,   -38,     0,   -38,   -38,   -38,   -38,   -38,   -38,   -91,
     -91,   -91,   -91,   -91,   266,   -85,   -38,   -85,   -85,   -85,
     -85,     0,     0,   248,   266,   -36,     0,   -36,   -36,   -86,
       0,   -86,   -86,   -86,   -86,     0,     0,   266,     0,   267,
       0,     0,   -36,   -36,   -36,   -36,     0,     0,   -36,   -36,
     -36,     0,   -36,   -36,   -36,   -36,   -36,   -36,   -88,   -88,
     -88,   -88,   -88,     0,     0,   -36,     0,     0,     0,   266,
     -92,   -92,   -92,   -92,   -92,     0,   -39,     0,   -39,   -39,
       0,     0,   335,     0,   206,   206,     0,     0,     0,    63,
       0,     0,     0,   -39,   -39,   -39,   -39,     0,     0,   -39,
     -39,   -39,   266,   -39,   -39,   -39,   -39,   -39,   -39,   -33,
       0,   -33,   -33,     0,     0,     0,   -39,     0,     0,   266,
     266,   -82,   -82,   -82,   102,   103,   -33,   -33,   -33,   -33,
       0,     0,   -33,   -33,   -33,     0,   -33,   -33,   -33,   -33,
     -33,   -22,     0,   -22,   -22,     0,     0,     0,     0,   -33,
     -83,   -83,   -83,   102,   103,     0,     0,     0,   -22,   -22,
     -22,   -22,     0,     0,   -22,   -22,   -22,     0,   -22,   -22,
     -22,   -22,   -22,   -24,     0,   -24,   -24,     0,     0,     0,
       0,   -22,   -85,   -85,   -85,   -85,   -85,     0,     0,     0,
     -24,   -24,   -24,   -24,     0,     0,   -24,   -24,   -24,     0,
     -24,   -24,   -24,   -24,   -24,     0,    23,   266,   178,    77,
       0,     0,     0,   -24,   -86,   -86,   -86,   -86,   -86,     0,
       0,     0,     0,    25,    26,    27,    28,     0,     0,    29,
      30,    31,     0,    32,    33,    34,    35,    36,   -21,     0,
     -21,   -21,     0,     0,     0,     0,    37,     0,     0,     0,
       0,     0,     0,     0,     0,   -21,   -21,   -21,   -21,     0,
       0,   -21,   -21,   -21,     0,   -21,   -21,   -21,   -21,   -21,
     -23,     0,   -23,   -23,     0,     0,     0,     0,   -21,     0,
       0,     0,     0,     0,     0,     0,     0,   -23,   -23,   -23,
     -23,     0,     0,   -23,   -23,   -23,     0,   -23,   -23,   -23,
     -23,   -23,   -27,     0,   -27,   -27,     0,     0,     0,     0,
     -23,     0,     0,     0,     0,     0,     0,     0,     0,   -27,
     -27,   -27,   -27,     0,     0,   -27,   -27,   -27,     0,   -27,
     -27,   -27,   -27,   -27,   -20,     0,   -20,   -20,     0,     0,
       0,     0,   -27,     0,     0,     0,     0,     0,     0,     0,
       0,   -20,   -20,   -20,   -20,     0,     0,   -20,   -20,   -20,
       0,   -20,   -20,   -20,   -20,   -20,   -25,     0,   -25,   -25,
       0,     0,     0,     0,   -20,     0,     0,     0,     0,     0,
       0,     0,     0,   -25,   -25,   -25,   -25,     0,     0,   -25,
     -25,   -25,     0,   -25,   -25,   -25,   -25,   -25,   -26,     0,
     -26,   -26,     0,     0,     0,     0,   -25,     0,     0,     0,
       0,     0,     0,     0,     0,   -26,   -26,   -26,   -26,     0,
       0,   -26,   -26,   -26,     0,   -26,   -26,   -26,   -26,   -26,
     -32,     0,   -32,   -32,     0,     0,     0,     0,   -26,     0,
       0,     0,     0,     0,     0,     0,     0,   -32,   -32,   -32,
     -32,     0,     0,   -32,   -32,   -32,     0,   -32,   -32,   -32,
     -32,   -32,   -31,     0,   -31,   -31,     0,     0,     0,     0,
     -32,     0,     0,     0,     0,     0,     0,     0,     0,   -31,
     -31,   -31,   -31,     0,     0,   -31,   -31,   -31,     0,   -31,
     -31,   -31,   -31,   -31,   -28,     0,   -28,   -28,     0,     0,
       0,     0,   -31,     0,     0,     0,     0,     0,     0,     0,
       0,   -28,   -28,   -28,   -28,     0,     0,   -28,   -28,   -28,
       0,   -28,   -28,   -28,   -28,   -28,   -29,     0,   -29,   -29,
       0,     0,     0,     0,   -28,     0,     0,     0,     0,     0,
       0,     0,     0,   -29,   -29,   -29,   -29,     0,     0,   -29,
     -29,   -29,     0,   -29,   -29,   -29,   -29,   -29,   -30,     0,
     -30,   -30,     0,     0,     0,     0,   -29,     0,     0,     0,
       0,     0,     0,     0,     0,   -30,   -30,   -30,   -30,     0,
       0,   -30,   -30,   -30,     0,   -30,   -30,   -30,   -30,   -30,
     -37,     0,   -37,   -37,     0,     0,     0,     0,   -30,     0,
       0,     0,     0,     0,     0,     0,     0,   -37,   -37,   -37,
     -37,     0,     0,   -37,   -37,   -37,     0,   -37,   -37,   -37,
     -37,   -37,   -38,     0,   -38,   -38,     0,     0,     0,     0,
     -37,     0,     0,     0,     0,     0,     0,     0,     0,   -38,
     -38,   -38,   -38,     0,     0,   -38,   -38,   -38,     0,   -38,
     -38,   -38,   -38,   -38,   -36,     0,   -36,   -36,     0,     0,
       0,     0,   -38,     0,     0,     0,     0,     0,     0,     0,
       0,   -36,   -36,   -36,   -36,     0,     0,   -36,   -36,   -36,
       0,   -36,   -36,   -36,   -36,   -36,   -39,     0,   -39,   -39,
       0,     0,     0,     0,   -36,     0,     0,     0,     0,     0,
       0,     0,     0,   -39,   -39,   -39,   -39,     0,     0,   -39,
     -39,   -39,     0,   -39,   -39,   -39,   -39,   -39,    23,     0,
     178,   340,     0,     0,     0,     0,   -39,     0,     0,     0,
       0,     0,     0,     0,     0,    25,    26,    27,    28,     0,
       0,    29,    30,    31,     0,    32,    33,    34,    35,    36,
      23,     0,   178,   418,     0,     0,     0,     0,    37,     0,
       0,     0,     0,     0,     0,     0,     0,    25,    26,    27,
      28,     0,     0,    29,    30,    31,     0,    32,    33,    34,
      35,    36,   -19,     0,   -19,   -19,     0,     0,     0,     0,
      37,     0,     0,     0,     0,     0,     0,     0,     0,   -19,
     -19,   -19,   -19,     0,     0,   -19,   -19,   -19,     0,   -19,
     -19,   -19,   -19,   -19,    23,     0,   178,   467,     0,     0,
       0,     0,   -19,     0,     0,     0,     0,     0,     0,     0,
       0,    25,    26,    27,    28,     0,     0,    29,    30,    31,
       0,    32,    33,    34,    35,    36,   -11,     0,   -11,   -11,
       0,     0,     0,     0,    37,     0,     0,     0,     0,     0,
       0,     0,     0,   -11,   -11,   -11,   -11,     0,     0,   -11,
     -11,   -11,     0,   -11,   -11,   -11,   -11,   -11,    23,     0,
     178,   522,     0,     0,     0,     0,   -11,     0,     0,     0,
       0,     0,     0,     0,     0,    25,    26,    27,    28,     0,
       0,    29,    30,    31,     0,    32,    33,    34,    35,    36,
     -18,     0,   -18,   -18,     0,     0,     0,     0,    37,     0,
       0,     0,     0,     0,     0,     0,     0,   -18,   -18,   -18,
     -18,     0,     0,   -18,   -18,   -18,     0,   -18,   -18,   -18,
     -18,   -18,   -41,     0,   -41,     0,   -41,     0,     0,     0,
     -18,   -41,     0,   -58,     0,     0,     0,     0,   -41,   -41,
       0,     0,   -58,   -58,     0,   -41,   -41,   -41,   -41,     0,
       0,   -40,   -40,     0,   -58,   -40,     0,   -41,   -41,   -41,
     -40,   -58,   -58,   -58,   -58,   -58,   -58,   -40,   -40,     0,
       0,     0,     0,     0,   -40,   -40,   -40,   -40,     0,     0,
     -41,   -41,     0,     0,   -41,     0,   -40,   -40,   -40,   -41,
       0,     0,     0,     0,     0,     0,   -41,   -41,     0,     0,
       0,     0,     0,   -41,   -41,   -41,   -41,     0,     0,   314,
     605,     0,     0,   315,     0,   -41,   -41,   -41,   316,     0,
       0,     0,     0,     0,   192,   317,   318,     0,   193,     0,
       0,     0,   319,   320,   321,   322,   194,     0,     0,   212,
       0,   195,   196,   213,   323,   324,   325,   197,   198,   199,
     200,   214,     0,     0,   295,     0,   215,   216,   296,   201,
     202,   203,   217,   218,   219,   220,   297,     0,     0,     0,
       0,   298,   299,     0,   221,   222,   223,   300,   301,   302,
     303,     0,     0,   231,     0,     0,     0,   232,     0,   304,
     305,   306,   233,     0,     0,     0,     0,     0,   252,   107,
     234,     0,   253,     0,     0,     0,   235,   236,   237,   238,
     254,     0,     0,     0,     0,   255,   256,     0,   239,   108,
     240,   257,   258,   259,   260,     0,     0,   314,     0,     0,
       0,   315,     0,   261,   262,   263,   316,     0,     0,     0,
       0,     0,     0,   317,   318,     0,     0,     0,     0,     0,
     319,   320,   321,   322,     0,     0,   179,     0,     0,     0,
     180,     0,   323,   324,   325,    79,   351,   -91,     0,   -91,
     -91,   -91,   -91,    80,     0,     0,   -91,   -91,     0,   181,
     182,   183,   184,     0,     0,   -34,     0,     0,   -91,   -34,
       0,   185,   186,   187,   -34,   -91,   -91,   -91,   -91,   -91,
     -91,     0,   -34,     0,     0,     0,     0,     0,   -34,   -34,
     -34,   -34,     0,     0,   231,     0,     0,     0,   232,     0,
     -34,   -34,   -34,   233,     0,     0,     0,     0,     0,     0,
       0,   234,     0,     0,     0,     0,     0,   235,   236,   237,
     238,     0,     0,   314,     0,     0,     0,   315,     0,   239,
     384,   240,   316,     0,     0,     0,     0,     0,   -56,     0,
     318,     0,   -56,     0,     0,     0,   319,   320,   321,   322,
       0,     0,     0,   179,     0,   -56,     0,   180,   323,   449,
     325,   -56,   -56,   -56,   -56,     0,     0,     0,   -62,     0,
      80,     0,   -62,   -56,   -56,   -56,   181,   182,   183,   184,
       0,     0,     0,   -63,     0,   -62,     0,   -63,   185,   186,
     187,   -62,   -62,   -62,   -62,     0,     0,     0,   -66,     0,
     -63,     0,   -66,   -62,   -62,   -62,   -63,   -63,   -63,   -63,
       0,     0,     0,   -64,     0,   -66,     0,   -64,   -63,   -63,
     -63,   -66,   -66,   -66,   -66,     0,     0,     0,   -65,     0,
     -64,     0,   -65,   -66,   -66,   -66,   -64,   -64,   -64,   -64,
       0,     0,     0,   231,     0,   -65,     0,   232,   -64,   -64,
     -64,   -65,   -65,   -65,   -65,     0,     0,     0,   314,     0,
     234,     0,   315,   -65,   -65,   -65,   235,   236,   237,   238,
       0,     0,     0,     0,     0,   318,     0,     0,   239,   384,
     240,   319,   320,   321,   322,     0,     0,     0,     0,     0,
       0,     0,     0,   323,   449,   325,   277,     0,   -91,   -91,
     -91,   -91,   -91,   -91,   145,     0,   -91,   -91,     0,   456,
     -91,     0,   -91,   -91,   -91,   -91,   -91,   457,   -91,   -91,
     -91,     0,     0,     0,     0,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,     0,     0,     0,     0,     0,     0,   -91,   -91,
     -91,   -91,   -91,   -91,   277,     0,   -91,   -91,   -91,   -91,
     -91,   -91,     0,     0,   -91,   -91,     0,     0,   -89,     0,
     -89,   -89,   -89,   -89,   -89,     0,   -91,   -89,   -89,     0,
       0,     0,     0,   -91,   -91,   -91,   -91,   -91,   -91,   -89,
       0,     0,     0,     0,     0,     0,   -89,   -89,   -89,   -89,
     -89,   -89,   -90,     0,   -90,   -90,   -90,   -90,   -90,     0,
       0,   -90,   -90,     0,     0,   -84,     0,   -84,   -84,   464,
     465,   -84,     0,   -90,   -84,   -84,     0,     0,     0,     0,
     -90,   -90,   -90,   -90,   -90,   -90,   -84,     0,     0,     0,
       0,     0,     0,   -84,   -84,   -84,   -84,   -84,   -84,   -87,
       0,   -87,   -87,   -87,   -87,   -87,     0,     0,   -87,   -87,
       0,     0,   -91,     0,   -91,   -91,   -91,   -91,   -91,     0,
     -87,   -91,   -91,     0,     0,     0,     0,   -87,   -87,   -87,
     -87,   -87,   -87,   -91,     0,     0,     0,     0,     0,     0,
     -91,   -91,   -91,   -91,   -91,   -91,   -88,     0,   -88,   -88,
     -88,   -88,   -88,     0,     0,   -88,   -88,     0,     0,   -92,
       0,   -92,   -92,   -92,   -92,   -92,     0,   -88,   -92,   -92,
       0,     0,     0,     0,   -88,   -88,   -88,   -88,   -88,   -88,
     -92,     0,     0,     0,     0,     0,     0,   -92,   -92,   -92,
     -92,   -92,   -92,   -82,     0,   -82,   -82,   464,   465,   -82,
       0,     0,   -82,   -82,     0,     0,   -83,     0,   -83,   -83,
     464,   465,   -83,     0,   -82,   -83,   -83,     0,     0,     0,
       0,   -82,   -82,   -82,   -82,   -82,   -82,   -83,     0,     0,
       0,     0,     0,     0,   -83,   -83,   -83,   -83,   -83,   -83,
     -85,     0,   -85,   -85,   -85,   -85,   -85,     0,     0,   -85,
     -85,     0,     0,   -86,     0,   -86,   -86,   -86,   -86,   -86,
       0,   -85,   -86,   -86,     0,     0,     0,     0,   -85,   -85,
     -85,   -85,   -85,   -85,   -86,     0,     0,     0,     0,     0,
       0,   -86,   -86,   -86,   -86,   -86,   -86,   -89,     0,   -89,
     -89,   -89,   -89,     0,     0,     0,   -89,   -89,     0,     0,
     -90,     0,   -90,   -90,   -90,   -90,     0,     0,   -89,   -90,
     -90,     0,     0,     0,     0,   -89,   -89,   -89,   -89,   -89,
     -89,   -90,     0,     0,     0,     0,     0,     0,   -90,   -90,
     -90,   -90,   -90,   -90,   -84,     0,   -84,   -84,   352,   353,
       0,     0,     0,   -84,   -84,     0,     0,   -87,     0,   -87,
     -87,   -87,   -87,     0,     0,   -84,   -87,   -87,     0,     0,
       0,     0,   -84,   -84,   -84,   -84,   -84,   -84,   -87,     0,
       0,     0,     0,     0,     0,   -87,   -87,   -87,   -87,   -87,
     -87,   -91,     0,   -91,   -91,   -91,   -91,     0,     0,     0,
     -91,   -91,     0,     0,   -88,     0,   -88,   -88,   -88,   -88,
       0,     0,   -91,   -88,   -88,     0,     0,     0,     0,   -91,
     -91,   -91,   -91,   -91,   -91,   -88,     0,     0,     0,     0,
       0,     0,   -88,   -88,   -88,   -88,   -88,   -88,   -82,     0,
     -82,   -82,   352,   353,     0,     0,     0,   -82,   -82,     0,
       0,   -83,     0,   -83,   -83,   352,   353,     0,     0,   -82,
     -83,   -83,     0,     0,     0,     0,   -82,   -82,   -82,   -82,
     -82,   -82,   -83,     0,     0,     0,     0,     0,     0,   -83,
     -83,   -83,   -83,   -83,   -83,   -92,     0,   -92,   -92,   -92,
     -92,     0,     0,     0,   -92,   -92,     0,     0,   -85,     0,
     -85,   -85,   -85,   -85,     0,     0,   -92,   -85,   -85,     0,
       0,     0,     0,   -92,   -92,   -92,   -92,   -92,   -92,   -85,
       0,     0,     0,     0,     0,     0,   -85,   -85,   -85,   -85,
     -85,   -85,   -86,     0,   -86,   -86,   -86,   -86,     0,     0,
       0,   -86,   -86,     0,     0,   -59,     0,   462,   463,     0,
       0,   -59,     0,   -86,   -59,   -59,     0,     0,     0,     0,
     -86,   -86,   -86,   -86,   -86,   -86,   -59,     0,     0,     0,
       0,     0,     0,   -59,   -59,   -59,   -59,   -59,   -59,   -80,
       0,     0,     0,     0,     0,   -80,     0,     0,   -80,   -80,
       0,     0,   -61,     0,     0,     0,     0,     0,   -61,     0,
     -80,   -61,   -61,     0,     0,     0,     0,   -80,   -80,   -80,
     -80,   -80,   -80,   -61,     0,     0,     0,     0,     0,     0,
     -61,   -61,   -61,   -61,   -61,   -61,   -81,     0,     0,     0,
       0,     0,   -81,     0,     0,   -81,   -81,     0,     0,   -53,
       0,     0,     0,     0,     0,   -53,     0,   -81,   127,   128,
       0,     0,     0,     0,   -81,   -81,   -81,   -81,   -81,   -81,
     129,     0,     0,     0,     0,     0,     0,   -53,   -53,   130,
     131,   -53,   -53,   -57,     0,     0,     0,     0,     0,   -57,
       0,     0,   -57,   -57,     0,     0,   -69,     0,     0,     0,
       0,     0,   -69,     0,   -57,   -69,   -69,     0,     0,     0,
       0,   -57,   -57,   -57,   -57,   -57,   -57,   -69,     0,     0,
       0,     0,     0,     0,   -69,   -69,   -69,   -69,   -69,   -69,
     -70,     0,     0,     0,     0,     0,   -70,     0,     0,   -70,
     -70,     0,     0,   -71,     0,     0,     0,     0,     0,   -71,
       0,   -70,   -71,   -71,     0,     0,     0,     0,   -70,   -70,
     -70,   -70,   -70,   -70,   -71,     0,     0,     0,     0,     0,
       0,   -71,   -71,   -71,   -71,   -71,   -71,   -72,     0,     0,
       0,     0,     0,   -72,     0,     0,   -72,   -72,     0,     0,
     -68,     0,     0,     0,     0,     0,   -68,     0,   -72,   -68,
     -68,     0,     0,   -61,     0,   -72,   -72,   -72,   -72,   -72,
     -72,   -68,   -61,   -61,     0,     0,   -53,     0,   -68,   -68,
     -68,   -68,   -68,   -68,   -61,   127,   128,     0,     0,   -57,
       0,   -61,   -61,   -61,   -61,   -61,   -61,   129,   -57,   -57,
       0,     0,   -79,     0,   -53,   -53,   130,   131,   -53,   -53,
     -57,   -79,   -79,     0,     0,   -80,     0,   -57,   -57,   -57,
     -57,   -57,   -57,   -79,   -80,   -80,     0,     0,   -81,     0,
     -79,   -79,   -79,   -79,   -79,   -79,   -80,   -81,   -81,     0,
       0,   -69,     0,   -80,   -80,   -80,   -80,   -80,   -80,   -81,
     -69,   -69,     0,     0,   -70,     0,   -81,   -81,   -81,   -81,
     -81,   -81,   -69,   -70,   -70,     0,     0,   -71,     0,   -69,
     -69,   -69,   -69,   -69,   -69,   -70,   -71,   -71,     0,     0,
     -72,     0,   -70,   -70,   -70,   -70,   -70,   -70,   -71,   -72,
     -72,     0,     0,   -68,     0,   -71,   -71,   -71,   -71,   -71,
     -71,   -72,   -68,   -68,     0,     0,     0,     0,   -72,   -72,
     -72,   -72,   -72,   -72,   -68,     0,     0,     0,     0,     0,
       0,   -68,   -68,   -68,   -68,   -68,   -68,   -89,   -89,   -89,
     -89,   -89,   -89,     0,     0,   -89,   -89,     0,     0,     0,
     -90,   -90,   -90,   -90,   -90,   -90,     0,   -89,   -90,   -90,
       0,     0,     0,     0,   -89,   -89,   -89,   -89,   -89,   -89,
     -90,     0,     0,     0,     0,     0,     0,   -90,   -90,   -90,
     -90,   -90,   -90,   -84,   -84,   -84,   395,   396,   -84,     0,
       0,   -84,   -84,     0,     0,     0,   -87,   -87,   -87,   -87,
     -87,   -87,     0,   -84,   -87,   -87,     0,     0,     0,     0,
     -84,   -84,   -84,   -84,   -84,   -84,   -87,     0,     0,     0,
       0,     0,     0,   -87,   -87,   -87,   -87,   -87,   -87,   -91,
     -91,   -91,   -91,   -91,   -91,     0,     0,   -91,   -91,     0,
       0,     0,   -88,   -88,   -88,   -88,   -88,   -88,     0,   -91,
     -88,   -88,     0,     0,     0,     0,   -91,   -91,   -91,   -91,
     -91,   -91,   -88,     0,     0,     0,     0,     0,     0,   -88,
     -88,   -88,   -88,   -88,   -88,   -92,   -92,   -92,   -92,   -92,
     -92,     0,     0,   -92,   -92,     0,     0,     0,   -82,   -82,
     -82,   395,   396,   -82,     0,   -92,   -82,   -82,     0,     0,
       0,     0,   -92,   -92,   -92,   -92,   -92,   -92,   -82,     0,
       0,     0,     0,     0,     0,   -82,   -82,   -82,   -82,   -82,
     -82,   -83,   -83,   -83,   395,   396,   -83,     0,     0,   -83,
     -83,     0,     0,     0,   -85,   -85,   -85,   -85,   -85,   -85,
       0,   -83,   -85,   -85,     0,     0,     0,     0,   -83,   -83,
     -83,   -83,   -83,   -83,   -85,     0,     0,     0,     0,     0,
       0,   -85,   -85,   -85,   -85,   -85,   -85,   -86,   -86,   -86,
     -86,   -86,   -86,     0,     0,   -86,   -86,     0,     0,     0,
     -59,   393,   394,     0,     0,   -59,     0,   -86,   -59,   -59,
       0,     0,     0,     0,   -86,   -86,   -86,   -86,   -86,   -86,
     -59,     0,     0,     0,     0,     0,     0,   -59,   -59,   -59,
     -59,   -59,   -59,   -54,     0,     0,     0,     0,   -54,   -58,
       0,   127,   128,     0,   -58,     0,     0,   -58,   -58,     0,
       0,     0,     0,   129,     0,     0,     0,     0,     0,   -58,
     -54,   -54,   130,   131,   -54,   -54,   -58,   -58,   -58,   -58,
     -58,   -58,   -79,     0,     0,     0,     0,   -79,   -80,     0,
     -79,   -79,     0,   -80,     0,     0,   -80,   -80,     0,     0,
       0,     0,   -79,     0,     0,     0,     0,     0,   -80,   -79,
     -79,   -79,   -79,   -79,   -79,   -80,   -80,   -80,   -80,   -80,
     -80,   -61,     0,     0,     0,     0,   -61,   -81,     0,   -61,
     -61,     0,   -81,     0,     0,   -81,   -81,     0,     0,     0,
       0,   -61,     0,     0,     0,     0,     0,   -81,   -61,   -61,
     -61,   -61,   -61,   -61,   -81,   -81,   -81,   -81,   -81,   -81,
     -53,     0,     0,     0,     0,   -53,   -57,     0,   127,   128,
       0,   -57,     0,     0,   -57,   -57,     0,     0,     0,     0,
     129,     0,     0,     0,     0,     0,   -57,   -53,   -53,   130,
     131,   -53,   -53,   -57,   -57,   -57,   -57,   -57,   -57,   -68,
       0,     0,     0,     0,   -68,   -69,     0,   -68,   -68,     0,
     -69,     0,     0,   -69,   -69,     0,     0,     0,     0,   -68,
       0,     0,     0,     0,     0,   -69,   -68,   -68,   -68,   -68,
     -68,   -68,   -69,   -69,   -69,   -69,   -69,   -69,   -70,     0,
       0,     0,     0,   -70,   -71,     0,   -70,   -70,     0,   -71,
       0,     0,   -71,   -71,     0,     0,     0,     0,   -70,     0,
       0,     0,     0,     0,   -71,   -70,   -70,   -70,   -70,   -70,
     -70,   -71,   -71,   -71,   -71,   -71,   -71,   -72,     0,     0,
       0,     0,   -72,     0,     0,   -72,   -72,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -72,     0,     0,
       0,     0,     0,     0,   -72,   -72,   -72,   -72,   -72,   -72
};

static const yytype_int16 yycheck[] =
{
      18,   277,    40,    20,    43,   146,   178,   148,   121,    43,
      43,   109,    29,   109,   121,   243,     6,     6,    43,     5,
     121,     6,    12,    40,     6,     6,    43,    12,     6,    21,
      12,   244,    49,    50,    12,    52,     5,    43,     6,    21,
      79,   142,     5,     5,    13,    79,     9,    41,   146,    38,
      39,    13,    69,    38,    40,    41,    42,    38,    75,    76,
      38,    39,    79,     6,     5,     0,     1,   168,     9,    12,
      38,   172,     0,    79,   175,   351,     6,    40,    41,    42,
       5,     7,    12,   122,   123,   361,    21,     5,   122,   123,
       0,     9,   109,     3,    41,    38,    39,   122,   374,    40,
      41,    42,   330,   121,   121,   122,   123,   146,     5,   126,
     282,     3,   146,   146,    43,   132,   122,   123,   331,    21,
     126,   146,    40,    41,    42,   142,   143,    41,   145,   146,
     406,   148,     5,     7,     5,     5,     9,   154,    12,     5,
     146,     6,    41,    40,    41,    42,     5,    12,     5,   166,
      79,   168,     9,     5,     6,   172,     5,     9,   175,     6,
      12,   178,   179,   439,    38,    17,     6,    40,    41,    42,
      22,    23,    12,    38,    39,   192,    28,    29,    30,    31,
     456,     8,     9,    40,    41,    42,     5,     5,    40,    41,
      42,    38,    39,   122,   123,   212,     5,   126,   339,   233,
      27,     6,     5,   132,     7,     5,     9,    12,     7,     9,
       7,    14,     5,     5,   231,    12,   233,   146,    21,    22,
       5,    40,    41,    42,    20,    28,    29,    30,    31,     6,
       0,     1,     5,    29,     7,   252,     5,    40,    41,    42,
      40,    41,    42,     6,    40,     8,     9,    43,    40,    41,
      42,    21,   291,    49,    50,   280,    52,   291,   291,     5,
     277,    38,    39,   280,     6,   282,   291,     7,     7,   286,
      12,     7,     5,    69,   291,    41,     9,   316,   295,    75,
      76,     5,   316,    79,     5,   291,     6,     6,     9,     8,
       9,   504,    12,    12,    40,    41,    42,   314,     6,   316,
     339,     7,     5,   341,    12,   339,   339,    40,    41,    42,
     316,     7,     7,   109,   339,     7,    40,    41,    42,    40,
      41,    42,   339,    41,   341,   121,   122,   123,     7,   425,
     126,     6,     5,   339,   351,     6,   132,    40,    41,    42,
     553,    12,     6,     6,   361,    29,   142,   143,    12,   145,
     146,     6,   148,     8,     9,     6,   390,   374,   154,    34,
      35,    12,   291,    38,    39,    49,    50,    40,    41,    42,
     166,     7,   168,   390,   391,   392,   172,     0,     1,   175,
       6,   419,   178,   179,     6,   391,    12,   316,     7,   406,
      12,    75,    76,     6,     6,     6,   192,     6,    21,    12,
      12,    12,   419,    12,   421,   422,     7,     6,   425,   426,
     339,    12,    38,    39,     6,     6,   212,   530,     6,   458,
     459,     6,   439,   530,   458,   459,    38,    39,     6,   530,
     528,     7,   528,   458,    12,   231,    12,   233,     6,   456,
     457,   458,   459,   460,   461,    27,   587,    38,    39,     6,
      38,    39,   458,   459,   460,    12,   252,     0,     1,   143,
      41,   145,     6,   392,     8,     9,    10,    11,    12,     6,
     154,     5,     7,   586,     8,     9,    10,    11,    21,   586,
       6,   277,   166,     7,   280,   586,   282,     6,    12,   587,
     286,     6,   605,    27,   607,   291,   609,    12,   605,   295,
     607,     6,   609,     7,   605,     7,   607,     6,   609,     8,
       9,   528,   530,   530,    38,    39,    15,    16,   314,     6,
     316,     0,     1,     0,     1,    12,     7,   544,    27,   458,
     459,   460,   461,     7,     7,    34,    35,    36,    37,    38,
      39,     7,    21,   339,    21,   341,    12,     7,   587,    13,
       6,     6,    12,   587,   587,   351,    12,    12,     8,     9,
      10,    11,   587,     7,     7,   361,     7,     7,   586,   586,
     587,    12,    38,    39,     7,     6,     6,    27,   374,    34,
      35,   587,    12,    38,    39,    15,    16,   605,   605,   607,
     607,   609,   609,   277,   390,   391,   392,    27,     7,     0,
       1,     5,   286,    12,    34,    35,    36,    37,    38,    39,
     406,     6,     5,     7,     5,     5,     5,     7,    12,     9,
      21,     0,     1,   419,    14,   421,   422,     0,     1,   425,
     426,    21,    22,    29,     0,     1,     6,     6,    28,    29,
      30,    31,    21,   439,    38,    39,     5,    43,    21,     5,
      40,    41,    42,    49,    50,    21,    52,    53,   587,     5,
     456,   457,   458,   459,   460,   461,     6,   351,     1,     6,
       3,     4,    12,    69,     5,    12,     6,   361,     6,    75,
      76,     6,    12,    79,     7,    18,    19,    20,    21,    12,
     374,    24,    25,    26,     6,    28,    29,    30,    31,    32,
      96,     6,    41,     6,   100,   101,   102,   103,    41,    12,
       7,    34,    35,   109,     6,    38,    39,     6,     6,     6,
      12,    27,   406,    12,    12,    12,   122,   123,     7,    27,
     126,    27,   528,    12,   530,     6,   132,   421,   422,     7,
       6,    12,   426,     5,    15,    16,    12,   143,   544,   145,
     146,     6,   148,     8,     9,   439,    27,     7,   154,    38,
      39,     5,    12,    34,    35,    36,    37,    38,    39,     5,
     166,     5,   456,   457,     6,     1,     6,     3,     4,     6,
      12,     6,    12,   179,   180,    12,    27,    12,    38,    39,
     586,   587,    18,    19,    20,    21,   192,   193,    24,    25,
      26,     7,    28,    29,    30,    31,    32,    33,    27,   605,
      27,   607,    27,   609,     7,    41,   212,   213,     6,    12,
       7,     1,     5,     3,     4,    12,     5,     6,     5,     8,
       9,    10,    11,    12,     5,   231,   232,   233,    18,    19,
      20,    21,     7,     5,    24,    25,    26,    12,    28,    29,
      30,    31,    32,    33,     7,     5,   252,   253,     5,    12,
     544,    41,     5,     8,     9,    10,    11,    71,    72,    73,
       8,     9,    10,    11,     5,   271,   272,   273,   274,   275,
       5,   277,    27,     5,   280,     1,     7,     3,     4,    27,
     286,    12,     7,     8,     9,   291,     7,    12,     5,   295,
     296,    12,    18,    19,    20,    21,     7,     5,    24,    25,
      26,    12,    28,    29,    30,    31,    32,    33,   314,   315,
     316,     7,     1,     7,     3,    41,    12,     5,    12,     7,
       8,     9,    10,    11,    12,     8,     9,    10,    11,    18,
      19,    20,     5,   339,     5,    24,    25,    26,   344,    28,
      29,    30,    31,    32,    27,   351,   352,   353,     7,     6,
       5,     5,    41,    12,     5,   361,   362,   363,    15,    16,
       6,   367,     8,     9,     8,     9,    10,    11,   374,     7,
      27,   377,   378,     5,    12,   381,     5,    34,    35,    36,
      37,    38,    39,    27,   390,   391,   392,   393,   394,   395,
     396,    41,     5,   399,     8,     9,    10,    11,     5,    41,
     406,   407,   408,   409,   410,     6,     5,     7,    41,     7,
       9,     6,    12,    27,    12,   421,   422,     6,    17,   425,
     426,    41,     6,    22,    23,     6,   432,     8,     9,    28,
      29,    30,    31,   439,   440,   441,   442,   443,    41,    41,
     446,    40,    41,    42,     7,     6,    29,     8,     9,     6,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
      43,    41,     8,     9,    10,    11,    49,    50,    13,    52,
       8,     9,    10,    11,     6,     8,     9,    10,    11,    41,
       1,    27,     3,     4,     6,    27,    69,     6,     6,    27,
       8,     9,    75,    76,    27,     6,    79,    18,    19,    20,
      21,     6,     6,    24,    25,    26,     6,    28,    29,    30,
      31,    32,    33,    96,     7,     8,     9,   100,   101,     6,
      41,     6,   528,     8,     9,     6,   109,     6,     8,     9,
      10,    11,     6,     6,   348,   349,   350,     6,   544,   122,
     123,     6,     6,   126,   358,   359,   360,    27,     7,   132,
       8,     9,    10,    11,     6,     6,     6,   371,   372,   373,
     143,     6,   145,   146,     6,   148,     8,     9,     6,    27,
       6,   154,     6,   387,   388,   389,     1,     6,     3,     6,
       6,   587,     5,   166,     7,     8,     9,    10,    11,   403,
     404,   405,     6,    18,    19,    20,   179,     6,     6,    24,
      25,    26,     6,    28,    29,    30,    31,    32,     6,   192,
     424,     6,     6,     6,     5,     6,    41,     8,     9,    10,
      11,     6,   436,   437,   438,     6,     6,     6,     6,   212,
       8,     9,    10,    11,     1,     6,     3,     4,     6,   453,
     454,   455,     7,     8,     9,    10,    11,    12,   231,     7,
     233,    18,    19,    20,    21,    27,     7,    24,    25,    26,
       7,    28,    29,    30,    31,    32,    33,    27,    27,   252,
      27,    27,     3,     6,    41,     8,     9,    10,    11,    12,
       6,    51,     8,     9,    10,    11,    12,    -1,   271,   272,
     273,   274,   275,    -1,   277,    -1,     1,   280,     3,     4,
      -1,    -1,     6,   286,     8,     9,    10,    11,   291,    -1,
      -1,    -1,   295,    18,    19,    20,    21,    -1,    -1,    24,
      25,    26,    -1,    28,    29,    30,    31,    32,    33,    -1,
      -1,   314,    -1,   316,    -1,     1,    41,     3,     4,     6,
      -1,     8,     9,    10,    11,    12,     7,     8,     9,    10,
      11,    12,    18,    19,    20,    21,   339,    -1,    24,    25,
      26,   344,    28,    29,    30,    31,    32,    33,   351,     7,
       8,     9,    10,    11,    12,    41,    -1,     6,   361,     8,
       9,    10,    11,    12,   367,     7,     8,     9,    10,    11,
      12,   374,   375,   376,    -1,    -1,     5,     6,   381,     6,
       9,     8,     9,    10,    11,    14,    -1,   390,   391,   392,
     393,   394,    21,    22,    29,    -1,   399,    -1,    -1,    28,
      29,    30,    31,   406,   407,   408,    -1,    -1,    43,    -1,
      -1,    40,    41,    42,    49,    50,    -1,    52,   421,   422,
      -1,    -1,   425,   426,    -1,    -1,    -1,    -1,     6,   432,
       8,     9,    10,    11,    69,    -1,   439,   440,   441,    -1,
      75,    76,    -1,   446,    79,     5,    -1,    -1,    -1,     9,
      -1,    -1,    -1,   456,   457,   458,   459,   460,   461,   462,
     463,    96,    22,     7,     8,     9,    10,    11,    28,    29,
      30,    31,    -1,    -1,   109,     1,    -1,     3,     4,    -1,
      40,    41,    42,    -1,    -1,    -1,    -1,   122,   123,    -1,
      -1,   126,    18,    19,    20,    21,    -1,   132,    24,    25,
      26,    -1,    28,    29,    30,    31,    32,    33,   143,    -1,
     145,   146,    -1,   148,    -1,    41,    -1,     5,     6,   154,
       8,     9,    10,    11,    12,   528,    -1,    15,    16,    -1,
      -1,   166,    -1,    -1,    -1,     1,    -1,     3,     4,    27,
      -1,   544,    -1,    -1,   179,    -1,    34,    35,    36,    37,
      38,    39,    18,    19,    20,    21,    -1,   192,    24,    25,
      26,     6,    28,    29,    30,    31,    32,    33,    -1,    -1,
      15,    16,    -1,    -1,    -1,    41,     6,   212,     8,     9,
      10,    11,    27,     1,   587,     3,     4,    -1,    -1,    34,
      35,    36,    37,    38,    39,    -1,   231,    -1,   233,    -1,
      18,    19,    20,    21,    -1,    -1,    24,    25,    26,    -1,
      28,    29,    30,    31,    32,    33,     6,   252,     8,     9,
      10,    11,    12,    41,     6,    -1,     8,     9,    10,    11,
      12,     6,    -1,     8,     9,    10,    11,    12,    -1,    -1,
     275,     7,   277,    -1,    29,   280,    12,    -1,    -1,    15,
      16,   286,    -1,    -1,    -1,    -1,   291,    -1,    43,    -1,
     295,    27,    -1,    -1,    49,    50,    -1,    52,    34,    35,
      36,    37,    38,    39,     7,     8,     9,    10,    11,   314,
      -1,   316,    -1,     1,    69,     3,     4,    -1,    -1,    -1,
      75,    76,    -1,     6,    79,     8,     9,    10,    11,    12,
      18,    19,    20,    21,   339,    -1,    24,    25,    26,   344,
      28,    29,    30,    31,    32,    33,   351,    -1,    -1,    -1,
      -1,     6,    -1,    41,   109,    -1,   361,    12,    -1,    -1,
      15,    16,   367,    -1,    -1,    -1,    -1,   122,   123,   374,
      -1,   126,    27,    -1,    -1,    -1,   381,   132,    -1,    34,
      35,    36,    37,    38,    39,   390,   391,   392,   143,    -1,
     145,   146,    -1,   148,   399,    -1,    -1,    -1,    -1,   154,
       6,   406,     8,     9,    10,    11,    12,    -1,    -1,    -1,
       6,   166,     8,     9,    10,    11,   421,   422,    -1,    -1,
     425,   426,    -1,    -1,   179,    -1,     6,   432,     8,     9,
      10,    11,    12,    -1,   439,    -1,    -1,   192,     6,    -1,
      -1,   446,    29,    -1,    12,    -1,    -1,    15,    16,    -1,
      -1,   456,   457,   458,   459,   460,   461,   212,    -1,    27,
      -1,    -1,    49,    50,    -1,    52,    34,    35,    36,    37,
      38,    39,    -1,    -1,    -1,    -1,   231,    -1,   233,    -1,
      -1,     1,    -1,     3,     4,    -1,    -1,    -1,    75,    76,
       7,     8,     9,    10,    11,    12,    -1,   252,    18,    19,
      20,    21,    -1,    -1,    24,    25,    26,    -1,    28,    29,
      30,    31,    32,    33,     7,     8,     9,    10,    11,    12,
      -1,    41,   277,   528,     6,   280,     8,     9,    10,    11,
       6,   286,     8,     9,    10,    11,   291,    -1,    -1,   544,
     295,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,     7,
       8,     9,    10,    11,    12,    -1,   143,    -1,   145,   314,
      -1,   316,    18,    19,    20,    21,    -1,   154,    24,    25,
      26,    -1,    28,    29,    30,    31,    32,    33,    -1,   166,
      -1,    -1,   587,    -1,   339,    41,     5,    -1,     7,    -1,
       9,    -1,   179,    -1,    -1,    14,   351,     7,     8,     9,
      10,    11,    21,    22,    -1,   192,   361,    -1,    -1,    28,
      29,    30,    31,     7,     8,     9,    10,    11,    12,   374,
      -1,    40,    41,    42,    -1,   212,    -1,    -1,    -1,     1,
      -1,     3,     4,    -1,    -1,   390,   391,   392,     7,     8,
       9,    10,    11,    12,   231,    -1,    18,    19,    20,    21,
      -1,   406,    24,    25,    26,    -1,    28,    29,    30,    31,
      32,    33,    -1,    -1,    -1,   252,   421,   422,    -1,    41,
     425,   426,     7,     8,     9,    10,    11,    12,     7,     8,
       9,    10,    11,    12,   439,     7,     8,     9,    10,    11,
     277,    -1,     1,    -1,     3,     4,    -1,    -1,    -1,   286,
      -1,   456,   457,   458,   459,   460,   461,    -1,   295,    18,
      19,    20,    21,    -1,    -1,    24,    25,    26,    -1,    28,
      29,    30,    31,    32,    33,    -1,     1,   314,     3,     4,
      -1,    -1,    41,     6,    -1,     8,     9,    10,    11,    -1,
      -1,    -1,    -1,    18,    19,    20,    21,    -1,    -1,    24,
      25,    26,    -1,    28,    29,    30,    31,    32,    33,     7,
       8,     9,    10,    11,   351,     6,    41,     8,     9,    10,
      11,    -1,    -1,   528,   361,     1,    -1,     3,     4,     6,
      -1,     8,     9,    10,    11,    -1,    -1,   374,    -1,   544,
      -1,    -1,    18,    19,    20,    21,    -1,    -1,    24,    25,
      26,    -1,    28,    29,    30,    31,    32,    33,     7,     8,
       9,    10,    11,    -1,    -1,    41,    -1,    -1,    -1,   406,
       7,     8,     9,    10,    11,    -1,     1,    -1,     3,     4,
      -1,    -1,   587,    -1,   421,   422,    -1,    -1,    -1,   426,
      -1,    -1,    -1,    18,    19,    20,    21,    -1,    -1,    24,
      25,    26,   439,    28,    29,    30,    31,    32,    33,     1,
      -1,     3,     4,    -1,    -1,    -1,    41,    -1,    -1,   456,
     457,     7,     8,     9,    10,    11,    18,    19,    20,    21,
      -1,    -1,    24,    25,    26,    -1,    28,    29,    30,    31,
      32,     1,    -1,     3,     4,    -1,    -1,    -1,    -1,    41,
       7,     8,     9,    10,    11,    -1,    -1,    -1,    18,    19,
      20,    21,    -1,    -1,    24,    25,    26,    -1,    28,    29,
      30,    31,    32,     1,    -1,     3,     4,    -1,    -1,    -1,
      -1,    41,     7,     8,     9,    10,    11,    -1,    -1,    -1,
      18,    19,    20,    21,    -1,    -1,    24,    25,    26,    -1,
      28,    29,    30,    31,    32,    -1,     1,   544,     3,     4,
      -1,    -1,    -1,    41,     7,     8,     9,    10,    11,    -1,
      -1,    -1,    -1,    18,    19,    20,    21,    -1,    -1,    24,
      25,    26,    -1,    28,    29,    30,    31,    32,     1,    -1,
       3,     4,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    18,    19,    20,    21,    -1,
      -1,    24,    25,    26,    -1,    28,    29,    30,    31,    32,
       1,    -1,     3,     4,    -1,    -1,    -1,    -1,    41,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,    19,    20,
      21,    -1,    -1,    24,    25,    26,    -1,    28,    29,    30,
      31,    32,     1,    -1,     3,     4,    -1,    -1,    -1,    -1,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,
      19,    20,    21,    -1,    -1,    24,    25,    26,    -1,    28,
      29,    30,    31,    32,     1,    -1,     3,     4,    -1,    -1,
      -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    18,    19,    20,    21,    -1,    -1,    24,    25,    26,
      -1,    28,    29,    30,    31,    32,     1,    -1,     3,     4,
      -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    18,    19,    20,    21,    -1,    -1,    24,
      25,    26,    -1,    28,    29,    30,    31,    32,     1,    -1,
       3,     4,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    18,    19,    20,    21,    -1,
      -1,    24,    25,    26,    -1,    28,    29,    30,    31,    32,
       1,    -1,     3,     4,    -1,    -1,    -1,    -1,    41,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,    19,    20,
      21,    -1,    -1,    24,    25,    26,    -1,    28,    29,    30,
      31,    32,     1,    -1,     3,     4,    -1,    -1,    -1,    -1,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,
      19,    20,    21,    -1,    -1,    24,    25,    26,    -1,    28,
      29,    30,    31,    32,     1,    -1,     3,     4,    -1,    -1,
      -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    18,    19,    20,    21,    -1,    -1,    24,    25,    26,
      -1,    28,    29,    30,    31,    32,     1,    -1,     3,     4,
      -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    18,    19,    20,    21,    -1,    -1,    24,
      25,    26,    -1,    28,    29,    30,    31,    32,     1,    -1,
       3,     4,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    18,    19,    20,    21,    -1,
      -1,    24,    25,    26,    -1,    28,    29,    30,    31,    32,
       1,    -1,     3,     4,    -1,    -1,    -1,    -1,    41,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,    19,    20,
      21,    -1,    -1,    24,    25,    26,    -1,    28,    29,    30,
      31,    32,     1,    -1,     3,     4,    -1,    -1,    -1,    -1,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,
      19,    20,    21,    -1,    -1,    24,    25,    26,    -1,    28,
      29,    30,    31,    32,     1,    -1,     3,     4,    -1,    -1,
      -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    18,    19,    20,    21,    -1,    -1,    24,    25,    26,
      -1,    28,    29,    30,    31,    32,     1,    -1,     3,     4,
      -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    18,    19,    20,    21,    -1,    -1,    24,
      25,    26,    -1,    28,    29,    30,    31,    32,     1,    -1,
       3,     4,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    18,    19,    20,    21,    -1,
      -1,    24,    25,    26,    -1,    28,    29,    30,    31,    32,
       1,    -1,     3,     4,    -1,    -1,    -1,    -1,    41,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,    19,    20,
      21,    -1,    -1,    24,    25,    26,    -1,    28,    29,    30,
      31,    32,     1,    -1,     3,     4,    -1,    -1,    -1,    -1,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,
      19,    20,    21,    -1,    -1,    24,    25,    26,    -1,    28,
      29,    30,    31,    32,     1,    -1,     3,     4,    -1,    -1,
      -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    18,    19,    20,    21,    -1,    -1,    24,    25,    26,
      -1,    28,    29,    30,    31,    32,     1,    -1,     3,     4,
      -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    18,    19,    20,    21,    -1,    -1,    24,
      25,    26,    -1,    28,    29,    30,    31,    32,     1,    -1,
       3,     4,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    18,    19,    20,    21,    -1,
      -1,    24,    25,    26,    -1,    28,    29,    30,    31,    32,
       1,    -1,     3,     4,    -1,    -1,    -1,    -1,    41,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,    19,    20,
      21,    -1,    -1,    24,    25,    26,    -1,    28,    29,    30,
      31,    32,     5,    -1,     7,    -1,     9,    -1,    -1,    -1,
      41,    14,    -1,     6,    -1,    -1,    -1,    -1,    21,    22,
      -1,    -1,    15,    16,    -1,    28,    29,    30,    31,    -1,
      -1,     5,     6,    -1,    27,     9,    -1,    40,    41,    42,
      14,    34,    35,    36,    37,    38,    39,    21,    22,    -1,
      -1,    -1,    -1,    -1,    28,    29,    30,    31,    -1,    -1,
       5,     6,    -1,    -1,     9,    -1,    40,    41,    42,    14,
      -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    -1,    -1,
      -1,    -1,    -1,    28,    29,    30,    31,    -1,    -1,     5,
       6,    -1,    -1,     9,    -1,    40,    41,    42,    14,    -1,
      -1,    -1,    -1,    -1,     5,    21,    22,    -1,     9,    -1,
      -1,    -1,    28,    29,    30,    31,    17,    -1,    -1,     5,
      -1,    22,    23,     9,    40,    41,    42,    28,    29,    30,
      31,    17,    -1,    -1,     5,    -1,    22,    23,     9,    40,
      41,    42,    28,    29,    30,    31,    17,    -1,    -1,    -1,
      -1,    22,    23,    -1,    40,    41,    42,    28,    29,    30,
      31,    -1,    -1,     5,    -1,    -1,    -1,     9,    -1,    40,
      41,    42,    14,    -1,    -1,    -1,    -1,    -1,     5,    21,
      22,    -1,     9,    -1,    -1,    -1,    28,    29,    30,    31,
      17,    -1,    -1,    -1,    -1,    22,    23,    -1,    40,    41,
      42,    28,    29,    30,    31,    -1,    -1,     5,    -1,    -1,
      -1,     9,    -1,    40,    41,    42,    14,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    22,    -1,    -1,    -1,    -1,    -1,
      28,    29,    30,    31,    -1,    -1,     5,    -1,    -1,    -1,
       9,    -1,    40,    41,    42,    14,     5,     6,    -1,     8,
       9,    10,    11,    22,    -1,    -1,    15,    16,    -1,    28,
      29,    30,    31,    -1,    -1,     5,    -1,    -1,    27,     9,
      -1,    40,    41,    42,    14,    34,    35,    36,    37,    38,
      39,    -1,    22,    -1,    -1,    -1,    -1,    -1,    28,    29,
      30,    31,    -1,    -1,     5,    -1,    -1,    -1,     9,    -1,
      40,    41,    42,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    -1,    -1,    -1,    -1,    -1,    28,    29,    30,
      31,    -1,    -1,     5,    -1,    -1,    -1,     9,    -1,    40,
      41,    42,    14,    -1,    -1,    -1,    -1,    -1,     5,    -1,
      22,    -1,     9,    -1,    -1,    -1,    28,    29,    30,    31,
      -1,    -1,    -1,     5,    -1,    22,    -1,     9,    40,    41,
      42,    28,    29,    30,    31,    -1,    -1,    -1,     5,    -1,
      22,    -1,     9,    40,    41,    42,    28,    29,    30,    31,
      -1,    -1,    -1,     5,    -1,    22,    -1,     9,    40,    41,
      42,    28,    29,    30,    31,    -1,    -1,    -1,     5,    -1,
      22,    -1,     9,    40,    41,    42,    28,    29,    30,    31,
      -1,    -1,    -1,     5,    -1,    22,    -1,     9,    40,    41,
      42,    28,    29,    30,    31,    -1,    -1,    -1,     5,    -1,
      22,    -1,     9,    40,    41,    42,    28,    29,    30,    31,
      -1,    -1,    -1,     5,    -1,    22,    -1,     9,    40,    41,
      42,    28,    29,    30,    31,    -1,    -1,    -1,     5,    -1,
      22,    -1,     9,    40,    41,    42,    28,    29,    30,    31,
      -1,    -1,    -1,    -1,    -1,    22,    -1,    -1,    40,    41,
      42,    28,    29,    30,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    41,    42,     5,    -1,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    -1,     5,
       6,    -1,     8,     9,    10,    11,    12,    13,    27,    15,
      16,    -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,
      39,    27,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,
      36,    37,    38,    39,     5,    -1,     7,     8,     9,    10,
      11,    12,    -1,    -1,    15,    16,    -1,    -1,     6,    -1,
       8,     9,    10,    11,    12,    -1,    27,    15,    16,    -1,
      -1,    -1,    -1,    34,    35,    36,    37,    38,    39,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    34,    35,    36,    37,
      38,    39,     6,    -1,     8,     9,    10,    11,    12,    -1,
      -1,    15,    16,    -1,    -1,     6,    -1,     8,     9,    10,
      11,    12,    -1,    27,    15,    16,    -1,    -1,    -1,    -1,
      34,    35,    36,    37,    38,    39,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    34,    35,    36,    37,    38,    39,     6,
      -1,     8,     9,    10,    11,    12,    -1,    -1,    15,    16,
      -1,    -1,     6,    -1,     8,     9,    10,    11,    12,    -1,
      27,    15,    16,    -1,    -1,    -1,    -1,    34,    35,    36,
      37,    38,    39,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      34,    35,    36,    37,    38,    39,     6,    -1,     8,     9,
      10,    11,    12,    -1,    -1,    15,    16,    -1,    -1,     6,
      -1,     8,     9,    10,    11,    12,    -1,    27,    15,    16,
      -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,    39,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,    36,
      37,    38,    39,     6,    -1,     8,     9,    10,    11,    12,
      -1,    -1,    15,    16,    -1,    -1,     6,    -1,     8,     9,
      10,    11,    12,    -1,    27,    15,    16,    -1,    -1,    -1,
      -1,    34,    35,    36,    37,    38,    39,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,    39,
       6,    -1,     8,     9,    10,    11,    12,    -1,    -1,    15,
      16,    -1,    -1,     6,    -1,     8,     9,    10,    11,    12,
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
      11,    -1,    -1,    -1,    15,    16,    -1,    -1,     6,    -1,
       8,     9,    10,    11,    -1,    -1,    27,    15,    16,    -1,
      -1,    -1,    -1,    34,    35,    36,    37,    38,    39,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    34,    35,    36,    37,
      38,    39,     6,    -1,     8,     9,    10,    11,    -1,    -1,
      -1,    15,    16,    -1,    -1,     6,    -1,     8,     9,    -1,
      -1,    12,    -1,    27,    15,    16,    -1,    -1,    -1,    -1,
      34,    35,    36,    37,    38,    39,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    34,    35,    36,    37,    38,    39,     6,
      -1,    -1,    -1,    -1,    -1,    12,    -1,    -1,    15,    16,
      -1,    -1,     6,    -1,    -1,    -1,    -1,    -1,    12,    -1,
      27,    15,    16,    -1,    -1,    -1,    -1,    34,    35,    36,
      37,    38,    39,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      34,    35,    36,    37,    38,    39,     6,    -1,    -1,    -1,
      -1,    -1,    12,    -1,    -1,    15,    16,    -1,    -1,     6,
      -1,    -1,    -1,    -1,    -1,    12,    -1,    27,    15,    16,
      -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,    39,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,    36,
      37,    38,    39,     6,    -1,    -1,    -1,    -1,    -1,    12,
      -1,    -1,    15,    16,    -1,    -1,     6,    -1,    -1,    -1,
      -1,    -1,    12,    -1,    27,    15,    16,    -1,    -1,    -1,
      -1,    34,    35,    36,    37,    38,    39,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,    39,
       6,    -1,    -1,    -1,    -1,    -1,    12,    -1,    -1,    15,
      16,    -1,    -1,     6,    -1,    -1,    -1,    -1,    -1,    12,
      -1,    27,    15,    16,    -1,    -1,    -1,    -1,    34,    35,
      36,    37,    38,    39,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    34,    35,    36,    37,    38,    39,     6,    -1,    -1,
      -1,    -1,    -1,    12,    -1,    -1,    15,    16,    -1,    -1,
       6,    -1,    -1,    -1,    -1,    -1,    12,    -1,    27,    15,
      16,    -1,    -1,     6,    -1,    34,    35,    36,    37,    38,
      39,    27,    15,    16,    -1,    -1,     6,    -1,    34,    35,
      36,    37,    38,    39,    27,    15,    16,    -1,    -1,     6,
      -1,    34,    35,    36,    37,    38,    39,    27,    15,    16,
      -1,    -1,     6,    -1,    34,    35,    36,    37,    38,    39,
      27,    15,    16,    -1,    -1,     6,    -1,    34,    35,    36,
      37,    38,    39,    27,    15,    16,    -1,    -1,     6,    -1,
      34,    35,    36,    37,    38,    39,    27,    15,    16,    -1,
      -1,     6,    -1,    34,    35,    36,    37,    38,    39,    27,
      15,    16,    -1,    -1,     6,    -1,    34,    35,    36,    37,
      38,    39,    27,    15,    16,    -1,    -1,     6,    -1,    34,
      35,    36,    37,    38,    39,    27,    15,    16,    -1,    -1,
       6,    -1,    34,    35,    36,    37,    38,    39,    27,    15,
      16,    -1,    -1,     6,    -1,    34,    35,    36,    37,    38,
      39,    27,    15,    16,    -1,    -1,    -1,    -1,    34,    35,
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
       7,     8,     9,    -1,    -1,    12,    -1,    27,    15,    16,
      -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,    39,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,    36,
      37,    38,    39,     7,    -1,    -1,    -1,    -1,    12,     7,
      -1,    15,    16,    -1,    12,    -1,    -1,    15,    16,    -1,
      -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    27,
      34,    35,    36,    37,    38,    39,    34,    35,    36,    37,
      38,    39,     7,    -1,    -1,    -1,    -1,    12,     7,    -1,
      15,    16,    -1,    12,    -1,    -1,    15,    16,    -1,    -1,
      -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    27,    34,
      35,    36,    37,    38,    39,    34,    35,    36,    37,    38,
      39,     7,    -1,    -1,    -1,    -1,    12,     7,    -1,    15,
      16,    -1,    12,    -1,    -1,    15,    16,    -1,    -1,    -1,
      -1,    27,    -1,    -1,    -1,    -1,    -1,    27,    34,    35,
      36,    37,    38,    39,    34,    35,    36,    37,    38,    39,
       7,    -1,    -1,    -1,    -1,    12,     7,    -1,    15,    16,
      -1,    12,    -1,    -1,    15,    16,    -1,    -1,    -1,    -1,
      27,    -1,    -1,    -1,    -1,    -1,    27,    34,    35,    36,
      37,    38,    39,    34,    35,    36,    37,    38,    39,     7,
      -1,    -1,    -1,    -1,    12,     7,    -1,    15,    16,    -1,
      12,    -1,    -1,    15,    16,    -1,    -1,    -1,    -1,    27,
      -1,    -1,    -1,    -1,    -1,    27,    34,    35,    36,    37,
      38,    39,    34,    35,    36,    37,    38,    39,     7,    -1,
      -1,    -1,    -1,    12,     7,    -1,    15,    16,    -1,    12,
      -1,    -1,    15,    16,    -1,    -1,    -1,    -1,    27,    -1,
      -1,    -1,    -1,    -1,    27,    34,    35,    36,    37,    38,
      39,    34,    35,    36,    37,    38,    39,     7,    -1,    -1,
      -1,    -1,    12,    -1,    -1,    15,    16,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,    39
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
      22,    64,    65,    66,    67,    69,    70,    77,    78,     7,
       7,    41,    75,    75,    76,    78,     5,    41,    80,     7,
       8,     9,    10,    11,    72,    75,     7,    21,    41,    61,
      62,    63,    64,    41,    72,    72,    72,    54,    75,    75,
      66,     6,    38,    39,    34,    35,    68,    15,    16,    27,
      36,    37,    71,     6,     6,     6,     6,     6,    79,    79,
      80,    80,     6,    27,    41,    13,    61,     7,    12,     6,
       6,     6,     6,     6,    12,     7,    58,    65,    66,    69,
      70,     7,     7,     7,    58,    75,    13,    75,     6,    62,
      63,    75,    33,    75,    58,     6,    58,    58,     3,     5,
       9,    28,    29,    30,    31,    40,    41,    42,    73,    74,
      79,    80,     5,     9,    17,    22,    23,    28,    29,    30,
      31,    40,    41,    42,    73,    74,    76,    77,    78,    79,
      80,    52,     5,     9,    17,    22,    23,    28,    29,    30,
      31,    40,    41,    42,    73,    74,    76,    77,    78,    79,
      80,     5,     9,    14,    22,    28,    29,    30,    31,    40,
      42,    65,    66,    67,    69,    70,    73,    74,    77,    78,
      79,    80,     5,     9,    17,    22,    23,    28,    29,    30,
      31,    40,    41,    42,    73,    74,    76,    77,    78,    79,
      80,     8,     9,     8,     9,     5,    41,     5,     7,    62,
      38,     1,     3,    18,    19,    20,    24,    25,    26,    41,
      55,    59,    60,    73,    74,     5,     9,    17,    22,    23,
      28,    29,    30,    31,    40,    41,    42,    73,    74,    76,
      77,    78,    79,    80,     5,     9,    14,    21,    22,    28,
      29,    30,    31,    40,    41,    42,    63,    64,    65,    66,
      67,    69,    70,    73,    74,    77,    78,    79,    80,    12,
       4,    56,    76,    78,     5,    41,    80,     5,     5,     5,
       5,     5,    10,    11,    76,    78,    80,     5,     5,     5,
       5,     5,    10,    11,     7,    76,    78,     5,    41,    80,
       5,     5,     5,     5,     5,     8,     9,    10,    11,    76,
      78,     5,    41,    80,    41,    66,     5,     5,     5,     5,
      39,    68,    71,     8,     9,    10,    11,    76,    78,     5,
      41,    80,     5,     5,     5,     5,     5,     8,     9,    10,
      11,    79,    79,    79,    79,    54,     7,    65,     4,    56,
       5,     5,     5,    75,     5,     5,    13,    64,     7,     7,
      76,    78,     5,    41,    80,     5,     5,     5,     5,     5,
       8,     9,    10,    11,    76,    78,     5,    41,    80,    41,
      66,    41,     5,     5,     5,     5,     5,    13,    38,    39,
      68,    71,     8,     9,    10,    11,    63,     4,     6,     6,
      41,    72,    72,    72,    54,    80,    80,     6,     6,    41,
      72,    72,    72,    54,    80,    80,     6,     6,    41,    72,
      72,    72,    54,    79,    79,    80,    80,     6,     6,    41,
      72,    72,    72,    66,    69,    70,    79,    79,    80,    80,
       6,     6,    41,    72,    72,    72,    54,    79,    79,    80,
      80,     6,     4,    41,    75,    75,     7,    72,    61,    75,
       6,     6,     6,    41,    72,    72,    72,    54,    79,    79,
      80,    80,     6,     6,    13,    41,    72,    72,    72,    54,
      75,    65,    66,    69,    70,    79,    79,    80,    80,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     6,    61,     7,    58,
       6,     6,     6,     6,     6,    75,     6,     6,     6,     6,
       6,     7,     7,     7,    58,     6,    62,    33,    58,     6,
      58,    58
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
      70,    70,    71,    71,    71,    71,    71,    72,    73,    74,
      74,    74,    74,    75,    75,    76,    76,    76,    76,    77,
      77,    77,    78,    78,    78,    79,    79,    79,    79,    80,
      80,    80,    80
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
       1,     1,     1,     1,     1,     1,     1,     3,     4,     4,
       4,     4,     4,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     3,     1,     3,     3,     1,     2,     1,
       1,     1,     3
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
#line 2670 "parser/parser.c"
    break;

  case 6: /* stmt: func_stmt  */
#line 61 "parser/c7.y"
                       { add_ast((yyvsp[0].expression)); }
#line 2676 "parser/parser.c"
    break;

  case 7: /* stmt: var_decl_stmt  */
#line 62 "parser/c7.y"
                           { add_ast((yyvsp[0].expression)); }
#line 2682 "parser/parser.c"
    break;

  case 8: /* $@1: %empty  */
#line 65 "parser/c7.y"
                            {
                set_id_type((yyvsp[0].int_value), ST_ID_FUNC);
            }
#line 2690 "parser/parser.c"
    break;

  case 9: /* func_stmt: TYPE ID $@1 PARENT_LEFT param_list PARENT_RIGHT compound_block_stmt  */
#line 67 "parser/c7.y"
                                                                            {
                (yyval.expression) = create_func_expr(create_str_expr((yyvsp[-6].str_value)), create_var_expr((yyvsp[-5].int_value)), (yyvsp[-2].expression), (yyvsp[0].expression));
                free((yyvsp[-6].str_value));
            }
#line 2699 "parser/parser.c"
    break;

  case 10: /* $@2: %empty  */
#line 73 "parser/c7.y"
                                {
                    set_id_type((yyvsp[0].int_value), ST_ID_VAR);
                }
#line 2707 "parser/parser.c"
    break;

  case 11: /* var_decl_stmt: TYPE ID $@2 SEMICOLON  */
#line 75 "parser/c7.y"
                            {
                    (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-3].str_value)), create_var_expr((yyvsp[-2].int_value)));
                    free((yyvsp[-3].str_value));
                }
#line 2716 "parser/parser.c"
    break;

  case 12: /* param_list: param_list COMMA TYPE ID  */
#line 81 "parser/c7.y"
                                                {
                (yyval.expression) = create_ter_expr((yyvsp[-3].expression), create_str_expr((yyvsp[-1].str_value)), create_var_expr((yyvsp[0].int_value)));
                set_id_type((yyvsp[0].int_value), ST_ID_VAR);
                free((yyvsp[-1].str_value));
            }
#line 2726 "parser/parser.c"
    break;

  case 13: /* param_list: TYPE ID  */
#line 86 "parser/c7.y"
                            {
                (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-1].str_value)), create_var_expr((yyvsp[0].int_value)));
                set_id_type((yyvsp[0].int_value), ST_ID_VAR);
                free((yyvsp[-1].str_value));
            }
#line 2736 "parser/parser.c"
    break;

  case 14: /* param_list: %empty  */
#line 91 "parser/c7.y"
                          {
                (yyval.expression) = create_empty_expr();
            }
#line 2744 "parser/parser.c"
    break;

  case 15: /* simple_param_list: simple_param_list COMMA simple_expr  */
#line 96 "parser/c7.y"
                                                                {
                        (yyval.expression) = create_bin_expr((yyvsp[-2].expression), (yyvsp[0].expression));
                    }
#line 2752 "parser/parser.c"
    break;

  case 16: /* simple_param_list: simple_expr  */
#line 99 "parser/c7.y"
                                     { (yyval.expression) = (yyvsp[0].expression); }
#line 2758 "parser/parser.c"
    break;

  case 17: /* simple_param_list: %empty  */
#line 100 "parser/c7.y"
                                  { (yyval.expression) = create_empty_expr(); }
#line 2764 "parser/parser.c"
    break;

  case 18: /* compound_block_stmt: BRACK_LEFT block_stmts BRACK_RIGHT  */
#line 103 "parser/c7.y"
                                                            {
                        (yyval.expression) = (yyvsp[-1].expression);
                    }
#line 2772 "parser/parser.c"
    break;

  case 19: /* compound_block_stmt: BRACK_LEFT BRACK_RIGHT  */
#line 106 "parser/c7.y"
                                              {
                        (yyval.expression) = create_empty_expr();
                    }
#line 2780 "parser/parser.c"
    break;

  case 20: /* block_stmts: block_stmts block_item  */
#line 111 "parser/c7.y"
                                           {
                (yyval.expression) = create_bin_expr((yyvsp[-1].expression), (yyvsp[0].expression)); 
            }
#line 2788 "parser/parser.c"
    break;

  case 21: /* block_stmts: block_item  */
#line 114 "parser/c7.y"
                            { (yyval.expression) = (yyvsp[0].expression); }
#line 2794 "parser/parser.c"
    break;

  case 22: /* block_item: var_decl_stmt  */
#line 117 "parser/c7.y"
                               { (yyval.expression) = (yyvsp[0].expression); }
#line 2800 "parser/parser.c"
    break;

  case 23: /* block_item: block_stmt  */
#line 118 "parser/c7.y"
                            { (yyval.expression) = (yyvsp[0].expression); }
#line 2806 "parser/parser.c"
    break;

  case 24: /* block_stmt: compound_block_stmt  */
#line 121 "parser/c7.y"
                                     { (yyval.expression) = (yyvsp[0].expression); }
#line 2812 "parser/parser.c"
    break;

  case 25: /* block_stmt: func_call SEMICOLON  */
#line 122 "parser/c7.y"
                                     { (yyval.expression) = (yyvsp[-1].expression); }
#line 2818 "parser/parser.c"
    break;

  case 26: /* block_stmt: set_func_call SEMICOLON  */
#line 123 "parser/c7.y"
                                         { (yyval.expression) = (yyvsp[-1].expression); }
#line 2824 "parser/parser.c"
    break;

  case 27: /* block_stmt: flow_control  */
#line 124 "parser/c7.y"
                              { (yyval.expression) = (yyvsp[0].expression); }
#line 2830 "parser/parser.c"
    break;

  case 28: /* block_stmt: READ PARENT_LEFT ID PARENT_RIGHT SEMICOLON  */
#line 125 "parser/c7.y"
                                                               {
                (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-4].str_value)), create_var_expr((yyvsp[-2].int_value))); 
                set_id_type((yyvsp[-2].int_value), ST_ID_VAR);
                free((yyvsp[-4].str_value));
            }
#line 2840 "parser/parser.c"
    break;

  case 29: /* block_stmt: WRITE PARENT_LEFT simple_expr PARENT_RIGHT SEMICOLON  */
#line 130 "parser/c7.y"
                                                                         {
                (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-4].str_value)), (yyvsp[-2].expression)); 
                free((yyvsp[-4].str_value));
            }
#line 2849 "parser/parser.c"
    break;

  case 30: /* block_stmt: WRITELN PARENT_LEFT simple_expr PARENT_RIGHT SEMICOLON  */
#line 134 "parser/c7.y"
                                                                           {
                (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-4].str_value)), (yyvsp[-2].expression)); 
                free((yyvsp[-4].str_value));
            }
#line 2858 "parser/parser.c"
    break;

  case 31: /* block_stmt: ID ASSIGN simple_expr SEMICOLON  */
#line 138 "parser/c7.y"
                                                       {
                (yyval.expression) = create_ter_expr(create_var_expr((yyvsp[-3].int_value)), create_char_expr((yyvsp[-2].char_value)), (yyvsp[-1].expression));
                set_id_type((yyvsp[-3].int_value), ST_ID_VAR); 
            }
#line 2867 "parser/parser.c"
    break;

  case 32: /* block_stmt: RETURN simple_expr SEMICOLON  */
#line 142 "parser/c7.y"
                                                 {
                (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-2].str_value)), (yyvsp[-1].expression)); 
                free((yyvsp[-2].str_value));
            }
#line 2876 "parser/parser.c"
    break;

  case 33: /* block_stmt: error  */
#line 146 "parser/c7.y"
                    { 
                (yyval.expression) = create_empty_expr();
                yyerrok;
            }
#line 2885 "parser/parser.c"
    break;

  case 34: /* flow_control_if: IF PARENT_LEFT  */
#line 152 "parser/c7.y"
                                    {
                    (yyval.expression) = create_str_expr((yyvsp[-1].str_value));
                    free((yyvsp[-1].str_value));
                }
#line 2894 "parser/parser.c"
    break;

  case 35: /* flow_control: flow_control_if or_cond_expr PARENT_RIGHT block_stmt  */
#line 158 "parser/c7.y"
                                                                                               {
                    (yyval.expression) = create_ter_expr((yyvsp[-3].expression), (yyvsp[-2].expression), (yyvsp[0].expression)); 
                }
#line 2902 "parser/parser.c"
    break;

  case 36: /* flow_control: flow_control_if or_cond_expr PARENT_RIGHT block_stmt ELSE block_stmt  */
#line 161 "parser/c7.y"
                                                                                                            {
                    (yyval.expression) = create_qui_expr((yyvsp[-5].expression), (yyvsp[-4].expression), (yyvsp[-2].expression), create_str_expr((yyvsp[-1].str_value)), (yyvsp[0].expression));
                    free((yyvsp[-1].str_value));
                }
#line 2911 "parser/parser.c"
    break;

  case 37: /* flow_control: FORALL PARENT_LEFT set_expr PARENT_RIGHT block_stmt  */
#line 165 "parser/c7.y"
                                                                                 {
                    (yyval.expression) = create_ter_expr(create_str_expr((yyvsp[-4].str_value)), (yyvsp[-2].expression), (yyvsp[0].expression)); 
                    free((yyvsp[-4].str_value));
                }
#line 2920 "parser/parser.c"
    break;

  case 38: /* flow_control: FOR PARENT_LEFT opt_param opt_param PARENT_RIGHT block_stmt  */
#line 169 "parser/c7.y"
                                                                                             {
                    (yyval.expression) = create_qua_expr(create_str_expr((yyvsp[-5].str_value)), (yyvsp[-3].expression), (yyvsp[-2].expression), (yyvsp[0].expression)); 
                    free((yyvsp[-5].str_value));
                }
#line 2929 "parser/parser.c"
    break;

  case 39: /* flow_control: FOR PARENT_LEFT opt_param opt_param for_expression PARENT_RIGHT block_stmt  */
#line 173 "parser/c7.y"
                                                                                                                {
                    (yyval.expression) = create_qui_expr(create_str_expr((yyvsp[-6].str_value)), (yyvsp[-4].expression), (yyvsp[-3].expression), (yyvsp[-2].expression), (yyvsp[0].expression)); 
                    free((yyvsp[-6].str_value));
                }
#line 2938 "parser/parser.c"
    break;

  case 40: /* opt_param: SEMICOLON  */
#line 179 "parser/c7.y"
                        { (yyval.expression) = create_empty_expr(); }
#line 2944 "parser/parser.c"
    break;

  case 41: /* opt_param: for_expression SEMICOLON  */
#line 180 "parser/c7.y"
                                          { (yyval.expression) = (yyvsp[-1].expression); }
#line 2950 "parser/parser.c"
    break;

  case 42: /* for_expression: decl_or_cond_expr  */
#line 183 "parser/c7.y"
                                       { (yyval.expression) = (yyvsp[0].expression); }
#line 2956 "parser/parser.c"
    break;

  case 43: /* for_expression: for_expression COMMA decl_or_cond_expr  */
#line 184 "parser/c7.y"
                                                                 {
                    (yyval.expression) = create_bin_expr((yyvsp[-2].expression), (yyvsp[0].expression)); 
                }
#line 2964 "parser/parser.c"
    break;

  case 44: /* decl_or_cond_expr: or_cond_expr  */
#line 189 "parser/c7.y"
                                      { (yyval.expression) = (yyvsp[0].expression); }
#line 2970 "parser/parser.c"
    break;

  case 45: /* decl_or_cond_expr: TYPE ID ASSIGN simple_expr  */
#line 190 "parser/c7.y"
                                                             {
                        (yyval.expression) = create_qua_expr(create_str_expr((yyvsp[-3].str_value)), create_var_expr((yyvsp[-2].int_value)),
                                             create_char_expr((yyvsp[-1].char_value)), (yyvsp[0].expression)); 
                        set_id_type((yyvsp[-2].int_value), ST_ID_VAR);
                        free((yyvsp[-3].str_value));
                    }
#line 2981 "parser/parser.c"
    break;

  case 46: /* decl_or_cond_expr: ID ASSIGN simple_expr  */
#line 196 "parser/c7.y"
                                                     {
                        (yyval.expression) = create_ter_expr(create_var_expr((yyvsp[-2].int_value)), create_char_expr((yyvsp[-1].char_value)), (yyvsp[0].expression));
                        set_id_type((yyvsp[-2].int_value), ST_ID_VAR);
                    }
#line 2990 "parser/parser.c"
    break;

  case 47: /* or_cond_expr: or_cond_expr OR_OP and_cond_expr  */
#line 202 "parser/c7.y"
                                                               {
                    (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_str_expr((yyvsp[-1].str_value)), (yyvsp[0].expression)); 
                    free((yyvsp[-1].str_value));
                }
#line 2999 "parser/parser.c"
    break;

  case 48: /* or_cond_expr: and_cond_expr  */
#line 206 "parser/c7.y"
                                   { (yyval.expression) = (yyvsp[0].expression); }
#line 3005 "parser/parser.c"
    break;

  case 49: /* and_cond_expr: and_cond_expr AND_OP unary_cond_expr  */
#line 209 "parser/c7.y"
                                                                   {
                    (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_str_expr((yyvsp[-1].str_value)), (yyvsp[0].expression)); 
                    free((yyvsp[-1].str_value));
                }
#line 3014 "parser/parser.c"
    break;

  case 50: /* and_cond_expr: unary_cond_expr  */
#line 213 "parser/c7.y"
                                     { (yyval.expression) = (yyvsp[0].expression); }
#line 3020 "parser/parser.c"
    break;

  case 51: /* unary_cond_expr: NOT_OP unary_cond_expr  */
#line 216 "parser/c7.y"
                                               {
                    (yyval.expression) = create_bin_expr(create_char_expr((yyvsp[-1].char_value)), (yyvsp[0].expression)); 
                }
#line 3028 "parser/parser.c"
    break;

  case 52: /* unary_cond_expr: eq_cond_expr  */
#line 219 "parser/c7.y"
                                  { (yyval.expression) = (yyvsp[0].expression); }
#line 3034 "parser/parser.c"
    break;

  case 53: /* eq_cond_expr: eq_cond_expr equal_ops rel_cond_expr  */
#line 222 "parser/c7.y"
                                                                  {
                    (yyval.expression) = create_ter_expr((yyvsp[-2].expression), (yyvsp[-1].expression), (yyvsp[0].expression));
                }
#line 3042 "parser/parser.c"
    break;

  case 54: /* eq_cond_expr: rel_cond_expr  */
#line 225 "parser/c7.y"
                                   { (yyval.expression) = (yyvsp[0].expression); }
#line 3048 "parser/parser.c"
    break;

  case 55: /* equal_ops: EQ_OP  */
#line 228 "parser/c7.y"
                       {
                (yyval.expression) = create_str_expr((yyvsp[0].str_value));
                free((yyvsp[0].str_value));
            }
#line 3057 "parser/parser.c"
    break;

  case 56: /* equal_ops: NE_OP  */
#line 232 "parser/c7.y"
                       {
                (yyval.expression) = create_str_expr((yyvsp[0].str_value));
                free((yyvsp[0].str_value));
            }
#line 3066 "parser/parser.c"
    break;

  case 57: /* rel_cond_expr: rel_cond_expr rel_ops rel_cond_stmt  */
#line 238 "parser/c7.y"
                                                                  {
                    (yyval.expression) = create_ter_expr((yyvsp[-2].expression), (yyvsp[-1].expression), (yyvsp[0].expression));
                }
#line 3074 "parser/parser.c"
    break;

  case 58: /* rel_cond_expr: rel_cond_stmt  */
#line 241 "parser/c7.y"
                                   { (yyval.expression) = (yyvsp[0].expression); }
#line 3080 "parser/parser.c"
    break;

  case 59: /* rel_cond_stmt: arith_expr  */
#line 244 "parser/c7.y"
                                { (yyval.expression) = (yyvsp[0].expression); }
#line 3086 "parser/parser.c"
    break;

  case 60: /* rel_cond_stmt: EMPTY  */
#line 245 "parser/c7.y"
                           {
                    (yyval.expression) = create_str_expr((yyvsp[0].str_value));
                    free((yyvsp[0].str_value));
                }
#line 3095 "parser/parser.c"
    break;

  case 61: /* rel_cond_stmt: func_expr  */
#line 249 "parser/c7.y"
                               { (yyval.expression) = (yyvsp[0].expression); }
#line 3101 "parser/parser.c"
    break;

  case 62: /* rel_ops: L_OP  */
#line 252 "parser/c7.y"
                  { (yyval.expression) = create_char_expr((yyvsp[0].char_value)); }
#line 3107 "parser/parser.c"
    break;

  case 63: /* rel_ops: G_OP  */
#line 253 "parser/c7.y"
                  { (yyval.expression) = create_char_expr((yyvsp[0].char_value)); }
#line 3113 "parser/parser.c"
    break;

  case 64: /* rel_ops: LE_OP  */
#line 254 "parser/c7.y"
                   {
            (yyval.expression) = create_str_expr((yyvsp[0].str_value));
            free((yyvsp[0].str_value));
        }
#line 3122 "parser/parser.c"
    break;

  case 65: /* rel_ops: GE_OP  */
#line 258 "parser/c7.y"
                   { 
            (yyval.expression) = create_str_expr((yyvsp[0].str_value));
            free((yyvsp[0].str_value));
        }
#line 3131 "parser/parser.c"
    break;

  case 66: /* rel_ops: IN  */
#line 262 "parser/c7.y"
                {
            (yyval.expression) = create_str_expr((yyvsp[0].str_value));
            free((yyvsp[0].str_value));
        }
#line 3140 "parser/parser.c"
    break;

  case 67: /* set_expr: simple_expr IN simple_expr  */
#line 268 "parser/c7.y"
                                                    {
                (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_str_expr((yyvsp[-1].str_value)), (yyvsp[0].expression)); 
                free((yyvsp[-1].str_value));
            }
#line 3149 "parser/parser.c"
    break;

  case 68: /* func_call: ID PARENT_LEFT simple_param_list PARENT_RIGHT  */
#line 274 "parser/c7.y"
                                                                  {
                (yyval.expression) = create_bin_expr(create_var_expr((yyvsp[-3].int_value)), (yyvsp[-1].expression)); 
                set_id_type((yyvsp[-3].int_value), ST_ID_FUNC);
            }
#line 3158 "parser/parser.c"
    break;

  case 69: /* set_func_call: IS_SET PARENT_LEFT ID PARENT_RIGHT  */
#line 280 "parser/c7.y"
                                                           {
                    (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-3].str_value)), create_var_expr((yyvsp[-1].int_value))); 
                    set_id_type((yyvsp[-1].int_value), ST_ID_VAR);
                    free((yyvsp[-3].str_value));
                }
#line 3168 "parser/parser.c"
    break;

  case 70: /* set_func_call: ADD_SET PARENT_LEFT set_expr PARENT_RIGHT  */
#line 285 "parser/c7.y"
                                                                  {
                    (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-3].str_value)), (yyvsp[-1].expression)); 
                    free((yyvsp[-3].str_value));
                }
#line 3177 "parser/parser.c"
    break;

  case 71: /* set_func_call: REMOVE PARENT_LEFT set_expr PARENT_RIGHT  */
#line 289 "parser/c7.y"
                                                                 {
                    (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-3].str_value)), (yyvsp[-1].expression)); 
                    free((yyvsp[-3].str_value));
                }
#line 3186 "parser/parser.c"
    break;

  case 72: /* set_func_call: EXISTS PARENT_LEFT set_expr PARENT_RIGHT  */
#line 293 "parser/c7.y"
                                                                 {
                    (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-3].str_value)), (yyvsp[-1].expression));
                    free((yyvsp[-3].str_value)); 
                }
#line 3195 "parser/parser.c"
    break;

  case 73: /* simple_expr: arith_expr  */
#line 299 "parser/c7.y"
                            { (yyval.expression) = (yyvsp[0].expression); }
#line 3201 "parser/parser.c"
    break;

  case 74: /* simple_expr: func_cte_expr  */
#line 300 "parser/c7.y"
                               { (yyval.expression) = (yyvsp[0].expression); }
#line 3207 "parser/parser.c"
    break;

  case 75: /* func_cte_expr: EMPTY  */
#line 303 "parser/c7.y"
                           {
                    (yyval.expression) = create_str_expr((yyvsp[0].str_value));
                    free((yyvsp[0].str_value));
                }
#line 3216 "parser/parser.c"
    break;

  case 76: /* func_cte_expr: STRING  */
#line 307 "parser/c7.y"
                            {
                    (yyval.expression) = create_str_expr((yyvsp[0].str_value));
                    free((yyvsp[0].str_value));
                }
#line 3225 "parser/parser.c"
    break;

  case 77: /* func_cte_expr: CHAR  */
#line 311 "parser/c7.y"
                          {
                    (yyval.expression) = create_char_expr((yyvsp[0].char_value));
                }
#line 3233 "parser/parser.c"
    break;

  case 78: /* func_cte_expr: func_expr  */
#line 314 "parser/c7.y"
                               { (yyval.expression) = (yyvsp[0].expression); }
#line 3239 "parser/parser.c"
    break;

  case 79: /* func_expr: func_call  */
#line 317 "parser/c7.y"
                               { (yyval.expression) = (yyvsp[0].expression); }
#line 3245 "parser/parser.c"
    break;

  case 80: /* func_expr: set_func_call  */
#line 318 "parser/c7.y"
                                   { (yyval.expression) = (yyvsp[0].expression); }
#line 3251 "parser/parser.c"
    break;

  case 81: /* func_expr: PARENT_LEFT func_cte_expr PARENT_RIGHT  */
#line 319 "parser/c7.y"
                                                            { (yyval.expression) = (yyvsp[-1].expression); }
#line 3257 "parser/parser.c"
    break;

  case 82: /* arith_expr: arith_expr ADD term  */
#line 322 "parser/c7.y"
                                           {
                (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_char_expr((yyvsp[-1].char_value)), (yyvsp[0].expression));
            }
#line 3265 "parser/parser.c"
    break;

  case 83: /* arith_expr: arith_expr SUB term  */
#line 325 "parser/c7.y"
                                           {
                (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_char_expr((yyvsp[-1].char_value)), (yyvsp[0].expression));
            }
#line 3273 "parser/parser.c"
    break;

  case 84: /* arith_expr: term  */
#line 328 "parser/c7.y"
                      { (yyval.expression) = (yyvsp[0].expression); }
#line 3279 "parser/parser.c"
    break;

  case 85: /* term: term MULT factor  */
#line 331 "parser/c7.y"
                                    {
            (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_char_expr((yyvsp[-1].char_value)), (yyvsp[0].expression));
        }
#line 3287 "parser/parser.c"
    break;

  case 86: /* term: term DIV factor  */
#line 334 "parser/c7.y"
                                   {
            (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_char_expr((yyvsp[-1].char_value)), (yyvsp[0].expression));
        }
#line 3295 "parser/parser.c"
    break;

  case 87: /* term: factor  */
#line 337 "parser/c7.y"
                    { (yyval.expression) = (yyvsp[0].expression); }
#line 3301 "parser/parser.c"
    break;

  case 88: /* term: SUB factor  */
#line 338 "parser/c7.y"
                                        { 
            (yyval.expression) = create_bin_expr(create_char_expr((yyvsp[-1].char_value)), (yyvsp[0].expression)); 
        }
#line 3309 "parser/parser.c"
    break;

  case 89: /* factor: INTEGER  */
#line 343 "parser/c7.y"
                     { (yyval.expression) = create_int_expr((yyvsp[0].int_value)); }
#line 3315 "parser/parser.c"
    break;

  case 90: /* factor: FLOAT  */
#line 344 "parser/c7.y"
                   { (yyval.expression) = create_float_expr((yyvsp[0].float_value)); }
#line 3321 "parser/parser.c"
    break;

  case 91: /* factor: ID  */
#line 345 "parser/c7.y"
                {
            (yyval.expression) = create_var_expr((yyvsp[0].int_value));
            set_id_type((yyvsp[0].int_value), ST_ID_VAR);
        }
#line 3330 "parser/parser.c"
    break;

  case 92: /* factor: PARENT_LEFT arith_expr PARENT_RIGHT  */
#line 349 "parser/c7.y"
                                                 { (yyval.expression) = (yyvsp[-1].expression); }
#line 3336 "parser/parser.c"
    break;


#line 3340 "parser/parser.c"

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

#line 352 "parser/c7.y"


void yyerror(const char *s) {
    printf("\nSyntaxError: %s in line %d, column %d.\n",
           s, parser_line, parser_column);
    parser_error += 1;
}
