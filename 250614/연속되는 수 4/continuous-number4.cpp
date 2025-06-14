#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int A[1000] = {};

    for (int i = 0; i < N; ++i)
        cin >> A[i];

    int Max = 1;
    int Current = 1;

    for (int i = 1; i < N; ++i)
    {
        if (A[i] > A[i - 1])
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