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
    std::cout << this->name << " busted.";
}