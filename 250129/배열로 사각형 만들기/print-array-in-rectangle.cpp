#include <iostream>
using namespace std;

int main()
{
    int A[5][5] = {};

    for (int i = 0; i < 5; ++i)
        A[0][i] = 1;

    for (int i = 0; i < 5; ++i)
        A[i][0] = 1;
    
    for (int i = 1; i < 5; ++i)
    {
        for (int j = 1; j < 5; ++j)
            A[i][j] = A[i - 1][j] + A[i][j - 1];
    }

    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < 5; ++j)
            cout << A[i][j] << " ";
        
        cout << "\n";
    }

    return 0;
}