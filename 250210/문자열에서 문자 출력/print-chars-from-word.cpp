#include <iostream>
#include <string>
using namespace std;

int main()
{
    string Str;
    cin >> Str;

    for (int i = 0; Str[i] != '\0'; ++i)
        cout << Str[i] << "\n";

    return 0;
}