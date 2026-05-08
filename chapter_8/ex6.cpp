#include <iostream>
#include <cstring>
template <typename T>
T maxn(T arr[], int n)
{
    T max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

template <>
const char *maxn<const char *>(const char *arr[], int n)
{
    const char *longest = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (strlen(arr[i]) > strlen(longest))
        {
            longest = arr[i];
        }
    }
    return longest;
}

int main()
{
    int arr1[5] = {1, 2, 3, 4, 5};
    double arr2[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    const char *arr3[5] = {"short", "medium", "longer", "longest", "tiny"};

    std::cout << "Max of arr1: " << maxn(arr1, 5) << std::endl;
    std::cout << "Max of arr2: " << maxn(arr2, 5) << std::endl;
    std::cout << "Longest string in arr3: " << maxn(arr3, 5) << std::endl;

    return 0;
}