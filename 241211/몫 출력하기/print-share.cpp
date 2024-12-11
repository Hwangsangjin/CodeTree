#include <iostream>
using namespace std;

int main()
{
    int Count = 0;

    while (Count < 3)
    {
        int N;
        cin >> N;

        if (N % 2 == 0)
        {
            cout << N / 2 << endl;
            Count++;
        }
    }

    return 0;
}