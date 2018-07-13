/*******************************************************************************
 * Description: This file declares an abstract Animal class that represents a 
 * generic zoo animal. It has double data members for animal cost, base food 
 * cost,  and pay out per animal. It has integer data members for animal age and 
 * number of babies in a litter. It has member functions for aging, checking
 * if the animal is an adult, having a baby, as well as get and set functions
 * for data members.
*******************************************************************************/
#include "Animal.hpp"

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
