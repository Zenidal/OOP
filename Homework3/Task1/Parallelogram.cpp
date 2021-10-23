#include "math.h"
#include "cmath"

#include "Parallelogram.h"

Parallelogram::Parallelogram(double width, double height, double angle)
{
    this->width = width;
    this->height = height;
    this->angle = angle * M_PI / 180; // convert angles to rad
}

double Parallelogram::area() const
{
    return width * height * sin(angle);
}
