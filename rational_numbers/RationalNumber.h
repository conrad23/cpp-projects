#ifndef CIS263_RATIONAL_NUMBER_H
#define CIS263_RATIONAL_NUMBER_H
#include <string>
using std::string;
class RationalNumber {
public:
    RationalNumber();
    RationalNumber(int numer, int denom);
    int getNumerator() const;
    int getDenominator() const;
    RationalNumber reciprocal() const;
    RationalNumber add(const RationalNumber& op2) const;
    RationalNumber subtract(const RationalNumber& op2) const;
    RationalNumber multiply(const RationalNumber& op2) const;
    RationalNumber divide(const RationalNumber& op2) const;
    bool isLike(const RationalNumber& op2) const;
    std::string toString() const;

private:
    int numerator;
    int denominator;
    void reduce();
    int gcd(int num1, int num2) const;
};

#endif //CIS263_RATIONAL_NUMBER_H
