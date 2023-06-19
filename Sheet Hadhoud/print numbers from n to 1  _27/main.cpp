#include <iostream>

using namespace std;

int main()
{
    int num;

    cout << "Enter your number ? ";
    cin >> num;

    int counter = num;

    counter = num + 1;
    label:counter -= 1;

    cout << counter << endl;

    if(counter != 1)
    {
        goto label;
    }

    // Another solution
    // for(int i = num; i >= 1; --i) { cout << i << endl;}

    return 0;
}
