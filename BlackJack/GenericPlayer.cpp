#include <iostream>

#include "GenericPlayer.h"

bool GenericPlayer::isBoosted()
{
    return this->getValue() > GAME_GOAL;
}

GenericPlayer::GenericPlayer(std::string name) : name(std::move(name))
{}

void GenericPlayer::bust()
{
    std::cout << this->name << " busted.";
}