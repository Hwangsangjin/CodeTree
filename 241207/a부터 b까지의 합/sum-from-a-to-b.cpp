#include <iostream>
using namespace std;

int main()
{
    int A, B, Sum = 0;
    cin >> A >> B;

    for (int i = A; i <= B; i++)
    {
        Sum += i;
    }

    cout << Sum;
    return 0;
}