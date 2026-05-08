#include <iostream>
using namespace std;

class Move
{
private:
    double x, y;

public:
    Move(double a = 0, double b = 0) : x(a), y(b) {}

    void showmove() const
    {
        cout << "x=" << x << ", y=" << y << endl;
    }

    Move add(const Move &m) const
    {
        return Move(x + m.x, y + m.y);
    }

    void reset(double a = 0, double b = 0)
    {
        x = a;
        y = b;
    }
};

int main()
{
    Move m1(1, 2), m2(3, 4);
    Move m3 = m1.add(m2);
    m3.showmove();
}