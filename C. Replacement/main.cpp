#include <iostream>

using namespace std;

int main()
{
    long long N;
    cin >> N;

    int arr[N];

    for(int i = 0; i < N; i++)
    {
        cin >> arr[i];

        if(arr[i] > 0) { arr[i] = 1;}
        else if(arr[i] < 0) {arr[i] = 2;}
    }

    for(int j = 0; j < N; j++)
    {
        cout << arr[j] << ' ';
    }


    return 0;
}
