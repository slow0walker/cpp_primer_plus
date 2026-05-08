#include <iostream>
using namespace std;

int main()
{
    char choice;

    do
    {
        cout << "c) carnivore  p) pianist\n";
        cout << "t) tree       g) game\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 'c':
            cout << "Lion\n";
            break;
        case 'p':
            cout << "Mozart\n";
            break;
        case 't':
            cout << "Maple\n";
            break;
        case 'g':
            cout << "Chess\n";
            break;
        default:
            cout << "Invalid, try again\n";
        }

    } while (choice != 'c' && choice != 'p' &&
             choice != 't' && choice != 'g');

    return 0;
}