#include <iostream>

double harmonic(double x, double y);

int main()
{
    double a, b;
    std::cout << "Enter two numbers(0 to quit): ";
    while (std::cin >> a >> b && a != 0 && b != 0)
    {
        std::cout << "The harmonic mean of" << a << " and " << b << " is " << harmonic(a, b) << std::endl;
        std::cout << "Enter two numbers(0 to quit): ";
    }
    return 0;
}