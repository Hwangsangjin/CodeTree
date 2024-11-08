#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
    double A;
    cin >> A;
    cout << fixed << setprecision(2) << A + 1.5;
    return 0;
}