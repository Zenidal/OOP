#include "cmath"

#include "Robot.h"
#include "OffTheField.h"
#include "IllegalCommand.h"

void Robot::move(int x, int y)
{
    if (abs(x - this->x) > 1 || abs(y - this->y) > 1) {
        throw IllegalCommand(this->x, this->y, x, y);
    }

    if (x > 9 || x < 0 || y > 9 || y < 0) {
        throw OffTheField(this->x, this->y, x, y);
    }

    this->x = x;
    this->y = y;
}