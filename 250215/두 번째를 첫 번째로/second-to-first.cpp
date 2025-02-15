#include <iostream>
#include <string>
using namespace std;

int main()
{
    string Str;
    cin >> Str;

    char C = Str[1];

    for (int i = 0; i < Str.length(); ++i)
    {
        if (Str[i] == C)
            Str[i] = Str[0];
    }

    cout << Str;
    return 0;
}