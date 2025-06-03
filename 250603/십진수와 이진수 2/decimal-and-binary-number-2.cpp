#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string N;
    cin >> N;

    long long Decimal = 0;
    
    for (char n : N)
        Decimal = Decimal * 2 + (n - '0');

    Decimal *= 17;

    if (Decimal == 0)
    {
        cout << 0;
        return 0;
    }

    string Result;

    while (Decimal > 0)
    {
        Result += (Decimal % 2) + '0';
        Decimal /= 2;
    }

    reverse(Result.begin(), Result.end());
    cout << Result;
    return 0;
}