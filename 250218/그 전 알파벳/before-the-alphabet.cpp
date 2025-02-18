#include <iostream>
using namespace std;

int main()
{
    char Input;
    cin >> Input;

    if (Input == 'a')
        cout << 'z';
    else
        cout << (char)(Input - 1);

    return 0;
}