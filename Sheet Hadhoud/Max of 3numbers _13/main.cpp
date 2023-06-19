#include <iostream>

using namespace std;

int main()
{
    int number1, number2, number3;

    cout << "Enter 3 numbers ? ";
    cin >> number1 >> number2 >> number3;

    if(number1 >= number2 && number1 >= number3) {cout << "The max number is " << number1;}
    else if(number2 >= number1 && number2 >= number3) {cout << "The max number is " << number2;}
    else {cout << "The max number is " << number3;}

    return 0;
}
