#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    for (int i = 2; i <= N; ++i)
    {
        bool bPrime = true;

        for (int j = 2; j * j <= i; ++j)
        {
            if (i % j == 0)
            {
                bPrime = false;
                break;
            }
        }

        if (bPrime)
            cout << i << " ";
    }

    return 0;
}