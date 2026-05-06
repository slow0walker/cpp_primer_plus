#include <iostream>
using namespace std;

int main()
{
    const int INCH_PER_FOOT = 12;
    const double INCH_TO_METER = 0.0254;
    const double POUND_TO_KG = 2.2;

    int feet, inch;
    double pounds;

    cout << "Enter height (feet and inches): ";
    cin >> feet >> inch;

    cout << "Enter weight in pounds: ";
    cin >> pounds;

    int total_inch = feet * INCH_PER_FOOT + inch;
    double meter = total_inch * INCH_TO_METER;
    double kg = pounds / POUND_TO_KG;

    double bmi = kg / (meter * meter);

    cout << "BMI = " << bmi << endl;

    return 0;
}