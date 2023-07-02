#include <iostream>

using namespace std;

int main()
{
    string S;
    cin >> S;

    int sum = 0;

    for(char c = 'a'; c <= 'z'; c++)
    {
        int i;

        for(i = 0; i < S.size(); i++)
        {
            if(c == S[i]) {sum += 1;}

        }
        if(sum != 0) {cout << c << " : " << sum << endl;}
        sum = 0;
    }

    return 0;
}
