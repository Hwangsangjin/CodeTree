#include <iostream>
using namespace std;

int main()
{
    int A, B, Sum = 0, Count = 0;
    cin >> A >> B;

    for (int i = A; i <= B; i++)
    {
        if (i % 5 == 0 || i % 7 == 0)
        {
            Sum += i;
            Count++;
        }
    }

    cout << fixed;
    cout.precision(1);
    cout << Sum << " " << static_cast<double>(Sum) / Count;
    return 0;
}