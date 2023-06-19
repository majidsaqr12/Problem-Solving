#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    int arr[t];

    for(int i = 0; i < t; i++)
    {
        int num;
        cin >> num;

        long long fac = 1;
        for(int j = 1; j <= num; j++)
        {
            fac = j * fac;
        }
        cout << fac << endl;
    }
}
