#include <iostream>

#include "GenericPlayer.h"

bool GenericPlayer::isBoosted() const
{
    return this->getValue() > GAME_GOAL;
}

GenericPlayer::GenericPlayer(std::string name) : name(std::move(name))
{}

void GenericPlayer::bust() const
{
    std::cout << this->name << " busts." << std::endl;
}

GenericPlayer::~GenericPlayer()
{

}

std::ostream &operator<<(std::ostream &os, const GenericPlayer &player)
{
    os << player.name << " (" << player.getValue() << " points)";

    for (auto card: player.cards) {
        os << std::endl;
        os << *card;
    }

    return os;
}