#include "../Tiger.hpp"

int main()
{
    Tiger* tiger = new Tiger;
    std::cout << "Tiger food cost: " << tiger->getFoodCost() << std::endl;
    std::cout << "Tiger pay off amount: " << tiger->payOff() << std::endl;
    delete tiger;
    return 0;
}
