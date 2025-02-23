#include <iostream>
#include <string>
using namespace std;

int main()
{
    int N;
    string Str;
    cin >> N >> Str;

    int Cnt = 0;

    while (N--)
    {
        string Input;
        cin >> Input;

        if (Input == Str)
            ++Cnt;
    }

    cout << Cnt;
    return 0;
}