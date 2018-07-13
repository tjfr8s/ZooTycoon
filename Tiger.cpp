#include "Tiger.hpp"

Tiger::Tiger(int age,
             int numBabies,
             double animalCost,
             double baseFoodCost,
             double payOff)
    : Animal(age, numBabies, animalCost, baseFoodCost, payOff)
{}

Tiger::~Tiger()
{}

double Tiger::getFoodCost()
{
    double foodCost = 5 * m_baseFoodCost;
    return foodCost;
}

double Tiger::payOff()
{
    double payOff = 0.20 * m_animalCost; 
    return payOff; 
}
