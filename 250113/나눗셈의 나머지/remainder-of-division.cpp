#include <iostream>
using namespace std;

int main()
{
    int Array[10] = {};
    int A, B;
    cin >> A >> B;

    while (true)
    {
        Array[A % B]++;
        A /= B;

        if (A <= 1)
            break;
    }

    int Sum = 0;

    for (int i = 0; i < 10; ++i)
        Sum += Array[i] * Array[i];

    cout << Sum;
    return 0;
}