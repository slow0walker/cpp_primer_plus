#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    string word;
    int v = 0, c = 0, other = 0;

    while (cin >> word && word != "q")
    {
        if (!isalpha(word[0]))
        {
            other++;
        }
        else
        {
            char ch = tolower(word[0]);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                v++;
            else
                c++;
        }
    }

    cout << "Vowels: " << v << endl;
    cout << "Consonants: " << c << endl;
    cout << "Others: " << other << endl;
}