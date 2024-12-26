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
            cout << (j % 2 == 0 ? i + 1 : N - i);
        }

        cout << endl;
    }

    return 0;
}