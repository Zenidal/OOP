#include "Power.h"
#include <math.h>

Power::Power()
{
    value = 1.0;
    degree = 1.0;
}

void Power::setDegree(double newDegree)
{
    degree = newDegree;
}

void Power::setValue(double newValue)
{
    value = newValue;
}

double Power::calculate()
{
    return pow(value, degree);
}