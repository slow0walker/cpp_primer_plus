#include <iostream>
using namespace std;

// 基本运算
double add(double x, double y)
{
    return x + y;
}

double sub(double x, double y)
{
    return x - y;
}

double mul(double x, double y)
{
    return x * y;
}

// 核心函数
double calculate(double a, double b, double (*func)(double, double))
{
    return func(a, b);
}

int main()
{
    double a, b;

    cout << "Enter two numbers (q to quit):\n";

    while (cin >> a >> b)
    {

        cout << "Add: " << calculate(a, b, add) << endl;
        cout << "Sub: " << calculate(a, b, sub) << endl;
        cout << "Mul: " << calculate(a, b, mul) << endl;

        cout << "----\n";
    }

    cout << "Bye\n";
    return 0;
}