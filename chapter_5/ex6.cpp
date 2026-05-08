#include <iostream>
int main()
{
    int sales[3][12];
    int total_sales = 0;
    for (int year = 0; year < 3; year++)
    {
        int yearly_sales = 0;
        for (int month = 0; month < 12; month++)
        {
            std::cout << "Enter sales for year " << year + 1 << " month " << month + 1 << ": ";
            std::cin >> sales[year][month];
            yearly_sales += sales[year][month];
        }
        std::cout << "Total sales for year " << year + 1 << ": " << yearly_sales << std::endl;
        total_sales += yearly_sales;
    }
    std::cout << "Total sales for all years: " << total_sales << std::endl;
    return 0;
}