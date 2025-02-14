#include <iostream>
#include <string>
using namespace std;

int main()
{
    string Str;
    cin >> Str;

    int Cnt1 = 0;
    int Cnt2 = 0;

    size_t Pos = Str.find("ee");
    while (Pos != string::npos)
    {
        ++Cnt1;
        Pos = Str.find("ee", Pos + 1);
    }

    Pos = Str.find("eb");
    while (Pos != string::npos)
    {
        ++Cnt2;
        Pos = Str.find("eb", Pos + 1);
    }

    cout << Cnt1 << " " << Cnt2;
    return 0;
}