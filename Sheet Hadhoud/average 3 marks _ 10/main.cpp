#include <iostream>

using namespace std;

int main()
{
    int mark1, mark2, mark3;

    cout << "Enter 3 marks ? ";
    cin >> mark1 >> mark2 >> mark3;

    float average = (mark1+mark2+mark3) / 3;

    cout << average;
    return 0;
}
