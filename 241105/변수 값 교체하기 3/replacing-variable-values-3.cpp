#include <iostream>
using namespace std;

int main()
{
    int A = 3, B = 5;
    int Temp;

    Temp = A;
    A = B;
    B = Temp;

    cout << A << "\n" << B;

    return 0;
}