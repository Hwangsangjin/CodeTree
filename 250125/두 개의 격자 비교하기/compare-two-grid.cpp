#include <iostream>
using namespace std;

int main()
{
    int A1[10][10] = {};
    int A2[10][10] = {};

    int N, M;
    cin >> N >> M;

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < M; ++j)
            cin >> A1[i][j];
    }

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < M; ++j)
            cin >> A2[i][j];
    }

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < M; ++j)
            cout << (A1[i][j] == A2[i][j] ? 0 : 1) << " ";
        
        cout << "\n";
    }

    return 0;
}