#include <iostream>
#include <string>
using namespace std;

int main()
{
    string Str;
    cin >> Str;

    cout << Str << "\n";

    size_t Length = Str.length();
    for (size_t i = 0; i < Length; ++i)
    {
        Str = Str.substr(Length - 1, 1) + Str.substr(0, Length - 1);
        cout << Str << "\n";
    }

    return 0;
}