#include <iostream>
using std::cout;
using std::endl;
class Stonewt
{
private:
    double pounds;
    enum
    {
        STONE,
        INTEGER,
        FLOATING
    } form; // 使用枚举来定义状态

public:
    Stonewt(double lbs, int type = FLOATING) : pounds(lbs), form() {}

    // 运算符重载
    Stonewt operator+(const Stonewt &other) const
    {
        return Stonewt(pounds + other.pounds, form);
    }

    // 显示函数，依据表示形式输出不同格式
    void show() const
    {
        if (form == STONE)
        {
            cout << pounds / 14 << " stone" << endl;
        }
        else if (form == INTEGER)
        {
            cout << int(pounds) << " pounds" << endl;
        }
        else
        {
            cout << pounds << " pounds (floating)" << endl;
        }
    }
};