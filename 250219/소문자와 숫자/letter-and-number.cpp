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
            cout << (char)tolower(Str[i]);

        if (isdigit(Str[i]))
            cout << Str[i];
    }

    return 0;
}