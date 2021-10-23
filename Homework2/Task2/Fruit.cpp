#include "Fruit.h"

Fruit::Fruit(const std::string &name, const std::string &color) : name(name), color(color)
{}

const std::string &Fruit::getName() const
{
    return name;
}

const std::string &Fruit::getColor() const
{
    return color;
}
