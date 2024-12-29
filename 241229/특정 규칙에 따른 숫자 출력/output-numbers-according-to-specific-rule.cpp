#include <iostream>
using namespace std;

int main()
{
    int N, Count = 1;
    cin >> N;

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < i; ++j)
        {
            cout << "  ";
        }

        for (int j = 0; j < N - i; ++j)
        {
            cout << Count++ << ' ';

            if (Count == 10)
                Count = 1;
        }

        cout << '\n';
    }

    return 0;
}