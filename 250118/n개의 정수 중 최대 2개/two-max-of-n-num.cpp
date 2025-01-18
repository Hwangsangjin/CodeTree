#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int Array[100] = {};

    for (int i = 0; i < N; ++i)
        cin >> Array[i];

    int Max1 = INT_MIN;
    int Max2 = INT_MIN;
    int MaxIndex = 0;

    for (int i = 0; i < N; ++i)
    {
        if (Max1 <Array[i])
        {
            Max1 = Array[i];
            MaxIndex = i;
        }
    }
    
    for (int i = 0; i < N; ++i)
    {
        if (Max2 < Array[i] && i != MaxIndex)
            Max2 = Array[i];
    }

    cout << Max1 << " " << Max2;
    return 0;
}