#include <iostream>

long double probability(unsigned numbers, unsigned picks)
{
    long double res = 1.0;
    for (int i = 0; i < picks; i++)
    {
        res = res * (numbers - i) / (i + 1);
    }
    return res;
}

int main()
{
    long double p = probability(47, 5) * probability(27, 1);
    std::cout << "The probability of winning the lottery is 1 in " << p << std::endl;
    return 0;
}
