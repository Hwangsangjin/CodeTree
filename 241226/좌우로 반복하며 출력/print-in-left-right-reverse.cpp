#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << (i % 2 == 0 ? j + 1 : N - j);
        }

        cout << endl;
    }

    return 0;
}