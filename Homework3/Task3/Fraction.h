#ifndef OOP_FRACTION_H
#define OOP_FRACTION_H

#include <string>

class Fraction
{
    private:
        int numerator;
        int unsigned denominator;

    public:
        Fraction(int numerator, unsigned int denominator);

        std::string toString() const;

        Fraction operator+(const Fraction &fraction) const;

        Fraction operator-(const Fraction &fraction) const;

        Fraction operator*(const Fraction &fraction) const;

        Fraction operator/(const Fraction &fraction) const;

        Fraction operator-() const;

        bool operator==(const Fraction &fraction) const;

        bool operator!=(const Fraction &fraction) const;

        bool operator<(const Fraction &fraction) const;

        bool operator>(const Fraction &fraction) const;

        bool operator<=(const Fraction &fraction) const;

        bool operator>=(const Fraction &fraction) const;

    private:
        unsigned int calcCommonDenominator(const Fraction &fraction) const;
};


#endif //OOP_FRACTION_H
