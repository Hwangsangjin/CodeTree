#include <iostream>
using namespace std;

int Answer(int N)
{
    if (N == 1 || N == 2)
        return 1;
    
    return Answer(N - 1) + Answer(N - 2);
}

int main()
{
    int N;
    cin >> N;

    cout << Answer(N);
    return 0;
}