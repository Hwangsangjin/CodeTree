#include <iostream>
using namespace std;

bool Answer(int N)
{
    int Sum = 0;
    int Temp = N;

    while (Temp > 0)
    {
        Sum += Temp % 10;
        Temp /= 10;
    }

    return N % 2 == 0 && Sum % 5 == 0;
}

int main()
{
    int N;
    cin >> N;

    cout << (Answer(N) ? "Yes" : "No");
    return 0;
}