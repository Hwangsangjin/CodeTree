#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string Str1, Str2;
    cin >> Str1 >> Str2;
    
    int N1 = 0, N2 = 0;

    for (const char& C : Str1)
    {
        if (isdigit(C))
            N1 = N1 * 10 + (C - '0');
    }
    

    for (const char& C : Str2)
    {
        if (isdigit(C))
            N2 = N2 * 10 + (C - '0');
    }
    
    cout << N1 + N2;
    return 0;
}