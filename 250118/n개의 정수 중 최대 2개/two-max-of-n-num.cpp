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

    for (int i = 1; i < N; ++i)
    {
        if (Max1 < Array[i])
            Max1 = Array[i];
    }
    
    int Max2 = INT_MIN;

    for (int i = 0; i < N; ++i)
    {
        if (Array[i] < Max1 && Array[i] > Max2)
            Max2 = Array[i];
    }

    cout << Max1 << " " << Max2;
    return 0;
}