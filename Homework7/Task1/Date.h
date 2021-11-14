#ifndef OOP_DATE_H
#define OOP_DATE_H

#include <ostream>

class Date
{
    private:
        int day;
        int month;
        int year;
    public:
        Date() : day(0), month(0), year(0)
        {}

        Date(int year, int month, int day) : day(day), month(month), year(year)
        {}

        int getDay() const
        {
            return day;
        }

        int getMonth() const
        {
            return month;
        }

        int getYear() const
        {
            return year;
        }
};

std::ostream &operator<<(std::ostream &os, const Date &date);


#endif //OOP_DATE_H
