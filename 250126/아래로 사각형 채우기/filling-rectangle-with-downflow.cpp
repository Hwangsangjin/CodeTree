#include <iostream>
using namespace std;

int main()
{
    int A[10][10] = {};
    int Count = 1;

    int N;
    cin >> N;

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
            A[j][i] = Count++;
    }

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
            cout << A[i][j] << " ";

        cout << "\n";
    }

    return 0;
}