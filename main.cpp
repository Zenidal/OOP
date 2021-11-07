#include <iostream>
#include <limits>

#include "Homework2/Task1/Student.h"

short Student::studentsCounter = 0;

std::ostream &endll(std::ostream &os)
{
    os << "\n\n";

    os.flush();

    return os;
}

int main()
{
    { // task 1
        int value;
        bool isValidValue = false;

        do {
            std::cout << "Please enter integer value: " << std::endl;
            std::cin >> value;

            if (std::cin.good()) {
                isValidValue = true;
            } else {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

                isValidValue = false;

                std::cerr << value << " is not valid integer value." << std::endl;
            }
        } while (!isValidValue);
    }

    std::cout << std::endl << std::endl;

    { // task 2
        std::cout << "Line 1" << endll << "Line 2" << std::endl;
    }

    std::cout << std::endl << std::endl;

    return 0;
}