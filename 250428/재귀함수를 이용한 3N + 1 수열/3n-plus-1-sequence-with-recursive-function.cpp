#include <iostream>
using namespace std;

int Answer(int N)
{
    if (N == 1)
        return 0;
    
    if (N % 2 == 0)
        return Answer(N / 2) + 1;
    else
        return Answer(N * 3 + 1) + 1;
}

int main()
{
    int N;
    cin >> N;

    cout << Answer(N);
    return 0;
}