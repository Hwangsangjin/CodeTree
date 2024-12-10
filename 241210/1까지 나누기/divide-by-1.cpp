#include <iostream>
using namespace std;

int main()
{
    int N, Divider = 1, Count = 0;
    cin >> N;

    while (N > 1)
    {
        N /= Divider;
        Divider++;
        Count++;
    }

    cout << Count;
    return 0;
}