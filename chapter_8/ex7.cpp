#include <iostream>
using namespace std;

template <typename T>
T SumArray(T arr[], int n)
{
    T sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    return sum;
}

struct debts
{
    char name[50];
    double amount;
};

double SumArray(debts arr[], int n)
{
    double sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i].amount;
    }

    return sum;
}

int main()
{
    int things[6] = {13, 31, 103, 301, 310, 130};
    debts mr_E[3] =
        {
            {"Tom", 2400.0},
            {"Jack", 1300.0},
            {"Lucy", 1800.0}};

    cout << "Total things: "
         << SumArray(things, 6) << endl;

    cout << "Total debts: "
         << SumArray(mr_E, 3) << endl;

    return 0;
}