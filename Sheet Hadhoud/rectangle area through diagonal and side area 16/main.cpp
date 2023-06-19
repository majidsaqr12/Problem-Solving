#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a, d;

    cout << "Enter A and D of rectangle ? ";
    cin >> a >> d;

    float area = a * sqrt(d*d - a*a);

    cout << "The area of rectangle is " << area;
    return 0;
}
