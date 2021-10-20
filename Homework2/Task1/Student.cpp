#include "Student.h"

short Student::getCourse() const
{
    return course;
}

void Student::setCourse(short course)
{
    this->course = course;
}

Student::Student()
{
    studentsCounter++;
}

Student::~Student()
{
    studentsCounter--;
}

short Student::getStudentsCounter()
{
    return studentsCounter;
}
