#include <iostream>
#include <string>
using namespace std;

int main()
{
    string Str1, Str2, Str3;
    getline(cin, Str1);
    getline(cin, Str2);

    for (size_t i = 0; i < Str1.length(); ++i)
    {
        if (Str1[i] != ' ')
            Str3 += Str1[i];
    }

    for (size_t i = 0; i < Str2.length(); ++i)
    {
        if (Str2[i] != ' ')
            Str3 += Str2[i];
    }

    cout << Str3;
    return 0;
}