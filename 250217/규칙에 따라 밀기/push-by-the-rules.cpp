#include <iostream>
#include <string>
using namespace std;

int main()
{
    string Str, Command;
    cin >> Str >> Command;

    size_t Length = Str.length();

    for (int i = 0; i < Command.length(); ++i)
    {
        if (Command[i] == 'L')
            Str = Str.substr(1, Length) + Str.substr(0, 1);
        else
            Str = Str.substr(Length - 1, 1) + Str.substr(0, Length - 1);
    }

    cout << Str;
    return 0;
}