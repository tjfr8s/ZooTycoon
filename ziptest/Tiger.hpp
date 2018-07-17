/*******************************************************************************
 * Author: Tyler Freitas
 * Date: 20180713
 * Description: This file declares an abstract Tiger class that represents a 
 * tiger at the zoo. It has double data members for cost, base food 
 * cost,  and pay out per animal. It has integer data members for animal age and 
 * number of babies in a litter. It has member functions for aging, checking
 * if the animal is an adult, having a baby, as well as get and set functions
 * for data members.
*******************************************************************************/

#ifndef TIGER_HPP
#define TIGER_HPP
#include "Animal.hpp"
#include <iostream>

class Tiger : public Animal
{
public:
   Tiger(int age = 1, 
         double baseFoodCost = 1000, 
         int numBabies = 1, 
         double animalCost = 10000, 
         double payOff = 0.20); 

   virtual ~Tiger();
   virtual double getFoodCost();
   virtual double payOff();

};


#endif


