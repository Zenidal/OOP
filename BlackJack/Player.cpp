#include <iostream>

#include "Player.h"

void Player::win() const
{
    std::cout << this->name << " won!" << std::endl;
}

void Player::lose() const
{
    std::cout << this->name << " lost!" << std::endl;
}

void Player::push() const
{
    std::cout << this->name << " drew!" << std::endl;
}

bool Player::isHitting() const
{
    bool isValidValue;
    std::string isHitting;

    do {
        std::cout << this->name << ": Do you need one more card? (Y/N)" << std::endl;
        std::cin >> isHitting;

        if (isHitting == "Y" || isHitting == "N") {
            isValidValue = true;
        } else {
            isValidValue = false;

            std::cerr << isHitting << " is not valid answer." << std::endl;
        }
    } while (!isValidValue);

    return isHitting == "Y";
}