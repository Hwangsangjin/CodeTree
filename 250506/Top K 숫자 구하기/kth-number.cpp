#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;

    int Arr[1001] = {};

    for (int i = 1; i <= N; ++i)
        cin >> Arr[i];

    sort(Arr + 1, Arr + N + 1);

    cout << Arr[K];
    return 0;
}