/*******************************************************************************
 * Description: This file declares an abstract Animal class that represents a 
 * generic zoo animal. It has double data members for animal cost, base food 
 * cost,  and pay out per animal. It has integer data members for animal age and 
 * number of babies in a litter. It has member functions for aging, checking
 * if the animal is an adult, having a baby, as well as get and set functions
 * for data members.
*******************************************************************************/
#include "Animal.hpp"

/*******************************************************************************
 * Description: Constructor that initializes member variables for Animal objects
 *
 * Preconditions:
 *  - Parameters:
 *      int age
 *      int numBabies
 *      double animalCost
 *      double baseFoodCost
 *      double payOff
 *
 * Postconditions:
 *  - Initilizes data members to argument values. Default values used when 
 *  arguments are omitted.
*******************************************************************************/
Animal::Animal(int age, 
               int numBabies, 
               double animalCost, 
               double baseFoodCost, 
               double payOff)
    : m_age(age),
      m_numBabies(numBabies),
      m_animalCost(animalCost),
      m_baseFoodCost(baseFoodCost),
      m_payOff(payOff)
{
}    


Animal::~Animal()
{
}


/*******************************************************************************
 * Description: Increment the age of the animal by 1.
 *
 * Preconditions:
 *  - object of class derrived from Animal
 *
 * Postconditions:
 *  - m_age incremented by 1
*******************************************************************************/
void Animal::ageOneDay()
{
    m_age++;
    return;
}


/*******************************************************************************
 * Description: Returns true if Animal is 3 years or older.
 *
 * Preconditions:
 *  - object of class derived from Animal
 *
 * Postconditions:
 *  - returns true if m_age >= 3
 *  - returns fals otherwise
*******************************************************************************/
bool Animal::isAdult() const
{
    bool isAdult = m_age >= 3;
    return isAdult;
}















































