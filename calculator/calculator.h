#pragma once

#include <string>

using Number = double;

bool RunCalculatorCycle();
bool ReadNumber(Number& resault);
bool ReadOperator(std::string& op);
void СalculateExpression(Number& resault, Number& number, std::string& op);