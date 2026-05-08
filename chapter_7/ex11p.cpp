#include <iostream>
using namespace std;

double add(double x, double y) { return x + y; }
double sub(double x, double y) { return x - y; }
double mul(double x, double y) { return x * y; }

double calculate(double a, double b, double (*func)(double, double))
{
    return func(a, b);
}

int main()
{
    double (*fp[3])(double, double) = {add, sub, mul};

    double a, b;

    while (cin >> a >> b)
    {
        for (int i = 0; i < 3; i++)
        {
            cout << calculate(a, b, fp[i]) << endl;
        }
        cout << "----\n";
    }
}