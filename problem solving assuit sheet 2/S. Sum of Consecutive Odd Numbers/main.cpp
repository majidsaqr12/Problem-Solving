#include <iostream>

using namespace std;

int main()
{
    int T, X, Y;

    cin >> T;

    int counter = 0;
    label: counter += 1;

    if(counter <= T)
    {
        cin >> X >> Y;

        if(X > Y)
        {
            int sum = 0;

            for(int i = Y + 1; i < X; i++)
            {
                if(i % 2 !=0)
                {
                    sum += i;
                }
            }
            cout << sum << endl;
        }
        else
        {
            int sum = 0;

            for(int i = X + 1; i < Y; i++)
            {
                if(i % 2 !=0)
                {
                    sum += i;
                }
            }
            cout << sum << endl;
        }
        goto label;
    }
    return 0;
}
