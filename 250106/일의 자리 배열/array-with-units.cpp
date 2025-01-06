#include <iostream>
using namespace std;

int main()
{
    int Array[10];
    int A, B;
    cin >> A >> B;

    Array[0] = A;
    Array[1] = B;

    for (int i = 2; i < 10; ++i)
        Array[i] = (Array[i - 1] + Array[i - 2]) % 10;

    for (int i = 0; i < 10; ++i)
        cout << Array[i] << " ";

    return 0;
}