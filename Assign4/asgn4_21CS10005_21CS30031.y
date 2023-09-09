%{
    #include <stdio.h>
    extern int yylex();
    extern int yylineno;
    extern char *yytext;
    void yyerror(char *s);
%}

%union {
    int iValue;
    float fValue;
    char cValue;
    char *sValue;
}

%token AUTO ENUM RESTRICT UNSIGNED BREAK EXTERN RETURN VOID CASE FLOAT SHORT VOLATILE CHAR FOR SIGNED WHILE CONST GOTO SIZEOF BOOL CONTINUE IF STATIC COMPLEX DEFAULT INLINE STRUCT IMAGINARY DO INT SWITCH DOUBLE LONG TYPEDEF ELSE REGISTER UNION

%token PARANTHESIS_OPEN PARANTHESIS_CLOSE SQ_BRACKET_OPEN SQ_BRACKET_CLOSE CURLY_BRACKET_OPEN CURLY_BRACKET_CLOSE
%token PERIOD ARROW INCREMENT DECREMENT AMPERSAND ASTERISK PLUS MINUS TILDE EXCLAMATION SLASH PERCENT
%token LEFT_SHIFT RIGHT_SHIFT LESS_THAN GREATER_THAN LESS_THAN_EQUAL GREATER_THAN_EQUAL EQUAL NOT_EQUAL CARET PIPE
%token LOGICAL_AND LOGICAL_OR QUESTION COLON SEMICOLON ELLIPSIS
%token ASSIGN MULTIPLY_ASSIGN DIVIDE_ASSIGN MOD_ASSIGN PLUS_ASSIGN MINUS_ASSIGN LEFT_SHIFT_ASSIGN RIGHT_SHIFT_ASSIGN AND_ASSIGN XOR_ASSIGN OR_ASSIGN COMMA HASH

%token IDENTIFIER
%token <iValue> CONSTANT_INT
%token <fValue> CONSTANT_FLOAT
%token <cValue> CONSTANT_CHAR
%token <sValue> LITERAL

%nonassoc PARANTHESIS_CLOSE
%nonassoc ELSE

%start translation_unit

%%


constant            : CONSTANT_INT  {printf("constant: integer-constant\n");}
                    | CONSTANT_FLOAT{printf("constant: float-constant\n");}
                    | CONSTANT_CHAR {printf("constant: char-constant\n");}
                    ;

primary-expression  : IDENTIFIER    {printf("primary-expression: identifier\n");}
                    | constant      {printf("primary-expression: constant\n");}
                    | LITERAL       {printf("primary-expression: literal\n");}
                    | PARANTHESIS_OPEN expression PARANTHESIS_CLOSE {printf("primary-expression: ( expression )\n");}
                    ;

postfix-expression  : primary-expression {printf("postfix-expression: primary-expression\n")}
                    | postfix-expression SQ_BRACKET_OPEN expression SQ_BRACKET_CLOSE {printf("postfix-expression: postfix-expression [ expression ]\n");}
                    | postfix-expression PARANTHESIS_OPEN argument-expression-list-opt PARANTHESIS_CLOSE {printf("postfix-expression: postfix-expression ( argument-expression-list )\n");}
                    | postfix-expression PERIOD IDENTIFIER {printf("postfix-expression: postfix-expression . identifier\n");}
                    | postfix-expression ARROW IDENTIFIER {printf("postfix-expression: postfix-expression -> identifier\n");}
                    | postfix-expression INCREMENT {printf("postfix-expression: postfix-expression ++\n");}
                    | postfix-expression DECREMENT {printf("postfix-expression: postfix-expression --\n");}
                    | PARANTHESIS_OPEN type-name PARANTHESIS_CLOSE CURLY_BRACKET_OPEN initializer-list CURLY_BRACKET_CLOSE {printf("postfix-expression: ( type-name ) { initializer-list }\n");}
                    | PARANTHESIS_OPEN type-name PARANTHESIS_CLOSE CURLY_BRACKET_OPEN initializer-list COMMA CURLY_BRACKET_CLOSE {printf("postfix-expression: ( type-name ) { initializer-list , }\n");}
                    ;

argument-expression-list-opt : argument-expression-list {printf("argument-expression-list-opt: argument-expression-list\n");}
                            | {printf("argument-expression-list-opt: (empty)\n");}
                            ;

argument-expression-list    : assignment-expression {printf("argument-expression-list: assignment-expression\n");}
                            | argument-expression-list COMMA assignment-expression {printf("argument-expression-list: argument-expression-list , assignment-expression\n");}
                            ;

unary-expression    : postfix-expression {printf("unary-expression: postfix-expression\n");}
                    | INCREMENT unary-expression {printf("unary-expression: ++ unary-expression\n");}
                    | DECREMENT unary-expression {printf("unary-expression: -- unary-expression\n");}
                    | unary-operator cast-expression {printf("unary-expression: unary-operator cast-expression\n");}
                    | SIZEOF unary-expression {printf("unary-expression: sizeof unary-expression\n");}
                    | SIZEOF PARANTHESIS_OPEN type-name PARANTHESIS_CLOSE {printf("unary-expression: sizeof ( type-name )\n");}
                    ;

unary-operator      : AMPERSAND {printf("unary-operator: &\n");}
                    | ASTERISK  {printf("unary-operator: *\n");}
                    | PLUS      {printf("unary-operator: +\n");}
                    | MINUS     {printf("unary-operator: -\n");}
                    | TILDE     {printf("unary-operator: ~\n");}
                    | EXCLAMATION {printf("unary-operator: !\n");}
                    ;

cast-expression     : unary-expression {printf("cast-expression: unary-expression\n");} 
                    | PARANTHESIS_OPEN type-name PARANTHESIS_CLOSE cast-expression {printf("cast-expression: ( type-name ) cast-expression\n");}
                    ;

multiplicative-expression : cast-expression {printf("multiplicative-expression: cast-expression\n");}
                          | multiplicative-expression ASTERISK cast-expression {printf("multiplicative-expression: multiplicative-expression * cast-expression\n");}
                          | multiplicative-expression SLASH cast-expression {printf("multiplicative-expression: multiplicative-expression / cast-expression\n");}
                          | multiplicative-expression PERCENT cast-expression {printf("multiplicative-expression: multiplicative-expression %% cast-expression\n");}
                          ;

additive-expression : multiplicative-expression {printf("additive-expression: multiplicative-expression\n");}
                    | additive-expression PLUS multiplicative-expression {printf("additive-expression: additive-expression + multiplicative-expression\n");}
                    | additive-expression MINUS multiplicative-expression {printf("additive-expression: additive-expression - multiplicative-expression\n");}
                    ;

shift-expression    : additive-expression {printf("shift-expression: additive-expression\n");}
                    | shift-expression LEFT_SHIFT additive-expression {printf("shift-expression: shift-expression << additive-expression\n");}
                    | shift-expression RIGHT_SHIFT additive-expression {printf("shift-expression: shift-expression >> additive-expression\n");}
                    ;

relational-expression   : shift-expression {printf("relational-expression: shift-expression\n");}
                        | relational-expression LESS_THAN shift-expression {printf("relational-expression: relational-expression < shift-expression\n");}
                        | relational-expression GREATER_THAN shift-expression {printf("relational-expression: relational-expression > shift-expression\n");}
                        | relational-expression LESS_THAN_EQUAL shift-expression {printf("relational-expression: relational-expression <= shift-expression\n");}
                        | relational-expression GREATER_THAN_EQUAL shift-expression {printf("relational-expression: relational-expression >= shift-expression\n");}
                        ;

equality-expression : relational-expression {printf("equality-expression: relational-expression\n");}
                    | equality-expression EQUAL relational-expression {printf("equality-expression: equality-expression == relational-expression\n");}
                    | equality-expression NOT_EQUAL relational-expression {printf("equality-expression: equality-expression != relational-expression\n");}
                    ;

AND-expression      : equality-expression {printf("AND-expression: equality-expression\n");}
                    | AND-expression AMPERSAND equality-expression {printf("AND-expression: AND-expression & equality-expression\n");}
                    ;
            
exclusive-OR-expression : AND-expression {printf("exclusive-OR-expression: AND-expression\n");}
                        | exclusive-OR-expression CARET AND-expression {printf("exclusive-OR-expression: exclusive-OR-expression ^ AND-expression\n");}
                        ;

inclusive-OR-expression : exclusive-OR-expression {printf("inclusive-OR-expression: exclusive-OR-expression\n");}
                        | inclusive-OR-expression PIPE exclusive-OR-expression {printf("inclusive-OR-expression: inclusive-OR-expression | exclusive-OR-expression\n");}
                        ;

logical-AND-expression  : inclusive-OR-expression {printf("logical-AND-expression: inclusive-OR-expression\n");}
                        | logical-AND-expression LOGICAL_AND inclusive-OR-expression {printf("logical-AND-expression: logical-AND-expression && inclusive-OR-expression\n");}
                        ;

logical-OR-expression   : logical-AND-expression {printf("logical-OR-expression: logical-AND-expression\n");}
                        | logical-OR-expression LOGICAL_OR logical-AND-expression {printf("logical-OR-expression: logical-OR-expression || logical-AND-expression\n");}
                        ;

conditional-expression  : logical-OR-expression {printf("conditional-expression: logical-OR-expression\n");}
                        | logical-OR-expression QUESTION expression COLON conditional-expression {printf("conditional-expression: logical-OR-expression ? expression : conditional-expression\n");}
                        ;

assignment-expression   : conditional-expression {printf("assignment-expression: conditional-expression\n");}
                        | unary-expression assignment-operator assignment-expression {printf("assignment-expression: unary-expression assignment-operator assignment-expression\n");}
                        ;

assignment-operator     : ASSIGN {printf("assignment-operator: =\n");}
                        | MULTIPLY_ASSIGN {printf("assignment-operator: *=\n");}
                        | DIVIDE_ASSIGN {printf("assignment-operator: /=\n");}
                        | MOD_ASSIGN {printf("assignment-operator: %%=\n");}
                        | PLUS_ASSIGN {printf("assignment-operator: +=\n");}
                        | MINUS_ASSIGN {printf("assignment-operator: -=\n");}
                        | LEFT_SHIFT_ASSIGN {printf("assignment-operator: <<=\n");}
                        | RIGHT_SHIFT_ASSIGN {printf("assignment-operator: >>=\n");}
                        | AND_ASSIGN {printf("assignment-operator: &=\n");}
                        | XOR_ASSIGN {printf("assignment-operator: ^=\n");}
                        | OR_ASSIGN {printf("assignment-operator: |=\n");}
                        ;

expression  : assignment-expression {printf("expression: assignment-expression\n");}
            | expression COMMA assignment-expression {printf("expression: expression , assignment-expression\n");}
            ;

constant-expression : conditional-expression {printf("constant-expression: conditional-expression\n");}
                    ;



declaration : declaration-specifiers init-declarator-list-opt SEMICOLON {printf("declaration: declaration-specifiers ;\n");}
            ;

init-declarator-list-opt    : init-declarator-list {printf("init-declarator-list-opt: init-declarator-list\n");}
                            | {printf("init-declarator-list-opt: (empty)\n");}
                            ;

declaration-specifiers  : storage-class-specifier declaration-specifiers-opt {printf("declaration-specifiers: storage-class-specifier declaration-specifiers-opt\n");}
                        | type-specifier declaration-specifiers-opt {printf("declaration-specifiers: type-specifier declaration-specifiers-opt\n");}
                        | type-qualifier declaration-specifiers-opt {printf("declaration-specifiers: type-qualifier declaration-specifiers-opt\n");}
                        | function-specifier declaration-specifiers-opt {printf("declaration-specifiers: function-specifier declaration-specifiers-opt\n");}
                        ;

declaration-specifiers-opt  : declaration-specifiers {printf("declaration-specifiers-opt: declaration-specifiers\n");}
                            | {printf("declaration-specifiers-opt: (empty)\n");}
                            ;

init-declarator-list: init-declarator-list COMMA init-declarator {printf("init-declarator-list: init-declarator-list , init-declarator\n");}
                    | init-declarator {printf("init-declarator-list: init-declarator\n");}
                    ;

init-declarator : declarator {printf("init-declarator: declarator\n");}
                | declarator ASSIGN initializer {printf("init-declarator: declarator = initializer\n");}
                ;

storage-class-specifier : EXTERN {printf("storage-class-specifier: extern\n");}
                        | STATIC {printf("storage-class-specifier: static\n");}
                        | AUTO {printf("storage-class-specifier: auto\n");}
                        | REGISTER {printf("storage-class-specifier: register\n");}
                        ;

type-specifier  : VOID {printf("type-specifier: void\n");}
                | CHAR {printf("type-specifier: char\n");}
                | SHORT {printf("type-specifier: short\n");}
                | INT {printf("type-specifier: int\n");}
                | LONG {printf("type-specifier: long\n");}
                | FLOAT {printf("type-specifier: float\n");}
                | DOUBLE {printf("type-specifier: double\n");}
                | SIGNED {printf("type-specifier: signed\n");}
                | UNSIGNED {printf("type-specifier: unsigned\n");}
                | BOOL {printf("type-specifier: _Bool\n");}
                | COMPLEX {printf("type-specifier: _Complex\n");}
                | IMAGINARY {printf("type-specifier: _Imaginary\n");}
                | enum-specifier {printf("type-specifier: enum-specifier\n");}
                ;

specifier-qualifier-list    : type-specifier specifier-qualifier-list-opt {printf("specifier-qualifier-list: type-specifier specifier-qualifier-list-opt\n");}
                            | type-qualifier specifier-qualifier-list-opt {printf("specifier-qualifier-list: type-qualifier specifier-qualifier-list-opt\n");}
                            ;

specifier-qualifier-list-opt    : specifier-qualifier-list {printf("specifier-qualifier-list-opt: specifier-qualifier-list\n");}
                                | {printf("specifier-qualifier-list-opt: (empty)\n");}
                                ;

enum-specifier  : ENUM identifier-opt CURLY_BRACKET_OPEN enumerator-list CURLY_BRACKET_CLOSE {printf("enum-specifier: enum identifier-opt { enumerator-list }\n");}
                | ENUM identifier-opt CURLY_BRACKET_OPEN enumerator-list COMMA CURLY_BRACKET_CLOSE {printf("enum-specifier: enum identifier-opt { enumerator-list , }\n");}
                | ENUM IDENTIFIER {printf("enum-specifier: enum IDENTIFIER\n");}
                ;

identifier-opt  : IDENTIFIER {printf("identifier-opt: IDENTIFIER\n");}
                | {printf("identifier-opt: (empty)\n");}
                ;

enumerator-list : enumerator {printf("enumerator-list: enumerator\n");}
                | enumerator-list COMMA enumerator {printf("enumerator-list: enumerator-list , enumerator\n");}
                ;
// can't use CONSTANT_ENUM as it would conflict with IDENTIFIER
enumerator  : IDENTIFIER {printf("enumerator: enumeration-constant\n");}
            | IDENTIFIER ASSIGN constant-expression {printf("enumerator: enumeration-constant = constant-expression\n");}
            ;

type-qualifier  : CONST {printf("type-qualifier: const\n");}
                | RESTRICT {printf("type-qualifier: restrict\n");}
                | VOLATILE {printf("type-qualifier: volatile\n");}
                ;

function-specifier  : INLINE {printf("function-specifier: inline\n");}
                    ;

declarator  : pointer-opt direct-declarator {printf("declarator: pointer direct-declarator\n");}
            ;

pointer-opt : pointer {printf("pointer-opt: pointer\n");}
            | {printf("pointer-opt: (empty)\n");}
            ;

direct-declarator   : IDENTIFIER {printf("direct-declarator: identifier")}
                    | PARANTHESIS_OPEN declarator PARANTHESIS_CLOSE {printf("direct-declarator: ( declarator )\n");}
                    | direct-declarator SQ_BRACKET_OPEN type-qualifier-list-opt assignment-expression-opt SQ_BRACKET_CLOSE {printf("direct-declarator: direct-declarator [ type-qualifier-list-opt assignment-expression-opt ]\n");}
                    | direct-declarator SQ_BRACKET_OPEN STATIC type-qualifier-list-opt assignment-expression SQ_BRACKET_CLOSE {printf("direct-declarator: direct-declarator [ static type-qualifier-list-opt assignment-expression ]\n");}
                    | direct-declarator SQ_BRACKET_OPEN type-qualifier-list STATIC assignment-expression SQ_BRACKET_CLOSE {printf("direct-declarator: direct-declarator [ type-qualifier-list static assignment-expression ]\n");}
                    | direct-declarator SQ_BRACKET_OPEN type-qualifier-list-opt ASTERISK SQ_BRACKET_CLOSE {printf("direct-declarator: direct-declarator [ type-qualifier-list-opt * ]\n");}
                    | direct-declarator PARANTHESIS_OPEN parameter-type-list PARANTHESIS_CLOSE {printf("direct-declarator: direct-declarator ( parameter-type-list )\n");}
                    | direct-declarator PARANTHESIS_OPEN identifier-list-opt PARANTHESIS_CLOSE {printf("direct-declarator: direct-declarator ( identifier-list-opt )\n");}
                    ;

type-qualifier-list-opt : type-qualifier-list {printf("type-qualifier-list-opt: type-qualifier-list\n");}
                        | {printf("type-qualifier-list-opt: (empty)\n");}
                        ;

assignment-expression-opt   : assignment-expression {printf("assignment-expression-opt: assignment-expression\n");}
                            | {printf("assignment-expression-opt: (empty)\n");}
                            ;

identifier-list-opt : identifier-list {printf("identifier-list-opt: identifier-list\n");}
                    | {printf("identifier-list-opt: (empty)\n");}
                    ;

pointer : ASTERISK type-qualifier-list-opt {printf("pointer: * type-qualifier-list-opt\n");}
        | ASTERISK type-qualifier-list-opt pointer {printf("pointer: * type-qualifier-list-opt pointer\n");}
        ;

type-qualifier-list : type-qualifier {printf("type-qualifier-list: type-qualifier\n");}
                    | type-qualifier-list type-qualifier {printf("type-qualifier-list: type-qualifier-list type-qualifier\n");}
                    ;

parameter-type-list : parameter-list {printf("parameter-type-list: parameter-list\n");}
                    | parameter-list COMMA ELLIPSIS {printf("parameter-type-list: parameter-list , ...\n");}
                    ;

parameter-list  : parameter-declaration {printf("parameter-list: parameter-declaration\n");}
                | parameter-list COMMA parameter-declaration {printf("parameter-list: parameter-list , parameter-declaration\n");}
                ;

parameter-declaration   : declaration-specifiers declarator {printf("parameter-declaration: declaration-specifiers declarator\n");}
                        | declaration-specifiers {printf("parameter-declaration: declaration-specifiers\n");}
                        ;

identifier-list : IDENTIFIER {printf("identifier-list: identifier\n");}
                | identifier-list COMMA IDENTIFIER {printf("identifier-list: identifier-list , identifier\n");}
                ;

type-name   : specifier-qualifier-list {printf("type-name: specifier-qualifier-list abstract-declarator-opt\n");}
            ;

initializer : assignment-expression {printf("initializer: assignment-expression\n");}
            | CURLY_BRACKET_OPEN initializer-list CURLY_BRACKET_CLOSE {printf("initializer: { initializer-list }\n");}
            | CURLY_BRACKET_OPEN initializer-list COMMA CURLY_BRACKET_CLOSE {printf("initializer: { initializer-list , }\n");}
            ;

initializer-list    : designation-opt initializer {printf("initializer-list: designation-opt initializer\n");}
                    | initializer-list COMMA designation-opt initializer {printf("initializer-list: initializer-list , designation-opt initializer\n");}
                    ;

designation-opt : designation {printf("designation-opt: designation\n");}
                | {printf("designation-opt: (empty)\n");}
                ;

designation : designator-list ASSIGN {printf("designation: designator-list =\n");}
            ;

designator-list : designator {printf("designator-list: designator\n");}
                | designator-list designator {printf("designator-list: designator-list designator\n");}
                ;

designator  : SQ_BRACKET_OPEN constant-expression SQ_BRACKET_CLOSE {printf("designator: [ constant-expression ]\n");}
            | PERIOD IDENTIFIER {printf("designator: . identifier\n");}
            ;


statement   : labeled-statement {printf("statement: labeled-statement\n");}
            | compound-statement {printf("statement: compound-statement\n");}
            | expression-statement {printf("statement: expression-statement\n");}
            | selection-statement {printf("statement: selection-statement\n");}
            | iteration-statement {printf("statement: iteration-statement\n");}
            | jump-statement {printf("statement: jump-statement\n");}
            ;

labeled-statement   : IDENTIFIER COLON statement {printf("labeled-statement: identifier : statement\n");}
                    | CASE constant-expression COLON statement {printf("labeled-statement: case constant-expression : statement\n");}
                    | DEFAULT COLON statement {printf("labeled-statement: default : statement\n");}
                    ;

compound-statement  : CURLY_BRACKET_OPEN block-item-list-opt CURLY_BRACKET_CLOSE {printf("compound-statement: { block-item-list-opt }\n");}
                    ;

block-item-list-opt : block-item-list {printf("block-item-list-opt: block-item-list\n");}
                    | {printf("block-item-list-opt: (empty)\n");}
                    ;

block-item-list : block-item {printf("block-item-list: block-item\n");}
                | block-item-list block-item {printf("block-item-list: block-item-list block-item\n");}
                ;

block-item  : declaration {printf("block-item: declaration\n");}
            | statement {printf("block-item: statement\n");}
            ;

expression-statement    : expression-opt SEMICOLON {printf("expression-statement: expression-opt ;\n");}
                        ;

expression-opt  : expression {printf("expression-opt: expression\n");}
                | {printf("expression-opt: (empty)\n");}
                ;

selection-statement : IF PARANTHESIS_OPEN expression PARANTHESIS_CLOSE statement {printf("selection-statement: if ( expression ) statement\n");}
                    | IF PARANTHESIS_OPEN expression PARANTHESIS_CLOSE statement ELSE statement {printf("selection-statement: if ( expression ) statement else statement\n");}
                    | SWITCH PARANTHESIS_OPEN expression PARANTHESIS_CLOSE statement {printf("selection-statement: switch ( expression ) statement\n");}
                    ;

iteration-statement : WHILE PARANTHESIS_OPEN expression PARANTHESIS_CLOSE statement {printf("iteration-statement: while ( expression ) statement\n");}
                    | DO statement WHILE PARANTHESIS_OPEN expression PARANTHESIS_CLOSE SEMICOLON {printf("iteration-statement: do statement while ( expression ) ;\n");}
                    | FOR PARANTHESIS_OPEN expression-opt SEMICOLON expression-opt SEMICOLON expression-opt PARANTHESIS_CLOSE statement {printf("iteration-statement: for ( expression-opt ; expression-opt ; expression-opt ) statement\n");}
                    | FOR PARANTHESIS_OPEN declaration expression-opt SEMICOLON expression-opt PARANTHESIS_CLOSE statement {printf("iteration-statement: for ( declaration expression-opt ; expression-opt ) statement\n");}
                    ;

jump-statement  : GOTO IDENTIFIER SEMICOLON {printf("jump-statement: goto identifier ;\n");}
                | CONTINUE SEMICOLON {printf("jump-statement: continue ;\n");}
                | BREAK SEMICOLON {printf("jump-statement: break ;\n");}
                | RETURN expression-opt SEMICOLON {printf("jump-statement: return expression-opt ;\n");}
                ;



translation-unit    : external-declaration {printf("translation-unit: external-declaration\n");}
                    | translation-unit external-declaration {printf("translation-unit: translation-unit external-declaration\n");}
                    ;

external-declaration    : function-definition {printf("external-declaration: function-definition\n");}
                        | declaration {printf("external-declaration: declaration\n");}
                        ;

function-definition : declaration-specifiers declarator declaration-list-opt compound-statement {printf("function-definition: declaration-specifiers declarator declaration-list-opt compound-statement\n");}
                    ;

declaration-list-opt    : declaration-list {printf("declaration-list-opt: declaration-list\n");}
                        | {printf("declaration-list-opt: (empty)\n");}
                        ;

declaration-list    : declaration {printf("declaration-list: declaration\n");}
                    | declaration-list declaration {printf("declaration-list: declaration-list declaration\n");}
                    ;
%%

void yyerror(char *s) {
    printf("ERROR: %s\n\t\t at line: %d\n\tnear \" %s \"\n", s, yylineno, yytext);
}