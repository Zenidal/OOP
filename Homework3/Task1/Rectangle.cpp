#include "Rectangle.h"

Rectangle::Rectangle(double width, double height) : Parallelogram(width, height, 90)
{}

double Rectangle::area() const
{
    return width * height;
}
