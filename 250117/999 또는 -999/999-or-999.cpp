#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    int Array[100] = {};

    for (int i = 0; i < 100; ++i)
    {
        int Input;
        cin >> Input;

        if (Array[i] == 999 || Array[i] == -999)
            break;
        
        Array[i] = Input;
    }

    int Max = INT_MIN;
    int Min = INT_MAX;
    
    for (int i = 0; i < 100; ++i)
    {
        if (Array[i] == 999 || Array[i] == -999)
            continue;

        if (Max < Array[i])
            Max = Array[i];

        if (Min > Array[i])
            Min = Array[i];
    }

    cout << Max << " " << Min;
    return 0;
}