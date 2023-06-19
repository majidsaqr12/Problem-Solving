#include <iostream>

using namespace std;

int main()
{
    double hours;

    cout << "Enter Hours ? ";
    cin >> hours;

    double days = hours / 24;
    double weeks = days / 7;

    // Another solution

    /*double weeks = hours / 168;
    double days = hours / 24;*/

    cout << weeks << " weeks" << endl;
    cout << days << " days";

    return 0;
}
