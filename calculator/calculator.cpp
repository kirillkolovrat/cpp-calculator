// В этом файле определения функций.
// За основу возьмите решение предыдущей задачи.
// В этом файле определения функций.
// За основу возьмите решение предыдущей задачи.

#include <iostream>
#include <cmath>
#include "calculator.h"

using namespace std;
using namespace literals;

bool RunCalculatorCycle() {

    Number resault;
    Number number;
    Number memory = 0.;
    bool memory_is_empty = true;
    string op;

    if (!(ReadNumber(resault)))
        return false;
    
    while (true) {
        if (ReadOperator(op)) {
            if (op == "q"s){
                break;
            } else if (op == "l"s) {
                if (memory_is_empty) {
                    cerr << "Error: Memory is empty" << endl;
                    return false;
                } else {
                    resault = memory;
                }
            } else if (op == ":"s) {
                if (ReadNumber(resault)) {
                    continue;
                } 
            } else if (op == "c"s) {
                resault = 0.;
            } else if (op == "=") {
                cout << resault << std::endl;
            } else if (op == "s"s) {
                memory = resault;
                memory_is_empty = false;
            } else if (ReadNumber(number)) {
                СalculateExpression(resault, number, op); 
            } else {
                break;
            }
            continue; 
        }

        return false;    

    }

    return true;

}

bool ReadNumber(Number& resault) {

    if (cin >> resault) {

        return true;
        
    } else {    
        cerr << "Error: Numeric operand expected" << endl;
        
        return false;
         
    }
}

bool ReadOperator(string& op) {

    if (cin >> op) {
        if (op.size() == 1 && "+-*//=:qcsl"s.find_first_of(op) != string::npos)  {

            return true;

        } else if (op.size() == 2 && op == "**"s) {

            return true;

        }
    }
    
    cerr << "Error: Unknown token " << op << endl;
    
    return false;

}

void СalculateExpression(Number& resault, Number& number, string& op) {

    if (op == "/"s)
        resault /= number;

    if (op == "**"s)
        resault = pow(resault, number);

    if (op == "*"s)
        resault *= number;

    if (op == "+")
        resault += number;

    if (op == "-")
        resault -= number;

}