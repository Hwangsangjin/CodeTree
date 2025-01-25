#include <iostream>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    int A[100][100];
    int Count = 1;

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < M; ++j)
            A[i][j] = Count++;
    }

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < M; ++j)
            cout << A[i][j] << " ";

        cout << "\n";
    }

    return 0;
}