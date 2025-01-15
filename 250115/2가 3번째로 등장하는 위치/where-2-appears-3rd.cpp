#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int Array[100] = {};
    int Count = 0;

    for (int i = 0; i < N; ++i)
        cin >> Array[i];

    for (int i = 0; i < N; ++i)
    {
        if (Array[i] == 2)
            ++Count;

        if (Count == 3)
        {
            cout << i + 1;
            break;
        }
    }

    return 0;
}