#include <iostream>
using namespace std;

int main()
{
    string Str;
    cin >> Str;

    Str[1] = 'a';
    Str[Str.length() - 2] = 'a';

    cout << Str;
    return 0;
}