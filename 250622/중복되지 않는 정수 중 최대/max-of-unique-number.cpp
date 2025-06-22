#include <iostream>
using namespace std;

int main()
{
    int A[1000] = {};
    int Count[1001] = {};

    int N;
    cin >> N;

    for (int i = 0; i < N; ++i)
    {
        cin >> A[i];
        ++Count[A[i]];
    }

    int Max = -1;
    
    for (int i = 0; i < N; ++i)
    {
        if (Count[A[i]] == 1)
        {
            if (A[i] > Max)
                Max = A[i];
        }
    }

    cout << Max;
    return 0;
}