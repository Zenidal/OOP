#ifndef OOP_HOUSE_H
#define OOP_HOUSE_H

#include "GenericPlayer.h"

#define HOUSE_GOAL 16

class House : public GenericPlayer
{
    public:
        House() : GenericPlayer("House")
        {};

        bool isHitting() const override;

        void flipFirstCard();
};


#endif //OOP_HOUSE_H
