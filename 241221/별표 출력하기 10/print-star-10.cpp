#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    for (int i = 0; i < 2 * N; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < (i / 2) + 1; j++)
            {
                cout << "* ";
            }
        }
        else
        {
            for (int j = 0; j < N - (i - 1) / 2; j++)
            {
                cout << "* ";
            }
        }

        cout << endl;
    }

    return 0;
}