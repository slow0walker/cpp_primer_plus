#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char word[50];
    int count = 0;

    cout << "Enter words (done to stop):\n";

    while (cin >> word && strcmp(word, "done") != 0)
    {
        count++;
    }

    cout << "Total: " << count << endl;
    return 0;
}