#include <iostream>

using namespace std;

int main()
{
    int num;

    cout << "Enter your num ? ";
    cin >> num;

    int a = num * num;
    int b = num * num * num;
    int c = num * num *num * num;

    cout << "Power of 2 = " << a << endl <<"Power of 3 = " << b << endl << "Power of 4 = " << c;
    return 0;
}
