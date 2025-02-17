#include <iostream>
#include <string>
using namespace std;

int main()
{
    string Str;
    cin >> Str;
    cout << Str.substr(1, Str.length() - 1) + Str.substr(0, 1);
    return 0;
}