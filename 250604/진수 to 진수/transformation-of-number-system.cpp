#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int A, B;
    string N;
    cin >> A >> B >> N;

    int Decimal = 0;

    for (const char& n : N)
    {
        int Digit = (n >= '0' && n <= '9') ? n - '0' : n - 'A' + 10;
        Decimal = Decimal * A + Digit;
    }

    string Result;

    do
    {
        int Digit = Decimal % B;
        Result += (Digit < 10) ? ('0' + Digit) : ('A' + Digit - 10);
        Decimal /= B;
    } while (Decimal > 0);

    reverse(Result.begin(), Result.end());
    cout << Result;
    return 0;
}