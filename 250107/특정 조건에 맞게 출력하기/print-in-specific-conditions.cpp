#include <iostream>
using namespace std;

int main()
{
    int Array[100];

    for (int i = 0; i < 100; ++i)
    {
        cin >> Array[i];

        if (Array[i] == 0)
            break;

        if (Array[i] % 2 == 1)
            cout << Array[i] + 3 << " ";
        else
            cout << Array[i] / 2 << " ";
    }

    return 0;
}