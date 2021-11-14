#include "Bar.h"
#include "Ex.h"

void Bar::setY(double a)
{
    if (y + a > 100) {
        throw Ex(y * a);
    }

    Bar::y = a;
}
