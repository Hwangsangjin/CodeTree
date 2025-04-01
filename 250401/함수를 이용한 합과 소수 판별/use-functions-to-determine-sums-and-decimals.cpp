#include <iostream>
using namespace std;

bool IsPrime(int N)
{
    if (N < 2)
        return false;
    
    for (int i = 2; i < N; ++i)
    {
        if (N % i == 0)
            return false;
    }

    return true;
}

bool IsDigitSumEven(int N)
{
    int Sum = 0;

    while (N > 0)
    {
        Sum += N % 10;
        N /= 10;
    }

    return (Sum % 2 == 0);
}

int Answer(int A, int B)
{
    int Cnt = 0;

    for (int i = A; i <= B; ++i)
    {
        if (IsPrime(i) && IsDigitSumEven(i))
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