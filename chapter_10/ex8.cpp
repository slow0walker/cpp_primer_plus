#include <iostream>
using namespace std;

typedef int Item;

class List
{
private:
    static const int MAX = 10;
    Item items[MAX];
    int size;

public:
    List() : size(0) {}

    bool isempty() const { return size == 0; }
    bool isfull() const { return size == MAX; }

    bool add(Item item)
    {
        if (size < MAX)
        {
            items[size++] = item;
            return true;
        }
        return false;
    }

    void visit(void (*pf)(Item &))
    {
        for (int i = 0; i < size; i++)
            pf(items[i]);
    }
};

// 外部函数
void doubleItem(Item &x)
{
    x *= 2;
}

int main()
{
    List l;
    l.add(1);
    l.add(2);
    l.add(3);

    l.visit(doubleItem);

    l.visit([](Item &x)
            { cout << x << " "; });
}