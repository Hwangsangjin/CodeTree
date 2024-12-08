#include <iostream>
using namespace std;

int main()
{
    int A, B, Result = 1;
    cin >> A >> B;

    for (int i = 0; i < B; i++)
    {
        Result *= A;
    }

    cout << Result;
    return 0;
}