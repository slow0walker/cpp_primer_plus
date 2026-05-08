#include <iostream>
#include <new>
#include <cstring>

using namespace std;

struct chaff
{
    char dross[20];
    int slag;
};

int main()
{
    // Option 1: use a static buffer
    char buffer[sizeof(chaff) * 2];

    // Use placement new to place two chaff structures in the buffer
    chaff *p = new (buffer) chaff[2];

    // Assign values to the members
    strcpy(p[0].dross, "First object");
    p[0].slag = 10;

    strcpy(p[1].dross, "Second object");
    p[1].slag = 20;

    // Display the contents using a loop
    cout << "Displaying chaff structures:\n";

    for (int i = 0; i < 2; i++)
    {
        cout << "Object " << i + 1 << ":" << endl;
        cout << "Dross: " << p[i].dross << endl;
        cout << "Slag: " << p[i].slag << endl;
        cout << "-------------------" << endl;
    }

    return 0;
}