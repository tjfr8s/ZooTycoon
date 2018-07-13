#include "../Penguin.hpp"

int main()
{
    Penguin* penguin = new Penguin;
    std::cout << penguin->getFoodCost() << std::endl;
    delete penguin;
    return 0;
}
