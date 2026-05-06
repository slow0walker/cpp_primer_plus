#include <iostream>
using namespace std;

int main()
{
    const int SEC_PER_MIN = 60;
    const int MIN_PER_HOUR = 60;
    const int HOUR_PER_DAY = 24;

    long long seconds;

    cout << "Enter seconds: ";
    cin >> seconds;

    long long day = seconds / (HOUR_PER_DAY * MIN_PER_HOUR * SEC_PER_MIN);
    seconds %= (HOUR_PER_DAY * MIN_PER_HOUR * SEC_PER_MIN);

    long long hour = seconds / (MIN_PER_HOUR * SEC_PER_MIN);
    seconds %= (MIN_PER_HOUR * SEC_PER_MIN);

    long long minute = seconds / SEC_PER_MIN;
    long long sec = seconds % SEC_PER_MIN;

    cout << day << " days, "
         << hour << " hours, "
         << minute << " minutes, "
         << sec << " seconds\n";

    return 0;
}