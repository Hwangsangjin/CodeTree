#include <iostream>
#include <string>
using namespace std;

int main()
{
    string Arr[4];

    for (int i = 0; i < 4; ++i)
        cin >> Arr[i];

    for (int i = 3; i >= 0; --i)
        cout << Arr[i] << "\n";

    return 0;
}