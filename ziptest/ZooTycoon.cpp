/*******************************************************************************
 * Description: This program impelments a Zoo Tycoon game in which the user
 * gets to run a zoo. The zoo is composed of three exhibits: tigers, penguins, 
 * and turtles. At the start of the game the user gets to choose how many 
 * of each animal they would like to start with (1 or 2). Each subsequent day 
 * the following events occur:
 * - each animal ages by 1 day
 * - the zoo must pay for the feeding cost of each animal
 *   - one of 4 random events occurs
 *      - a baby animal is born (if there is an adult animal of that type present)
 *      - an animal dies
 *      - a boom in salse generates bonus income
 *      - nothing happens
 * - At the end of the day the zoo's profits are calculated
 * - The user is also offered the oportunity to purchase one adult animal at the
 *   end of the day.
 * - If the user looses all of their money or goes into debt (their money <= 0)
 *   they lose the game.
 * - At the end of each day the user is asked if they would like to continue or
 *   quit. 
*******************************************************************************/ 

#include "Zoo.hpp"

int main()
{
    srand(time(NULL)); // Seed rand
    int startingMoney = 100000;
    int baseFoodCost = 1000;
    Zoo zoo(startingMoney, baseFoodCost); // Create zoo
    zoo.initZoo();

    // Execute each day at the zoo.  If the user runs out of money or quits, the
    // game is over.
    do
    {
        system("clear");
        std::cout << "START OF DAY:\n\n";
        std::cout << "\n**************\n\n" << zoo << "**************\n";
        zoo.simulateDay();
        std::cout << "END OF DAY:";
        std::cout << "\n**************\n\n" << zoo << "**************\n";
        zoo.printAges();
    }while(zoo.getMoney() > 0 && zoo.continuePlaying());

    if(zoo.getMoney() <= 0)
    {
        std::cout << "You ran out of money! You lost the game!" << std::endl;
    }

    return 0;
}
