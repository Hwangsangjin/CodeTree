#include <iostream>
using namespace std;

int main()
{
    int Matrix[3][3];

    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            cin >> Matrix[i][j];
            Matrix[i][j] *= 3;
        }
    }

    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
            cout << Matrix[i][j] << " ";
        cout << "\n";
    }

    return 0;
}