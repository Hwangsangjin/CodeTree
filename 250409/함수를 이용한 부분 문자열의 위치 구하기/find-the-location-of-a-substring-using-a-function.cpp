#include <iostream>
using namespace std;

string N, M;

int Answer()
{
    int Max = N.length();
    int Min = M.length();

    for (int i = 0; i <= Max - Min; ++i)
    {
        bool bMatch = true;
        
        for (int j = 0; j < Min; ++j)
        {
            if (N[i + j] != M[j])
            {
                bMatch = false;
                break;
            }
        }

        if (bMatch)
            return i;
    }

    return -1;
}

int main()
{
    cin >> N >> M;
    cout << Answer();
    return 0;
}