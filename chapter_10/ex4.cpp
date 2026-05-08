#include <iostream>
using namespace std;

namespace SALES
{
    const int QUARTERS = 4;

    class Sales
    {
    private:
        double sales[QUARTERS];
        double average;
        double max;
        double min;

    public:
        Sales(const double ar[], int n)
        {
            int i;
            double sum = 0;

            for (i = 0; i < n && i < QUARTERS; i++)
            {
                sales[i] = ar[i];
                sum += ar[i];
            }

            for (; i < QUARTERS; i++)
                sales[i] = 0;

            average = sum / n;
            max = min = sales[0];

            for (i = 1; i < QUARTERS; i++)
            {
                if (sales[i] > max)
                    max = sales[i];
                if (sales[i] < min)
                    min = sales[i];
            }
        }

        void show() const
        {
            cout << "Sales: ";
            for (int i = 0; i < QUARTERS; i++)
                cout << sales[i] << " ";
            cout << "\nAvg: " << average
                 << " Max: " << max
                 << " Min: " << min << endl;
        }
    };
}