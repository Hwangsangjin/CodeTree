#include <iostream>
using namespace std;

int main()
{
    int Array[10];
    int OddSum = 0;
    int EvenSum = 0;

    for (int i = 0; i < 10; ++i)
    {
        cin >> Array[i];
        
        if (i % 2 == 1)
            OddSum += Array[i];
        else
            EvenSum += Array[i];
    }

    if (OddSum > EvenSum)
        cout << OddSum - EvenSum;
    else
        cout << EvenSum - OddSum;

    return 0;
}