#include <iostream>
using namespace std;

int main()
{
    int A = 5, B = 6, C = 7;
    int Temp = A;

    A = C;
    C = B;
    B = Temp;

    cout << A << "\n" << B << "\n" << C;

    return 0;
}