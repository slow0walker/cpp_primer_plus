#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream file("test.txt");

    char ch;
    int count = 0;

    while (file.get(ch))
    {
        count++;
    }

    cout << "Characters: " << count << endl;
}