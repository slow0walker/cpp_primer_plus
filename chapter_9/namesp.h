#include <string>

namespace pers
{
    struct Person
    {
        std::string fname;
        std::string lname;
    };
    void get_person(Person &p);
    void show_person(const Person &p);
}

namespace debts
{
    using namespace pers;
    struct Debt
    {
        Person name;
        double amount;
    };
    void get_debt(Debt &d);
    void show_debt(const Debt &d);
    double sum_debt(const Debt ar[], int n);
}