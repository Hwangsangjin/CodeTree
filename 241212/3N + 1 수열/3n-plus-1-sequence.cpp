#include <iostream>
using namespace std;

int main()
{
    int N, Count = 0;
    cin >> N;

    while (true)
    {
        if (N == 1)
            break;

        if (N % 2 == 0)
            N /= 2;
        else
            N = N * 3 + 1;
        
        Count++;
    }

    cout << Count;
    return 0;
}