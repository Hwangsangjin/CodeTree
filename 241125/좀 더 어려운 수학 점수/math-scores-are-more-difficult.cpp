#include <iostream>
using namespace std;

int main()
{
    int AMat, AEng;
    int BMat, BEng;
    
    cin >> AMat >> AEng;
    cin >> BMat >> BEng;

    if (AMat > BMat || (AMat == BMat && AEng > BEng))
    {
        cout << 'A';
    }
    else
    {
        cout << 'B';
    }

    return 0;
}