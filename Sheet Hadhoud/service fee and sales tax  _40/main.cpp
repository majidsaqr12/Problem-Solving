#include <iostream>

using namespace std;

int main()
{
    float bill_value;

    cout << "Enter BillValue ? ";
    cin >> bill_value;

    float total_bill = bill_value * 1.1;
    total_bill = total_bill * 1.16;

    cout << total_bill;

    return 0;
}
