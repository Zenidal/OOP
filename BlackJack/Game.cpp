#include <vector>

#include "Game.h"

Game::Game(const std::vector<std::string> &playerNames)
{
    for (const auto &playerName: playerNames) {
        auto player = Player(playerName);
        players.emplace_back(player);
    }

    house = House();
    deck = Deck();
    deck.shuffle();
}

void Game::play()
{
    distributeFirstly();
    house.flipFirstCard();

    showPlayersCards();

    distribute();
    house.flipFirstCard();

    while (house.isHitting()) {
        deck.additionalCards(house);
    }

    showPlayersCards();

    calculateWinner();

    clearHands();
}

void Game::distributeFirstly()
{
    for (auto &player: players) {
        for (size_t i = 0; i < 2; i++) {
            deck.deal(player);
        }
    }

    deck.deal(house);
    deck.deal(house);
}

void Game::distribute()
{
    for (auto &player: players) {
        deck.additionalCards(player);
    }
}

void Game::showPlayersCards()
{
    for (const auto &player: players) {
        std::cout << player;
    }

    std::cout << house;
}

void Game::clearHands()
{
    for (auto player: players) {
        player.clear();
    }

    house.clear();
}

void Game::calculateWinner()
{
    auto winners = std::vector<GenericPlayer *>();
    int maxSum = 0;

    for (auto player: players) {
        if (player.isBoosted()) {
            continue;
        }

        if (player.getValue() > maxSum) {
            winners.clear();
            winners.push_back(&player);

            maxSum = player.getValue();
        }
    }

    if (!house.isBoosted() && house.getValue() > maxSum) {
        winners.clear();
        winners.push_back(&house);

        maxSum = house.getValue();
    }

    const auto winnersCount = winners.size();

    for (auto player: players) {
        if (player.getValue() != maxSum) {
            player.isBoosted() ? player.bust() : player.lose();
        } else {
            winnersCount > 1 ? player.push() : player.win();
        }
    }
}