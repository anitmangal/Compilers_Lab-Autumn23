/**
* Vanshita Garg | 19CS10064
* Ashutosh Kumar Singh | 19CS30008
* Compilers Laboratory
* Assignment 6
*
* File for Target Code Generation
*/

#include "asgn6_21CS10005_21CS30031_translator.h"
#include <fstream>
#include <sstream>
#include <stack>
using namespace std;

// External variables
extern symbolTable globalSymbolTable;
extern symbolTable* currentSymbolTable;
extern quadArray quadTable;

// Declare global variables
vector<string> stringList;
map<int, string> labels;
stack<pair<string, int> > parameters;
int labelCount = 0;
string funcRunning = "";
string asmFileName;


// Prints the global information to the assembly file
void printGlobal(ofstream& sfile) {
    for(vector<symbol*>::iterator it = globalSymbolTable.symbols.begin(); it != globalSymbolTable.symbols.end(); it++) {
        symbol* sym = *it;
        if(sym->type.base == CHAR && sym->name[0] != 't') {
            if(sym->initValue != NULL) {
                sfile << "\t.globl\t" << sym->name << endl;
                sfile << "\t.data" << endl;
                sfile << "\t.type\t" << sym->name << ", @object" << endl;
                sfile << "\t.size\t" << sym->name << ", 1" << endl;
                sfile << sym->name << ":" << endl;
                sfile << "\t.byte\t" << sym->initValue->c << endl;
            }
            else
                sfile << "\t.comm\t" << sym->name << ",1,1" << endl;
        }
        else if(sym->type.base == INT && sym->name[0] != 't') {
            if(sym->initValue != NULL) {
                sfile << "\t.globl\t" << sym->name << endl;
                sfile << "\t.data" << endl;
                sfile << "\t.align\t4" << endl;
                sfile << "\t.type\t" << sym->name << ", @object" << endl;
                sfile << "\t.size\t" << sym->name << ", 4" << endl;
                sfile << sym->name << ":" << endl;
                sfile << "\t.long\t" << sym->initValue->i << endl;
            }
            else
                sfile << "\t.comm\t" << sym->name << ",4,4" << endl;
        }
    }
}

// Prints all the strings used in the program to the assembly file
void printStrings(ofstream& sfile) {
    sfile << ".section\t.rodata" << endl;
    int i = 0;
    for(vector<string>::iterator it = stringList.begin(); it != stringList.end(); it++) {
        sfile << ".LC" << i++ << ":" << endl;
        sfile << "\t.string " << *it << endl;
    }
}

// Generates labels for different targets of goto statements
void setLabels() {
    int i = 0;
    for(vector<quad>::iterator it = quadTable.array.begin(); it != quadTable.array.end(); it++) {
        if(it->op == GOTO || (it->op >= GOTO_EQ && it->op <= IF_FALSE_GOTO)) {
            int target = atoi((it->result.c_str()));
            if(!labels.count(target)) {
                string labelName = ".L" + to_string(labelCount++);
                labels[target] = labelName;
            }
            it->result = labels[target];
        }
    }
}

// Generates the function prologue to be printed before each function
// Generic tasks like allocating space for variables on the stack are performed here
void generatePrologue(int memBind, ofstream& sfile) {
    int width = 16;
    sfile << endl << "\t.text" << endl;
    sfile << "\t.globl\t" << funcRunning << endl;
    sfile << "\t.type\t" << funcRunning << ", @function" << endl;
    sfile << funcRunning << ":" << endl;
    sfile << "\tpushq\t" << "%rbp" << endl;
    sfile << "\tmovq\t" << "%rsp, %rbp" << endl;
    sfile << "\tsubq\t$" << (memBind / width + 1) * width << ", %rsp" << endl;
}

// Generates assembly code for a given three address quad
void quadCode(quad q, ofstream& sfile) {
    string strLabel = q.result;
    bool hasStrLabel = (q.result[0] == '.' && q.result[1] == 'L' && q.result[2] == 'C');
    string toPrint1 = "", toPrint2 = "", toPrintRes = "";
    int off1 = 0, off2 = 0, offRes = 0;

    symbol* loc1 = currentSymbolTable->lookup(q.arguement1);
    symbol* loc2 = currentSymbolTable->lookup(q.arguement2);
    symbol* loc3 = currentSymbolTable->lookup(q.result);
    symbol* glb1 = globalSymbolTable.searchGlobal(q.arguement1);
    symbol* glb2 = globalSymbolTable.searchGlobal(q.arguement2);
    symbol* glb3 = globalSymbolTable.searchGlobal(q.result);

    if(currentSymbolTable != &globalSymbolTable) {
        if(glb1 == NULL)
            off1 = loc1->offset;
        if(glb2 == NULL)
            off2 = loc2->offset;
        if(glb3 == NULL)
            offRes = loc3->offset;

        if(q.arguement1[0] < '0' || q.arguement1[0] > '9') {
            if(glb1 != NULL)
                toPrint1 = q.arguement1 + "(%rip)";
            else
                toPrint1 = to_string(off1) + "(%rbp)";
        }
        if(q.arguement2[0] < '0' || q.arguement2[0] > '9') {
            if(glb2 != NULL)
                toPrint2 = q.arguement2 + "(%rip)";
            else
                toPrint2 = to_string(off2) + "(%rbp)";
        }
        if(q.result[0] < '0' || q.result[0] > '9') {
            if(glb3 != NULL)
                toPrintRes = q.result + "(%rip)";
            else
                toPrintRes = to_string(offRes) + "(%rbp)";
        }
    }
    else {
        toPrint1 = q.arguement1;
        toPrint2 = q.arguement2;
        toPrintRes = q.result;
    }

    if(hasStrLabel)
        toPrintRes = strLabel;

    if(q.op == ASSIGN) {
        if(q.result[0] != 't' || loc3->type.base == INT || loc3->type.base == POINTER) {
            if(loc3->type.base != POINTER) {
                if(q.arguement1[0] < '0' || q.arguement1[0] > '9')
                {
                    sfile << "\tmovl\t" << toPrint1 << ", %eax" << endl;
                    sfile << "\tmovl\t%eax, " << toPrintRes << endl; 
                }
                else
                    sfile << "\tmovl\t$" << q.arguement1 << ", " << toPrintRes << endl;
            }
            else {
                sfile << "\tmovq\t" << toPrint1 << ", %rax" << endl;
                sfile << "\tmovq\t%rax, " << toPrintRes << endl; 
            }
        }
        else {
            int temp = q.arguement1[0];
            sfile << "\tmovb\t$" << temp << ", " << toPrintRes << endl;
        }
    }
    else if(q.op == U_MINUS) {
        sfile << "\tmovl\t" << toPrint1 << ", %eax" << endl;
        sfile << "\tnegl\t%eax" << endl;
        sfile << "\tmovl\t%eax, " << toPrintRes << endl;
    }
    else if(q.op == ADD) {
        if(q.arguement1[0] > '0' && q.arguement1[0] <= '9')
            sfile << "\tmovl\t$" << q.arguement1 << ", %eax" << endl;
        else
            sfile << "\tmovl\t" << toPrint1 << ", %eax" << endl; 
        if(q.arguement2[0] > '0' && q.arguement2[0] <= '9')
            sfile << "\tmovl\t$" << q.arguement2 << ", %edx" << endl;
        else
            sfile << "\tmovl\t" << toPrint2 << ", %edx" << endl; 
        sfile << "\taddl\t%edx, %eax" << endl;
        sfile << "\tmovl\t%eax, " << toPrintRes << endl;
    }
    else if(q.op == SUB) {
        if(q.arguement1[0] > '0' && q.arguement1[0] <= '9')
            sfile << "\tmovl\t$" << q.arguement1 << ", %edx" << endl;
        else
            sfile << "\tmovl\t" << toPrint1 << ", %edx" << endl; 
        if(q.arguement2[0]>'0' && q.arguement2[0]<='9')
            sfile << "\tmovl\t$" << q.arguement2 << ", %eax" << endl;
        else
            sfile << "\tmovl\t" << toPrint2 << ", %eax" << endl; 
        sfile << "\tsubl\t%eax, %edx" << endl;
        sfile << "\tmovl\t%edx, %eax" << endl;
        sfile << "\tmovl\t%eax, " << toPrintRes << endl;
    }
    else if(q.op == MULT) {
        if(q.arguement1[0] > '0' && q.arguement1[0] <= '9')
            sfile << "\tmovl\t$" << q.arguement1 << ", %eax" << endl;
        else
            sfile << "\tmovl\t" << toPrint1 << ", %eax" << endl; 
        sfile << "\timull\t";
        if(q.arguement2[0] > '0' && q.arguement2[0] <= '9')
            sfile << "$" << q.arguement2 << ", %eax" << endl;
        else
            sfile << toPrint2 << ", %eax" << endl;
        sfile << "\tmovl\t%eax, " << toPrintRes << endl;
    }
    else if(q.op == DIV) {
        sfile << "\tmovl\t" << toPrint1 << ", %eax" << endl;
        sfile << "\tcltd\n\tidivl\t" << toPrint2 << endl;
        sfile << "\tmovl\t%eax, " << toPrintRes << endl;
    }
    else if(q.op == MOD) {
        sfile << "\tmovl\t" << toPrint1 << ", %eax" << endl;
        sfile << "\tcltd\n\tidivl\t" << toPrint2 << endl;
        sfile << "\tmovl\t%edx, " << toPrintRes << endl;
    }
    else if(q.op == GOTO)
        sfile << "\tjmp\t" << q.result << endl;
    else if(q.op == GOTO_LT) {
        sfile << "\tmovl\t" << toPrint1 << ", %eax" << endl;
        sfile << "\tcmpl\t" << toPrint2 << ", %eax" << endl;
        sfile << "\tjge\t.L" << labelCount << endl;
        sfile << "\tjmp\t" << q.result << endl;
        sfile << ".L" << labelCount++ << ":" << endl;
    }
    else if(q.op == GOTO_GT) {
        sfile << "\tmovl\t" << toPrint1 << ", %eax" << endl;
        sfile << "\tcmpl\t" << toPrint2 << ", %eax" << endl;
        sfile << "\tjle\t.L" << labelCount << endl;
        sfile << "\tjmp\t" << q.result << endl;
        sfile << ".L" << labelCount++ << ":" << endl;
    }
    else if(q.op == GOTO_GTE) {
        sfile << "\tmovl\t" << toPrint1 << ", %eax" << endl;
        sfile << "\tcmpl\t" << toPrint2 << ", %eax" << endl;
        sfile << "\tjl\t.L" << labelCount << endl;
        sfile << "\tjmp\t" << q.result << endl;
        sfile << ".L" << labelCount++ << ":" << endl;
    }
    else if(q.op == GOTO_LTE) {
        sfile << "\tmovl\t" << toPrint1 << ", %eax" << endl;
        sfile << "\tcmpl\t" << toPrint2 << ", %eax" << endl;
        sfile << "\tjg\t.L" << labelCount << endl;
        sfile << "\tjmp\t" << q.result << endl;
        sfile << ".L" << labelCount++ << ":" << endl;
    }
    else if(q.op == GOTO_GTE) {
        sfile << "\tmovl\t" << toPrint1 << ", %eax" << endl;
        sfile << "\tcmpl\t" << toPrint2 << ", %eax" << endl;
        sfile << "\tjl\t.L" << labelCount << endl;
        sfile << "\tjmp\t" << q.result << endl;
        sfile << ".L" << labelCount++ << ":" << endl;
    }
    else if(q.op == GOTO_EQ) {
        sfile << "\tmovl\t" << toPrint1 << ", %eax" << endl;
        if(q.arguement2[0] >= '0' && q.arguement2[0] <= '9')
            sfile << "\tcmpl\t$" << q.arguement2 << ", %eax" << endl;
        else
            sfile << "\tcmpl\t" << toPrint2 << ", %eax" << endl;
        sfile << "\tjne\t.L" << labelCount << endl;
        sfile << "\tjmp\t" << q.result << endl;
        sfile << ".L" << labelCount++ << ":" << endl;
    }
    else if(q.op == GOTO_NEQ) {
        sfile << "\tmovl\t" << toPrint1 << ", %eax" << endl;
        sfile << "\tcmpl\t" << toPrint2 << ", %eax" << endl;
        sfile << "\tje\t.L" << labelCount << endl;
        sfile << "\tjmp\t" << q.result << endl;
        sfile << ".L" << labelCount++ << ":" << endl;
    }
    else if(q.op == IF_GOTO) {
        sfile << "\tmovl\t" << toPrint1 << ", %eax" << endl;
        sfile << "\tcmpl\t$0" << ", %eax" << endl;
        sfile << "\tje\t.L" << labelCount << endl;
        sfile << "\tjmp\t" << q.result << endl;
        sfile << ".L" << labelCount++ << ":" << endl;
    }
    else if(q.op == IF_FALSE_GOTO) {
        sfile << "\tmovl\t" << toPrint1 << ", %eax" << endl;
        sfile << "\tcmpl\t$0" << ", %eax" << endl;
        sfile << "\tjne\t.L" << labelCount << endl;
        sfile << "\tjmp\t" << q.result << endl;
        sfile << ".L" << labelCount++ << ":" << endl;
    }
    else if(q.op == ARR_IDX_ARG) {
        sfile << "\tmovl\t" << toPrint2 << ", %edx" << endl;
        sfile << "cltq" << endl;
        if(off1 < 0) {
            sfile << "\tmovl\t" << off1 << "(%rbp,%rdx,1), %eax" << endl;
            sfile << "\tmovl\t%eax, " << toPrintRes << endl;
        }
        else {
            sfile << "\tmovq\t" << off1 << "(%rbp), %rdi" << endl;
            sfile << "\taddq\t%rdi, %rdx" << endl;
            sfile << "\tmovq\t(%rdx) ,%rax" << endl;
            sfile << "\tmovq\t%rax, " << toPrintRes << endl;
        }
    }
    else if(q.op == ARR_IDX_RES) {
        sfile << "\tmovl\t" << toPrint2 << ", %edx" << endl;
        sfile << "\tmovl\t" << toPrint1 << ", %eax" << endl;
        sfile << "cltq" << endl;
        if(offRes > 0) {
            sfile << "\tmovq\t" << offRes << "(%rbp), %rdi" << endl;
            sfile << "\taddq\t%rdi, %rdx" << endl;
            sfile << "\tmovl\t%eax, (%rdx)" << endl;
        }
        else
            sfile << "\tmovl\t%eax, " << offRes << "(%rbp,%rdx,1)" << endl;
    }
    else if(q.op == REFERENCE) {
        if(off1 < 0) {
            sfile << "\tleaq\t" << toPrint1 << ", %rax" << endl;
            sfile << "\tmovq\t%rax, " << toPrintRes << endl;
        }
        else {
            sfile << "\tmovq\t" << toPrint1 << ", %rax" << endl;
            sfile << "\tmovq\t%rax, " << toPrintRes << endl;
        }
    }
    else if(q.op == DEREFERENCE) {
        sfile << "\tmovq\t" << toPrint1 << ", %rax" << endl;
        sfile << "\tmovq\t(%rax), %rdx" << endl;
        sfile << "\tmovq\t%rdx, " << toPrintRes << endl;
    }
    else if(q.op == L_DEREF) {
        sfile << "\tmovq\t" << toPrintRes << ", %rdx" << endl;
        sfile << "\tmovl\t" << toPrint1 << ", %eax" << endl;
        sfile << "\tmovl\t%eax, (%rdx)" << endl;
    }
    else if(q.op == PARAM) {
        int paramSize;
        DataType t;
        if(glb3 != NULL)
            t = glb3->type.base;
        else
            t = loc3->type.base;
        if(t == INT)
            paramSize = sizeof_int;
        else if(t == CHAR)
            paramSize = sizeof_char;
        else
            paramSize = sizeof_pointer;
        stringstream ss;
        if(q.result[0] == '.')
            ss << "\tmovq\t$" << toPrintRes << ", %rax" <<endl;
        else if(q.result[0] >= '0' && q.result[0] <= '9')
            ss << "\tmovq\t$" << q.result << ", %rax" <<endl;
        else {
            if(loc3->type.base != ARRAY) {
                if(loc3->type.base != POINTER)
                    ss << "\tmovq\t" << toPrintRes << ", %rax" <<endl;
                else if(loc3 == NULL)
                    ss << "\tleaq\t" << toPrintRes << ", %rax" <<endl;
                else
                    ss << "\tmovq\t" << toPrintRes << ", %rax" <<endl;
            }
            else {
                if(offRes < 0)
                    ss << "\tleaq\t" << toPrintRes << ", %rax" <<endl;
                else {
                    ss << "\tmovq\t" << offRes << "(%rbp), %rdi" <<endl;
                    ss << "\tmovq\t%rdi, %rax" <<endl;
                }
            }
        }
        parameters.push(make_pair(ss.str(), paramSize));
    }
    else if(q.op == CALL) {
        int numParams = atoi(q.arguement1.c_str());
        int totalSize = 0, k = 0;

        // We need different registers based on the parameters
        if(numParams > 6) {
            for(int i = 0; i < numParams - 6; i++) {
                string s = parameters.top().first;
                sfile << s << "\tpushq\t%rax" << endl;
                totalSize += parameters.top().second;
                parameters.pop();
            }
            sfile << parameters.top().first << "\tpushq\t%rax" << endl << "\tmovq\t%rax, %r9d" << endl;
            totalSize += parameters.top().second;
            parameters.pop();
            sfile << parameters.top().first << "\tpushq\t%rax" << endl << "\tmovq\t%rax, %r8d" << endl;
            totalSize += parameters.top().second;				
            parameters.pop();
            sfile << parameters.top().first << "\tpushq\t%rax" << endl << "\tmovq\t%rax, %rcx" << endl;
            totalSize += parameters.top().second;
            parameters.pop();
            sfile << parameters.top().first << "\tpushq\t%rax" << endl << "\tmovq\t%rax, %rdx" << endl;
            totalSize += parameters.top().second;
            parameters.pop();
            sfile << parameters.top().first << "\tpushq\t%rax" << endl << "\tmovq\t%rax, %rsi" << endl;
            totalSize += parameters.top().second;
            parameters.pop();
            sfile << parameters.top().first << "\tpushq\t%rax" << endl << "\tmovq\t%rax, %rdi" << endl;
            totalSize += parameters.top().second;
            parameters.pop();
        }
        else {
            while(!parameters.empty()) {
                if(parameters.size() == 6) {
                    sfile << parameters.top().first << "\tpushq\t%rax" << endl << "\tmovq\t%rax, %r9d" << endl;
                    totalSize += parameters.top().second;
                    parameters.pop();
                }
                else if(parameters.size() == 5) {
                    sfile << parameters.top().first << "\tpushq\t%rax" << endl << "\tmovq\t%rax, %r8d" << endl;
                    totalSize += parameters.top().second;
                    parameters.pop();
                }
                else if(parameters.size() == 4) {
                    sfile << parameters.top().first << "\tpushq\t%rax" << endl << "\tmovq\t%rax, %rcx" << endl;
                    totalSize += parameters.top().second;
                    parameters.pop();
                }
                else if(parameters.size() == 3) {
                    sfile << parameters.top().first << "\tpushq\t%rax" << endl << "\tmovq\t%rax, %rdx" << endl;
                    totalSize += parameters.top().second;
                    parameters.pop();
                }
                else if(parameters.size() == 2) {
                    sfile << parameters.top().first << "\tpushq\t%rax" << endl << "\tmovq\t%rax, %rsi" << endl;
                    totalSize += parameters.top().second;
                    parameters.pop();
                }
                else if(parameters.size() == 1) {
                    sfile << parameters.top().first << "\tpushq\t%rax" << endl << "\tmovq\t%rax, %rdi" << endl;
                    totalSize += parameters.top().second;
                    parameters.pop();
                }
            }
        }
        sfile << "\tcall\t" << q.result << endl;
        if(q.arguement2 != "")
            sfile << "\tmovq\t%rax, " << toPrint2 << endl;
        sfile << "\taddq\t$" << totalSize << ", %rsp" << endl;
    }
    else if(q.op == RETURN) {
        if(q.result != "")
            sfile << "\tmovq\t" << toPrintRes << ", %rax" << endl;
        sfile << "\tleave" << endl;
        sfile << "\tret" << endl;
    }

}

// Main function which calls all other relevant functions for generating the target assembly code
void generateTargetCode(ofstream& sfile) {
    printGlobal(sfile);
    printStrings(sfile);
    symbolTable* currFuncTable = NULL;
    symbol* currFunc = NULL;
    setLabels();

    for(int i = 0; i < (int)quadTable.array.size(); i++) {
        // Print the quad as a comment in the assembly file
        sfile << "# " << quadTable.array[i].print() << endl;
        if(labels.count(i))
            sfile << labels[i] << ":" << endl;

        // Necessary tasks for a function
        if(quadTable.array[i].op == FUNC_BEG) {
            i++;
            if(quadTable.array[i].op != FUNC_END)
                i--;
            else
                continue;
            currFunc = globalSymbolTable.searchGlobal(quadTable.array[i].result);
            currFuncTable = currFunc->nestedTable;
            int takingParam = 1, memBind = 16;
            currentSymbolTable = currFuncTable;
            for(int j = 0; j < (int)currFuncTable->symbols.size(); j++) {
                if(currFuncTable->symbols[j]->name == "RETVAL") {
                    takingParam = 0;
                    memBind = 0;
                    if(currFuncTable->symbols.size() > j + 1)
                        memBind = -currFuncTable->symbols[j + 1]->size;
                }
                else {
                    if(!takingParam) {
                        currFuncTable->symbols[j]->offset = memBind;
                        if(currFuncTable->symbols.size() > j + 1)
                            memBind -= currFuncTable->symbols[j + 1]->size;
                    }
                    else {
                        currFuncTable->symbols[j]->offset = memBind;
                        memBind += 8;
                    }
                }
            }
            if(memBind >= 0)
                memBind = 0;
            else
                memBind *= -1;
            funcRunning = quadTable.array[i].result;
            generatePrologue(memBind, sfile);
        }

        // Function epilogue (while leaving a function)
        else if(quadTable.array[i].op == FUNC_END) {
            currentSymbolTable = &globalSymbolTable;
            funcRunning = "";
            sfile << "\tleave" << endl;
            sfile << "\tret" << endl;
            sfile << "\t.size\t" << quadTable.array[i].result << ", .-" << quadTable.array[i].result << endl;
        }

        if(funcRunning != "")
            quadCode(quadTable.array[i], sfile);
    }
}

int main(int argc, char* argv[]) {
    currentSymbolTable = &globalSymbolTable;
    yyparse();

    asmFileName = "asgn6_21CS10005_21CS30031_" + string(argv[argc - 1]) + ".s";
    ofstream sfile;
    sfile.open(asmFileName);

    quadTable.print();               // Print the three address quads

    currentSymbolTable->print("currentSymbolTable.global");         // Print the symbol tables

    currentSymbolTable = &globalSymbolTable;

    generateTargetCode(sfile);      // Generate the target assembly code

    sfile.close();

    return 0;
}