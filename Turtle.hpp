/*******************************************************************************
 * Author: Tyler Freitas
 * Date: 20180713
 * Description: This file declares an abstract Turtle class that represents a 
 * turtle at the zoo. It has double data members for cost, base food 
 * cost,  and pay out per animal. It has integer data members for animal age and 
 * number of babies in a litter. It has member functions for aging, checking
 * if the animal is an adult, having a baby, as well as get and set functions
 * for data members.
*******************************************************************************/

#ifndef TIGER_HPP
#define TIGER_HPP
#include "Animal.hpp"
#include <iostream>

class Turtle : public Animal
{
public:
   Turtle(int age = 1, 
         int numBabies = 10, 
         double animalCost = 100, 
         double baseFoodCost = 10, 
         double payOff = 0.05); 

   virtual ~Turtle();
   virtual double getFoodCost();
   virtual double payOff();

};


#endif


