#include "../Zoo.hpp"
#include <iostream>

int main()
{
    srand(time(NULL));
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
    /*
    Zoo zoo2;
    zoo2.initZoo();
    std::cout << zoo2 << "\n**************\n";
    zoo2.printAges();
    zoo2.ageAnimals();
    zoo2.printAges();
    zoo2.payForFood();
    std::cout << zoo2 << "\n**************\n";

    zoo2.sickness();
    std::cout << zoo2 << "\n**************\n";

    zoo2.boom();
    std::cout << zoo2 << "\n**************\n";

    zoo2.baby();
    zoo2.printAges();
    std::cout << zoo2 << "\n**************\n";


    for(int i = 0; i < 3; i++)
    {
        zoo2.ageAnimals();
    }

    for(int i = 0; i < 3; i++)
    {
        zoo2.baby();
        zoo2.printAges();
        std::cout << zoo2 << "\n**************\n";
    }
    zoo2.baby();
    zoo2.printAges();
    std::cout << zoo2 << "\n**************\n";

    for(int i = 0; i < 10; i++)
    {
        zoo2.randomEvent();
        zoo2.printAges();
        zoo2.calculateProfit();
        std::cout << zoo2 << "\n**************\n";
    }

    do
    {
        zoo2.buyAdult();
        zoo2.printAges();
        std::cout << zoo2 << "\n**************\n";
    }while(zoo2.continuePlaying());
    */
    Zoo zoo2;
    zoo2.initZoo();
    do
    {
        zoo2.simulateDay();
        zoo2.printAges();
        std::cout << "\n**************\n" << zoo2 << "\n**************\n";
    }while(zoo2.getMoney() > 0 && zoo2.continuePlaying());

    return 0;
}
