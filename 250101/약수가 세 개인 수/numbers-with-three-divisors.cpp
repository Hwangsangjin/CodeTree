#include <iostream>
using namespace std;

int main()
{
    int Start, End, Result = 0;
    cin >> Start >> End;

    for (int i = Start; i <= End; ++i)
    {
        int Count = 0;

        for (int j = 1; j * j <= i; ++j)
        {
            if (i % j == 0)
            {
                ++Count;

                if (j != i / j)
                    ++Count;
            }
        }

        if (Count == 3)
            ++Result;
    }

    cout << Result;
    return 0;
}