#include <iostream>
#include "namesp.h"

void other(void);
void another(void);

int main()
{
    using debts::Debt;
    using debts::show_debt;

    Debt golf = {{"Bobby", "Smith"}, 120.0};
    show_debt(golf);
    other();
    another();
    return 0;
}

void other(void)
{
    using std::cin;
    using std::cout;
    using namespace debts;
    Person dg = {"Garry", "Cooper"};
    show_person(dg);
    cout << std::endl;
    Debt zippy[3];
    for (int i = 0; i < 3; ++i)
        get_debt(zippy[i]);

    for (int i = 0; i < 3; ++i)
        show_debt(zippy[i]);
    return;
}

void another(void)
{
    using namespace debts;
    Debt zippy[3] = {
        {{"Zippy", "Dog"}, 160.0},
        {{"Dippy", "Duck"}, 180.0},
        {{"Tippy", "Cat"}, 200.0}};
    double total = sum_debt(zippy, 3);
    std::cout << "Total debt: $" << total << std::endl;
}