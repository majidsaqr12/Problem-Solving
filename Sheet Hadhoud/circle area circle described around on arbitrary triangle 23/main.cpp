#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a,b,c;

    cout << "Enter A, B and C of circle ? ";
    cin >> a,b,c;

    float p = (a + b + c) / 2;

    float d = (a*b*c) / (4 * sqrt(p * (p-a) * (p-b) * (p-c)));

    d = d * d;

    float area = M_PI * d;

    cout << "The area of circle is " << area;

    return 0;
}
