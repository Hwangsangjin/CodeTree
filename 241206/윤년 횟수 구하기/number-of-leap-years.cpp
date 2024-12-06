#include <iostream>
using namespace std;

int main()
{
    int Count = 0;

    int N;
    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
        {
            Count++;
        }
    }

    cout << Count;
    return 0;
}