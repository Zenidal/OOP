#ifndef OOP_GAME_H
#define OOP_GAME_H

#include "Deck.h"
#include "House.h"
#include "Player.h"

class Game
{
    private:
        Deck deck;
        House house;
        std::vector<Player> players;

        void distributeFirstly();
        void showPlayersCards();
        void distribute();
        void clearHands();
        void calculateWinner();
    public:
        Game(const std::vector<std::string>& playerNames);

        void play();
};


#endif //OOP_GAME_H
