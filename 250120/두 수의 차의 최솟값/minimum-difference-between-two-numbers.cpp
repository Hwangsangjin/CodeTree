#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int A[10] = {};

    for (int i = 0; i < N; ++i)
        cin >> A[i];

    int Min = A[1] - A[0];

    for (int i = 2; i < N; ++i)
    {
        if (Min > A[i] - A[i - 1])
            Min = A[i] - A[i - 1];
    }

    cout << Min;
    return 0;
}