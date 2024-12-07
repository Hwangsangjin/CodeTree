#include <iostream>
using namespace std;

int main()
{
    int A, B, Start, End, Sum = 0;
    cin >> A >> B;

    Start = A < B ? A : B;
    End = A < B ? B : A;

    for (int i = Start; i <= End; i++)
    {
        if (i % 5 == 0)
        {
            Sum += i;
        }
    }

    cout << Sum;
    return 0;
}