#ifndef OOP_STRINGVALUEPAIR_H
#define OOP_STRINGVALUEPAIR_H

#include <string>

#include "../Task2/Pair.h"

template<typename T>
class StringValuePair : public Pair<std::string, T>
{
    public:
        StringValuePair(std::string value1, T value2) : Pair<std::string, T>(value1, value2)
        {}
};


#endif //OOP_STRINGVALUEPAIR_H
