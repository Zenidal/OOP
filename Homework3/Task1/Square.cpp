#include "Square.h"

Square::Square(double size) : Parallelogram(size, size, 90)
{}

double Square::area() const
{
    return width * height;
}
