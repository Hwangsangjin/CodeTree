#include <iostream>
using namespace std;

int main()
{
    int Array[100];

    for (int i = 0; i < 100; ++i)
    {
        cin >> Array[i];

        if (Array[i] == 0)
        {
            cout << (Array[i - 1] + Array[i - 2] + Array[i - 3]);
            break;
        }
    }

    return 0;
}