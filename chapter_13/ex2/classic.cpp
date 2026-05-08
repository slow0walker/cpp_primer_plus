#include <iostream>
#include <cstring>
#include "classic.h"

using namespace std;

Classic::Classic(const char *p,
                 const char *s1,
                 const char *s2,
                 int n,
                 double x)
    : Cd(s1, s2, n, x)
{
    primary = new char[strlen(p) + 1];
    strcpy(primary, p);
}

Classic::Classic(const Classic &c)
    : Cd(c) // 调用基类拷贝构造
{
    primary = new char[strlen(c.primary) + 1];
    strcpy(primary, c.primary);
}

Classic::~Classic()
{
    delete[] primary;
}

void Classic::Report() const
{
    Cd::Report();
    cout << "Primary work: " << primary << endl;
}

Classic &Classic::operator=(const Classic &c)
{
    if (this == &c)
        return *this;

    // 先处理基类
    Cd::operator=(c);

    delete[] primary;
    primary = new char[strlen(c.primary) + 1];
    strcpy(primary, c.primary);

    return *this;
}