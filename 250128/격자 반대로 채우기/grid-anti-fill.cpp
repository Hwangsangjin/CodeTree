#include <iostream>
using namespace std;

int main()
{
    int A[10][10] = {};
    int Count = 1;

    int N;
    cin >> N;

    for (int i = N - 1; i >= 0; --i)
    {
        if ((N - i - 1) % 2 == 0)
        {
            for (int j = N - 1; j >= 0; --j)
                A[j][i] = Count++;
        }
        else
        {
            for (int j = 0; j < N; ++j)
                A[j][i] = Count++;
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