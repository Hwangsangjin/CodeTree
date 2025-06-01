#include <iostream>
#include <string>
using namespace std;

int main()
{
    string Binary;
    cin >> Binary;

    int Decimal = 0;

    for (const char& Bit : Binary)
        Decimal = Decimal * 2 + (Bit - '0');

    cout << Decimal;
    return 0;
}