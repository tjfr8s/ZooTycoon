/*******************************************************************************
 * Author: Tyler Freitas
 * Date: 20180713
 * Description: This class describes a Zoo. It has data members for keeping 
 * track of each type of animal (Tiger, Penguin, and Turtle), the currnt number
 * or each animal, and the current size of the array's holding the animals. It
 * also has a flag for documenting if the Zoo goes bankrupt and a data member 
 * for holding any profit gained during a "boom". The Zoo has member functions 
 * for simulating a day, aging animals, paying for food, causing a random event,
 * calculating profit, purchasing adult animals, sickness events, boom events,
 * baby events, and purchasing individual animals.
*******************************************************************************/
#ifndef ZOO_HPP
#define ZOO_HPP

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <time.h>
#include "IntegerValidation.hpp"
#include "Animal.hpp"
#include "Tiger.hpp"
#include "Penguin.hpp"
#include "Turtle.hpp"

class Zoo
{
private:
    double m_money;
    const int m_baseFoodCost;
    Tiger** m_tigers;
    Penguin** m_penguins;
    Turtle** m_turtles;
    
    int m_maxTigers;    
    int m_maxPenguins;    
    int m_maxTurtles;    

    int m_numTigers;    
    int m_numPenguins;    
    int m_numTurtles;    

    bool m_isBankrupt;
    double m_boomProfit;
public:
/*******************************************************************************
 * Description: Constructor for Zoo class with default parameters for m_money
 * and the size of each animal array.
 *
 * Preconditions:
 *  - Provide arguments for m_money, m_maxTigers, m_maxPenguins, 
 *  and m_maxTurtles (or user default values).
 *
 * Postconditions:
 *   - Constructs Zoo object with following properties
 *    - m_money, m_maxTigers, m_maxPenguins, and m_maxTurtles are initialized to
 *    argument values.
 *    - Animal pointer members are assigned arrays of size specified in their
 *    maxAnimalType varibles.
 *    - m_numAnimals variables are initialized to 0
 *    - m_isBankrupt is initialized to false
 *    - m_boonProfit is initialized to 0
 *******************************************************************************/
    Zoo(double money = 100000,
        int baseFoodCost = 1000,
        int maxTigers = 10,
        int maxPenguins = 10,
        int maxTurtles = 10);

/*******************************************************************************
 * Description: Destructor that frees memory for Dynamic array of Animal 
 * pointers.
 *
 * Precondition:
 *  - Zoo object is destroyed
 *
 * Postconditions:
 *  - each element in Tiger**, Penguin**, and Turtle** is deallocated (if it
 *  isn't assigned nullptr.
 *  - The Tiger**, Penguin**, and Turtle** arrays are freed.
*******************************************************************************/ 
    virtual ~Zoo();


/*******************************************************************************
 * Description: Doubles the size of the Tiger array.
 *
 * Preconditions: 
 *  - m_tigers array of size m_maxTigers
 *
 * Postconditions:
 *  - doubles the size of m_maxTigers
 *  - creates new Tiger array of size m_maxTigers and sets m_Tigers to point to
 *  it.
 *  - set pointers 
*******************************************************************************/ 
    void resizeTigers();


/*******************************************************************************
 * Description: Adds a new tiger to the tiger array.
 *
 * Preconditions:
 *  - Zoo object
 *
 * Postconditions:
 * - Adds a new tiger to the Tiger** array
 * - Resizes the array if there isn't space for the tiger
*******************************************************************************/
    void addTiger(int age, int baseFoodCost);


/*******************************************************************************
 * Description: Doubles the size of the Penguin array.
 *
 * Preconditions: 
 *  - m_penguins array of size m_maxPenguins
 *
 * Postconditions:
 *  - doubles the size of m_maxPenguins
 *  - creates new Penguin array of size m_maxPenguins and sets m_Penguins to 
 *  point to it.
 *  - set pointers 
*******************************************************************************/ 
    void resizePenguins();


/*******************************************************************************
 * Description: Adds a new penguin to the penguin array.
 *
 * Preconditions:
 *  - Zoo object
 *
 * Postconditions:
 * - Adds a new penguin to the Penguin** array
 * - Resizes the array if there isn't space for the penguin
*******************************************************************************/
    void addPenguin(int age, int baseFoodCost);


/*******************************************************************************
 * Description: Doubles the size of the Turtle array.
 *
 * Preconditions: 
 *  - m_turtles array of size m_maxTurtles
 *
 * Postconditions:
 *  - doubles the size of m_maxTurtles
 *  - creates new Turtle array of size m_maxTurtles and sets m_Turtles to 
 *  point to it.
 *  - set pointers 
*******************************************************************************/ 
    void resizeTurtles();


/*******************************************************************************
 * Description: Adds a new turtle to the turtle array.
 *
 * Preconditions:
 *  - Zoo object
 *
 * Postconditions:
 * - Adds a new turtle to the Turtle** array
 * - Resizes the array if there isn't space for the turtle
*******************************************************************************/
    void addTurtle(int age, int baseFoodCost);


/*******************************************************************************
 * Description: Initialize the starting state of the Zoo.
 *
 * Preconditions:
 *  - Zoo object.
 *
 * Postconditions:
 *  - Asks user how many of each animal they would like to start with (1 or 2)
 *  - Adds that number of each animal to the zoo
 *  - Subtracts the cost of the animals from the bank
*******************************************************************************/ 
    void initZoo();


/*******************************************************************************
 * Description: age animals by one day.
 *
 * Preconditions:
 *  - Zoo object with animals.
 *
 * Postconditions:
 *  - increases the age of each animal by 1.
*******************************************************************************/
    void ageAnimals();


/*******************************************************************************
 * Description: Print the ages of all animals in zoo.
 *
 * Preconditons:
 *  - Zoo object with animals.
 *
 * Postconditions:
 *  - Displays age of each animal.
*******************************************************************************/ 
    void printAges();


/*******************************************************************************
 * Description: Pay to feed the animals.
 *
 * Preconditions:
 *  - Zoo object
 *
 * Postconditions:
 *  - Subtracts the cost of food for each animal from the Zoo's money.
*******************************************************************************/
    void payForFood();


/*******************************************************************************
 * Description: One random animal dies of sickness.
 *
 * Precondition:
 *  - Zoo object with animals.
 *
 * Postconditions:
 *  - An animal type is selected at random, and if there are any animals of that
 *  type, one dies of sickness
*******************************************************************************/
    void sickness();


/*******************************************************************************
 * Description: Generates a random boom profit between 250 and 500 per tiger
 *
 * Preconditions:
 *  - Zoo object
 *
 * Postconditions: 
 *  - sets m_boomProfit to a the number of tigers times a random number
 *  between 250 and 500
*******************************************************************************/
    void boom();


/*******************************************************************************
 * Description: A random animal has a baby.
 *
 * Preconditions:
 *  - Zoo object
 *
 * Postconditions:
 *  - A random animal type is chosen
 *  - If there is an adult animal of this type it has a baby with age 0
 *  - If there isn't it moves to the next type
 *  - If no adults are present, no babies are had
*******************************************************************************/ 
    void baby();


/*******************************************************************************
 * Description: Causes 1 random event to happen at the zoo.
 *
 * Preconditions:
 *  - Create Zoo object
 * 
 * Postconditions:
 *  - Causes 1 or 4 random events to happen: baby, boom, sickness, or nothing
*******************************************************************************/
    void randomEvent();


/*******************************************************************************
 * Description: Calculate the profit for the day.
 *
 * Precondition:
 *  - call all functions that cause things to change in the zoo during a day
 *
 * Postconditions:
 *  - updaates the zoo's money to reflect money made
*******************************************************************************/
    void calculateProfit();


/*******************************************************************************
 * Description: Purchase an adult animal.
 *
 * Preconditions:
 *  - Zoo object
 * 
 * Postconditions:
 *  - Asks user if they would like to buy an adult. 
 *  - Gets user choice
 *  - updates zoo roster and money to reflect purchase
*******************************************************************************/
    void buyAdult();

    bool continuePlaying();
    void simulateDay();
    double getMoney() {return m_money;}
    friend std::ostream& operator<<(std::ostream& out, const Zoo& zoo);

};




/*******************************************************************************
 * Description: Overload operator<< for Zoo class.
 *
 * Preconditions:
 *  - Zoo object
 *
 * Postconditions:
 *  - When called on zoo object, inserts the following into the output stream
 *      - Number of each animal
 *      - Maximum number of each animal
 *      - Bankruptcy status
*******************************************************************************/ 
std::ostream& operator<<(std::ostream& out, const Zoo& zoo);

#endif
