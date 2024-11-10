#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
    double A, B;
    cin >> A >> B;
    cout << fixed << setprecision(2) << A + B;
    return 0;
}