#include <iostream>
#include <cstring>
using namespace std;

class Plorg
{
private:
    char name[20];
    int ci;

public:
    Plorg(const char *n = "Plorga", int c = 50)
    {
        strncpy(name, n, 19);
        name[19] = '\0';
        ci = c;
    }

    void setCI(int c)
    {
        ci = c;
    }

    void show() const
    {
        cout << name << ", CI=" << ci << endl;
    }
};

int main()
{
    Plorg p1;
    Plorg p2("Zorg", 80);

    p1.show();
    p2.show();

    p2.setCI(100);
    p2.show();
}