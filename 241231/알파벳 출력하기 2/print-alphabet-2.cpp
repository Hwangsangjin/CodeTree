#include <iostream>
using namespace std;

int main()
{
    char Count = 'A';
    int N;
    cin >> N;

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < i; ++j)
        {
            cout << "  ";
        }

        for (int j = 0; j < N - i; ++j)
        {
            cout << Count++ << " ";

            if (Count > 'Z')
                Count = 'A';
        }

        cout << "\n";
    }

    return 0;
}