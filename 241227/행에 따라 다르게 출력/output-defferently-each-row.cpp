#include <iostream>
using namespace std;

int main()
{
    int N, Count = 0;
    cin >> N;

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            cout << (i % 2 == 0 ? ++Count : Count += 2) << ' ';
        }

        cout << '\n';
    }

    return 0;
}