#include "House.h"

bool House::isHitting() const
{
    return this->getValue() <= HOUSE_GOAL;
}

void House::flipFirstCard()
{
    auto firstCard = cards.front();

    if (firstCard != nullptr) {
        firstCard->flip();
    }
}