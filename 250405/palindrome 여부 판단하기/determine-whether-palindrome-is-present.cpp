#include <iostream>
#include <string>
using namespace std;

void Answer(string& Str)
{
    string Temp;

    for (int i = static_cast<int>(Str.length()) - 1; i >= 0; --i)
        Temp += Str[i];
    
    cout << (Str == Temp ? "Yes" : "No");
}

int main()
{
    string Str;
    cin >> Str;

    Answer(Str);
    return 0;
}