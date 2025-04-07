#include <iostream>
using namespace std;

bool Answer(string Str)
{
    for (int i = 1; i < Str.length(); ++i)
    {
        if (Str[i] != Str[0])
            return true;
    }

    return false;
}

int main()
{
    string Str;
    cin >> Str;

    cout << (Answer(Str) ? "Yes" : "No");
    return 0;
}