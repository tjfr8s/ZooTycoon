#include "../Tiger.hpp"

int main()
{
    Tiger* tiger = new Tiger;
    std::cout << tiger->getFoodCost() << std::endl;
    delete tiger;
    return 0;
}
