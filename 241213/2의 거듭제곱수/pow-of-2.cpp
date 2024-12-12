#include <iostream>
using namespace std;

int main()
{
    int N, Count = 0;
    cin >> N;

    while (N > 1)
    {
        N /= 2;
        Count++;
    }

    cout << Count;
    return 0;
}