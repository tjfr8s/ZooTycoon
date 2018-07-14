#ifndef ZOO_HPP
#define ZOO_HPP

#include <cstdlib>
#include "Animal.hpp"
#include "Tiger.hpp"
#include "Penguin.hpp"
#include "Turtle.hpp"

class Zoo
{
private:
    double m_money;
    Tiger* m_tigers;
    Penguin* m_penguins;
    Turtle* m_turtles;
    
    int m_maxTigers;    
    int m_maxPenguins;    
    int m_maxTurtles;    

    int m_numTigers;    
    int m_numPenguins;    
    int m_numTurtles;    

    bool m_isBankrupt;
    double m_boomProfit;
public:
    Zoo(double m_money = 100000,
        int m_maxTigers = 10,
        int m_maxPenguins = 10,
        int m_maxTurtles = 10);

};

#endif
