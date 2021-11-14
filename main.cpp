#include <iostream>

#include "Homework8/Task1/Task1.cpp"
#include "Homework8/Task2/Bar.h"
#include "Homework8/Task2/Ex.h"
#include "Homework8/Task3/Robot.h"
#include "Homework8/Task3/IllegalCommand.h"

void move(Robot &robot, int x, int y)
{
    try {
        robot.move(x, y);
    } catch (IllegalCommand e) {
        std::cerr << "Illegal command. New position (" << e.getNewX() << ", " << e.getNewY() << "). Original Position (" << e.getOriginalX() << ", " << e.getOriginalY() << ")" << std::endl;
    } catch (OffTheField e) {
        std::cerr << "Off the field. New position (" << e.getNewX() << ", " << e.getNewY() << "). Original Position (" << e.getOriginalX() << ", " << e.getOriginalY() << ")" << std::endl;
    }
}

int main()
{
    { // task 1
        try {
            double value = 5.0;
            double divider = 0;

            std::cout << value << "/" << divider << " = ";
            std::cout << divide(value, divider) << std::endl;
        } catch (DivisionByZero &e) {
            std::cerr << e.what() << std::endl;
        }
    }

    std::cout << std::endl << std::endl;

    { // task 2
        Bar bar;

        try {
            int n;

            do {
                std::cout << "Input n: " << std::endl;
                std::cin >> n;
                bar.setY(n);
            } while (n != 0);
        } catch (Ex e) {
            std::cerr << e.getX() << std::endl;
        }
    }

    std::cout << std::endl << std::endl;

    { // task3
        auto robot = Robot();

        move(robot, 32, 23);
        move(robot, -1, 0);
        move(robot, 1, 1);
    }

    return 0;
}