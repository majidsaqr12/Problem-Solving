#include <iostream>

using namespace std;

int main()
{
    long long pass, balance = 7500;

    cout << "Enter Password ? ";
    label: cin >> pass;

    bool correct_pass = (pass == 1234);

    if(correct_pass) {cout << "Your balance is " << balance;}
    else {
        cout << "Wrong password, please try again ";
        goto label;
    }

    return 0;
}
