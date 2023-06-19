#include <iostream>

using namespace std;

int main()
{
    float mark1, mark2, mark3;

    cout << "Enter 3 marks ? ";
    cin >> mark1 >> mark2 >> mark3;

    float average = (mark1 + mark2 + mark3) / 3;

    if(average >= 50.0) { cout << "Pass"; }
    else { cout << "Sorry, Faild";}

    return 0;
}
