#include <iostream>
using namespace std;

double *fill_array(double *begin, double *end);
void show_array(const double *begin, const double *end);
void reverse_array(double *begin, double *end);

int main()
{
    const int Max = 10;
    double arr[Max];
    double *size = fill_array(arr, arr + Max);
    show_array(arr, size);
    reverse_array(arr, size);
    show_array(arr, size);
    return 0;
}

double *fill_array(double *begin, double *end)
{
    cout << "Enter up to or nonnumber to stop:" << endl;
    double *ptr = begin;
    while (ptr < end && cin >> *ptr)
    {
        ptr++;
    }
    return ptr;
}

void show_array(const double *begin, const double *end)
{
    for (const double *ptr = begin; ptr < end; ptr++)
    {
        cout << "ar[" << ptr - begin << "] = " << *ptr << endl;
    }
}

void reverse_array(double *begin, double *end)
{
    for (double *ptr = begin; ptr < begin + (end - begin) / 2; ptr++)
    {
        double temp = *ptr;
        *ptr = *(end - 1 - (ptr - begin));
        *(end - 1 - (ptr - begin)) = temp;
    }
}