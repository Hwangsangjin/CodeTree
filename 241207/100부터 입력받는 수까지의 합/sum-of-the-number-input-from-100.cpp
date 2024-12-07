#include <iostream>
using namespace std;

int main()
{
    int N, Sum = 0;
    cin >> N;

    for (int i = N; i <= 100; i++)
    {
        Sum += i;
    }

    cout << Sum;
    return 0;
}