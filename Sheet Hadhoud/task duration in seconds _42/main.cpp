#include <iostream>

using namespace std;

int main()
{
    double days, hours, minutes, seconds;

    cout << "Enter task duration in days, hours, minutes, seconds ? ";
    cin >> days >> hours >> minutes >> seconds ;

    double total_seconds = (days*24*60*60) + (hours*60*60) + (minutes*60) + seconds;

    cout << total_seconds << " seconds";

    return 0;
}
