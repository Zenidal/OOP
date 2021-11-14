#include "OffTheField.h"

OffTheField::OffTheField(int originalX, int originalY, int newX, int newY) : originalX(originalX), originalY(originalY), newX(newX), newY(newY)
{}

const char *OffTheField::what() const noexcept
{
    return "You can not move to that position.";
}

int OffTheField::getOriginalX() const
{
    return originalX;
}

int OffTheField::getOriginalY() const
{
    return originalY;
}

int OffTheField::getNewX() const
{
    return newX;
}

int OffTheField::getNewY() const
{
    return newY;
}
