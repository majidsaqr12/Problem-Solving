#include <iostream>

using namespace std;

int main()
{
    int pin, balance = 7500;
    int counter = 0;

    cout << "Enter password ? ";
    label: cin >> pin;

    bool correct_pass = (pin == 1234);

    if(correct_pass) {cout << "Your balance is " << balance;}
    else
    {
        counter += 1;
        if (counter != 3) {
            cout << "Wrong password, please try again ";
            goto label;
        }
        else {cout << "Card Locked";}
    }

    return 0;
}
