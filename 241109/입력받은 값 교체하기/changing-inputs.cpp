#include <iostream>
using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;

    int Temp = A;
    A = B;
    B = Temp;

    cout << A << " " << B;
    return 0;
}