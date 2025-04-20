#include <iostream>
using namespace std;

int Answer(int N)
{
    if (N < 10)
        return N * N;
    
    return Answer(N / 10) + (N % 10) * (N % 10);
}

int main()
{
    int N;
    cin >> N;

    cout << Answer(N);
    return 0;
}