#ifndef OOP_STUDENT_H
#define OOP_STUDENT_H

#include "Person.h"

class Student : public Person
{
    private:
        short course;

        static short studentsCounter;

    public:
        Student();

        ~Student();

        short getCourse() const;

        void setCourse(short course);

        static short getStudentsCounter();
};

short Student::studentsCounter = 0;

#endif //OOP_STUDENT_H
