#include "Person.h"

const std::string &Person::getName() const
{
    return name;
}

short Person::getAge() const
{
    return age;
}

short Person::getWeight() const
{
    return weight;
}

Gender Person::getGender() const
{
    return gender;
}

void Person::setName(const std::string &name)
{
    this->name = name;
}

void Person::setAge(short age)
{
    this->age = age;
}

void Person::setWeight(short weight)
{
    this->weight = weight;
}

void Person::setGender(Gender gender)
{
    this->gender = gender;
}
