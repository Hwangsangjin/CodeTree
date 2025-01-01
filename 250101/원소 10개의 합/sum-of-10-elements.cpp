#include <iostream>
using namespace std;

int main()
{
    int Array[10], Sum = 0;

    for (int i = 0; i < 10; ++i)
    {
        cin >> Array[i];
        Sum += Array[i];
    }

    cout << Sum;
    return 0;
}