#include <iostream>

template <typename T>
T max5(const T arr[5])
{
    T max = arr[0];
    for (int i = 1; i < 5; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int arr1[5] = {1, 2, 3, 4, 5};
    double arr2[5] = {1.1, 2.2, 3.3, 4.4, 5.5};

    std::cout << "Max of arr1: " << max5(arr1) << std::endl;
    std::cout << "Max of arr2: " << max5(arr2) << std::endl;

    return 0;
}