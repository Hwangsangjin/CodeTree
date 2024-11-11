#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
    char C;
    double A, B;
    cin >> C >> A >> B;
    cout << fixed << setprecision(2) << C << "\n" << A << "\n" << B;
    return 0;
}