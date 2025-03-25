#include <iostream>
using namespace std;

bool IsLeapYear(int Y)
{
    if ((Y % 4 == 0 && Y % 100 != 0) || (Y % 400 == 0))
        return true;
    
    return false;
}

int main()
{
    int Y;
    cin >> Y;
    cout << (IsLeapYear(Y) ? "true" : "false");
    return 0;
}