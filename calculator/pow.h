#pragma once

#include "rational.h"

template<class Number>
Number IntegerPow(Number l_op, Number r_op) {
    Number res = 1;
    while (r_op > 0) {
        if (r_op & 1) {
            res *= l_op;
        }
        r_op >>= 1;
        l_op *= l_op;
    }
    return res;
}

template <typename T>
T Pow(T l_op, T r_op ) {
    return IntegerPow(l_op, r_op);
}

inline Rational Pow(Rational lhs, Rational rhs) {
    if (rhs.GetDenominator() != 1) {
        std::abort();
    }
    auto pow = rhs.GetNumerator();
    if (pow >= 0) {
        return {IntegerPow(lhs.GetNumerator(), pow), IntegerPow(lhs.GetDenominator(), pow)};
    } else {
        return {IntegerPow(lhs.GetDenominator(), -pow), IntegerPow(lhs.GetNumerator(), -pow)};
    }
}

inline float Pow(float l_op, float r_op) {
    return std::pow(l_op, r_op);
}

inline double Pow(double l_op, double r_op) {
    return std::pow(l_op, r_op);
}
