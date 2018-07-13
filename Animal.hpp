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
/*******************************************************************************
 * Description: Constructor that initializes member variables for Animal objects
 *
 * Preconditions:
 *  - Object of class derived from Animal
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
   Animal(int age = 1, 
          int numBabies = 0, 
          double animalCost = 0, 
          double baseFoodCost = 10, 
          double payOff = 0);
    

   virtual ~Animal();


/*******************************************************************************
 * Description: Increment the age of the animal by 1.
 *
 * Preconditions:
 *  - object of class derrived from Animal
 *
 * Postconditions:
 *  - m_age incremented by 1
*******************************************************************************/
   void ageOneDay();


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
bool isAdult() const;

virtual double getFoodCost() = 0;

virtual double payOff() = 0;

virtual bool haveBaby() = 0;
       
};


#endif
