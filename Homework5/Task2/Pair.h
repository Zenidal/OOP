#ifndef OOP_PAIR_H
#define OOP_PAIR_H

#include <string>

template<typename T1, typename T2>
class Pair
{
    private:
        T1 value1;
        T2 value2;
    public:
        Pair(T1 value1, T2 value2) : value1(value1), value2(value2)
        {}

        T1 first() const;

        T2 second() const;
};


#endif //OOP_PAIR_H
