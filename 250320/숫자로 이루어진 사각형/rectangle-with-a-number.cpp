#include <iostream>
using namespace std;

void Print(int N)
{
    int Cnt = 1;

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            cout << Cnt++ << " ";

            if (Cnt == 10)
                Cnt = 1;
        }

        cout << "\n";
    }
}

int main()
{
    int N;
    cin >> N;

    Print(N);
    return 0;
}