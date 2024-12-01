#include <iostream>
using namespace std;

int main()
{
    int N, Index = 3;
    cin >> N;

    while (Index <= N)
    {
        cout << Index << " ";
        Index += 3;
    }

    return 0;
}