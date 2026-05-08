#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include "vect.h"

int main()
{
    using namespace std;
    using VECTOR::Vector;

    srand(time(0));

    ofstream outFile("random_walk.txt"); // 打开文件

    if (!outFile)
    {
        cout << "Error opening file." << endl;
        return 1;
    }

    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    double target;
    double dstep;
    cout << "\nEnter target distance (q to quit): ";
    while (cin >> target)
    {
        cout << "Enter step length: ";
        if (!(cin >> dstep))
            break;

        outFile << "Target Distance: " << target << ", Step Size: " << dstep << endl;

        while (result.magval() < target)
        {
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);
            result = result + step;
            steps++;
            // 输出每一步的坐标
            outFile << steps << ": (x,y) = (" << result.xval() << ", " << result.yval() << ")" << endl;
        }

        // 输出总结信息
        outFile << "After " << steps << " steps, the subject has the following location:" << endl;
        outFile << "(x,y) = (" << result.xval() << ", " << result.yval() << ")" << endl;
        result.polar_mode();
        outFile << " or\n";
        outFile << "(" << result.magval() << ", " << result.angval() << ")" << endl;
        outFile << "Average outward distance per step = " << result.magval() / steps << endl;
        steps = 0;
        result.reset(0.0, 0.0);

        cout << "\nEnter target distance (q to quit): ";
    }
    outFile.close(); // 关闭文件
    return 0;