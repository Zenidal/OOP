#include <exception>
#include "Fraction.h"

Fraction::Fraction(int numerator, unsigned int denominator)
{
    if (denominator == 0) {
        throw std::exception();
    }

    this->denominator = denominator;
    this->numerator = numerator;
}

std::string Fraction::toString() const
{
    return std::to_string(numerator) + "/" + std::to_string(denominator);
}

unsigned int Fraction::calcCommonDenominator(const Fraction &fraction) const
{
    return this->denominator * fraction.denominator;
}

Fraction Fraction::operator+(const Fraction &fraction) const
{
    unsigned int commonDenominator = calcCommonDenominator(fraction);

    auto fraction1Numerator = this->numerator * (signed) fraction.denominator;
    auto fraction2Numerator = fraction.numerator * (signed) this->denominator;

    return {fraction1Numerator + fraction2Numerator, (unsigned) commonDenominator};
}

Fraction Fraction::operator-(const Fraction &fraction) const
{
    unsigned int commonDenominator = calcCommonDenominator(fraction);

    auto fraction1Numerator = this->numerator * (signed) fraction.denominator;
    auto fraction2Numerator = fraction.numerator * (signed) this->denominator;


    return {fraction1Numerator - fraction2Numerator, (unsigned) commonDenominator};
}

Fraction Fraction::operator*(const Fraction &fraction) const
{
    return {this->numerator * fraction.numerator, this->denominator * fraction.denominator};
}

Fraction Fraction::operator/(const Fraction &fraction) const
{
    return {this->numerator * (signed) fraction.denominator, this->denominator * fraction.numerator};
}

Fraction Fraction::operator-() const
{
    return {0 - this->numerator, this->denominator};
}

bool Fraction::operator==(const Fraction &fraction) const
{
    auto fraction1Numerator = this->numerator * fraction.denominator;
    auto fraction2Numerator = fraction.numerator * this->denominator;

    return fraction1Numerator == fraction2Numerator;
}

bool Fraction::operator!=(const Fraction &fraction) const
{
    auto fraction1Numerator = this->numerator * fraction.denominator;
    auto fraction2Numerator = fraction.numerator * this->denominator;

    return fraction1Numerator != fraction2Numerator;
}

bool Fraction::operator>(const Fraction &fraction) const
{
    auto fraction1Numerator = this->numerator * fraction.denominator;
    auto fraction2Numerator = fraction.numerator * this->denominator;

    return fraction1Numerator > fraction2Numerator;
}

bool Fraction::operator>=(const Fraction &fraction) const
{
    auto fraction1Numerator = this->numerator * fraction.denominator;
    auto fraction2Numerator = fraction.numerator * this->denominator;

    return fraction1Numerator >= fraction2Numerator;
}

bool Fraction::operator<(const Fraction &fraction) const
{
    return !(*this > fraction);
}

bool Fraction::operator<=(const Fraction &fraction) const
{
    return !(*this >= fraction);
}