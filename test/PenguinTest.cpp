#include "../Penguin.hpp"

int main()
{
    Penguin* penguin = new Penguin;
    std::cout << "Penguin food cost: " << penguin->getFoodCost() << std::endl;
    std::cout << "Penguin pay off amount: " << penguin->payOff() << std::endl;
    delete penguin;
    return 0;
}
