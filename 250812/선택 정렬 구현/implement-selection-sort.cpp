#include <iostream>
using namespace std;

int main()
{
    int Arr[100] = {};
    int N;
    cin >> N;

    for (int i = 0; i < N; ++i)
        cin >> Arr[i];

    for (int i = 0; i < N - 1; ++i)
    {
        int Min = i;

        for (int j = i + 1; j < N; ++j)
        {
            if (Arr[j] < Arr[Min])
                Min = j;
        }

        int Temp = Arr[i];
        Arr[i] = Arr[Min];
        Arr[Min] = Temp;
    }

    for (int i = 0; i < N; ++i)
        cout << Arr[i] << " ";

    return 0;
}