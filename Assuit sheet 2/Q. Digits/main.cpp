#include <iostream>

using namespace std;

int main()
{
    int T, N;

    cin >> T;

    for(int i = 1; i <= T; i++)
    {
        cin >> N;

        label:int Z = N % 10;

        if(N != 0)
        {
            cout << Z << ' ';
            N = N / 10;
            goto label;
        }
        cout << endl;
    }
    return 0;
}
