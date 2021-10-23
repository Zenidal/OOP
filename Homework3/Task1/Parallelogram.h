#ifndef OOP_PARALLELOGRAM_H
#define OOP_PARALLELOGRAM_H

#include "Figure.h"

class Parallelogram : public Figure
{
    protected:
        double width;
        double height;
        double angle;
    public:
        Parallelogram(double width, double height, double angle);

        double area() const override;
};


#endif //OOP_PARALLELOGRAM_H
