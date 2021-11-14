#ifndef OOP_DECK_H
#define OOP_DECK_H

#include "Hand.h"
#include "GenericPlayer.h"

class Deck : public Hand
{
    private:
        void populate();

    public:
        Deck();

        void shuffle();

        void deal(Hand &hand);

        void additionalCards(GenericPlayer& genericPlayer);
};


#endif //OOP_DECK_H
