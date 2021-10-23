#ifndef OOP_RHOMBUS_H
#define OOP_RHOMBUS_H

#include "Parallelogram.h"

class Rhombus : Parallelogram
{
    public:
        Rhombus(double size, double angle);

        double area() const override;
};


#endif //OOP_RHOMBUS_H
