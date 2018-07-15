#include "Zoo.hpp"

/*******************************************************************************
 * Description: Constructor for Zoo class with default parameters for m_money
 * and the size of each animal array.
 *
 * Preconditions:
 *  - Provide arguments for m_money, m_maxTigers, m_maxPenguins, 
 *  and m_maxTurtles (or user default values).
 *
 * Postconditions:
 *   - Constructs Zoo object with following properties
 *    - m_money, m_maxTigers, m_maxPenguins, and m_maxTurtles are initialized to
 *    argument values.
 *    - Animal pointer members are assigned arrays of size specified in their
 *    maxAnimalType varibles.
 *    - m_numAnimals variables are initialized to 0
 *    - m_isBankrupt is initialized to false
 *    - m_boonProfit is initialized to 0
 *******************************************************************************/
Zoo::Zoo(double money,
         int maxTigers,
         int maxPenguins,
         int maxTurtles) 
    : m_money(money),
      m_maxTigers(maxTigers),
      m_maxPenguins(maxPenguins),
      m_maxTurtles(maxTurtles),
      m_numTigers(0),
      m_numPenguins(0),
      m_numTurtles(0),
      m_isBankrupt(false),
      m_boomProfit(0)
{
    // Create array of tiger pointers.
    m_tigers = new Tiger*[m_maxTigers];
    //
    // Initialize Tiger*s to nullptr
    for(int i = 0; i < m_maxTigers; i++)
    {
        m_tigers[i] = nullptr;
    }

    // Create array of penguin pointers.
    m_penguins = new Penguin*[m_maxPenguins];
    //
    // Initialize Penguin*s to nullptr
    for(int i = 0; i < m_maxPenguins; i++)
    {
        m_penguins[i] = nullptr;
    }

    // Create array of turtle pointers.
    m_turtles = new Turtle*[m_maxTurtles];
    //
    // Initialize Turtle*s to nullptr
    for(int i = 0; i < m_maxTurtles; i++)
    {
        m_turtles[i] = nullptr;
    }
}


/*******************************************************************************
 * Description: Destructor that frees memory for Dynamic array of Animal 
 * pointers.
 *
 * Precondition:
 *  - Zoo object is destroyed
 *
 * Postconditions:
 *  - each element in Tiger**, Penguin**, and Turtle** is deallocated (if it
 *  isn't assigned nullptr.
 *  - The Tiger**, Penguin**, and Turtle** arrays are freed.
*******************************************************************************/ 
Zoo::~Zoo()
{
    // Deallocate Tiger objects in array
    for(int i = 0; i < m_maxTigers; i++)
    {
        if(m_tigers[i] != nullptr)
        {
            delete m_tigers[i];
        }
    }
    // Deallocate Tiger array
    delete [] m_tigers;

    // Deallocate Penguin objects in array
    for(int i = 0; i < m_maxPenguins; i++)
    {
        if(m_penguins[i] != nullptr)
        {
            delete m_penguins[i];
        }
    }
    // Deallocate Penguin array
    delete [] m_penguins;

    // Deallocate Turtle objects in array
    for(int i = 0; i < m_maxTurtles; i++)
    {
        if(m_turtles[i] != nullptr)
        {
            delete m_turtles[i];
        }
    }
    // Deallocate Turtle array
    delete [] m_turtles;
}


/*******************************************************************************
 * Description: Overload operator<< for Zoo class.
 *
 * Preconditions:
 *  - Zoo object
 *
 * Postconditions:
 *  - When called on zoo object, inserts the following into the output stream
 *      - Number of each animal
 *      - Maximum number of each animal
 *      - Bankruptcy status
*******************************************************************************/ 
std::ostream& operator<<(std::ostream& out, const Zoo& zoo)
{
    out << "Number of Tigers: " << zoo.m_numTigers << std::endl;
    out << "Maximum number of Tigers: " << zoo.m_maxTigers << "\n" << std::endl;
    out << "Number of Penguins: " << zoo.m_numPenguins << std::endl;
    out << "Maximum number of Penguins: " << zoo.m_maxPenguins << "\n" << std::endl;
    out << "Number of Turtles: " << zoo.m_numTurtles << std::endl;
    out << "Maximum number of Turtles: " << zoo.m_maxTurtles << "\n" << std::endl;
   
    if(zoo.m_isBankrupt)
    {
        out << "The Zoo is bankrupt!\n\n";
    } 
    else
    {
        out << "The Zoo is in the black!\n\n";
    }
    return out;
}
