#include <iostream>
#include <string>

struct CandyBar
{
    std::string brand;
    double weight;
    int calories;
};
int main()
{
    CandyBar snacks[3] = {
        {"Mocha Munch", 2.3, 350},
        {"KitKat", 1.5, 200},
        {"Snickers", 2.0, 300}};

    for (int i = 0; i < 3; i++)
    {
        std::cout << snacks[i].brand << ", ";
        std::cout << snacks[i].weight << ", ";
        std::cout << snacks[i].calories << std::endl;
    }
    return 0;
}