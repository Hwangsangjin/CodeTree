#include <iostream>
using namespace std;

void Print(int N, int M)
{
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < M; ++j)
            cout << 1;
        cout << "\n";
    }
}

int main()
{
    int N, M;
    cin >> N >> M;

    Print(N, M);
    return 0;
}