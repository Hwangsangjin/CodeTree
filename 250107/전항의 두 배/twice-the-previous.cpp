#include <iostream>
using namespace std;

int main()
{
    int A1, A2;
    cin >> A1 >> A2;

    int Array[10] = {A1, A2};

    for (int i = 2; i < 10; ++i)
        Array[i] = Array[i - 1] + 2 * Array[i - 2];

    for (int i = 0; i < 10; ++i)
        cout << Array[i] << " ";

    return 0;
}