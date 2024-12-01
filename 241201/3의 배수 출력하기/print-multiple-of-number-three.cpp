#include <iostream>
using namespace std;

int main()
{
    int N, Index = 1;
    cin >> N;

    while (Index <= N)
    {
        if (Index % 3 == 0)
        {
            cout << Index << " ";
        }

        Index++;
    }

    return 0;
}