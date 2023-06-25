#include <iostream>

using namespace std;

int main()
{
    int number1, number2;

    cout << "Enter 2 numbers ? ";
    cin >> number1 >> number2;

    if(number1 > number2) {cout << "The max number is " << number1 << endl;}
    else {cout << "The max number is " << number2 << endl;}

    // Another solution with max method
    int max_number = max(number1, number2);
    cout << "Max number is " << max_number;

    return 0;
}
