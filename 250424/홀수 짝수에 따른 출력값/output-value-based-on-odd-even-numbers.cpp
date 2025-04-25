#include <iostream>
using namespace std;

int Answer(int N)
{
    if (N <= 2)
        return N;
        
    return Answer(N - 2) + N;
}

int main()
{
    int N;
    cin >> N;

    cout << Answer(N);
    return 0;
}