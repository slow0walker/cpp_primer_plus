#include <iostream>
using namespace std;

int main()
{
    const int INCH_PER_FOOT = 12;

    int inches;
    cout << "Enter your height in inches: __\b\b";
    cin >> inches;

    int feet = inches / INCH_PER_FOOT;
    int remain = inches % INCH_PER_FOOT;

    cout << "Your height is " << feet << " feet and "
         << remain << " inches.\n";

    return 0;
}