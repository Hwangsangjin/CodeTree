#include <iostream>
using namespace std;

int Answer(int N)
{
    if (N == 0)
        return 0;
    
    return (N % 10) + Answer(N / 10);
}

int main()
{
    int A, B, C;
    cin >> A >> B >> C;

    int N = A * B * C;

    cout << Answer(N);
    return 0;
}