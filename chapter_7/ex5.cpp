#include <iostream>

double long recursion(int n)
{
    if (n == 0)
        return 1;
    else
        return n * recursion(n - 1);
}

int main()
{
    int n;
    std::cout << "enter a positive integer(-1 to quit):";
    while (std::cin >> n && n != -1)
    {
        if (n < 0)
        {
            std::cout << "please enter a positive integer(-1 to quit):";
            continue;
        }
        std::cout << n << "! = " << recursion(n) << std::endl;
        std::cout << "enter a positive integer(-1 to quit):";
    }
    return 0;
}