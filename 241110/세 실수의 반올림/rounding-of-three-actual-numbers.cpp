#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
    double A, B, C;
    cin >> A >> B >> C;
    cout << fixed << setprecision(3) << A << "\n" << B << "\n" << C;
    return 0;
}