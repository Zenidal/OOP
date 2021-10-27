#ifndef OOP_SQUARE_H
#define OOP_SQUARE_H

#include "Parallelogram.h"

class Square : Parallelogram
{
    public:
        Square(double size);

        double area() const override;
};


#endif //OOP_SQUARE_H
