#include <iostream>
using namespace std;

int Answer(int N)
{
    if (N == 1)
        return 2;
    else if (N == 2)
        return 4;
    
    return Answer(N - 1) * Answer(N - 2) % 100; 
}

int main()
{
    int N;
    cin >> N;

    cout << Answer(N);
    return 0;
}