#include <iostream>

using namespace std;

int main()
{
    string S;

    getline(cin, S);

    for(int i = 0; i < S.size(); i++)
    {
        if( S[i] != '\\') { cout << S[i] ;}
        else { break;}
    }

    return 0;
}
