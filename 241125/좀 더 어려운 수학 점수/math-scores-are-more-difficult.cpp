#include <iostream>
using namespace std;

int main()
{
    int AMat, AEng;
    cin >> AMat >> AEng;

    int BMat, BEng;
    cin >> BMat >> BEng;

    if (AMat > BMat)
    {
        cout << 'A';
    }
    else if (AMat == BMat)
    {
        if (AEng > BEng)
        {
            cout << 'A';
        }
        else
        {
            cout << 'B';
        }
    }
    else
    {
        cout << 'B';
    }

    return 0;
}