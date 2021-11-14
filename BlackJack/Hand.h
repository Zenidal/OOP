#ifndef OOP_HAND_H
#define OOP_HAND_H

#include <vector>

#include "Card.h"

#define GAME_GOAL 21

class Hand
{
    protected:
        std::vector<Card *> cards;

    public:
        Hand()
        {}

        ~Hand()
        {
            for (auto card: cards) {
                delete card;
            }
        };

        void add(Card *card);

        void clear();

        int getValue() const;
};


#endif //OOP_HAND_H
