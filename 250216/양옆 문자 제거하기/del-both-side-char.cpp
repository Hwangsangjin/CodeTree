#include <iostream>
#include <string>
using namespace std;

int main()
{
    string Str;
    cin >> Str;

    Str.erase(1, 1);
    Str.erase(Str.length() - 2, 1);

    cout << Str;
    return 0;
}