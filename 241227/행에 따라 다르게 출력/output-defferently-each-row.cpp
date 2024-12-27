#include <iostream>
using namespace std;

int main()
{
    int N, Count = 1;
    cin >> N;

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            cout << Count << ' ';

            if (i % 2 == 0)
            {
                Count++;

                if (j == N - 1)
                    Count++;
            }
            else
            {
                Count += 2;

                if (j == N - 1)
                    Count--;
            }
        }

        cout << '\n';
    }

    return 0;
}