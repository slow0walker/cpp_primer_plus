#include <iostream>
using namespace std;

int main()
{
    const int MIN_PER_DEG = 60;
    const int SEC_PER_MIN = 60;

    int degree, minute, second;

    cout << "Enter degrees: ";
    cin >> degree;

    cout << "Enter minutes: ";
    cin >> minute;

    cout << "Enter seconds: ";
    cin >> second;

    double result = degree + minute / 60.0 + second / 3600.0;

    cout << degree << " deg, "
         << minute << " min, "
         << second << " sec = "
         << result << " degrees\n";

    return 0;
}