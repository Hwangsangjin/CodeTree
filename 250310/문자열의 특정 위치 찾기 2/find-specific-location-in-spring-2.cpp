#include <iostream>
using namespace std;

int main()
{
    string Str[] =
    {
        "apple",
        "banana",
        "grape",
        "blueberry",
        "orange"
    };

    char C;
    cin >> C;

    int Cnt = 0;

    for (int i = 0; i < 5; ++i)
    {
        if (Str[i][2] == C || Str[i][3] == C)
        {
            cout << Str[i] << "\n";
            ++Cnt;
        }
    }

    cout << Cnt;
    return 0;
}