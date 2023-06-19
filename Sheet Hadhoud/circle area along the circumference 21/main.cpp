#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float l;

    cout << "Enter L of circle ? ";
    cin >> l;

    float area = (l * l) / (4 * M_PI);

    cout << "The area of circle is " << area;
    return 0;
}
