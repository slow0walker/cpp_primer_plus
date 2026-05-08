#include <iostream>
int main()
{
    using namespace std;
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    int sum = 0;
    for (int i = a; i <= b; i++)
        sum += i;
    cout << "The sum of numbers from " << a << " to " << b << " is " << sum << endl;
    return 0;
}