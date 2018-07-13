#include "../Turtle.hpp"

int main()
{
    Turtle* turtle = new Turtle;
    std::cout << turtle->getFoodCost() << std::endl;
    delete turtle;
    return 0;
}
