#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int Array[10];
    int Count = 0;

    for (int i = 0; i < 10; ++i)
    {
        if (Count == 2)
            break;

        Array[i] = N * (i + 1);
        cout << Array[i] << " ";

        if (Array[i] % 5 == 0)
            ++Count;
    }

    return 0;
}