#include "Penguin.hpp"

Penguin::Penguin(int age,
             int numBabies,
             double animalCost,
             double baseFoodCost,
             double payOff)
    : Animal(age, numBabies, animalCost, baseFoodCost, payOff)
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

