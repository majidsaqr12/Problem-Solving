#include <iostream>

using namespace std;

int main()
{
    int number1, number2;

    cout << "Enter 2 numbers ? ";
    cin >> number1 >> number2;

    int temp;

    temp = number1;
    number1 = number2;
    number2 = temp;

    cout << number1 << ' ' << number2;
    return 0;
}
