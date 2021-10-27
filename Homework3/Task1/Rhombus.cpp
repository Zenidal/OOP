#include <cmath>

#include "Rhombus.h"

Rhombus::Rhombus(double size, double angle) : Parallelogram(size, size, angle)
{}

double Rhombus::area() const
{
    return width * width * sin(angle);
}
