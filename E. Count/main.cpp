#include <iostream>
#include <string>

using namespace std;

int main()
{
    string S;
    cin >> S;

    int sum = 0;

    for(int i = 0; i < S.size(); i++) {sum = sum + (S[i] - '0');}

    cout << sum;

    return 0;
}


// Another Solution

/*int main()
{
    string S;
    cin >> S;

    int num = stoi(S);
    int sum = 0;

    label:float d = num % 10;

    if(d != 0)
    {
        sum += d;
        num = num / 10;
        goto label;
    }

    cout << sum;
    return 0;
}*/
