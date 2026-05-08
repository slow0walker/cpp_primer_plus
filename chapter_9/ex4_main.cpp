#include <iostream>
#include "sales.h"

int main()
{

    using namespace SALES;
    Sales s1, s2;

    // Interactive version
    setSales(s1);

    // Non-interactive version
    double arr[4] = {1200.5, 2300.8, 1800.6, 2500.9};
    setSales(s2, arr, 4);

    std::cout << "\nFirst Sales Object:";
    showSales(s1);

    std::cout << "\nSecond Sales Object:";
    showSales(s2);

    return 0;
}