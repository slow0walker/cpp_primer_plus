#include <iostream>
class Time
{
private:
    int hours, minutes;

public:
    Time(int h, int m) : hours(h), minutes(m) {}

    // 友元函数重载运算符
    friend Time operator+(const Time &t1, const Time &t2)
    {
        int totalMinutes = t1.minutes + t2.minutes;
        int totalHours = t1.hours + t2.hours + totalMinutes / 60;
        totalMinutes = totalMinutes % 60;
        return Time(totalHours, totalMinutes);
    }

    // 输出函数
    void show() const
    {
        std::cout << hours << " hours, " << minutes << " minutes" << std::endl;
    }
};