#include <iostream>

using namespace std;

int main()
{
    // Solution with ASCI code

    int counter = 64;
    label:counter += 1;
    cout << char(counter) << endl;

    if(counter != 90) {goto label;}

    // Another solution with Loops

    /*for(char c = 'A'; c <= 'Z'; c++) {cout << c << endl;}*/

    return 0;
}
