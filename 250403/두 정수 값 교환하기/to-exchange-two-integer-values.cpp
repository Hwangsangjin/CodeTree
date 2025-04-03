#include <iostream>
using namespace std;

void Answer(int& N, int& M)
{
    int Temp = N;
    N = M;
    M = Temp;
}

int main()
{
    int N, M;
    cin >> N >> M;

    Answer(N, M);
    
    cout << N << " " << M;
    return 0;
}