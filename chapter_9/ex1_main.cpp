#include <iostream>
#include "golf.h"

using namespace std;

int main()
{
    const int SIZE = 5;
    golf players[SIZE];

    int count = 0;

    cout << "请输入高尔夫球员信息（空姓名结束）\n";

    while (count < SIZE && setgolf(players[count]))
    {
        count++;
    }

    cout << "\n已录入的信息：\n";

    for (int i = 0; i < count; i++)
    {
        showgolf(players[i]);
        cout << "------------------\n";
    }

    if (count > 0)
    {
        cout << "修改第一个球员 handicap 为 99\n";
        handicap(players[0], 99);
        showgolf(players[0]);
    }

    return 0;
}