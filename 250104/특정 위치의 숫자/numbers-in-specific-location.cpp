#include <iostream>
using namespace std;

int main()
{
    int Array[10];
    int Sum = 0;

    for (int i = 0; i < 10; ++i)
        cin >> Array[i];

    Sum += Array[2] + Array[4] + Array[9];
    cout << Sum;
    return 0;
}