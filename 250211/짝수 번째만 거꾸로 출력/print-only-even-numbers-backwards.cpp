#include <iostream>
#include <string>
using namespace std;

int main()
{
    string Str;
    cin >> Str;

    for (int i = Str.length() - 1; i >= 0; --i)
    {
        if (i % 2 == 1)
            cout << Str[i];
    }

    return 0;
}