#include <iostream>

using namespace std;

int main()
{
    int total_bill, cash_paid;

    cout << "Enter TotalBill and CashPaid ? ";
    cin >> total_bill >> cash_paid;

    int paid_back = cash_paid - total_bill;

    cout << paid_back;

    return 0;
}
