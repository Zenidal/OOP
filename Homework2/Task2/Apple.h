#ifndef OOP_APPLE_H
#define OOP_APPLE_H

#include "Fruit.h"

class Apple : public Fruit
{
    public:
        Apple();
        Apple(const std::string &color);
        Apple(const std::string &name, const std::string &color);
};


#endif //OOP_APPLE_H
