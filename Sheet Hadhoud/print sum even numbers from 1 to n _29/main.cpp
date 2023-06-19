#include <iostream>

using namespace std;

int main()
{
    int num, sum =0;

    cout << "Enter your number ? ";
    cin >> num;

    int counter = 0;
    label:counter += 1;

    if(counter %2 == 0) {sum += counter;}

    if(counter != num) { goto label;}

    cout << sum;

    // Another solution

    /*for(int i = 1; i <= num; i++)
    {
        if(i % 2 == 0) { sum += i;}
    }
    cout << sum;*/

    return 0;
}
