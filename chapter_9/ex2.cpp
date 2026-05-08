#include <iostream>
#include <string>

using namespace std;

struct customer
{
    string fullname; // Use string instead of char array
    double payment;
};

int main()
{
    customer temp;

    cout << "Enter customer name (empty line to quit): ";
    getline(cin, temp.fullname);

    while (temp.fullname != "")
    {
        cout << "Enter payment amount: ";
        cin >> temp.payment;

        cin.get(); // Clear the newline character

        cout << "\nCustomer Information:\n";
        cout << "Name: " << temp.fullname << endl;
        cout << "Payment: " << temp.payment << endl;

        cout << "\nEnter next customer name (empty line to quit): ";
        getline(cin, temp.fullname);
    }

    cout << "\nProgram finished.\n";

    return 0;
}