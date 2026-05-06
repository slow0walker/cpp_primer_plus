#include <iostream>
using namespace std;

int main()
{
    const double KM_TO_MILE = 0.6214;
    const double LITER_TO_GALLON = 3.875;

    double l_per_100km;

    cout << "Enter fuel consumption (L/100km): ";
    cin >> l_per_100km;

    double miles = 100 * KM_TO_MILE;
    double gallons = l_per_100km / LITER_TO_GALLON;

    double mpg = miles / gallons;

    cout << "Equivalent mpg: " << mpg << endl;

    return 0;
}