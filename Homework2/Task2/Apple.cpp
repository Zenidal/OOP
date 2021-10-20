#include <string>

#include "Apple.h"

Apple::Apple() : Fruit("apple", "red")
{}

Apple::Apple(const std::string &color) : Fruit("apple", color)
{}

Apple::Apple(const std::string &name, const std::string &color) : Fruit(name, color)
{
}