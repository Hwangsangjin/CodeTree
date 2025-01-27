#include <iostream>
using namespace std;

int main()
{
    int A[100][100] = {};
    int Count = 0;

    int N, M;
    cin >> N >> M;

    for (int i = 0; i < M; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            if (i % 2 == 0)
                A[j][i] = Count++;
            else
                A[N - j - 1][i] = Count++;
        }
    }

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < M; ++j)
            cout << A[i][j] << " ";

        cout << "\n";
    }

    return 0;
}