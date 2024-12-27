#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            cout << (i % 2 == 0 ? N * i + j + 1 : N * (i + 1) - j) << ' ';
        }

        cout << '\n';
    }

    return 0;
}