#include "Date.h"

std::ostream &operator<<(std::ostream &os, const Date &date)
{
    os << date.getYear() << '-' << date.getMonth() << '-' << date.getDay();

    return os;
}