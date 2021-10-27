#include <iostream>

#include "Car.h"

Car::Car(const std::string &company, const std::string &model) : company(company), model(model)
{}

std::string Car::getInfo() const
{
    return "Company " + company + ", model " + model ;
}