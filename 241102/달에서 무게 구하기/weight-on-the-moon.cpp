#include <iostream>
using namespace std;

int main()
{
    int Weight = 13;
    double Gravity = 0.165;

    cout << fixed;
    cout.precision(6);
    cout << Weight << " * " << Gravity << " = " << Weight * Gravity;
    return 0;
}