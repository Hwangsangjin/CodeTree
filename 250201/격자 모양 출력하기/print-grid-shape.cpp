#include <iostream>
using namespace std;

int main()
{
    int A[10][10] = {};

    int N, M;
    cin >> N >> M;

    for (int i = 0; i < M; ++i)
    {
        int R, C;
        cin >> R >> C;

        A[R - 1][C - 1] = R * C;
    }

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
            cout << A[i][j] << " ";
        
        cout << "\n";
    }

    return 0;
}