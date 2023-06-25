#include <iostream>

using namespace std;

int main()
{
    int A, B, L, D;

    cin >> A >> B;

    if (A > B) {L = A;}
    else {L = B;}

    for(int i =1; i <= L; i++)
    {
        if( A % i == 0 && B % i ==0) {D = i;}
    }

    cout << D;
    return 0;
}
