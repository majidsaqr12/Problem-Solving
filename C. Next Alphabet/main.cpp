#include <iostream>

using namespace std;

int main()
{
    char C;
    cin >> C;

    for(char i = 97; i <= 122; i++)
    {
        if(C == 122)
        {
            cout << char(97);
            break;
        }
        else if(C == i)
        {
            cout << char(i + 1);
        }
    }
    return 0;
}
