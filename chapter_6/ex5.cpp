#include <iostream>

int main()
{
    double income;
    std::cout << "Enter your income: ";
    while (std::cin >> income && income >= 0)
    {
        double tax = 0.0;
        if (income > 35000)
        {
            tax += (income - 35000) * 0.20;
            income = 35000;
        }
        if (income > 15000)
        {
            tax += (income - 15000) * 0.15;
            income = 15000;
        }
        if (income > 5000)
        {
            tax += (income - 5000) * 0.10;
        }
        std::cout << "Tax: " << tax << std::endl;
        std::cout << "Enter your income: ";
    }
    return 0;
}