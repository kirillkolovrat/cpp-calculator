// В этом файле объявления функций.
#pragma once

#include <string>

using Number = double;
using namespace std;

bool RunCalculatorCycle();
bool ReadNumber(Number& resault);
bool ReadOperator(string& op);
bool СalculateExpression(Number& resault, Number& number, string& op);