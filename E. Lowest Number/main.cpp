#include <iostream>

using namespace std;

int main()
{
    long long N;
    cin >> N;

    int A[N];

    for(int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    int lowest = A[0];

    for(int j = 0; j < N; j++)
    {
        if(lowest >= A[j]) { lowest = A[j];}
    }

    cout << lowest << ' ';

    for(int k = 0; k < N; k++)
    {
        if(lowest == A[k])
        {
            cout << k + 1;
            break;
        }
    }
    return 0;
}
