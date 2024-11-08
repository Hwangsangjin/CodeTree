#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
    double Feet;
    cin >> Feet;
    cout << fixed << setprecision(1) << Feet * 30.48;
    return 0;
}