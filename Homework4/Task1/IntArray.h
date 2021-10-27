#ifndef OOP_INTARRAY_H
#define OOP_INTARRAY_H

#include <iostream>

class IntArray
{
    private:
        size_t size;
        int *values;

        void quickSort(int *array, size_t low, size_t high);

        static size_t partition(int *array, size_t low, size_t high);

        static void swap(int *a, int *b);

    public:
        IntArray();

        ~IntArray();

        void sort();

        void push(int value);

        int popBack();

        int popFront();

        void print() const;
};


#endif //OOP_INTARRAY_H
