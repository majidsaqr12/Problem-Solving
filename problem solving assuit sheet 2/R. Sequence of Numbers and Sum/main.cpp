#include <iostream>

using namespace std;

int main()
{
    int N, M, L;

    label: cin >> N >> M;

    if(N > 0 && M > 0)
    {
        if(N > M)
        {
            int sum = 0;
            for(int i = M; i <= N; i++)
            {
                sum += i;
                cout << i << ' ';
            }
            cout <<  " sum ="<< sum;
        }
        else
        {
            int sum = 0;
            for(int i = N; i <= M; i++)
            {
                sum += i;
                cout << i << ' ';
            }
            cout <<  " sum ="<< sum;
        }
        cout << endl;
        goto label;

    }
    return 0;
}
