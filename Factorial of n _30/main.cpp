#include <iostream>

using namespace std;

int main()
{
    int num, fac = 1;

    cout << "Enter your num ? ";
    label: cin >> num;

    if(num < 0) { goto label;}

    int counter = num;

    counter = num + 1;
    label2:counter -= 1;

    fac *= counter;
    if(counter != 1) {goto label2;}

    cout << fac;

    // Another solution
    /* if(num < 0) { goto label;}

    for(int i = num; i >= 1; i--)
    {
        fac *= i;
    }
    cout << fac;*/

    return 0;
}
