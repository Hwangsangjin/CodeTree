#include <iostream>
using namespace std;

int main()
{
    string Str1, Str2;
    cin >> Str1 >> Str2;

    size_t Len1 = Str1.length();
    size_t Len2 = Str2.length();

    if (Len1 > Len2)
        cout << Str1 << " " << Len1;
    else if (Len2 > Len1)
        cout << Str2 << " " << Len2;
    else
        cout << "same";

    return 0;
}