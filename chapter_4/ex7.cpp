#include <iostream>
#include <string>
using namespace std;

struct Pizza
{
    std::string company;
    double diameter;
    double weight;
};

int main()
{
    Pizza p;
    std::cout << "Enter company name: ";
    std::getline(cin, p.company);

    std::cout << "Enter diameter: ";
    cin >> p.diameter;

    std::cout << "Enter weight: ";
    cin >> p.weight;

    std::cout << "\nPizza Info:\n";
    std::cout << p.company << ", "
              << p.diameter << ", "
              << p.weight << std::endl;

    return 0;
}