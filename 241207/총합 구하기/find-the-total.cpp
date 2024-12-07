#include <iostream>
using namespace std;

int main()
{
    int A, B, Sum = 0;
    cin >> A >> B;

    const int Start = (A % 6 == 0) ? A : (A + (6 - A % 6));

    for (int i = Start; i <= B; i += 6)
    {
        if (i % 8 != 0)
        {
            Sum += i;
        }
    }

    cout << Sum;
    return 0;
}