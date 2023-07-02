#include <iostream>

using namespace std;

int main()
{
    long long N;
    cin >> N;

    int A[N];

    for(int i = 0; i < N; i++) { cin >> A[i];}

    int lowest = A[0], largest = A[0];

    for(int j = 0; j < N; j++) { if(lowest >= A[j]) { lowest = A[j];}}

    for(int k = 0; k < N; k++) { if(largest <= A[k]) { largest = A[k]; }}

    for(int x = 0; x < N; x++)
    {
        if(lowest == A[x]) { A[x] = largest;}
        else if (largest == A[x]) { A[x] = lowest;}
    }

    for(int y = 0; y < N; y++) {cout << A[y] << ' ';}

    return 0;
}
