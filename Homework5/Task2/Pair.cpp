#include "Pair.h"

template<typename T1, typename T2>
T1 Pair<T1, T2>::first() const
{
    return value1;
}

template<typename T1, typename T2>
T2 Pair<T1, T2>::second() const
{
    return value2;
}