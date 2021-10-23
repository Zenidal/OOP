#ifndef OOP_CARD_H
#define OOP_CARD_H

enum Suit
{
    DIAMONDS,
    SPADES,
    HEARTS,
    CLUBS
};

enum CardValue
{
    TWO,
    THREE,
    FOUR,
    FIVE,
    SIX,
    SEVEN,
    EIGHT,
    NINE,
    TEN,
    JACK,
    QUEEN,
    KING,
    ACE
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
