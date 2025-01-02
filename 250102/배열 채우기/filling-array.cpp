#include <iostream>
using namespace std;

int main()
{
    int Array[10];
    int Count = 0;
    
    for (int i = 0; i < 10; ++i)
    {
        cin >> Array[Count];

        if (Array[Count] == 0)
            break;

        ++Count;
    }

    for (int i = Count - 1; i >= 0; --i)
        cout << Array[i] << " ";

    return 0;
}