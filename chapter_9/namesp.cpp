#include <iostream>
#include "namesp.h"

namespace pers
{
    using std::cin;
    using std::cout;
    void get_person(Person &p)
    {
        cout << "Enter first name: ";
        getline(cin, p.fname);
        cout << "Enter last name: ";
        getline(cin, p.lname);
    }

    void show_person(const Person &p)
    {
        cout << p.fname << " " << p.lname;
    }
}

namespace debts
{
    using namespace pers;
    using std::cin;
    using std::cout;

    void get_debt(Debt &d)
    {
        cout << "Enter first name: ";
        getline(cin, d.name.fname);
        cout << "Enter last name: ";
        getline(cin, d.name.lname);
        cout << "Enter amount: ";
        cin >> d.amount;
        cin.get(); // clear newline character from input buffer
    }

    void show_debt(const Debt &d)
    {
        show_person(d.name);
        cout << ": $" << d.amount << std::endl;
    }

    double sum_debt(const Debt ar[], int n)
    {
        double total = 0;
        for (int i = 0; i < n; ++i)
            total += ar[i].amount;
        return total;
    }
}