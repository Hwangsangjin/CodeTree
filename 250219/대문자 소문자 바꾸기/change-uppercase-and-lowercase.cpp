#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string Str;
    cin >> Str;

    for (const auto& C : Str)
    {
        if (isupper(C))
            cout << (char)tolower(C);
        else if (islower(C))
            cout << (char)toupper(C);
    }

    return 0;
}