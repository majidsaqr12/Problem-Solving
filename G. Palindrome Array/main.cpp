#include <iostream>

using namespace std;

int main()
{
    long long N;
    cin >> N;

    int A[N];

    int B[N];

    int x = N;

    bool isSame = false;

    for(int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    for(int j = 0; j < N; j++)
    {
        x -= 1;
        B[j] = A[x];
    }

    for(int k = 0; k < N; k++)
    {
        if(A[k] == B[k]) {isSame = true;}
        else
        {
            isSame = false;
            break;
        }
    }

    if(isSame == true) {cout << "YES";}
    else { cout << "NO";}

    return 0;
}
