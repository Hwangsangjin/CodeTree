#include <iostream>
using namespace std;

void Answer(int* Arr, int N)
{
    for (int i = 0; i < N; ++i)
    {
        if (Arr[i] < 0)
            Arr[i] *= -1;
    }
}

int main()
{
    int N;
    cin >> N;

    int Arr[50] = {};

    for (int i = 0; i < N; ++i)
        cin >> Arr[i];

    Answer(Arr, N);

    for (int i = 0; i < N; ++i)
        cout << Arr[i] << " ";

    return 0;
}