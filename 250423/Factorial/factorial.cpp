#include <iostream>
using namespace std;

int Answer(int N)
{
    if (N < 2)
        return 1;
    
    return N * Answer(N - 1);
}

int main()
{
    int N;
    cin >> N;

    cout << Answer(N);
    return 0;
}