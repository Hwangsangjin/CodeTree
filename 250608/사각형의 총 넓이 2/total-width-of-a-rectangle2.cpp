#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int A[200][200] = {};

    while (N--)
    {
        int X1, Y1, X2, Y2;
        cin >> X1 >> Y1 >> X2 >> Y2;

        X1 += 100;
        Y1 += 100;
        X2 += 100;
        Y2 += 100;

        int MinX = X1 < X2 ? X1 : X2;
        int MaxX = X1 > X2 ? X1 : X2;
        int MinY = Y1 < Y2 ? Y1 : Y2;
        int MaxY = Y1 > Y2 ? Y1 : Y2;

        for (int i = MinX; i < MaxX; ++i)
        {
            for(int j = MinY; j < MaxY; ++j)
                A[i][j] = 1;
        }       
    }

    int Count = 0;

    for (int i = 0; i < 200; ++i)
    {
        for(int j = 0; j < 200; ++j)
        {
            if (A[i][j] == 1)
                ++Count;
        }
    }

    cout << Count;
    return 0;
}