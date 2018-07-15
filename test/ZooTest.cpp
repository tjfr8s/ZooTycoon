#include "../Zoo.hpp"
#include <iostream>

int main()
{
    Zoo zoo;
    std::cout << zoo;
/*
    // Test addTiger() and resizeTiger()
    for(int i = 0; i < 11; i++)
    {
        zoo.addTiger();
        std::cout << zoo << "\n******************\n";
    }

    // Test addPenguin() and resizePenguin()
    for(int i = 0; i < 11; i++)
    {
        zoo.addPenguin();
        std::cout << zoo << "\n******************\n";
    }

    // Test addTurtle() and resizeTurtle()
    for(int i = 0; i < 11; i++)
    {
        zoo.addTurtle();
        std::cout << zoo << "\n******************\n";
    }

    std::cout << "**************************\n\n";
*/
    Zoo zoo2;
    zoo2.initZoo();
    std::cout << zoo2 << "\n**************\n";
    zoo2.printAges();
    zoo2.ageAnimals();
    zoo2.printAges();
    return 0;
}
