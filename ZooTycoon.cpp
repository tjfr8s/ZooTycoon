#include "Zoo.hpp"

int main()
{
    int startingMoney = 100000;
    int baseFoodCost = 1000;
    Zoo zoo(startingMoney, baseFoodCost);
    zoo.initZoo();

    std::cout << "The zoo on opening day: \n";
    std::cout << "\n**************\n\n" << zoo << "**************\n";

    do
    {
        zoo.simulateDay();
        std::cout << "\n**************\n\n" << zoo << "**************\n";
    }while(zoo.getMoney() > 0 && zoo.continuePlaying());

    if(zoo.getMoney() <= 0)
    {
        std::cout << "You ran out of money! You lost the game!" << std::endl;
    }
    
    

    return 0;
}
