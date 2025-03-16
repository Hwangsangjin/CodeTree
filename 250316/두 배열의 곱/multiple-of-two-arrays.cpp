#include <iostream>
using namespace std;

int main()
{
    int Matrix1[3][3];
    int Matrix2[3][3];

    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
            cin >> Matrix1[i][j];
    }

    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
            cin >> Matrix2[i][j];
    }

    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
            cout << Matrix1[i][j] * Matrix2[i][j] << " ";
        cout << "\n";
    }

    return 0;
}