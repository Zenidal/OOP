#ifndef OOP_BUS_H
#define OOP_BUS_H

#include "Car.h"

class Bus : public virtual Car
{
    public:
        Bus(const std::string &company, const std::string &model);
};


#endif //OOP_BUS_H
