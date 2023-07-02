#include <iostream>

using namespace std;

int main()
{
    string S;
    cin >> S;

    for(int i = 0; i < S.size(); i++)
    {
        if(S[i] == ',') { S[i] = ' ';}
        else if(isupper(S[i])) {S[i] += 32;}
        else if(islower(S[i])) {S[i] -= 32;}
    }

    cout << S;
    return 0;
}
