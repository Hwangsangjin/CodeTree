#include <iostream>
using namespace std;

int main()
{
    int N, Sum = 0;
    cin >> N;

    for (int i = 1; i < N; i++)
    {
        if (N % i == 0)
        {
            Sum += i;
        }
    }

    cout << (N == Sum ? "P" : "N");
    return 0;
}