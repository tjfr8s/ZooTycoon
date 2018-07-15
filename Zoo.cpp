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
 * Description: Doubles the size of the Tiger array.
 *
 * Preconditions: 
 *  - m_tigers array of size m_maxTigers
 *
 * Postconditions:
 *  - doubles the size of m_maxTigers
 *  - creates new Tiger array of size m_maxTigers and sets m_Tigers to point to
 *  it.
 *  - set pointers 
*******************************************************************************/ 
void Zoo::resizeTigers()
{
    // Create new Tiger** array twice the size of m_tigers
    int newMax = 2 * m_maxTigers;
    Tiger** newTigers = new Tiger*[newMax];

    // Move each element of m_tigers to the new array
    for(int i = 0; i < m_maxTigers; i++)
    {
        newTigers[i] = m_tigers[i];
        m_tigers[i] = nullptr;
    }

    // Point m_tigers to the new array and update m_maxTigers
    m_maxTigers = newMax;
    m_tigers = newTigers;
    newTigers = nullptr;
    std::cout << "Resized Tigers" << std::endl;
}


/*******************************************************************************
 * Description: Adds a new tiger to the tiger array.
 *
 * Preconditions:
 *  - Zoo object
 *
 * Postconditions:
 * - Adds a new tiger to the Tiger** array
 * - Resizes the array if there isn't space for the tiger
*******************************************************************************/
void Zoo::addTiger()
{
    if(m_numTigers < m_maxTigers)
    {
        m_tigers[m_numTigers] = new Tiger();
    }   
    else
    {
        resizeTigers();
        m_tigers[m_numTigers] = new Tiger();
    }
    m_numTigers++;
}


/*******************************************************************************
 * Description: Doubles the size of the Penguin array.
 *
 * Preconditions: 
 *  - m_penguins array of size m_maxPenguins
 *
 * Postconditions:
 *  - doubles the size of m_maxPenguins
 *  - creates new Penguin array of size m_maxPenguins and sets m_Penguins to point to
 *  it.
 *  - set pointers 
*******************************************************************************/ 
void Zoo::resizePenguins()
{
    // Create new Penguin** array twice the size of m_penguins
    int newMax = 2 * m_maxPenguins;
    Penguin** newPenguins = new Penguin*[newMax];

    // Move each element of m_penguins to the new array
    for(int i = 0; i < m_maxPenguins; i++)
    {
        newPenguins[i] = m_penguins[i];
        m_penguins[i] = nullptr;
    }

    // Point m_penguins to the new array and update m_maxPenguins
    m_maxPenguins = newMax;
    m_penguins = newPenguins;
    newPenguins = nullptr;
    std::cout << "Resized Penguins" << std::endl;
}


/*******************************************************************************
 * Description: Adds a new penguin to the penguin array.
 *
 * Preconditions:
 *  - Zoo object
 *
 * Postconditions:
 * - Adds a new penguin to the Penguin** array
 * - Resizes the array if there isn't space for the penguin
*******************************************************************************/
void Zoo::addPenguin()
{
    if(m_numPenguins < m_maxPenguins)
    {
        m_penguins[m_numPenguins] = new Penguin();
    }   
    else
    {
        resizePenguins();
        m_penguins[m_numPenguins] = new Penguin();
    }
    m_numPenguins++;
}



/*******************************************************************************
 * Description: Doubles the size of the Turtle array.
 *
 * Preconditions: 
 *  - m_turtles array of size m_maxTurtles
 *
 * Postconditions:
 *  - doubles the size of m_maxTurtles
 *  - creates new Turtle array of size m_maxTurtles and sets m_Turtles to point 
 *  to it.
 *  - set pointers 
*******************************************************************************/ 
void Zoo::resizeTurtles()
{
    // Create new Turtle** array twice the size of m_turtles
    int newMax = 2 * m_maxTurtles;
    Turtle** newTurtles = new Turtle*[newMax];

    // Move each element of m_turtles to the new array
    for(int i = 0; i < m_maxTurtles; i++)
    {
        newTurtles[i] = m_turtles[i];
        m_turtles[i] = nullptr;
    }

    // Point m_turtles to the new array and update m_maxTurtles
    m_maxTurtles = newMax;
    m_turtles = newTurtles;
    newTurtles = nullptr;
    std::cout << "Resized Turtles" << std::endl;
}


/*******************************************************************************
 * Description: Adds a new turtle to the turtle array.
 *
 * Preconditions:
 *  - Zoo object
 *
 * Postconditions:
 * - Adds a new turtle to the Turtle** array
 * - Resizes the array if there isn't space for the turtle
*******************************************************************************/
void Zoo::addTurtle()
{
    if(m_numTurtles < m_maxTurtles)
    {
        m_turtles[m_numTurtles] = new Turtle();
    }   
    else
    {
        resizeTurtles();
        m_turtles[m_numTurtles] = new Turtle();
    }
    m_numTurtles++;
}


/*******************************************************************************
 * Description: Initialize the starting state of the Zoo.
 *
 * Preconditions:
 *  - New Zoo object.
 *
 * Postconditions:
 *  - Asks user how many of each animal they would like to start with (1 or 2)
 *  - Adds that number of each animal to the zoo
 *  - Subtracts the cost of the animals from the bank
*******************************************************************************/ 
void Zoo::initZoo()
{
    const int MIN_START_ANML(1);
    const int MAX_START_ANML(2);
    int animalNumber(0);

    std::cout << "How many Tigers would you like to start with (1 or 2)? ";
    animalNumber = intInputValidation(MIN_START_ANML, MAX_START_ANML);
    for(int i = 0; i < animalNumber; i++)
    {
        this->addTiger();
        m_money -= m_tigers[m_numTigers - 1]->getAnimalCost(); 
    }

    std::cout << "How many Penguins would you like to start with (1 or 2)? ";
    animalNumber = intInputValidation(MIN_START_ANML, MAX_START_ANML);
    for(int i = 0; i < animalNumber; i++)
    {
        this->addPenguin();
        m_money -= m_penguins[m_numPenguins - 1]->getAnimalCost(); 
    }

    std::cout << "How many Turtles would you like to start with (1 or 2)? ";
    animalNumber = intInputValidation(MIN_START_ANML, MAX_START_ANML);
    for(int i = 0; i < animalNumber; i++)
    {
        this->addTurtle();
        m_money -= m_turtles[m_numTurtles - 1]->getAnimalCost(); 
    }

}


/*******************************************************************************
 * Description: age animals by one day.
 *
 * Preconditions:
 *  - Zoo object with animals.
 *
 * Postconditions:
 *  - increases the age of each animal by 1.
*******************************************************************************/
void Zoo::ageAnimals()
{
    for(int i = 0; i < m_numTigers; i++)
    {
        m_tigers[i]->ageOneDay();
    }

    
    for(int i = 0; i < m_numPenguins; i++)
    {
        m_penguins[i]->ageOneDay();
    }

    for(int i = 0; i < m_numTurtles; i++)
    {
        m_turtles[i]->ageOneDay();
    }
}


/*******************************************************************************
 * Description: Print the ages of all animals in zoo.
 *
 * Preconditons:
 *  - Zoo object with animals.
 *
 * Postconditions:
 *  - Displays age of each animal.
*******************************************************************************/ 
void Zoo::printAges()
{
    for(int i = 0; i < m_numTigers; i++)
    {
        std::cout << "Tiger " << i+1 << " age: " << m_tigers[i]->getAge() << 
                      std::endl;
    }

    for(int i = 0; i < m_numPenguins; i++)
    {
        std::cout << "Penguin " << i+1 << " age: " << m_penguins[i]->getAge() << 
                      std::endl;
    }

    for(int i = 0; i < m_numTurtles; i++)
    {
        std::cout << "Turtle " << i+1 << " age: " << m_turtles[i]->getAge() << 
                      std::endl;
    }
}


/*******************************************************************************
 * Description: Pay to feed the animals.
 *
 * Preconditions:
 *  - Zoo object
 *
 * Postconditions:
 *  - Subtracts the cost of food for each animal from the Zoo's money.
*******************************************************************************/
void Zoo::payForFood()
{
    // If there are any tigers, subtract the cost of their food.
    if(m_numTigers > 0)
    {
        m_money -= m_tigers[0]->getFoodCost() * m_numTigers;
    }

    // If there are any penguins, subtract the cost of their food.
    if(m_numPenguins > 0)
    {
        m_money -= m_penguins[0]->getFoodCost() * m_numPenguins;
    }

    // If there are any turtles, subtract the cost of their food.
    if(m_numTurtles > 0)
    {
        m_money -= m_turtles[0]->getFoodCost() * m_numTurtles;
    }
}


/*******************************************************************************
 * Description: One random animal dies of sickness.
 *
 * Precondition:
 *  - Zoo object with animals.
 *
 * Postconditions:
 *  - An animal type is selected at random, and if there are any animals of that
 *  type, one dies of sickness
*******************************************************************************/
void Zoo::sickness()
{
    int randomAnimal = rand() % 3 + 1;
    switch(randomAnimal)
    {
        case 1: 
            if(m_numTigers > 0)
            {
                m_numTigers--;
                delete m_tigers[m_numTigers];
                m_tigers[m_numTigers] = nullptr;
                std::cout << "\n A Tiger died\n";
            }
            else
            {
                std::cout << "\n A Tiger would have  died\n";
            }
            break;
        case 2: 
            if(m_numPenguins > 0)
            {
                m_numPenguins--;
                delete m_penguins[m_numPenguins];
                m_penguins[m_numPenguins] = nullptr;
                std::cout << "\n A Penguin died\n";
            }
            else
            {
                std::cout << "\n A Penguin would have died\n";
            }
            break;
        case 3: 
            if(m_numTurtles > 0)
            {
                m_numTurtles--;
                delete m_turtles[m_numTurtles];
                m_turtles[m_numTurtles] = nullptr;
                std::cout << "\n A Turtle died\n";
            }
            else
            {
                std::cout << "\n A Turtle would have died\n";
            }            
            break;
    }
}


/*******************************************************************************
 * Description: Generates a random boom profit between 250 and 500 per tiger
 *
 * Preconditions:
 *  - Zoo object
 *
 * Postconditions: 
 *  - sets m_boomProfit to a the number of tigers times a random number
 *  between 250 and 500
*******************************************************************************/
void Zoo::boom()
{
    int boomFactor = rand() % 51 + 250;
    m_boomProfit = m_numTigers * boomFactor;
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
    out << "Maximum number of Tigers: " << zoo.m_maxTigers << "\n" << 
            std::endl;
    out << "Number of Penguins: " << zoo.m_numPenguins << std::endl;
    out << "Maximum number of Penguins: " << zoo.m_maxPenguins << "\n" << 
            std::endl;
    out << "Number of Turtles: " << zoo.m_numTurtles << std::endl;
    out << "Maximum number of Turtles: " << zoo.m_maxTurtles << "\n" << 
            std::endl;
    out << "\nMoney: " << std::setprecision(2) << std::fixed << zoo.m_money << 
            std::endl;
    out << "\nBoom: " << std::setprecision(2) << std::fixed << 
            zoo.m_boomProfit << std::endl;

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



