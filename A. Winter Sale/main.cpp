#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    float X, P;

    cin >> X >> P;

    float originalPrice = P / (1 - (X/100));

    float b = ceil(originalPrice * 100.0) / 100.0;

    cout << b;

    return 0;
}
