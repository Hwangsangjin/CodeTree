#include <iostream>
using namespace std;

int main()
{
    double Array[8];
    double Sum = 0.0;
    double Avg = 0.0;

    for (int i = 0; i < 8; ++i)
    {
        cin >> Array[i];
        Sum += Array[i];
    }

    Avg = Sum / 8;

    cout << fixed;
    cout.precision(1);
    cout << Avg;

    return 0;
}