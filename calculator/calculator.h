#pragma once

#include <string>

using Number = double;

class CalcMemory {
public:
    void Set(double number);

    double Value() const;

    bool IsEmpty() const;

    void Clear();

private:
    double current_number_ = 0.0;

    bool empty_ = true;
};

class Calculator {
public:
    void Set(Number n);

    Number GetNumber() const;

    void Add(Number n);

    void Sub(Number n);

    void Div(Number n);

    void Mul(Number n);

    void Pow(Number n);

    void Save();

    void Clear();

    void Load();

    bool HasMem() const;

    std::string GetNumberRepr() const;

private:
    Number active_number_ = 0;

    CalcMemory memory_;
};
