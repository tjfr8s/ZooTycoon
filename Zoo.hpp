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

#include <cstdlib>
#include "Animal.hpp"
#include "Tiger.hpp"
#include "Penguin.hpp"
#include "Turtle.hpp"

class Zoo
{
private:
    double m_money;
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
    Zoo(double m_money = 100000,
        int m_maxTigers = 10,
        int m_maxPenguins = 10,
        int m_maxTurtles = 10);

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

};

#endif
