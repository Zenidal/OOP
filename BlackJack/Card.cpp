#include "Card.h"

Card::Card(Suit suit, CardValue value, bool isVisible) : suit(suit), value(value), isVisible(isVisible)
{}

void Card::flip()
{
    this->isVisible = !this->isVisible;
}

int Card::getValue() const
{
    return (int) value;
}

std::string Card::getSuit() const
{
    switch (this->suit) {
        case Suit::CLUBS:
            return "Clubs";
        case Suit::SPADES:
            return "Spades";
        case Suit::DIAMONDS:
            return "Diamonds";
        case Suit::HEARTS:
            return "Hearts";
        default:
            throw std::exception();
    }
}

std::ostream &operator<<(std::ostream &os, const Card &card)
{
    if (card.isVisible) {
        os << card.getValue() << " " << card.getSuit();
    } else {
        os << "XX";
    }

    return os;
}