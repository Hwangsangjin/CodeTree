#include <iostream>
using namespace std;

int main()
{
    char A[5][3] = {};

    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            cin >> A[i][j];
            A[i][j] -= 'a' - 'A';
        }
    }

    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < 3; ++j)
            cout << A[i][j] << " ";

        cout << "\n";
    }

    return 0;
}