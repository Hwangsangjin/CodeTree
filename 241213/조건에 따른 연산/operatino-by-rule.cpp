#include <iostream>
using namespace std;

int main()
{
    int N, Count = 0;
    cin >> N;

    while (N < 1000)
    {
        N = (N % 2 == 0) ? (N * 3 + 1) : (N * 2 + 2);
        Count++;
    }

    cout << Count;
    return 0;
}