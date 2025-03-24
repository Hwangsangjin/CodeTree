#include <iostream>
using namespace std;

bool IsPrime(int N)
{
    for (int i = 2; i < N; ++i)
    {
        if (N % i == 0)
            return false;
    }

    return true;
}

int Answer(int A, int B)
{
    int Sum = 0;

    for (int i = A; i <= B; ++i)
    {
        if (IsPrime(i))
            Sum += i;
    }

    return Sum;
}

int main()
{
    int A, B;
    cin >> A >> B;

    cout << Answer(A, B);
    return 0;
}