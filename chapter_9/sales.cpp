#include <iostream>
#include "sales.h"

using namespace std;

namespace SALES
{
    // Non-interactive version
    void setSales(Sales &s, const double ar[], int n)
    {
        int count = (n < QUARTERS) ? n : QUARTERS;

        double sum = 0.0;

        s.max = ar[0];
        s.min = ar[0];

        for (int i = 0; i < count; i++)
        {
            s.sales[i] = ar[i];
            sum += ar[i];

            if (ar[i] > s.max)
                s.max = ar[i];

            if (ar[i] < s.min)
                s.min = ar[i];
        }

        // Remaining elements set to 0
        for (int i = count; i < QUARTERS; i++)
        {
            s.sales[i] = 0;
        }

        s.average = sum / count;
    }

    // Interactive version
    void setSales(Sales &s)
    {
        double temp[QUARTERS];

        cout << "Enter sales for 4 quarters:\n";

        for (int i = 0; i < QUARTERS; i++)
        {
            cout << "Quarter " << i + 1 << ": ";
            cin >> temp[i];
        }

        setSales(s, temp, QUARTERS);
    }

    // Display all information
    void showSales(const Sales &s)
    {
        cout << "\nSales Information:\n";

        for (int i = 0; i < QUARTERS; i++)
        {
            cout << "Quarter " << i + 1
                 << ": " << s.sales[i] << endl;
        }

        cout << "Average: " << s.average << endl;
        cout << "Maximum: " << s.max << endl;
        cout << "Minimum: " << s.min << endl;
    }
}