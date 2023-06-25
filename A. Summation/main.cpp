#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long n, sum = 0;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
         sum += arr[i];
    }

    cout << abs(sum);

    return 0;
}
