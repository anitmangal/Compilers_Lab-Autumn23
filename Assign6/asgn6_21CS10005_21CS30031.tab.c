/* A Bison parser, made by GNU Bison 3.8.2.  */

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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "asgn6_21CS10005_21CS30031.y"

    #include <iostream>
    using namespace std;
    extern int yylex(); // in lex.yy.c : Lexical analyser
    extern int yylineno; // in lex.yy.c : Line number
    extern char *yytext;    // in lex.yy.c : Identified lexeme
    void yyerror(string s);  // in lex.yy.c : Error function

    extern int nextinstr;   // in asgn5_21CS10005_21CS30031_translator.cxx : Next instruction number
    extern quadArray quadTable;    // in asgn5_21CS10005_21CS30031_translator.cxx : Quad array
    extern symbolTable globalSymbolTable;   // in asgn5_21CS10005_21CS30031_translator.cxx : Global symbol table
    extern symbolTable* currentSymbolTable; // in asgn5_21CS10005_21CS30031_translator.cxx : Current symbol table
    extern list<string> stringList; // in asgn5_21CS10005_21CS30031_target_translator.cxx : List of string constants
    int stringCount = 0; // Counts number of string constants encountered

#line 87 "asgn6_21CS10005_21CS30031.tab.c"

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

#include "asgn6_21CS10005_21CS30031.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_AUTO = 3,                       /* AUTO  */
  YYSYMBOL_ENUM = 4,                       /* ENUM  */
  YYSYMBOL_RESTRICT = 5,                   /* RESTRICT  */
  YYSYMBOL_UNSIGNED = 6,                   /* UNSIGNED  */
  YYSYMBOL_BREAK = 7,                      /* BREAK  */
  YYSYMBOL_EXTERN = 8,                     /* EXTERN  */
  YYSYMBOL_VOID_t = 9,                     /* VOID_t  */
  YYSYMBOL_CASE = 10,                      /* CASE  */
  YYSYMBOL_FLOAT_t = 11,                   /* FLOAT_t  */
  YYSYMBOL_SHORT = 12,                     /* SHORT  */
  YYSYMBOL_VOLATILE = 13,                  /* VOLATILE  */
  YYSYMBOL_CHAR_t = 14,                    /* CHAR_t  */
  YYSYMBOL_FOR = 15,                       /* FOR  */
  YYSYMBOL_SIGNED = 16,                    /* SIGNED  */
  YYSYMBOL_WHILE = 17,                     /* WHILE  */
  YYSYMBOL_CONST = 18,                     /* CONST  */
  YYSYMBOL_GOTO_t = 19,                    /* GOTO_t  */
  YYSYMBOL_SIZEOF = 20,                    /* SIZEOF  */
  YYSYMBOL_BOOL_t = 21,                    /* BOOL_t  */
  YYSYMBOL_CONTINUE = 22,                  /* CONTINUE  */
  YYSYMBOL_IF = 23,                        /* IF  */
  YYSYMBOL_STATIC = 24,                    /* STATIC  */
  YYSYMBOL_COMPLEX = 25,                   /* COMPLEX  */
  YYSYMBOL_RETURN_ = 26,                   /* RETURN_  */
  YYSYMBOL_DEFAULT = 27,                   /* DEFAULT  */
  YYSYMBOL_INLINE = 28,                    /* INLINE  */
  YYSYMBOL_IMAGINARY = 29,                 /* IMAGINARY  */
  YYSYMBOL_DO = 30,                        /* DO  */
  YYSYMBOL_INT_t = 31,                     /* INT_t  */
  YYSYMBOL_SWITCH = 32,                    /* SWITCH  */
  YYSYMBOL_DOUBLE = 33,                    /* DOUBLE  */
  YYSYMBOL_LONG = 34,                      /* LONG  */
  YYSYMBOL_ELSE = 35,                      /* ELSE  */
  YYSYMBOL_REGISTER = 36,                  /* REGISTER  */
  YYSYMBOL_STRUCT = 37,                    /* STRUCT  */
  YYSYMBOL_TYPEDEF = 38,                   /* TYPEDEF  */
  YYSYMBOL_UNION = 39,                     /* UNION  */
  YYSYMBOL_PARANTHESIS_OPEN = 40,          /* PARANTHESIS_OPEN  */
  YYSYMBOL_PARANTHESIS_CLOSE = 41,         /* PARANTHESIS_CLOSE  */
  YYSYMBOL_SQ_BRACKET_OPEN = 42,           /* SQ_BRACKET_OPEN  */
  YYSYMBOL_SQ_BRACKET_CLOSE = 43,          /* SQ_BRACKET_CLOSE  */
  YYSYMBOL_CURLY_BRACKET_OPEN = 44,        /* CURLY_BRACKET_OPEN  */
  YYSYMBOL_CURLY_BRACKET_CLOSE = 45,       /* CURLY_BRACKET_CLOSE  */
  YYSYMBOL_PERIOD = 46,                    /* PERIOD  */
  YYSYMBOL_ARROW = 47,                     /* ARROW  */
  YYSYMBOL_INCREMENT = 48,                 /* INCREMENT  */
  YYSYMBOL_DECREMENT = 49,                 /* DECREMENT  */
  YYSYMBOL_AMPERSAND = 50,                 /* AMPERSAND  */
  YYSYMBOL_ASTERISK = 51,                  /* ASTERISK  */
  YYSYMBOL_PLUS = 52,                      /* PLUS  */
  YYSYMBOL_MINUS = 53,                     /* MINUS  */
  YYSYMBOL_TILDE = 54,                     /* TILDE  */
  YYSYMBOL_EXCLAMATION = 55,               /* EXCLAMATION  */
  YYSYMBOL_SLASH = 56,                     /* SLASH  */
  YYSYMBOL_PERCENT = 57,                   /* PERCENT  */
  YYSYMBOL_LEFT_SHIFT = 58,                /* LEFT_SHIFT  */
  YYSYMBOL_RIGHT_SHIFT = 59,               /* RIGHT_SHIFT  */
  YYSYMBOL_LESS_THAN = 60,                 /* LESS_THAN  */
  YYSYMBOL_GREATER_THAN = 61,              /* GREATER_THAN  */
  YYSYMBOL_LESS_THAN_EQUAL = 62,           /* LESS_THAN_EQUAL  */
  YYSYMBOL_GREATER_THAN_EQUAL = 63,        /* GREATER_THAN_EQUAL  */
  YYSYMBOL_EQUAL = 64,                     /* EQUAL  */
  YYSYMBOL_NOT_EQUAL = 65,                 /* NOT_EQUAL  */
  YYSYMBOL_CARET = 66,                     /* CARET  */
  YYSYMBOL_PIPE = 67,                      /* PIPE  */
  YYSYMBOL_LOGICAL_AND = 68,               /* LOGICAL_AND  */
  YYSYMBOL_LOGICAL_OR = 69,                /* LOGICAL_OR  */
  YYSYMBOL_QUESTION = 70,                  /* QUESTION  */
  YYSYMBOL_COLON = 71,                     /* COLON  */
  YYSYMBOL_SEMICOLON = 72,                 /* SEMICOLON  */
  YYSYMBOL_ELLIPSIS = 73,                  /* ELLIPSIS  */
  YYSYMBOL_ASSIGN_t = 74,                  /* ASSIGN_t  */
  YYSYMBOL_MULTIPLY_ASSIGN = 75,           /* MULTIPLY_ASSIGN  */
  YYSYMBOL_DIVIDE_ASSIGN = 76,             /* DIVIDE_ASSIGN  */
  YYSYMBOL_MOD_ASSIGN = 77,                /* MOD_ASSIGN  */
  YYSYMBOL_PLUS_ASSIGN = 78,               /* PLUS_ASSIGN  */
  YYSYMBOL_MINUS_ASSIGN = 79,              /* MINUS_ASSIGN  */
  YYSYMBOL_LEFT_SHIFT_ASSIGN = 80,         /* LEFT_SHIFT_ASSIGN  */
  YYSYMBOL_RIGHT_SHIFT_ASSIGN = 81,        /* RIGHT_SHIFT_ASSIGN  */
  YYSYMBOL_AND_ASSIGN = 82,                /* AND_ASSIGN  */
  YYSYMBOL_XOR_ASSIGN = 83,                /* XOR_ASSIGN  */
  YYSYMBOL_OR_ASSIGN = 84,                 /* OR_ASSIGN  */
  YYSYMBOL_COMMA = 85,                     /* COMMA  */
  YYSYMBOL_HASH = 86,                      /* HASH  */
  YYSYMBOL_IDENTIFIER = 87,                /* IDENTIFIER  */
  YYSYMBOL_CONSTANT_INT = 88,              /* CONSTANT_INT  */
  YYSYMBOL_CONSTANT_FLOAT = 89,            /* CONSTANT_FLOAT  */
  YYSYMBOL_CONSTANT_CHAR = 90,             /* CONSTANT_CHAR  */
  YYSYMBOL_LITERAL = 91,                   /* LITERAL  */
  YYSYMBOL_YYACCEPT = 92,                  /* $accept  */
  YYSYMBOL_primary_expression = 93,        /* primary_expression  */
  YYSYMBOL_constant = 94,                  /* constant  */
  YYSYMBOL_postfix_expression = 95,        /* postfix_expression  */
  YYSYMBOL_argument_expression_list = 96,  /* argument_expression_list  */
  YYSYMBOL_unary_expression = 97,          /* unary_expression  */
  YYSYMBOL_unary_operator = 98,            /* unary_operator  */
  YYSYMBOL_cast_expression = 99,           /* cast_expression  */
  YYSYMBOL_multiplicative_expression = 100, /* multiplicative_expression  */
  YYSYMBOL_additive_expression = 101,      /* additive_expression  */
  YYSYMBOL_shift_expression = 102,         /* shift_expression  */
  YYSYMBOL_relational_expression = 103,    /* relational_expression  */
  YYSYMBOL_equality_expression = 104,      /* equality_expression  */
  YYSYMBOL_AND_expression = 105,           /* AND_expression  */
  YYSYMBOL_exclusive_OR_expression = 106,  /* exclusive_OR_expression  */
  YYSYMBOL_inclusive_OR_expression = 107,  /* inclusive_OR_expression  */
  YYSYMBOL_logical_AND_expression = 108,   /* logical_AND_expression  */
  YYSYMBOL_logical_OR_expression = 109,    /* logical_OR_expression  */
  YYSYMBOL_conditional_expression = 110,   /* conditional_expression  */
  YYSYMBOL_M = 111,                        /* M  */
  YYSYMBOL_N = 112,                        /* N  */
  YYSYMBOL_assignment_expression = 113,    /* assignment_expression  */
  YYSYMBOL_assignment_operator = 114,      /* assignment_operator  */
  YYSYMBOL_expression = 115,               /* expression  */
  YYSYMBOL_constant_expression = 116,      /* constant_expression  */
  YYSYMBOL_declaration = 117,              /* declaration  */
  YYSYMBOL_declaration_specifiers = 118,   /* declaration_specifiers  */
  YYSYMBOL_init_declarator_list = 119,     /* init_declarator_list  */
  YYSYMBOL_init_declarator = 120,          /* init_declarator  */
  YYSYMBOL_storage_class_specifier = 121,  /* storage_class_specifier  */
  YYSYMBOL_type_specifier = 122,           /* type_specifier  */
  YYSYMBOL_specifier_qualifier_list = 123, /* specifier_qualifier_list  */
  YYSYMBOL_specifier_qualifier_list_opt = 124, /* specifier_qualifier_list_opt  */
  YYSYMBOL_enum_specifier = 125,           /* enum_specifier  */
  YYSYMBOL_identifier_opt = 126,           /* identifier_opt  */
  YYSYMBOL_enumerator_list = 127,          /* enumerator_list  */
  YYSYMBOL_enumerator = 128,               /* enumerator  */
  YYSYMBOL_type_qualifier = 129,           /* type_qualifier  */
  YYSYMBOL_function_specifier = 130,       /* function_specifier  */
  YYSYMBOL_declarator = 131,               /* declarator  */
  YYSYMBOL_direct_declarator = 132,        /* direct_declarator  */
  YYSYMBOL_parameter_type_list_opt = 133,  /* parameter_type_list_opt  */
  YYSYMBOL_type_qualifier_list_opt = 134,  /* type_qualifier_list_opt  */
  YYSYMBOL_pointer = 135,                  /* pointer  */
  YYSYMBOL_type_qualifier_list = 136,      /* type_qualifier_list  */
  YYSYMBOL_parameter_type_list = 137,      /* parameter_type_list  */
  YYSYMBOL_parameter_list = 138,           /* parameter_list  */
  YYSYMBOL_parameter_declaration = 139,    /* parameter_declaration  */
  YYSYMBOL_identifier_list = 140,          /* identifier_list  */
  YYSYMBOL_type_name = 141,                /* type_name  */
  YYSYMBOL_initializer = 142,              /* initializer  */
  YYSYMBOL_initializer_list = 143,         /* initializer_list  */
  YYSYMBOL_designation_opt = 144,          /* designation_opt  */
  YYSYMBOL_designation = 145,              /* designation  */
  YYSYMBOL_designator_list = 146,          /* designator_list  */
  YYSYMBOL_designator = 147,               /* designator  */
  YYSYMBOL_statement = 148,                /* statement  */
  YYSYMBOL_labeled_statement = 149,        /* labeled_statement  */
  YYSYMBOL_compound_statement = 150,       /* compound_statement  */
  YYSYMBOL_block_item_list = 151,          /* block_item_list  */
  YYSYMBOL_block_item = 152,               /* block_item  */
  YYSYMBOL_expression_statement = 153,     /* expression_statement  */
  YYSYMBOL_selection_statement = 154,      /* selection_statement  */
  YYSYMBOL_iteration_statement = 155,      /* iteration_statement  */
  YYSYMBOL_jump_statement = 156,           /* jump_statement  */
  YYSYMBOL_translation_unit = 157,         /* translation_unit  */
  YYSYMBOL_external_declaration = 158,     /* external_declaration  */
  YYSYMBOL_function_definition = 159,      /* function_definition  */
  YYSYMBOL_function_prototype = 160,       /* function_prototype  */
  YYSYMBOL_declaration_list = 161          /* declaration_list  */
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

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

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
#define YYFINAL  48
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1134

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  92
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  70
/* YYNRULES -- Number of rules.  */
#define YYNRULES  209
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  355

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   346


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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    73,    73,    78,    83,    84,    87,    94,   101,   110,
     111,   125,   130,   146,   147,   148,   166,   184,   185,   188,
     195,   206,   207,   222,   237,   269,   270,   273,   274,   275,
     276,   277,   278,   281,   282,   285,   297,   321,   345,   371,
     372,   396,   422,   424,   425,   428,   429,   455,   481,   507,
     535,   536,   562,   590,   591,   614,   615,   638,   639,   662,
     663,   671,   672,   680,   681,   701,   707,   714,   715,   728,
     729,   730,   731,   732,   733,   734,   735,   736,   737,   738,
     741,   742,   745,   750,   801,   804,   805,   806,   807,   808,
     809,   810,   811,   814,   818,   821,   825,   831,   832,   833,
     834,   838,   839,   840,   841,   842,   843,   844,   845,   846,
     847,   848,   849,   850,   853,   854,   857,   858,   861,   862,
     863,   866,   867,   870,   871,   874,   875,   878,   879,   880,
     883,   886,   890,   897,   901,   902,   910,   917,   918,   919,
     924,   949,   952,   953,   956,   957,   960,   961,   962,   963,
     966,   967,   970,   971,   974,   975,   981,   994,   997,   998,
    1001,  1004,  1005,  1006,  1009,  1010,  1013,  1014,  1017,  1020,
    1021,  1024,  1025,  1029,  1030,  1031,  1032,  1033,  1034,  1037,
    1038,  1039,  1042,  1045,  1048,  1052,  1059,  1060,  1063,  1064,
    1067,  1075,  1085,  1088,  1098,  1106,  1120,  1121,  1122,  1123,
    1127,  1135,  1136,  1139,  1140,  1143,  1144,  1150,  1178,  1179
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "AUTO", "ENUM",
  "RESTRICT", "UNSIGNED", "BREAK", "EXTERN", "VOID_t", "CASE", "FLOAT_t",
  "SHORT", "VOLATILE", "CHAR_t", "FOR", "SIGNED", "WHILE", "CONST",
  "GOTO_t", "SIZEOF", "BOOL_t", "CONTINUE", "IF", "STATIC", "COMPLEX",
  "RETURN_", "DEFAULT", "INLINE", "IMAGINARY", "DO", "INT_t", "SWITCH",
  "DOUBLE", "LONG", "ELSE", "REGISTER", "STRUCT", "TYPEDEF", "UNION",
  "PARANTHESIS_OPEN", "PARANTHESIS_CLOSE", "SQ_BRACKET_OPEN",
  "SQ_BRACKET_CLOSE", "CURLY_BRACKET_OPEN", "CURLY_BRACKET_CLOSE",
  "PERIOD", "ARROW", "INCREMENT", "DECREMENT", "AMPERSAND", "ASTERISK",
  "PLUS", "MINUS", "TILDE", "EXCLAMATION", "SLASH", "PERCENT",
  "LEFT_SHIFT", "RIGHT_SHIFT", "LESS_THAN", "GREATER_THAN",
  "LESS_THAN_EQUAL", "GREATER_THAN_EQUAL", "EQUAL", "NOT_EQUAL", "CARET",
  "PIPE", "LOGICAL_AND", "LOGICAL_OR", "QUESTION", "COLON", "SEMICOLON",
  "ELLIPSIS", "ASSIGN_t", "MULTIPLY_ASSIGN", "DIVIDE_ASSIGN", "MOD_ASSIGN",
  "PLUS_ASSIGN", "MINUS_ASSIGN", "LEFT_SHIFT_ASSIGN", "RIGHT_SHIFT_ASSIGN",
  "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN", "COMMA", "HASH", "IDENTIFIER",
  "CONSTANT_INT", "CONSTANT_FLOAT", "CONSTANT_CHAR", "LITERAL", "$accept",
  "primary_expression", "constant", "postfix_expression",
  "argument_expression_list", "unary_expression", "unary_operator",
  "cast_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "AND_expression", "exclusive_OR_expression", "inclusive_OR_expression",
  "logical_AND_expression", "logical_OR_expression",
  "conditional_expression", "M", "N", "assignment_expression",
  "assignment_operator", "expression", "constant_expression",
  "declaration", "declaration_specifiers", "init_declarator_list",
  "init_declarator", "storage_class_specifier", "type_specifier",
  "specifier_qualifier_list", "specifier_qualifier_list_opt",
  "enum_specifier", "identifier_opt", "enumerator_list", "enumerator",
  "type_qualifier", "function_specifier", "declarator",
  "direct_declarator", "parameter_type_list_opt",
  "type_qualifier_list_opt", "pointer", "type_qualifier_list",
  "parameter_type_list", "parameter_list", "parameter_declaration",
  "identifier_list", "type_name", "initializer", "initializer_list",
  "designation_opt", "designation", "designator_list", "designator",
  "statement", "labeled_statement", "compound_statement",
  "block_item_list", "block_item", "expression_statement",
  "selection_statement", "iteration_statement", "jump_statement",
  "translation_unit", "external_declaration", "function_definition",
  "function_prototype", "declaration_list", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-264)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-208)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1098,  -264,   -15,  -264,  -264,  -264,  -264,  -264,  -264,  -264,
    -264,  -264,  -264,  -264,  -264,  -264,  -264,  -264,  -264,  -264,
    -264,  -264,  -264,   -25,  1098,  1098,  -264,  1098,  1098,  1064,
    -264,  -264,   -24,    -5,    36,    54,    16,  -264,  -264,    72,
    -264,    45,    58,   -23,  -264,  -264,  -264,  -264,  -264,  -264,
     281,  -264,    20,    51,  -264,  -264,    16,  -264,    54,   644,
    -264,   -25,  1027,   649,   140,    58,    77,   844,   139,  -264,
     103,   860,   132,   166,   666,   141,  -264,   174,   458,  -264,
     904,   904,  -264,  -264,  -264,  -264,  -264,  -264,  -264,   156,
    -264,  -264,  -264,  -264,  -264,  -264,   175,   352,   844,  -264,
     146,   167,   182,   170,   179,   189,   185,   180,   191,   176,
    -264,  -264,    74,  -264,  -264,  -264,  -264,   212,  -264,  -264,
    -264,  -264,  -264,   192,    32,  -264,  -264,  -264,  -264,  -264,
     193,   154,  -264,  -264,  -264,  -264,  -264,  -264,    54,   222,
    -264,   184,  -264,    -1,    90,   719,   181,  -264,  -264,  -264,
     197,   740,   230,   199,   458,  -264,  -264,   844,  -264,    89,
     560,   560,   844,     1,   333,  -264,   333,   231,   458,  -264,
    -264,   560,   784,   844,   187,   188,  -264,  -264,  -264,  -264,
    -264,  -264,  -264,  -264,  -264,  -264,  -264,  -264,  -264,   844,
    -264,   844,   844,   844,   844,   844,   844,   844,   844,   844,
     844,   844,   844,   844,   844,   844,   844,  -264,  -264,   208,
    -264,   844,  -264,   370,   844,  -264,   -22,   844,   194,    69,
     644,  -264,   114,  -264,  -264,  -264,   993,  -264,   195,   475,
    -264,   236,   273,   844,   560,  -264,   844,  -264,   277,   234,
    -264,  -264,  -264,     2,  -264,  -264,  -264,  -264,   800,   279,
    -264,  -264,     5,  -264,    17,  -264,  -264,  -264,  -264,  -264,
    -264,   146,   146,   167,   167,   182,   182,   182,   182,   170,
     170,   179,   189,   185,   844,   844,  -264,  -264,  -264,  -264,
    -264,  -264,   280,  -264,  -264,   147,  -264,  -264,  -264,  -264,
    -264,  -264,   284,  -264,  -264,   285,  -264,   740,   234,   278,
     283,   323,   560,   154,  -264,   278,  -264,   844,  -264,   180,
     191,   844,  -264,  -264,   644,  -264,  -264,  -264,   300,  -264,
     303,  -264,    70,  -264,   234,  -264,  -264,  -264,   560,   844,
    -264,   183,   286,   844,   560,  -264,   234,  -264,  -264,   234,
    -264,   313,   309,   844,   311,  -264,   287,  -264,  -264,   560,
    -264,   560,  -264,  -264,  -264
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    99,   122,   128,   109,    97,   101,   106,   103,   129,
     102,   108,   127,   110,    98,   111,   130,   112,   104,   107,
     105,   100,   204,     0,    86,    88,   113,    90,    92,     0,
     201,   203,     0,   120,     0,     0,   147,    84,   133,     0,
      94,    95,   132,     0,    85,    87,    89,    91,     1,   202,
       0,   206,     0,     0,   150,   149,   146,    83,     0,     0,
     208,     0,     0,   143,   145,   131,     0,     0,     0,    65,
       0,     0,     0,     0,     0,     0,    65,     0,     0,   183,
       0,     0,    27,    28,    29,    30,    31,    32,   189,     2,
       6,     7,     8,     3,     9,     4,    21,    33,     0,    35,
      39,    42,    45,    50,    53,    55,    57,    59,    61,    63,
      67,    80,     0,   186,   187,   173,   174,    65,   184,   175,
     176,   177,   178,   125,     0,   123,   134,   151,   148,    93,
      95,   167,     2,   161,    96,   209,   205,   158,   157,     0,
     142,   152,   154,     0,     0,     0,   144,   198,    33,    82,
       0,     0,     0,     0,     0,    25,   197,     0,   199,     0,
       0,     0,     0,     0,   117,   160,   117,     0,     0,    22,
      23,     0,     0,     0,     0,     0,    15,    16,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,     0,
      24,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    65,    65,     0,
     188,     0,   182,     0,     0,   118,     0,     0,     0,     0,
       0,   166,     0,   169,   156,   140,     0,   141,     0,     0,
     135,    28,     0,     0,     0,    65,     0,   196,     0,    66,
     200,   181,    65,     0,     5,   116,   114,   115,     0,     0,
     179,    11,     0,    19,     0,    13,    14,    68,    36,    37,
      38,    40,    41,    43,    44,    46,    47,    48,    49,    51,
      52,    54,    56,    58,     0,     0,    65,    81,   185,   126,
     119,   124,     0,   172,   162,   167,   164,   168,   170,   153,
     155,   159,     0,   139,   136,     0,   180,     0,    66,    26,
       0,     0,     0,   167,    34,     0,    12,     0,    10,    60,
      62,     0,   171,   163,     0,   137,   138,    66,     0,    65,
       0,   192,     0,    20,    66,   165,    65,    65,     0,     0,
      17,   167,     0,     0,     0,    66,    66,    18,    65,    66,
     193,   190,     0,     0,     0,    65,     0,    64,    65,     0,
     194,     0,    66,   195,   191
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -264,  -264,  -264,  -264,  -264,   -67,  -264,   -82,    55,    56,
      37,    53,   151,   155,   150,    87,    88,  -264,   -66,   -65,
    -126,   -49,  -264,   -69,  -173,   -38,     8,  -264,   307,  -264,
     -48,    12,   239,  -264,  -264,  -264,   196,    19,  -264,   -16,
     364,  -264,  -264,   -11,   -62,  -264,  -264,   190,  -264,    14,
    -202,   105,  -263,  -264,  -264,   215,  -133,  -264,    59,  -264,
     198,  -145,  -264,  -264,  -264,  -264,   380,  -264,  -264,  -264
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    94,    95,    96,   252,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   152,
     209,   111,   189,   112,   150,    22,    61,    39,    40,    24,
      25,   165,   246,    26,    34,   124,   125,    27,    28,   130,
      42,   139,   145,    43,    56,   140,   141,   142,   143,   167,
     134,   219,   220,   221,   222,   223,   114,   115,   116,   117,
     118,   119,   120,   121,   122,    29,    30,    31,    32,    62
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     148,   149,   146,    60,   155,   159,   235,    41,    23,   163,
     133,   161,   113,   169,   170,    35,   190,    35,   286,    53,
      50,     3,   314,   280,   135,    55,    36,   241,   242,     9,
     164,   148,    44,    45,    12,    46,    47,    23,   250,  -121,
     227,   279,   244,   302,   282,   128,   306,    37,     1,     2,
       3,     4,   213,     5,     6,    54,     7,     8,     9,    10,
     308,    11,    38,    12,    38,   123,    13,    36,   314,    14,
      15,   138,    33,    16,    17,   127,    18,   215,    19,    20,
      52,    21,   229,    54,   228,   163,   211,   211,   239,  -207,
     307,    51,   126,   243,    35,     3,   232,   166,    63,   163,
      64,   296,   211,     9,   254,    36,   164,   123,    12,   258,
     259,   260,   325,   300,   284,   330,   164,   216,   164,    59,
     164,   136,   224,   253,   148,   148,   148,   148,   148,   148,
     148,   148,   148,   148,   148,   148,   148,   148,   148,   148,
     257,    38,   274,   275,    57,     3,   210,   148,   149,   147,
     148,   149,   317,     9,   285,   331,   217,    58,    12,   211,
     218,   240,   277,    54,   144,   127,   304,   298,   238,   321,
     297,   133,   318,   166,   211,   113,   245,   301,   245,   151,
     292,   148,   249,   166,   295,   166,     3,   166,   287,   217,
     153,   326,   313,   218,     9,   335,   217,   191,   332,    12,
     218,   340,   192,   193,   156,   233,   157,   148,   148,   341,
     342,   311,   160,   344,   162,   172,   352,   173,   353,   194,
     195,   174,   175,   176,   177,   217,   354,   171,   337,   218,
     198,   199,   200,   201,   138,   265,   266,   267,   268,   204,
     196,   197,   324,   202,   203,   208,   -66,   206,   127,   261,
     262,   205,   263,   264,   328,   269,   270,   212,   323,   207,
     336,   333,   334,   225,   339,   133,   214,    59,   234,   226,
     236,   237,   248,   343,   255,   256,   148,   347,   276,   293,
     349,   283,   291,   351,     1,     2,     3,     4,    66,     5,
       6,    67,     7,     8,     9,    10,    68,    11,    69,    12,
      70,    71,    13,    72,    73,    14,    15,    74,    75,    16,
      17,    76,    18,    77,    19,    20,   294,    21,   299,   211,
     305,    78,   303,   312,   319,    50,    79,   315,   316,    80,
      81,    82,    83,    84,    85,    86,    87,     2,     3,     4,
     320,   327,     6,   329,     7,     8,     9,    10,   345,    11,
     346,    12,   348,    88,    13,   271,   273,   338,    15,   350,
     272,   309,    17,   310,    18,   129,    19,    20,    89,    90,
      91,    92,    93,     1,     2,     3,     4,    66,     5,     6,
      67,     7,     8,     9,    10,    68,    11,    69,    12,    70,
      71,    13,    72,    73,    14,    15,    74,    75,    16,    17,
      76,    18,    77,    19,    20,   247,    21,    65,   322,    49,
      78,   278,   281,     0,    50,     0,   290,     0,    80,    81,
      82,    83,    84,    85,    86,    87,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   288,     0,     0,
       0,     0,    88,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    89,    90,    91,
      92,    93,     2,     3,     4,     0,     0,     6,     0,     7,
       8,     9,    10,     0,    11,     0,    12,     0,    71,    13,
       3,     0,     0,    15,     0,     0,     0,    17,     9,    18,
       0,    19,    20,    12,     0,    71,     0,     0,    78,     0,
       0,     0,     0,     0,     0,     0,    80,    81,    82,    83,
      84,    85,    86,    87,     0,    78,     0,     0,     0,     0,
       0,     0,     0,    80,    81,    82,    83,    84,    85,    86,
      87,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   132,    90,    91,    92,    93,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   132,    90,    91,    92,    93,    66,     0,     0,
      67,     0,     0,     0,     0,    68,     0,    69,     0,    70,
      71,     0,    72,    73,     0,     0,    74,    75,     0,     0,
      76,     0,    77,     0,     0,     0,     0,     0,     0,     0,
      78,     0,     0,     0,    50,     0,     0,     0,    80,    81,
      82,    83,    84,    85,    86,    87,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    88,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    89,    90,    91,
      92,    93,     1,     2,     3,     4,     0,     5,     6,     0,
       7,     8,     9,    10,    71,    11,     0,    12,     0,     0,
      13,     0,     0,    14,    15,     0,     0,    16,    17,     0,
      18,     0,    19,    20,    78,    21,    71,     0,   131,     0,
       0,     0,    80,    81,    82,    83,    84,    85,    86,    87,
       0,     0,     0,     0,     0,     0,    78,     0,     0,     0,
       0,     0,     0,     0,    80,    81,    82,    83,    84,    85,
      86,    87,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   132,    90,    91,    92,    93,   137,     0,   158,    71,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   132,    90,    91,    92,    93,     0,    78,
      71,     0,   230,     0,     0,     0,     0,    80,    81,    82,
     231,    84,    85,    86,    87,     0,     0,     0,     0,     0,
      78,     0,     0,     0,     0,     0,     0,     0,    80,    81,
      82,    83,    84,    85,    86,    87,     0,     0,     0,     0,
       0,     0,     0,     0,    71,     0,   132,    90,    91,    92,
      93,     0,    88,     0,     0,     0,     0,     0,     0,     0,
      71,     0,     0,     0,    78,   251,     0,   132,    90,    91,
      92,    93,    80,    81,    82,    83,    84,    85,    86,    87,
      78,     0,     0,     0,   303,     0,     0,     0,    80,    81,
      82,    83,    84,    85,    86,    87,     0,     0,     0,     0,
       0,     0,     0,     0,    71,     0,     0,     0,     0,     0,
       0,   132,    90,    91,    92,    93,     0,     0,     0,     0,
      71,     0,     0,     0,    78,     0,     0,   132,    90,    91,
      92,    93,    80,    81,    82,    83,    84,    85,    86,    87,
     154,     0,     0,     0,     0,     0,     0,     0,    80,    81,
      82,    83,    84,    85,    86,    87,     0,     0,     0,     0,
       0,     0,     0,     0,    71,     0,     0,     0,     0,     0,
       0,   132,    90,    91,    92,    93,     0,     0,     0,     0,
       0,     0,     0,     0,   168,     0,     0,   132,    90,    91,
      92,    93,    80,    81,    82,    83,    84,    85,    86,    87,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   132,    90,    91,    92,    93,     1,     2,     3,     4,
       0,     5,     6,     0,     7,     8,     9,    10,     0,    11,
       0,    12,     0,     0,    13,     0,     0,    14,    15,     0,
       0,    16,    17,     0,    18,     0,    19,    20,     0,    21,
       1,     2,     3,     4,     0,     5,     6,     0,     7,     8,
       9,    10,     0,    11,     0,    12,     0,     0,    13,     0,
       0,    14,    15,     0,     0,    16,    17,     0,    18,     0,
      19,    20,     0,    21,    48,     0,   289,     1,     2,     3,
       4,    50,     5,     6,     0,     7,     8,     9,    10,     0,
      11,     0,    12,     0,     0,    13,     0,     0,    14,    15,
       0,     0,    16,    17,     0,    18,     0,    19,    20,     0,
      21,     1,     2,     3,     4,     0,     5,     6,     0,     7,
       8,     9,    10,     0,    11,     0,    12,     0,     0,    13,
       0,     0,    14,    15,     0,     0,    16,    17,     0,    18,
       0,    19,    20,     0,    21
};

static const yytype_int16 yycheck[] =
{
      67,    67,    64,    41,    71,    74,   151,    23,     0,    78,
      59,    76,    50,    80,    81,    40,    98,    40,   220,    35,
      44,     5,   285,    45,    62,    36,    51,   160,   161,    13,
      78,    98,    24,    25,    18,    27,    28,    29,   171,    44,
      41,   214,    41,    41,   217,    56,    41,    72,     3,     4,
       5,     6,   117,     8,     9,    36,    11,    12,    13,    14,
      43,    16,    87,    18,    87,    87,    21,    51,   331,    24,
      25,    63,    87,    28,    29,    56,    31,    45,    33,    34,
      44,    36,   144,    64,    85,   154,    85,    85,   157,    44,
      85,    32,    41,   162,    40,     5,   145,    78,    40,   168,
      42,   234,    85,    13,   173,    51,   154,    87,    18,   191,
     192,   193,   314,   239,    45,    45,   164,    85,   166,    74,
     168,    62,   138,   172,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     189,    87,   207,   208,    72,     5,    72,   214,   214,    72,
     217,   217,   297,    13,    85,    85,    42,    85,    18,    85,
      46,    72,   211,   144,    24,   146,   248,   236,   154,   302,
     235,   220,   298,   154,    85,   213,   164,   242,   166,    40,
     229,   248,   168,   164,   233,   166,     5,   168,    74,    42,
      87,   317,    45,    46,    13,   328,    42,    51,   324,    18,
      46,   334,    56,    57,    72,    24,    40,   274,   275,   335,
     336,   276,    71,   339,    40,    40,   349,    42,   351,    52,
      53,    46,    47,    48,    49,    42,   352,    71,    45,    46,
      60,    61,    62,    63,   226,   198,   199,   200,   201,    50,
      58,    59,   311,    64,    65,    69,    70,    67,   229,   194,
     195,    66,   196,   197,   319,   202,   203,    45,   307,    68,
     329,   326,   327,    41,   333,   314,    74,    74,    71,    85,
      40,    72,    41,   338,    87,    87,   343,   343,    70,    43,
     345,    87,    87,   348,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    43,    36,    41,    85,
      41,    40,    44,    43,    41,    44,    45,    43,    43,    48,
      49,    50,    51,    52,    53,    54,    55,     4,     5,     6,
      17,    41,     9,    40,    11,    12,    13,    14,    35,    16,
      41,    18,    41,    72,    21,   204,   206,    71,    25,    72,
     205,   274,    29,   275,    31,    58,    33,    34,    87,    88,
      89,    90,    91,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,   166,    36,    43,   303,    29,
      40,   213,   216,    -1,    44,    -1,   226,    -1,    48,    49,
      50,    51,    52,    53,    54,    55,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,   222,    -1,    -1,
      -1,    -1,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,    88,    89,
      90,    91,     4,     5,     6,    -1,    -1,     9,    -1,    11,
      12,    13,    14,    -1,    16,    -1,    18,    -1,    20,    21,
       5,    -1,    -1,    25,    -1,    -1,    -1,    29,    13,    31,
      -1,    33,    34,    18,    -1,    20,    -1,    -1,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    87,    88,    89,    90,    91,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    87,    88,    89,    90,    91,     7,    -1,    -1,
      10,    -1,    -1,    -1,    -1,    15,    -1,    17,    -1,    19,
      20,    -1,    22,    23,    -1,    -1,    26,    27,    -1,    -1,
      30,    -1,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    -1,    -1,    -1,    44,    -1,    -1,    -1,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,    88,    89,
      90,    91,     3,     4,     5,     6,    -1,     8,     9,    -1,
      11,    12,    13,    14,    20,    16,    -1,    18,    -1,    -1,
      21,    -1,    -1,    24,    25,    -1,    -1,    28,    29,    -1,
      31,    -1,    33,    34,    40,    36,    20,    -1,    44,    -1,
      -1,    -1,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    87,    88,    89,    90,    91,    87,    -1,    72,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    87,    88,    89,    90,    91,    -1,    40,
      20,    -1,    43,    -1,    -1,    -1,    -1,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    20,    -1,    87,    88,    89,    90,
      91,    -1,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      20,    -1,    -1,    -1,    40,    41,    -1,    87,    88,    89,
      90,    91,    48,    49,    50,    51,    52,    53,    54,    55,
      40,    -1,    -1,    -1,    44,    -1,    -1,    -1,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    87,    88,    89,    90,    91,    -1,    -1,    -1,    -1,
      20,    -1,    -1,    -1,    40,    -1,    -1,    87,    88,    89,
      90,    91,    48,    49,    50,    51,    52,    53,    54,    55,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    87,    88,    89,    90,    91,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    -1,    -1,    87,    88,    89,
      90,    91,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    87,    88,    89,    90,    91,     3,     4,     5,     6,
      -1,     8,     9,    -1,    11,    12,    13,    14,    -1,    16,
      -1,    18,    -1,    -1,    21,    -1,    -1,    24,    25,    -1,
      -1,    28,    29,    -1,    31,    -1,    33,    34,    -1,    36,
       3,     4,     5,     6,    -1,     8,     9,    -1,    11,    12,
      13,    14,    -1,    16,    -1,    18,    -1,    -1,    21,    -1,
      -1,    24,    25,    -1,    -1,    28,    29,    -1,    31,    -1,
      33,    34,    -1,    36,     0,    -1,    73,     3,     4,     5,
       6,    44,     8,     9,    -1,    11,    12,    13,    14,    -1,
      16,    -1,    18,    -1,    -1,    21,    -1,    -1,    24,    25,
      -1,    -1,    28,    29,    -1,    31,    -1,    33,    34,    -1,
      36,     3,     4,     5,     6,    -1,     8,     9,    -1,    11,
      12,    13,    14,    -1,    16,    -1,    18,    -1,    -1,    21,
      -1,    -1,    24,    25,    -1,    -1,    28,    29,    -1,    31,
      -1,    33,    34,    -1,    36
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     8,     9,    11,    12,    13,
      14,    16,    18,    21,    24,    25,    28,    29,    31,    33,
      34,    36,   117,   118,   121,   122,   125,   129,   130,   157,
     158,   159,   160,    87,   126,    40,    51,    72,    87,   119,
     120,   131,   132,   135,   118,   118,   118,   118,     0,   158,
      44,   150,    44,   131,   129,   135,   136,    72,    85,    74,
     117,   118,   161,    40,    42,   132,     7,    10,    15,    17,
      19,    20,    22,    23,    26,    27,    30,    32,    40,    45,
      48,    49,    50,    51,    52,    53,    54,    55,    72,    87,
      88,    89,    90,    91,    93,    94,    95,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   113,   115,   117,   148,   149,   150,   151,   152,   153,
     154,   155,   156,    87,   127,   128,    41,   129,   135,   120,
     131,    44,    87,   113,   142,   117,   150,    87,   118,   133,
     137,   138,   139,   140,    24,   134,   136,    72,    97,   110,
     116,    40,   111,    87,    40,    97,    72,    40,    72,   115,
      71,   111,    40,   115,   122,   123,   129,   141,    40,    97,
      97,    71,    40,    42,    46,    47,    48,    49,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,   114,
      99,    51,    56,    57,    52,    53,    58,    59,    60,    61,
      62,    63,    64,    65,    50,    66,    67,    68,    69,   112,
      72,    85,    45,   111,    74,    45,    85,    42,    46,   143,
     144,   145,   146,   147,   131,    41,    85,    41,    85,   136,
      43,    51,   113,    24,    71,   153,    40,    72,   141,   115,
      72,   148,   148,   115,    41,   123,   124,   124,    41,   141,
     148,    41,    96,   113,   115,    87,    87,   113,    99,    99,
      99,   100,   100,   101,   101,   102,   102,   102,   102,   103,
     103,   104,   105,   106,   111,   111,    70,   113,   152,   116,
      45,   128,   116,    87,    45,    85,   142,    74,   147,    73,
     139,    87,   113,    43,    43,   113,   148,   111,   115,    41,
     112,   111,    41,    44,    99,    41,    41,    85,    43,   107,
     108,   111,    43,    45,   144,    43,    43,   153,   112,    41,
      17,   148,   143,   113,   115,   142,   112,    41,   111,    40,
      45,    85,   112,   111,   111,   148,   115,    45,    71,   115,
     148,   112,   112,   111,   112,    35,    41,   110,    41,   111,
      72,   111,   148,   148,   112
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    92,    93,    93,    93,    93,    94,    94,    94,    95,
      95,    95,    95,    95,    95,    95,    95,    95,    95,    96,
      96,    97,    97,    97,    97,    97,    97,    98,    98,    98,
      98,    98,    98,    99,    99,   100,   100,   100,   100,   101,
     101,   101,   102,   102,   102,   103,   103,   103,   103,   103,
     104,   104,   104,   105,   105,   106,   106,   107,   107,   108,
     108,   109,   109,   110,   110,   111,   112,   113,   113,   114,
     114,   114,   114,   114,   114,   114,   114,   114,   114,   114,
     115,   115,   116,   117,   117,   118,   118,   118,   118,   118,
     118,   118,   118,   119,   119,   120,   120,   121,   121,   121,
     121,   122,   122,   122,   122,   122,   122,   122,   122,   122,
     122,   122,   122,   122,   123,   123,   124,   124,   125,   125,
     125,   126,   126,   127,   127,   128,   128,   129,   129,   129,
     130,   131,   131,   132,   132,   132,   132,   132,   132,   132,
     132,   132,   133,   133,   134,   134,   135,   135,   135,   135,
     136,   136,   137,   137,   138,   138,   139,   139,   140,   140,
     141,   142,   142,   142,   143,   143,   144,   144,   145,   146,
     146,   147,   147,   148,   148,   148,   148,   148,   148,   149,
     149,   149,   150,   150,   151,   151,   152,   152,   153,   153,
     154,   154,   154,   155,   155,   155,   156,   156,   156,   156,
     156,   157,   157,   158,   158,   159,   159,   160,   161,   161
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     1,     1,     1,
       4,     3,     4,     3,     3,     2,     2,     6,     7,     1,
       3,     1,     2,     2,     2,     2,     4,     1,     1,     1,
       1,     1,     1,     1,     4,     1,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     1,     3,     3,     3,     3,
       1,     3,     3,     1,     3,     1,     3,     1,     3,     1,
       4,     1,     4,     1,     9,     0,     0,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     3,     2,     2,     1,     2,     1,     2,
       1,     2,     1,     3,     1,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     1,     0,     5,     6,
       2,     1,     0,     1,     3,     1,     3,     1,     1,     1,
       1,     2,     1,     1,     3,     4,     5,     6,     6,     5,
       4,     4,     1,     0,     1,     0,     2,     1,     3,     2,
       1,     2,     1,     3,     1,     3,     2,     1,     1,     3,
       1,     1,     3,     4,     2,     4,     1,     0,     2,     1,
       2,     3,     2,     1,     1,     1,     1,     1,     1,     3,
       4,     3,     3,     2,     1,     3,     1,     1,     2,     1,
       8,    12,     5,     8,    10,    12,     3,     2,     2,     2,
       3,     1,     2,     1,     1,     4,     2,     2,     1,     2
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


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
    YYNOMEM;
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
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
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
  case 2: /* primary_expression: IDENTIFIER  */
#line 73 "asgn6_21CS10005_21CS30031.y"
                                    {
                        (yyval.expr) = new E();  // New expression
                        currentSymbolTable->lookup(*(yyvsp[0].sValue)); // Get or store in Symbol Table
                        (yyval.expr)->addr = (*(yyvsp[0].sValue));   // Store expression as identifier name
                    }
#line 1675 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 3: /* primary_expression: LITERAL  */
#line 78 "asgn6_21CS10005_21CS30031.y"
                                    {
                        (yyval.expr) = new E();  // New expression
                        (yyval.expr)->addr = ".LC"+to_string(stringCount++);
                        stringList.push_back(*((yyvsp[0].sValue)));
                    }
#line 1685 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 4: /* primary_expression: constant  */
#line 83 "asgn6_21CS10005_21CS30031.y"
                               { (yyval.expr) = (yyvsp[0].expr); }
#line 1691 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 5: /* primary_expression: PARANTHESIS_OPEN expression PARANTHESIS_CLOSE  */
#line 84 "asgn6_21CS10005_21CS30031.y"
                                                                    { (yyval.expr) = (yyvsp[-1].expr); }
#line 1697 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 6: /* constant: CONSTANT_INT  */
#line 87 "asgn6_21CS10005_21CS30031.y"
                                    {
                        (yyval.expr) = new E();   // New expression
                        (yyval.expr)->addr = currentSymbolTable->gentemp(INT); // Make INT Data Type temporary in ST
                        emit((yyval.expr)->addr, (yyvsp[0].iValue), ASSIGN); // Assign the const to the new temp
                        symbolVal* val = new symbolVal((yyvsp[0].iValue));
                        currentSymbolTable->lookup((yyval.expr)->addr)->initValue = val;   // Set initial value for constant
                    }
#line 1709 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 7: /* constant: CONSTANT_FLOAT  */
#line 94 "asgn6_21CS10005_21CS30031.y"
                                    {
                        (yyval.expr) = new E();   // New expression
                        (yyval.expr)->addr = currentSymbolTable->gentemp(FLOAT); // Make FLOAT Data Type temporary in ST
                        emit((yyval.expr)->addr, (yyvsp[0].fValue), ASSIGN); // Assign the const to the new temp
                        symbolVal* val = new symbolVal((yyvsp[0].fValue));
                        currentSymbolTable->lookup((yyval.expr)->addr)->initValue = val;   // Set initial value for constant
                    }
#line 1721 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 8: /* constant: CONSTANT_CHAR  */
#line 101 "asgn6_21CS10005_21CS30031.y"
                                    {
                        (yyval.expr) = new E();   // New expression
                        (yyval.expr)->addr = currentSymbolTable->gentemp(CHAR); // Make INT Data Type temporary in ST
                        emit((yyval.expr)->addr, (yyvsp[0].cValue), ASSIGN); // Assign the const to the new temp
                        symbolVal* val = new symbolVal((yyvsp[0].cValue));
                        currentSymbolTable->lookup((yyval.expr)->addr)->initValue = val;   // Set initial value for constant
                    }
#line 1733 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 9: /* postfix_expression: primary_expression  */
#line 110 "asgn6_21CS10005_21CS30031.y"
                                         { (yyval.expr) = (yyvsp[0].expr); }
#line 1739 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 10: /* postfix_expression: postfix_expression SQ_BRACKET_OPEN expression SQ_BRACKET_CLOSE  */
#line 111 "asgn6_21CS10005_21CS30031.y"
                                                                                     {
                        string st = "";
                        if ((yyvsp[-3].expr)->deRef == 0) {
                            st = currentSymbolTable->gentemp(INT);
                            emit(st, 0, ASSIGN);            // Set new temporary as  0
                            (yyvsp[-3].expr)->deRefName = new string(st);
                        }
                        string t = currentSymbolTable->gentemp(INT); // new temp

                        emit(t, (yyvsp[-1].expr)->addr, "", ASSIGN);
                        emit(t, t, "4", MULT);
                        emit(st, t, "", ASSIGN); // st = expression*4
                        (yyval.expr) = (yyvsp[-3].expr);
                    }
#line 1758 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 11: /* postfix_expression: postfix_expression PARANTHESIS_OPEN PARANTHESIS_CLOSE  */
#line 125 "asgn6_21CS10005_21CS30031.y"
                                                                            {   // No arguments
                        // Make a new empty symbol table
                        globalSymbolTable.lookup((yyvsp[-2].expr)->addr)->nestedTable;
                        emit((yyvsp[-2].expr)->addr, "0", "", CALL);
                    }
#line 1768 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 12: /* postfix_expression: postfix_expression PARANTHESIS_OPEN argument_expression_list PARANTHESIS_CLOSE  */
#line 130 "asgn6_21CS10005_21CS30031.y"
                                                                                                     {
                        symbolTable* funcTable = globalSymbolTable.lookup((yyvsp[-3].expr)->addr)->nestedTable;
                        vector<P*> params = *((yyvsp[-1].paramList));    // Parameters
                        vector<symbol*> paramsArray = funcTable->symbols; // Get formal parameters

                        for(auto it: params) emit((*it).name, "", "", PARAM);  // Emit parameters

                        DataType returnType = funcTable->lookup("RETVAL")->type.base;   // Return value type
                        if (returnType == VOID) emit((yyvsp[-3].expr)->addr, (int)params.size(), CALL); // Function call
                        else {
                            string returnVal = currentSymbolTable->gentemp(returnType);
                            emit((yyvsp[-3].expr)->addr, to_string(params.size()), returnVal, CALL);     // Function call and value to be stored
                            (yyval.expr) = new E();
                            (yyval.expr)->addr = returnVal;
                        }
                    }
#line 1789 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 13: /* postfix_expression: postfix_expression PERIOD IDENTIFIER  */
#line 146 "asgn6_21CS10005_21CS30031.y"
                                                           {}
#line 1795 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 14: /* postfix_expression: postfix_expression ARROW IDENTIFIER  */
#line 147 "asgn6_21CS10005_21CS30031.y"
                                                          {}
#line 1801 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 15: /* postfix_expression: postfix_expression INCREMENT  */
#line 148 "asgn6_21CS10005_21CS30031.y"
                                                   {
                        (yyval.expr) = new E();
                        symbolType t = currentSymbolTable->lookup((yyvsp[-1].expr)->addr)->type;  // Get type
                        if (t.base == ARRAY) {
                            (yyval.expr)->addr = currentSymbolTable->gentemp(currentSymbolTable->lookup((yyvsp[-1].expr)->addr)->type.inner);
                            emit((yyval.expr)->addr, (yyvsp[-1].expr)->addr, *((yyvsp[-1].expr)->deRefName), ARR_IDX_ARG);
                            string temp = currentSymbolTable->gentemp(t.inner);
                            emit(temp, (yyvsp[-1].expr)->addr, *((yyvsp[-1].expr)->deRefName), ARR_IDX_ARG);
                            emit((yyval.expr)->addr, temp, "", ASSIGN);
                            emit(temp, temp, "1", ADD);
                            emit((yyvsp[-1].expr)->addr, temp, *((yyvsp[-1].expr)->deRefName), ARR_IDX_RES);
                        }
                        else {
                            (yyval.expr)->addr = currentSymbolTable->gentemp(currentSymbolTable->lookup((yyvsp[-1].expr)->addr)->type.base);
                            emit((yyval.expr)->addr, (yyvsp[-1].expr)->addr, "", ASSIGN);   // Assign current expression current value
                            emit((yyvsp[-1].expr)->addr, (yyvsp[-1].expr)->addr, "1", ADD);     // Increment current value
                        }
                    }
#line 1824 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 16: /* postfix_expression: postfix_expression DECREMENT  */
#line 166 "asgn6_21CS10005_21CS30031.y"
                                                   {
                        (yyval.expr) = new E();
                        symbolType t = currentSymbolTable->lookup((yyvsp[-1].expr)->addr)->type;  // Get type
                        if (t.base == ARRAY) {
                            (yyval.expr)->addr = currentSymbolTable->gentemp(currentSymbolTable->lookup((yyvsp[-1].expr)->addr)->type.inner);
                            emit((yyval.expr)->addr, (yyvsp[-1].expr)->addr, *((yyvsp[-1].expr)->deRefName), ARR_IDX_ARG);
                            string temp = currentSymbolTable->gentemp(t.inner);
                            emit(temp, (yyvsp[-1].expr)->addr, *((yyvsp[-1].expr)->deRefName), ARR_IDX_ARG);
                            emit((yyval.expr)->addr, temp, "", ASSIGN);
                            emit(temp, temp, "1", SUB);
                            emit((yyvsp[-1].expr)->addr, temp, *((yyvsp[-1].expr)->deRefName), ARR_IDX_RES);
                        }
                        else {
                            (yyval.expr)->addr = currentSymbolTable->gentemp(currentSymbolTable->lookup((yyvsp[-1].expr)->addr)->type.base);
                            emit((yyval.expr)->addr, (yyvsp[-1].expr)->addr, "", ASSIGN);   // Assign current expression current value
                            emit((yyvsp[-1].expr)->addr, (yyvsp[-1].expr)->addr, "1", SUB);     // Decrement current value
                        }
                    }
#line 1847 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 17: /* postfix_expression: PARANTHESIS_OPEN type_name PARANTHESIS_CLOSE CURLY_BRACKET_OPEN initializer_list CURLY_BRACKET_CLOSE  */
#line 184 "asgn6_21CS10005_21CS30031.y"
                                                                                                                           {}
#line 1853 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 18: /* postfix_expression: PARANTHESIS_OPEN type_name PARANTHESIS_CLOSE CURLY_BRACKET_OPEN initializer_list COMMA CURLY_BRACKET_CLOSE  */
#line 185 "asgn6_21CS10005_21CS30031.y"
                                                                                                                                 {}
#line 1859 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 19: /* argument_expression_list: assignment_expression  */
#line 188 "asgn6_21CS10005_21CS30031.y"
                                                    {
                                // Get argument
                                P* arg = new P();
                                arg->name = (yyvsp[0].expr)->addr;
                                arg->type = currentSymbolTable->lookup((yyvsp[0].expr)->addr)->type;
                                (yyval.paramList) = new vector<P*>(1, arg);    // Make a new vector and store argument
                            }
#line 1871 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 20: /* argument_expression_list: argument_expression_list COMMA assignment_expression  */
#line 195 "asgn6_21CS10005_21CS30031.y"
                                                                                   {
                                // Get argument
                                P* arg = new P();
                                arg->name = (yyvsp[0].expr)->addr;
                                arg->type = currentSymbolTable->lookup((yyvsp[0].expr)->addr)->type;
                                //  Add to existing vector
                                (yyval.paramList) = (yyvsp[-2].paramList);
                                (yyvsp[-2].paramList)->push_back(arg);
                            }
#line 1885 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 21: /* unary_expression: postfix_expression  */
#line 206 "asgn6_21CS10005_21CS30031.y"
                                         { (yyval.expr) = (yyvsp[0].expr); }
#line 1891 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 22: /* unary_expression: INCREMENT unary_expression  */
#line 207 "asgn6_21CS10005_21CS30031.y"
                                                 {
                        (yyval.expr) = new E();
                        symbolType t = currentSymbolTable->lookup((yyvsp[0].expr)->addr)->type;  // Get type
                        if (t.base == ARRAY) {
                            string temp = currentSymbolTable->gentemp(t.inner);
                            emit(temp, (yyvsp[0].expr)->addr, *((yyvsp[0].expr)->deRefName), ARR_IDX_ARG);
                            emit(temp, temp, "1", ADD);
                            emit((yyvsp[0].expr)->addr, temp, *((yyvsp[0].expr)->deRefName), ARR_IDX_RES);
                        }
                        else {
                            emit((yyvsp[0].expr)->addr, (yyvsp[0].expr)->addr, "1", ADD);
                        }
                        (yyval.expr)->addr = currentSymbolTable->gentemp(currentSymbolTable->lookup((yyvsp[0].expr)->addr)->type.base);
                        emit((yyval.expr)->addr, (yyvsp[0].expr)->addr, "", ASSIGN);   // Assign incremented value
                    }
#line 1911 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 23: /* unary_expression: DECREMENT unary_expression  */
#line 222 "asgn6_21CS10005_21CS30031.y"
                                                 {
                        (yyval.expr) = new E();
                        symbolType t = currentSymbolTable->lookup((yyvsp[0].expr)->addr)->type;  // Get type
                        if (t.base == ARRAY) {
                            string temp = currentSymbolTable->gentemp(t.inner);
                            emit(temp, (yyvsp[0].expr)->addr, *((yyvsp[0].expr)->deRefName), ARR_IDX_ARG);
                            emit(temp, temp, "1", SUB);
                            emit((yyvsp[0].expr)->addr, temp, *((yyvsp[0].expr)->deRefName), ARR_IDX_RES);
                        }
                        else {
                            emit((yyvsp[0].expr)->addr, (yyvsp[0].expr)->addr, "1", SUB);
                        }
                        (yyval.expr)->addr = currentSymbolTable->gentemp(currentSymbolTable->lookup((yyvsp[0].expr)->addr)->type.base);
                        emit((yyval.expr)->addr, (yyvsp[0].expr)->addr, "", ASSIGN);   // Assign decremented value
                    }
#line 1931 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 24: /* unary_expression: unary_operator cast_expression  */
#line 237 "asgn6_21CS10005_21CS30031.y"
                                                     {
                        if ((yyvsp[-1].cValue) == '&') {
                            (yyval.expr) = new E();
                            (yyval.expr)->addr = currentSymbolTable->gentemp(POINTER);    // Pointer type
                            emit((yyval.expr)->addr, (yyvsp[0].expr)->addr, "", REFERENCE);    // Get address
                        }
                        else if ((yyvsp[-1].cValue) == '*') {
                            (yyval.expr) = new E();
                            (yyval.expr)->addr = currentSymbolTable->gentemp(INT);    // Pointers are integer values
                            (yyval.expr)->deRef = 1;  // Dereferenced
                            (yyval.expr)->deRefName = new string((yyvsp[0].expr)->addr); // Dereferenced name
                            emit((yyval.expr)->addr, (yyvsp[0].expr)->addr, "", DEREFERENCE);    // Get value
                        }
                        else if ((yyvsp[-1].cValue) == '-') {
                            (yyval.expr) = new E();
                            (yyval.expr)->addr = currentSymbolTable->gentemp(INT);
                            emit((yyval.expr)->addr, (yyvsp[0].expr)->addr, "", U_MINUS);    // Get negative value
                        }
                        else if ((yyvsp[-1].cValue) == '!') {
                            (yyval.expr) = new E();
                            (yyval.expr)->addr = currentSymbolTable->gentemp(INT);
                            int temp = nextinstr+2;
                            emit(to_string(temp), (yyvsp[0].expr)->addr, "0", GOTO_EQ);
                            temp = nextinstr+3;
                            emit(to_string(temp), "", "", GOTO);
                            emit((yyval.expr)->addr, "1", "", ASSIGN);
                            temp = nextinstr+2;
                            emit(to_string(temp), "", "", GOTO);
                            emit((yyval.expr)->addr, "0", "", ASSIGN);
                        }
                        // Bit operator ~ ignored
                    }
#line 1968 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 25: /* unary_expression: SIZEOF unary_expression  */
#line 269 "asgn6_21CS10005_21CS30031.y"
                                              {}
#line 1974 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 26: /* unary_expression: SIZEOF PARANTHESIS_OPEN type_name PARANTHESIS_CLOSE  */
#line 270 "asgn6_21CS10005_21CS30031.y"
                                                                          {}
#line 1980 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 27: /* unary_operator: AMPERSAND  */
#line 273 "asgn6_21CS10005_21CS30031.y"
                                {(yyval.cValue) = '&';}
#line 1986 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 28: /* unary_operator: ASTERISK  */
#line 274 "asgn6_21CS10005_21CS30031.y"
                                {(yyval.cValue) = '*';}
#line 1992 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 29: /* unary_operator: PLUS  */
#line 275 "asgn6_21CS10005_21CS30031.y"
                                {(yyval.cValue) = '+';}
#line 1998 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 30: /* unary_operator: MINUS  */
#line 276 "asgn6_21CS10005_21CS30031.y"
                                {(yyval.cValue) = '-';}
#line 2004 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 31: /* unary_operator: TILDE  */
#line 277 "asgn6_21CS10005_21CS30031.y"
                                {(yyval.cValue) = '~';}
#line 2010 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 32: /* unary_operator: EXCLAMATION  */
#line 278 "asgn6_21CS10005_21CS30031.y"
                                  {(yyval.cValue) = '!';}
#line 2016 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 33: /* cast_expression: unary_expression  */
#line 281 "asgn6_21CS10005_21CS30031.y"
                                       {(yyval.expr) =  (yyvsp[0].expr);}
#line 2022 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 34: /* cast_expression: PARANTHESIS_OPEN type_name PARANTHESIS_CLOSE cast_expression  */
#line 282 "asgn6_21CS10005_21CS30031.y"
                                                                                   {}
#line 2028 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 35: /* multiplicative_expression: cast_expression  */
#line 285 "asgn6_21CS10005_21CS30031.y"
                                            {
                                symbolType temp = currentSymbolTable->lookup((yyvsp[0].expr)->addr)->type;
                                if (temp.base == ARRAY) {
                                    string t = currentSymbolTable->gentemp(temp.inner);
                                    if ((yyvsp[0].expr)->deRefName != NULL) {
                                        emit(t, (yyvsp[0].expr)->addr, *((yyvsp[0].expr)->deRefName), ARR_IDX_ARG);
                                        (yyvsp[0].expr)->addr = t;
                                        (yyvsp[0].expr)->type = temp.inner;
                                    }
                                }
                                (yyval.expr) = (yyvsp[0].expr);
                          }
#line 2045 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 36: /* multiplicative_expression: multiplicative_expression ASTERISK cast_expression  */
#line 297 "asgn6_21CS10005_21CS30031.y"
                                                                               {
                            (yyval.expr) = new E();
                            // Get operands
                            symbol* a = currentSymbolTable->lookup((yyvsp[-2].expr)->addr);
                            symbol* b = currentSymbolTable->lookup((yyvsp[0].expr)->addr);
                            // ARRAY case
                            if (b->type.base == ARRAY) {
                                string t = currentSymbolTable->gentemp(b->type.inner);
                                emit(t, (yyvsp[0].expr)->addr, *((yyvsp[0].expr)->deRefName), ARR_IDX_ARG);
                                (yyvsp[0].expr)->addr = t;
                                (yyvsp[0].expr)->type = b->type.inner;
                            }
                            if (a->type.base == ARRAY) {
                                string t = currentSymbolTable->gentemp(a->type.inner);
                                emit(t, (yyvsp[-2].expr)->addr, *((yyvsp[-2].expr)->deRefName), ARR_IDX_ARG);
                                (yyvsp[-2].expr)->addr = t;
                                (yyvsp[-2].expr)->type = a->type.inner;
                            }

                            // assign to max datatype
                            DataType dt = max(a->type.base, b->type.base);
                            (yyval.expr)->addr = currentSymbolTable->gentemp(dt); // Create new temp with type int and store in addr
                            emit((yyval.expr)->addr, (yyvsp[-2].expr)->addr, (yyvsp[0].expr)->addr, MULT); // multexpr = multexpr1 * castexpr
                          }
#line 2074 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 37: /* multiplicative_expression: multiplicative_expression SLASH cast_expression  */
#line 321 "asgn6_21CS10005_21CS30031.y"
                                                                            {
                            (yyval.expr) = new E();
                            // Get operands
                            symbol* a = currentSymbolTable->lookup((yyvsp[-2].expr)->addr);
                            symbol* b = currentSymbolTable->lookup((yyvsp[0].expr)->addr);
                            // ARRAY case
                            if (b->type.base == ARRAY) {
                                string t = currentSymbolTable->gentemp(b->type.inner);
                                emit(t, (yyvsp[0].expr)->addr, *((yyvsp[0].expr)->deRefName), ARR_IDX_ARG);
                                (yyvsp[0].expr)->addr = t;
                                (yyvsp[0].expr)->type = b->type.inner;
                            }
                            if (a->type.base == ARRAY) {
                                string t = currentSymbolTable->gentemp(a->type.inner);
                                emit(t, (yyvsp[-2].expr)->addr, *((yyvsp[-2].expr)->deRefName), ARR_IDX_ARG);
                                (yyvsp[-2].expr)->addr = t;
                                (yyvsp[-2].expr)->type = a->type.inner;
                            }

                            // assign to max datatype
                            DataType dt = max(a->type.base, b->type.base);
                            (yyval.expr)->addr = currentSymbolTable->gentemp(dt); // Create new temp with type int and store in addr
                            emit((yyval.expr)->addr, (yyvsp[-2].expr)->addr, (yyvsp[0].expr)->addr, DIV); // multexpr = multexpr1 / castexpr
                          }
#line 2103 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 38: /* multiplicative_expression: multiplicative_expression PERCENT cast_expression  */
#line 345 "asgn6_21CS10005_21CS30031.y"
                                                                              {
                            (yyval.expr) = new E();
                            // Get operands
                            symbol* a = currentSymbolTable->lookup((yyvsp[-2].expr)->addr);
                            symbol* b = currentSymbolTable->lookup((yyvsp[0].expr)->addr);
                            // ARRAY case
                            if (b->type.base == ARRAY) {
                                string t = currentSymbolTable->gentemp(b->type.inner);
                                emit(t, (yyvsp[0].expr)->addr, *((yyvsp[0].expr)->deRefName), ARR_IDX_ARG);
                                (yyvsp[0].expr)->addr = t;
                                (yyvsp[0].expr)->type = b->type.inner;
                            }
                            if (a->type.base == ARRAY) {
                                string t = currentSymbolTable->gentemp(a->type.inner);
                                emit(t, (yyvsp[-2].expr)->addr, *((yyvsp[-2].expr)->deRefName), ARR_IDX_ARG);
                                (yyvsp[-2].expr)->addr = t;
                                (yyvsp[-2].expr)->type = a->type.inner;
                            }

                            // assign to max datatype
                            DataType dt = max(a->type.base, b->type.base);
                            (yyval.expr)->addr = currentSymbolTable->gentemp(dt); // Create new temp with type int and store in addr
                            emit((yyval.expr)->addr, (yyvsp[-2].expr)->addr, (yyvsp[0].expr)->addr, MOD); // multexpr = multexpr1 % castexpr
                          }
#line 2132 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 39: /* additive_expression: multiplicative_expression  */
#line 371 "asgn6_21CS10005_21CS30031.y"
                                                { (yyval.expr) = (yyvsp[0].expr); }
#line 2138 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 40: /* additive_expression: additive_expression PLUS multiplicative_expression  */
#line 372 "asgn6_21CS10005_21CS30031.y"
                                                                         {
                        (yyval.expr) = new E();
                        // Get operands
                        symbol* a = currentSymbolTable->lookup((yyvsp[-2].expr)->addr);
                        symbol* b = currentSymbolTable->lookup((yyvsp[0].expr)->addr);
                        // ARRAY case
                        if (b->type.base == ARRAY) {
                            string t = currentSymbolTable->gentemp(b->type.inner);
                            emit(t, (yyvsp[0].expr)->addr, *((yyvsp[0].expr)->deRefName), ARR_IDX_ARG);
                            (yyvsp[0].expr)->addr = t;
                            (yyvsp[0].expr)->type = b->type.inner;
                        }
                        if (a->type.base == ARRAY) {
                            string t = currentSymbolTable->gentemp(a->type.inner);
                            emit(t, (yyvsp[-2].expr)->addr, *((yyvsp[-2].expr)->deRefName), ARR_IDX_ARG);
                            (yyvsp[-2].expr)->addr = t;
                            (yyvsp[-2].expr)->type = a->type.inner;
                        }

                        // assign to max datatype
                        DataType dt = max(a->type.base, b->type.base);
                        (yyval.expr)->addr = currentSymbolTable->gentemp(dt); // Create new temp with type int and store in addr
                        emit((yyval.expr)->addr, (yyvsp[-2].expr)->addr, (yyvsp[0].expr)->addr, ADD); // addexpr = addexpr1 + multexpr
                    }
#line 2167 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 41: /* additive_expression: additive_expression MINUS multiplicative_expression  */
#line 396 "asgn6_21CS10005_21CS30031.y"
                                                                          {
                        (yyval.expr) = new E();
                        // Get operands
                        symbol* a = currentSymbolTable->lookup((yyvsp[-2].expr)->addr);
                        symbol* b = currentSymbolTable->lookup((yyvsp[0].expr)->addr);
                        // ARRAY case
                        if (b->type.base == ARRAY) {
                            string t = currentSymbolTable->gentemp(b->type.inner);
                            emit(t, (yyvsp[0].expr)->addr, *((yyvsp[0].expr)->deRefName), ARR_IDX_ARG);
                            (yyvsp[0].expr)->addr = t;
                            (yyvsp[0].expr)->type = b->type.inner;
                        }
                        if (a->type.base == ARRAY) {
                            string t = currentSymbolTable->gentemp(a->type.inner);
                            emit(t, (yyvsp[-2].expr)->addr, *((yyvsp[-2].expr)->deRefName), ARR_IDX_ARG);
                            (yyvsp[-2].expr)->addr = t;
                            (yyvsp[-2].expr)->type = a->type.inner;
                        }

                        // assign to max datatype
                        DataType dt = max(a->type.base, b->type.base);
                        (yyval.expr)->addr = currentSymbolTable->gentemp(dt); // Create new temp with type int and store in addr
                        emit((yyval.expr)->addr, (yyvsp[-2].expr)->addr, (yyvsp[0].expr)->addr, SUB); // addexpr = addexpr1 - multexpr
                    }
#line 2196 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 42: /* shift_expression: additive_expression  */
#line 422 "asgn6_21CS10005_21CS30031.y"
                                          {(yyval.expr) = (yyvsp[0].expr);}
#line 2202 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 43: /* shift_expression: shift_expression LEFT_SHIFT additive_expression  */
#line 424 "asgn6_21CS10005_21CS30031.y"
                                                                      {}
#line 2208 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 44: /* shift_expression: shift_expression RIGHT_SHIFT additive_expression  */
#line 425 "asgn6_21CS10005_21CS30031.y"
                                                                       {}
#line 2214 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 45: /* relational_expression: shift_expression  */
#line 428 "asgn6_21CS10005_21CS30031.y"
                                           { (yyval.expr) = (yyvsp[0].expr); }
#line 2220 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 46: /* relational_expression: relational_expression LESS_THAN shift_expression  */
#line 429 "asgn6_21CS10005_21CS30031.y"
                                                                           {
                            (yyval.expr) = new E();
                            // Get operands
                            symbol* a = currentSymbolTable->lookup((yyvsp[-2].expr)->addr);
                            symbol* b = currentSymbolTable->lookup((yyvsp[0].expr)->addr);
                            // ARRAY case
                            if (b->type.base == ARRAY) {
                                string t = currentSymbolTable->gentemp(b->type.inner);
                                emit(t, (yyvsp[0].expr)->addr, *((yyvsp[0].expr)->deRefName), ARR_IDX_ARG);
                                (yyvsp[0].expr)->addr = t;
                                (yyvsp[0].expr)->type = b->type.inner;
                            }
                            if (a->type.base == ARRAY) {
                                string t = currentSymbolTable->gentemp(a->type.inner);
                                emit(t, (yyvsp[-2].expr)->addr, *((yyvsp[-2].expr)->deRefName), ARR_IDX_ARG);
                                (yyvsp[-2].expr)->addr = t;
                                (yyvsp[-2].expr)->type = a->type.inner;
                            }
                            (yyval.expr)->addr = currentSymbolTable->gentemp(); // Create new temp
                            (yyval.expr)->type = BOOL;
                            emit((yyval.expr)->addr, "1", "", ASSIGN);
                            (yyval.expr)->trueList = makelist(nextinstr); // Make list of next instruction
                            emit("", (yyvsp[-2].expr)->addr, (yyvsp[0].expr)->addr, GOTO_LT);  // if relexpr < shiftexpr goto ..
                            (yyval.expr)->falseList = makelist(nextinstr); // Make list of next instruction
                            emit("", "", "", GOTO);  // goto ..
                        }
#line 2251 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 47: /* relational_expression: relational_expression GREATER_THAN shift_expression  */
#line 455 "asgn6_21CS10005_21CS30031.y"
                                                                              {
                            (yyval.expr) = new E();
                            // Get operands
                            symbol* a = currentSymbolTable->lookup((yyvsp[-2].expr)->addr);
                            symbol* b = currentSymbolTable->lookup((yyvsp[0].expr)->addr);
                            // ARRAY case
                            if (b->type.base == ARRAY) {
                                string t = currentSymbolTable->gentemp(b->type.inner);
                                emit(t, (yyvsp[0].expr)->addr, *((yyvsp[0].expr)->deRefName), ARR_IDX_ARG);
                                (yyvsp[0].expr)->addr = t;
                                (yyvsp[0].expr)->type = b->type.inner;
                            }
                            if (a->type.base == ARRAY) {
                                string t = currentSymbolTable->gentemp(a->type.inner);
                                emit(t, (yyvsp[-2].expr)->addr, *((yyvsp[-2].expr)->deRefName), ARR_IDX_ARG);
                                (yyvsp[-2].expr)->addr = t;
                                (yyvsp[-2].expr)->type = a->type.inner;
                            }
                            (yyval.expr)->addr = currentSymbolTable->gentemp(); // Create new temp
                            (yyval.expr)->type = BOOL;
                            emit((yyval.expr)->addr, "1", "", ASSIGN);
                            (yyval.expr)->trueList = makelist(nextinstr); // Make list of next instruction
                            emit("", (yyvsp[-2].expr)->addr, (yyvsp[0].expr)->addr, GOTO_GT);  // if relexpr > shiftexpr goto ..
                            (yyval.expr)->falseList = makelist(nextinstr); // Make list of next instruction
                            emit("", "", "", GOTO);  // goto ..
                        }
#line 2282 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 48: /* relational_expression: relational_expression LESS_THAN_EQUAL shift_expression  */
#line 481 "asgn6_21CS10005_21CS30031.y"
                                                                                 {
                            (yyval.expr) = new E();
                            // Get operands
                            symbol* a = currentSymbolTable->lookup((yyvsp[-2].expr)->addr);
                            symbol* b = currentSymbolTable->lookup((yyvsp[0].expr)->addr);
                            // ARRAY case
                            if (b->type.base == ARRAY) {
                                string t = currentSymbolTable->gentemp(b->type.inner);
                                emit(t, (yyvsp[0].expr)->addr, *((yyvsp[0].expr)->deRefName), ARR_IDX_ARG);
                                (yyvsp[0].expr)->addr = t;
                                (yyvsp[0].expr)->type = b->type.inner;
                            }
                            if (a->type.base == ARRAY) {
                                string t = currentSymbolTable->gentemp(a->type.inner);
                                emit(t, (yyvsp[-2].expr)->addr, *((yyvsp[-2].expr)->deRefName), ARR_IDX_ARG);
                                (yyvsp[-2].expr)->addr = t;
                                (yyvsp[-2].expr)->type = a->type.inner;
                            }
                            (yyval.expr)->addr = currentSymbolTable->gentemp(); // Create new temp
                            (yyval.expr)->type = BOOL;
                            emit((yyval.expr)->addr, "1", "", ASSIGN);
                            (yyval.expr)->trueList = makelist(nextinstr); // Make list of next instruction
                            emit("", (yyvsp[-2].expr)->addr, (yyvsp[0].expr)->addr, GOTO_LT);  // if relexpr <= shiftexpr goto ..
                            (yyval.expr)->falseList = makelist(nextinstr); // Make list of next instruction
                            emit("", "", "", GOTO);  // goto ..
                        }
#line 2313 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 49: /* relational_expression: relational_expression GREATER_THAN_EQUAL shift_expression  */
#line 507 "asgn6_21CS10005_21CS30031.y"
                                                                                    {
                            (yyval.expr) = new E();
                            // Get operands
                            symbol* a = currentSymbolTable->lookup((yyvsp[-2].expr)->addr);
                            symbol* b = currentSymbolTable->lookup((yyvsp[0].expr)->addr);
                            // ARRAY case
                            if (b->type.base == ARRAY) {
                                string t = currentSymbolTable->gentemp(b->type.inner);
                                emit(t, (yyvsp[0].expr)->addr, *((yyvsp[0].expr)->deRefName), ARR_IDX_ARG);
                                (yyvsp[0].expr)->addr = t;
                                (yyvsp[0].expr)->type = b->type.inner;
                            }
                            if (a->type.base == ARRAY) {
                                string t = currentSymbolTable->gentemp(a->type.inner);
                                emit(t, (yyvsp[-2].expr)->addr, *((yyvsp[-2].expr)->deRefName), ARR_IDX_ARG);
                                (yyvsp[-2].expr)->addr = t;
                                (yyvsp[-2].expr)->type = a->type.inner;
                            }
                            (yyval.expr)->addr = currentSymbolTable->gentemp(); // Create new temp
                            (yyval.expr)->type = BOOL;
                            emit((yyval.expr)->addr, "1", "", ASSIGN);
                            (yyval.expr)->trueList = makelist(nextinstr); // Make list of next instruction
                            emit("", (yyvsp[-2].expr)->addr, (yyvsp[0].expr)->addr, GOTO_GTE);  // if relexpr >= shiftexpr goto ..
                            (yyval.expr)->falseList = makelist(nextinstr); // Make list of next instruction
                            emit("", "", "", GOTO);  // goto ..
                        }
#line 2344 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 50: /* equality_expression: relational_expression  */
#line 535 "asgn6_21CS10005_21CS30031.y"
                                            {(yyval.expr) = (yyvsp[0].expr);}
#line 2350 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 51: /* equality_expression: equality_expression EQUAL relational_expression  */
#line 536 "asgn6_21CS10005_21CS30031.y"
                                                                      {
                        (yyval.expr) = new E();
                        // Get operands
                        symbol* a = currentSymbolTable->lookup((yyvsp[-2].expr)->addr);
                        symbol* b = currentSymbolTable->lookup((yyvsp[0].expr)->addr);
                        // ARRAY case
                        if (b->type.base == ARRAY) {
                            string t = currentSymbolTable->gentemp(b->type.inner);
                            emit(t, (yyvsp[0].expr)->addr, *((yyvsp[0].expr)->deRefName), ARR_IDX_ARG);
                            (yyvsp[0].expr)->addr = t;
                            (yyvsp[0].expr)->type = b->type.inner;
                        }
                        if (a->type.base == ARRAY) {
                            string t = currentSymbolTable->gentemp(a->type.inner);
                            emit(t, (yyvsp[-2].expr)->addr, *((yyvsp[-2].expr)->deRefName), ARR_IDX_ARG);
                            (yyvsp[-2].expr)->addr = t;
                            (yyvsp[-2].expr)->type = a->type.inner;
                        }
                        (yyval.expr)->addr = currentSymbolTable->gentemp(); // Create new temp
                        (yyval.expr)->type = BOOL;
                        emit((yyval.expr)->addr, "1", "", ASSIGN);
                        (yyval.expr)->trueList = makelist(nextinstr); // Make list of next instruction
                        emit("", (yyvsp[-2].expr)->addr, (yyvsp[0].expr)->addr, GOTO_EQ);  // if relexpr >= shiftexpr goto ..
                        (yyval.expr)->falseList = makelist(nextinstr); // Make list of next instruction
                        emit("", "", "", GOTO);  // goto ..
                    }
#line 2381 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 52: /* equality_expression: equality_expression NOT_EQUAL relational_expression  */
#line 562 "asgn6_21CS10005_21CS30031.y"
                                                                          {
                        (yyval.expr) = new E();
                        // Get operands
                        symbol* a = currentSymbolTable->lookup((yyvsp[-2].expr)->addr);
                        symbol* b = currentSymbolTable->lookup((yyvsp[0].expr)->addr);
                        // ARRAY case
                        if (b->type.base == ARRAY) {
                            string t = currentSymbolTable->gentemp(b->type.inner);
                            emit(t, (yyvsp[0].expr)->addr, *((yyvsp[0].expr)->deRefName), ARR_IDX_ARG);
                            (yyvsp[0].expr)->addr = t;
                            (yyvsp[0].expr)->type = b->type.inner;
                        }
                        if (a->type.base == ARRAY) {
                            string t = currentSymbolTable->gentemp(a->type.inner);
                            emit(t, (yyvsp[-2].expr)->addr, *((yyvsp[-2].expr)->deRefName), ARR_IDX_ARG);
                            (yyvsp[-2].expr)->addr = t;
                            (yyvsp[-2].expr)->type = a->type.inner;
                        }
                        (yyval.expr)->addr = currentSymbolTable->gentemp(); // Create new temp
                        (yyval.expr)->type = BOOL;
                        emit((yyval.expr)->addr, "1", "", ASSIGN);
                        (yyval.expr)->trueList = makelist(nextinstr); // Make list of next instruction
                        emit("", (yyvsp[-2].expr)->addr, (yyvsp[0].expr)->addr, GOTO_NEQ);  // if relexpr >= shiftexpr goto ..
                        (yyval.expr)->falseList = makelist(nextinstr); // Make list of next instruction
                        emit("", "", "", GOTO);  // goto ..
                    }
#line 2412 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 53: /* AND_expression: equality_expression  */
#line 590 "asgn6_21CS10005_21CS30031.y"
                                          {(yyval.expr) = (yyvsp[0].expr);}
#line 2418 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 54: /* AND_expression: AND_expression AMPERSAND equality_expression  */
#line 591 "asgn6_21CS10005_21CS30031.y"
                                                                   {
                        (yyval.expr) = new E();
                        // Get operands
                        symbol* a = currentSymbolTable->lookup((yyvsp[-2].expr)->addr);
                        symbol* b = currentSymbolTable->lookup((yyvsp[0].expr)->addr);
                        // ARRAY case
                        if (b->type.base == ARRAY) {
                            string t = currentSymbolTable->gentemp(b->type.inner);
                            emit(t, (yyvsp[0].expr)->addr, *((yyvsp[0].expr)->deRefName), ARR_IDX_ARG);
                            (yyvsp[0].expr)->addr = t;
                            (yyvsp[0].expr)->type = b->type.inner;
                        }
                        if (a->type.base == ARRAY) {
                            string t = currentSymbolTable->gentemp(a->type.inner);
                            emit(t, (yyvsp[-2].expr)->addr, *((yyvsp[-2].expr)->deRefName), ARR_IDX_ARG);
                            (yyvsp[-2].expr)->addr = t;
                            (yyvsp[-2].expr)->type = a->type.inner;
                        }
                        (yyval.expr)->addr = currentSymbolTable->gentemp(); // Create new temp
                        emit((yyval.expr)->addr, (yyvsp[-2].expr)->addr, (yyvsp[0].expr)->addr, BW_AND); // andexpr = andexpr1 & eqexpr
                    }
#line 2444 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 55: /* exclusive_OR_expression: AND_expression  */
#line 614 "asgn6_21CS10005_21CS30031.y"
                                         {(yyval.expr) = (yyvsp[0].expr);}
#line 2450 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 56: /* exclusive_OR_expression: exclusive_OR_expression CARET AND_expression  */
#line 615 "asgn6_21CS10005_21CS30031.y"
                                                                       {
                            (yyval.expr) = new E();
                            // Get operands
                            symbol* a = currentSymbolTable->lookup((yyvsp[-2].expr)->addr);
                            symbol* b = currentSymbolTable->lookup((yyvsp[0].expr)->addr);
                            // ARRAY case
                            if (b->type.base == ARRAY) {
                                string t = currentSymbolTable->gentemp(b->type.inner);
                                emit(t, (yyvsp[0].expr)->addr, *((yyvsp[0].expr)->deRefName), ARR_IDX_ARG);
                                (yyvsp[0].expr)->addr = t;
                                (yyvsp[0].expr)->type = b->type.inner;
                            }
                            if (a->type.base == ARRAY) {
                                string t = currentSymbolTable->gentemp(a->type.inner);
                                emit(t, (yyvsp[-2].expr)->addr, *((yyvsp[-2].expr)->deRefName), ARR_IDX_ARG);
                                (yyvsp[-2].expr)->addr = t;
                                (yyvsp[-2].expr)->type = a->type.inner;
                            }
                            (yyval.expr)->addr = currentSymbolTable->gentemp(); // Create new temp
                            emit((yyval.expr)->addr, (yyvsp[-2].expr)->addr, (yyvsp[0].expr)->addr, BW_XOR); // xorexpr = xorexpr1 ^ andexpr
                        }
#line 2476 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 57: /* inclusive_OR_expression: exclusive_OR_expression  */
#line 638 "asgn6_21CS10005_21CS30031.y"
                                                  {(yyval.expr) = (yyvsp[0].expr);}
#line 2482 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 58: /* inclusive_OR_expression: inclusive_OR_expression PIPE exclusive_OR_expression  */
#line 639 "asgn6_21CS10005_21CS30031.y"
                                                                               {
                            (yyval.expr) = new E();
                            // Get operands
                            symbol* a = currentSymbolTable->lookup((yyvsp[-2].expr)->addr);
                            symbol* b = currentSymbolTable->lookup((yyvsp[0].expr)->addr);
                            // ARRAY case
                            if (b->type.base == ARRAY) {
                                string t = currentSymbolTable->gentemp(b->type.inner);
                                emit(t, (yyvsp[0].expr)->addr, *((yyvsp[0].expr)->deRefName), ARR_IDX_ARG);
                                (yyvsp[0].expr)->addr = t;
                                (yyvsp[0].expr)->type = b->type.inner;
                            }
                            if (a->type.base == ARRAY) {
                                string t = currentSymbolTable->gentemp(a->type.inner);
                                emit(t, (yyvsp[-2].expr)->addr, *((yyvsp[-2].expr)->deRefName), ARR_IDX_ARG);
                                (yyvsp[-2].expr)->addr = t;
                                (yyvsp[-2].expr)->type = a->type.inner;
                            }
                            (yyval.expr)->addr = currentSymbolTable->gentemp(); // Create new temp
                            emit((yyval.expr)->addr, (yyvsp[-2].expr)->addr, (yyvsp[0].expr)->addr, BW_OR); // orexpr = orexpr1 | xorexpr
                        }
#line 2508 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 59: /* logical_AND_expression: inclusive_OR_expression  */
#line 662 "asgn6_21CS10005_21CS30031.y"
                                                  {(yyval.expr) = (yyvsp[0].expr);}
#line 2514 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 60: /* logical_AND_expression: logical_AND_expression LOGICAL_AND M inclusive_OR_expression  */
#line 663 "asgn6_21CS10005_21CS30031.y"
                                                                                       {    // M is augmented non-terminal
                            (yyval.expr)->type = BOOL;
                            backpatch((yyvsp[-3].expr)->trueList, (yyvsp[-1].expr)->instr); // Backpatch
                            (yyval.expr)->trueList = (yyvsp[0].expr)->trueList; // Copy true list
                            (yyval.expr)->falseList = merge((yyvsp[-3].expr)->falseList, (yyvsp[0].expr)->falseList); // Merge false lists
                        }
#line 2525 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 61: /* logical_OR_expression: logical_AND_expression  */
#line 671 "asgn6_21CS10005_21CS30031.y"
                                                 {(yyval.expr) = (yyvsp[0].expr);}
#line 2531 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 62: /* logical_OR_expression: logical_OR_expression LOGICAL_OR M logical_AND_expression  */
#line 672 "asgn6_21CS10005_21CS30031.y"
                                                                                    {   // M is augmented non-terminal
                            (yyval.expr)->type = BOOL;
                            backpatch((yyvsp[-3].expr)->falseList, (yyvsp[-1].expr)->instr); // Backpatch
                            (yyval.expr)->falseList = (yyvsp[0].expr)->falseList; // Copy false list
                            (yyval.expr)->trueList = merge((yyvsp[-3].expr)->trueList, (yyvsp[0].expr)->trueList); // Merge true lists
                        }
#line 2542 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 63: /* conditional_expression: logical_OR_expression  */
#line 680 "asgn6_21CS10005_21CS30031.y"
                                                {(yyval.expr) = (yyvsp[0].expr);}
#line 2548 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 64: /* conditional_expression: logical_OR_expression N QUESTION M expression N COLON M conditional_expression  */
#line 681 "asgn6_21CS10005_21CS30031.y"
                                                                                                         {  // M and N are augmented non-terminals
                            symbol* a = currentSymbolTable->lookup((yyvsp[-4].expr)->addr);
                            (yyval.expr)->addr = currentSymbolTable->gentemp(a->type.base); // Create new temp
                            (yyval.expr)->type = a->type.base;
                            emit((yyval.expr)->addr, (yyvsp[0].expr)->addr, "", ASSIGN);
                            list<int> tempList = makelist(nextinstr); // Make list of next 
                            emit("", "", "", GOTO);
                            backpatch((yyvsp[-3].expr)->nextList, nextinstr); // Backpatch N2
                            emit((yyval.expr)->addr, (yyvsp[-4].expr)->addr, "", ASSIGN);
                            tempList = merge(tempList, makelist(nextinstr)); // Merge lists
                            emit("", "", "", GOTO);
                            backpatch((yyvsp[-7].expr)->nextList, nextinstr); // Backpatch N1
                            convIntToBool((yyvsp[-8].expr)); // Convert to boolean
                            backpatch((yyvsp[-8].expr)->trueList, (yyvsp[-5].expr)->instr); // Backpatch M1
                            backpatch((yyvsp[-8].expr)->falseList, (yyvsp[-1].expr)->instr); // Backpatch M2
                            backpatch((yyvsp[-7].expr)->nextList, nextinstr); // Backpatch N1
                        }
#line 2570 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 65: /* M: %empty  */
#line 701 "asgn6_21CS10005_21CS30031.y"
          { 
        (yyval.expr) = new E();
        (yyval.expr)->instr = nextinstr; // Has next instruction for backpatching
    }
#line 2579 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 66: /* N: %empty  */
#line 707 "asgn6_21CS10005_21CS30031.y"
          {
        (yyval.expr) = new E();
        (yyval.expr)->nextList = makelist(nextinstr); // Has next list for control flow
        emit("", "", "", GOTO); // Goto next instruction
    }
#line 2589 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 67: /* assignment_expression: conditional_expression  */
#line 714 "asgn6_21CS10005_21CS30031.y"
                                                 {(yyval.expr) = (yyvsp[0].expr);}
#line 2595 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 68: /* assignment_expression: unary_expression assignment_operator assignment_expression  */
#line 715 "asgn6_21CS10005_21CS30031.y"
                                                                                     {
                            // Get operands
                            symbol* a = currentSymbolTable->lookup((yyvsp[-2].expr)->addr);
                            symbol* b = currentSymbolTable->lookup((yyvsp[0].expr)->addr);
                            if ((yyvsp[-2].expr)->deRef == 0) {
                                if (a->type.base != ARRAY) emit((yyvsp[-2].expr)->addr, (yyvsp[0].expr)->addr, "", ASSIGN);
                                else emit((yyvsp[-2].expr)->addr, (yyvsp[0].expr)->addr, *((yyvsp[-2].expr)->deRefName), ARR_IDX_RES);
                            }
                            else emit(*((yyvsp[-2].expr)->deRefName), (yyvsp[0].expr)->addr, "", L_DEREF);
                            (yyval.expr) = (yyvsp[-2].expr);
                        }
#line 2611 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 69: /* assignment_operator: ASSIGN_t  */
#line 728 "asgn6_21CS10005_21CS30031.y"
                                   {}
#line 2617 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 70: /* assignment_operator: MULTIPLY_ASSIGN  */
#line 729 "asgn6_21CS10005_21CS30031.y"
                                          {}
#line 2623 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 71: /* assignment_operator: DIVIDE_ASSIGN  */
#line 730 "asgn6_21CS10005_21CS30031.y"
                                        {}
#line 2629 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 72: /* assignment_operator: MOD_ASSIGN  */
#line 731 "asgn6_21CS10005_21CS30031.y"
                                     {}
#line 2635 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 73: /* assignment_operator: PLUS_ASSIGN  */
#line 732 "asgn6_21CS10005_21CS30031.y"
                                      {}
#line 2641 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 74: /* assignment_operator: MINUS_ASSIGN  */
#line 733 "asgn6_21CS10005_21CS30031.y"
                                       {}
#line 2647 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 75: /* assignment_operator: LEFT_SHIFT_ASSIGN  */
#line 734 "asgn6_21CS10005_21CS30031.y"
                                            {}
#line 2653 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 76: /* assignment_operator: RIGHT_SHIFT_ASSIGN  */
#line 735 "asgn6_21CS10005_21CS30031.y"
                                             {}
#line 2659 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 77: /* assignment_operator: AND_ASSIGN  */
#line 736 "asgn6_21CS10005_21CS30031.y"
                                     {}
#line 2665 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 78: /* assignment_operator: XOR_ASSIGN  */
#line 737 "asgn6_21CS10005_21CS30031.y"
                                     {}
#line 2671 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 79: /* assignment_operator: OR_ASSIGN  */
#line 738 "asgn6_21CS10005_21CS30031.y"
                                    {}
#line 2677 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 80: /* expression: assignment_expression  */
#line 741 "asgn6_21CS10005_21CS30031.y"
                                    {(yyval.expr) = (yyvsp[0].expr);}
#line 2683 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 81: /* expression: expression COMMA assignment_expression  */
#line 742 "asgn6_21CS10005_21CS30031.y"
                                                     {}
#line 2689 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 82: /* constant_expression: conditional_expression  */
#line 745 "asgn6_21CS10005_21CS30031.y"
                                             {}
#line 2695 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 83: /* declaration: declaration_specifiers init_declarator_list SEMICOLON  */
#line 750 "asgn6_21CS10005_21CS30031.y"
                                                                    {
                DataType dt = (yyvsp[-2].types);
                int dtsize = (dt == INT)?(sizeof_int):((dt == CHAR)?(sizeof_char):((dt == FLOAT)?(sizeof_float):(-1)));
                vector<D*> v = *((yyvsp[-1].declList));
                for (auto it: v) {
                    D* cdec = it;
                    if (cdec->type == FUNCTION) {
                        currentSymbolTable = &globalSymbolTable;
                        emit(cdec->name, "", "", FUNC_END);
                        symbol* a = currentSymbolTable->lookup(cdec->name); // Function entry in Global Symbol Table
                        symbol* b = a->nestedTable->lookup("RETVAL", dt, cdec->pointers);
                        a->size = 0;
                        a->initValue = NULL;
                        continue;
                    }
                    // Not a function
                    symbol* c = currentSymbolTable->lookup(cdec->name, dt);
                    c->nestedTable = NULL;
                    if ((cdec->instrList).empty() && cdec->pointers == 0) {
                        c->type.base = dt;
                        c->size = dtsize;
                        if (cdec->initValue != NULL) {
                            string retvalue = cdec->initValue->addr;
                            emit(c->name, retvalue, "", ASSIGN);    // Assign value of return
                            c->initValue = currentSymbolTable->lookup(retvalue)->initValue;
                        }
                        else c->initValue = NULL;
                    }
                    else if(!((cdec->instrList).empty())) {
                        // ARRAY
                        c->type.base = ARRAY;
                        c->type.inner = dt;
                        c->type.dimList = cdec->instrList;
                        vector<int> temp=  c->type.dimList;
                        int tempSize = dtsize;
                        for (int i = 0; i < temp.size(); i++) tempSize *= temp[i];
                        currentSymbolTable->offset += tempSize;
                        c->size = tempSize;
                        currentSymbolTable->offset -= 4;
                    }
                    else if(cdec->pointers != 0) {
                        // POINTER
                        c->type.base = POINTER;
                        c->type.inner = dt;
                        c->type.pointers = cdec->pointers;
                        currentSymbolTable->offset += (sizeof_pointer - dtsize);
                        c->size = sizeof_pointer;
                    }

                }
            }
#line 2751 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 84: /* declaration: declaration_specifiers SEMICOLON  */
#line 801 "asgn6_21CS10005_21CS30031.y"
                                               {}
#line 2757 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 85: /* declaration_specifiers: storage_class_specifier declaration_specifiers  */
#line 804 "asgn6_21CS10005_21CS30031.y"
                                                                         {}
#line 2763 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 86: /* declaration_specifiers: storage_class_specifier  */
#line 805 "asgn6_21CS10005_21CS30031.y"
                                                  {}
#line 2769 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 87: /* declaration_specifiers: type_specifier declaration_specifiers  */
#line 806 "asgn6_21CS10005_21CS30031.y"
                                                                {}
#line 2775 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 88: /* declaration_specifiers: type_specifier  */
#line 807 "asgn6_21CS10005_21CS30031.y"
                                         {}
#line 2781 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 89: /* declaration_specifiers: type_qualifier declaration_specifiers  */
#line 808 "asgn6_21CS10005_21CS30031.y"
                                                                {}
#line 2787 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 90: /* declaration_specifiers: type_qualifier  */
#line 809 "asgn6_21CS10005_21CS30031.y"
                                         {}
#line 2793 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 91: /* declaration_specifiers: function_specifier declaration_specifiers  */
#line 810 "asgn6_21CS10005_21CS30031.y"
                                                                    {}
#line 2799 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 92: /* declaration_specifiers: function_specifier  */
#line 811 "asgn6_21CS10005_21CS30031.y"
                                             {}
#line 2805 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 93: /* init_declarator_list: init_declarator_list COMMA init_declarator  */
#line 814 "asgn6_21CS10005_21CS30031.y"
                                                                 { 
                        (yyvsp[-2].declList)->push_back((yyvsp[0].decl));
                        (yyval.declList) = (yyvsp[-2].declList);
                    }
#line 2814 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 94: /* init_declarator_list: init_declarator  */
#line 818 "asgn6_21CS10005_21CS30031.y"
                                      { (yyval.declList) = new vector<D*>(1, (yyvsp[0].decl)); }
#line 2820 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 95: /* init_declarator: declarator  */
#line 821 "asgn6_21CS10005_21CS30031.y"
                             {
                    (yyval.decl) = (yyvsp[0].decl);
                    (yyval.decl)->initValue = NULL; // No initial value given
                }
#line 2829 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 96: /* init_declarator: declarator ASSIGN_t initializer  */
#line 825 "asgn6_21CS10005_21CS30031.y"
                                                  {
                    (yyval.decl) = (yyvsp[-2].decl);
                    (yyval.decl)->initValue = (yyvsp[0].expr); // Initial value given
                }
#line 2838 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 97: /* storage_class_specifier: EXTERN  */
#line 831 "asgn6_21CS10005_21CS30031.y"
                                 {}
#line 2844 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 98: /* storage_class_specifier: STATIC  */
#line 832 "asgn6_21CS10005_21CS30031.y"
                                 {}
#line 2850 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 99: /* storage_class_specifier: AUTO  */
#line 833 "asgn6_21CS10005_21CS30031.y"
                               {}
#line 2856 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 100: /* storage_class_specifier: REGISTER  */
#line 834 "asgn6_21CS10005_21CS30031.y"
                                   {}
#line 2862 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 101: /* type_specifier: VOID_t  */
#line 838 "asgn6_21CS10005_21CS30031.y"
                         { (yyval.types) = VOID; }
#line 2868 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 102: /* type_specifier: CHAR_t  */
#line 839 "asgn6_21CS10005_21CS30031.y"
                         { (yyval.types) = CHAR; }
#line 2874 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 103: /* type_specifier: SHORT  */
#line 840 "asgn6_21CS10005_21CS30031.y"
                        {}
#line 2880 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 104: /* type_specifier: INT_t  */
#line 841 "asgn6_21CS10005_21CS30031.y"
                        { (yyval.types) = INT; }
#line 2886 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 105: /* type_specifier: LONG  */
#line 842 "asgn6_21CS10005_21CS30031.y"
                       {}
#line 2892 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 106: /* type_specifier: FLOAT_t  */
#line 843 "asgn6_21CS10005_21CS30031.y"
                          { (yyval.types) = FLOAT; }
#line 2898 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 107: /* type_specifier: DOUBLE  */
#line 844 "asgn6_21CS10005_21CS30031.y"
                         {}
#line 2904 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 108: /* type_specifier: SIGNED  */
#line 845 "asgn6_21CS10005_21CS30031.y"
                         {}
#line 2910 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 109: /* type_specifier: UNSIGNED  */
#line 846 "asgn6_21CS10005_21CS30031.y"
                           {}
#line 2916 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 110: /* type_specifier: BOOL_t  */
#line 847 "asgn6_21CS10005_21CS30031.y"
                         {}
#line 2922 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 111: /* type_specifier: COMPLEX  */
#line 848 "asgn6_21CS10005_21CS30031.y"
                          {}
#line 2928 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 112: /* type_specifier: IMAGINARY  */
#line 849 "asgn6_21CS10005_21CS30031.y"
                            {}
#line 2934 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 113: /* type_specifier: enum_specifier  */
#line 850 "asgn6_21CS10005_21CS30031.y"
                                 {}
#line 2940 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 114: /* specifier_qualifier_list: type_specifier specifier_qualifier_list_opt  */
#line 853 "asgn6_21CS10005_21CS30031.y"
                                                                          {}
#line 2946 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 115: /* specifier_qualifier_list: type_qualifier specifier_qualifier_list_opt  */
#line 854 "asgn6_21CS10005_21CS30031.y"
                                                                          {}
#line 2952 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 116: /* specifier_qualifier_list_opt: specifier_qualifier_list  */
#line 857 "asgn6_21CS10005_21CS30031.y"
                                                           {}
#line 2958 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 117: /* specifier_qualifier_list_opt: %empty  */
#line 858 "asgn6_21CS10005_21CS30031.y"
                                         {}
#line 2964 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 118: /* enum_specifier: ENUM identifier_opt CURLY_BRACKET_OPEN enumerator_list CURLY_BRACKET_CLOSE  */
#line 861 "asgn6_21CS10005_21CS30031.y"
                                                                                             {}
#line 2970 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 119: /* enum_specifier: ENUM identifier_opt CURLY_BRACKET_OPEN enumerator_list COMMA CURLY_BRACKET_CLOSE  */
#line 862 "asgn6_21CS10005_21CS30031.y"
                                                                                                   {}
#line 2976 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 120: /* enum_specifier: ENUM IDENTIFIER  */
#line 863 "asgn6_21CS10005_21CS30031.y"
                                  {}
#line 2982 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 121: /* identifier_opt: IDENTIFIER  */
#line 866 "asgn6_21CS10005_21CS30031.y"
                             {}
#line 2988 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 122: /* identifier_opt: %empty  */
#line 867 "asgn6_21CS10005_21CS30031.y"
                         {}
#line 2994 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 123: /* enumerator_list: enumerator  */
#line 870 "asgn6_21CS10005_21CS30031.y"
                             {}
#line 3000 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 124: /* enumerator_list: enumerator_list COMMA enumerator  */
#line 871 "asgn6_21CS10005_21CS30031.y"
                                                   {}
#line 3006 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 125: /* enumerator: IDENTIFIER  */
#line 874 "asgn6_21CS10005_21CS30031.y"
                         {}
#line 3012 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 126: /* enumerator: IDENTIFIER ASSIGN_t constant_expression  */
#line 875 "asgn6_21CS10005_21CS30031.y"
                                                      {}
#line 3018 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 127: /* type_qualifier: CONST  */
#line 878 "asgn6_21CS10005_21CS30031.y"
                        {}
#line 3024 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 128: /* type_qualifier: RESTRICT  */
#line 879 "asgn6_21CS10005_21CS30031.y"
                           {}
#line 3030 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 129: /* type_qualifier: VOLATILE  */
#line 880 "asgn6_21CS10005_21CS30031.y"
                           {}
#line 3036 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 130: /* function_specifier: INLINE  */
#line 883 "asgn6_21CS10005_21CS30031.y"
                             {}
#line 3042 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 131: /* declarator: pointer direct_declarator  */
#line 886 "asgn6_21CS10005_21CS30031.y"
                                        {
                (yyval.decl) = (yyvsp[0].decl);
                (yyval.decl)->pointers = (yyvsp[-1].iValue);
            }
#line 3051 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 132: /* declarator: direct_declarator  */
#line 890 "asgn6_21CS10005_21CS30031.y"
                                {
                // No pointer
                (yyval.decl) = (yyvsp[0].decl);
                (yyval.decl)->pointers = 0;
            }
#line 3061 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 133: /* direct_declarator: IDENTIFIER  */
#line 897 "asgn6_21CS10005_21CS30031.y"
                                 {
                        (yyval.decl) = new D();
                        (yyval.decl)->name = *((yyvsp[0].sValue));
                    }
#line 3070 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 134: /* direct_declarator: PARANTHESIS_OPEN declarator PARANTHESIS_CLOSE  */
#line 901 "asgn6_21CS10005_21CS30031.y"
                                                                    {}
#line 3076 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 135: /* direct_declarator: direct_declarator SQ_BRACKET_OPEN type_qualifier_list_opt SQ_BRACKET_CLOSE  */
#line 902 "asgn6_21CS10005_21CS30031.y"
                                                                                                 {
                        (yyvsp[-3].decl)->type = ARRAY;
                        (yyvsp[-3].decl)->inner = INT;
                        // Array of ints

                        (yyval.decl) = (yyvsp[-3].decl);
                        (yyval.decl)->instrList.push_back(0);
                    }
#line 3089 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 136: /* direct_declarator: direct_declarator SQ_BRACKET_OPEN type_qualifier_list_opt assignment_expression SQ_BRACKET_CLOSE  */
#line 910 "asgn6_21CS10005_21CS30031.y"
                                                                                                                       {
                        (yyvsp[-4].decl)->type = ARRAY;
                        (yyvsp[-4].decl)->inner  = INT;
                        // Array of ints
                        (yyval.decl) = (yyvsp[-4].decl);
                        (yyval.decl)->instrList.push_back(currentSymbolTable->lookup((yyvsp[-1].expr)->addr)->initValue->i);
                    }
#line 3101 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 137: /* direct_declarator: direct_declarator SQ_BRACKET_OPEN STATIC type_qualifier_list assignment_expression SQ_BRACKET_CLOSE  */
#line 917 "asgn6_21CS10005_21CS30031.y"
                                                                                                                          {}
#line 3107 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 138: /* direct_declarator: direct_declarator SQ_BRACKET_OPEN type_qualifier_list STATIC assignment_expression SQ_BRACKET_CLOSE  */
#line 918 "asgn6_21CS10005_21CS30031.y"
                                                                                                                          {}
#line 3113 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 139: /* direct_declarator: direct_declarator SQ_BRACKET_OPEN type_qualifier_list_opt ASTERISK SQ_BRACKET_CLOSE  */
#line 919 "asgn6_21CS10005_21CS30031.y"
                                                                                                          {
                        (yyvsp[-4].decl)->type = POINTER;
                        (yyvsp[-4].decl)->inner = INT;
                        (yyval.decl) = (yyvsp[-4].decl);
                    }
#line 3123 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 140: /* direct_declarator: direct_declarator PARANTHESIS_OPEN parameter_type_list_opt PARANTHESIS_CLOSE  */
#line 924 "asgn6_21CS10005_21CS30031.y"
                                                                                                   {
                        (yyval.decl) = (yyvsp[-3].decl);
                        (yyval.decl)->type = FUNCTION;
                        symbol* fContent = currentSymbolTable->lookup((yyvsp[-3].decl)->name, (yyvsp[-3].decl)->type);
                        symbolTable* fTable = new symbolTable();
                        fContent->nestedTable = fTable;
                        vector<P*> paramList = *((yyvsp[-1].paramList));
                        for (int i = 0; i < paramList.size(); i++) {
                            P* curr = paramList[i];
                            if (curr->type.base == ARRAY) {
                                // ARRAY type parameter
                                fTable->lookup(curr->name, curr->type.base);
                                fTable->lookup(curr->name)->type.inner = INT;
                                fTable->lookup(curr->name)->type.dimList.push_back(0);
                            }
                            else if (curr->type.base == POINTER) {
                                fTable->lookup(curr->name, curr->type.base);
                                fTable->lookup(curr->name)->type.inner = INT;
                                fTable->lookup(curr->name)->type.dimList.push_back(0);
                            }
                            else fTable->lookup(curr->name, curr->type.base);
                        }
                        currentSymbolTable = fTable;    // Switch to function symbol table
                        emit((yyval.decl)->name, "", "", FUNC_BEG);
                    }
#line 3153 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 141: /* direct_declarator: direct_declarator PARANTHESIS_OPEN identifier_list PARANTHESIS_CLOSE  */
#line 949 "asgn6_21CS10005_21CS30031.y"
                                                                                           {}
#line 3159 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 142: /* parameter_type_list_opt: parameter_type_list  */
#line 952 "asgn6_21CS10005_21CS30031.y"
                                             {}
#line 3165 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 143: /* parameter_type_list_opt: %empty  */
#line 953 "asgn6_21CS10005_21CS30031.y"
                                 { (yyval.paramList) = new vector<P*>(); }
#line 3171 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 144: /* type_qualifier_list_opt: type_qualifier_list  */
#line 956 "asgn6_21CS10005_21CS30031.y"
                                              {}
#line 3177 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 145: /* type_qualifier_list_opt: %empty  */
#line 957 "asgn6_21CS10005_21CS30031.y"
                                 {}
#line 3183 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 146: /* pointer: ASTERISK type_qualifier_list  */
#line 960 "asgn6_21CS10005_21CS30031.y"
                                       {}
#line 3189 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 147: /* pointer: ASTERISK  */
#line 961 "asgn6_21CS10005_21CS30031.y"
                   { (yyval.iValue) = 1;}
#line 3195 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 148: /* pointer: ASTERISK type_qualifier_list pointer  */
#line 962 "asgn6_21CS10005_21CS30031.y"
                                               {}
#line 3201 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 149: /* pointer: ASTERISK pointer  */
#line 963 "asgn6_21CS10005_21CS30031.y"
                           { (yyval.iValue) = 1+(yyvsp[0].iValue); }
#line 3207 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 150: /* type_qualifier_list: type_qualifier  */
#line 966 "asgn6_21CS10005_21CS30031.y"
                                     {}
#line 3213 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 151: /* type_qualifier_list: type_qualifier_list type_qualifier  */
#line 967 "asgn6_21CS10005_21CS30031.y"
                                                         {}
#line 3219 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 152: /* parameter_type_list: parameter_list  */
#line 970 "asgn6_21CS10005_21CS30031.y"
                                     {}
#line 3225 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 153: /* parameter_type_list: parameter_list COMMA ELLIPSIS  */
#line 971 "asgn6_21CS10005_21CS30031.y"
                                                    {}
#line 3231 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 154: /* parameter_list: parameter_declaration  */
#line 974 "asgn6_21CS10005_21CS30031.y"
                                        { (yyval.paramList) = new vector<P*> (1, (yyvsp[0].param)); }
#line 3237 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 155: /* parameter_list: parameter_list COMMA parameter_declaration  */
#line 975 "asgn6_21CS10005_21CS30031.y"
                                                             {
                    (yyvsp[-2].paramList)->push_back((yyvsp[0].param));
                    (yyval.paramList) = (yyvsp[-2].paramList);
                }
#line 3246 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 156: /* parameter_declaration: declaration_specifiers declarator  */
#line 981 "asgn6_21CS10005_21CS30031.y"
                                                            {
                            (yyval.param) = new P();
                            (yyval.param)->name = (yyvsp[0].decl)->name;
                            if ((yyvsp[0].decl)->type == ARRAY) {
                                (yyval.param)->type.base = ARRAY;
                                (yyval.param)->type.inner = (yyvsp[-1].types);
                            }
                            else if ((yyvsp[0].decl)->pc != 0) {
                                (yyval.param)->type.base = POINTER;
                                (yyval.param)->type.inner = (yyvsp[-1].types);
                            }
                            else (yyval.param)->type.base = (yyvsp[-1].types);
}
#line 3264 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 157: /* parameter_declaration: declaration_specifiers  */
#line 994 "asgn6_21CS10005_21CS30031.y"
                                                 {}
#line 3270 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 158: /* identifier_list: IDENTIFIER  */
#line 997 "asgn6_21CS10005_21CS30031.y"
                             {}
#line 3276 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 159: /* identifier_list: identifier_list COMMA IDENTIFIER  */
#line 998 "asgn6_21CS10005_21CS30031.y"
                                                   {}
#line 3282 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 160: /* type_name: specifier_qualifier_list  */
#line 1001 "asgn6_21CS10005_21CS30031.y"
                                       {}
#line 3288 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 161: /* initializer: assignment_expression  */
#line 1004 "asgn6_21CS10005_21CS30031.y"
                                    {(yyval.expr) = (yyvsp[0].expr);}
#line 3294 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 162: /* initializer: CURLY_BRACKET_OPEN initializer_list CURLY_BRACKET_CLOSE  */
#line 1005 "asgn6_21CS10005_21CS30031.y"
                                                                      {}
#line 3300 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 163: /* initializer: CURLY_BRACKET_OPEN initializer_list COMMA CURLY_BRACKET_CLOSE  */
#line 1006 "asgn6_21CS10005_21CS30031.y"
                                                                            {}
#line 3306 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 164: /* initializer_list: designation_opt initializer  */
#line 1009 "asgn6_21CS10005_21CS30031.y"
                                                  {}
#line 3312 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 165: /* initializer_list: initializer_list COMMA designation_opt initializer  */
#line 1010 "asgn6_21CS10005_21CS30031.y"
                                                                         {}
#line 3318 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 166: /* designation_opt: designation  */
#line 1013 "asgn6_21CS10005_21CS30031.y"
                              {}
#line 3324 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 167: /* designation_opt: %empty  */
#line 1014 "asgn6_21CS10005_21CS30031.y"
                         {}
#line 3330 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 168: /* designation: designator_list ASSIGN_t  */
#line 1017 "asgn6_21CS10005_21CS30031.y"
                                       {}
#line 3336 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 169: /* designator_list: designator  */
#line 1020 "asgn6_21CS10005_21CS30031.y"
                             {}
#line 3342 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 170: /* designator_list: designator_list designator  */
#line 1021 "asgn6_21CS10005_21CS30031.y"
                                             {}
#line 3348 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 171: /* designator: SQ_BRACKET_OPEN constant_expression SQ_BRACKET_CLOSE  */
#line 1024 "asgn6_21CS10005_21CS30031.y"
                                                                   {}
#line 3354 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 172: /* designator: PERIOD IDENTIFIER  */
#line 1025 "asgn6_21CS10005_21CS30031.y"
                                {}
#line 3360 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 173: /* statement: labeled_statement  */
#line 1029 "asgn6_21CS10005_21CS30031.y"
                                {}
#line 3366 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 174: /* statement: compound_statement  */
#line 1030 "asgn6_21CS10005_21CS30031.y"
                                 { (yyval.expr) = (yyvsp[0].expr); }
#line 3372 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 175: /* statement: expression_statement  */
#line 1031 "asgn6_21CS10005_21CS30031.y"
                                   { (yyval.expr) = (yyvsp[0].expr); }
#line 3378 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 176: /* statement: selection_statement  */
#line 1032 "asgn6_21CS10005_21CS30031.y"
                                  { (yyval.expr) = (yyvsp[0].expr); }
#line 3384 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 177: /* statement: iteration_statement  */
#line 1033 "asgn6_21CS10005_21CS30031.y"
                                  { (yyval.expr) = (yyvsp[0].expr); }
#line 3390 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 178: /* statement: jump_statement  */
#line 1034 "asgn6_21CS10005_21CS30031.y"
                             { (yyval.expr) = (yyvsp[0].expr); }
#line 3396 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 179: /* labeled_statement: IDENTIFIER COLON statement  */
#line 1037 "asgn6_21CS10005_21CS30031.y"
                                                 {}
#line 3402 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 180: /* labeled_statement: CASE constant_expression COLON statement  */
#line 1038 "asgn6_21CS10005_21CS30031.y"
                                                               {}
#line 3408 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 181: /* labeled_statement: DEFAULT COLON statement  */
#line 1039 "asgn6_21CS10005_21CS30031.y"
                                              {}
#line 3414 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 182: /* compound_statement: CURLY_BRACKET_OPEN block_item_list CURLY_BRACKET_CLOSE  */
#line 1042 "asgn6_21CS10005_21CS30031.y"
                                                                             {
                        (yyval.expr) = (yyvsp[-1].expr);
                    }
#line 3422 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 183: /* compound_statement: CURLY_BRACKET_OPEN CURLY_BRACKET_CLOSE  */
#line 1045 "asgn6_21CS10005_21CS30031.y"
                                                             {}
#line 3428 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 184: /* block_item_list: block_item  */
#line 1048 "asgn6_21CS10005_21CS30031.y"
                             {
                    (yyval.expr) = (yyvsp[0].expr);
                    backpatch((yyvsp[0].expr)->nextList, nextinstr);
                }
#line 3437 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 185: /* block_item_list: block_item_list M block_item  */
#line 1052 "asgn6_21CS10005_21CS30031.y"
                                               {
                    (yyval.expr) = new E();
                    backpatch((yyvsp[-2].expr)->nextList, (yyvsp[-1].expr)->instr);    // Backpatch to jump to 2
                    (yyval.expr)->nextList = (yyvsp[0].expr)->nextList;    // Copy next list
                }
#line 3447 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 186: /* block_item: declaration  */
#line 1059 "asgn6_21CS10005_21CS30031.y"
                          { (yyval.expr) = new E(); }
#line 3453 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 187: /* block_item: statement  */
#line 1060 "asgn6_21CS10005_21CS30031.y"
                        { (yyval.expr) = (yyvsp[0].expr); }
#line 3459 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 188: /* expression_statement: expression SEMICOLON  */
#line 1063 "asgn6_21CS10005_21CS30031.y"
                                               { (yyval.expr) = (yyvsp[-1].expr); }
#line 3465 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 189: /* expression_statement: SEMICOLON  */
#line 1064 "asgn6_21CS10005_21CS30031.y"
                                    { (yyval.expr) = new E(); }
#line 3471 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 190: /* selection_statement: IF PARANTHESIS_OPEN expression N PARANTHESIS_CLOSE M statement N  */
#line 1067 "asgn6_21CS10005_21CS30031.y"
                                                                                       { // M, N augmented to help with control flow
                        backpatch((yyvsp[-4].expr)->nextList, nextinstr);   // Backpatch to next instruction
                        convIntToBool((yyvsp[-5].expr));
                        backpatch((yyvsp[-5].expr)->trueList, (yyvsp[-2].expr)->instr);    // Backpatch to M
                        (yyval.expr) = new E();
                        (yyvsp[-1].expr)->nextList = merge((yyvsp[0].expr)->nextList, (yyvsp[-1].expr)->nextList); // Merge next lists
                        (yyval.expr)->nextList = merge((yyvsp[-5].expr)->falseList, (yyvsp[-1].expr)->nextList); // Merge false lists
                    }
#line 3484 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 191: /* selection_statement: IF PARANTHESIS_OPEN expression N PARANTHESIS_CLOSE M statement N ELSE M statement N  */
#line 1075 "asgn6_21CS10005_21CS30031.y"
                                                                                                          {
                        backpatch((yyvsp[-8].expr)->nextList, nextinstr);   // Backpatch to next instruction
                        convIntToBool((yyvsp[-9].expr));
                        backpatch((yyvsp[-9].expr)->trueList, (yyvsp[-6].expr)->instr);    // Backpatch to M1
                        backpatch((yyvsp[-9].expr)->falseList, (yyvsp[-2].expr)->instr);   // Backpatch to M2
                        // Merge next lists of statements and N
                        (yyval.expr)->nextList = merge((yyvsp[-5].expr)->nextList, (yyvsp[-4].expr)->nextList);
                        (yyval.expr)->nextList = merge((yyval.expr)->nextList, (yyvsp[-1].expr)->nextList);
                        (yyval.expr)->nextList = merge((yyval.expr)->nextList, (yyvsp[0].expr)->nextList);
                    }
#line 3499 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 192: /* selection_statement: SWITCH PARANTHESIS_OPEN expression PARANTHESIS_CLOSE statement  */
#line 1085 "asgn6_21CS10005_21CS30031.y"
                                                                                     {}
#line 3505 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 193: /* iteration_statement: WHILE M PARANTHESIS_OPEN expression N PARANTHESIS_CLOSE M statement  */
#line 1088 "asgn6_21CS10005_21CS30031.y"
                                                                                          {
                        (yyval.expr) = new E();
                        backpatch(makelist(nextinstr), (yyvsp[-6].expr)->instr);
                        emit("", "", "", GOTO);
                        backpatch((yyvsp[-3].expr)->nextList, nextinstr);
                        convIntToBool((yyvsp[-4].expr));  // Convert to bool
                        (yyval.expr)->nextList = (yyvsp[-4].expr)->falseList;
                        backpatch((yyvsp[-4].expr)->trueList, (yyvsp[-1].expr)->instr);
                        backpatch((yyvsp[0].expr)->nextList, (yyvsp[-6].expr)->instr);
                    }
#line 3520 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 194: /* iteration_statement: DO M statement M WHILE PARANTHESIS_OPEN expression N PARANTHESIS_CLOSE SEMICOLON  */
#line 1098 "asgn6_21CS10005_21CS30031.y"
                                                                                                       {
                        (yyval.expr) = new E();
                        backpatch((yyvsp[-2].expr)->nextList, nextinstr); // Backpatching
                        convIntToBool((yyvsp[-3].expr));
                        backpatch((yyvsp[-3].expr)->trueList, (yyvsp[-8].expr)->instr);    // Backpatch to M1
                        backpatch((yyvsp[-7].expr)->nextList, (yyvsp[-6].expr)->instr);    // Backpatch to M2
                        (yyval.expr)->nextList = (yyvsp[-3].expr)->falseList;  // Copy false list
                    }
#line 3533 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 195: /* iteration_statement: FOR PARANTHESIS_OPEN expression_statement M expression_statement N M expression N PARANTHESIS_CLOSE M statement  */
#line 1106 "asgn6_21CS10005_21CS30031.y"
                                                                                                                                      {
                        (yyval.expr) = new E();
                        (yyvsp[0].expr)->nextList = merge((yyvsp[0].expr)->nextList, makelist(nextinstr));
                        emit("", "", "", GOTO);
                        // Backpatching
                        backpatch((yyvsp[0].expr)->nextList, (yyvsp[-5].expr)->instr);
                        backpatch((yyvsp[-3].expr)->nextList, (yyvsp[-8].expr)->instr);
                        backpatch((yyvsp[-6].expr)->nextList, nextinstr);
                        convIntToBool((yyvsp[-7].expr));
                        backpatch((yyvsp[-7].expr)->trueList, (yyvsp[-1].expr)->instr);
                        (yyval.expr)->nextList = (yyvsp[-7].expr)->falseList;   // Loop exit
                    }
#line 3550 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 196: /* jump_statement: GOTO_t IDENTIFIER SEMICOLON  */
#line 1120 "asgn6_21CS10005_21CS30031.y"
                                              {}
#line 3556 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 197: /* jump_statement: CONTINUE SEMICOLON  */
#line 1121 "asgn6_21CS10005_21CS30031.y"
                                     {}
#line 3562 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 198: /* jump_statement: BREAK SEMICOLON  */
#line 1122 "asgn6_21CS10005_21CS30031.y"
                                  {}
#line 3568 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 199: /* jump_statement: RETURN_ SEMICOLON  */
#line 1123 "asgn6_21CS10005_21CS30031.y"
                                    {
                    if (currentSymbolTable->lookup("RETVAL")->type.base == VOID) emit("", "", "", RETURN);
                    (yyval.expr) = new E();
                }
#line 3577 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 200: /* jump_statement: RETURN_ expression SEMICOLON  */
#line 1127 "asgn6_21CS10005_21CS30031.y"
                                               {
                    if (currentSymbolTable->lookup("RETVAL")->type.base == currentSymbolTable->lookup((yyvsp[-1].expr)->addr)->type.base) emit((yyvsp[-1].expr)->addr, "", "", RETURN);
                    (yyval.expr) = new E();
                }
#line 3586 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 201: /* translation_unit: external_declaration  */
#line 1135 "asgn6_21CS10005_21CS30031.y"
                                           {}
#line 3592 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 202: /* translation_unit: translation_unit external_declaration  */
#line 1136 "asgn6_21CS10005_21CS30031.y"
                                                            {}
#line 3598 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 203: /* external_declaration: function_definition  */
#line 1139 "asgn6_21CS10005_21CS30031.y"
                                              {}
#line 3604 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 204: /* external_declaration: declaration  */
#line 1140 "asgn6_21CS10005_21CS30031.y"
                                      {}
#line 3610 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 205: /* function_definition: declaration_specifiers declarator declaration_list compound_statement  */
#line 1143 "asgn6_21CS10005_21CS30031.y"
                                                                                            {}
#line 3616 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 206: /* function_definition: function_prototype compound_statement  */
#line 1144 "asgn6_21CS10005_21CS30031.y"
                                                            {
                        currentSymbolTable = &globalSymbolTable;    // go to global symbol table
                        emit((yyvsp[-1].decl)->name, "", "", FUNC_END);
                    }
#line 3625 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 207: /* function_prototype: declaration_specifiers declarator  */
#line 1150 "asgn6_21CS10005_21CS30031.y"
                                                      {
                        DataType dt = (yyvsp[-1].types);
                        int dtSize = -1;
                        switch(dt) {
                            case(CHAR) : {
                                dtSize = sizeof_char;
                                break;
                            }
                            case(INT) : {
                                dtSize = sizeof_int;
                                break;
                            }
                            case(FLOAT) : {
                                dtSize = sizeof_float;
                                break;
                            }
                        }
                        D* curr = (yyvsp[0].decl);
                        symbol* sym = globalSymbolTable.lookup(curr->name);
                        if (curr->type == FUNCTION) {
                            symbol* retval = sym->nestedTable->lookup("RETVAL", dt, curr->pointers);
                            sym->size = 0;
                            sym->initValue = NULL;
                        }
                        (yyval.decl) = (yyvsp[0].decl);
                    }
#line 3656 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 208: /* declaration_list: declaration  */
#line 1178 "asgn6_21CS10005_21CS30031.y"
                                  {}
#line 3662 "asgn6_21CS10005_21CS30031.tab.c"
    break;

  case 209: /* declaration_list: declaration_list declaration  */
#line 1179 "asgn6_21CS10005_21CS30031.y"
                                                   {}
#line 3668 "asgn6_21CS10005_21CS30031.tab.c"
    break;


#line 3672 "asgn6_21CS10005_21CS30031.tab.c"

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
      yyerror (YY_("syntax error"));
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
  ++yynerrs;

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
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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

  return yyresult;
}

#line 1181 "asgn6_21CS10005_21CS30031.y"


// ERROR
void yyerror(string s) {
    cout << "ERROR: " << s << endl;
    cout << "At line: " << yylineno << endl;
    cout << "Near: " << yytext << endl;
}
