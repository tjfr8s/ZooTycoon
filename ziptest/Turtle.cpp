#include "Turtle.hpp"

Turtle::Turtle(int age,
             double baseFoodCost,
             int numBabies,
             double animalCost,
             double payOff)
    : Animal(age, baseFoodCost, numBabies, animalCost, payOff)
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

