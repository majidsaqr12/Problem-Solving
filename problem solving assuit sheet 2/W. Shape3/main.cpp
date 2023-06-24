#include <iostream>

using namespace std;

int main()
{
    int T;

    cin >> T;

    for(int i = 0; i < T; i++) // Row
    {
        for(int j = T - i; j > 1; j--) {cout << " ";} // Spaces

        for(int k = 0; k < 2 * i + 1; k++) { cout << "*";}  // *

        cout << endl;
    }
    for(int i = T; i > 0; i--) // Row
    {
        for(int j = i; j < T; j++) {cout << " ";} // Spaces

        for(int k = T; k < 2 * i + 1; k--) { cout << "*";}  // *

        cout << endl;
    }
    return 0;
}
