#include <iostream>
using namespace std;

int main()
{
    int Array[10];
    int Count = 0;
    int Sum = 0;

    for (int i = 0; i < 10; ++i)
    {
        cin >> Array[i];

        if (Array[i] == 0)
            break;

        if (Array[i] % 2 == 0)
        {
            ++Count;
            Sum += Array[i];
        }
    }

    cout << Count << " " << Sum;
    return 0;
}