#include <iostream>
using namespace std;

int main()
{
    char Input;
    cin >> Input;

    char Array[6] = { 'L', 'E', 'B', 'R', 'O', 'S' };
    int Index = -1;

    for (int i = 0; i < 6; ++i)
    {
        if (Array[i] == Input)
            Index = i;
    }

    if (Index == -1)
        cout << "None";
    else
        cout << Index;

    return 0;
}