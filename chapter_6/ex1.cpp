#include <iostream>
#include <cctype>

int main()
{
    char ch;
    using namespace std;
    while ((cin.get(ch)) && ch != '@')
    {
        if (isdigit(ch))
            continue;
        ;

        if (islower(ch))
            cout << (char)toupper(ch);
        else if (isupper(ch))
            cout << (char)tolower(ch);
        else
            cout << ch;
    }
    return 0;
}