#include <iostream>
#include<string>

using namespace std;

int main()
{
    string S;
    cin >> S;

    string temp = S;

    int x = S.length();

    bool isSame = false;

    for(int j = 0; j < S.size(); j++)
    {
        x -= 1;
        temp[j] = S[x];
    }

    for(int k = 0; k < S.size(); k++)
    {
        if(S[k] == temp[k]) {isSame = true;}
        else
        {
            isSame = false;
            break;
        }
    }

    if(isSame == true) {cout << "YES";}
    else { cout << "NO";}

    return 0;
}
