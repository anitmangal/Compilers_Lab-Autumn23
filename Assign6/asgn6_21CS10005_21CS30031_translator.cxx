#include "asgn6_21CS10005_21CS30031_translator.h"
#include <iomanip>
using namespace std;

// Global variables as defined and explained in the header file
int nextinstr = 0;
int symbolTable::tempCount = 0;
symbol* currentSymbol;
quadArray quadTable;
symbolTable* currentSymbolTable;
symbolTable globalSymbolTable;

// Constructors of SymbolVal
symbolVal::symbolVal(int i) {
    vals.i = i;
}

symbolVal::symbolVal(char c) {
    vals.c = c;
}

symbolVal::symbolVal(float f) {
    vals.f = f;
}

// Constructor of symbol
symbol::symbol(): nestedTable(NULL) {}

// Implementations of constructors and functions for the symbolTable class
symbolTable::symbolTable(): offset(0) {}

symbol* symbolTable::lookup(string name, DataType t, int pc) {
    if (table.count(name) == 0) {
        symbol* sym = new symbol();
        sym->name = name;
        sym->type.base = t;
        sym->offset = offset;
        sym->initValue = NULL;

        if (pc == 0) {
            sym->size = sizeOfType(t);
            offset += sym->size;
        }
        else {
            sym->size = sizeof_pointer;
            sym->type.inner = t;
            sym->type.pointers = pc;
            sym->type.base = ARRAY;
        }
        symbols.push_back(sym);
        table[name] = sym;
    }
    return table[name];
}

symbol* symbolTable::searchGlobal(string name) {
    return (table.count(name)?table[name]:NULL);
}

string symbolTable::gentemp(DataType t) {
    string tempName = "t" + to_string(symbolTable::tempCount++);

    // Attributes
    symbol* sym = new symbol();
    sym->name = tempName;
    sym->size = sizeOfType(t);
    sym->offset = offset;
    sym->type.base = t;
    sym->initValue = NULL;

    offset += sym->size;
    symbols.push_back(sym);
    table[tempName] = sym;

    return tempName;
}

void symbolTable::print(string tableName) {
    for(int i = 0; i < 120; i++) {
        cout << '-';
    }
    cout << endl;
    cout << "Symbol Table: " << setfill(' ') << left << setw(50) << tableName << endl;
    for(int i = 0; i < 120; i++)
        cout << '-';
    cout << endl;

    // Table Headers
    cout << setfill(' ') << left << setw(25) <<  "Name";
    cout << left << setw(25) << "Type";
    cout << left << setw(20) << "Initial Value";
    cout << left << setw(15) << "Size";
    cout << left << setw(15) << "Offset";
    cout << left << "Nested" << endl;

    for(int i = 0; i < 120; i++)
        cout << '-';
    cout << endl;

    // For storing nested symbol tables
    vector<pair<string, symbolTable*> > tableList;

    // Print the symbols in the symbol table
    for(int i = 0; i < (int)symbols.size(); i++) {
        symbol* sym = symbols[i];
        cout << left << setw(25) << sym->name;
        cout << left << setw(25) << typeCheck(sym->type);
        cout << left << setw(20) << getInitValue(sym);
        cout << left << setw(15) << sym->size;
        cout << left << setw(15) << sym->offset;
        cout << left;

        if(sym->nestedTable != NULL) {
            string nestedTableName = tableName + "." + sym->name;
            cout << nestedTableName << endl;
            tableList.push_back(make_pair(nestedTableName, sym->nestedTable));
        }
        else
            cout << "NULL" << endl;
    }

    for(int i = 0; i < 120; i++)
        cout << '-';
    cout << endl << endl;

    // Recursively call the print function for the nested symbol tables
    for(vector<pair<string, symbolTable*> >::iterator it = tableList.begin(); it != tableList.end(); it++) {
        pair<string, symbolTable*> p = (*it);
        p.second->print(p.first);
    }
}

// Implementations of constructors and functions for the quad class
quad::quad(string res, string arg1_, string arg2_, opcode op_): result(res), arguement1(arg1_), arguement2(arg2_), op(op_) {}


string quad::print() {
    string out = "";
    if(op >= ADD && op <= BW_XOR) {                 // Binary operators
        out += (result + " = " + arguement1 + " ");
        switch(op) {
            case ADD: out += "+"; break;
            case SUB: out += "-"; break;
            case MULT: out += "*"; break;
            case DIV: out += "/"; break;
            case MOD: out += "%"; break;
            case BW_AND: out += "&"; break;
            case BW_OR: out += "|"; break;
            case BW_XOR: out += "^"; break;
        }
        out += (" " + arguement2);
    }
    else if(op >= U_MINUS && op <= DEREFERENCE) {        // Unary operators
        out += (result + " = ");
        switch(op) {
            case U_MINUS: out += "-"; break;
            case REFERENCE: out += "&"; break;
            case DEREFERENCE: out += "*"; break;
        }
        out += arguement1;
    }
    else if(op >= GOTO_EQ && op <= IF_FALSE_GOTO) { // Conditional operators
        out += ("if " + arguement1 + " ");
        switch(op) {
            case GOTO_EQ: out += "=="; break;
            case GOTO_NEQ: out += "!="; break;
            case GOTO_GT: out += ">"; break;
            case GOTO_GTE: out += ">="; break;
            case GOTO_LT: out += "<"; break;
            case GOTO_LTE: out += "<="; break;
            case IF_GOTO: out += "!= 0"; break;
            case IF_FALSE_GOTO: out += "== 0"; break;
        }
        out += (" " + arguement2 + " goto " + result);
    }
    else if(op >= CtoI && op <= CtoF) {             // Type Conversion functions
        out += (result + " = ");
        switch(op) {
            case CtoI: out += "CharToInt"; break;
            case ItoC: out += "IntToChar"; break;
            case FtoI: out += "FloatToInt"; break;
            case ItoF: out += "IntToFloat"; break;
            case FtoC: out += "FloatToChar"; break;
            case CtoF: out += "CharToFloat"; break;
        }
        out += ("(" + arguement1 + ")");
    }

    else if(op == ASSIGN)                       // Assignment operator
        out += (result + " = " + arguement1);
    else if(op == GOTO)                         // Goto
        out += ("goto " + result);
    else if(op == RETURN)                       // Return from a function
        out += ("return " + result);
    else if(op == PARAM)                        // Parameters for a function
        out += ("param " + result);
    else if(op == CALL) {                       // Call a function
        if(arguement2.size() > 0)
            out += (arguement2 + " = ");
        out += ("call " + result + ", " + arguement1);
    }
    else if(op == ARR_IDX_ARG)                  // Array indexing
        out += (result + " = " + arguement1 + "[" + arguement2 + "]");
    else if(op == ARR_IDX_RES)                  // Array indexing
        out += (result + "[" + arguement2 + "] = " + arguement1);
    else if(op == FUNC_BEG)                     // Function begin
        out += (result + ": ");
    else if(op == FUNC_END) {                   // Function end
        out += ("function " + result + " ends");
    }
    else if(op == L_DEREF)                      // Dereference
        out += ("*" + result + " = " + arguement1);

    return out;
}

// Implementations of constructors and functions for the quadArray class
void quadArray::print() {
    for(int i = 0; i < 120; i++)
        cout << '-';
    cout << endl;
    cout << "THREE ADDRESS CODE (TAC):" << endl;
    for(int i = 0; i < 120; i++)
        cout << '-';
    cout << endl;

    // Print each of the quads one by one
    for(int i = 0; i < (int)array.size(); i++) {
        if(array[i].op != FUNC_BEG && array[i].op != FUNC_END)
            cout << left << setw(4) << i << ":    ";
        else if(array[i].op == FUNC_BEG)
            cout << endl << left << setw(4) << i << ": ";
        else if(array[i].op == FUNC_END)
            cout << left << setw(4) << i << ": ";
        cout << array[i].print() << endl;
    }
    cout << endl;
}

// Implementations of constructors and functions for the E class
E::E(): deRef(0), deRefName(NULL) {}

// Overloaded emit functions
void emit(string result, string arg1, string arg2, opcode op) {
    quadTable.array.push_back(quad(result, arg1, arg2, op));
    nextinstr++;
}

void emit(string result, int constant, opcode op) {
    quadTable.array.push_back(quad(result, to_string(constant), "", op));
    nextinstr++;
}

void emit(string result, float constant, opcode op) {
    quadTable.array.push_back(quad(result, to_string(constant), "", op));
    nextinstr++;
}

void emit(string result, char constant, opcode op) {
    quadTable.array.push_back(quad(result, to_string(constant), "", op));
    nextinstr++;
}

// Implementation of the makelist function
list<int> makelist(int i) {
    list<int> l(1, i);
    return l;
}

// Implementation of the merge function
list<int> merge(list<int> list1, list<int> list2) {
    list1.merge(list2);
    return list1;
}

// Implementation of the backpatch function
void backpatch(list<int> l, int address) {
    string str = to_string(address);
    for(list<int>::iterator it = l.begin(); it != l.end(); it++) {
        quadTable.array[*it].result = str;
    }
}

// Implementation of the convType function
void convType(E* arg, E* result, DataType target) {
    if (result->type == target) return;
    if (result->type == FLOAT) {
        if (target == INT) emit(arg->addr, result->addr, "", FtoI);
        else if(target == CHAR) emit(arg->addr, result->addr, "", FtoC);
    }
    else if (result->type == INT) {
        if (target == FLOAT) emit(arg->addr, result->addr, "", ItoF);
        else if(target == CHAR) emit(arg->addr, result->addr, "", ItoC);
    }
    else if (result->type == CHAR) {
        if (target == FLOAT) emit(arg->addr, result->addr, "", CtoF);
        else if(target == INT) emit(arg->addr, result->addr, "", CtoI);
    }
}

void convType(string t, DataType target, string f, DataType source) {
    if (source == target) return;
    if (source == FLOAT) {
        if (target == INT) emit(t, f, "", FtoI);
        else if(target == CHAR) emit(t, f, "", FtoC);
    }
    else if (source == INT) {
        if (target == FLOAT) emit(t, f, "", ItoF);
        else if(target == CHAR) emit(t, f, "", ItoC);
    }
    else if (source == CHAR) {
        if (target == FLOAT) emit(t, f, "", CtoF);
        else if(target == INT) emit(t, f, "", CtoI);
    }
}

// Implementation of the convIntToBool function
void convIntToBool(E* expr) {
    if (expr->type != BOOL) {
        expr->type = BOOL;
        expr->falseList = makelist(nextinstr);  // False list is the next instruction
        emit("", expr->addr, "", IF_FALSE_GOTO);
        expr->trueList = makelist(nextinstr);   // True list is the next instruction
        emit("", "", "", GOTO);
    }
}

// Implementation of the sizeOfType function
int sizeOfType(DataType t) {
    if (t == VOID) return sizeof_void;
    else if (t == INT) return sizeof_int;
    else if (t == CHAR) return sizeof_char;
    else if (t == FLOAT) return sizeof_float;
    else if (t == POINTER) return sizeof_pointer;
    else return 0;
}

// Implementation of typeCheck funciton
string typeCheck(symbolType t) {
    if (t.base == VOID) return "void";
    else if (t.base == CHAR) return "char";
    else if (t.base == INT) return "int";
    else if (t.base == FLOAT) return "float";
    else if (t.base == FUNCTION) return "function";
    else if (t.base == POINTER) {
        string temp = "";
        if (t.inner == CHAR) temp += "char";
        else if (t.inner == INT) temp += "int";
        else if (t.inner == FLOAT) temp+= "float";
        temp += string(t.pointers, '*');
        return temp;
    }
    else if (t.base == ARRAY) {
        string temp = "";
        if (t.inner == CHAR) temp += "char";
        else if (t.inner == INT) temp += "int";
        else if (t.inner == FLOAT) temp+= "float";
        vector <int> templist = t.dimList;
        for (int i = 0; i < (int)templist.size(); i++) {
            if (templist[i]) temp += "[" + to_string(templist[i]) + "]";
            else temp += "[]";
        }
        if (templist.size() == 0) temp += "[]";
        return temp;
    }
    else return "unknown";
}

// Implementation of getinitValue function
string getInitValue(symbol* sym) {
    if (sym->initValue != NULL) {
        if(sym->type.base == INT) return to_string(sym->initValue->vals.i);
        else if(sym->type.base == CHAR) return to_string(sym->initValue->vals.c);
        else if(sym->type.base == FLOAT) return to_string(sym->initValue->vals.f);
        else return "-";
    }
    else return "-";
}

// Implementation of max function
DataType max(DataType t1, DataType t2) {
    if (t1 > t2) return t1;
    return t2;
}