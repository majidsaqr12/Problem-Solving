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

    for(int j = 0; j < N; j++)
    {
        if(A[j] <= 10) {cout << 'A' << '[' << j << ']' << " = " << A[j] << endl;}
    }
    return 0;
}
