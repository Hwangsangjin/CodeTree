#include <iostream>
#include <string>
using namespace std;

int main()
{
    string Str;
    cin >> Str;

    size_t Pos = Str.find('e');

    if (Pos != string::npos)
        Str.erase(Pos, 1);

    cout << Str;
    return 0;
}