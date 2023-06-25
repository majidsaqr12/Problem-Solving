#include <iostream>

using namespace std;

int main()
{
    float number1, number2, number3;

    cout << "Enter 3 numbers ? ";
    cin >> number1 >> number2 >> number3;

    float sum = number1 + number2 + number3;

    cout << "The sum of " << number1 << ' ' << number2 << ' ' << number3 << " is " << sum;
    return 0;
}
