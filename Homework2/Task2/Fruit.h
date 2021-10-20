#ifndef OOP_FRUIT_H
#define OOP_FRUIT_H

#include <string>

class Fruit
{
    private:
        std::string name;
        std::string color;
    public:
        Fruit(const std::string &name, const std::string &color);

        const std::string &getName() const;

        const std::string &getColor() const;
};


#endif //OOP_FRUIT_H
