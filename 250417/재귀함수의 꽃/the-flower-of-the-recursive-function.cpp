#include <iostream>
using namespace std;

void Answer(int N)
{
    if (N == 0)
        return;

    cout << N << " ";
    Answer(N - 1);
    cout << N << " ";
}

int main()
{
    int N;
    cin >> N;

    Answer(N);
    return 0;
}