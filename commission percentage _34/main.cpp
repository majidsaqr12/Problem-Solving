#include <iostream>

using namespace std;

int main()
{
    int t;
    float p;

    cout << "Enter Total Sales ? ";
    cin >> t;

    if(t >= 1000000) {p = 0.01;}
    else if(t >= 500000 && t < 1000000) {p = 0.02;}
    else if(t >= 100000 && t < 500000) {p = 0.03;}
    else if(t >= 50000 && t < 100000) {p = 0.05;}
    else {p = 0.00;}

    t *= p;

    cout << t;

    return 0;
}
