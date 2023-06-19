#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float r;

    cout << "Enter R of circle ? ";
    cin >> r;

    float area = M_PI * r * r;

    cout << "The area of circle is " << area;

    return 0;
}
