#include <iostream>
using namespace std;

int main()
{
    int A1[3][3] = {};
    int A2[3][3] = {};

    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
            cin >> A1[i][j];
    }

    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
            cin >> A2[i][j];
    }

    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
            cout << A1[i][j] * A2[i][j] << " ";

        cout << "\n";
    }

    return 0;
}