#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int t_seconds;

    cout << "Enter the seconds ? ";
    cin >> t_seconds;

    int seconds_per_day = 24 * 60 * 60;
    int seconds_per_hour = 60 * 60;
    int seconds_per_minute = 60;
    int remainder1;

    int number_of_day = floor(t_seconds / seconds_per_day);
    remainder1 =  t_seconds % seconds_per_day;

    int number_of_hour = floor(remainder1 / seconds_per_hour);
    remainder1 =  remainder1 % seconds_per_hour;

    int number_of_minute = floor(remainder1 / seconds_per_minute);
    remainder1 =  remainder1 % seconds_per_minute;

    int number_of_second = remainder1;

    cout << number_of_day << ':' << number_of_hour << ':' << number_of_minute << ':' << number_of_second;

    return 0;
}
