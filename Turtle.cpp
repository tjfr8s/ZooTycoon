#include "Turtle.hpp"

Turtle::Turtle(int age,
             int numBabies,
             double animalCost,
             double baseFoodCost,
             double payOff)
    : Animal(age, numBabies, animalCost, baseFoodCost, payOff)
{}

Turtle::~Turtle()
{}

double Turtle::getFoodCost()
{
    double foodCost = .5 * m_baseFoodCost;
    return foodCost;
}

double Turtle::payOff()
{
    double payOff = m_payOff * m_animalCost; 
    return payOff; 
}

