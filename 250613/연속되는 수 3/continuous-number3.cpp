#include <iostream>
using namespace std;

int main()
{
    int A[1000] = {};
    int N;
    cin >> N;

    for (int i = 0; i < N; ++i)
        cin >> A[i];

    int Max = 1;
    int Current = 1;

    for (int i = 1; i < N; ++i)
    {
        if ((A[i] > 0 && A[i - 1] > 0) || (A[i] < 0 && A[i - 1] < 0))
        {
            ++Current;
            if (Max < Current)
                Max = Current;
        }
        else
        {
            Current = 1;
        }
    }

    cout << Max;
    return 0;
}