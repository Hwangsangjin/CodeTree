#include <iostream>
using namespace std;

int main()
{
    int Cnt1 = 0, Cnt2 = 0;

    for (int i = 0; i < 10; ++i)
    {
        int N;
        cin >> N;

        if (N % 3 == 0)
            ++Cnt1;

        if (N % 5 == 0)
            ++Cnt2;
    }

    cout << Cnt1 << " " << Cnt2;
    return 0;
}