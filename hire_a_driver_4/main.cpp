#include <iostream>

using namespace std;

int main()
{
    int age;
    char driver_license;

    cout << "Enter your age ? ";
    cin >> age;

    cout << endl << "Do you have driver license ? ( Y for yes or N for no )\n";
    cin >> driver_license ;

    if(age > 21 && (driver_license == 'Y' || driver_license == 'y'))
    {
        cout << "Hired" ;
    }
    else if (age < 21 || (driver_license == 'N' || driver_license == 'n'))
    {
        cout << "Rejected";
    }
    else
    {
        cout << "Please Enter Correct Info";
    }
    return 0;
}
