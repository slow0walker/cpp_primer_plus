#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

struct Donor
{
    string name;
    double amount;
};

// 读取文件
void LoadData(vector<Donor> &donors, const string &filename)
{
    ifstream fin(filename);
    if (!fin)
    {
        cout << "No file found!\n";
        return;
    }
    int n;
    fin >> n;
    fin.ignore();
    donors.clear();

    for (int i = 0; i < n; i++)
    {
        Donor d;
        getline(fin, d.name);
        fin >> d.amount;
        fin.ignore();
        donors.push_back(d);
    }
    cout << "Loaded " << donors.size() << " donors from " << filename << endl;
}
// 保存文件

void saveData(const vector<Donor> &donors, const string &filename)
{
    ofstream file(filename);
    file << donors.size() << endl;

    for (auto &d : donors)
    {
        file << d.name << endl;
        file << d.amount << endl;
    }
    cout << "Data saved.\n";
}
// 显示所有
void showAll(const vector<Donor> &donors)
{
    for (auto &d : donors)
    {
        cout << d.name << " :" << d.amount << endl;
    }
}
// 添加
void addDonor(vector<Donor> &donors)
{
    Donor d;
    cin.ignore();

    cout << "Enter name: ";
    getline(cin, d.name);

    cout << "Enter amount: ";
    cin >> d.amount;

    donors.push_back(d);
}
// 分类显示

void ShowByCategory(const vector<Donor> &donors)
{
    cout << "\nGrand Patrons: \n";
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
    {
        cout << "None\n";
    }
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

// 菜单
void menu()
{
    cout << "\n==== Donor System ====\n";
    cout << "1. Load from file\n";
    cout << "2. Show all\n";
    cout << "3. Add donor\n";
    cout << "4. Show categories\n";
    cout << "5. Save to file\n";
    cout << "0. Exit\n";
    cout << "Choice: ";
}
int main()
{
    vector<Donor> donors;
    string filename = "donors.txt";
    int choice;

    do
    {
        menu();
        cin >> choice;

        switch (choice)
        {
        case 1:
            LoadData(donors, filename);
            break;
        case 2:
            showAll(donors);
            break;
        case 3:
            addDonor(donors);
            break;
        case 4:
            ShowByCategory(donors);
            break;
        case 5:
            saveData(donors, filename);
            break;
        }

    } while (choice != 0);

    return 0;
}