#pragma once

#include <string>
#include <optional>
#include "rational.h"
#include "pow.h"

using Error = std::string;

template <typename T>
class Calculator {
public:

    void Set(T n) {active_number_ = n;}

    T GetNumber() const {return active_number_;}

    std::optional<Error> Add(T n) {
        active_number_ += n;
        return std::optional<Error>(std::nullopt);
    }

    std::optional<Error> Sub(T n) {
        active_number_ -= n;
        return std::optional<Error>(std::nullopt);
    }

    std::optional<Error> Div(T n) {
        if constexpr (std::is_same_v<T, Rational> || std::is_integral_v<T>){
            if (n == 0)
                return std::optional<Error>("Division by zero");
        };

        active_number_ /= n;
        return std::optional<Error>(std::nullopt);
    }

    std::optional<Error> Mul(T n) {
        active_number_ *= n;
        return std::optional<Error>(std::nullopt);
    }

    std::optional<Error> Pow(T n) {
        if (active_number_ == 0 && n == 0)
            return std::optional<Error>("Zero power to zero");

        if constexpr(std::is_same_v<T, Rational>){
            if (n.GetDenominator() != 1)
                return std::optional<Error>("Fractional power is not supported");
        };

        if constexpr (std::is_integral_v<T>) {
            if (n < 0)
                return std::optional<Error>("Integer negative power");
        };

        active_number_ = ::Pow(active_number_, n);
        return std::optional<Error>(std::nullopt);
    }

    void Save() {memory_ = active_number_;}

    void Clear() {memory_.Clear();}

    void Load(){active_number_ = memory_.value();}

    bool GetHasMem() const {return memory_.has_value();}

    std::string GetNumberRepr() const {return std::to_string(active_number_);}

private:
    T active_number_= 0;

    std::optional<T> memory_;
};
