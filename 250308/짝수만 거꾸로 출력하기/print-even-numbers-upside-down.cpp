#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int Arr[100];

    for (int i = 0; i < N; ++i)
        cin >> Arr[i];

    for (int i = N - 1; i >= 0; --i)
    {
        if (Arr[i] % 2 == 0)
            cout << Arr[i] << " ";
    }

    return 0;
}