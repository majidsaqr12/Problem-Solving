#include <iostream>

using namespace std;

int main()
{
    int T;
    cin >> T;

    int counter = 0;
    label:counter += 1;

    if(counter <= T)
    {
        string S;
        cin >> S;

        if( S.size() > 10)
        {
            cout << S[0] << S.size() - 2 << S[S.length() - 1] << endl;
        }
        else { cout << S << endl;}
        goto label;

    }
    return 0;
}
