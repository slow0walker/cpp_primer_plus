#include <iostream>
using namespace std;

class Complex
{
private:
    double real, imag; // 实部和虚部

public:
    // 构造函数
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}

    // 加法运算符重载
    Complex operator+(const Complex &other) const
    {
        return Complex(real + other.real, imag + other.imag);
    }

    // 乘法运算符重载
    Complex operator*(const Complex &other) const
    {
        return Complex(real * other.real - imag * other.imag,
                       real * other.imag + imag * other.real);
    }

    // 友元函数重载输出 <<
    friend ostream &operator<<(ostream &os, const Complex &c)
    {
        os << c.real << " + " << c.imag << "i";
        return os;
    }

    // 友元函数重载输入 >>
    friend istream &operator>>(istream &is, Complex &c)
    {
        cout << "Enter real part: ";
        is >> c.real; // 读取实部
        cout << "Enter imaginary part: ";
        is >> c.imag; // 读取虚部
        return is;
    }
};