#include "winec.h"

Wine::Wine() {}

Wine::Wine(const char *l, int y, const int yr[], const int bot[])
    : label(l), years(y), data(ArrayInt(yr, y), ArrayInt(bot, y)) {}

Wine::Wine(const char *l, int y)
    : label(l), years(y), data(ArrayInt(y), ArrayInt(y)) {}

void Wine::GetBottles()
{
    using std::cin;
    using std::cout;

    for (int i = 0; i < years; i++)
    {
        cout << "Enter year: ";
        cin >> data.first[i];
        cout << "Enter bottles for that year: ";
        cin >> data.second[i];
    }
}

std::string &Wine::Label()
{
    return label;
}

int Wine::sum()
{
    return data.second.sum();
}

void Wine::Show()
{
    using std::cout;
    using std::endl;

    cout << "Wine: " << label << endl;
    cout << "Year    Bottles\n";

    for (int i = 0; i < years; i++)
    {
        cout << data.first[i] << "    " << data.second[i] << endl;
    }
}