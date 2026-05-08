#include <iostream>
#include <cstring>
#include "ex2.h"

Person::Person(const std::string &ln, const char *fn)
{
    lname = ln;
    strncpy(fname, fn, LIMIT - 1);
    fname[LIMIT - 1] = '\0';
}

void Person::Show() const
{
    std::cout << fname << " " << lname << std::endl;
}
void Person::FormalShow() const
{
    std::cout << lname << ", " << fname << std::endl;
}

int main()
{
    Person one;
    Person two("Tom");
    Person three("Tom", "Tommy");

    std::cout << "Using Show() method:\n";
    one.Show();
    two.Show();
    three.Show();
    std::cout << "\nUsing FormalShow() method:\n";
    one.FormalShow();
    two.FormalShow();
    three.FormalShow();
    return 0;
}