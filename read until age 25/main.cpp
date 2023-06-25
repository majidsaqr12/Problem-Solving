#include <iostream>
using namespace std;

int main()
{
    int age;

    cout << "Enter Your age ? ";
    label:cin >> age;

    bool is_valid = (age >= 18 && age <= 45);

    if(is_valid) {
        cout << "Valid age";
    }
    else {
        cout << "Invalid age\n";
        goto label;
    }

    return 0;
}
