#include <iostream>
using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;

    int Sum = A + B;
    double Avg = (double)Sum / 2;

    cout << fixed;
    cout.precision(1);
    cout << Sum << " " << Avg;
    return 0;
}