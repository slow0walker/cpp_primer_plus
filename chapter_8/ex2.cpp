#include <iostream>
using namespace std;
#include <string>

struct CandyBar
{
    string brand;
    double weight;
    int calories;
};

void set(CandyBar &cb, const string &brand = "Millennium Munch", double weight = 2.85, int calories = 350);
void show(const CandyBar &cb);

int main()
{
    CandyBar cb1;
    set(cb1);
    show(cb1);

    CandyBar cb2;
    set(cb2, "Snickers", 1.5, 250);
    show(cb2);

    return 0;
}

void set(CandyBar &cb, const string &brand, double weight, int calories)
{
    cb.brand = brand;
    cb.weight = weight;
    cb.calories = calories;
}

void show(const CandyBar &cb)
{
    cout << "Brand: " << cb.brand << endl;
    cout << "Weight: " << cb.weight << " ounces" << endl;
    cout << "Calories: " << cb.calories << endl;
}