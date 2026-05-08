#include <iostream>

namespace pers
{
    void get_name()
    {
        using namespace std;
        cout << "What is your name? ";
        char name[20];
        cin.getline(name, 20);
        cout << "Hello, " << name << "!\n";
    }
}

namespace debts
{
    using namespace std;
    struct debt
    {
        char name[20];
        double amount;
    };

    void get_debt(debt &d)
    {
        cout << "Enter name: ";
        cin.getline(d.name, 20);
        cout << "Enter amount: ";
        cin >> d.amount;
        cin.get(); // clear newline character from input buffer
    }

    void show_debt(const debt &d)
    {
        cout << "Name: " << d.name << ", Amount: $" << d.amount << endl;
    }
}

int main()
{
    pers::get_name();

    debts::debt my_debt;
    debts::get_debt(my_debt);
    debts::show_debt(my_debt);

    return 0;
}