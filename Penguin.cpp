#include "Penguin.hpp"

Penguin::Penguin(int age,
             double baseFoodCost,
             int numBabies,
             double animalCost,
             double payOff)
    : Animal(age, baseFoodCost, numBabies, animalCost,  payOff)
{}

Penguin::~Penguin()
{}

double Penguin::getFoodCost()
{
    double foodCost = m_baseFoodCost;
    return foodCost;
}

double Penguin::payOff()
{
    double payOff = m_payOff * m_animalCost; 
    return payOff; 
}

