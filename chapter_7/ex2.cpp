#include <iostream>

int fill(double *ar, int size);
void show(const double *ar, int size);
double average(const double *ar, int size);

int main()
{
    const int SIZE = 10;
    double ar[SIZE];
    int size = fill(ar, SIZE);
    show(ar, size);
    std::cout << "Average: " << average(ar, size) << std::endl;
    return 0;
}

int fill(double *ar, int size)
{
    std::cout << "Enter up to numbers or -1 to quit:";
    int i = 0;
    while (i < size)
    {
        double temp;
        std::cin >> temp;
        if (temp == -1)
            break;
        ar[i] = temp;
        i++;
    }
    return i;
}

void show(const double *ar, int size)
{
    std::cout << "The number you entered are:";
    for (int i = 0; i < size; i++)
    {
        std::cout << ar[i] << " ";
    }
}

double average(const double *ar, int size)
{
    double sum = 0;
    for (int i = 0; i < size; i++)
        sum += ar[i];
    return size > 0 ? sum / size : 0;
}