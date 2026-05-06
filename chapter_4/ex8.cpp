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
    Pizza *p = new Pizza;
    cout << "Enter diameter: ";
    cin >> p->diameter;

    cin.ignore();

    cout << "Enter company name: ";
    getline(cin, p->company);

    cout << "Enter weight: ";
    cin >> p->weight;

    cout << "\nPizza Info:\n";
    cout << p->company << ", "
         << p->diameter << ", "
         << p->weight << endl;

    delete p;

    return 0;
}