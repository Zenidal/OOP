#include "Card.h"

#include <exception>

Card::Card(Suit suit, CardValue value, bool isVisible) : suit(suit), value(value), isVisible(isVisible)
{}

void Card::flip()
{
    this->isVisible = !this->isVisible;
}

int Card::getValue()
{
    switch (this->value) {
        case CardValue::TWO:
            return 2;
        case CardValue::THREE:
            return 3;
        case CardValue::FOUR:
            return 4;
        case CardValue::FIVE:
            return 5;
        case CardValue::SIX:
            return 6;
        case CardValue::SEVEN:
            return 7;
        case CardValue::EIGHT:
            return 8;
        case CardValue::NINE:
            return 9;
        case CardValue::TEN:
            return 10;
        case CardValue::JACK:
            return 2;
        case CardValue::QUEEN:
            return 3;
        case CardValue::KING:
            return 4;
        case CardValue::ACE:
            return 11;
        default:
            throw std::exception();
    }
}