#include <iostream>
using namespace std;

int main()
{
    int Array[10];

    for (int i = 0; i < 10; ++i)
        cin >> Array[i];

    int Max = Array[0];

    for (int i = 1; i < 10; ++i)
    {
        if (Max < Array[i])
            Max = Array[i];
    }

    cout << Max;
    return 0;
}