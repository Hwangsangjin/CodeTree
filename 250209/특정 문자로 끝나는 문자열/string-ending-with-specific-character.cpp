#include <iostream>
#include <string>
using namespace std;

int main()
{
    string Arr[10];

    for (int i = 0; i < 10; ++i)
        cin >> Arr[i];
    
    char C;
    cin >> C;

    bool bFound = false;

    for (int i = 0; i < 10; ++i)
    {
        if (Arr[i].back() == C)
        {
            cout << Arr[i] << "\n";
            bFound = true;
        }
    }

    if (!bFound)
        cout << "None";

    return 0;
}