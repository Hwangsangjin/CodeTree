#include <iostream>
using namespace std;

int main()
{
    int A[10][10] = {};

    int N;
    cin >> N;

    for (int i = 0; i < N; ++i)
    {
            A[0][i] = 1;
            A[i][0] = 1;
    }

    for (int i = 1; i < N; ++i)
    {
        for (int j = 1; j < N; ++j)
        {
            A[i][j] = A[i - 1][j] + A[i][j - 1] + A[i - 1][j - 1];
        }
    }

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
            cout << A[i][j] << " ";
        
        cout << "\n";
            
    }

    return 0;
}