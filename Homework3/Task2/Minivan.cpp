#include "Minivan.h"

Minivan::Minivan(const std::string &company, const std::string &model) : Bus(company, model), PassengerCar(company, model), Car(company, model)
{}
