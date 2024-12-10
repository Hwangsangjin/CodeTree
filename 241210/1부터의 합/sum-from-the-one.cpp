#include <iostream>
using namespace std;

int main()
{
    int N, Index, Sum = 0;
    cin >> N;

    for (Index = 1; Index <= 100; Index++)
    {
        Sum += Index;
        if (Sum >= N)
            break;
    }

    cout << Index;
    return 0;
}