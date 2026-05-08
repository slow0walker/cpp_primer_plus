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
    strcpy(primary, p);
}

Classic::Classic(const Classic &c)
    : Cd(c)
{
    strcpy(primary, c.primary);
}

Classic::~Classic() {}

void Classic::Report() const
{
    Cd::Report(); // 调用基类
    cout << "Primary work: " << primary << endl;
}

Classic &Classic::operator=(const Classic &c)
{
    if (this == &c)
        return *this;

    Cd::operator=(c);
    strcpy(primary, c.primary);

    return *this;
}