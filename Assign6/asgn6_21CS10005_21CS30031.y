%{
    #include <iostream>
    #include "asgn6_21CS10005_21CS30031_translator.h"
    using namespace std;
    extern int yylex(); // in lex.yy.c : Lexical analyser
    extern int yylineno; // in lex.yy.c : Line number
    extern char *yytext;    // in lex.yy.c : Identified lexeme
    void yyerror(string s);  // in lex.yy.c : Error function

    extern int nextinstr;   // in asgn5_21CS10005_21CS30031_translator.cxx : Next instruction number
    extern quadArray quadTable;    // in asgn5_21CS10005_21CS30031_translator.cxx : Quad array
    extern symbolTable globalSymbolTable;   // in asgn5_21CS10005_21CS30031_translator.cxx : Global symbol table
    extern symbolTable* currentSymbolTable; // in asgn5_21CS10005_21CS30031_translator.cxx : Current symbol table
    extern vector<string> stringList; // in asgn5_21CS10005_21CS30031_target_translator.cxx : List of string constants
    int stringCount = 0; // Counts number of string constants encountered
%}

%union {
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
}

// TOKENS
%token AUTO ENUM RESTRICT UNSIGNED BREAK EXTERN VOID_t CASE FLOAT_t SHORT VOLATILE CHAR_t FOR SIGNED WHILE CONST GOTO_t SIZEOF BOOL_t CONTINUE IF STATIC COMPLEX RETURN_t DEFAULT INLINE IMAGINARY DO INT_t SWITCH DOUBLE LONG ELSE REGISTER STRUCT TYPEDEF UNION
%token PARANTHESIS_OPEN PARANTHESIS_CLOSE SQ_BRACKET_OPEN SQ_BRACKET_CLOSE CURLY_BRACKET_OPEN CURLY_BRACKET_CLOSE
%token PERIOD ARROW INCREMENT DECREMENT AMPERSAND ASTERISK PLUS MINUS TILDE EXCLAMATION SLASH PERCENT
%token LEFT_SHIFT RIGHT_SHIFT LESS_THAN GREATER_THAN LESS_THAN_EQUAL GREATER_THAN_EQUAL EQUAL NOT_EQUAL CARET PIPE
%token LOGICAL_AND LOGICAL_OR QUESTION COLON SEMICOLON ELLIPSIS
%token ASSIGN_t MULTIPLY_ASSIGN DIVIDE_ASSIGN MOD_ASSIGN PLUS_ASSIGN MINUS_ASSIGN LEFT_SHIFT_ASSIGN RIGHT_SHIFT_ASSIGN AND_ASSIGN XOR_ASSIGN OR_ASSIGN COMMA HASH

%token <sValue> IDENTIFIER    // Identifier, taken as symbol
%token <iValue> CONSTANT_INT    // Integer constant
%token <fValue> CONSTANT_FLOAT  // Floating point constant
%token <cValue> CONSTANT_CHAR   // Character constant
%token <sValue> LITERAL // String literal

%start translation_unit

// To handle else matching
%expect 1
%nonassoc ELSE

/* Types for all non-terminals */
%type <cValue> unary_operator // Unary operator non-terminals
%type <param> parameter_declaration   // Number of parameters non-terminals
%type <paramList> parameter_list parameter_type_list parameter_type_list_opt argument_expression_list // Parameter list types
%type <expr> expression primary_expression constant multiplicative_expression additive_expression shift_expression relational_expression equality_expression AND_expression exclusive_OR_expression inclusive_OR_expression logical_AND_expression logical_OR_expression conditional_expression assignment_expression  postfix_expression unary_expression cast_expression expression_statement  statement labeled_statement compound_statement selection_statement iteration_statement jump_statement block_item block_item_list initializer M N // Expression type non-terminals, statements included.
%type <iValue> pointer  // Pointers are taken as integer type
%type <types> type_specifier declaration_specifiers // Data Type types
%type <decl> direct_declarator initializer_list init_declarator declarator function_prototype // Declaration non-terminals
%type <declList> init_declarator_list // Non-terminals of Declaration list type

%%


primary_expression  : IDENTIFIER    {
                        $$ = new E();  // New expression
                        currentSymbolTable->lookup(*$1); // Get or store in Symbol Table
                        $$->addr = (*$1);   // Store expression as identifier name
                    }
                    | LITERAL       {
                        $$ = new E();  // New expression
                        $$->addr = ".LC"+to_string(stringCount++);
                        stringList.push_back(*($1));
                    }
                    | constant { $$ = $1; }
                    | PARANTHESIS_OPEN expression PARANTHESIS_CLOSE { $$ = $2; } // Assignment
                    ;

constant            : CONSTANT_INT  {
                        $$ = new E();   // New expression
                        $$->addr = currentSymbolTable->gentemp(INT); // Make INT Data Type temporary in ST
                        emit($$->addr, $1, ASSIGN); // Assign the const to the new temp
                        symbolVal* val = new symbolVal($1);
                        currentSymbolTable->lookup($$->addr)->initValue = val;   // Set initial value for constant
                    }
                    | CONSTANT_FLOAT{
                        $$ = new E();   // New expression
                        $$->addr = currentSymbolTable->gentemp(FLOAT); // Make FLOAT Data Type temporary in ST
                        emit($$->addr, $1, ASSIGN); // Assign the const to the new temp
                        symbolVal* val = new symbolVal($1);
                        currentSymbolTable->lookup($$->addr)->initValue = val;   // Set initial value for constant
                    }
                    | CONSTANT_CHAR {
                        $$ = new E();   // New expression
                        $$->addr = currentSymbolTable->gentemp(CHAR); // Make INT Data Type temporary in ST
                        emit($$->addr, $1, ASSIGN); // Assign the const to the new temp
                        symbolVal* val = new symbolVal($1);
                        currentSymbolTable->lookup($$->addr)->initValue = val;   // Set initial value for constant
                    }
                    ;

postfix_expression  : primary_expression { $$ = $1; }
                    | postfix_expression SQ_BRACKET_OPEN expression SQ_BRACKET_CLOSE {
                        string st = "";
                        if ($1->deRef == 0) {
                            st = currentSymbolTable->gentemp(INT);
                            emit(st, 0, ASSIGN);            // Set new temporary as  0
                            $1->deRefName = new string(st);
                        }
                        string t = currentSymbolTable->gentemp(INT); // new temp

                        emit(t, $3->addr, "", ASSIGN);
                        emit(t, t, "4", MULT);
                        emit(st, t, "", ASSIGN); // st = expression*4
                        $$ = $1;
                    }
                    | postfix_expression PARANTHESIS_OPEN PARANTHESIS_CLOSE {   // No arguments
                        // Make a new empty symbol table
                        globalSymbolTable.lookup($1->addr)->nestedTable;
                        emit($1->addr, "0", "", CALL);
                    }
                    | postfix_expression PARANTHESIS_OPEN argument_expression_list PARANTHESIS_CLOSE {
                        symbolTable* funcTable = globalSymbolTable.lookup($1->addr)->nestedTable;
                        vector<P*> params = *($3);    // Parameters
                        vector<symbol*> paramsArray = funcTable->symbols; // Get formal parameters

                        for(int i = 0; i < params.size(); i++) emit(params[i]->name, "", "", PARAM);  // Emit parameters

                        DataType returnType = funcTable->lookup("RETVAL")->type.base;   // Return value type
                        if (returnType == VOID) emit($1->addr, (int)params.size(), CALL); // Function call
                        else {
                            string returnVal = currentSymbolTable->gentemp(returnType);
                            emit($1->addr, to_string(params.size()), returnVal, CALL);     // Function call and value to be stored
                            $$ = new E();
                            $$->addr = returnVal;
                        }
                    }
                    | postfix_expression PERIOD IDENTIFIER {}
                    | postfix_expression ARROW IDENTIFIER {}
                    | postfix_expression INCREMENT {
                        $$ = new E();
                        symbolType t = currentSymbolTable->lookup($1->addr)->type;  // Get type
                        if (t.base == ARRAY) {
                            $$->addr = currentSymbolTable->gentemp(currentSymbolTable->lookup($1->addr)->type.inner);
                            emit($$->addr, $1->addr, *($1->deRefName), ARR_IDX_ARG);
                            string temp = currentSymbolTable->gentemp(t.inner);
                            emit(temp, $1->addr, *($1->deRefName), ARR_IDX_ARG);
                            emit($$->addr, temp, "", ASSIGN);
                            emit(temp, temp, "1", ADD);
                            emit($1->addr, temp, *($1->deRefName), ARR_IDX_RES);
                        }
                        else {
                            $$->addr = currentSymbolTable->gentemp(currentSymbolTable->lookup($1->addr)->type.base);
                            emit($$->addr, $1->addr, "", ASSIGN);   // Assign current expression current value
                            emit($1->addr, $1->addr, "1", ADD);     // Increment current value
                        }
                    }
                    | postfix_expression DECREMENT {
                        $$ = new E();
                        symbolType t = currentSymbolTable->lookup($1->addr)->type;  // Get type
                        if (t.base == ARRAY) {
                            $$->addr = currentSymbolTable->gentemp(currentSymbolTable->lookup($1->addr)->type.inner);
                            emit($$->addr, $1->addr, *($1->deRefName), ARR_IDX_ARG);
                            string temp = currentSymbolTable->gentemp(t.inner);
                            emit(temp, $1->addr, *($1->deRefName), ARR_IDX_ARG);
                            emit($$->addr, temp, "", ASSIGN);
                            emit(temp, temp, "1", SUB);
                            emit($1->addr, temp, *($1->deRefName), ARR_IDX_RES);
                        }
                        else {
                            $$->addr = currentSymbolTable->gentemp(currentSymbolTable->lookup($1->addr)->type.base);
                            emit($$->addr, $1->addr, "", ASSIGN);   // Assign current expression current value
                            emit($1->addr, $1->addr, "1", SUB);     // Decrement current value
                        }
                    }
                    | PARANTHESIS_OPEN type_name PARANTHESIS_CLOSE CURLY_BRACKET_OPEN initializer_list CURLY_BRACKET_CLOSE {}
                    | PARANTHESIS_OPEN type_name PARANTHESIS_CLOSE CURLY_BRACKET_OPEN initializer_list COMMA CURLY_BRACKET_CLOSE {}
                    ;

argument_expression_list    : assignment_expression {
                                // Get argument
                                P* arg = new P();
                                arg->name = $1->addr;
                                arg->type = currentSymbolTable->lookup($1->addr)->type;
                                $$ = new vector<P*>(1, arg);    // Make a new vector and store argument
                            }
                            | argument_expression_list COMMA assignment_expression {
                                // Get argument
                                P* arg = new P();
                                arg->name = $3->addr;
                                arg->type = currentSymbolTable->lookup($3->addr)->type;
                                //  Add to existing vector
                                $$ = $1;
                                $1->push_back(arg);
                            }
                            ;

unary_expression    : postfix_expression { $$ = $1; } // Pass the expression
                    | INCREMENT unary_expression {
                        $$ = new E();
                        symbolType t = currentSymbolTable->lookup($2->addr)->type;  // Get type
                        if (t.base == ARRAY) {
                            string temp = currentSymbolTable->gentemp(t.inner);
                            emit(temp, $2->addr, *($2->deRefName), ARR_IDX_ARG);
                            emit(temp, temp, "1", ADD);
                            emit($2->addr, temp, *($2->deRefName), ARR_IDX_RES);
                        }
                        else {
                            emit($2->addr, $2->addr, "1", ADD);
                        }
                        $$->addr = currentSymbolTable->gentemp(currentSymbolTable->lookup($2->addr)->type.base);
                        emit($$->addr, $2->addr, "", ASSIGN);   // Assign incremented value
                    }
                    | DECREMENT unary_expression {
                        $$ = new E();
                        symbolType t = currentSymbolTable->lookup($2->addr)->type;  // Get type
                        if (t.base == ARRAY) {
                            string temp = currentSymbolTable->gentemp(t.inner);
                            emit(temp, $2->addr, *($2->deRefName), ARR_IDX_ARG);
                            emit(temp, temp, "1", SUB);
                            emit($2->addr, temp, *($2->deRefName), ARR_IDX_RES);
                        }
                        else {
                            emit($2->addr, $2->addr, "1", SUB);
                        }
                        $$->addr = currentSymbolTable->gentemp(currentSymbolTable->lookup($2->addr)->type.base);
                        emit($$->addr, $2->addr, "", ASSIGN);   // Assign decremented value
                    }
                    | unary_operator cast_expression {
                        if ($1 == '&') {
                            $$ = new E();
                            $$->addr = currentSymbolTable->gentemp(POINTER);    // Pointer type
                            emit($$->addr, $2->addr, "", REFERENCE);    // Get address
                        }
                        else if ($1 == '*') {
                            $$ = new E();
                            $$->addr = currentSymbolTable->gentemp(INT);    // Pointers are integer values
                            $$->deRef = 1;  // Dereferenced
                            $$->deRefName = new string($2->addr); // Dereferenced name
                            emit($$->addr, $2->addr, "", DEREFERENCE);    // Get value
                        }
                        else if ($1 == '-') {
                            $$ = new E();
                            $$->addr = currentSymbolTable->gentemp(INT);
                            emit($$->addr, $2->addr, "", U_MINUS);    // Get negative value
                        }
                        else if ($1 == '!') {
                            $$ = new E();
                            $$->addr = currentSymbolTable->gentemp(INT);
                            int temp = nextinstr+2;
                            emit(to_string(temp), $2->addr, "0", GOTO_EQ);
                            temp = nextinstr+3;
                            emit(to_string(temp), "", "", GOTO);
                            emit($$->addr, "1", "", ASSIGN);
                            temp = nextinstr+2;
                            emit(to_string(temp), "", "", GOTO);
                            emit($$->addr, "0", "", ASSIGN);
                        }
                        // Bit operator ~ ignored
                    }
                    | SIZEOF unary_expression {}
                    | SIZEOF PARANTHESIS_OPEN type_name PARANTHESIS_CLOSE {}
                    ;

unary_operator      : AMPERSAND {$$ = '&';}
                    | ASTERISK  {$$ = '*';}
                    | PLUS      {$$ = '+';}
                    | MINUS     {$$ = '-';}
                    | TILDE     {$$ = '~';}
                    | EXCLAMATION {$$ = '!';}
                    ;

cast_expression     : unary_expression {$$ =  $1;} 
                    | PARANTHESIS_OPEN type_name PARANTHESIS_CLOSE cast_expression {}
                    ;

multiplicative_expression : cast_expression {
                                symbolType temp = currentSymbolTable->lookup($1->addr)->type;
                                if (temp.base == ARRAY) {
                                    string t = currentSymbolTable->gentemp(temp.inner);
                                    if ($1->deRefName != NULL) {
                                        emit(t, $1->addr, *($1->deRefName), ARR_IDX_ARG);
                                        $1->addr = t;
                                        $1->type = temp.inner;
                                    }
                                }
                                $$ = $1;
                          }
                          | multiplicative_expression ASTERISK cast_expression {
                            $$ = new E();
                            // Get operands
                            symbol* a = currentSymbolTable->lookup($1->addr);
                            symbol* b = currentSymbolTable->lookup($3->addr);
                            // ARRAY case
                            if (b->type.base == ARRAY) {
                                string t = currentSymbolTable->gentemp(b->type.inner);
                                emit(t, $3->addr, *($3->deRefName), ARR_IDX_ARG);
                                $3->addr = t;
                                $3->type = b->type.inner;
                            }
                            if (a->type.base == ARRAY) {
                                string t = currentSymbolTable->gentemp(a->type.inner);
                                emit(t, $1->addr, *($1->deRefName), ARR_IDX_ARG);
                                $1->addr = t;
                                $1->type = a->type.inner;
                            }

                            // assign to max datatype
                            DataType dt = max(a->type.base, b->type.base);
                            $$->addr = currentSymbolTable->gentemp(dt); // Create new temp with type int and store in addr
                            emit($$->addr, $1->addr, $3->addr, MULT); // multexpr = multexpr1 * castexpr
                          }
                          | multiplicative_expression SLASH cast_expression {
                            $$ = new E();
                            // Get operands
                            symbol* a = currentSymbolTable->lookup($1->addr);
                            symbol* b = currentSymbolTable->lookup($3->addr);
                            // ARRAY case
                            if (b->type.base == ARRAY) {
                                string t = currentSymbolTable->gentemp(b->type.inner);
                                emit(t, $3->addr, *($3->deRefName), ARR_IDX_ARG);
                                $3->addr = t;
                                $3->type = b->type.inner;
                            }
                            if (a->type.base == ARRAY) {
                                string t = currentSymbolTable->gentemp(a->type.inner);
                                emit(t, $1->addr, *($1->deRefName), ARR_IDX_ARG);
                                $1->addr = t;
                                $1->type = a->type.inner;
                            }

                            // assign to max datatype
                            DataType dt = max(a->type.base, b->type.base);
                            $$->addr = currentSymbolTable->gentemp(dt); // Create new temp with type int and store in addr
                            emit($$->addr, $1->addr, $3->addr, DIV); // multexpr = multexpr1 / castexpr
                          }
                          | multiplicative_expression PERCENT cast_expression {
                            $$ = new E();
                            // Get operands
                            symbol* a = currentSymbolTable->lookup($1->addr);
                            symbol* b = currentSymbolTable->lookup($3->addr);
                            // ARRAY case
                            if (b->type.base == ARRAY) {
                                string t = currentSymbolTable->gentemp(b->type.inner);
                                emit(t, $3->addr, *($3->deRefName), ARR_IDX_ARG);
                                $3->addr = t;
                                $3->type = b->type.inner;
                            }
                            if (a->type.base == ARRAY) {
                                string t = currentSymbolTable->gentemp(a->type.inner);
                                emit(t, $1->addr, *($1->deRefName), ARR_IDX_ARG);
                                $1->addr = t;
                                $1->type = a->type.inner;
                            }

                            // assign to max datatype
                            DataType dt = max(a->type.base, b->type.base);
                            $$->addr = currentSymbolTable->gentemp(dt); // Create new temp with type int and store in addr
                            emit($$->addr, $1->addr, $3->addr, MOD); // multexpr = multexpr1 % castexpr
                          }
                          ;

additive_expression : multiplicative_expression { $$ = $1; } // Pass 
                    | additive_expression PLUS multiplicative_expression {
                        $$ = new E();
                        // Get operands
                        symbol* a = currentSymbolTable->lookup($1->addr);
                        symbol* b = currentSymbolTable->lookup($3->addr);
                        // ARRAY case
                        if (b->type.base == ARRAY) {
                            string t = currentSymbolTable->gentemp(b->type.inner);
                            emit(t, $3->addr, *($3->deRefName), ARR_IDX_ARG);
                            $3->addr = t;
                            $3->type = b->type.inner;
                        }
                        if (a->type.base == ARRAY) {
                            string t = currentSymbolTable->gentemp(a->type.inner);
                            emit(t, $1->addr, *($1->deRefName), ARR_IDX_ARG);
                            $1->addr = t;
                            $1->type = a->type.inner;
                        }

                        // assign to max datatype
                        DataType dt = max(a->type.base, b->type.base);
                        $$->addr = currentSymbolTable->gentemp(dt); // Create new temp with type int and store in addr
                        emit($$->addr, $1->addr, $3->addr, ADD); // addexpr = addexpr1 + multexpr
                    }
                    | additive_expression MINUS multiplicative_expression {
                        $$ = new E();
                        // Get operands
                        symbol* a = currentSymbolTable->lookup($1->addr);
                        symbol* b = currentSymbolTable->lookup($3->addr);
                        // ARRAY case
                        if (b->type.base == ARRAY) {
                            string t = currentSymbolTable->gentemp(b->type.inner);
                            emit(t, $3->addr, *($3->deRefName), ARR_IDX_ARG);
                            $3->addr = t;
                            $3->type = b->type.inner;
                        }
                        if (a->type.base == ARRAY) {
                            string t = currentSymbolTable->gentemp(a->type.inner);
                            emit(t, $1->addr, *($1->deRefName), ARR_IDX_ARG);
                            $1->addr = t;
                            $1->type = a->type.inner;
                        }

                        // assign to max datatype
                        DataType dt = max(a->type.base, b->type.base);
                        $$->addr = currentSymbolTable->gentemp(dt); // Create new temp with type int and store in addr
                        emit($$->addr, $1->addr, $3->addr, SUB); // addexpr = addexpr1 - multexpr
                    }
                    ;

shift_expression    : additive_expression {$$ = $1;} // Pass
                    // Shift operations skipped
                    | shift_expression LEFT_SHIFT additive_expression {}
                    | shift_expression RIGHT_SHIFT additive_expression {}
                    ;

relational_expression   : shift_expression { $$ = $1; }
                        | relational_expression LESS_THAN shift_expression {
                            $$ = new E();
                            // Get operands
                            symbol* a = currentSymbolTable->lookup($1->addr);
                            symbol* b = currentSymbolTable->lookup($3->addr);
                            // ARRAY case
                            if (b->type.base == ARRAY) {
                                string t = currentSymbolTable->gentemp(b->type.inner);
                                emit(t, $3->addr, *($3->deRefName), ARR_IDX_ARG);
                                $3->addr = t;
                                $3->type = b->type.inner;
                            }
                            if (a->type.base == ARRAY) {
                                string t = currentSymbolTable->gentemp(a->type.inner);
                                emit(t, $1->addr, *($1->deRefName), ARR_IDX_ARG);
                                $1->addr = t;
                                $1->type = a->type.inner;
                            }
                            $$->addr = currentSymbolTable->gentemp(); // Create new temp
                            $$->type = BOOL;
                            emit($$->addr, "1", "", ASSIGN);
                            $$->trueList = makelist(nextinstr); // Make list of next instruction
                            emit("", $1->addr, $3->addr, GOTO_LT);  // if relexpr < shiftexpr goto ..
                            $$->falseList = makelist(nextinstr); // Make list of next instruction
                            emit("", "", "", GOTO);  // goto ..
                        }
                        | relational_expression GREATER_THAN shift_expression {
                            $$ = new E();
                            // Get operands
                            symbol* a = currentSymbolTable->lookup($1->addr);
                            symbol* b = currentSymbolTable->lookup($3->addr);
                            // ARRAY case
                            if (b->type.base == ARRAY) {
                                string t = currentSymbolTable->gentemp(b->type.inner);
                                emit(t, $3->addr, *($3->deRefName), ARR_IDX_ARG);
                                $3->addr = t;
                                $3->type = b->type.inner;
                            }
                            if (a->type.base == ARRAY) {
                                string t = currentSymbolTable->gentemp(a->type.inner);
                                emit(t, $1->addr, *($1->deRefName), ARR_IDX_ARG);
                                $1->addr = t;
                                $1->type = a->type.inner;
                            }
                            $$->addr = currentSymbolTable->gentemp(); // Create new temp
                            $$->type = BOOL;
                            emit($$->addr, "1", "", ASSIGN);
                            $$->trueList = makelist(nextinstr); // Make list of next instruction
                            emit("", $1->addr, $3->addr, GOTO_GT);  // if relexpr > shiftexpr goto ..
                            $$->falseList = makelist(nextinstr); // Make list of next instruction
                            emit("", "", "", GOTO);  // goto ..
                        }
                        | relational_expression LESS_THAN_EQUAL shift_expression {
                            $$ = new E();
                            // Get operands
                            symbol* a = currentSymbolTable->lookup($1->addr);
                            symbol* b = currentSymbolTable->lookup($3->addr);
                            // ARRAY case
                            if (b->type.base == ARRAY) {
                                string t = currentSymbolTable->gentemp(b->type.inner);
                                emit(t, $3->addr, *($3->deRefName), ARR_IDX_ARG);
                                $3->addr = t;
                                $3->type = b->type.inner;
                            }
                            if (a->type.base == ARRAY) {
                                string t = currentSymbolTable->gentemp(a->type.inner);
                                emit(t, $1->addr, *($1->deRefName), ARR_IDX_ARG);
                                $1->addr = t;
                                $1->type = a->type.inner;
                            }
                            $$->addr = currentSymbolTable->gentemp(); // Create new temp
                            $$->type = BOOL;
                            emit($$->addr, "1", "", ASSIGN);
                            $$->trueList = makelist(nextinstr); // Make list of next instruction
                            emit("", $1->addr, $3->addr, GOTO_LT);  // if relexpr <= shiftexpr goto ..
                            $$->falseList = makelist(nextinstr); // Make list of next instruction
                            emit("", "", "", GOTO);  // goto ..
                        }
                        | relational_expression GREATER_THAN_EQUAL shift_expression {
                            $$ = new E();
                            // Get operands
                            symbol* a = currentSymbolTable->lookup($1->addr);
                            symbol* b = currentSymbolTable->lookup($3->addr);
                            // ARRAY case
                            if (b->type.base == ARRAY) {
                                string t = currentSymbolTable->gentemp(b->type.inner);
                                emit(t, $3->addr, *($3->deRefName), ARR_IDX_ARG);
                                $3->addr = t;
                                $3->type = b->type.inner;
                            }
                            if (a->type.base == ARRAY) {
                                string t = currentSymbolTable->gentemp(a->type.inner);
                                emit(t, $1->addr, *($1->deRefName), ARR_IDX_ARG);
                                $1->addr = t;
                                $1->type = a->type.inner;
                            }
                            $$->addr = currentSymbolTable->gentemp(); // Create new temp
                            $$->type = BOOL;
                            emit($$->addr, "1", "", ASSIGN);
                            $$->trueList = makelist(nextinstr); // Make list of next instruction
                            emit("", $1->addr, $3->addr, GOTO_GTE);  // if relexpr >= shiftexpr goto ..
                            $$->falseList = makelist(nextinstr); // Make list of next instruction
                            emit("", "", "", GOTO);  // goto ..
                        }
                        ;

equality_expression : relational_expression {$$ = $1;} // Pass
                    | equality_expression EQUAL relational_expression {
                        $$ = new E();
                        // Get operands
                        symbol* a = currentSymbolTable->lookup($1->addr);
                        symbol* b = currentSymbolTable->lookup($3->addr);
                        // ARRAY case
                        if (b->type.base == ARRAY) {
                            string t = currentSymbolTable->gentemp(b->type.inner);
                            emit(t, $3->addr, *($3->deRefName), ARR_IDX_ARG);
                            $3->addr = t;
                            $3->type = b->type.inner;
                        }
                        if (a->type.base == ARRAY) {
                            string t = currentSymbolTable->gentemp(a->type.inner);
                            emit(t, $1->addr, *($1->deRefName), ARR_IDX_ARG);
                            $1->addr = t;
                            $1->type = a->type.inner;
                        }
                        $$->addr = currentSymbolTable->gentemp(); // Create new temp
                        $$->type = BOOL;
                        emit($$->addr, "1", "", ASSIGN);
                        $$->trueList = makelist(nextinstr); // Make list of next instruction
                        emit("", $1->addr, $3->addr, GOTO_EQ);  // if relexpr >= shiftexpr goto ..
                        $$->falseList = makelist(nextinstr); // Make list of next instruction
                        emit("", "", "", GOTO);  // goto ..
                    }
                    | equality_expression NOT_EQUAL relational_expression {
                        $$ = new E();
                        // Get operands
                        symbol* a = currentSymbolTable->lookup($1->addr);
                        symbol* b = currentSymbolTable->lookup($3->addr);
                        // ARRAY case
                        if (b->type.base == ARRAY) {
                            string t = currentSymbolTable->gentemp(b->type.inner);
                            emit(t, $3->addr, *($3->deRefName), ARR_IDX_ARG);
                            $3->addr = t;
                            $3->type = b->type.inner;
                        }
                        if (a->type.base == ARRAY) {
                            string t = currentSymbolTable->gentemp(a->type.inner);
                            emit(t, $1->addr, *($1->deRefName), ARR_IDX_ARG);
                            $1->addr = t;
                            $1->type = a->type.inner;
                        }
                        $$->addr = currentSymbolTable->gentemp(); // Create new temp
                        $$->type = BOOL;
                        emit($$->addr, "1", "", ASSIGN);
                        $$->trueList = makelist(nextinstr); // Make list of next instruction
                        emit("", $1->addr, $3->addr, GOTO_NEQ);  // if relexpr >= shiftexpr goto ..
                        $$->falseList = makelist(nextinstr); // Make list of next instruction
                        emit("", "", "", GOTO);  // goto ..
                    }
                    ;

AND_expression      : equality_expression {$$ = $1;} // Pass
                    | AND_expression AMPERSAND equality_expression {
                        $$ = new E();
                        // Get operands
                        symbol* a = currentSymbolTable->lookup($1->addr);
                        symbol* b = currentSymbolTable->lookup($3->addr);
                        // ARRAY case
                        if (b->type.base == ARRAY) {
                            string t = currentSymbolTable->gentemp(b->type.inner);
                            emit(t, $3->addr, *($3->deRefName), ARR_IDX_ARG);
                            $3->addr = t;
                            $3->type = b->type.inner;
                        }
                        if (a->type.base == ARRAY) {
                            string t = currentSymbolTable->gentemp(a->type.inner);
                            emit(t, $1->addr, *($1->deRefName), ARR_IDX_ARG);
                            $1->addr = t;
                            $1->type = a->type.inner;
                        }
                        $$->addr = currentSymbolTable->gentemp(); // Create new temp
                        emit($$->addr, $1->addr, $3->addr, BW_AND); // andexpr = andexpr1 & eqexpr
                    }
                    ;
            
exclusive_OR_expression : AND_expression {$$ = $1;} // Pass
                        | exclusive_OR_expression CARET AND_expression {
                            $$ = new E();
                            // Get operands
                            symbol* a = currentSymbolTable->lookup($1->addr);
                            symbol* b = currentSymbolTable->lookup($3->addr);
                            // ARRAY case
                            if (b->type.base == ARRAY) {
                                string t = currentSymbolTable->gentemp(b->type.inner);
                                emit(t, $3->addr, *($3->deRefName), ARR_IDX_ARG);
                                $3->addr = t;
                                $3->type = b->type.inner;
                            }
                            if (a->type.base == ARRAY) {
                                string t = currentSymbolTable->gentemp(a->type.inner);
                                emit(t, $1->addr, *($1->deRefName), ARR_IDX_ARG);
                                $1->addr = t;
                                $1->type = a->type.inner;
                            }
                            $$->addr = currentSymbolTable->gentemp(); // Create new temp
                            emit($$->addr, $1->addr, $3->addr, BW_XOR); // xorexpr = xorexpr1 ^ andexpr
                        }
                        ;

inclusive_OR_expression : exclusive_OR_expression {$$ = $1;} // Pass
                        | inclusive_OR_expression PIPE exclusive_OR_expression {
                            $$ = new E();
                            // Get operands
                            symbol* a = currentSymbolTable->lookup($1->addr);
                            symbol* b = currentSymbolTable->lookup($3->addr);
                            // ARRAY case
                            if (b->type.base == ARRAY) {
                                string t = currentSymbolTable->gentemp(b->type.inner);
                                emit(t, $3->addr, *($3->deRefName), ARR_IDX_ARG);
                                $3->addr = t;
                                $3->type = b->type.inner;
                            }
                            if (a->type.base == ARRAY) {
                                string t = currentSymbolTable->gentemp(a->type.inner);
                                emit(t, $1->addr, *($1->deRefName), ARR_IDX_ARG);
                                $1->addr = t;
                                $1->type = a->type.inner;
                            }
                            $$->addr = currentSymbolTable->gentemp(); // Create new temp
                            emit($$->addr, $1->addr, $3->addr, BW_OR); // orexpr = orexpr1 | xorexpr
                        }
                        ;

logical_AND_expression  : inclusive_OR_expression {$$ = $1;} // Pass
                        | logical_AND_expression LOGICAL_AND M inclusive_OR_expression {    // M is augmented non-terminal
                            $$->type = BOOL;
                            backpatch($1->trueList, $3->instr); // Backpatch
                            $$->trueList = $4->trueList; // Copy true list
                            $$->falseList = merge($1->falseList, $4->falseList); // Merge false lists
                        }
                        ;

logical_OR_expression   : logical_AND_expression {$$ = $1;} // Pass
                        | logical_OR_expression LOGICAL_OR M logical_AND_expression {   // M is augmented non-terminal
                            $$->type = BOOL;
                            backpatch($1->falseList, $3->instr); // Backpatch
                            $$->falseList = $4->falseList; // Copy false list
                            $$->trueList = merge($1->trueList, $4->trueList); // Merge true lists
                        }
                        ;

conditional_expression  : logical_OR_expression {$$ = $1;} // Pass
                        | logical_OR_expression N QUESTION M expression N COLON M conditional_expression {  // M and N are augmented non-terminals
                            symbol* a = currentSymbolTable->lookup($5->addr);
                            $$->addr = currentSymbolTable->gentemp(a->type.base); // Create new temp
                            $$->type = a->type.base;
                            emit($$->addr, $9->addr, "", ASSIGN);
                            list<int> tempList = makelist(nextinstr); // Make list of next 
                            emit("", "", "", GOTO);
                            backpatch($6->nextList, nextinstr); // Backpatch N2
                            emit($$->addr, $5->addr, "", ASSIGN);
                            tempList = merge(tempList, makelist(nextinstr)); // Merge lists
                            emit("", "", "", GOTO);
                            backpatch($2->nextList, nextinstr); // Backpatch N1
                            convIntToBool($1); // Convert to boolean
                            backpatch($1->trueList, $4->instr); // Backpatch M1
                            backpatch($1->falseList, $8->instr); // Backpatch M2
                            backpatch($2->nextList, nextinstr); // Backpatch N1
                        }
                        ;

/* AUGMENTED EMPTY NON-TERMINALS */
M: %empty { 
        $$ = new E();
        $$->instr = nextinstr; // Has next instruction for backpatching
    }
    ;

N: %empty {
        $$ = new E();
        $$->nextList = makelist(nextinstr); // Has next list for control flow
        emit("", "", "", GOTO); // Goto next instruction
    }
    ;

assignment_expression   : conditional_expression {$$ = $1;} // Pass
                        | unary_expression assignment_operator assignment_expression {
                            // Get operands
                            symbol* a = currentSymbolTable->lookup($1->addr);
                            symbol* b = currentSymbolTable->lookup($3->addr);
                            if ($1->deRef == 0) {
                                if (a->type.base != ARRAY) emit($1->addr, $3->addr, "", ASSIGN);
                                else emit($1->addr, $3->addr, *($1->deRefName), ARR_IDX_RES);
                            }
                            else emit(*($1->deRefName), $3->addr, "", L_DEREF);
                            $$ = $1;
                        }
                        ;

assignment_operator     : ASSIGN_t {}
                        | MULTIPLY_ASSIGN {}
                        | DIVIDE_ASSIGN {}
                        | MOD_ASSIGN {}
                        | PLUS_ASSIGN {}
                        | MINUS_ASSIGN {}
                        | LEFT_SHIFT_ASSIGN {}
                        | RIGHT_SHIFT_ASSIGN {}
                        | AND_ASSIGN {}
                        | XOR_ASSIGN {}
                        | OR_ASSIGN {}
                        ;

expression  : assignment_expression {$$ = $1;} // Pass
            | expression COMMA assignment_expression {}
            ;

constant_expression : conditional_expression {}
                    ;



declaration : declaration_specifiers init_declarator_list SEMICOLON {
                DataType dt = $1;
                int dtsize = (dt == INT)?(sizeof_int):((dt == CHAR)?(sizeof_char):((dt == FLOAT)?(sizeof_float):(-1)));
                vector<D*> v = *($2);
                for (vector<D*>::iterator it = v.begin(); it != v.end(); it++) {
                    D* cdec = *it;
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
            | declaration_specifiers SEMICOLON {}
            ;

declaration_specifiers  : storage_class_specifier declaration_specifiers {}
                        | storage_class_specifier {}
                        | type_specifier declaration_specifiers {}
                        | type_specifier {}
                        | type_qualifier declaration_specifiers {}
                        | type_qualifier {}
                        | function_specifier declaration_specifiers {}
                        | function_specifier {}
                        ;

init_declarator_list: init_declarator_list COMMA init_declarator { 
                        $1->push_back($3);
                        $$ = $1;
                    }
                    | init_declarator { $$ = new vector<D*>(1, $1); }
                    ;

init_declarator : declarator {
                    $$ = $1;
                    $$->initValue = NULL; // No initial value given
                }
                | declarator ASSIGN_t initializer {
                    $$ = $1;
                    $$->initValue = $3; // Initial value given
                }
                ;

storage_class_specifier : EXTERN {}
                        | STATIC {}
                        | AUTO {}
                        | REGISTER {}
                        ;

// Void, char, int and float are the only valid data types to be provided.
type_specifier  : VOID_t { $$ = VOID; }
                | CHAR_t { $$ = CHAR; }
                | SHORT {}
                | INT_t { $$ = INT; }
                | LONG {}
                | FLOAT_t { $$ = FLOAT; }
                | DOUBLE {}
                | SIGNED {}
                | UNSIGNED {}
                | BOOL_t {}
                | COMPLEX {}
                | IMAGINARY {}
                | enum_specifier {}
                ;

specifier_qualifier_list    : type_specifier specifier_qualifier_list_opt {}
                            | type_qualifier specifier_qualifier_list_opt {}
                            ;

specifier_qualifier_list_opt    : specifier_qualifier_list {}
                                | %empty {}
                                ;

enum_specifier  : ENUM identifier_opt CURLY_BRACKET_OPEN enumerator_list CURLY_BRACKET_CLOSE {}
                | ENUM identifier_opt CURLY_BRACKET_OPEN enumerator_list COMMA CURLY_BRACKET_CLOSE {}
                | ENUM IDENTIFIER {}
                ;

identifier_opt  : IDENTIFIER {}
                | %empty {}
                ;

enumerator_list : enumerator {}
                | enumerator_list COMMA enumerator {}
                ;
// can't use CONSTANT_ENUM as it would conflict with IDENTIFIER
enumerator  : IDENTIFIER {}
            | IDENTIFIER ASSIGN_t constant_expression {}
            ;

type_qualifier  : CONST {}
                | RESTRICT {}
                | VOLATILE {}
                ;

function_specifier  : INLINE {}
                    ;

declarator  : pointer direct_declarator {
                $$ = $2;
                $$->pointers = $1;
            }
            | direct_declarator {
                // No pointer
                $$ = $1;
                $$->pointers = 0;
            }
            ;

direct_declarator   : IDENTIFIER {
                        $$ = new D();
                        $$->name = *($1);
                    }
                    | PARANTHESIS_OPEN declarator PARANTHESIS_CLOSE {} 
                    | direct_declarator SQ_BRACKET_OPEN type_qualifier_list_opt SQ_BRACKET_CLOSE {
                        $1->type = ARRAY;
                        $1->inner = INT;
                        // Array of ints

                        $$ = $1;
                        $$->instrList.push_back(0);
                    }
                    | direct_declarator SQ_BRACKET_OPEN type_qualifier_list_opt assignment_expression SQ_BRACKET_CLOSE {
                        $1->type = ARRAY;
                        $1->inner  = INT;
                        // Array of ints
                        $$ = $1;
                        $$->instrList.push_back(currentSymbolTable->lookup($4->addr)->initValue->i);
                    }
                    | direct_declarator SQ_BRACKET_OPEN STATIC type_qualifier_list assignment_expression SQ_BRACKET_CLOSE {}
                    | direct_declarator SQ_BRACKET_OPEN type_qualifier_list STATIC assignment_expression SQ_BRACKET_CLOSE {}
                    | direct_declarator SQ_BRACKET_OPEN type_qualifier_list_opt ASTERISK SQ_BRACKET_CLOSE {
                        $1->type = POINTER;
                        $1->inner = INT;
                        $$ = $1;
                    }
                    | direct_declarator PARANTHESIS_OPEN parameter_type_list_opt PARANTHESIS_CLOSE {
                        $$ = $1;
                        $$->type = FUNCTION;
                        symbol* fContent = currentSymbolTable->lookup($1->name, $1->type);
                        symbolTable* fTable = new symbolTable();
                        fContent->nestedTable = fTable;
                        vector<P*> paramList = *($3);
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
                        emit($$->name, "", "", FUNC_BEG);
                    }
                    | direct_declarator PARANTHESIS_OPEN identifier_list PARANTHESIS_CLOSE {}
                    ;

parameter_type_list_opt: parameter_type_list {}
                        | %empty { $$ = new vector<P*>(); }
                        ;

type_qualifier_list_opt : type_qualifier_list {}
                        | %empty {}
                        ;

pointer : ASTERISK type_qualifier_list {}
        | ASTERISK { $$ = 1;}
        | ASTERISK type_qualifier_list pointer {}
        | ASTERISK pointer { $$ = 1+$2; }
        ;

type_qualifier_list : type_qualifier {}
                    | type_qualifier_list type_qualifier {}
                    ;

parameter_type_list : parameter_list {}
                    | parameter_list COMMA ELLIPSIS {}
                    ;

parameter_list  : parameter_declaration { $$ = new vector<P*> (1, $1); }
                | parameter_list COMMA parameter_declaration {
                    $1->push_back($3);
                    $$ = $1;
                }
                ;

parameter_declaration   : declaration_specifiers declarator {
                            $$ = new P();
                            $$->name = $2->name;
                            if ($2->type == ARRAY) {
                                $$->type.base = ARRAY;
                                $$->type.inner = $1;
                            }
                            else if ($2->pc != 0) {
                                $$->type.base = POINTER;
                                $$->type.inner = $1;
                            }
                            else $$->type.base = $1;
}
                        | declaration_specifiers {}
                        ;

identifier_list : IDENTIFIER {}
                | identifier_list COMMA IDENTIFIER {}
                ;

type_name   : specifier_qualifier_list {}
            ;

initializer : assignment_expression {$$ = $1;}
            | CURLY_BRACKET_OPEN initializer_list CURLY_BRACKET_CLOSE {}
            | CURLY_BRACKET_OPEN initializer_list COMMA CURLY_BRACKET_CLOSE {}
            ;

initializer_list    : designation_opt initializer {}
                    | initializer_list COMMA designation_opt initializer {}
                    ;

designation_opt : designation {}
                | %empty {}
                ;

designation : designator_list ASSIGN_t {}
            ;

designator_list : designator {}
                | designator_list designator {}
                ;

designator  : SQ_BRACKET_OPEN constant_expression SQ_BRACKET_CLOSE {}
            | PERIOD IDENTIFIER {}
            ;


statement   : labeled_statement {}
            | compound_statement { $$ = $1; }
            | expression_statement { $$ = $1; }
            | selection_statement { $$ = $1; }
            | iteration_statement { $$ = $1; }
            | jump_statement { $$ = $1; }
            ;

labeled_statement   : IDENTIFIER COLON statement {}
                    | CASE constant_expression COLON statement {}
                    | DEFAULT COLON statement {}
                    ;

compound_statement  : CURLY_BRACKET_OPEN block_item_list CURLY_BRACKET_CLOSE {
                        $$ = $2;
                    }
                    | CURLY_BRACKET_OPEN CURLY_BRACKET_CLOSE {}
                    ;

block_item_list : block_item {
                    $$ = $1;
                    backpatch($1->nextList, nextinstr);
                }
                | block_item_list M block_item {
                    $$ = new E();
                    backpatch($1->nextList, $2->instr);    // Backpatch to jump to 2
                    $$->nextList = $3->nextList;    // Copy next list
                }
                ;

block_item  : declaration { $$ = new E(); }
            | statement { $$ = $1; }
            ;

expression_statement    : expression SEMICOLON { $$ = $1; }
                        | SEMICOLON { $$ = new E(); }
                        ;

selection_statement : IF PARANTHESIS_OPEN expression N PARANTHESIS_CLOSE M statement N { // M, N augmented to help with control flow
                        backpatch($4->nextList, nextinstr);   // Backpatch to next instruction
                        convIntToBool($3);
                        backpatch($3->trueList, $6->instr);    // Backpatch to M
                        $$ = new E();
                        $7->nextList = merge($8->nextList, $7->nextList); // Merge next lists
                        $$->nextList = merge($3->falseList, $7->nextList); // Merge false lists
                    }
                    | IF PARANTHESIS_OPEN expression N PARANTHESIS_CLOSE M statement N ELSE M statement N {
                        backpatch($4->nextList, nextinstr);   // Backpatch to next instruction
                        convIntToBool($3);
                        backpatch($3->trueList, $6->instr);    // Backpatch to M1
                        backpatch($3->falseList, $10->instr);   // Backpatch to M2
                        // Merge next lists of statements and N
                        $$ = new E();
                        $$->nextList = merge($7->nextList, $8->nextList);
                        $$->nextList = merge($$->nextList, $11->nextList);
                        $$->nextList = merge($$->nextList, $12->nextList);
                    }
                    | SWITCH PARANTHESIS_OPEN expression PARANTHESIS_CLOSE statement {}
                    ;

iteration_statement : WHILE M PARANTHESIS_OPEN expression N PARANTHESIS_CLOSE M statement {
                        $$ = new E();
                        backpatch(makelist(nextinstr), $2->instr);
                        emit("", "", "", GOTO);
                        backpatch($5->nextList, nextinstr);
                        convIntToBool($4);  // Convert to bool
                        $$->nextList = $4->falseList;
                        backpatch($4->trueList, $7->instr);
                        backpatch($8->nextList, $2->instr);
                    }
                    | DO M statement M WHILE PARANTHESIS_OPEN expression N PARANTHESIS_CLOSE SEMICOLON {
                        $$ = new E();
                        backpatch($8->nextList, nextinstr); // Backpatching
                        convIntToBool($7);
                        backpatch($7->trueList, $2->instr);    // Backpatch to M1
                        backpatch($3->nextList, $4->instr);    // Backpatch to M2
                        $$->nextList = $7->falseList;  // Copy false list
                    }
                    | FOR PARANTHESIS_OPEN expression_statement M expression_statement N M expression N PARANTHESIS_CLOSE M statement {
                        $$ = new E();
                        emit("", "", "", GOTO);
                        $12->nextList = merge($12->nextList, makelist(nextinstr-1));
                        // Backpatching
                        backpatch($12->nextList, $7->instr);
                        backpatch($9->nextList, $4->instr);
                        backpatch($6->nextList, nextinstr);
                        convIntToBool($5);
                        backpatch($5->trueList, $11->instr);
                        $$->nextList = $5->falseList;   // Loop exit
                    }
                    ;

jump_statement  : GOTO_t IDENTIFIER SEMICOLON {}
                | CONTINUE SEMICOLON {}
                | BREAK SEMICOLON {}
                | RETURN_t SEMICOLON {
                    if (currentSymbolTable->lookup("RETVAL")->type.base == VOID) emit("", "", "", RETURN);
                    $$ = new E();
                }
                | RETURN_t expression SEMICOLON {
                    if (currentSymbolTable->lookup("RETVAL")->type.base == currentSymbolTable->lookup($2->addr)->type.base) emit($2->addr, "", "", RETURN);
                    $$ = new E();
                }
                ;



translation_unit    : external_declaration {}
                    | translation_unit external_declaration {}
                    ;

external_declaration    : function_definition {}
                        | declaration {}
                        ;

function_definition : declaration_specifiers declarator declaration_list compound_statement {}
                    | function_prototype compound_statement {
                        currentSymbolTable = &globalSymbolTable;    // go to global symbol table
                        emit($1->name, "", "", FUNC_END);
                    }
                    ;

function_prototype: declaration_specifiers declarator {
                        DataType dt = $1;
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
                        D* curr = $2;
                        symbol* sym = globalSymbolTable.lookup(curr->name);
                        if (curr->type == FUNCTION) {
                            symbol* retval = sym->nestedTable->lookup("RETVAL", dt, curr->pointers);
                            sym->size = 0;
                            sym->initValue = NULL;
                        }
                        $$ = $2;
                    }
                    ;

declaration_list    : declaration {}
                    | declaration_list declaration {}
                    ;
%%

// ERROR
void yyerror(string s) {
    cout << "ERROR: " << s << endl;
    cout << "At line: " << yylineno << endl;
    cout << "Near: " << yytext << endl;
}
