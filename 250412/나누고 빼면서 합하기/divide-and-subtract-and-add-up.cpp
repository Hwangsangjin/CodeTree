#include <iostream>
using namespace std;

int N, M;
int Arr[101];

int Answer()
{
    int Sum = 0;

    while (true)
    {
        Sum += Arr[M];

        if (M == 1)
            break;

        if (M % 2 == 1)
            --M;
        else
            M /= 2;
    }

    return Sum;
}

int main()
{
    cin >> N >> M;

    for (int i = 1; i <= N; ++i)
        cin >> Arr[i];

    cout << Answer();
    return 0;
}