#include "Hand.h"

void Hand::add(Card *card)
{
    cards.push_back(card);
}

void Hand::clear()
{
    cards.clear();
}

int Hand::getValue()
{
    int sum = 0;

    for (auto card: cards) {
        sum += card->getValue();
    }

    return sum;
}