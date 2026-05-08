#include <iostream>

#include <string>

class Golf
{
private:
    std::string fullname;
    int handicap;

public:
    Golf(const std::string &name = "", int hc = 0);
    void show() const;

    void setGolf();
};

Golf::Golf(const std::string &name, int hc)
{
    fullname = name;
    handicap = hc;
}

void Golf::show() const { std::cout << fullname << ", handicap: " << handicap << std::endl; }

void Golf::setGolf()
{
    char name[40];
    int hc;
    std::cout << "Enter name: ";
    std::cin.getline(name, 40);
    std::cout << "Enter handcap: ";
    std::cin >> hc;
    std::cin.get();

    *this = Golf(name, hc);
}