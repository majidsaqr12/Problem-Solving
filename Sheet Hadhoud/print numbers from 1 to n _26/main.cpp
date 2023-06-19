#include <iostream>

using namespace std;

int main()
{
    int num;

    cout<< "Enter your number ? ";
    cin >> num;

    int counter = 0;

    label: counter += 1;
    cout << counter << endl;

    if(counter != num)
    {
        goto label;
    }

    // Another solution

    // for(int i = 1; i <= num; i++) {cout << i << endl;}

    return 0;
}
