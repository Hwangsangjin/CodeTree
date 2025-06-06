#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int A[200] = {};

    for (int i = 0; i < N; ++i)
    {
        int X1, X2;
        cin >> X1 >> X2;

        X1 += 100;
        X2 += 100;

        for (int j = X1; j <= X2; ++j)
            ++A[j];
    }

    int Max = 0;

    for (int i = 0; i < 200; ++i)
    {
        if (Max < A[i])
            Max = A[i];
    }

    cout << Max;
    return 0;
}