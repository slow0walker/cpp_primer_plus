#include <iostream>
#include <cstring>
#include "golf.h"

void setgolf(golf &g, const char *name, int hc)
{
    std::strncpy(g.fullname, name, Len - 1);
    g.fullname[Len - 1] = '\0';
    g.handicap = hc;
}

int setgolf(golf &g)
{
    std::cout << "Enter golfer's name: ";
    std::cin.get(g.fullname, Len);
    if (std::cin.fail())
        return 0;
    std::cout << "Enter golfer's handicap: ";
    std::cin >> g.handicap;
    std::cin.get();
    return 1;
}

void handicap(golf &g, int hc)
{
    g.handicap = hc;
}

void showgolf(const golf &g)
{
    std::cout << "Golfer's name: " << g.fullname << std::endl;
    std::cout << "Golfer's handicap: " << g.handicap << std::endl;
}