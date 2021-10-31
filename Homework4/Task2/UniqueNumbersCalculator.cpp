#include "UniqueNumbersCalculator.h"

#include <map>

size_t UniqueNumbersCalculator::calculate(const std::vector<int>& numbers)
{
    auto set = std::map<int, int>();

    for (auto number: numbers) {
        set[number]++;
    }

    return set.size();
}