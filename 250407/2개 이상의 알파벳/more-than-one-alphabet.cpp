#include <iostream>
using namespace std;

bool Answer(string Str)
{
    bool Alphabet[26] = {};
    int Cnt = 0;

    for (char C : Str)
    {
        if (isalpha(C))
        {
            int Idx = tolower(C) - 'a';
            if (!Alphabet[Idx])
            {
                Alphabet[Idx] = true;
                ++Cnt;

                if (Cnt >= 2)
                    return true;
            }
        }
    }

    return false;
}

int main()
{
    string Str;
    cin >> Str;

    cout << (Answer(Str) ? "Yes" : "No");
    return 0;
}