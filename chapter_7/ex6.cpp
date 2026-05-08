#include <iostream>
using namespace std;
int fill_array(double ar[], int limit);
void show_array(const double ar[], int size);
void reverse_array(double ar[], int szie);

int main()
{
    const int Max = 10;
    double arr[Max];
    int size = fill_array(arr, Max);
    show_array(arr, size);
    reverse_array(arr, size);
    show_array(arr, size);
    return 0;
}

int fill_array(double ar[], int limit)
{
    cout << "Enter up to or nonnumber to stop:" << endl;
    int i = 0;
    while (i < limit && cin >> ar[i])
    {
        i++;
    }
    return i;
}

void show_array(const double ar[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "ar[" << i << "] = " << ar[i] << endl;
    }
}

void reverse_array(double ar[], int size)
{
    for (int i = 0; i < size / 2; i++)
    {
        double temp = ar[i];
        ar[i] = ar[size - 1 - i];
        ar[size - 1 - i] = temp;
    }
}