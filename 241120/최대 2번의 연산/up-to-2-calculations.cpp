#include <iostream>
using namespace std;

int main()
{
    int A;
    cin >> A;

    if (A % 2 == 0)
    {
        A /= 2;
    }

    if (A % 2 == 1)
    {
        A = (A + 1) / 2;
    }

    cout << A;
    return 0;
}