#ifndef OOP_MINIVAN_H
#define OOP_MINIVAN_H

#include "Bus.h"
#include "PassengerCar.h"

class Minivan : public Bus, PassengerCar
{
    public:
        Minivan(const std::string &company, const std::string &model);
};


#endif //OOP_MINIVAN_H
