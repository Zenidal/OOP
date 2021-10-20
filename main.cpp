#include <iostream>

#include "Homework1/Power.h"
#include "Homework1/RGBA.h"
#include "Homework1/Stack.h"

#include "Homework2/Task1/Student.h"
#include "Homework2/Task2/Apple.h"
#include "Homework2/Task2/Banana.h"
#include "Homework2/Task2/GrannySmith.h"

short Student::studentsCounter = 0;

int main()
{
    {
        // task 1
        std::cout << "Task 1" << std::endl;

        auto mark = new Student();
        mark->setName("Mark");
        mark->setAge(17);
        mark->setCourse(1);
        mark->setGender(Gender::MALE);
        mark->setWeight(93);

        auto hollie = Student();
        hollie.setName("Hollie");

        auto peter = Student();
        peter.setName("Peter");

        std::cout << "Students count " << Student::getStudentsCounter() << std::endl;

        //lets expel Mark
        delete mark;

        std::cout << "Students count " << Student::getStudentsCounter() << std::endl;

        std::cout << std::endl;
    }

    {
        // task 2
        std::cout << "Task 2" << std::endl;

        auto banana = Banana();
        auto apple = Apple("red");
        auto grannySmith = GrannySmith();

        std::cout << "My " << apple.getName() << " is " << apple.getColor() << ".\n";
        std::cout << "My " << banana.getName() << " is " << banana.getColor() << ".\n";
        std::cout << "My " << grannySmith.getName() << " is " << grannySmith.getColor() << ".\n";
    }

    {
        // task 3

//        Классы (наследование обозначим символом ->, а композицию :):
//        Game,
//        Game:GameStatus,
//        Game:PlayersQueue,
//        PlayersQueue:(Player, Player -> Dealer),
//        Game:Turn,
//        Game:ResultsCalculator,
//        Game:Deck,
//        Deck:Card,
//        Player:Score
    }

    return 0;
}