#include "Tiger.hpp"

Tiger::Tiger(int age,
             double baseFoodCost,
             int numBabies,
             double animalCost,
             double payOff)
    : Animal(age, baseFoodCost, numBabies, animalCost, payOff)
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
    double payOff = m_payOff * m_animalCost; 
    return payOff; 
}

