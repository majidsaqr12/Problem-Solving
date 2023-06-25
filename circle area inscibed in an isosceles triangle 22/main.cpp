#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a, b ;

    cout << "Enter A and B of Circle ? ";
    cin >> a >> b;

    float area = M_PI * (b*b/4) * (((2*a) - b) / ((2*a) + b));

    cout << "The area of circle is " << area;
    s
    return 0;
}
