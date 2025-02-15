#include <iostream>
#include <string>
using namespace std;

int main()
{
    string A, B;
    cin >> A;

    B = A;

    for (int i = 0; i < A.length(); ++i)
    {
        if (B[i] == A[0])
            B[i] = A[1];
        else if (B[i] == A[1])
            B[i] = A[0];
    }

    cout << B;
    return 0;
}