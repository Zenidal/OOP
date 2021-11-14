#include "DivisionByZero.h"

const char *DivisionByZero::what() const noexcept
{
    return "You cannot divide by zero.";
}
