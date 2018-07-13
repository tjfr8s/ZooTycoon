#include "../Turtle.hpp"

int main()
{
    Turtle* turtle = new Turtle;
    std::cout << "Turtle food cost: " << turtle->getFoodCost() << std::endl;
    std::cout << "Turtle pay off amount: " << turtle->payOff() << std::endl;
    delete turtle;
    return 0;
}
