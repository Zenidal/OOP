#ifndef OOP_CIRCLE_H
#define OOP_CIRCLE_H

#include "Figure.h"

class Circle : public Figure
{
    private:
        double radius;
    public:
        Circle(double radius);
        double area() const override;
};


#endif //OOP_CIRCLE_H
