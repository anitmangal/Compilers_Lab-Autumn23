#ifndef __TRANSLATOR_H
#define __TRANSLATOR_H
#include <iostream>
#include <vector>
#include <list>
#include <map>
using namespace std;

/* Sizes for data types as changeable parameters. */
#define sizeof_void 0
#define sizeof_char 1
#define sizeof_int 4
#define sizeof_float 8
#define sizeof_pointer 4

// ENUMS for data types
typedef enum { VOID, BOOL, CHAR, INT, FLOAT, ARRAY, POINTER, FUNCTION} DataType;

// ENUMS for opcode
typedef enum { ADD, SUB, MULT, DIV, MOD, BW_AND, BW_OR, BW_XOR, U_MINUS, REFERENCE, DEREFERENCE, GOTO_EQ, GOTO_NEQ, GOTO_GT, GOTO_GTE, GOTO_LT, GOTO_LTE, IF_GOTO, IF_FALSE_GOTO, CtoI, ItoC, FtoI, ItoF, FtoC, CtoF, ASSIGN, GOTO, RETURN, PARAM, CALL, ARR_IDX_ARG, ARR_IDX_RES, FUNC_BEG, FUNC_END, L_DEREF} opcode;

/* Forward declarations. */
class symbol;   // Symbol Table Record
class symbolType;   // Type of a symbol
class symbolVal;  // Value of a symbol
class symbolTable;  // Symbol Table
class quad; // Quad to store TAC
class quadArray;    // List of Quads

/* Lex objects */
extern int yyparse();
extern char* yytext;


class symbolType {
    public:
    int pointers;
    DataType base;
    DataType inner;
    vector<int> dimList;
};

class symbol {
    public:
    string name;    // Name of symbol
    symbolType type;   // Type of symbol
    symbolVal* initValue;   // Initial value of symbol
    int size;  // Size of symbol
    int offset; // Offset of symbol
    symbolTable* nestedTable;  // Nested symbol table if symbol is a function/record

    symbol();
};



class symbolVal {
    public:
    int i;
    char c;
    float f;
    void* p;
    // Constructors
    symbolVal(int);
    symbolVal(char);
    symbolVal(float);
};

class symbolTable {
    public:
    map <string, symbol*> table;    // Map of symbol name to symbol
    vector<symbol*> symbols;    // Vector of symbols
    int offset;
    static int tempCount;   // Count of temporary variables
    symbolTable();
    symbol* lookup(string name, DataType t = INT, int pc = 0); // Lookup symbol in symbol table
    symbol* searchGlobal(string name);
    string gentemp(DataType t = INT);

    void print(string tableName);
};

class quad {
    public:
    opcode op; // Opcode of quad
    string arguement1;  // First argument of quad
    string arguement2;  // Second argument of quad
    string result; // Result of quad
    quad(string, string, string, opcode); // Constructor
    string print();   // Print quad
};

class quadArray{
    public:
    vector <quad> array;    // Vector of quads
    void print();  // Print quad array
};

// Method to add a new quad.
void emit(string result, string arg1, string arg2, opcode op); // String type arg
void emit(string result, int constant, opcode op); // Int type arg
void emit(string result, float constant, opcode op); // Float type arg
void emit(string result, char constant, opcode op); // Char type arg


// Parameter class for statements
class P {
    public:
    string name;    // Name of parameter
    symbolType type; // Type of parameter
};

// Expression class for expressions
class E {
    public:
    int instr;
    DataType type;  // Type of expression
    string addr;    // Address of expression

    // For boolean expressions and statements
    list<int> trueList;
    list<int> falseList;
    list<int> nextList;
    
    int deRef;
    string* deRefName;

    E();
};

// Declaration class
class D {
    public:
    string name;    // Name of declaration
    int pointers;
    DataType type;  // Type of declaration
    DataType inner; // Inner type of declaration (Array)
    vector <int> instrList; // List of instructions
    E* initValue;   // Initial value of declaration
    int pc; // Pointer and array count
};

/* GLOBAL FUNCTIONS */
list<int> makelist(int i); // Make a new list with i as the only element, index of current quad
list<int> merge(list<int> p1, list <int> p2); // Merge two lists, return merged list
void backpatch(list<int> p, int i); // Backpatch list p with i, update quad array
bool typecheck(symbolType* t1, symbolType* t2); // Check if types t1 and t2 are compatible (called by typecheck(symbol, symbol) to check types of symbols and compatible types)
void convType(E* arg, E* result, DataType target); // Convert type of arg to target type and store in result
void convType(string t, DataType target, string f, DataType source); // Convert type of f to target type

/* HELPER FUNCTIONS */
string typeCheck(symbolType t); // Return string representation of type t
void convIntToBool(E* e); // Convert int to bool
int sizeOfType(DataType t); // Return size of type t
string getInitValue(symbol* sym); // Return initial value of symbol sym
DataType max(DataType t1, DataType t2); // Return max of t1 and t2
#endif
