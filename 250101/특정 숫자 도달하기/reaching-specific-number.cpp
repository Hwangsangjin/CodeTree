#include <iostream>
using namespace std;

int main()
{
    int Array[10], Sum = 0, Count = 0;

    for (int i = 0; i < 10; ++i)
    {
        cin >> Array[i];

        if (Array[i] >= 250)
            break;

        Sum += Array[i];
        ++Count;
    }

    cout << Sum << " " << static_cast<double>(Sum) / Count;
    return 0;
}