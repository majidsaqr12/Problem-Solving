#include <iostream>

using namespace std;

int main()
{
    int num, sum = 0;

    label:cout << "Enter number ? ";
    cin >> num;

    if(num != -99) {
        sum += num;
        goto label;
    }

    cout << sum;

    // Another solution
    /*while(true)
    {
        cout << "Enter number ? ";
        cin >> num;
        if(num!=-99)
        {
            sum+=num;
        }
        else{break;}
    }
    cout << sum;*/
    return 0;
}
