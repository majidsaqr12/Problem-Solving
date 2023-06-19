#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a;

    cout << "Enter A of circle ? ";
    cin >> a;

    float area = M_PI * pow(a/2, 2);

    // another equation

    float area = (M_PI * a * a ) / 4 ;

    cout << "The area of circle is " << area;

    return 0;
}
