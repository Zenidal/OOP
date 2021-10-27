#include <math.h>

#include "Circle.h"

Circle::Circle(double radius) : radius(radius)
{}

double Circle::area() const
{
    return M_PI * pow(radius, 2);
}