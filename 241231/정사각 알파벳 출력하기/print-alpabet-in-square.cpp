#include <iostream>
using namespace std;

int main()
{
    char Alphabet = 'A';
    int N;
    cin >> N;

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            cout << Alphabet++;
        }

        cout << "\n";
    }

    return 0;
}