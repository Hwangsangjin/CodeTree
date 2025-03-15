#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int Cnt = 1;

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j <= i; ++j)
            cout << Cnt++ << " ";
        cout << "\n";
    }

    return 0;
}