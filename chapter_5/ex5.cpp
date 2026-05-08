#include <iostream>

int main()
{
    const char *month[12] =
        {
            "January", "February", "March", "April", "May", "June",
            "July", "August", "September", "October", "November", "December"};
    int sales[12];
    int sum = 0;
    for (int i = 0; i < 12; i++)
    {
        std::cout << "Enter sales for " << month[i] << ": ";
        std::cin >> sales[i];
        sum += sales[i];
    }
    std::cout << "Total sales for the year: " << sum << std::endl;
    return 0;
}
