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

    int Cnt = 0;

    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            if (Arr[i][j] % 5 == 0)
                ++Cnt;
        }
    }

    cout << Cnt;    
    return 0;
}