#include <iostream>
#include "mytime2.h"

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

Time Time::operator-(const Time &t) const
{
    Time diff;
    int tot1, tot2;
    tot1 = t.minutes + 60 * t.hours;
    tot2 = this->minutes + 60 * this->hours;
    diff.minutes = (tot2 - tot1) % 60;
    diff.hours = (tot2 - tot1) / 60;
    return diff;
}

Time Time::operator*(double n) const
{
    Time res;
    long totalminutes = hours * n * 60 + minutes * n;
    res.minutes = totalminutes % 60;
    res.hours = totalminutes / 60;
    return res;
}

void Time::Show() const
{
    std::cout << hours << " hours, " << minutes << " minutes";
}