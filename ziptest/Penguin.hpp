/*******************************************************************************
 * Author: Tyler Freitas
 * Date: 20180713
 * Description: This file declares an abstract Penguin class that represents a 
 * penguin at the zoo. It has double data members for cost, base food 
 * cost,  and pay out per animal. It has integer data members for animal age and 
 * number of babies in a litter. It has member functions for aging, checking
 * if the animal is an adult, having a baby, as well as get and set functions
 * for data members.
*******************************************************************************/

#ifndef PENGUIN_HPP
#define PENGUIN_HPP
#include "Animal.hpp"
#include <iostream>

class Penguin : public Animal
{
public:
   Penguin(int age = 1, 
         double baseFoodCost = 10, 
         int numBabies = 5, 
         double animalCost = 1000, 
         double payOff = 0.10); 

   virtual ~Penguin();
   virtual double getFoodCost();
   virtual double payOff();

};


#endif


