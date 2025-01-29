#include <iostream>
using namespace std;

int main()
{
    int A[15][15] = {};

    int N;
    cin >> N;

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j <= i; ++j)
        {
            if (j == 0 || i == j)
                A[i][j] = 1;
            else
                A[i][j] = A[i - 1][j - 1] + A[i - 1][j];
        }
    }

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < i + 1; ++j)
            cout << A[i][j] << " ";
        
        cout << "\n";
    }

    return 0;
}