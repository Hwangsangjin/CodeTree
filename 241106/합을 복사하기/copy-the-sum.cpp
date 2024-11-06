#include <iostream>
using namespace std;

int main()
{
    int A = 1, B = 2, C = 3;

    A = B = C = A + B + C;

    cout << A << " " << B << " " << C;
    return 0;
}