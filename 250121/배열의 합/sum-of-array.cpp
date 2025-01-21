#include <iostream>
using namespace std;

int main()
{
    int A[4][4];

    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 4; ++j)
            cin >> A[i][j];
    }

    for (int i = 0; i < 4; ++i)
    {
        int Sum = 0;

        for (int j = 0; j < 4; ++j)
        {
            Sum += A[i][j];
        }

        cout << Sum << "\n";
    }

    return 0;
}