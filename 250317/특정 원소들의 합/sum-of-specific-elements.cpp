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

    int Sum = 0;

    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j <= i; ++j)
            Sum += Arr[i][j];
    }

    cout << Sum;    
    return 0;
}