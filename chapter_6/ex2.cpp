#include <iostream>
#include <array>

int main()
{
    using namespace std;
    array<double, 10> arr;
    int i = 0;
    while (i < 10 && cin >> arr[i])
    {
        i++;
    }

    double sum = 0.0;
    for (int j = 0; j < i; j++)
    {
        sum += arr[j];
    }

    double average = sum / i;
    cout << "Average: " << average << endl;

    int count = 0;
    for (int j = 0; j < i; j++)
    {
        if (arr[j] > average)
        {
            count++;
        }
    }
    cout << "Number of elements above average: " << count << endl;
    return 0;
}