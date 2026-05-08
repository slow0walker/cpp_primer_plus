typedef int Item;
class Stack
{
private:
    enum
    {
        MAX = 10
    };
    Item *pitems;
    int size;
    int top;

public:
    Stack(int n = MAX) : size(n), top(0)
    {
        pitems = new Item[size];
    }

    ~Stack()
    {
        delete[] pitems;
    }

    bool push(const Item &item)
    {
        if (top < size)
        {
            pitems[top++] = item;
            return true;
        }
        return false;
    }

    bool pop(Item &item)
    {
        if (top > 0)
        {
            item = pitems[--top];
            return true;
        }
        return false;
    }

    bool isempty() const
    {
        return top == 0;
    }

    bool isfull() const
    {
        return top == size;
    }
};