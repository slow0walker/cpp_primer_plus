#include <iostream>
#include <array>
int main()
{
    using namespace std;
    const int N = 101;
    array<long double, N> factorials;
    factorials[0] = factorials[1] = 1.0L;
    for (int i = 2; i < N; i++)
        factorials[i] = i * factorials[i - 1];
    cout << "100!= " << factorials[100] << endl;
    return 0;
}