#include <iostream>
using namespace std;

int Answer(int N)
{
    int Sum = 0;

    for (int i = 1; i <= N; ++i)
        Sum += i;
    
    return Sum / 10;
}

int main()
{
    int N;
    cin >> N;

    cout << Answer(N);
    return 0;
}