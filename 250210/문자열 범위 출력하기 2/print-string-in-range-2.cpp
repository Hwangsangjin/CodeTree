#include <iostream>
#include <string>
using namespace std;

int main()
{
    string Str;
    int N;
    cin >> Str >> N;

    for (int i = Str.length() - 1; i >= Str.length() - N; --i)
        cout << Str[i];

    return 0;
}