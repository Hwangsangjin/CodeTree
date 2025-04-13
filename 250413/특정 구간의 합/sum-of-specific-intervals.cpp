#include <iostream>
using namespace std;

int N, M;
int Arr[101];

int Answer()
{
    int A1, A2;
    cin >> A1 >> A2;

    int Sum = 0;

    for (int i = A1; i <= A2; ++i)
        Sum += Arr[i];

    return Sum;
}

int main()
{
    cin >> N >> M;

    for (int i = 1; i <= N; ++i)
        cin >> Arr[i];

    for (int i = 0; i < M; ++i)
        cout << Answer() << "\n";

    return 0;
}