#include <iostream>
using namespace std;

int main()
{
    string Str;
    getline(cin, Str);
    
    for (int i = 2; i < 10; ++i)
        cout << Str[i];

    return 0;
}