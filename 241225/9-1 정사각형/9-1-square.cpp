#include <iostream>
using namespace std;

int main()
{
    int N, Count = 9;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << Count--;

            if (Count == 0)
                Count = 9;
        }

        cout << '\n';
    }

    return 0;
}