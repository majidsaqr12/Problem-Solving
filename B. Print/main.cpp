#include <iostream>

using namespace std;

short Print(short N);

int main()
{
    short N;
    cin >> N;

    Print(N);

    return 0;
}

short Print(short N)
{
    for(int i = 1; i <= N; i++)
    {
        cout << i;
    }
}
