#include <iostream>
using namespace std;

int main()
{
    int A, B, C;
    cin >> A >> B >> C;

    if (A > B)
    {
        if (B > C)
        {
            cout << A;
        }
        else
        {
            if (A > C)
            {
                cout << A;
            }
            else
            {
                cout << C;
            }
        }
    }
    else
    {
        if (A > C)
        {
            cout << B;
        }
        else
        {
            if (B > C)
            {
                cout << B;
            }
            else
            {
                cout << C;
            }
        }
    }

    return 0;
}