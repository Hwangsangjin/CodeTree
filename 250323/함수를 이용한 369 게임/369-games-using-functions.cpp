#include <iostream>
using namespace std;

bool IsContain(int N)
{
    while (N > 0)
    {
        int Digit = N % 10;

        if (Digit == 3 || Digit == 6 || Digit == 9)
            return true;

        N /= 10;
    }

    return false;
}

int Answer(int A, int B)
{
    int Cnt = 0;

    for (int i = A; i <= B; ++i)
    {
         if (i % 3 == 0 || IsContain(i))
            ++Cnt;
    }

    return Cnt;
}

int main()
{
    int A, B;
    cin >> A >> B;

    cout << Answer(A, B);
    return 0;
}