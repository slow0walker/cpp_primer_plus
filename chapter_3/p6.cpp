#include <iostream>
using namespace std;

int main()
{
    double miles, gallons;

    cout << "Enter miles driven: ";
    cin >> miles;

    cout << "Enter gallons used: ";
    cin >> gallons;

    double mpg = miles / gallons;

    cout << "Fuel efficiency: "
         << mpg << " mpg\n";

    return 0;
}