#include <iostream>

void print(const char *str, int n = 0);

int main()
{
    print("Hello");
    print("World");
    print("C++", 5);
    return 0;
}

void print(const char *str, int n)
{
    static int count = 0;
    count++;

    if (n == 0)
    {
        std::cout << str << std::endl;
    }
    else
    {
        for (int i = 0; i < count; i++)
        {
            std::cout << str << std::endl;
        }
    }
}