#include <iostream>

using namespace std;

int main()
{
    int pennie, nickel, dime, quarter, dollar;

    cout << "Enter pennie, nickel, dime, quarter and dollar ? ";
    cin >> pennie >> nickel >> dime >> quarter >> dollar;

    float tpennie = pennie + nickel*5 + dime*10 + quarter*25 + dollar*100;
    float tdollar = tpennie / 100;

    cout << "Total Pennies is " << tpennie << endl;
    cout << "Total Dollars is " << tdollar << endl;

    return 0;
}
