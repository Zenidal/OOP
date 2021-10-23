#include <iostream>

#include "Homework2/Task1/Student.h"

#include "Homework3/Task1/Circle.h"
#include "Homework3/Task1/Parallelogram.h"
#include "Homework3/Task1/Rectangle.h"
#include "Homework3/Task1/Square.h"
#include "Homework3/Task1/Rhombus.h"

#include "Homework3/Task2/Car.h"
#include "Homework3/Task2/Bus.h"
#include "Homework3/Task2/PassengerCar.h"
#include "Homework3/Task2/Minivan.h"

#include "Homework3/Task3/Fraction.h"

short Student::studentsCounter = 0;

int main()
{
    { // task 1
        auto circle = Circle(5.6);
        auto parallelogram = Parallelogram(4, 5.6, 137);
        auto rectangle = Rectangle(4, 5.6);
        auto square = Square(5.6);
        auto rhombus = Rhombus(5.6, 37);

        std::cout << "Circle area: " << circle.area() << std::endl;
        std::cout << "Parallelogram area: " << parallelogram.area() << std::endl;
        std::cout << "Rectangle area: " << rectangle.area() << std::endl;
        std::cout << "Square area: " << square.area() << std::endl;
        std::cout << "Rhombus area: " << rhombus.area() << std::endl;
    }

    std::cout << std::endl;

    { // task 2
        auto car = Car("Car Company", "Car Model");
        auto bus = Bus("Bus Company", "Bus Model");
        auto passengerCar = PassengerCar("Passenger Car Company", "Passenger Car Model");
        auto minivan = Minivan("Minivan Company", "Minivan Model");

        std::cout << "Car info: " << car.getInfo() << std::endl;
        std::cout << "Bus info: " << bus.getInfo() << std::endl;
        std::cout << "Passenger Car info: " << passengerCar.getInfo() << std::endl;
        std::cout << "Minivan info: " << minivan.getInfo() << std::endl;
    }

    std::cout << std::endl;

    { // task 3
        auto fraction1 = Fraction(2, 10);
        auto fraction2 = Fraction(1, 5);
        auto fraction3 = Fraction(-5, 10);

        std::cout << "f1 + f2: " << (fraction1 + fraction2).toString() << std::endl;
        std::cout << "f1 + f3: " << (fraction1 + fraction3).toString() << std::endl;

        std::cout << "f1 - f2: " << (fraction1 - fraction2).toString() << std::endl;
        std::cout << "f1 - f3: " << (fraction1 - fraction3).toString() << std::endl;

        std::cout << "f1 * f2: " << (fraction1 * fraction2).toString() << std::endl;
        std::cout << "f1 * f3: " << (fraction1 * fraction3).toString() << std::endl;

        std::cout << "f1 / f2: " << (fraction1 / fraction2).toString() << std::endl;
        std::cout << "f1 / f3: " << (fraction1 / fraction3).toString() << std::endl;
        std::cout << "f3 / f2: " << (fraction3 / fraction2).toString() << std::endl;

        std::cout << "f1 == f2: " << std::boolalpha << (fraction1 == fraction2) << std::endl;
        std::cout << "f1 == f3: " << std::boolalpha << (fraction1 == fraction3) << std::endl;

        std::cout << "f1 != f2: " << std::boolalpha << (fraction1 != fraction2) << std::endl;
        std::cout << "f1 != f3: " << std::boolalpha << (fraction1 != fraction3) << std::endl;

        std::cout << "f1 < f2: " << std::boolalpha << (fraction1 < fraction2) << std::endl;
        std::cout << "f1 < f3: " << std::boolalpha << (fraction1 < fraction3) << std::endl;

        std::cout << "f1 > f2: " << std::boolalpha << (fraction1 > fraction2) << std::endl;
        std::cout << "f1 > f3: " << std::boolalpha << (fraction1 > fraction3) << std::endl;

        std::cout << "f1 >= f2: " << std::boolalpha << (fraction1 >= fraction2) << std::endl;
        std::cout << "f1 >= f3: " << std::boolalpha << (fraction1 >= fraction3) << std::endl;

        std::cout << "f1 <= f2: " << std::boolalpha << (fraction1 <= fraction2) << std::endl;
        std::cout << "f1 <= f3: " << std::boolalpha << (fraction1 <= fraction3) << std::endl;

        std::cout << "-f1: " << std::boolalpha << (-fraction1).toString() << std::endl;
        std::cout << "-f3: " << std::boolalpha << (-fraction3).toString() << std::endl;
    }

    return 0;
}