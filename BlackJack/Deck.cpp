#include <algorithm>
#include <random>
#include <chrono>

#include "Deck.h"

void Deck::populate()
{
    Suit suits[] = {Suit::SPADES, Suit::DIAMONDS, Suit::HEARTS, Suit::CLUBS};
    CardValue cardValues[] = {
        CardValue::TWO,
        CardValue::THREE,
        CardValue::FOUR,
        CardValue::FIVE,
        CardValue::SIX,
        CardValue::SEVEN,
        CardValue::EIGHT,
        CardValue::NINE,
        CardValue::TEN,
        CardValue::JACK,
        CardValue::QUEEN,
        CardValue::KING,
        CardValue::ACE
    };

    for (auto suit: suits) {
        for (auto cardValue: cardValues) {
            Card *card = new Card(suit, cardValue, false);
            add(card);
        }
    }
}

Deck::Deck()
{
    populate();
}

void Deck::shuffle()
{
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::shuffle(cards.begin(), cards.end(), std::default_random_engine(seed));
}

void Deck::deal(Hand &hand)
{
    auto card = cards.back();
    cards.pop_back();

    hand.add(card);
}

void Deck::additionalCards(GenericPlayer &genericPlayer)
{
    while (genericPlayer.isHitting()) {
        deal(genericPlayer);

        std::cout << genericPlayer;
    }
}