#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    while (N--)
    {
        int A, B, Sum = 0;
        cin >> A >> B;

        if (A % 2 != 0)
            ++A;

        for (int i = A; i <= B; i += 2)
            Sum += i;

        cout << Sum << "\n";
    }

    return 0;
}