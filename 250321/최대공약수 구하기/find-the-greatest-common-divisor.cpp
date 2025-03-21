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

int main()
{
    int N, M;
    cin >> N >> M;

    cout << GCD(N, M);
    return 0;
}