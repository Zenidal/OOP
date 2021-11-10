#include <iostream>
#include <memory>

#include "BlackJack/Player.h"

#include "Homework7/Task1/Date.h"

Date getLatestDate(const std::shared_ptr<Date> &date1, const std::shared_ptr<Date> &date2)
{
    if (date1->getYear() != date2->getYear()) {
        return date1->getYear() > date2->getYear() ? *date1 : *date2;
    }

    if (date1->getMonth() != date2->getMonth()) {
        return date1->getMonth() > date2->getMonth() ? *date1 : *date2;
    }

    if (date1->getDay() != date2->getDay()) {
        return date1->getDay() > date2->getDay() ? *date1 : *date2;
    }

    return *date1;
}

void exchangeDates(std::shared_ptr<Date> date1, std::shared_ptr<Date> date2)
{
    auto tempDate = *date1;
    *date1 = *date2;
    *date2 = tempDate;
}

int main()
{
    { // task 1
        std::unique_ptr<Date> date;
        std::unique_ptr<Date> today(new Date(2021, 11, 10));

        std::cout << "Year: " << today->getYear() << ", month: " << today->getMonth() << ", day: " << today->getDay() << std::endl;
        std::cout << "Date: " << *today << std::endl;

        date = std::move(today);

        std::cout << "Is today nullable: " << std::boolalpha << (today == nullptr) << std::endl;
        std::cout << "Is date nullable: " << std::boolalpha << (date == nullptr) << std::endl;
    }

    std::cout << std::endl;

    { // task 2
        std::shared_ptr<Date> date1(new Date(2021, 10, 10));
        std::shared_ptr<Date> date2(new Date(2021, 11, 10));

        std::cout << "Latest Date: " << getLatestDate(date1, date2) << std::endl;
        std::cout << "Is first date nullable: " << std::boolalpha << (date1 == nullptr) << std::endl;
        std::cout << "Is second date nullable: " << std::boolalpha << (date2 == nullptr) << std::endl;

        std::cout << "First date: " << *date1 << std::endl;
        std::cout << "Second date: " << *date2 << std::endl;
        exchangeDates(date1, date2);
        std::cout << "First date: " << *date1 << std::endl;
        std::cout << "Second date: " << *date2 << std::endl;
    }

    return 0;
}