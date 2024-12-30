#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    for (int i = 1; i <= N; ++i)
    {
        for (int j = 1; j <= N - i + 1; ++j)
        {
            if (j == N - i + 1)
                cout << i << " * " << j << " = " << i * j << '\n';
            else
                cout << i << " * " << j << " = " << i * j << " / ";
        }
    }

    return 0;
}