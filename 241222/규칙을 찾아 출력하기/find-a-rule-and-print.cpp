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
            if (i == 0 || j == N - 1)
                cout << "* ";
            else if (i <= j)
                cout << "  ";
            else
                cout << "* ";
        }

        cout << endl;
    }

    return 0;
}