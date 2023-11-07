/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_ASGN6_21CS10005_21CS30031_TAB_H_INCLUDED
# define YY_YY_ASGN6_21CS10005_21CS30031_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    AUTO = 258,                    /* AUTO  */
    ENUM = 259,                    /* ENUM  */
    RESTRICT = 260,                /* RESTRICT  */
    UNSIGNED = 261,                /* UNSIGNED  */
    BREAK = 262,                   /* BREAK  */
    EXTERN = 263,                  /* EXTERN  */
    VOID_t = 264,                  /* VOID_t  */
    CASE = 265,                    /* CASE  */
    FLOAT_t = 266,                 /* FLOAT_t  */
    SHORT = 267,                   /* SHORT  */
    VOLATILE = 268,                /* VOLATILE  */
    CHAR_t = 269,                  /* CHAR_t  */
    FOR = 270,                     /* FOR  */
    SIGNED = 271,                  /* SIGNED  */
    WHILE = 272,                   /* WHILE  */
    CONST = 273,                   /* CONST  */
    GOTO_t = 274,                  /* GOTO_t  */
    SIZEOF = 275,                  /* SIZEOF  */
    BOOL_t = 276,                  /* BOOL_t  */
    CONTINUE = 277,                /* CONTINUE  */
    IF = 278,                      /* IF  */
    STATIC = 279,                  /* STATIC  */
    COMPLEX = 280,                 /* COMPLEX  */
    RETURN_t = 281,                /* RETURN_t  */
    DEFAULT = 282,                 /* DEFAULT  */
    INLINE = 283,                  /* INLINE  */
    IMAGINARY = 284,               /* IMAGINARY  */
    DO = 285,                      /* DO  */
    INT_t = 286,                   /* INT_t  */
    SWITCH = 287,                  /* SWITCH  */
    DOUBLE = 288,                  /* DOUBLE  */
    LONG = 289,                    /* LONG  */
    ELSE = 290,                    /* ELSE  */
    REGISTER = 291,                /* REGISTER  */
    STRUCT = 292,                  /* STRUCT  */
    TYPEDEF = 293,                 /* TYPEDEF  */
    UNION = 294,                   /* UNION  */
    PARANTHESIS_OPEN = 295,        /* PARANTHESIS_OPEN  */
    PARANTHESIS_CLOSE = 296,       /* PARANTHESIS_CLOSE  */
    SQ_BRACKET_OPEN = 297,         /* SQ_BRACKET_OPEN  */
    SQ_BRACKET_CLOSE = 298,        /* SQ_BRACKET_CLOSE  */
    CURLY_BRACKET_OPEN = 299,      /* CURLY_BRACKET_OPEN  */
    CURLY_BRACKET_CLOSE = 300,     /* CURLY_BRACKET_CLOSE  */
    PERIOD = 301,                  /* PERIOD  */
    ARROW = 302,                   /* ARROW  */
    INCREMENT = 303,               /* INCREMENT  */
    DECREMENT = 304,               /* DECREMENT  */
    AMPERSAND = 305,               /* AMPERSAND  */
    ASTERISK = 306,                /* ASTERISK  */
    PLUS = 307,                    /* PLUS  */
    MINUS = 308,                   /* MINUS  */
    TILDE = 309,                   /* TILDE  */
    EXCLAMATION = 310,             /* EXCLAMATION  */
    SLASH = 311,                   /* SLASH  */
    PERCENT = 312,                 /* PERCENT  */
    LEFT_SHIFT = 313,              /* LEFT_SHIFT  */
    RIGHT_SHIFT = 314,             /* RIGHT_SHIFT  */
    LESS_THAN = 315,               /* LESS_THAN  */
    GREATER_THAN = 316,            /* GREATER_THAN  */
    LESS_THAN_EQUAL = 317,         /* LESS_THAN_EQUAL  */
    GREATER_THAN_EQUAL = 318,      /* GREATER_THAN_EQUAL  */
    EQUAL = 319,                   /* EQUAL  */
    NOT_EQUAL = 320,               /* NOT_EQUAL  */
    CARET = 321,                   /* CARET  */
    PIPE = 322,                    /* PIPE  */
    LOGICAL_AND = 323,             /* LOGICAL_AND  */
    LOGICAL_OR = 324,              /* LOGICAL_OR  */
    QUESTION = 325,                /* QUESTION  */
    COLON = 326,                   /* COLON  */
    SEMICOLON = 327,               /* SEMICOLON  */
    ELLIPSIS = 328,                /* ELLIPSIS  */
    ASSIGN_t = 329,                /* ASSIGN_t  */
    MULTIPLY_ASSIGN = 330,         /* MULTIPLY_ASSIGN  */
    DIVIDE_ASSIGN = 331,           /* DIVIDE_ASSIGN  */
    MOD_ASSIGN = 332,              /* MOD_ASSIGN  */
    PLUS_ASSIGN = 333,             /* PLUS_ASSIGN  */
    MINUS_ASSIGN = 334,            /* MINUS_ASSIGN  */
    LEFT_SHIFT_ASSIGN = 335,       /* LEFT_SHIFT_ASSIGN  */
    RIGHT_SHIFT_ASSIGN = 336,      /* RIGHT_SHIFT_ASSIGN  */
    AND_ASSIGN = 337,              /* AND_ASSIGN  */
    XOR_ASSIGN = 338,              /* XOR_ASSIGN  */
    OR_ASSIGN = 339,               /* OR_ASSIGN  */
    COMMA = 340,                   /* COMMA  */
    HASH = 341,                    /* HASH  */
    IDENTIFIER = 342,              /* IDENTIFIER  */
    CONSTANT_INT = 343,            /* CONSTANT_INT  */
    CONSTANT_FLOAT = 344,          /* CONSTANT_FLOAT  */
    CONSTANT_CHAR = 345,           /* CONSTANT_CHAR  */
    LITERAL = 346                  /* LITERAL  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 18 "asgn6_21CS10005_21CS30031.y"

    int iValue;     // Integer value
    char cValue;    // Character value
    string *sValue;   // String value
    float fValue;   // Float value
    void *ptr;  // Pointer type

    symbol *symb;       // Symbol
    symbolType *symbType;   // Symbol type
    DataType types;     // Expression type
    opcode op;      // Opcode

    E *expr;   // Expression
    D *decl;   // Declaration
    vector<D*> *declList; // Declaration list
    P* param;   // Parameter
    vector<P*> *paramList; // Parameter list

#line 174 "asgn6_21CS10005_21CS30031.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_ASGN6_21CS10005_21CS30031_TAB_H_INCLUDED  */
