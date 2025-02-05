#include <iostream>
#include <string>
using namespace std;

int main()
{
    string Arr[] =
    {
        "apple",
        "banana",
        "grape",
        "blueberry",
        "orange"
    };

    char C;
    cin >> C;

    int Count = 0;

    for (int i = 0; i < 5; ++i)
    {
        if (Arr[i][2] == C || Arr[i][3] == C)
        {
            cout << Arr[i] << "\n";
            ++Count;
        }
    }

    cout << Count;
    return 0;
}