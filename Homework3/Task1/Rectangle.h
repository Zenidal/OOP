#ifndef OOP_RECTANGLE_H
#define OOP_RECTANGLE_H

#include "Parallelogram.h"

class Rectangle : Parallelogram
{
    public:
        Rectangle(double width, double height);

        double area() const override;
};


#endif //OOP_RECTANGLE_H
