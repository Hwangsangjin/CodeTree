#include <iostream>
using namespace std;

int Answer(int N)
{
    if (N == 1)
        return 1;
    else if (N == 2)
        return 2;
    
    return Answer(N / 3) + Answer(N - 1);
}

int main()
{
    int N;
    cin >> N;

    cout << Answer(N);
    return 0;
}