#ifndef __TRANSLATOR_H
#define __TRANSLATOR_H
#include <iostream>
#include <vector>
#include <list>
using namespace std;

/* Sizes for data types as changeable parameters. */
#define sizeof_void 0
#define sizeof_char 1
#define sizeof_int 4
#define sizeof_float 8
#define sizeof_pointer 4

/* Forward declarations. */
class symbol;   // Symbol Table Record
class symbolType;   // Type of a symbol
class symbolTable;  // Symbol Table
class quad; // Quad to store TAC
class quadArray;    // List of Quads

/* Global Variables */
extern symbol* currentSymbol;   // Points to current symbol
extern symbolTable* currentSymbolTable; // Points to current symbol table
extern symbolTable* globalSymbolTable; // Points to global symbol table
extern quadArray* quadTable;   // Points to quad table
extern int SymbolTableCount;  // Count of symbol tables
extern string blockName;   // Name of current block

/* Lex objects */
extern int yyparse();
extern char* yytext;

class symbol {
    public:
    string name;    // Name of symbol
    symbolType* type;   // Type of symbol
    string initValue;   // Initial value of symbol
    int size;  // Size of symbol
    int offset; // Offset of symbol
    symbolTable* nestedTable;  // Nested symbol table if symbol is a function/record

    symbol(string name_, string type_, symbolType* arrType = NULL, int width = 0); // Constructor
    symbol* update(symbolType* t);  // Update type of symbol to t
};

class symbolType {
    public:
    string base;   // Base type of symbol
    int width; // Width of symbol, 1 by default. Size for arrays
    symbolType* arrType;   // Array type of symbol

    symbolType(string base_, symbolType* arrType_ = NULL, int width_ = 0); // Constructor
};

class symbolTable {
    public:
    string name;    // Name of symbol table
    int count;  // Count of symbols in symbol table
    list<symbol> table;    // List of symbols in symbol table
    symbolTable* parent;    // Parent symbol table

    symbolTable(string name_);  // Constructor

    symbol* lookup(string name);    // Lookup for symbol in symbol table
    static symbol* gentemp(symbolType* type_, string initValue_ = "(empty)"); // Generate temporary symbol
    void update();  // Update offset of symbols in symbol table
    void print();   // Print symbol table
};

class quad {
    public:
    string opcode; // Opcode of quad
    string argument1;  // First argument of quad
    string argument2;  // Second argument of quad
    string result; // Result of quad

    quad(string res_, string arg1_, string op_, string arg2_ = ""); // Constructor for string argument
    quad(string res_, int arg1_, string op_, string arg2_ = ""); // Constructor for int argument
    quad(string res_, float arg1_, string op_, string arg2_ = ""); // Constructor for float argument

    void print();   // Print quad
};

class quadArray{
    public:
    vector <quad> array;    // Vector of quads

    // Method to add a new quad.
    void emit(string opcode, string res, string arg1 = "", string arg2 = ""); // String type arg
    void emit(string opcode, string res, int arg1, string arg2 = ""); // Int type arg
    void emit(string opcode, string res, float arg1, string arg2 = ""); // Float type arg

    void print();  // Print quad array
};

// Array class for arrays and pointers
class A {
    public:
    int arrType; // Type of array. 0:array, 1:pointer
    symbol* addr;   // Base symbol of array in Symbol Table
    symbol* location; // To get address of array
    symbolType* type;   // Type of array stored in symbol table
};

// Statement class for statements
class S {
    public:
    list <int> nextList;    // List of nexts
};

// Expression class for expressions
class E {
    public:
    string type;    // Type of expression
    symbol* addr; // Base symbol of expression in Symbol Table
    list <int> trueList;    // List of statements for true
    list <int> falseList;   // List of statements for false
    list <int> nextList;    // List of nexts
};

/* GLOBAL FUNCTIONS */
list <int> makelist(int i); // Make a new list with i as the only element, index of current quad
list <int> merge(list <int> &p1, list <int> &p2); // Merge two lists, return merged list
void backpatch(list <int> &p, int i); // Backpatch list p with i, update quad array
bool typecheck(symbolType* t1, symbolType* t2); // Check if types t1 and t2 are compatible (called by typecheck(symbol, symbol) to check types of symbols and compatible types)
symbol* convType(symbol* s, string t); // Convert type of symbol s to t, which calls 
#endif