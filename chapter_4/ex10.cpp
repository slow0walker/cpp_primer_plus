#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<double, 3> times;

    cout << "Enter 3 times for the 40-yard dash:\n";

    for (int i = 0; i < 3; i++)
    {
        cout << "Time " << i + 1 << ": ";
        cin >> times[i];
    }

    double sum = 0;
    for (int i = 0; i < 3; i++)
    {
        sum += times[i];
    }

    double avg = sum / 3;

    cout << "\nTimes:\n";
    for (double t : times)
    {
        cout << t << endl;
    }

    cout << "Average: " << avg << endl;

    return 0;
}