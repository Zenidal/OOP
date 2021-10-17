#include <iostream>
#include <exception>

#include "Stack.h"

void Stack::reset()
{
    stackSize = 0;

    for (int &value: values) {
        value = 0;
    }
}

bool Stack::push(int value)
{
    if ((stackSize + 1) >= STACK_CAPACITY) {
        return false;
    }

    values[stackSize++] = value;

    return true;
}

int Stack::pop()
{
    if (stackSize == 0) {
        throw std::exception(); //I'm too lazy to make custom exception so let's use this simple one :=)
    }

    return values[stackSize--];
}

void Stack::print()
{
    std::cout << "Stack capacity: " << stackSize << std::endl;

    for (int i = 0; i < stackSize; i++) {
        if (i > 0) {
            std::cout << " ";
        }

        std::cout << values[i];
    }

    std::cout << std::endl;
}