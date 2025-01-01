#include <iostream>
using namespace std;

int main()
{
    int Start, End, Count = 0;
    cin >> Start >> End;

    for (int i = Start; i <= End; ++i)
    {
        int Sum = 0;

        for (int j = 1; j <= i / 2; ++j)
        {
            if (i % j == 0)
                Sum += j;
        }

        if (Sum == i)
            ++Count;
    }

    cout << Count;
    return 0;
}