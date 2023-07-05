#include <iostream>

using namespace std;

int Add(int num1, int num2);

int main()
{
    int num1, num2;
    cin >> num1 >> num2;

    cout << Add(num1, num2);

    return 0;
}

int Add(int num1, int num2)
{
    return num1 + num2;
}
