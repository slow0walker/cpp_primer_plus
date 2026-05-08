#include <iostream>

int main()
{
    using namespace std;
    int number;
    cout << "Enter a number(0 to quit):";
    cin >> number;
    int sum = 0;
    while (number)
    {
        sum += number;
        cout << "By far the cumulative sum is " << sum << endl;
        cout << "Enter a number(0 to quit):";
        cin >> number;
    }
    return 0;
}