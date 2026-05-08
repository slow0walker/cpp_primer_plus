#include <iostream>
using namespace std;
/*
const int Seasons = 4;

int main()
{
    const char *names[Seasons] = {
        "Spring", "Summer", "Fall", "Winter"};

    double expenses[Seasons];

    double total = 0;

    // 输入
    for (int i = 0; i < Seasons; i++)
    {
        cout << "Enter " << names[i] << " expenses: ";
        cin >> expenses[i];
    }

    // 输出
    cout << "\nExpenses:\n";
    for (int i = 0; i < Seasons; i++)
    {
        cout << names[i] << ": " << expenses[i] << endl;
        total += expenses[i];
    }

    cout << "Total: " << total << endl;

    return 0;
}
    */
struct Season
{
    const char *name;
    double expense;
};

int main()
{
    Season s[4] = {
        {"Spring", 0},
        {"Summer", 0},
        {"Fall", 0},
        {"Winter", 0}};

    double total = 0;

    for (int i = 0; i < 4; i++)
    {
        cout << "Enter " << s[i].name << ": ";
        cin >> s[i].expense;
        total += s[i].expense;
    }

    cout << "\n";
    for (int i = 0; i < 4; i++)
    {
        cout << s[i].name << ": " << s[i].expense << endl;
    }

    cout << "Total: " << total << endl;
}