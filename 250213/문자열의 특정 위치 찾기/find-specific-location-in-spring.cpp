#include <iostream>
#include <string>
using namespace std;

int main()
{
    string Str;
    char C;
    cin >> Str >> C;
    
    size_t Index = Str.find(C);
    cout << (Index != string::npos ? to_string(Index) : "No");
    return 0;
}