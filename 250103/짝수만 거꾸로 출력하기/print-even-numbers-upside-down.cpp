#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int Array[N];

    for (int i = 0; i < N; ++i)
        cin >> Array[i];

    for (int i = N - 1; i >= 0; --i)
    {
        if (Array[i] % 2 == 0)
            cout << Array[i] << " ";
    }

    return 0;
}