#include <iostream>

using namespace std;

int sumDigits(int num)
{
    int sum = 0;;

    label: int z = num % 10;

    if(num != 0)
    {
        sum += z;
        num = num / 10;
        goto label;
    }
    return sum;
}
int main()
{
    int N, A, B, sum = 0;

    cin >> N >> A >> B;

    for(int i = 1; i <= N; i++)
    {
        for(int j = A; j <= B; j++)
        {
            if(sumDigits(i) == j) {sum+=i;}
        }

    }
    cout << sum;
    return 0;
}
