#include "DivisionByZero.h"

template<class T>
T divide(T value, T divider)
{
    if (divider == (T) 0) {
        throw DivisionByZero();
    }

    return value / divider;
}
