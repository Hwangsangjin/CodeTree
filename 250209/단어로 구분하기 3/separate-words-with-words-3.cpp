#include <iostream>
using namespace std;

int main()
{
    string Arr[10];

    for (int i = 0; i < 10; ++i)
        cin >> Arr[i];
    
    for (int i = 9; i >= 0; --i)
        cout << Arr[i] << "\n";

    return 0;
}