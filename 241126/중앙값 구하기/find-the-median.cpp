#include <iostream>
using namespace std;

int main()
{
    int A, B, C;
    cin >> A >> B >> C;

    if ((A > B && A < C) || (A > C && A < B))
    {
        cout << A;
    }
    else if ((B > A && B < C) || (B > C && B < A))
    {
        cout << B;
    }
    else
    {
        cout << C;
    }

    return 0;
}