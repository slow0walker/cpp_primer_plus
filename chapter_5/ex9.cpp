#include <iostream>
#include <string>
using namespace std;

int main()
{
    string word;
    int count = 0;

    while (cin >> word && word != "done")
    {
        count++;
    }

    cout << "Total: " << count << endl;
    return 0;
}