#include <iostream>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    int Arr1[10][10];
    int Arr2[10][10];

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < M; ++j)
            cin >> Arr1[i][j];
    }

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < M; ++j)
            cin >> Arr2[i][j];
    }

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < M; ++j)
            cout << (Arr1[i][j] == Arr2[i][j] ? 0 : 1) << " ";
        cout << "\n";
    }

    return 0;
}