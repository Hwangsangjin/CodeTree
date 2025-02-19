#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string Str;
    cin >> Str;

    int Sum = 0;

    for (const auto& C : Str)
    {
        if (isdigit(C))
            Sum += stoi(string(1, C));
    }

    cout << Sum;
    return 0;
}