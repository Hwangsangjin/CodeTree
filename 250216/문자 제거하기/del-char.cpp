#include <iostream>
#include <string>
using namespace std;

int main()
{
    string Str;
    cin >> Str;

    while (Str.length() > 1)
    {
        int N;
        cin >> N;

        if (N > Str.length() - 1)
            Str.pop_back();
        else
            Str.erase(N, 1);

        cout << Str << "\n";
    }

    return 0;
}