#include <iostream>

int main()
{
    using namespace std;
    int j = 5;
    while (++j < 9)
        cout << j++ << endl;

    for (int i = 1; i < 65; i *= 2)
        cout << i << endl;
    return 0;
}