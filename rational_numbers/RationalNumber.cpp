#include "RationalNumber.h"
#include <cmath>

RationalNumber::RationalNumber() { }

RationalNumber::RationalNumber(int numer, int denom) {
    if (denom == 0)
        denom = 1;
    if (denom < 0) {
        numer = numer * -1;
        denom = denom * -1;
    }

    numerator = numer;
    denominator = denom;

    reduce();
}

int RationalNumber::getNumerator() const {
    return numerator;
}

int RationalNumber::getDenominator() const {
    return denominator;
}

RationalNumber RationalNumber::reciprocal() const {
    return RationalNumber(denominator, numerator);
}

RationalNumber RationalNumber::add(const RationalNumber& op2) const {
    int commonDenominator = denominator * op2.getDenominator();
    int numerator1 = numerator * op2.getDenominator();
    int numerator2 = op2.getNumerator() * denominator;
    int sum = numerator1 + numerator2;

    return RationalNumber(sum, commonDenominator);
}

RationalNumber RationalNumber::subtract(const RationalNumber& op2) const {
    int commonDenominator = denominator * op2.getDenominator();
    int numerator1 = numerator * op2.getDenominator();
    int numerator2 = op2.getNumerator() * denominator;
    int difference = numerator1 - numerator2;

    return RationalNumber(difference, commonDenominator);
}

RationalNumber RationalNumber::multiply(const RationalNumber& op2) const {
    int numer = numerator * op2.getNumerator();
    int denom = denominator * op2.getDenominator();

    return RationalNumber(numer, denom);
}

RationalNumber RationalNumber::divide(const RationalNumber& op2) const {
    return multiply(op2.reciprocal());
}

bool RationalNumber::isLike(const RationalNumber& op2) const {
    return ( numerator == op2.getNumerator() && denominator == op2.getDenominator());
}

std::string RationalNumber::toString() const {
    std::string result;

    if (numerator == 0)
        result = "0";
    else {
        if (denominator == 1)
            result = std::to_string(numerator) + "";
        else
            result = std::to_string(numerator) + "/" + std::to_string(denominator);
    }

    return result;
}

void RationalNumber::reduce() {
    if (numerator != 0) {
        int common = gcd(std::abs(numerator), std::abs(denominator));

        numerator = numerator / common;
        denominator = denominator / common;
    }
}
int RationalNumber::gcd(int num1, int num2) const {
    while (num1 != num2) {
        if (num1 > num2)
            num1 = num1 - num2;
        else
            num2 = num2 - num1;
    }

    return num1;
}
