#include <iostream>
using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;

    const int Start = A > B ? A : B;
    const int End = A > B ? B : A;

    for (int i = Start; i >= End; i--)
    {
        cout << i << " ";
    }

    return 0;
}