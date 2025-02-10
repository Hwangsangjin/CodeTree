#include <iostream>
#include <string>
using namespace std;

int main()
{
    string Str;
    int N;
    cin >> Str >> N;

    int Length = Str.length();

    if (Length >= N)
    {
        for (int i = Length - 1; i >= Length - N; --i)
            cout << Str[i];
    }
    else
    {
        for (int i = Length - 1; i >= 0; --i)
            cout << Str[i];
    }

    return 0;
}