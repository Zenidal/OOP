#include <iostream>
#include <vector>

#include "Homework2/Task1/Student.h"

#include "Homework4/Task1/IntArray.h"
#include "Homework4/Task2/UniqueNumbersCalculator.h"
#include "BlackJack/Hand.h"

short Student::studentsCounter = 0;

int main()
{
    { // task 1
        auto array = IntArray();
        array.push(6);
        array.push(4);
        array.push(2);
        array.push(3);
        array.push(0);
        array.push(1);
        array.push(1);
        array.push(13);
        array.push(0);
        array.push(21);
        array.push(9);
        array.print();
        array.popBack();
        array.print();
        array.popFront();
        array.print();
        array.sort();
        array.print();
    }

    std::cout << std::endl << std::endl;

    { // task 2
        auto vector = std::vector<int>();
        vector.push_back(5);
        vector.push_back(3);
        vector.push_back(4);
        vector.push_back(2);
        vector.push_back(2);
        vector.push_back(4);
        vector.push_back(3);
        vector.push_back(4);
        vector.push_back(5);
        vector.push_back(9);

        std::cout << "There are " << UniqueNumbersCalculator::calculate(vector) << " unique numbers in the vector." << std::endl;
    }

    std::cout << std::endl << std::endl;

    { // task 3
        auto twoClubs = Card(Suit::CLUBS, CardValue::TWO, false);
        auto threeSpades = Card(Suit::SPADES, CardValue::THREE, false);
        auto aceDiamonds = Card(Suit::DIAMONDS, CardValue::ACE, false);
        auto kingHearts = Card(Suit::HEARTS, CardValue::KING, false);

        auto hand = Hand();
        hand.add(&twoClubs);
        hand.add(&threeSpades);
        hand.add(&aceDiamonds);
        hand.add(&kingHearts);

        std::cout << "Hand value equals to " << hand.getValue() << std::endl;

    }

    return 0;
}