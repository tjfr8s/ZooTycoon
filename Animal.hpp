/*******************************************************************************
 * Description: This file declares an abstract Animal class that represents a 
 * generic zoo animal. It has double data members for animal cost, base food 
 * cost,  and pay out per animal. It has integer data members for animal age and 
 * number of babies in a litter. It has member functions for aging, checking
 * if the animal is an adult, having a baby, as well as get and set functions
 * for data members.
*******************************************************************************/
#ifndef ANIMAL_HPP
#define ANIMAL_HPP

class Animal
{
protected:
    int m_age;
    const int m_numBabies;
    const double m_animalCost;
    const double m_baseFoodCost;
    const double m_payOff;

public:
   Animal(int age = 1, 
          int numBabies = 0, 
          double animalCost = 0, 
          double baseFoodCost = 10, 
          double payOff = 0);
    

       
};

#endif
