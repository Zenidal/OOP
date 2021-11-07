#include "Card.h"

Card::Card(Suit suit, CardValue value, bool isVisible) : suit(suit), value(value), isVisible(isVisible)
{}

void Card::flip()
{
    this->isVisible = !this->isVisible;
}

int Card::getValue()
{
    return (int) value;
}