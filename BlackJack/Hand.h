#ifndef OOP_HAND_H
#define OOP_HAND_H

#include <vector>

#include "Card.h"

#define GAME_GOAL 21

class Hand
{
    private:
        std::vector<Card *> cards;

    public:
        void add(Card *card);

        void clear();

        int getValue() const;
};


#endif //OOP_HAND_H
