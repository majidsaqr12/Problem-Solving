#include <iostream>

using namespace std;

int main()
{
    int num, rev = 0;

    cin >> num;

    int temp = num;
    do
     {
         int digit = num % 10;
         rev = (rev * 10) + digit;
         num = num / 10;
     } while (num != 0);

     if (temp == (rev/1))
         cout << rev << endl << "YES";
     else
         cout << rev << endl << "NO";

    return 0;
}
