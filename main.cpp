#include <iostream>

#include "Homework2/Task1/Student.h"

#include "Homework5/Task1/Pair1.h"
#include "Homework5/Task1/Pair1.cpp" // to avoid link errors
#include "Homework5/Task2/Pair.h"
#include "Homework5/Task2/Pair.cpp" // to avoid link errors
#include "Homework5/Task3/StringValuePair.h"

short Student::studentsCounter = 0;

int main()
{
    { // task 1
        Pair1<int> p1(6, 9);
        std::cout << "Pair: " << p1.first() << ' ' << p1.second() << '\n';

        const Pair1<double> p2(3.4, 7.8);
        std::cout << "Pair: " << p2.first() << ' ' << p2.second() << '\n';

    }

    std::cout << std::endl << std::endl;

    { // task 2
        Pair<int, double> p1(6, 7.8);
        std::cout << "Pair: " << p1.first() << ' ' << p1.second() << '\n';

        const Pair<double, int> p2(3.4, 5);
        std::cout << "Pair: " << p2.first() << ' ' << p2.second() << '\n';

    }

    std::cout << std::endl << std::endl;

    { // task 3
        StringValuePair<int> svp("Amazing", 7);
        std::cout << "Pair: " << svp.first() << ' ' << svp.second() << '\n';
    }

    return 0;
}