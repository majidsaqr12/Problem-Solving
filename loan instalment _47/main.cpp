#include <iostream>

using namespace std;

int main()
{
    int loan_amount, monthly_installment;

    cout << "Enter LoanAmount and MonthlyInstallment ? ";
    cin >> loan_amount >> monthly_installment;

    int total_month = loan_amount / monthly_installment;

    cout << total_month << " Months";

    return 0;
}
