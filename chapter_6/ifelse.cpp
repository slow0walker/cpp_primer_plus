#include <iostream>
using namespace std;

int main()
{
    char ch;

    cout << "Type, and I shall repeat (end with .):\n";

    while (cin.get(ch) && ch != '.')
    {
        if (ch == '\n')
        {
            cout << ch;
        }
        else
        {
            cout << ++ch;
        }
    }

    cout << "\nDone.\n";
    return 0;
}