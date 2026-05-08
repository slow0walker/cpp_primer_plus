#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

struct Donor
{
    string name;
    double amount;
};

int main()
{
    ifstream file("donors.txt");

    if (!file)
    {
        cout << "Failed to open file!\n";
        return 1;
    }

    int n;
    file >> n; // 读取人数
    file.ignore();

    vector<Donor> donors(n);

    // 读取数据
    for (int i = 0; i < n; i++)
    {
        getline(file, donors[i].name);
        file >> donors[i].amount;
        file.ignore();

        // 输出 Grand Patrons
        cout << "Grand Patrons:\n";
        bool found = false;

        for (auto &d : donors)
        {
            if (d.amount >= 10000)
            {
                cout << d.name << endl;
                found = true;
            }
        }

        if (!found)
            cout << "none\n";

        // 输出 Patrons
        cout << "\nPatrons:\n";
        found = false;

        for (auto &d : donors)
        {
            if (d.amount < 10000)
            {
                cout << d.name << endl;
                found = true;
            }
        }

        if (!found)
            cout << "none\n";
    }
    file.close();

    return 0;
}