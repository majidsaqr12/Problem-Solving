#include <iostream>

using namespace std;

int main()
{
    long long N;
    cin >> N;

    int A[N];

    for(int i = 0; i < N; i++) { cin >> A[i];}

    int sum =0;

    for(int j = 0; j < N; j++) { sum += A[j];}

    cout << sum;

    return 0;
}
