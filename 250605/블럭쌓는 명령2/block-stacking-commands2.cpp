#include <iostream>
using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;

    int Arr[101] = {};

    for (int i = 0; i < K; ++i)
    {
        int A, B;
        cin >> A >> B;

        for (int j = A; j <= B; ++j)
            ++Arr[j];
    }

    int Max = Arr[1];

    for (int i = 2; i <= N; ++i)
    {
        if (Max < Arr[i])
            Max = Arr[i];
    }

    cout << Max;
    return 0;
}