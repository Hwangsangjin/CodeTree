#include <iostream>
using namespace std;

int main()
{
    int A, B, C;
    cin >> A >> B >> C;

    int Min;

    if (A < B)
    {
        Min = A;
    }
    else
    {
        Min = B;
    }

    if (C < Min)
    {
        Min = C;
    }

    cout << Min;
    return 0;
}