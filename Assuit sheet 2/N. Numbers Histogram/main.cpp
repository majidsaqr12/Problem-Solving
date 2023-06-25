#include <iostream>

using namespace std;

int main()
{
    char S;
    int N, n;

    cin >> S;
    cin >> N;

    for(int i = 1; i <= N; i++)
    {
        cin >> n;

        for(int i = 1; i <= n; i++)
        {
            cout << S;
        }
        cout << endl;
    }
    return 0;
}
