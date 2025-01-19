#include <iostream>
using namespace std;

int main()
{
    int Array[10] = {};

    for (int i = 0; i < 10; ++i)
        cin >> Array[i];
    
    int Max = 1;
    int Min = 1000;

    for (int i = 0; i < 10; ++i)
    {
        if (Array[i] > Max && Array[i] < 500)
            Max = Array[i];

        if (Array[i] < Min && Array[i] > 500)
            Min = Array[i];
    }

    cout << Max << " " << Min;
    return 0;
}