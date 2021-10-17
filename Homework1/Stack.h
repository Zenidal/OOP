#ifndef OOP_STACK_H
#define OOP_STACK_H

#define STACK_CAPACITY 10

class Stack
{
    private:
        int values[STACK_CAPACITY] = {};
        int stackSize = 0;

    public:
        void reset();

        bool push(int value);

        int pop();

        void print();
};


#endif //OOP_STACK_H
