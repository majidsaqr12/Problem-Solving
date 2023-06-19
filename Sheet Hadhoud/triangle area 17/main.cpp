#include <iostream>

using namespace std;

int main()
{
    float a, h;

    cout << "Enter A and H of triangle ? ";
    cin >> a >> h;

    float area = 0.5 * a * h;

    cout << "The area of triangle is " << area;

    return 0;
}
