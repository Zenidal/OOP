#ifndef OOP_DIVISIONBYZERO_H
#define OOP_DIVISIONBYZERO_H

#include <exception>
#include <string>

class DivisionByZero : public std::exception
{
    public:
        const char *what() const _GLIBCXX_USE_NOEXCEPT override;
};


#endif //OOP_DIVISIONBYZERO_H
