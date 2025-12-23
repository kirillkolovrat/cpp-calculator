#include "calculator.h"

#include <cmath>

void Calculator::Set(Number n) {active_number_ = n;}

Number Calculator::GetNumber() const {return active_number_;}

void Calculator::Add(Number n) {active_number_ += n;}

void Calculator::Sub(Number n) {active_number_ -= n;}

void Calculator::Div(Number n) {active_number_ /= n;}

void Calculator::Mul(Number n) {active_number_ *= n;}

void Calculator::Pow(Number n) {active_number_ = std::pow(active_number_, n);}

void Calculator::Save() {

    memory_.Set(active_number_);
}

void Calculator::Clear() {

    memory_.Clear();
}

void Calculator::Load() {

    active_number_ = memory_.Value();
}

bool Calculator::HasMem() const {

    return !(memory_.IsEmpty());

}

std::string Calculator::GetNumberRepr() const {return std::to_string(active_number_);}

void CalcMemory::Set(double number) {

    current_number_ = number;
    empty_ = false;
}

double CalcMemory::Value() const {

    return current_number_;

}

bool CalcMemory::IsEmpty() const {

    return empty_;
}

void CalcMemory::Clear() {

    current_number_ = 0.0;
    empty_ = true;
}
