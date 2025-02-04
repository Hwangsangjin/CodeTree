#include <iostream>
using namespace std;

int main()
{
    string Str;
    getline(cin, Str);

    char C;
    cin >> C;

    int Count = 0;

    for (int i = 0; i < Str.size(); ++i)
    {
        if (Str[i] == C)
            ++Count;
    }
    
    cout << Count;
    return 0;
}