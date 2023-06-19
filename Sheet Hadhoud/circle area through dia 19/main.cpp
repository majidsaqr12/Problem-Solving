#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float d;

    cout << "Enter D of circle ? ";
    cin >> d;

    float area = (M_PI * d * d) / 4;

    cout << "The area of circle is " << area;

    return 0;
}
