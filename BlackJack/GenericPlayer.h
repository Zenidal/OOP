#ifndef OOP_GENERICPLAYER_H
#define OOP_GENERICPLAYER_H

#include <string>

#include "Hand.h"

class GenericPlayer : public Hand
{
    protected:
        std::string name;

    public:
        GenericPlayer(std::string name);

        virtual ~GenericPlayer();

        virtual bool isHitting() const = 0;

        bool isBoosted() const;

        void bust() const;

        friend std::ostream &operator<<(std::ostream &os, const GenericPlayer &player);
};


#endif //OOP_GENERICPLAYER_H
