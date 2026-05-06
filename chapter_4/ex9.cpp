#include <iostream>
#include <string>
using namespace std;

struct CandyBar
{

    string brand;
    double weight;
    int calories;
};

int main()
{
    int n = 3;
    CandyBar *snacks = new CandyBar[3];

    snacks[0] = {"Mocha Munch", 2.3, 350};
    snacks[1] = {"KitKat", 1.5, 200};
    snacks[2] = {"Snickers", 2.0, 300};

    for (int i = 0; i < n; ++i)
    {
        cout << "Brand: " << snacks[i].brand << endl;
        cout << "Weight: " << snacks[i].weight << " oz" << endl;
        cout << "Calories: " << snacks[i].calories << endl;
        cout << endl;
    }

    delete[] snacks;
    return 0;
}
