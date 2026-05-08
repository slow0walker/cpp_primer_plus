#include <iostream>
#include "mytime1.h"

Time::Time()
{
    hours = 0;
    minutes = 0;
}

Time::Time(int h, int m)
{
    hours = h;
    minutes = m;
}

void Time::AddMin(int m)
{
    minutes += m;
    hours += minutes / 60;
    minutes %= 60;
}

void Time::AddHr(int h)
{
    hours += h;
}

void Time::Reset(int h, int m)
{
    hours = h;
    minutes = m;
}

Time Time::operator+(const Time &t) const
{
    Time temp;
    temp.minutes = minutes + t.minutes;
    temp.hours = hours + t.hours + temp.minutes / 60;
    temp.minutes %= 60;
    return temp;
}
void Time::Show() const
{
    std::cout << hours << " hours, " << minutes << " minutes";
}