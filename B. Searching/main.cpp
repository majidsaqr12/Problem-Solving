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
    }

    int X;
    cin >> X;

    bool isFound = false;

    for(int j = 0; j < N; j++)
    {
        if(X == arr[j])
        {
            isFound = true;
            cout << j;
            break;
        }
    }

    if(isFound == false) { cout << -1;}
    return 0;
}
