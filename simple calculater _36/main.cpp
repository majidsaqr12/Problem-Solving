#include <iostream>

using namespace std;

int main()
{
    double num1, num2;
    double result;
    char ope;

    cout << "Enter Your Operation ? ";
    cin >> num1 >> ope >> num2;

    switch(ope){
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        default:
            cout << "Error";
    }

    cout << result;
    return 0;
}
