#include <iostream>
using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;

    while (A <= B)
    {
        cout << A << " ";
        A += 2;
    }

    return 0;
}