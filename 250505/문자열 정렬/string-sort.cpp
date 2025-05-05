#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string Str;
    cin >> Str;

    sort(Str.begin(), Str.end());

    cout << Str;
    return 0;
}