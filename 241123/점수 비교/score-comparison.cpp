#include <iostream>
using namespace std;

int main()
{
    int AMath, AEng;
    int BMath, BEng;
    cin >> AMath >> AEng;
    cin >> BMath >> BEng;
    cout << (AMath > BMath && AEng > BEng);
    return 0;
}