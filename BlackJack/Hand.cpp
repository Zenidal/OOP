#include "Hand.h"

void Hand::add(Card *card)
{
    cards.push_back(card);
}

void Hand::clear()
{
    cards.clear();
    cards.shrink_to_fit();
}

int Hand::getValue()
{
    int sum = 0;

    for (auto card: cards) {
        sum += card->getValue();
    }

    if (sum > GAME_GOAL) {
        for (auto card: cards) {
            if (card->getValue() == (int) CardValue::ACE) {
                sum -= 10;
            }
        }
    }

    return sum;
}