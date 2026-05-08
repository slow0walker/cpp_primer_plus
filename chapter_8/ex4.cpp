#include <iostream>
using namespace std;
#include <cstring>

struct stringy
{
    char *str;
    int ct;
};

void set(stringy &s, const char *str);
void show(const stringy &s, int n = 0);
int main()
{
    stringy beany;
    char testing[] = "Reality isn't what it used to be.";

    set(beany, testing);
    show(beany);
    show(beany, 2);

    return 0;
}

void set(stringy &s, const char *str)
{
    s.ct = strlen(str);
    s.str = new char[s.ct + 1];
    strcpy(s.str, str);
}

void show(const stringy &s, int n)
{
    if (n == 0)
    {
        cout << s.str << endl;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            cout << s.str << endl;
        }
    }
}

void show(const char *str, int n)
{
    if (n == 0)
    {
        cout << str << endl;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            cout << str << endl;
        }
    }
}