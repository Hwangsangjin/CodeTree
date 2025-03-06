#include <iostream>
using namespace std;

int main()
{
    char Arr[10];
    
    for (int i = 0; i < 10; ++i)
        cin >> Arr[i];
    
    for (int i = 9; i >= 0; --i)
        cout << Arr[i];

    return 0;
}