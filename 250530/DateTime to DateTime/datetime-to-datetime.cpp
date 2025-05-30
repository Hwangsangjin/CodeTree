#include <iostream>
using namespace std;

int main()
{
    int A, B, C;
    cin >> A >> B >> C;

    const int BaseDay = 11, BaseHour = 11, BaseMin = 11;

    int BaseTotal = (BaseDay * 24 * 60) + (BaseHour * 60) + BaseMin;
    int InputTotal = (A * 24 * 60) + (B * 60) + C;

    int Result = InputTotal - BaseTotal;
    cout << (Result < 0 ? -1 : Result);
    return 0;
}