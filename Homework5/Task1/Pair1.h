#ifndef OOP_PAIR1_H
#define OOP_PAIR1_H

template<typename T>

class Pair1
{
    private:
        T value1;
        T value2;
    public:
        Pair1(T value1, T value2) : value1(value1), value2(value2)
        {}

        T first() const;

        T second() const;
};


#endif //OOP_PAIR1_H
