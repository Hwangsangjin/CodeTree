#include <iostream>
using namespace std;

int main()
{
    int A, B, C;
    cin >> A >> B >> C;

    int Sum = A + B + C;
    int Avg = Sum / 3;
    int Result = Sum - Avg;

    cout << Sum << "\n" << Avg << "\n" << Result;
    return 0;
}