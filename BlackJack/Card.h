#ifndef OOP_CARD_H
#define OOP_CARD_H

enum class Suit
{
    DIAMONDS,
    SPADES,
    HEARTS,
    CLUBS
};

enum class CardValue
{
    TWO = 2,
    THREE = 3,
    FOUR = 4,
    FIVE = 5,
    SIX = 6,
    SEVEN = 7,
    EIGHT = 8,
    NINE = 9,
    TEN = 10,
    JACK = 2,
    QUEEN = 3,
    KING = 4,
    ACE = 11
};

class Card
{
    private:
        Suit suit;
        CardValue value;
        bool isVisible;
    public:
        Card(Suit suit, CardValue value, bool isVisible);

        void flip();

        int getValue();
};


#endif //OOP_CARD_H
