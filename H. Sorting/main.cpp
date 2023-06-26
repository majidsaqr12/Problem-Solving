#include <iostream>

using namespace std;

int main()
{
    long long N;
    cin >> N;

    int A[N];

    for(int i= 0; i < N; i++) { cin >> A[i];}

    for(int j = 0; j < N; j++)
    {
        for(int k = j; k < N; k++)
        {
            if(A[j] >= A[k])
            {
                int temp;
                temp = A[j];
                A[j] = A[k];
                A[k] = temp;
            }
        }
    }

    for(int x = 0; x < N; x++) {cout << A[x] << ' ';}
    return 0;
}
