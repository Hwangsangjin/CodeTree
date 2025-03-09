#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int Sum = 0;

    for (int i = 1; i <= 100; ++i)
    {
        Sum += i;

        if (Sum >= N)
        {
            cout << i;
            break;
        }

    }

    return 0;
}