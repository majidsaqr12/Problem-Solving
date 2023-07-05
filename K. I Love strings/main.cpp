#include <iostream>

using namespace std;

int main()
{
    long long N;
    cin >> N;

    int counter = 0;
    label:counter += 1;

    if(counter <= N)
    {
        string S, T;
        cin >> S >> T;

        S.insert(1,1,T[0]);
        S.insert(3,1,T[1]);
        T.erase(T.begin() + 0);
        T.erase(T.begin() + 1);

        cout << S << " " << T;
        goto label;
    }
    return 0;
}
