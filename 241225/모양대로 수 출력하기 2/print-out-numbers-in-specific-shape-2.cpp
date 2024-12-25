#include <iostream>
using namespace std;

int main()
{
    int N, Count = 2;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << Count << " ";
            Count += 2;

            if (Count == 10)
                Count = 2;
        }

        cout << '\n';
    }

    return 0;
}