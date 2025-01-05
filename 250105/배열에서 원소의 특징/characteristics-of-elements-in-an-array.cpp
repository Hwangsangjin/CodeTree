#include <iostream>
using namespace std;

int main()
{
    int Array[10];

    for (int i = 0; i < 10; ++i)
    {
        cin >> Array[i];

        if (Array[i] % 3 == 0)
        {
            cout << Array[i - 1];
            break;
        }
    }

    return 0;
}