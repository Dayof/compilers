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
#define YYLAST   5123

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
      73,    73,    81,    86,    91,    96,   100,   101,   104,   107,
     112,   115,   118,   119,   122,   123,   124,   125,   126,   131,
     135,   139,   143,   147,   153,   159,   162,   166,   170,   174,
     180,   181,   184,   185,   190,   191,   197,   203,   207,   210,
     214,   217,   220,   223,   226,   229,   233,   239,   242,   245,
     246,   250,   253,   254,   255,   259,   263,   269,   275,   281,
     286,   290,   294,   300,   301,   304,   308,   312,   315,   318,
     319,   320,   323,   326,   329,   332,   335,   338,   339,   344,
     345,   346,   350
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

#define YYPACT_NINF (-230)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-93)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -5,   -37,    30,   211,   393,   400,   406,   303,  -230,   517,
     525,    33,    69,    62,   565,    28,    13,    90,   127,   119,
    2246,   612,   102,  2278,   614,   163,   177,   193,   130,   208,
     194,   201,   210,   213,   221,   246,   270,     9,  2310,  2342,
    2374,  2406,  2438,  3340,  2470,   269,   281,   184,   280,  3208,
    3208,   329,  3208,    23,   348,   377,   380,  1102,   730,  1310,
     381,   389,   392,   396,   408,   675,  1521,  1613,  3223,   596,
     302,  3223,  3223,  3223,  3369,   835,   208,   651,  2502,  3340,
    1409,    89,    55,   114,    51,  3116,  4398,  4411,  1053,  2534,
    2566,   412,   423,   439,   440,   514,    40,  2252,  2313,  2598,
     145,   145,    23,    23,   456,   327,  1179,   424,  3585,  1875,
     182,   240,   260,   463,   466,   476,   485,   258,   273,   488,
     142,  1076,  3340,  3340,  1294,  1531,  3442,  3457,  3472,  3487,
    3502,  3517,  3442,   492,   502,   526,   529,  2345,  2377,  2409,
    2441,  2473,  1826,  3208,   519,  3238,  1225,  3106,  3267,   541,
     549,   556,   568,   572,   554,  2630,   645,   166,   251,  4424,
    4437,  2662,  2694,  2726,  2758,   576,  3238,   339,  1826,   294,
     359,   319,  1826,   552,  2790,  1826,  2822,  2854,  2886,  3208,
      31,   601,   623,   626,   637,  3350,   777,  3881,  4450,  4463,
    3915,  3928,  3208,    37,   613,   689,   690,   652,   720,   722,
     731,  1188,  1139,  1227,   701,   744,   756,   760,   873,  1276,
    1424,   766,  3208,   204,   769,   780,   781,   805,   820,   823,
     837,   679,   534,   702,   799,   816,   818,   828,   232,   767,
     790,  3208,   278,  3398,  1488,   854,   857,   867,   878,  4574,
    4587,    17,   153,   546,  4850,  4856,  4889,  4895,  4928,  4817,
    4620,  4633,  3208,   298,   347,   373,   386,   914,   916,   917,
     918,  1149,  1124,  1205,   426,   464,   477,   496,   709,  1478,
    1644,   179,   179,    40,    40,    40,  1464,   835,  3135,   560,
    3398,   727,  2918,   920,   924,   931,   208,   944,   953,   151,
     913,  3340,  1150,   895,   954,  3208,   308,   590,   597,   697,
     957,   960,   970,   971,  1557,  1471,  1687,   742,   762,   839,
     849,   646,  1766,  2009,  3208,   321,  3427,   939,   951,   976,
     977,   979,   986,  1676,  3598,  3646,   504,    15,   135,   195,
     425,  1592,  1799,  4150,  4163,  4197,  4116,  3680,  3693,  3296,
    2950,  2982,   987,   962,    40,  3962,  3975,   961,  3223,  3223,
    3223,   835,    31,    31,   989,   992,  1541,   966,  3223,  3223,
    3223,   835,    37,    37,  3014,  1002,  1047,    40,   821,   888,
     972,  3223,  3223,  3223,   835,   253,   253,   204,   204,  1006,
    1064,    40,  4666,  4679,  1366,   216,   973,  3223,  3223,  3223,
    3398,  3532,  3532,   275,   275,   278,   278,  1010,  1112,    40,
    1732,  1742,   982,  3223,  3223,  3223,   835,   287,   287,   298,
     298,  4009,  4022,  1579,  1628,   528,  3164,   446,  1328,  3046,
     984,  3208,  3208,  1011,  3223,   596,   208,   138,  1388,  1436,
    1025,  1132,    40,  2034,  2050,  1000,  3223,  3223,  3223,   835,
     328,   328,   308,   308,  1036,  1197,    40,  3727,  3740,  3633,
     352,  1033,  1017,  3223,  3223,  3223,   835,  3311,  3427,  3427,
    3547,  3547,   336,   336,   321,   321,   535,  3078,  4476,  4056,
    1041,  1045,  1046,  1054,   587,  4069,  4103,  1061,  1658,  1065,
    1070,  1072,  1075,   610,  2247,  2280,  1056,   897,  1080,  1087,
    1113,  1121,   617,   901,   995,  1018,  1027,  4934,  4712,  1133,
    1137,  1146,  1157,   454,  4967,  4973,  4725,  4758,  4771,  4804,
     633,  1860,  1158,  1160,  1166,  1167,   638,  1901,  1912,  1926,
    1979,  5006,  1704,  1171,  1181,  1183,  1768,  1186,  1875,  1178,
    1076,   866,  2083,  1198,  1216,  1217,  1218,   650,  2116,  2149,
    2182,  2215,  4210,  3774,  3311,  1222,  1223,  1234,  1243,   673,
     685,   462,   467,  4244,  4257,  3787,  3821,  3834,  3868,  4489,
    4502,  4515,  4528,  4541,  1245,  1246,  1254,  1255,  1257,  1129,
    1237,  1247,  1248,  1251,  5012,  5045,  5051,  5084,   686,   710,
     714,   758,   759,  1263,  1272,  1273,  1076,  3193,  1939,  1974,
     906,   928,   941,   943,   952,   791,  4291,  4304,  4338,  4351,
    4385,  2007,  2048,  2081,  2114,  1076,   827,  1076,  2147,  1076,
    2180,  2213
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
    -230,  -230,  -230,  1278,  -230,  -230,    47,  1238,  -230,  -229,
     -18,  -172,   -39,    25,  -119,  -111,  -102,  -100,  -131,   -30,
     -38,    -4,    56,  -206,   -35,   -25,  -193,   661,   -17,    -9,
     618,  1527,  1469,  1219,   851,   428
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
      21,    78,   291,    45,     7,    82,   341,   146,    85,   279,
     292,    46,    60,    81,    75,   326,     1,   170,    86,    18,
      61,   -44,    76,    45,   -48,    19,   188,   -44,    96,   -48,
       8,    46,   204,   204,   189,   204,   344,   391,    13,    83,
     205,   205,   275,   205,    85,   275,   169,     6,   415,   193,
       6,   392,   246,   458,    86,   -48,   390,   -52,   264,    60,
     247,   -48,   188,    57,    97,    59,   265,    61,   -14,    17,
     189,   185,   345,   187,   -14,   120,    14,   201,   276,   203,
     201,   276,   203,    15,   157,   124,   125,    85,    85,   -52,
     -52,   159,   246,   -48,   123,   121,   -13,    86,    86,    84,
     247,    86,   -13,   290,   293,   188,   188,   160,   328,   188,
     419,   331,   294,   189,   189,   188,   327,   189,    83,   158,
     -50,   332,   474,   189,   460,    45,   204,   122,   307,   333,
      20,   246,   483,    46,   205,    84,   308,   334,   461,   247,
      22,   -48,   329,    47,   530,   492,   156,   -48,   -51,   307,
      96,    45,   -50,   -50,    53,    45,    75,   308,    45,    46,
     -50,    45,   204,    46,   426,   -50,    46,   164,    48,    46,
     205,    51,   -47,   -48,   459,   204,   122,   516,    84,    84,
     -51,   -51,    49,   205,   344,    57,    97,    59,   180,   147,
     -12,   -50,   -50,   174,   148,   204,   -12,   176,    50,    68,
     177,   -50,   330,   205,   -47,   123,    69,   -50,   466,   367,
     537,    -2,     9,    52,   204,    70,   246,    53,    71,   185,
     345,   187,   205,   -51,   247,    54,    72,   549,   -51,   385,
      55,    56,     1,   -50,   -50,   204,    32,    33,    34,    35,
     375,   376,   417,   205,   221,   368,   223,   -42,    57,    58,
      59,    73,   -42,    82,   -51,   -51,    85,   -49,   367,   -73,
     264,   427,   213,   246,   153,    45,    86,   -44,   265,    60,
     154,   247,   -44,    46,   188,    74,    89,    61,   204,   -16,
     381,   331,   189,   381,   232,   -16,   205,    83,    90,   -49,
     -49,   332,   399,   221,   368,   223,   253,   204,   280,   333,
     175,   328,    78,   399,   331,   205,   339,   334,    -8,   327,
     -10,   392,   450,   432,   332,   239,   382,   240,   239,   382,
     240,    91,   333,   528,    45,   -15,   446,   261,   400,   263,
     334,   -15,    46,   432,   264,   329,   -10,   296,   261,   400,
     263,   446,   265,   113,   264,   315,   -46,    84,   304,   433,
     306,   -46,   265,   -77,   143,   -77,   504,   264,   -51,   -77,
     461,   323,   447,   325,   -51,   265,   -43,   505,   304,   433,
     306,   -43,   330,   246,   246,   246,   323,   447,   325,   -75,
      78,   247,   247,   247,   -75,   -75,   503,   -76,   -79,   264,
     -51,   -51,   -76,    -5,    -5,   330,   -80,   265,   -76,    99,
      -6,    -6,    45,   -74,   204,   204,    -7,    -7,   246,    60,
      46,   291,   205,   205,    -5,   -78,   247,    61,   133,   292,
     551,    -6,   264,   331,   331,   553,   587,    -7,   279,   134,
     265,   -52,   -79,   332,   332,   332,   554,   -52,   -79,   264,
     264,   333,   333,   333,   333,   135,   136,   265,   265,   334,
     334,   334,   334,   -47,   329,   552,   326,    67,   -47,   124,
     125,   -49,   142,   -52,   -52,   144,   -49,   291,   -47,   149,
     -80,   191,   150,   -49,   -47,   292,   -80,   210,   210,   -49,
     210,    98,   151,   -74,   -47,   390,   291,   606,   291,   -74,
     291,   152,   -49,   -49,   292,   155,   292,   251,   292,   161,
     -47,   459,   -78,   270,    67,   -49,   -49,   191,   -78,   162,
     -42,   246,   290,   293,   330,   330,   -42,    -4,    -4,   247,
     137,   294,   273,   274,   210,    -3,    -3,   264,    67,    67,
     140,   141,   166,   163,   521,   265,   -81,   251,    -4,   374,
     154,   -43,   -91,   -91,   -91,   -91,    -3,   -43,   -69,   328,
     191,   191,   331,   -52,   191,   589,   -70,   327,   -52,   -45,
     191,   -91,   332,   -71,   -45,   -11,   -11,   416,   290,   293,
     333,   210,   148,   313,   338,   -72,   251,   294,   334,   -68,
     124,   125,   -67,   329,   -52,   -52,   -11,   290,   293,   290,
     293,   290,   293,   563,   313,   171,   294,   -77,   294,   154,
     294,   231,   -77,   106,   -75,   232,   347,   210,   346,   -75,
     233,   604,    -9,    -9,   -19,   -19,   568,   107,   234,   -77,
     210,   356,   154,   573,   235,   236,   237,   238,   348,   154,
     608,   349,   610,    -9,   611,   -19,   239,   108,   240,   -81,
     210,   369,   350,   330,   582,   -81,   -35,    62,   -35,   -35,
     154,   -18,   -18,   -73,   440,   441,   594,   357,   -73,   210,
     383,   251,   154,   -35,   -35,   -35,   -35,    92,    93,   -35,
     -35,   -35,   -18,   -35,   -35,   -35,   -35,   -35,   172,   600,
     210,   401,   -73,   100,   101,   154,   -35,   -89,   -89,   -89,
     -89,   -46,   -69,   118,   119,   -75,   -76,   -46,   -69,   191,
     191,   210,   210,   210,   -76,   270,   -89,   -79,   251,   -76,
     -90,   -90,   -90,   -90,    67,   -73,   -70,   407,   408,   191,
     -71,   -73,   -70,   210,   434,   358,   -71,   359,   -33,   -90,
     -33,   -33,   114,   115,   116,    75,   360,   -91,   -91,   -91,
     -91,   -91,   210,   448,   338,   -33,   -33,   -33,   -33,   -79,
     -80,   -33,   -33,   -33,   -79,   -33,   -33,   -33,   -33,   -33,
     -33,   165,   -74,   167,   -72,   -68,   -78,   338,   -33,   -80,
     -72,   -68,   210,   364,   -80,   -84,   -84,   377,   378,   270,
     475,   476,   351,   -91,   173,   -91,   -91,   -91,   -91,   270,
     484,   485,   -91,   -91,   -84,   210,   -77,   -45,   -87,   -87,
     -87,   -87,   270,   -45,   -91,   495,   496,   -75,   -76,   210,
     370,   -91,   -91,   -91,   -91,   -91,   -91,   -87,   251,   251,
     251,   251,   251,   508,   509,   371,   -79,   210,   372,   -91,
     -91,   -91,   -91,   609,   270,   270,   270,   519,   520,   339,
     252,   -17,   373,   -80,   253,   -74,   -74,   -17,   -91,   210,
     210,   -74,   254,   251,    67,   -78,   -78,   255,   256,   386,
     210,   -78,   387,   257,   258,   259,   260,   270,   313,   313,
     540,   541,   388,   -81,   210,   261,   262,   263,   -81,   -73,
      66,   273,   274,   389,   270,   270,   338,   338,   338,   338,
     338,   338,   557,   558,   190,   118,   -88,   -88,   -88,   -88,
     209,   209,   428,   209,   423,   -92,   -92,   -92,   -92,   -82,
     -82,   377,   378,   -69,   -24,   -88,   -24,   -24,   -69,   402,
     250,   403,   404,   405,   -92,   420,   269,    66,   -82,   421,
     190,   -24,   -24,   -24,   -24,   -70,   422,   -24,   -24,   -24,
     -70,   -24,   -24,   -24,   -24,   -24,   -24,   209,   -71,   424,
     -72,   138,   139,   -71,   -24,   -72,   251,   -60,   425,   -68,
     250,   429,   435,   -60,   -68,   436,   -60,   -60,   469,   118,
     273,   274,   270,   190,   190,   437,   438,   190,   -60,   118,
     451,   452,   453,   190,   454,   -60,   -60,   -60,   -60,   -60,
     -60,   455,   118,   468,   209,   477,   312,   337,   478,   250,
     273,   274,   470,   -83,   -83,   377,   378,   479,   486,   471,
     472,   473,   497,   488,   499,   338,   510,   312,   526,   480,
     481,   482,   -83,   512,   118,   523,   -85,   -85,   -85,   -85,
     209,   531,   489,   490,   491,   -86,   -86,   -86,   -86,   524,
     525,   533,   542,   209,   529,   -85,   544,   559,   500,   501,
     502,   560,   561,   487,   -86,   273,   274,   118,   545,   -59,
     562,   271,   272,   209,   513,   514,   515,   -81,   -59,   -59,
     498,   564,   273,   274,   118,   550,   565,   281,   566,   282,
     -59,   567,   209,   -81,   250,   527,   569,   -59,   -59,   -59,
     -59,   -59,   -59,   570,   283,   284,   285,   534,   535,   536,
     286,   287,   288,   209,    32,    33,    34,    35,    36,   -89,
     -89,   -89,   -89,   -89,   546,   547,   548,   289,   511,   571,
     273,   274,   411,   412,   413,   414,   209,   572,   269,   406,
     -91,   250,   -91,   -91,   -91,   -91,   -91,    66,   532,   574,
     273,   274,   190,   575,   361,   -91,   209,   -91,   -91,   -91,
     -91,   -27,   576,   -27,   -27,   -89,   -69,   -89,   -89,   -89,
     -89,   -89,   595,   577,   578,   209,   579,   337,   -27,   -27,
     -27,   -27,   580,   581,   -27,   -27,   -27,   583,   -27,   -27,
     -27,   -27,   -27,   -27,   -40,   588,   -40,   584,   -40,   585,
     337,   -27,   586,   -40,   -89,   209,   -89,   -89,   -89,   -89,
     -40,   -40,   269,   543,   590,   273,   274,   -40,   -40,   -40,
     -40,   -90,   269,   -90,   -90,   -90,   -90,   -90,   209,   -40,
     -40,   -40,   591,   592,   593,   269,   493,   494,   596,   597,
     314,   168,   209,   -90,   315,   -90,   -90,   -90,   -90,   316,
     598,   250,   250,   250,   506,   507,   317,   318,    65,   599,
     209,   -69,   -70,   319,   320,   321,   322,   269,   517,   518,
     -71,   -72,    88,   -68,   -70,   323,   324,   325,   208,   208,
     601,    95,   209,   209,   -71,   -72,   250,    66,   -68,   602,
     603,    10,   -84,   209,   -84,   -84,   362,   363,   249,   211,
     269,   538,   539,     0,   268,    65,     0,   209,    88,   -55,
       0,     0,     0,   -55,     0,     0,     0,   269,   269,   337,
     337,   337,   337,   555,   556,    95,   -55,   -90,   -90,   -90,
     -90,   -90,   -55,   -55,   -55,   -55,     0,     0,   249,   -19,
       0,   -19,   -19,     0,   -55,   -55,   -55,     0,     0,     0,
       0,    88,    88,     0,     0,    88,   -19,   -19,   -19,   -19,
       0,    88,   -19,   -19,   -19,     0,   -19,   -19,   -19,   -19,
     -19,   -19,   208,     0,   311,   336,     0,   249,     0,   -19,
       0,   277,     0,   -91,   -91,   -91,   -91,   -91,   -91,   250,
       0,   -91,   -91,     0,     0,   311,     0,     0,     0,   -25,
       0,   -25,   -25,   -91,     0,   269,     0,     0,   343,     0,
     -91,   -91,   -91,   -91,   -91,   -91,   -25,   -25,   -25,   -25,
       0,   355,   -25,   -25,   -25,   -60,   -25,   -25,   -25,   -25,
     -25,   -25,     0,     0,   -60,   -60,     0,     0,     0,   -25,
     -87,   366,   -87,   -87,   -87,   -87,   -60,   -26,   337,   -26,
     -26,     0,     0,   -60,   -60,   -60,   -60,   -60,   -60,     0,
     380,     0,   249,     0,   -26,   -26,   -26,   -26,     0,     0,
     -26,   -26,   -26,     0,   -26,   -26,   -26,   -26,   -26,   -26,
     -91,   398,   -91,   -91,   -91,   -91,   439,   -26,   -91,   -91,
     -91,   -91,   -91,   -91,   -84,     0,   -84,   -84,   409,   410,
     -84,     0,     0,     0,   355,   -60,   268,     0,    64,   249,
     -60,     0,     0,   -60,   -60,    65,     0,     0,     0,     0,
      88,     0,    87,     0,   431,   -60,     0,     0,   207,   207,
       0,   207,   -60,   -60,   -60,   -60,   -60,   -60,   -84,   -84,
     -84,   102,   103,   445,     0,   336,   -56,     0,   248,     0,
     -56,     0,     0,     0,   267,    64,     0,   -88,    87,   -88,
     -88,   -88,   -88,   -56,     0,     0,    63,     0,   336,   -56,
     -56,   -56,   -56,   343,   -89,   -89,   -89,   -89,   -89,   -89,
     268,   -56,   -56,   -56,     0,     0,   206,   206,   248,    94,
     268,     0,     0,     0,     0,   -82,   366,   -82,   -82,   362,
     363,    87,    87,   268,     0,    87,     0,     0,   -54,     0,
     380,    87,   266,    63,   -54,     0,     0,   127,   128,   249,
     249,   249,   207,     0,   310,   335,     0,   248,   398,   129,
     -87,   -87,   -87,   -87,   -87,   268,   -54,   -54,   130,   131,
     -54,   -54,     0,     0,   -83,   310,   -83,   -83,   362,   363,
     208,   208,     0,     0,   249,    65,     0,     0,   207,     0,
     -87,   431,   -87,   -87,   -87,   -87,   -87,     0,   268,     0,
       0,   207,     0,     0,   -92,   445,   -92,   -92,   -92,   -92,
     206,     0,   309,     0,     0,   268,   268,   336,   336,   336,
     336,   207,   -89,     0,   -89,   -89,   -89,   -89,   -89,     0,
       0,   -89,   -89,   309,   -90,   -90,   -90,   -90,   -90,   -90,
     207,     0,   248,   -89,     0,   -18,   342,   -18,   -18,     0,
     -89,   -89,   -89,   -89,   -89,   -89,     0,     0,     0,   354,
       0,   207,   -18,   -18,   -18,   -18,     0,     0,   -18,   -18,
     -18,     0,   -18,   -18,   -18,   -18,   -18,   -18,   -91,   365,
     -91,   -91,   -91,   -91,   -91,   -18,   267,   249,   -88,   248,
     -88,   -88,   -88,   -88,   -88,    64,     0,     0,   379,     0,
      87,     0,     0,   268,   207,     0,     0,     0,     0,   -32,
       0,   -32,   -32,   -84,   -84,   -84,   442,   443,   -84,   397,
       0,     0,     0,   207,     0,   335,   -32,   -32,   -32,   -32,
       0,     0,   -32,   -32,   -32,     0,   -32,   -32,   -32,   -32,
     -32,   -32,     0,     0,   266,   -58,   336,     0,   335,   -32,
       0,   -58,     0,    63,   -58,   -58,     0,     0,     0,     0,
     267,     0,   430,     0,     0,     0,   -58,    23,     0,   178,
     267,     0,     0,   -58,   -58,   -58,   -58,   -58,   -58,     0,
       0,   444,     0,   267,    25,    26,    27,     0,     0,     0,
      29,    30,    31,     0,    32,    33,    34,    35,    36,   248,
     248,   248,     0,     0,     0,     0,   -92,    37,   -92,   -92,
     -92,   -92,   -92,     0,     0,   267,     0,     0,   266,     0,
     231,     0,   278,     0,   232,     0,     0,     0,   266,   233,
     207,   207,     0,     0,   248,    64,   107,   234,     0,     0,
       0,   266,     0,   235,   236,   237,   238,   -82,   267,   -82,
     -82,   409,   410,   -82,     0,   239,   108,   240,   -83,     0,
     -83,   -83,   409,   410,   -83,   267,   267,   335,   335,   335,
     335,     0,   -85,   266,   -85,   -85,   -85,   -85,   -85,     0,
     -31,     0,   -31,   -31,     0,     0,     0,     0,   206,   206,
       0,     0,     0,    63,     0,     0,     0,   -31,   -31,   -31,
     -31,     0,     0,   -31,   -31,   -31,   266,   -31,   -31,   -31,
     -31,   -31,   -31,     0,     0,   -35,     0,   -35,   -35,     0,
     -31,     0,     0,   266,   266,   -86,     0,   -86,   -86,   -86,
     -86,   -86,   -35,   -35,   -35,   -35,     0,   248,   -35,   -35,
     -35,     0,   -35,   -35,   -35,   -35,   -35,   607,   -28,     0,
     -28,   -28,     0,   267,     0,   -35,   -87,   -87,   -87,   -87,
     -87,   -87,     0,     0,     0,   -28,   -28,   -28,   -28,     0,
       0,   -28,   -28,   -28,     0,   -28,   -28,   -28,   -28,   -28,
     -28,   -91,   -91,   -91,   -91,   -91,   -91,     0,   -28,   -29,
       0,   -29,   -29,     0,     0,     0,   335,   -88,   -88,   -88,
     -88,   -88,   -88,     0,     0,     0,   -29,   -29,   -29,   -29,
       0,   266,   -29,   -29,   -29,     0,   -29,   -29,   -29,   -29,
     -29,   -29,   -30,     0,   -30,   -30,     0,     0,     0,   -29,
     -92,   -92,   -92,   -92,   -92,   -92,     0,     0,     0,   -30,
     -30,   -30,   -30,     0,     0,   -30,   -30,   -30,     0,   -30,
     -30,   -30,   -30,   -30,   -30,   -37,     0,   -37,   -37,     0,
       0,     0,   -30,   -82,   -82,   -82,   442,   443,   -82,     0,
       0,     0,   -37,   -37,   -37,   -37,     0,     0,   -37,   -37,
     -37,     0,   -37,   -37,   -37,   -37,   -37,   -37,   -38,     0,
     -38,   -38,     0,     0,     0,   -37,   -83,   -83,   -83,   442,
     443,   -83,     0,     0,     0,   -38,   -38,   -38,   -38,     0,
       0,   -38,   -38,   -38,     0,   -38,   -38,   -38,   -38,   -38,
     -38,   -36,     0,   -36,   -36,     0,     0,     0,   -38,   -85,
     -85,   -85,   -85,   -85,   -85,     0,     0,     0,   -36,   -36,
     -36,   -36,     0,     0,   -36,   -36,   -36,     0,   -36,   -36,
     -36,   -36,   -36,   -36,   -39,     0,   -39,   -39,     0,     0,
       0,   -36,   -86,   -86,   -86,   -86,   -86,   -86,     0,     0,
       0,   -39,   -39,   -39,   -39,     0,     0,   -39,   -39,   -39,
       0,   -39,   -39,   -39,   -39,   -39,   -39,    23,     0,   178,
      24,     0,     0,   -85,   -39,   -85,   -85,   -85,   -85,   -91,
     -91,   -91,   -91,   -91,    25,    26,    27,    28,     0,     0,
      29,    30,    31,     0,    32,    33,    34,    35,    36,   -33,
       0,   -33,   -33,     0,     0,     0,   -86,    37,   -86,   -86,
     -86,   -86,     0,     0,     0,     0,   -33,   -33,   -33,   -33,
       0,     0,   -33,   -33,   -33,     0,   -33,   -33,   -33,   -33,
     -33,   -22,     0,   -22,   -22,     0,     0,     0,     0,   -33,
     -88,   -88,   -88,   -88,   -88,     0,     0,     0,   -22,   -22,
     -22,   -22,     0,     0,   -22,   -22,   -22,     0,   -22,   -22,
     -22,   -22,   -22,   -24,     0,   -24,   -24,     0,     0,     0,
       0,   -22,   -92,   -92,   -92,   -92,   -92,     0,     0,     0,
     -24,   -24,   -24,   -24,     0,     0,   -24,   -24,   -24,     0,
     -24,   -24,   -24,   -24,   -24,    23,     0,   178,    77,     0,
       0,     0,     0,   -24,   -82,   -82,   -82,   102,   103,     0,
       0,     0,    25,    26,    27,    28,     0,     0,    29,    30,
      31,     0,    32,    33,    34,    35,    36,   -21,     0,   -21,
     -21,     0,     0,     0,     0,    37,   -83,   -83,   -83,   102,
     103,     0,     0,     0,   -21,   -21,   -21,   -21,     0,     0,
     -21,   -21,   -21,     0,   -21,   -21,   -21,   -21,   -21,   -23,
       0,   -23,   -23,     0,     0,     0,     0,   -21,   -85,   -85,
     -85,   -85,   -85,     0,     0,     0,   -23,   -23,   -23,   -23,
       0,     0,   -23,   -23,   -23,     0,   -23,   -23,   -23,   -23,
     -23,   -27,     0,   -27,   -27,     0,     0,     0,     0,   -23,
     -86,   -86,   -86,   -86,   -86,     0,     0,     0,   -27,   -27,
     -27,   -27,     0,     0,   -27,   -27,   -27,     0,   -27,   -27,
     -27,   -27,   -27,   -20,     0,   -20,   -20,     0,     0,     0,
       0,   -27,     0,     0,     0,     0,     0,     0,     0,     0,
     -20,   -20,   -20,   -20,     0,     0,   -20,   -20,   -20,     0,
     -20,   -20,   -20,   -20,   -20,   -25,     0,   -25,   -25,     0,
       0,     0,     0,   -20,     0,     0,     0,     0,     0,     0,
       0,     0,   -25,   -25,   -25,   -25,     0,     0,   -25,   -25,
     -25,     0,   -25,   -25,   -25,   -25,   -25,   -26,     0,   -26,
     -26,     0,     0,     0,     0,   -25,     0,     0,     0,     0,
       0,     0,     0,     0,   -26,   -26,   -26,   -26,     0,     0,
     -26,   -26,   -26,     0,   -26,   -26,   -26,   -26,   -26,   -32,
       0,   -32,   -32,     0,     0,     0,     0,   -26,     0,     0,
       0,     0,     0,     0,     0,     0,   -32,   -32,   -32,   -32,
       0,     0,   -32,   -32,   -32,     0,   -32,   -32,   -32,   -32,
     -32,   -31,     0,   -31,   -31,     0,     0,     0,     0,   -32,
       0,     0,     0,     0,     0,     0,     0,     0,   -31,   -31,
     -31,   -31,     0,     0,   -31,   -31,   -31,     0,   -31,   -31,
     -31,   -31,   -31,   -28,     0,   -28,   -28,     0,     0,     0,
       0,   -31,     0,     0,     0,     0,     0,     0,     0,     0,
     -28,   -28,   -28,   -28,     0,     0,   -28,   -28,   -28,     0,
     -28,   -28,   -28,   -28,   -28,   -29,     0,   -29,   -29,     0,
       0,     0,     0,   -28,     0,     0,     0,     0,     0,     0,
       0,     0,   -29,   -29,   -29,   -29,     0,     0,   -29,   -29,
     -29,     0,   -29,   -29,   -29,   -29,   -29,   -30,     0,   -30,
     -30,     0,     0,     0,     0,   -29,     0,     0,     0,     0,
       0,     0,     0,     0,   -30,   -30,   -30,   -30,     0,     0,
     -30,   -30,   -30,     0,   -30,   -30,   -30,   -30,   -30,   -37,
       0,   -37,   -37,     0,     0,     0,     0,   -30,     0,     0,
       0,     0,     0,     0,     0,     0,   -37,   -37,   -37,   -37,
       0,     0,   -37,   -37,   -37,     0,   -37,   -37,   -37,   -37,
     -37,   -38,     0,   -38,   -38,     0,     0,     0,     0,   -37,
       0,     0,     0,     0,     0,     0,     0,     0,   -38,   -38,
     -38,   -38,     0,     0,   -38,   -38,   -38,     0,   -38,   -38,
     -38,   -38,   -38,   -36,     0,   -36,   -36,     0,     0,     0,
       0,   -38,     0,     0,     0,     0,     0,     0,     0,     0,
     -36,   -36,   -36,   -36,     0,     0,   -36,   -36,   -36,     0,
     -36,   -36,   -36,   -36,   -36,   -39,     0,   -39,   -39,     0,
       0,     0,     0,   -36,     0,     0,     0,     0,     0,     0,
       0,     0,   -39,   -39,   -39,   -39,     0,     0,   -39,   -39,
     -39,     0,   -39,   -39,   -39,   -39,   -39,    23,     0,   178,
     340,     0,     0,     0,     0,   -39,     0,     0,     0,     0,
       0,     0,     0,     0,    25,    26,    27,    28,     0,     0,
      29,    30,    31,     0,    32,    33,    34,    35,    36,    23,
       0,   178,   418,     0,     0,     0,     0,    37,     0,     0,
       0,     0,     0,     0,     0,     0,    25,    26,    27,    28,
       0,     0,    29,    30,    31,     0,    32,    33,    34,    35,
      36,   -19,     0,   -19,   -19,     0,     0,     0,     0,    37,
       0,     0,     0,     0,     0,     0,     0,     0,   -19,   -19,
     -19,   -19,     0,     0,   -19,   -19,   -19,     0,   -19,   -19,
     -19,   -19,   -19,    23,     0,   178,   467,     0,     0,     0,
       0,   -19,     0,     0,     0,     0,     0,     0,     0,     0,
      25,    26,    27,    28,     0,     0,    29,    30,    31,     0,
      32,    33,    34,    35,    36,   -11,     0,   -11,   -11,     0,
       0,     0,     0,    37,     0,     0,     0,     0,     0,     0,
       0,     0,   -11,   -11,   -11,   -11,     0,     0,   -11,   -11,
     -11,     0,   -11,   -11,   -11,   -11,   -11,    23,     0,   178,
     522,     0,     0,     0,     0,   -11,     0,     0,     0,     0,
       0,     0,     0,     0,    25,    26,    27,    28,     0,     0,
      29,    30,    31,     0,    32,    33,    34,    35,    36,   -18,
       0,   -18,   -18,     0,     0,     0,     0,    37,     0,     0,
       0,     0,     0,     0,     0,     0,   -18,   -18,   -18,   -18,
       0,     0,   -18,   -18,   -18,     0,   -18,   -18,   -18,   -18,
     -18,   -41,     0,   -41,     0,   -41,     0,     0,     0,   -18,
     -41,     0,   -54,     0,     0,     0,     0,   -41,   -41,     0,
       0,   127,   128,     0,   -41,   -41,   -41,   -41,     0,     0,
     -40,   -40,     0,   129,   -40,     0,   -41,   -41,   -41,   -40,
     -54,   -54,   130,   131,   -54,   -54,   -40,   -40,     0,     0,
       0,     0,     0,   -40,   -40,   -40,   -40,     0,     0,   -41,
     -41,     0,     0,   -41,     0,   -40,   -40,   -40,   -41,     0,
       0,     0,     0,     0,     0,   -41,   -41,     0,     0,     0,
       0,     0,   -41,   -41,   -41,   -41,     0,     0,   314,   605,
       0,     0,   315,     0,   -41,   -41,   -41,   316,     0,     0,
       0,     0,     0,   192,   317,   318,     0,   193,     0,     0,
       0,   319,   320,   321,   322,   194,     0,     0,   212,     0,
     195,   196,   213,   323,   324,   325,   197,   198,   199,   200,
     214,     0,     0,   295,     0,   215,   216,   296,   201,   202,
     203,   217,   218,   219,   220,   297,     0,     0,     0,     0,
     298,   299,     0,   221,   222,   223,   300,   301,   302,   303,
       0,     0,   231,     0,     0,     0,   232,     0,   304,   305,
     306,   233,     0,     0,     0,     0,     0,     0,   107,   234,
       0,     0,     0,     0,     0,   235,   236,   237,   238,     0,
       0,   314,     0,     0,     0,   315,     0,   239,   108,   240,
     316,     0,     0,     0,     0,     0,   252,   317,   318,     0,
     253,     0,     0,     0,   319,   320,   321,   322,   254,     0,
       0,     0,     0,   255,   256,     0,   323,   324,   325,   257,
     258,   259,   260,     0,     0,   179,     0,     0,     0,   180,
       0,   261,   262,   263,    79,     0,   -89,     0,   -89,   -89,
     -89,   -89,    80,     0,     0,   -89,   -89,     0,   181,   182,
     183,   184,     0,     0,   -34,     0,     0,   -89,   -34,     0,
     185,   186,   187,   -34,   -89,   -89,   -89,   -89,   -89,   -89,
       0,   -34,     0,     0,     0,     0,     0,   -34,   -34,   -34,
     -34,     0,     0,   231,     0,     0,     0,   232,     0,   -34,
     -34,   -34,   233,     0,     0,     0,     0,     0,     0,     0,
     234,     0,     0,     0,     0,     0,   235,   236,   237,   238,
       0,     0,   314,     0,     0,     0,   315,     0,   239,   384,
     240,   316,     0,     0,     0,     0,     0,   179,     0,   318,
       0,   180,     0,     0,     0,   319,   320,   321,   322,     0,
       0,     0,   -62,     0,    80,     0,   -62,   323,   449,   325,
     181,   182,   183,   184,     0,     0,     0,   -63,     0,   -62,
       0,   -63,   185,   186,   187,   -62,   -62,   -62,   -62,     0,
       0,     0,   -66,     0,   -63,     0,   -66,   -62,   -62,   -62,
     -63,   -63,   -63,   -63,     0,     0,     0,   -64,     0,   -66,
       0,   -64,   -63,   -63,   -63,   -66,   -66,   -66,   -66,     0,
       0,     0,   -65,     0,   -64,     0,   -65,   -66,   -66,   -66,
     -64,   -64,   -64,   -64,     0,     0,     0,   231,     0,   -65,
       0,   232,   -64,   -64,   -64,   -65,   -65,   -65,   -65,     0,
       0,     0,   314,     0,   234,     0,   315,   -65,   -65,   -65,
     235,   236,   237,   238,     0,     0,     0,     0,     0,   318,
       0,     0,   239,   384,   240,   319,   320,   321,   322,     0,
       0,     0,     0,     0,     0,     0,     0,   323,   449,   325,
     277,     0,   -91,   -91,   -91,   -91,   -91,   -91,   145,     0,
     -91,   -91,     0,   456,   -91,     0,   -91,   -91,   -91,   -91,
     -91,   457,   -91,   -91,   -91,     0,     0,     0,     0,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,     0,     0,     0,     0,
       0,     0,   -91,   -91,   -91,   -91,   -91,   -91,   456,   -91,
       0,   -91,   -91,   -91,   -91,   -91,     0,     0,   -91,   -91,
       0,     0,   -90,     0,   -90,   -90,   -90,   -90,   -90,     0,
     -91,   -90,   -90,     0,     0,     0,     0,   -91,   -91,   -91,
     -91,   -91,   -91,   -90,     0,     0,     0,     0,     0,     0,
     -90,   -90,   -90,   -90,   -90,   -90,   -84,     0,   -84,   -84,
     464,   465,   -84,     0,     0,   -84,   -84,     0,     0,   -87,
       0,   -87,   -87,   -87,   -87,   -87,     0,   -84,   -87,   -87,
       0,     0,     0,     0,   -84,   -84,   -84,   -84,   -84,   -84,
     -87,     0,     0,     0,     0,     0,     0,   -87,   -87,   -87,
     -87,   -87,   -87,   -91,     0,   -91,   -91,   -91,   -91,   -91,
       0,     0,   -91,   -91,     0,     0,   -88,     0,   -88,   -88,
     -88,   -88,   -88,     0,   -91,   -88,   -88,     0,     0,     0,
       0,   -91,   -91,   -91,   -91,   -91,   -91,   -88,     0,     0,
       0,     0,     0,     0,   -88,   -88,   -88,   -88,   -88,   -88,
     -92,     0,   -92,   -92,   -92,   -92,   -92,     0,     0,   -92,
     -92,     0,     0,   -82,     0,   -82,   -82,   464,   465,   -82,
       0,   -92,   -82,   -82,     0,     0,     0,     0,   -92,   -92,
     -92,   -92,   -92,   -92,   -82,     0,     0,     0,     0,     0,
       0,   -82,   -82,   -82,   -82,   -82,   -82,   -83,     0,   -83,
     -83,   464,   465,   -83,     0,     0,   -83,   -83,     0,     0,
     -85,     0,   -85,   -85,   -85,   -85,   -85,     0,   -83,   -85,
     -85,     0,     0,     0,     0,   -83,   -83,   -83,   -83,   -83,
     -83,   -85,     0,     0,     0,     0,     0,     0,   -85,   -85,
     -85,   -85,   -85,   -85,   -86,     0,   -86,   -86,   -86,   -86,
     -86,     0,     0,   -86,   -86,     0,     0,   -90,     0,   -90,
     -90,   -90,   -90,     0,     0,   -86,   -90,   -90,     0,     0,
       0,     0,   -86,   -86,   -86,   -86,   -86,   -86,   -90,     0,
       0,     0,     0,     0,     0,   -90,   -90,   -90,   -90,   -90,
     -90,   -84,     0,   -84,   -84,   352,   353,     0,     0,     0,
     -84,   -84,     0,     0,   -87,     0,   -87,   -87,   -87,   -87,
       0,     0,   -84,   -87,   -87,     0,     0,     0,     0,   -84,
     -84,   -84,   -84,   -84,   -84,   -87,     0,     0,     0,     0,
       0,     0,   -87,   -87,   -87,   -87,   -87,   -87,   -91,     0,
     -91,   -91,   -91,   -91,     0,     0,     0,   -91,   -91,     0,
       0,   -88,     0,   -88,   -88,   -88,   -88,     0,     0,   -91,
     -88,   -88,     0,     0,     0,     0,   -91,   -91,   -91,   -91,
     -91,   -91,   -88,     0,     0,     0,     0,     0,     0,   -88,
     -88,   -88,   -88,   -88,   -88,   -82,     0,   -82,   -82,   352,
     353,     0,     0,     0,   -82,   -82,     0,     0,   -83,     0,
     -83,   -83,   352,   353,     0,     0,   -82,   -83,   -83,     0,
       0,     0,     0,   -82,   -82,   -82,   -82,   -82,   -82,   -83,
       0,     0,     0,     0,     0,     0,   -83,   -83,   -83,   -83,
     -83,   -83,   -92,     0,   -92,   -92,   -92,   -92,     0,     0,
       0,   -92,   -92,     0,     0,   -85,     0,   -85,   -85,   -85,
     -85,     0,     0,   -92,   -85,   -85,     0,     0,     0,     0,
     -92,   -92,   -92,   -92,   -92,   -92,   -85,     0,     0,     0,
       0,     0,     0,   -85,   -85,   -85,   -85,   -85,   -85,   -86,
       0,   -86,   -86,   -86,   -86,     0,     0,     0,   -86,   -86,
       0,     0,   -59,     0,   462,   463,     0,     0,   -59,     0,
     -86,   -59,   -59,     0,     0,     0,     0,   -86,   -86,   -86,
     -86,   -86,   -86,   -59,     0,     0,     0,     0,     0,     0,
     -59,   -59,   -59,   -59,   -59,   -59,   -79,     0,     0,     0,
       0,     0,   -79,     0,     0,   -79,   -79,     0,     0,   -80,
       0,     0,     0,     0,     0,   -80,     0,   -79,   -80,   -80,
       0,     0,     0,     0,   -79,   -79,   -79,   -79,   -79,   -79,
     -80,     0,     0,     0,     0,     0,     0,   -80,   -80,   -80,
     -80,   -80,   -80,   -61,     0,     0,     0,     0,     0,   -61,
       0,     0,   -61,   -61,     0,     0,   -81,     0,     0,     0,
       0,     0,   -81,     0,   -61,   -81,   -81,     0,     0,     0,
       0,   -61,   -61,   -61,   -61,   -61,   -61,   -81,     0,     0,
       0,     0,     0,     0,   -81,   -81,   -81,   -81,   -81,   -81,
     -53,     0,     0,     0,     0,     0,   -53,     0,     0,   127,
     128,     0,     0,   -57,     0,     0,     0,     0,     0,   -57,
       0,   129,   -57,   -57,     0,     0,     0,     0,   -53,   -53,
     130,   131,   -53,   -53,   -57,     0,     0,     0,     0,     0,
       0,   -57,   -57,   -57,   -57,   -57,   -57,   -69,     0,     0,
       0,     0,     0,   -69,     0,     0,   -69,   -69,     0,     0,
     -70,     0,     0,     0,     0,     0,   -70,     0,   -69,   -70,
     -70,     0,     0,     0,     0,   -69,   -69,   -69,   -69,   -69,
     -69,   -70,     0,     0,     0,     0,     0,     0,   -70,   -70,
     -70,   -70,   -70,   -70,   -71,     0,     0,     0,     0,     0,
     -71,     0,     0,   -71,   -71,     0,     0,   -72,     0,     0,
       0,     0,     0,   -72,     0,   -71,   -72,   -72,     0,     0,
       0,     0,   -71,   -71,   -71,   -71,   -71,   -71,   -72,     0,
       0,     0,     0,     0,     0,   -72,   -72,   -72,   -72,   -72,
     -72,   -68,     0,     0,     0,     0,     0,   -68,     0,     0,
     -68,   -68,     0,     0,   -58,     0,     0,     0,     0,     0,
       0,     0,   -68,   -58,   -58,     0,     0,   -61,     0,   -68,
     -68,   -68,   -68,   -68,   -68,   -58,   -61,   -61,     0,     0,
     -53,     0,   -58,   -58,   -58,   -58,   -58,   -58,   -61,   127,
     128,     0,     0,   -57,     0,   -61,   -61,   -61,   -61,   -61,
     -61,   129,   -57,   -57,     0,     0,   -79,     0,   -53,   -53,
     130,   131,   -53,   -53,   -57,   -79,   -79,     0,     0,   -80,
       0,   -57,   -57,   -57,   -57,   -57,   -57,   -79,   -80,   -80,
       0,     0,   -81,     0,   -79,   -79,   -79,   -79,   -79,   -79,
     -80,   -81,   -81,     0,     0,   -69,     0,   -80,   -80,   -80,
     -80,   -80,   -80,   -81,   -69,   -69,     0,     0,   -70,     0,
     -81,   -81,   -81,   -81,   -81,   -81,   -69,   -70,   -70,     0,
       0,   -71,     0,   -69,   -69,   -69,   -69,   -69,   -69,   -70,
     -71,   -71,     0,     0,   -72,     0,   -70,   -70,   -70,   -70,
     -70,   -70,   -71,   -72,   -72,     0,     0,   -68,     0,   -71,
     -71,   -71,   -71,   -71,   -71,   -72,   -68,   -68,     0,     0,
       0,     0,   -72,   -72,   -72,   -72,   -72,   -72,   -68,     0,
       0,     0,     0,     0,     0,   -68,   -68,   -68,   -68,   -68,
     -68,   -89,   -89,   -89,   -89,   -89,   -89,     0,     0,   -89,
     -89,     0,     0,     0,   -90,   -90,   -90,   -90,   -90,   -90,
       0,   -89,   -90,   -90,     0,     0,     0,     0,   -89,   -89,
     -89,   -89,   -89,   -89,   -90,     0,     0,     0,     0,     0,
       0,   -90,   -90,   -90,   -90,   -90,   -90,   -84,   -84,   -84,
     395,   396,   -84,     0,     0,   -84,   -84,     0,     0,     0,
     -87,   -87,   -87,   -87,   -87,   -87,     0,   -84,   -87,   -87,
       0,     0,     0,     0,   -84,   -84,   -84,   -84,   -84,   -84,
     -87,     0,     0,     0,     0,     0,     0,   -87,   -87,   -87,
     -87,   -87,   -87,   -91,   -91,   -91,   -91,   -91,   -91,     0,
       0,   -91,   -91,     0,     0,     0,   -88,   -88,   -88,   -88,
     -88,   -88,     0,   -91,   -88,   -88,     0,     0,     0,     0,
     -91,   -91,   -91,   -91,   -91,   -91,   -88,     0,     0,     0,
       0,     0,     0,   -88,   -88,   -88,   -88,   -88,   -88,   -92,
     -92,   -92,   -92,   -92,   -92,     0,     0,   -92,   -92,     0,
       0,     0,   -82,   -82,   -82,   395,   396,   -82,     0,   -92,
     -82,   -82,     0,     0,     0,     0,   -92,   -92,   -92,   -92,
     -92,   -92,   -82,     0,     0,     0,     0,     0,     0,   -82,
     -82,   -82,   -82,   -82,   -82,   -83,   -83,   -83,   395,   396,
     -83,     0,     0,   -83,   -83,     0,     0,     0,   -85,   -85,
     -85,   -85,   -85,   -85,     0,   -83,   -85,   -85,     0,     0,
       0,     0,   -83,   -83,   -83,   -83,   -83,   -83,   -85,     0,
       0,     0,     0,     0,     0,   -85,   -85,   -85,   -85,   -85,
     -85,   -86,   -86,   -86,   -86,   -86,   -86,     0,     0,   -86,
     -86,     0,     0,     0,   -59,   393,   394,     0,     0,   -59,
       0,   -86,   -59,   -59,     0,     0,     0,     0,   -86,   -86,
     -86,   -86,   -86,   -86,   -59,     0,     0,     0,     0,     0,
       0,   -59,   -59,   -59,   -59,   -59,   -59,   -54,     0,     0,
       0,     0,   -54,   -58,     0,   127,   128,     0,   -58,     0,
       0,   -58,   -58,     0,     0,     0,     0,   129,     0,     0,
       0,     0,     0,   -58,   -54,   -54,   130,   131,   -54,   -54,
     -58,   -58,   -58,   -58,   -58,   -58,   -79,     0,     0,     0,
       0,   -79,   -80,     0,   -79,   -79,     0,   -80,     0,     0,
     -80,   -80,     0,     0,     0,     0,   -79,     0,     0,     0,
       0,     0,   -80,   -79,   -79,   -79,   -79,   -79,   -79,   -80,
     -80,   -80,   -80,   -80,   -80,   -61,     0,     0,     0,     0,
     -61,   -81,     0,   -61,   -61,     0,   -81,     0,     0,   -81,
     -81,     0,     0,     0,     0,   -61,     0,     0,     0,     0,
       0,   -81,   -61,   -61,   -61,   -61,   -61,   -61,   -81,   -81,
     -81,   -81,   -81,   -81,   -53,     0,     0,     0,     0,   -53,
     -57,     0,   127,   128,     0,   -57,     0,     0,   -57,   -57,
       0,     0,     0,     0,   129,     0,     0,     0,     0,     0,
     -57,   -53,   -53,   130,   131,   -53,   -53,   -57,   -57,   -57,
     -57,   -57,   -57,   -68,     0,     0,     0,     0,   -68,   -69,
       0,   -68,   -68,     0,   -69,     0,     0,   -69,   -69,     0,
       0,     0,     0,   -68,     0,     0,     0,     0,     0,   -69,
     -68,   -68,   -68,   -68,   -68,   -68,   -69,   -69,   -69,   -69,
     -69,   -69,   -70,     0,     0,     0,     0,   -70,   -71,     0,
     -70,   -70,     0,   -71,     0,     0,   -71,   -71,     0,     0,
       0,     0,   -70,     0,     0,     0,     0,     0,   -71,   -70,
     -70,   -70,   -70,   -70,   -70,   -71,   -71,   -71,   -71,   -71,
     -71,   -72,     0,     0,     0,     0,   -72,     0,     0,   -72,
     -72,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -72,     0,     0,     0,     0,     0,     0,   -72,   -72,
     -72,   -72,   -72,   -72
};

static const yytype_int16 yycheck[] =
{
      18,    40,   121,    20,    41,    43,   178,   109,    43,   109,
     121,    20,    29,    43,     5,   146,    21,   148,    43,     6,
      29,     6,    13,    40,     7,    12,    43,    12,     5,    12,
       0,    40,    49,    50,    43,    52,     5,   243,     5,    43,
      49,    50,     5,    52,    79,     5,   146,     0,   277,     9,
       3,   244,    69,    38,    79,    38,    39,     6,    75,    76,
      69,     6,    79,    40,    41,    42,    75,    76,     6,    41,
      79,    40,    41,    42,    12,    79,     7,    40,    41,    42,
      40,    41,    42,    21,   122,    34,    35,   122,   123,    38,
      39,   126,   109,    38,    39,     6,     6,   122,   123,    43,
     109,   126,    12,   121,   121,   122,   123,   132,   146,   126,
     282,   146,   121,   122,   123,   132,   146,   126,   122,   123,
       6,   146,   351,   132,   330,   142,   143,    38,   145,   146,
       3,   148,   361,   142,   143,    79,   145,   146,   331,   148,
      21,     6,   146,    41,     6,   374,   121,    12,     6,   166,
       5,   168,    38,    39,     9,   172,     5,   166,   175,   168,
       7,   178,   179,   172,    13,    12,   175,   142,     5,   178,
     179,    41,     6,    38,    39,   192,    38,   406,   122,   123,
      38,    39,     5,   192,     5,    40,    41,    42,     9,     7,
       6,    38,    39,   168,    12,   212,    12,   172,     5,     5,
     175,     6,   146,   212,    38,    39,     5,    12,   339,     5,
     439,     0,     1,     5,   231,     5,   233,     9,     5,    40,
      41,    42,   231,     7,   233,    17,     5,   456,    12,   233,
      22,    23,    21,    38,    39,   252,    28,    29,    30,    31,
       8,     9,   280,   252,    40,    41,    42,     7,    40,    41,
      42,     5,    12,   291,    38,    39,   291,     6,     5,    27,
     277,   291,     9,   280,     6,   282,   291,     7,   277,   286,
      12,   280,    12,   282,   291,     5,     7,   286,   295,     6,
       5,   316,   291,     5,     9,    12,   295,   291,     7,    38,
      39,   316,     5,    40,    41,    42,     9,   314,    38,   316,
       6,   339,   341,     5,   339,   314,    12,   316,     5,   339,
       7,   504,   316,     5,   339,    40,    41,    42,    40,    41,
      42,    41,   339,   425,   341,     6,     5,    40,    41,    42,
     339,    12,   341,     5,   351,   339,     7,     9,    40,    41,
      42,     5,   351,    41,   361,     9,     7,   291,    40,    41,
      42,    12,   361,     6,    27,     7,   391,   374,     6,    12,
     553,    40,    41,    42,    12,   374,     7,   392,    40,    41,
      42,    12,   316,   390,   391,   392,    40,    41,    42,     6,
     419,   390,   391,   392,     7,    12,   390,     7,     7,   406,
      38,    39,     6,     0,     1,   339,     7,   406,    12,     7,
       0,     1,   419,     7,   421,   422,     0,     1,   425,   426,
     419,   530,   421,   422,    21,     7,   425,   426,     6,   530,
     458,    21,   439,   458,   459,   460,   528,    21,   528,     6,
     439,     6,     6,   458,   459,   460,   461,    12,    12,   456,
     457,   458,   459,   460,   461,     6,     6,   456,   457,   458,
     459,   460,   461,     7,   458,   459,   587,    29,    12,    34,
      35,     7,     6,    38,    39,    41,    12,   586,     6,     6,
       6,    43,     6,     6,    12,   586,    12,    49,    50,    12,
      52,    53,     6,     6,    38,    39,   605,   587,   607,    12,
     609,     6,    38,    39,   605,     7,   607,    69,   609,     7,
      38,    39,     6,    75,    76,    38,    39,    79,    12,     7,
       6,   528,   530,   530,   458,   459,    12,     0,     1,   528,
       6,   530,     8,     9,    96,     0,     1,   544,   100,   101,
     102,   103,    13,     7,     6,   544,     7,   109,    21,     5,
      12,     6,     8,     9,    10,    11,    21,    12,     7,   587,
     122,   123,   587,     7,   126,   530,     7,   587,    12,     7,
     132,    27,   587,     7,    12,     0,     1,     7,   586,   586,
     587,   143,    12,   145,   146,     7,   148,   586,   587,     7,
      34,    35,     6,   587,    38,    39,    21,   605,   605,   607,
     607,   609,   609,     6,   166,    41,   605,     7,   607,    12,
     609,     5,    12,     7,     7,     9,     5,   179,   180,    12,
      14,   586,     0,     1,     0,     1,     6,    21,    22,     6,
     192,   193,    12,     6,    28,    29,    30,    31,     5,    12,
     605,     5,   607,    21,   609,    21,    40,    41,    42,     6,
     212,   213,     5,   587,     6,    12,     1,    29,     3,     4,
      12,     0,     1,     7,     8,     9,     6,     5,    12,   231,
     232,   233,    12,    18,    19,    20,    21,    49,    50,    24,
      25,    26,    21,    28,    29,    30,    31,    32,    33,     6,
     252,   253,     7,     8,     9,    12,    41,     8,     9,    10,
      11,     6,     6,    75,    76,     6,     6,    12,    12,   271,
     272,   273,   274,   275,     7,   277,    27,     6,   280,    12,
       8,     9,    10,    11,   286,     6,     6,     8,     9,   291,
       6,    12,    12,   295,   296,     5,    12,     5,     1,    27,
       3,     4,    71,    72,    73,     5,     5,     7,     8,     9,
      10,    11,   314,   315,   316,    18,    19,    20,    21,     7,
       6,    24,    25,    26,    12,    28,    29,    30,    31,    32,
      33,   143,     6,   145,     6,     6,     6,   339,    41,     7,
      12,    12,   344,     7,    12,     8,     9,    10,    11,   351,
     352,   353,     5,     6,   166,     8,     9,    10,    11,   361,
     362,   363,    15,    16,    27,   367,    27,     6,     8,     9,
      10,    11,   374,    12,    27,   377,   378,    27,    27,   381,
       5,    34,    35,    36,    37,    38,    39,    27,   390,   391,
     392,   393,   394,   395,   396,     5,    27,   399,     5,     8,
       9,    10,    11,     6,   406,   407,   408,   409,   410,    12,
       5,     6,     5,    27,     9,    27,     7,    12,    27,   421,
     422,    12,    17,   425,   426,    27,     7,    22,    23,     5,
     432,    12,     5,    28,    29,    30,    31,   439,   440,   441,
     442,   443,     5,     7,   446,    40,    41,    42,    12,     6,
      29,     8,     9,     5,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,    43,   277,     8,     9,    10,    11,
      49,    50,     7,    52,   286,     8,     9,    10,    11,     8,
       9,    10,    11,     7,     1,    27,     3,     4,    12,     5,
      69,     5,     5,     5,    27,     5,    75,    76,    27,     5,
      79,    18,    19,    20,    21,     7,     5,    24,    25,    26,
      12,    28,    29,    30,    31,    32,    33,    96,     7,     5,
       7,   100,   101,    12,    41,    12,   528,     6,     5,     7,
     109,     7,     5,    12,    12,     5,    15,    16,     6,   351,
       8,     9,   544,   122,   123,     5,     5,   126,    27,   361,
      41,     5,     5,   132,     5,    34,    35,    36,    37,    38,
      39,     5,   374,     6,   143,     6,   145,   146,     6,   148,
       8,     9,    41,     8,     9,    10,    11,    41,     6,   348,
     349,   350,     6,    41,    41,   587,     6,   166,     7,   358,
     359,   360,    27,    41,   406,    41,     8,     9,    10,    11,
     179,     6,   371,   372,   373,     8,     9,    10,    11,   421,
     422,    41,     6,   192,   426,    27,    13,     6,   387,   388,
     389,     6,     6,     6,    27,     8,     9,   439,    41,     6,
       6,     8,     9,   212,   403,   404,   405,     6,    15,    16,
       6,     6,     8,     9,   456,   457,     6,     1,     6,     3,
      27,     6,   231,    27,   233,   424,     6,    34,    35,    36,
      37,    38,    39,     6,    18,    19,    20,   436,   437,   438,
      24,    25,    26,   252,    28,    29,    30,    31,    32,     7,
       8,     9,    10,    11,   453,   454,   455,    41,     6,     6,
       8,     9,   271,   272,   273,   274,   275,     6,   277,     5,
       6,   280,     8,     9,    10,    11,    12,   286,     6,     6,
       8,     9,   291,     6,     5,     6,   295,     8,     9,    10,
      11,     1,     6,     3,     4,     6,    27,     8,     9,    10,
      11,    12,   544,     6,     6,   314,     6,   316,    18,    19,
      20,    21,     6,     6,    24,    25,    26,     6,    28,    29,
      30,    31,    32,    33,     5,     7,     7,     6,     9,     6,
     339,    41,     6,    14,     6,   344,     8,     9,    10,    11,
      21,    22,   351,     6,     6,     8,     9,    28,    29,    30,
      31,     6,   361,     8,     9,    10,    11,    12,   367,    40,
      41,    42,     6,     6,     6,   374,   375,   376,     6,     6,
       5,     6,   381,     6,     9,     8,     9,    10,    11,    14,
       6,   390,   391,   392,   393,   394,    21,    22,    29,     6,
     399,     6,     6,    28,    29,    30,    31,   406,   407,   408,
       6,     6,    43,     6,    27,    40,    41,    42,    49,    50,
       7,    52,   421,   422,    27,    27,   425,   426,    27,     7,
       7,     3,     6,   432,     8,     9,    10,    11,    69,    51,
     439,   440,   441,    -1,    75,    76,    -1,   446,    79,     5,
      -1,    -1,    -1,     9,    -1,    -1,    -1,   456,   457,   458,
     459,   460,   461,   462,   463,    96,    22,     7,     8,     9,
      10,    11,    28,    29,    30,    31,    -1,    -1,   109,     1,
      -1,     3,     4,    -1,    40,    41,    42,    -1,    -1,    -1,
      -1,   122,   123,    -1,    -1,   126,    18,    19,    20,    21,
      -1,   132,    24,    25,    26,    -1,    28,    29,    30,    31,
      32,    33,   143,    -1,   145,   146,    -1,   148,    -1,    41,
      -1,     5,    -1,     7,     8,     9,    10,    11,    12,   528,
      -1,    15,    16,    -1,    -1,   166,    -1,    -1,    -1,     1,
      -1,     3,     4,    27,    -1,   544,    -1,    -1,   179,    -1,
      34,    35,    36,    37,    38,    39,    18,    19,    20,    21,
      -1,   192,    24,    25,    26,     6,    28,    29,    30,    31,
      32,    33,    -1,    -1,    15,    16,    -1,    -1,    -1,    41,
       6,   212,     8,     9,    10,    11,    27,     1,   587,     3,
       4,    -1,    -1,    34,    35,    36,    37,    38,    39,    -1,
     231,    -1,   233,    -1,    18,    19,    20,    21,    -1,    -1,
      24,    25,    26,    -1,    28,    29,    30,    31,    32,    33,
       6,   252,     8,     9,    10,    11,     5,    41,     7,     8,
       9,    10,    11,    12,     6,    -1,     8,     9,    10,    11,
      12,    -1,    -1,    -1,   275,     7,   277,    -1,    29,   280,
      12,    -1,    -1,    15,    16,   286,    -1,    -1,    -1,    -1,
     291,    -1,    43,    -1,   295,    27,    -1,    -1,    49,    50,
      -1,    52,    34,    35,    36,    37,    38,    39,     7,     8,
       9,    10,    11,   314,    -1,   316,     5,    -1,    69,    -1,
       9,    -1,    -1,    -1,    75,    76,    -1,     6,    79,     8,
       9,    10,    11,    22,    -1,    -1,    29,    -1,   339,    28,
      29,    30,    31,   344,     7,     8,     9,    10,    11,    12,
     351,    40,    41,    42,    -1,    -1,    49,    50,   109,    52,
     361,    -1,    -1,    -1,    -1,     6,   367,     8,     9,    10,
      11,   122,   123,   374,    -1,   126,    -1,    -1,     6,    -1,
     381,   132,    75,    76,    12,    -1,    -1,    15,    16,   390,
     391,   392,   143,    -1,   145,   146,    -1,   148,   399,    27,
       7,     8,     9,    10,    11,   406,    34,    35,    36,    37,
      38,    39,    -1,    -1,     6,   166,     8,     9,    10,    11,
     421,   422,    -1,    -1,   425,   426,    -1,    -1,   179,    -1,
       6,   432,     8,     9,    10,    11,    12,    -1,   439,    -1,
      -1,   192,    -1,    -1,     6,   446,     8,     9,    10,    11,
     143,    -1,   145,    -1,    -1,   456,   457,   458,   459,   460,
     461,   212,     6,    -1,     8,     9,    10,    11,    12,    -1,
      -1,    15,    16,   166,     7,     8,     9,    10,    11,    12,
     231,    -1,   233,    27,    -1,     1,   179,     3,     4,    -1,
      34,    35,    36,    37,    38,    39,    -1,    -1,    -1,   192,
      -1,   252,    18,    19,    20,    21,    -1,    -1,    24,    25,
      26,    -1,    28,    29,    30,    31,    32,    33,     6,   212,
       8,     9,    10,    11,    12,    41,   277,   528,     6,   280,
       8,     9,    10,    11,    12,   286,    -1,    -1,   231,    -1,
     291,    -1,    -1,   544,   295,    -1,    -1,    -1,    -1,     1,
      -1,     3,     4,     7,     8,     9,    10,    11,    12,   252,
      -1,    -1,    -1,   314,    -1,   316,    18,    19,    20,    21,
      -1,    -1,    24,    25,    26,    -1,    28,    29,    30,    31,
      32,    33,    -1,    -1,   277,     6,   587,    -1,   339,    41,
      -1,    12,    -1,   286,    15,    16,    -1,    -1,    -1,    -1,
     351,    -1,   295,    -1,    -1,    -1,    27,     1,    -1,     3,
     361,    -1,    -1,    34,    35,    36,    37,    38,    39,    -1,
      -1,   314,    -1,   374,    18,    19,    20,    -1,    -1,    -1,
      24,    25,    26,    -1,    28,    29,    30,    31,    32,   390,
     391,   392,    -1,    -1,    -1,    -1,     6,    41,     8,     9,
      10,    11,    12,    -1,    -1,   406,    -1,    -1,   351,    -1,
       5,    -1,     7,    -1,     9,    -1,    -1,    -1,   361,    14,
     421,   422,    -1,    -1,   425,   426,    21,    22,    -1,    -1,
      -1,   374,    -1,    28,    29,    30,    31,     6,   439,     8,
       9,    10,    11,    12,    -1,    40,    41,    42,     6,    -1,
       8,     9,    10,    11,    12,   456,   457,   458,   459,   460,
     461,    -1,     6,   406,     8,     9,    10,    11,    12,    -1,
       1,    -1,     3,     4,    -1,    -1,    -1,    -1,   421,   422,
      -1,    -1,    -1,   426,    -1,    -1,    -1,    18,    19,    20,
      21,    -1,    -1,    24,    25,    26,   439,    28,    29,    30,
      31,    32,    33,    -1,    -1,     1,    -1,     3,     4,    -1,
      41,    -1,    -1,   456,   457,     6,    -1,     8,     9,    10,
      11,    12,    18,    19,    20,    21,    -1,   528,    24,    25,
      26,    -1,    28,    29,    30,    31,    32,    33,     1,    -1,
       3,     4,    -1,   544,    -1,    41,     7,     8,     9,    10,
      11,    12,    -1,    -1,    -1,    18,    19,    20,    21,    -1,
      -1,    24,    25,    26,    -1,    28,    29,    30,    31,    32,
      33,     7,     8,     9,    10,    11,    12,    -1,    41,     1,
      -1,     3,     4,    -1,    -1,    -1,   587,     7,     8,     9,
      10,    11,    12,    -1,    -1,    -1,    18,    19,    20,    21,
      -1,   544,    24,    25,    26,    -1,    28,    29,    30,    31,
      32,    33,     1,    -1,     3,     4,    -1,    -1,    -1,    41,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    18,
      19,    20,    21,    -1,    -1,    24,    25,    26,    -1,    28,
      29,    30,    31,    32,    33,     1,    -1,     3,     4,    -1,
      -1,    -1,    41,     7,     8,     9,    10,    11,    12,    -1,
      -1,    -1,    18,    19,    20,    21,    -1,    -1,    24,    25,
      26,    -1,    28,    29,    30,    31,    32,    33,     1,    -1,
       3,     4,    -1,    -1,    -1,    41,     7,     8,     9,    10,
      11,    12,    -1,    -1,    -1,    18,    19,    20,    21,    -1,
      -1,    24,    25,    26,    -1,    28,    29,    30,    31,    32,
      33,     1,    -1,     3,     4,    -1,    -1,    -1,    41,     7,
       8,     9,    10,    11,    12,    -1,    -1,    -1,    18,    19,
      20,    21,    -1,    -1,    24,    25,    26,    -1,    28,    29,
      30,    31,    32,    33,     1,    -1,     3,     4,    -1,    -1,
      -1,    41,     7,     8,     9,    10,    11,    12,    -1,    -1,
      -1,    18,    19,    20,    21,    -1,    -1,    24,    25,    26,
      -1,    28,    29,    30,    31,    32,    33,     1,    -1,     3,
       4,    -1,    -1,     6,    41,     8,     9,    10,    11,     7,
       8,     9,    10,    11,    18,    19,    20,    21,    -1,    -1,
      24,    25,    26,    -1,    28,    29,    30,    31,    32,     1,
      -1,     3,     4,    -1,    -1,    -1,     6,    41,     8,     9,
      10,    11,    -1,    -1,    -1,    -1,    18,    19,    20,    21,
      -1,    -1,    24,    25,    26,    -1,    28,    29,    30,    31,
      32,     1,    -1,     3,     4,    -1,    -1,    -1,    -1,    41,
       7,     8,     9,    10,    11,    -1,    -1,    -1,    18,    19,
      20,    21,    -1,    -1,    24,    25,    26,    -1,    28,    29,
      30,    31,    32,     1,    -1,     3,     4,    -1,    -1,    -1,
      -1,    41,     7,     8,     9,    10,    11,    -1,    -1,    -1,
      18,    19,    20,    21,    -1,    -1,    24,    25,    26,    -1,
      28,    29,    30,    31,    32,     1,    -1,     3,     4,    -1,
      -1,    -1,    -1,    41,     7,     8,     9,    10,    11,    -1,
      -1,    -1,    18,    19,    20,    21,    -1,    -1,    24,    25,
      26,    -1,    28,    29,    30,    31,    32,     1,    -1,     3,
       4,    -1,    -1,    -1,    -1,    41,     7,     8,     9,    10,
      11,    -1,    -1,    -1,    18,    19,    20,    21,    -1,    -1,
      24,    25,    26,    -1,    28,    29,    30,    31,    32,     1,
      -1,     3,     4,    -1,    -1,    -1,    -1,    41,     7,     8,
       9,    10,    11,    -1,    -1,    -1,    18,    19,    20,    21,
      -1,    -1,    24,    25,    26,    -1,    28,    29,    30,    31,
      32,     1,    -1,     3,     4,    -1,    -1,    -1,    -1,    41,
       7,     8,     9,    10,    11,    -1,    -1,    -1,    18,    19,
      20,    21,    -1,    -1,    24,    25,    26,    -1,    28,    29,
      30,    31,    32,     1,    -1,     3,     4,    -1,    -1,    -1,
      -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      18,    19,    20,    21,    -1,    -1,    24,    25,    26,    -1,
      28,    29,    30,    31,    32,     1,    -1,     3,     4,    -1,
      -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    18,    19,    20,    21,    -1,    -1,    24,    25,
      26,    -1,    28,    29,    30,    31,    32,     1,    -1,     3,
       4,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    18,    19,    20,    21,    -1,    -1,
      24,    25,    26,    -1,    28,    29,    30,    31,    32,     1,
      -1,     3,     4,    -1,    -1,    -1,    -1,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    19,    20,    21,
      -1,    -1,    24,    25,    26,    -1,    28,    29,    30,    31,
      32,     1,    -1,     3,     4,    -1,    -1,    -1,    -1,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,    19,
      20,    21,    -1,    -1,    24,    25,    26,    -1,    28,    29,
      30,    31,    32,     1,    -1,     3,     4,    -1,    -1,    -1,
      -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      18,    19,    20,    21,    -1,    -1,    24,    25,    26,    -1,
      28,    29,    30,    31,    32,     1,    -1,     3,     4,    -1,
      -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    18,    19,    20,    21,    -1,    -1,    24,    25,
      26,    -1,    28,    29,    30,    31,    32,     1,    -1,     3,
       4,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    18,    19,    20,    21,    -1,    -1,
      24,    25,    26,    -1,    28,    29,    30,    31,    32,     1,
      -1,     3,     4,    -1,    -1,    -1,    -1,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    19,    20,    21,
      -1,    -1,    24,    25,    26,    -1,    28,    29,    30,    31,
      32,     1,    -1,     3,     4,    -1,    -1,    -1,    -1,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,    19,
      20,    21,    -1,    -1,    24,    25,    26,    -1,    28,    29,
      30,    31,    32,     1,    -1,     3,     4,    -1,    -1,    -1,
      -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      18,    19,    20,    21,    -1,    -1,    24,    25,    26,    -1,
      28,    29,    30,    31,    32,     1,    -1,     3,     4,    -1,
      -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    18,    19,    20,    21,    -1,    -1,    24,    25,
      26,    -1,    28,    29,    30,    31,    32,     1,    -1,     3,
       4,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    18,    19,    20,    21,    -1,    -1,
      24,    25,    26,    -1,    28,    29,    30,    31,    32,     1,
      -1,     3,     4,    -1,    -1,    -1,    -1,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    19,    20,    21,
      -1,    -1,    24,    25,    26,    -1,    28,    29,    30,    31,
      32,     1,    -1,     3,     4,    -1,    -1,    -1,    -1,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,    19,
      20,    21,    -1,    -1,    24,    25,    26,    -1,    28,    29,
      30,    31,    32,     1,    -1,     3,     4,    -1,    -1,    -1,
      -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      18,    19,    20,    21,    -1,    -1,    24,    25,    26,    -1,
      28,    29,    30,    31,    32,     1,    -1,     3,     4,    -1,
      -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    18,    19,    20,    21,    -1,    -1,    24,    25,
      26,    -1,    28,    29,    30,    31,    32,     1,    -1,     3,
       4,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    18,    19,    20,    21,    -1,    -1,
      24,    25,    26,    -1,    28,    29,    30,    31,    32,     1,
      -1,     3,     4,    -1,    -1,    -1,    -1,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    19,    20,    21,
      -1,    -1,    24,    25,    26,    -1,    28,    29,    30,    31,
      32,     5,    -1,     7,    -1,     9,    -1,    -1,    -1,    41,
      14,    -1,     6,    -1,    -1,    -1,    -1,    21,    22,    -1,
      -1,    15,    16,    -1,    28,    29,    30,    31,    -1,    -1,
       5,     6,    -1,    27,     9,    -1,    40,    41,    42,    14,
      34,    35,    36,    37,    38,    39,    21,    22,    -1,    -1,
      -1,    -1,    -1,    28,    29,    30,    31,    -1,    -1,     5,
       6,    -1,    -1,     9,    -1,    40,    41,    42,    14,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    22,    -1,    -1,    -1,
      -1,    -1,    28,    29,    30,    31,    -1,    -1,     5,     6,
      -1,    -1,     9,    -1,    40,    41,    42,    14,    -1,    -1,
      -1,    -1,    -1,     5,    21,    22,    -1,     9,    -1,    -1,
      -1,    28,    29,    30,    31,    17,    -1,    -1,     5,    -1,
      22,    23,     9,    40,    41,    42,    28,    29,    30,    31,
      17,    -1,    -1,     5,    -1,    22,    23,     9,    40,    41,
      42,    28,    29,    30,    31,    17,    -1,    -1,    -1,    -1,
      22,    23,    -1,    40,    41,    42,    28,    29,    30,    31,
      -1,    -1,     5,    -1,    -1,    -1,     9,    -1,    40,    41,
      42,    14,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,
      -1,    -1,    -1,    -1,    -1,    28,    29,    30,    31,    -1,
      -1,     5,    -1,    -1,    -1,     9,    -1,    40,    41,    42,
      14,    -1,    -1,    -1,    -1,    -1,     5,    21,    22,    -1,
       9,    -1,    -1,    -1,    28,    29,    30,    31,    17,    -1,
      -1,    -1,    -1,    22,    23,    -1,    40,    41,    42,    28,
      29,    30,    31,    -1,    -1,     5,    -1,    -1,    -1,     9,
      -1,    40,    41,    42,    14,    -1,     6,    -1,     8,     9,
      10,    11,    22,    -1,    -1,    15,    16,    -1,    28,    29,
      30,    31,    -1,    -1,     5,    -1,    -1,    27,     9,    -1,
      40,    41,    42,    14,    34,    35,    36,    37,    38,    39,
      -1,    22,    -1,    -1,    -1,    -1,    -1,    28,    29,    30,
      31,    -1,    -1,     5,    -1,    -1,    -1,     9,    -1,    40,
      41,    42,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    -1,    -1,    -1,    -1,    -1,    28,    29,    30,    31,
      -1,    -1,     5,    -1,    -1,    -1,     9,    -1,    40,    41,
      42,    14,    -1,    -1,    -1,    -1,    -1,     5,    -1,    22,
      -1,     9,    -1,    -1,    -1,    28,    29,    30,    31,    -1,
      -1,    -1,     5,    -1,    22,    -1,     9,    40,    41,    42,
      28,    29,    30,    31,    -1,    -1,    -1,     5,    -1,    22,
      -1,     9,    40,    41,    42,    28,    29,    30,    31,    -1,
      -1,    -1,     5,    -1,    22,    -1,     9,    40,    41,    42,
      28,    29,    30,    31,    -1,    -1,    -1,     5,    -1,    22,
      -1,     9,    40,    41,    42,    28,    29,    30,    31,    -1,
      -1,    -1,     5,    -1,    22,    -1,     9,    40,    41,    42,
      28,    29,    30,    31,    -1,    -1,    -1,     5,    -1,    22,
      -1,     9,    40,    41,    42,    28,    29,    30,    31,    -1,
      -1,    -1,     5,    -1,    22,    -1,     9,    40,    41,    42,
      28,    29,    30,    31,    -1,    -1,    -1,    -1,    -1,    22,
      -1,    -1,    40,    41,    42,    28,    29,    30,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    42,
       5,    -1,     7,     8,     9,    10,    11,    12,    13,    -1,
      15,    16,    -1,     5,     6,    -1,     8,     9,    10,    11,
      12,    13,    27,    15,    16,    -1,    -1,    -1,    -1,    34,
      35,    36,    37,    38,    39,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    34,    35,    36,    37,    38,    39,     5,     6,
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
       9,    10,    11,    12,    -1,    -1,    15,    16,    -1,    -1,
       6,    -1,     8,     9,    10,    11,    12,    -1,    27,    15,
      16,    -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,
      39,    27,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,
      36,    37,    38,    39,     6,    -1,     8,     9,    10,    11,
      12,    -1,    -1,    15,    16,    -1,    -1,     6,    -1,     8,
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
      -1,    15,    16,    -1,    -1,     6,    -1,     8,     9,    10,
      11,    -1,    -1,    27,    15,    16,    -1,    -1,    -1,    -1,
      34,    35,    36,    37,    38,    39,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    34,    35,    36,    37,    38,    39,     6,
      -1,     8,     9,    10,    11,    -1,    -1,    -1,    15,    16,
      -1,    -1,     6,    -1,     8,     9,    -1,    -1,    12,    -1,
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
      16,    -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,
      39,    27,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,
      36,    37,    38,    39,     6,    -1,    -1,    -1,    -1,    -1,
      12,    -1,    -1,    15,    16,    -1,    -1,     6,    -1,    -1,
      -1,    -1,    -1,    12,    -1,    27,    15,    16,    -1,    -1,
      -1,    -1,    34,    35,    36,    37,    38,    39,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,
      39,     6,    -1,    -1,    -1,    -1,    -1,    12,    -1,    -1,
      15,    16,    -1,    -1,     6,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    27,    15,    16,    -1,    -1,     6,    -1,    34,
      35,    36,    37,    38,    39,    27,    15,    16,    -1,    -1,
       6,    -1,    34,    35,    36,    37,    38,    39,    27,    15,
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
      16,    -1,    -1,    -1,     7,     8,     9,    -1,    -1,    12,
      -1,    27,    15,    16,    -1,    -1,    -1,    -1,    34,    35,
      36,    37,    38,    39,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    34,    35,    36,    37,    38,    39,     7,    -1,    -1,
      -1,    -1,    12,     7,    -1,    15,    16,    -1,    12,    -1,
      -1,    15,    16,    -1,    -1,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    27,    34,    35,    36,    37,    38,    39,
      34,    35,    36,    37,    38,    39,     7,    -1,    -1,    -1,
      -1,    12,     7,    -1,    15,    16,    -1,    12,    -1,    -1,
      15,    16,    -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,
      -1,    -1,    27,    34,    35,    36,    37,    38,    39,    34,
      35,    36,    37,    38,    39,     7,    -1,    -1,    -1,    -1,
      12,     7,    -1,    15,    16,    -1,    12,    -1,    -1,    15,
      16,    -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,
      -1,    27,    34,    35,    36,    37,    38,    39,    34,    35,
      36,    37,    38,    39,     7,    -1,    -1,    -1,    -1,    12,
       7,    -1,    15,    16,    -1,    12,    -1,    -1,    15,    16,
      -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,
      27,    34,    35,    36,    37,    38,    39,    34,    35,    36,
      37,    38,    39,     7,    -1,    -1,    -1,    -1,    12,     7,
      -1,    15,    16,    -1,    12,    -1,    -1,    15,    16,    -1,
      -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    27,
      34,    35,    36,    37,    38,    39,    34,    35,    36,    37,
      38,    39,     7,    -1,    -1,    -1,    -1,    12,     7,    -1,
      15,    16,    -1,    12,    -1,    -1,    15,    16,    -1,    -1,
      -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    27,    34,
      35,    36,    37,    38,    39,    34,    35,    36,    37,    38,
      39,     7,    -1,    -1,    -1,    -1,    12,    -1,    -1,    15,
      16,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,
      36,    37,    38,    39
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
      63,    41,    33,    75,    58,     6,    58,    58,     3,     5,
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
#line 2672 "parser/parser.c"
    break;

  case 6: /* stmt: func_stmt  */
#line 61 "parser/c7.y"
                       { add_ast((yyvsp[0].expression)); }
#line 2678 "parser/parser.c"
    break;

  case 7: /* stmt: var_decl_stmt  */
#line 62 "parser/c7.y"
                           { add_ast((yyvsp[0].expression)); }
#line 2684 "parser/parser.c"
    break;

  case 8: /* $@1: %empty  */
#line 65 "parser/c7.y"
                            {
                set_id_type((yyvsp[0].int_value), ST_ID_FUNC);
            }
#line 2692 "parser/parser.c"
    break;

  case 9: /* func_stmt: TYPE ID $@1 PARENT_LEFT param_list PARENT_RIGHT compound_block_stmt  */
#line 67 "parser/c7.y"
                                                                            {
                (yyval.expression) = create_func_expr(create_str_expr((yyvsp[-6].str_value)), create_var_expr((yyvsp[-5].int_value)), (yyvsp[-2].expression), (yyvsp[0].expression));
                free((yyvsp[-6].str_value));
            }
#line 2701 "parser/parser.c"
    break;

  case 10: /* $@2: %empty  */
#line 73 "parser/c7.y"
                                {
                    set_id_type((yyvsp[0].int_value), ST_ID_VAR);
                }
#line 2709 "parser/parser.c"
    break;

  case 11: /* var_decl_stmt: TYPE ID $@2 SEMICOLON  */
#line 75 "parser/c7.y"
                            {
                    (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-3].str_value)), create_var_expr((yyvsp[-2].int_value)));
                    free((yyvsp[-3].str_value));
                }
#line 2718 "parser/parser.c"
    break;

  case 12: /* param_list: param_list COMMA TYPE ID  */
#line 81 "parser/c7.y"
                                                {
                (yyval.expression) = create_ter_expr((yyvsp[-3].expression), create_str_expr((yyvsp[-1].str_value)), create_var_expr((yyvsp[0].int_value)));
                set_id_type((yyvsp[0].int_value), ST_ID_VAR);
                free((yyvsp[-1].str_value));
            }
#line 2728 "parser/parser.c"
    break;

  case 13: /* param_list: TYPE ID  */
#line 86 "parser/c7.y"
                            {
                (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-1].str_value)), create_var_expr((yyvsp[0].int_value)));
                set_id_type((yyvsp[0].int_value), ST_ID_VAR);
                free((yyvsp[-1].str_value));
            }
#line 2738 "parser/parser.c"
    break;

  case 14: /* param_list: %empty  */
#line 91 "parser/c7.y"
                          {
                (yyval.expression) = create_empty_expr();
            }
#line 2746 "parser/parser.c"
    break;

  case 15: /* simple_param_list: simple_param_list COMMA ID  */
#line 96 "parser/c7.y"
                                                       {
                        (yyval.expression) = create_bin_expr((yyvsp[-2].expression), create_var_expr((yyvsp[0].int_value)));
                        set_id_type((yyvsp[0].int_value), ST_ID_VAR);
                    }
#line 2755 "parser/parser.c"
    break;

  case 16: /* simple_param_list: simple_expr  */
#line 100 "parser/c7.y"
                                     { (yyval.expression) = (yyvsp[0].expression); }
#line 2761 "parser/parser.c"
    break;

  case 17: /* simple_param_list: %empty  */
#line 101 "parser/c7.y"
                                  { (yyval.expression) = create_empty_expr(); }
#line 2767 "parser/parser.c"
    break;

  case 18: /* compound_block_stmt: BRACK_LEFT block_stmts BRACK_RIGHT  */
#line 104 "parser/c7.y"
                                                            {
                        (yyval.expression) = (yyvsp[-1].expression);
                    }
#line 2775 "parser/parser.c"
    break;

  case 19: /* compound_block_stmt: BRACK_LEFT BRACK_RIGHT  */
#line 107 "parser/c7.y"
                                              {
                        (yyval.expression) = create_empty_expr();
                    }
#line 2783 "parser/parser.c"
    break;

  case 20: /* block_stmts: block_stmts block_item  */
#line 112 "parser/c7.y"
                                           {
                (yyval.expression) = create_bin_expr((yyvsp[-1].expression), (yyvsp[0].expression)); 
            }
#line 2791 "parser/parser.c"
    break;

  case 21: /* block_stmts: block_item  */
#line 115 "parser/c7.y"
                            { (yyval.expression) = (yyvsp[0].expression); }
#line 2797 "parser/parser.c"
    break;

  case 22: /* block_item: var_decl_stmt  */
#line 118 "parser/c7.y"
                               { (yyval.expression) = (yyvsp[0].expression); }
#line 2803 "parser/parser.c"
    break;

  case 23: /* block_item: block_stmt  */
#line 119 "parser/c7.y"
                            { (yyval.expression) = (yyvsp[0].expression); }
#line 2809 "parser/parser.c"
    break;

  case 24: /* block_stmt: compound_block_stmt  */
#line 122 "parser/c7.y"
                                     { (yyval.expression) = (yyvsp[0].expression); }
#line 2815 "parser/parser.c"
    break;

  case 25: /* block_stmt: func_call SEMICOLON  */
#line 123 "parser/c7.y"
                                     { (yyval.expression) = (yyvsp[-1].expression); }
#line 2821 "parser/parser.c"
    break;

  case 26: /* block_stmt: set_func_call SEMICOLON  */
#line 124 "parser/c7.y"
                                         { (yyval.expression) = (yyvsp[-1].expression); }
#line 2827 "parser/parser.c"
    break;

  case 27: /* block_stmt: flow_control  */
#line 125 "parser/c7.y"
                              { (yyval.expression) = (yyvsp[0].expression); }
#line 2833 "parser/parser.c"
    break;

  case 28: /* block_stmt: READ PARENT_LEFT ID PARENT_RIGHT SEMICOLON  */
#line 126 "parser/c7.y"
                                                               {
                (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-4].str_value)), create_var_expr((yyvsp[-2].int_value))); 
                set_id_type((yyvsp[-2].int_value), ST_ID_VAR);
                free((yyvsp[-4].str_value));
            }
#line 2843 "parser/parser.c"
    break;

  case 29: /* block_stmt: WRITE PARENT_LEFT simple_expr PARENT_RIGHT SEMICOLON  */
#line 131 "parser/c7.y"
                                                                         {
                (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-4].str_value)), (yyvsp[-2].expression)); 
                free((yyvsp[-4].str_value));
            }
#line 2852 "parser/parser.c"
    break;

  case 30: /* block_stmt: WRITELN PARENT_LEFT simple_expr PARENT_RIGHT SEMICOLON  */
#line 135 "parser/c7.y"
                                                                           {
                (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-4].str_value)), (yyvsp[-2].expression)); 
                free((yyvsp[-4].str_value));
            }
#line 2861 "parser/parser.c"
    break;

  case 31: /* block_stmt: ID ASSIGN simple_expr SEMICOLON  */
#line 139 "parser/c7.y"
                                                       {
                (yyval.expression) = create_ter_expr(create_var_expr((yyvsp[-3].int_value)), create_char_expr((yyvsp[-2].char_value)), (yyvsp[-1].expression));
                set_id_type((yyvsp[-3].int_value), ST_ID_VAR); 
            }
#line 2870 "parser/parser.c"
    break;

  case 32: /* block_stmt: RETURN simple_expr SEMICOLON  */
#line 143 "parser/c7.y"
                                                 {
                (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-2].str_value)), (yyvsp[-1].expression)); 
                free((yyvsp[-2].str_value));
            }
#line 2879 "parser/parser.c"
    break;

  case 33: /* block_stmt: error  */
#line 147 "parser/c7.y"
                    { 
                (yyval.expression) = create_empty_expr();
                yyerrok;
            }
#line 2888 "parser/parser.c"
    break;

  case 34: /* flow_control_if: IF PARENT_LEFT  */
#line 153 "parser/c7.y"
                                    {
                    (yyval.expression) = create_str_expr((yyvsp[-1].str_value));
                    free((yyvsp[-1].str_value));
                }
#line 2897 "parser/parser.c"
    break;

  case 35: /* flow_control: flow_control_if or_cond_expr PARENT_RIGHT block_stmt  */
#line 159 "parser/c7.y"
                                                                                               {
                    (yyval.expression) = create_ter_expr((yyvsp[-3].expression), (yyvsp[-2].expression), (yyvsp[0].expression)); 
                }
#line 2905 "parser/parser.c"
    break;

  case 36: /* flow_control: flow_control_if or_cond_expr PARENT_RIGHT block_stmt ELSE block_stmt  */
#line 162 "parser/c7.y"
                                                                                                            {
                    (yyval.expression) = create_qui_expr((yyvsp[-5].expression), (yyvsp[-4].expression), (yyvsp[-2].expression), create_str_expr((yyvsp[-1].str_value)), (yyvsp[0].expression));
                    free((yyvsp[-1].str_value));
                }
#line 2914 "parser/parser.c"
    break;

  case 37: /* flow_control: FORALL PARENT_LEFT set_expr PARENT_RIGHT block_stmt  */
#line 166 "parser/c7.y"
                                                                                 {
                    (yyval.expression) = create_ter_expr(create_str_expr((yyvsp[-4].str_value)), (yyvsp[-2].expression), (yyvsp[0].expression)); 
                    free((yyvsp[-4].str_value));
                }
#line 2923 "parser/parser.c"
    break;

  case 38: /* flow_control: FOR PARENT_LEFT opt_param opt_param PARENT_RIGHT block_stmt  */
#line 170 "parser/c7.y"
                                                                                             {
                    (yyval.expression) = create_qua_expr(create_str_expr((yyvsp[-5].str_value)), (yyvsp[-3].expression), (yyvsp[-2].expression), (yyvsp[0].expression)); 
                    free((yyvsp[-5].str_value));
                }
#line 2932 "parser/parser.c"
    break;

  case 39: /* flow_control: FOR PARENT_LEFT opt_param opt_param for_expression PARENT_RIGHT block_stmt  */
#line 174 "parser/c7.y"
                                                                                                                {
                    (yyval.expression) = create_qui_expr(create_str_expr((yyvsp[-6].str_value)), (yyvsp[-4].expression), (yyvsp[-3].expression), (yyvsp[-2].expression), (yyvsp[0].expression)); 
                    free((yyvsp[-6].str_value));
                }
#line 2941 "parser/parser.c"
    break;

  case 40: /* opt_param: SEMICOLON  */
#line 180 "parser/c7.y"
                        { (yyval.expression) = create_empty_expr(); }
#line 2947 "parser/parser.c"
    break;

  case 41: /* opt_param: for_expression SEMICOLON  */
#line 181 "parser/c7.y"
                                          { (yyval.expression) = (yyvsp[-1].expression); }
#line 2953 "parser/parser.c"
    break;

  case 42: /* for_expression: decl_or_cond_expr  */
#line 184 "parser/c7.y"
                                       { (yyval.expression) = (yyvsp[0].expression); }
#line 2959 "parser/parser.c"
    break;

  case 43: /* for_expression: for_expression COMMA decl_or_cond_expr  */
#line 185 "parser/c7.y"
                                                                 {
                    (yyval.expression) = create_bin_expr((yyvsp[-2].expression), (yyvsp[0].expression)); 
                }
#line 2967 "parser/parser.c"
    break;

  case 44: /* decl_or_cond_expr: or_cond_expr  */
#line 190 "parser/c7.y"
                                      { (yyval.expression) = (yyvsp[0].expression); }
#line 2973 "parser/parser.c"
    break;

  case 45: /* decl_or_cond_expr: TYPE ID ASSIGN simple_expr  */
#line 191 "parser/c7.y"
                                                             {
                        (yyval.expression) = create_qua_expr(create_str_expr((yyvsp[-3].str_value)), create_var_expr((yyvsp[-2].int_value)),
                                             create_char_expr((yyvsp[-1].char_value)), (yyvsp[0].expression)); 
                        set_id_type((yyvsp[-2].int_value), ST_ID_VAR);
                        free((yyvsp[-3].str_value));
                    }
#line 2984 "parser/parser.c"
    break;

  case 46: /* decl_or_cond_expr: ID ASSIGN simple_expr  */
#line 197 "parser/c7.y"
                                                     {
                        (yyval.expression) = create_ter_expr(create_var_expr((yyvsp[-2].int_value)), create_char_expr((yyvsp[-1].char_value)), (yyvsp[0].expression));
                        set_id_type((yyvsp[-2].int_value), ST_ID_VAR);
                    }
#line 2993 "parser/parser.c"
    break;

  case 47: /* or_cond_expr: or_cond_expr OR_OP and_cond_expr  */
#line 203 "parser/c7.y"
                                                               {
                    (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_str_expr((yyvsp[-1].str_value)), (yyvsp[0].expression)); 
                    free((yyvsp[-1].str_value));
                }
#line 3002 "parser/parser.c"
    break;

  case 48: /* or_cond_expr: and_cond_expr  */
#line 207 "parser/c7.y"
                                   { (yyval.expression) = (yyvsp[0].expression); }
#line 3008 "parser/parser.c"
    break;

  case 49: /* and_cond_expr: and_cond_expr AND_OP unary_cond_expr  */
#line 210 "parser/c7.y"
                                                                   {
                    (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_str_expr((yyvsp[-1].str_value)), (yyvsp[0].expression)); 
                    free((yyvsp[-1].str_value));
                }
#line 3017 "parser/parser.c"
    break;

  case 50: /* and_cond_expr: unary_cond_expr  */
#line 214 "parser/c7.y"
                                     { (yyval.expression) = (yyvsp[0].expression); }
#line 3023 "parser/parser.c"
    break;

  case 51: /* unary_cond_expr: NOT_OP unary_cond_expr  */
#line 217 "parser/c7.y"
                                               {
                    (yyval.expression) = create_bin_expr(create_char_expr((yyvsp[-1].char_value)), (yyvsp[0].expression)); 
                }
#line 3031 "parser/parser.c"
    break;

  case 52: /* unary_cond_expr: eq_cond_expr  */
#line 220 "parser/c7.y"
                                  { (yyval.expression) = (yyvsp[0].expression); }
#line 3037 "parser/parser.c"
    break;

  case 53: /* eq_cond_expr: eq_cond_expr equal_ops rel_cond_expr  */
#line 223 "parser/c7.y"
                                                                  {
                    (yyval.expression) = create_ter_expr((yyvsp[-2].expression), (yyvsp[-1].expression), (yyvsp[0].expression));
                }
#line 3045 "parser/parser.c"
    break;

  case 54: /* eq_cond_expr: rel_cond_expr  */
#line 226 "parser/c7.y"
                                   { (yyval.expression) = (yyvsp[0].expression); }
#line 3051 "parser/parser.c"
    break;

  case 55: /* equal_ops: EQ_OP  */
#line 229 "parser/c7.y"
                       {
                (yyval.expression) = create_str_expr((yyvsp[0].str_value));
                free((yyvsp[0].str_value));
            }
#line 3060 "parser/parser.c"
    break;

  case 56: /* equal_ops: NE_OP  */
#line 233 "parser/c7.y"
                       {
                (yyval.expression) = create_str_expr((yyvsp[0].str_value));
                free((yyvsp[0].str_value));
            }
#line 3069 "parser/parser.c"
    break;

  case 57: /* rel_cond_expr: rel_cond_expr rel_ops rel_cond_stmt  */
#line 239 "parser/c7.y"
                                                                  {
                    (yyval.expression) = create_ter_expr((yyvsp[-2].expression), (yyvsp[-1].expression), (yyvsp[0].expression));
                }
#line 3077 "parser/parser.c"
    break;

  case 58: /* rel_cond_expr: rel_cond_stmt  */
#line 242 "parser/c7.y"
                                   { (yyval.expression) = (yyvsp[0].expression); }
#line 3083 "parser/parser.c"
    break;

  case 59: /* rel_cond_stmt: arith_expr  */
#line 245 "parser/c7.y"
                                { (yyval.expression) = (yyvsp[0].expression); }
#line 3089 "parser/parser.c"
    break;

  case 60: /* rel_cond_stmt: EMPTY  */
#line 246 "parser/c7.y"
                           {
                    (yyval.expression) = create_str_expr((yyvsp[0].str_value));
                    free((yyvsp[0].str_value));
                }
#line 3098 "parser/parser.c"
    break;

  case 61: /* rel_cond_stmt: func_expr  */
#line 250 "parser/c7.y"
                               { (yyval.expression) = (yyvsp[0].expression); }
#line 3104 "parser/parser.c"
    break;

  case 62: /* rel_ops: L_OP  */
#line 253 "parser/c7.y"
                  { (yyval.expression) = create_char_expr((yyvsp[0].char_value)); }
#line 3110 "parser/parser.c"
    break;

  case 63: /* rel_ops: G_OP  */
#line 254 "parser/c7.y"
                  { (yyval.expression) = create_char_expr((yyvsp[0].char_value)); }
#line 3116 "parser/parser.c"
    break;

  case 64: /* rel_ops: LE_OP  */
#line 255 "parser/c7.y"
                   {
            (yyval.expression) = create_str_expr((yyvsp[0].str_value));
            free((yyvsp[0].str_value));
        }
#line 3125 "parser/parser.c"
    break;

  case 65: /* rel_ops: GE_OP  */
#line 259 "parser/c7.y"
                   { 
            (yyval.expression) = create_str_expr((yyvsp[0].str_value));
            free((yyvsp[0].str_value));
        }
#line 3134 "parser/parser.c"
    break;

  case 66: /* rel_ops: IN  */
#line 263 "parser/c7.y"
                {
            (yyval.expression) = create_str_expr((yyvsp[0].str_value));
            free((yyvsp[0].str_value));
        }
#line 3143 "parser/parser.c"
    break;

  case 67: /* set_expr: simple_expr IN simple_expr  */
#line 269 "parser/c7.y"
                                                    {
                (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_str_expr((yyvsp[-1].str_value)), (yyvsp[0].expression)); 
                free((yyvsp[-1].str_value));
            }
#line 3152 "parser/parser.c"
    break;

  case 68: /* func_call: ID PARENT_LEFT simple_param_list PARENT_RIGHT  */
#line 275 "parser/c7.y"
                                                                  {
                (yyval.expression) = create_bin_expr(create_var_expr((yyvsp[-3].int_value)), (yyvsp[-1].expression)); 
                set_id_type((yyvsp[-3].int_value), ST_ID_FUNC);
            }
#line 3161 "parser/parser.c"
    break;

  case 69: /* set_func_call: IS_SET PARENT_LEFT ID PARENT_RIGHT  */
#line 281 "parser/c7.y"
                                                           {
                    (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-3].str_value)), create_var_expr((yyvsp[-1].int_value))); 
                    set_id_type((yyvsp[-1].int_value), ST_ID_VAR);
                    free((yyvsp[-3].str_value));
                }
#line 3171 "parser/parser.c"
    break;

  case 70: /* set_func_call: ADD_SET PARENT_LEFT set_expr PARENT_RIGHT  */
#line 286 "parser/c7.y"
                                                                  {
                    (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-3].str_value)), (yyvsp[-1].expression)); 
                    free((yyvsp[-3].str_value));
                }
#line 3180 "parser/parser.c"
    break;

  case 71: /* set_func_call: REMOVE PARENT_LEFT set_expr PARENT_RIGHT  */
#line 290 "parser/c7.y"
                                                                 {
                    (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-3].str_value)), (yyvsp[-1].expression)); 
                    free((yyvsp[-3].str_value));
                }
#line 3189 "parser/parser.c"
    break;

  case 72: /* set_func_call: EXISTS PARENT_LEFT set_expr PARENT_RIGHT  */
#line 294 "parser/c7.y"
                                                                 {
                    (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-3].str_value)), (yyvsp[-1].expression));
                    free((yyvsp[-3].str_value)); 
                }
#line 3198 "parser/parser.c"
    break;

  case 73: /* simple_expr: arith_expr  */
#line 300 "parser/c7.y"
                            { (yyval.expression) = (yyvsp[0].expression); }
#line 3204 "parser/parser.c"
    break;

  case 74: /* simple_expr: func_cte_expr  */
#line 301 "parser/c7.y"
                               { (yyval.expression) = (yyvsp[0].expression); }
#line 3210 "parser/parser.c"
    break;

  case 75: /* func_cte_expr: EMPTY  */
#line 304 "parser/c7.y"
                           {
                    (yyval.expression) = create_str_expr((yyvsp[0].str_value));
                    free((yyvsp[0].str_value));
                }
#line 3219 "parser/parser.c"
    break;

  case 76: /* func_cte_expr: STRING  */
#line 308 "parser/c7.y"
                            {
                    (yyval.expression) = create_str_expr((yyvsp[0].str_value));
                    free((yyvsp[0].str_value));
                }
#line 3228 "parser/parser.c"
    break;

  case 77: /* func_cte_expr: CHAR  */
#line 312 "parser/c7.y"
                          {
                    (yyval.expression) = create_char_expr((yyvsp[0].char_value));
                }
#line 3236 "parser/parser.c"
    break;

  case 78: /* func_cte_expr: func_expr  */
#line 315 "parser/c7.y"
                               { (yyval.expression) = (yyvsp[0].expression); }
#line 3242 "parser/parser.c"
    break;

  case 79: /* func_expr: func_call  */
#line 318 "parser/c7.y"
                               { (yyval.expression) = (yyvsp[0].expression); }
#line 3248 "parser/parser.c"
    break;

  case 80: /* func_expr: set_func_call  */
#line 319 "parser/c7.y"
                                   { (yyval.expression) = (yyvsp[0].expression); }
#line 3254 "parser/parser.c"
    break;

  case 81: /* func_expr: PARENT_LEFT func_cte_expr PARENT_RIGHT  */
#line 320 "parser/c7.y"
                                                            { (yyval.expression) = (yyvsp[-1].expression); }
#line 3260 "parser/parser.c"
    break;

  case 82: /* arith_expr: arith_expr ADD term  */
#line 323 "parser/c7.y"
                                           {
                (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_char_expr((yyvsp[-1].char_value)), (yyvsp[0].expression));
            }
#line 3268 "parser/parser.c"
    break;

  case 83: /* arith_expr: arith_expr SUB term  */
#line 326 "parser/c7.y"
                                           {
                (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_char_expr((yyvsp[-1].char_value)), (yyvsp[0].expression));
            }
#line 3276 "parser/parser.c"
    break;

  case 84: /* arith_expr: term  */
#line 329 "parser/c7.y"
                      { (yyval.expression) = (yyvsp[0].expression); }
#line 3282 "parser/parser.c"
    break;

  case 85: /* term: term MULT factor  */
#line 332 "parser/c7.y"
                                    {
            (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_char_expr((yyvsp[-1].char_value)), (yyvsp[0].expression));
        }
#line 3290 "parser/parser.c"
    break;

  case 86: /* term: term DIV factor  */
#line 335 "parser/c7.y"
                                   {
            (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_char_expr((yyvsp[-1].char_value)), (yyvsp[0].expression));
        }
#line 3298 "parser/parser.c"
    break;

  case 87: /* term: factor  */
#line 338 "parser/c7.y"
                    { (yyval.expression) = (yyvsp[0].expression); }
#line 3304 "parser/parser.c"
    break;

  case 88: /* term: SUB factor  */
#line 339 "parser/c7.y"
                                        { 
            (yyval.expression) = create_bin_expr(create_char_expr((yyvsp[-1].char_value)), (yyvsp[0].expression)); 
        }
#line 3312 "parser/parser.c"
    break;

  case 89: /* factor: INTEGER  */
#line 344 "parser/c7.y"
                     { (yyval.expression) = create_int_expr((yyvsp[0].int_value)); }
#line 3318 "parser/parser.c"
    break;

  case 90: /* factor: FLOAT  */
#line 345 "parser/c7.y"
                   { (yyval.expression) = create_float_expr((yyvsp[0].float_value)); }
#line 3324 "parser/parser.c"
    break;

  case 91: /* factor: ID  */
#line 346 "parser/c7.y"
                {
            (yyval.expression) = create_var_expr((yyvsp[0].int_value));
            set_id_type((yyvsp[0].int_value), ST_ID_VAR);
        }
#line 3333 "parser/parser.c"
    break;

  case 92: /* factor: PARENT_LEFT arith_expr PARENT_RIGHT  */
#line 350 "parser/c7.y"
                                                 { (yyval.expression) = (yyvsp[-1].expression); }
#line 3339 "parser/parser.c"
    break;


#line 3343 "parser/parser.c"

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

#line 353 "parser/c7.y"


void yyerror(const char *s) {
    printf("\nSyntaxError: %s in line %d, column %d.\n",
           s, parser_line, parser_column);
    parser_error += 1;
}
