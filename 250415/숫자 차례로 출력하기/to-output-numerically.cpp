#include <iostream>
using namespace std;

void Answer1(int N)
{
    if (N == 0)
        return;
    
    Answer1(N - 1);
    cout << N << " ";
}

void Answer2(int N)
{
    if (N == 0)
        return;
    
    cout << N << " ";
    Answer2(N - 1);
}

int main()
{
    int N;
    cin >> N;

    Answer1(N);
    cout << "\n";
    Answer2(N);
    return 0;
}