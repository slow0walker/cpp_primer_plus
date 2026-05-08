#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    string automobile;
    int year;
    double a_price;
    double d_price;

    ofstream outFile("carinfo.txt");

    if (!outFile)
    {
        cerr << "Can't open output file. Bye.\n";
        exit(EXIT_FAILURE);
    }

    // 输入
    cout << "Enter the make and model of automobile: ";
    getline(cin, automobile);

    cout << "Enter the model year: ";
    cin >> year;

    cout << "Enter the original asking price: ";
    cin >> a_price;

    // 计算
    d_price = 0.913 * a_price;
    // ===== 输出到屏幕 =====
    cout << fixed << setprecision(2);
    cout << "Make and model: " << automobile << endl;
    cout << "Year: " << year << endl;
    cout << "Was asking $" << a_price << endl;
    cout << "Now asking $" << d_price << endl;

    // ===== 输出到文件 =====
    outFile << fixed << setprecision(2);
    outFile << "Make and model: " << automobile << endl;
    outFile << "Year: " << year << endl;
    outFile << "Was asking $" << a_price << endl;
    outFile << "Now asking $" << d_price << endl;

    outFile.close();

    cout << "\nData saved to carinfo.txt\n";

    return 0;
}
