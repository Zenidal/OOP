#ifndef OOP_HAND_H
#define OOP_HAND_H

#include <vector>

#include "Card.h"

class Hand
{
    private:
        std::vector<Card *> cards;

    public:
        void add(Card *card);

        void clear();

        int getValue();
};


#endif //OOP_HAND_H
