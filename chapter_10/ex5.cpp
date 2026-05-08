#include <iostream>
using namespace std;

struct customer
{
    char fullname[35];
    double payment;
};

typedef customer Item;

class Stack
{
private:
    static const int MAX = 10;
    Item items[MAX];
    int top;

public:
    Stack() { top = 0; }

    bool push(const Item &item)
    {
        if (top < MAX)
        {
            items[top++] = item;
            return true;
        }
        return false;
    }

    bool pop(Item &item)
    {
        if (top > 0)
        {
            item = items[--top];
            return true;
        }
        return false;
    }

    bool isempty() const { return top == 0; }
};

int main()
{
    Stack st;
    customer c;
    double total = 0;

    st.push({"Alice", 100});
    st.push({"Bob", 200});

    while (!st.isempty())
    {
        st.pop(c);
        total += c.payment;
        cout << "Removed: " << c.fullname << endl;
    }

    cout << "Total: " << total << endl;
}