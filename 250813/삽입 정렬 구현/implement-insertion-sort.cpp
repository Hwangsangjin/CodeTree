#include <iostream>
using namespace std;

int main()
{
    int Arr[100] = {};
    int N;
    cin >> N;

    for (int i = 0; i < N; ++i)
        cin >> Arr[i];

    for (int i = 1; i < N; ++i)
    {
        int j = i - 1;
        int Key = Arr[i];

        while (j >= 0 && Arr[j] > Key)
        {
            Arr[j + 1] = Arr[j];
            --j;
        }

        Arr[j + 1] = Key;
    }

    for (int i = 0; i < N; ++i)
        cout << Arr[i] << " ";

    return 0;
}