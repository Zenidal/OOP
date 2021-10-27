#ifndef OOP_CAR_H
#define OOP_CAR_H

#include <string>

class Car
{
    private:
        std::string company;
        std::string model;
    public:
        Car(const std::string &company, const std::string &model);

        std::string getInfo() const;
};


#endif //OOP_CAR_H
