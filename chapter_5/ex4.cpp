#include <iostream>

int main()
{
    using namespace std;
    double daphne = 100.0;
    double cleo = 100.0;
    int years = 0;
    while (cleo <= daphne)
    {
        daphne += 10.0;
        cleo *= 1.05;
        years++;
    }
    cout << "After " << years << " years, cleo will exceed daphne." << endl;
    cout << "Daphne's amount: $" << daphne << endl;
    cout << "Cleo's amount: $" << cleo << endl;
    return 0;
}