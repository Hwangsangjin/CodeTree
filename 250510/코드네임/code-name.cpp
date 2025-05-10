#include <iostream>
#include <utility>
#include <string>
using namespace std;

int main()
{
    pair<string, int> Pair[5];

    for(int i = 0; i < 5; ++i)
    {
        string CodeName;
        int Score;
        cin >> CodeName >> Score;

        Pair[i] = make_pair(CodeName, Score);
    }

    int MinIndex = 0;

    for (int i = 1; i < 5; ++i)
    {
        if (Pair[i].second < Pair[MinIndex].second)
            MinIndex = i;
    }

    cout << Pair[MinIndex].first << " " << Pair[MinIndex].second;
    return 0;
}