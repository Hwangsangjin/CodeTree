#include <iostream>
using namespace std;

int main()
{
    int Start, End;
    cin >> Start >> End;

    int AnswerCnt = 0;

    for (int i = Start; i <= End; ++i)
    {
        int DivisorCnt = 0;

        for (int j = 1; j <= i; ++j)
        {
            if (i % j == 0)
                ++DivisorCnt;
        }

        if (DivisorCnt == 3)
            ++AnswerCnt;
    }

    cout << AnswerCnt;
    return 0;
}