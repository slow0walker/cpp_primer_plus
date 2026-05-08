#include <iostream>
#include <vector>
#include <string>

struct Donor
{
    std::string name;
    double amount;
};

int main()
{
    std::cout << "Enter the number of donors: ";
    int n;
    std::cin >> n;

    std::vector<Donor> donors(n);
    std::cin.ignore(); // Ignore the newline after reading n
    for (int i = 0; i < n; i++)
    {
        std::cout << "Enter donor" << i + 1 << "name: ";
        std::getline(std::cin, donors[i].name);
        std::cout << "Enter donor" << i + 1 << "amount: ";
        std::cin >> donors[i].amount;
        std::cin.ignore();
    }
    std::cout << "\nGrand Patrons:\n";
    bool found = false;
    for (const auto &d : donors)
    {
        if (d.amount >= 10000)
        {
            std::cout << d.name << " donated " << d.amount << std::endl;
            found = true;
        }
    }
    if (!found)
    {
        std::cout << "none\n";
    }

    std::cout << "\nPatrons:\n";
    found = false;
    for (const auto &d : donors)
    {
        if (d.amount < 10000)
        {
            std::cout << d.name << " donated " << d.amount << std::endl;
            found = true;
        }
    }
    if (!found)
    {
        std::cout << "none\n";
    }
    return 0;
}