#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of runners: ";
    cin >> n;

    vector<double> times(n);

    for (int i = 0; i < n; i++)
    {
        double t;
        cout << "Enter time for runner " << i + 1 << ": ";
        cin >> t;

        if (t <= 0)
        {
            cout << "Invalid time. Please enter a positive number." << endl;
            i--;
            continue;
        }
        times.push_back(t);
    }

    double sum = 0;
    for (double t : times)
    {
        sum += t;
    }

    double average = sum / times.size();

    double min_time = *min_element(times.begin(), times.end());
    double max_time = *max_element(times.begin(), times.end());

    sort(times.begin(), times.end());

    cout << "Average time: " << average << endl;
    cout << "Fastest time: " << min_time << endl;
    cout << "Slowest time: " << max_time << endl;
    cout << "Times in ascending order: ";
    for (double t : times)
    {
        cout << t << " ";
    }
    cout << endl;
    return 0;
}