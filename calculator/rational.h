#pragma once

#include <numeric>
#include <cstdint>
#include <iostream>

class Rational {
public:
    Rational() = default;

    Rational(int value): numerator_(value), denominator_(1){}

    Rational(const int num, const int den){
        if (den != 0){
            numerator_ = num;
            denominator_ = den;
            Reduction();
        }
    }

    Rational(const Rational& other){
        numerator_   = other.numerator_;
        denominator_ = other.denominator_;
    }

    int GetNumerator() const {return numerator_;};

    int GetDenominator() const {return denominator_;};

    Rational Inv() const {return Rational(denominator_, numerator_);};

    Rational operator+(const Rational& other) const{
        int num = numerator_ * other.denominator_ + other.numerator_ * denominator_;
        int den = denominator_ * other.denominator_;

        return {num, den};
    }

    Rational operator-(const Rational& other) const{
        int num = numerator_ * other.denominator_ - other.numerator_ * denominator_;
        int den = denominator_ * other.denominator_;

        return {num, den};
    }

    Rational operator*(const Rational& other) const{
        return {numerator_ * other.numerator_, denominator_ * other.denominator_};
    }

    Rational operator/(const Rational& other) const{
        return {numerator_ * other.denominator_, denominator_ * other.numerator_};
    }

    Rational& operator=(int value){
        numerator_ = value;
        denominator_ = 1;

        return *this;
    }

    Rational& operator=(const Rational& other){
        numerator_ = other.numerator_;
        denominator_ = other.denominator_;

        return *this;
    }

    Rational& operator+=(const Rational& other){
        this = this + other;
        Reduction();

        return *this;
    }

    Rational& operator-=(const Rational& other){
        this = this - other;
        Reduction();

        return *this;
    }

    Rational& operator*=(const Rational& other){
        this = this * other;
        Reduction();

        return *this;
    }

    Rational& operator/=(const Rational& other){
        this = this / other;
        Reduction();

        return *this;
    }

    Rational operator+() const {return {numerator_, denominator_};}

    Rational operator-() const {return {-numerator_, denominator_};}

    friend std::istream& operator>>(std::istream& is, Rational& rat);

    friend std::ostream& operator<<(std::ostream& is, const Rational& rat);

private:
    void Reduction() {
        if (denominator_ < 0) {
            numerator_ = -numerator_;
            denominator_ = -denominator_;
        }
        const int divisor = std::gcd(numerator_, denominator_);
        numerator_ /= divisor;
        denominator_ /= divisor;
    };

    int numerator_ = 0;
    std::int64_t denominator_ = 1;
};

inline std::istream& operator>>(std::istream& is, Rational& rat){
    int num = 0;
    int den = 0;
    char div;

    if (!(is >> num)){
        return is;
    }

    if (!(is >> std::ws >> div)) {
        rat.numerator_ = num;
        rat.denominator_ = 1;

        is.clear();
        return is;
    }

    if (div != '/') {
        rat.numerator_ = num;
        rat.denominator_ = 1;

        is.unget();
        return is;
    }

    if (!(is >> den) || (den == 0)) {
        is.setstate(std::ios::failbit);
        return is;
    }

    rat.numerator_ = num;
    rat.denominator_ = den;

    return is;
}

inline std::ostream& operator<<(std::ostream& os, const Rational& rat){
    if(rat.denominator_ == 1){
        os << rat.numerator_;

        return os;
    }

    if(rat.numerator_ == rat.denominator_) {
        os << "1";

        return os;
    }

    os << rat.numerator_ << " " << "/" << " " << rat.denominator_;

    return os;
}

inline auto operator<=>(const Rational& l, const Rational& r){
    return (static_cast<std::int64_t>(l.GetNumerator()) * r.GetDenominator()) <=> (static_cast<std::int64_t>(r.GetNumerator()) * l.GetDenominator());
}

inline auto operator==(const Rational& l, const Rational& r){
    return (static_cast<std::int64_t>(l.GetNumerator()) * r.GetDenominator()) == (static_cast<std::int64_t>(r.GetNumerator()) * l.GetDenominator());
}
