#include <iostream>

using namespace std;

bool Odd(int N);
bool Palindrome(int N);

int main()
{
    int N;
    cin >> N;

    if(Palindrome(N) && Odd(N)) {cout << "YES";}
    else {cout << "NO";}

    return 0;
}

bool Palindrome(int N)
{
    int rev = 0;

    int temp = N;
    do
     {
         int digit = N % 10;
         rev = (rev * 10) + digit;
         N = N / 10;
     } while (N != 0);

     if (temp == (rev/1))
         return true;
     else
         return false;
}

bool Odd(int N)
{
    if(N % 2 == 0) {return false;}
    else {return true;}
}
