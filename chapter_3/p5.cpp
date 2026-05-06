#include <iostream>
using namespace std;

int main()
{
    long long world, us;

    cout << "Enter world population: ";
    cin >> world;

    cout << "Enter US population: ";
    cin >> us;

    double percent = (double)us / world * 100;

    cout << "US population is "
         << percent << "% of world\n";

    return 0;
}