#ifndef OOP_PLAYER_H
#define OOP_PLAYER_H

#include "GenericPlayer.h"

class Player : public GenericPlayer
{
    public:
        explicit Player(const std::string &name) : GenericPlayer(name)
        {}

        bool isHitting() const override;

        void win() const;

        void lose() const;

        void push() const;
};


#endif //OOP_PLAYER_H
