#include <iostream>

using namespace std;

bool isLucky(int num)
{

    bool is_lucky = false;

    label: int z = num % 10;

    if(num != 0)
    {
        if(z == 4 || z == 7)
        {
            is_lucky = true;
            num = num / 10;
            goto label;
        }
        else
        {
            is_lucky = false;
        }
    }
    if(is_lucky) {return true;}
    else{return false;}

}
int main()
{
    int A, B;

    cin >> A >> B;

    bool flag = false;

    for(int i = A; i <= B; i++)
    {
        if(isLucky(i))
        {
            flag = true;
            cout << i << ' ';
        }
    }

    if(flag == false) {cout << -1;}

    return 0;
}
