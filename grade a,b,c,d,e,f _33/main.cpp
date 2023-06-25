#include <iostream>

using namespace std;

int main()
{
    int grade;

    cout << "Enter your grade ? ";
    cin >> grade;

    if(grade >= 90 && grade <= 100) {cout << "A";}
    else if(grade >= 80 && grade < 90) {cout << "B";}
    else if(grade >= 70 && grade < 80) {cout << "C";}
    else if(grade >= 60 && grade < 70) {cout << "D";}
    else if(grade >= 50 && grade < 60) {cout << "E";}
    else {cout << "F";}


    return 0;
}
