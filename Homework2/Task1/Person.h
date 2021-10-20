#ifndef OOP_PERSON_H
#define OOP_PERSON_H

#include <string>

enum Gender
{
    MALE,
    FEMALE
};

class Person
{
    private:
        std::string name;
        short age;
        short weight;
        Gender gender;

    public:
        const std::string &getName() const;

        short getAge() const;

        short getWeight() const;

        Gender getGender() const;

        void setName(const std::string &name);

        void setAge(short age);

        void setWeight(short weight);

        void setGender(Gender gender);
};


#endif //OOP_PERSON_H
