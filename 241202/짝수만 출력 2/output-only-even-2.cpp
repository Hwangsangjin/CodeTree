#include <iostream>
using namespace std;

int main()
{
    int B, A;
    cin >> B >> A;

    while (B >= A)
    {
        cout << B << " ";
        B -=2;
    }

    return 0;
}