#include <iostream>

using namespace std;

int main()
{
    int age;

    cout << "Enter your age ? ";
    cin >> age;

    bool is_valid = (age >= 18 && age <= 45);

    // Another solution

    /* bool is_valid = false;
    for(int i = 18; i <= 45; i++)
    {
        if(age == i)
        {
            is_valid = true;
        }
    }*/

    if(is_valid) { cout << "Valid Age";}
    else { cout << "Invalid Age";}
    return 0;
}
