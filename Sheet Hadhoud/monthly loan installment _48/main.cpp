#include <iostream>

using namespace std;

int main()
{
    int loan_amount, month;

    cout << "Enter LoanAmount and How many months ? ";
    cin >> loan_amount >> month;

    int monthly_installment = loan_amount / month;

    cout << monthly_installment << " EGP";

    return 0;
}
