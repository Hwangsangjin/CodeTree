#include <iostream>
using namespace std;

int main()
{
    int Array[4] = {};

    for (int i = 0; i < 3; ++i)
    {
        char C;
        int N;
        cin >> C >> N;

        int Index = (C == 'Y' ? 0 : 1) + (N >= 37 ? 0 : 2);
        Array[Index]++;
    }

    for (int i = 0; i < 4; ++i)
        cout << Array[i] << " ";

    if (Array[0] == 2)
        cout << 'E';

    return 0;
}