#include <iostream>
using namespace std;

int main()
{
    int N, Count = 1;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << (j % 2 == 0 ? Count : N - i);
        }

        Count++;
        cout << endl;
    }

    return 0;
}