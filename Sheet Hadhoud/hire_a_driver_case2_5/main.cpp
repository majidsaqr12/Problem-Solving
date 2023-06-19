#include <iostream>

using namespace std;

int main()
{
    int age;
    char driver_license;
    char recommendation;

    cout << "Enter your Age?  ";
    cin >> age;

    cout << "Do you have driver license ? ( Y for Yes - N for NO )  ";
    cin >> driver_license;

    cout << "Do you have driver Recommendation ? ( Y for Yes - N for NO )  ";
    cin >> recommendation;

    // first Solution

    /*if(recommendation == 'Y' || recommendation == 'y') { cout << "Hired";}
    else if(age > 21 && (driver_license == 'Y' || driver_license == 'y')) { cout << "Hired";}
    else if (age < 21 || (driver_license == 'N' || driver_license == 'n')) { cout << "Sorry, Rejected";}
    else {cout << "Please Enter Correct Info";}*/

    // Seconed Solution

    if(recommendation == 'Y' || recommendation == 'y') { cout << "Hired";}
    else
    {
        if(age > 21 && (driver_license == 'Y' || driver_license == 'y')) { cout << "Hired";}
        else if (age < 21 || (driver_license == 'N' || driver_license == 'n')) { cout << "Sorry, Rejected";}
        else {cout << "Please Enter Correct Info";}
    }

    return 0;
}
