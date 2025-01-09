#include <iostream>
using namespace std;

int main()
{
    int Array[7] = {};

    for (int i = 0; i < 10; ++i)
    {
        int Dice;
        cin >> Dice;

        Array[Dice]++;
    }

    for (int i = 1; i < 7; ++i)
        cout << i << " - " << Array[i] << "\n";

    return 0;
}