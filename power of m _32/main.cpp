#include <iostream>

using namespace std;

int main()
{
    int num, m, p = 1;

    cout << "Enter number amd power ? ";
    cin >> num >> m;

    int counter = m;
    counter += 1;
    label: counter -= 1;
    p *= num;

    if(counter != 1) { goto label;}

    cout << p;

    // Another solution

    /* for(int i = m; i >= 1; i--)
    {
        p *= num;
    }
    cout << p;*/

    return 0;
}
