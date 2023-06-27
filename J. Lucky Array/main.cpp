#include <iostream>

using namespace std;

int main()
{
    long long N;
    cin >> N;

    int A[N];

    for(int i = 0; i < N; i++) { cin >> A[i];}

    int lowest = A[0];

    for(int j = 0; j < N; j++) { if(lowest > A[j]) { lowest = A[j];} }

    int counter = 0;

    for(int k = 0; k < N; k++) { if(lowest == A[k]) { counter += 1;} }

    if(counter %2 == 0) { cout << "Unlucky";}
    else { cout << "Lucky";}

    return 0;
}
