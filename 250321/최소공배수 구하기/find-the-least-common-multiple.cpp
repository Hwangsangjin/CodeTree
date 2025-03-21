#include <iostream>
using namespace std;

int GCD(int N, int M)
{
    while (M != 0)
    {
        int Temp = M;
        M = N % M;
        N = Temp;
    }
    
    return N;
}

int LCM(int N, int M)
{
    return (N * M) / GCD(N, M);
}

int main()
{
    int N, M;
    cin >> N >> M;

    cout << LCM(N, M);
    return 0;
}