#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string Str;
    cin >> Str;

    for (int i = 0; i < Str.length(); ++i)
    {
        if (isalpha(Str[i]))
            cout << (char)toupper(Str[i]);
    }

    return 0;
}