#include <iostream>
#include <string>
using namespace std;

int main()
{
    string A, B;
    cin >> A >> B;

    for (int i = 0; i < 2; ++i)
        B[i] = A[i];

    cout << B;
    return 0;
}