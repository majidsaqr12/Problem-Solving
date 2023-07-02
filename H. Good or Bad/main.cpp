#include <iostream>

using namespace std;

int main()
{
    int T;
    cin >> T;

    int counter = 0;
    label:counter += 1;

    if(counter <= T)
    {
        string target_string("101");
        string target_string_("010");
        string S;
        cin >> S;

        if(S.find(target_string) || S.find(target_string_)) {cout << "Good" << endl;}
        else {cout << "Bad" << endl;}
        goto label;
    }

    return 0;
}
