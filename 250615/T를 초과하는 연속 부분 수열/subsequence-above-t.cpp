#include <iostream>
using namespace std;

int main()
{
    int N, T;
    cin >> N >> T;

    int A[1000] = {};

    for (int i = 0; i < N; ++i)
        cin >> A[i];

    int Max = 0;
    int Current = 0;

    for (int i = 0; i < N; ++i)
    {
        if (A[i] > T)
        {
            ++Current;
            
            if (Max < Current)
                Max = Current;
        }
        else
        {
            Current = 0;
        }
    }

    cout << Max;
    return 0;
}