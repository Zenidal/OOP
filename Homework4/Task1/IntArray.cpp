#include "IntArray.h"


IntArray::IntArray()
{
    values = new int[0];

    size = 0;
}

IntArray::~IntArray()
{
    delete[] values;
}

void IntArray::print() const
{
    for (size_t i = 0; i < size; i++) {
        if (i > 0) {
            std::cout << ' ';
        }

        std::cout << values[i];
    }

    std::cout << std::endl << "Array size: " << size << std::endl;
}

void IntArray::push(int value)
{
    int *newArray = new int[size + 1];

    for (size_t i = 0; i < size; i++) {
        newArray[i] = values[i];
    }

    newArray[size] = value;

    delete[] values;
    values = newArray;
    size++;
}

int IntArray::popBack()
{
    size--;

    int *newArray = new int[size];

    for (size_t i = 0; i < size; i++) {
        newArray[i] = values[i];
    }

    auto lastElement = values[size];

    delete[] values;
    values = newArray;

    return lastElement;
}

int IntArray::popFront()
{
    int *newArray = new int[size];

    for (size_t i = 1; i < size; i++) {
        newArray[i - 1] = values[i];
    }

    auto firstElement = values[0];

    delete[] values;
    values = newArray;
    size--;

    return firstElement;
}

void IntArray::sort()
{
    quickSort(values, 0, size - 1);
}

void IntArray::quickSort(int *array, size_t low, size_t high)
{
    auto left = low;
    auto right = high;
    auto pivot = array[(left + right) / 2];
    int temp;

    while (left <= right) {
        while (array[left] < pivot) {
            left++;
        }
        while (array[right] > pivot) {
            right--;
        }
        if (left <= right) {
            temp = array[left];
            array[left] = array[right];
            array[right] = temp;
            left++;
            right--;
        }
    }
    if (right > low) {
        quickSort(array, low, right);
    }
    if (left < high) {
        quickSort(array, left, high);
    }
}