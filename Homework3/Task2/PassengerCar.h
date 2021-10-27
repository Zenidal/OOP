#ifndef OOP_PASSENGERCAR_H
#define OOP_PASSENGERCAR_H

#include "Car.h"

class PassengerCar : public virtual Car
{
    public:
        PassengerCar(const std::string &company, const std::string &model);
};


#endif //OOP_PASSENGERCAR_H
