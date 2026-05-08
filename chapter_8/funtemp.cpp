#include <iostream>

template <typename T>
void Swap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 10, y = 20;
    std::cout << "Before swap: x = " << x << ", y = " << y << std::endl;
    Swap(x, y);
    std::cout << "After swap: x = " << x << ", y = " << y << std::endl;

    double a = 1.5, b = 2.5;
    std::cout << "Before swap: a = " << a << ", b = " << b << std::endl;
    Swap(a, b);
    std::cout << "After swap: a = " << a << ", b = " << b << std::endl;

    return 0;
}