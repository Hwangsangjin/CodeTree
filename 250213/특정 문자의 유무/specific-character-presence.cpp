#include <iostream>
#include <string>
using namespace std;

int main()
{
    string Str;
    cin >> Str;
    std::cout << (Str.find("ee") != string::npos ? "Yes " : "No ")
              << (Str.find("ab") != string::npos ? "Yes" : "No");
    return 0;
}