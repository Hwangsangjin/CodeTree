#include <iostream>
using namespace std;

int main()
{
    int Arr[4][4];

    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 4; ++j)
            cin >> Arr[i][j];
    }

    for (int i = 0; i < 4; ++i)
    {
        int Sum = 0;

        for (int j = 0; j < 4; ++j)
            Sum += Arr[i][j];
        cout << Sum << "\n";
    }

    return 0;
}