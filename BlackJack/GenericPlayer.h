#ifndef OOP_GENERICPLAYER_H
#define OOP_GENERICPLAYER_H

#include <string>

#include "Hand.h"

class GenericPlayer : public Hand
{
    private:
        std::string name;

    public:
        GenericPlayer(std::string name);

        virtual bool isHitting();

        bool isBoosted();

        void bust();
};


#endif //OOP_GENERICPLAYER_H
